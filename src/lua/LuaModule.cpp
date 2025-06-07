#include <fstream>
#include <iostream>

#include "LuaModule.hpp"
#include "bindings/log.hpp"
#include "bindings/self.hpp"
#include "bindings/script.hpp"
#include "bindings/natives/lua_native_binding.hpp"


namespace YimMenu
{
	// https://sol2.readthedocs.io/en/latest/exceptions.html
	int ExceptionHandler(lua_State* L, sol::optional<const std::exception&> maybe_exception, sol::string_view description)
	{
		// L is the lua state, which you can wrap in a state_view if necessary
		// maybe_exception will contain exception, if it exists
		// description will either be the what() of the exception or a description saying that we hit the general-case catch(...)
		if (maybe_exception)
		{
			const std::exception& ex = *maybe_exception;
			LOG(FATAL) << ex.what();
		}
		else
		{
			LOG(FATAL) << description;
		}

		Logger::FlushQueue();

		// you must push 1 element onto the stack to be
		// transported through as the error object in Lua
		// note that Lua -- and 99.5% of all Lua users and libraries -- expects a string
		// so we push a single string (in our case, the description of the error)
		return sol::stack::push(L, description);
	}

	inline void PanicHandler(sol::optional<std::string> maybe_msg)
	{
		LOG(FATAL) << "Lua is in a panic state and will now abort the application";

		if (maybe_msg)
		{
			const std::string& msg = maybe_msg.value();
			LOG(FATAL) << "error message: " << msg;
		}

		Logger::FlushQueue();

		// When this function exits, Lua will exhibit default behavior and abort
	}

	static int TracebackErrorHandler(lua_State* L)
	{
		std::string msg = "An unknown error has triggered the error handler";
		sol::optional<sol::string_view> maybetopmsg = sol::stack::unqualified_check_get<sol::string_view>(L, 1, &sol::no_panic);

		if (maybetopmsg)
		{
			const sol::string_view& topmsg = maybetopmsg.value();
			msg.assign(topmsg.data(), topmsg.size());
		}

		luaL_traceback(L, L, msg.c_str(), 1);
		sol::optional<sol::string_view> maybetraceback = sol::stack::unqualified_check_get<sol::string_view>(L, -1, &sol::no_panic);

		if (maybetraceback)
		{
			const sol::string_view& traceback = maybetraceback.value();
			msg.assign(traceback.data(), traceback.size());
		}

		LOG(FATAL) << msg;
		return sol::stack::push(L, msg);
	}

	LuaModule::LuaModule(const std::filesystem::path& modulePath, const std::filesystem::path& scriptsPath) :
	    m_state(),
	    m_path(modulePath),
	    m_scriptsPath(scriptsPath),
	    m_name(modulePath.filename().string()),
	    m_lastWriteTime(std::filesystem::last_write_time(modulePath))
	{
	}

	LuaModule::~LuaModule()
	{
		CleanupScripts();
	}

	bool LuaModule::Load()
	{
		if (m_disabled)
		{
			return false;
		}

		m_state.open_libraries(
			sol::lib::base,
			sol::lib::package,
			sol::lib::coroutine,
			sol::lib::string,
			sol::lib::os,
			sol::lib::math,
			sol::lib::table,
			sol::lib::io,
			sol::lib::utf8
		);

		InitAPI();

		m_state.set("!module_name", m_name);
		m_state.set("!this", this);
		m_state.set_exception_handler(ExceptionHandler);
		m_state.set_panic(sol::c_call<decltype(&PanicHandler), &PanicHandler>);

		lua_CFunction TracebackFunc = sol::c_call<decltype(&TracebackErrorHandler), &TracebackErrorHandler>;
		sol::protected_function::set_default_handler(sol::object(m_state.lua_state(), sol::in_place, TracebackFunc));

		m_lastWriteTime = std::filesystem::last_write_time(m_path);

		try
		{
			auto result = m_state.script_file(m_path.string());
			if (!result.valid())
			{
				sol::error err = result;
				LOG(FATAL) << "[LuaModule]" << m_name << " failed to load: " << err.what() << "\n";
				return false;
			}

			LOG(INFO) << "Loaded " << m_name;
			return true;
		}
		catch (const std::exception& e)
		{
			LOG(FATAL) << "[LuaModule] Exception while loading " << m_name << ": " << e.what() << '\n';
			return false;
		}
	}

	bool LuaModule::IsValid() const
	{
		return &m_state != nullptr;
	}

	void LuaModule::SetDisabled(bool toggle)
	{
		m_disabled = toggle;
	}

	bool LuaModule::IsDisabled() const
	{
		return m_disabled;
	}

	const std::string& LuaModule::GetName() const
	{
		return m_name;
	}

	const std::filesystem::path& LuaModule::GetPath() const
	{
		return m_path;
	}

	std::chrono::file_clock::time_point LuaModule::GetLastWriteTime() const
	{
		return m_lastWriteTime;
	}

	void LuaModule::SetLuaRequireFolder()
	{
		std::string scripts_search_path = m_scriptsPath.string() + "/?.lua;";

		for (const auto& entry : std::filesystem::recursive_directory_iterator(m_scriptsPath, std::filesystem::directory_options::skip_permission_denied))
		{
			if (!entry.is_directory())
				continue;

			scripts_search_path += entry.path().string() + "/?.lua;";
		}

		scripts_search_path.pop_back();

		m_state["package"]["path"] = scripts_search_path;
	}

	void LuaModule::InitAPI()
	{
		SetLuaRequireFolder();
		Lua::log::bind(m_state);
		Lua::self::bind(m_state);
		Lua::script::bind(m_state);
		Lua::native::init_native_binding(m_state);
	}

	void LuaModule::TickScripts()
	{
		std::lock_guard guard(m_registeredScriptsMutex);

		for (auto it = m_registeredScripts.begin(); it != m_registeredScripts.end();)
		{
			Script* script = *it;

			if (script && script->m_Done)
			{
				ScriptMgr::RemoveScript(script);
				it = m_registeredScripts.erase(it);
			}
			else
			{
				++it;
			}
		}
	}

	void LuaModule::CleanupScripts()
	{
		std::lock_guard guard(m_registeredScriptsMutex);

		for (auto& script : m_registeredScripts)
		{
			if (script && script->m_Callback && !script->m_Done)
			{
				script->m_Done = true;
				ScriptMgr::RemoveScript(script);
			}
		}

		m_registeredScripts.clear();
	}
}
