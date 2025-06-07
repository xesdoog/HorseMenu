#include <sol/sol.hpp>

#include "script.hpp"
#include "game/backend/ScriptMgr.hpp"
#include "game/rdr/Scripts.hpp"
#include "lua/LuaManager.hpp"
#include "lua/LuaModule.hpp"
#include "core/memory/Pattern.hpp"

using namespace YimMenu;

namespace Lua::script
{
	static script_util dummy_script_util;

	int script_util::yield()
	{
		return 0;
	}

	int script_util::sleep(int ms)
	{
		return ms;
	}

	static void register_looped(const std::string& name, sol::protected_function func_, sol::this_state state)
	{
		LuaModule* module = sol::state_view(state)["!this"];
		auto script = std::make_unique<Script>([func_, state]() mutable {
			sol::thread t = sol::thread::create(state);
			sol::coroutine co = sol::coroutine(t.state(), func_);

			while (g_Running)
			{
				auto res = co(dummy_script_util);

				if (!res.valid())
				{
					g_LuaManager->HandleError(res, res.lua_state());
					break;
				}

				int sleep_ms = 0;

				if (res.return_count() > 0 && res[0].is<int>())
					sleep_ms = res[0];

				if (co.runnable())
				{
					ScriptMgr::Yield(std::chrono::milliseconds(sleep_ms));
				}
				else
				{
					ScriptMgr::Yield();
				}
			}
		});

		Script* rawPtr = script.get();
		ScriptMgr::AddScript(std::move(script));
		module->m_registeredScripts.push_back(rawPtr);
	}

	static void run_in_fiber(sol::protected_function func_, sol::this_state state)
	{
		LuaModule* module = sol::state_view(state)["!this"];
		auto script = std::make_unique<Script>([func_, state]() mutable {
			sol::thread t = sol::thread::create(state);
			sol::coroutine co = sol::coroutine(t.state(), func_);

			while (g_Running)
			{
				auto res = co(dummy_script_util);

				if (!res.valid())
				{
					g_LuaManager->HandleError(res, res.lua_state());
					break;
				}

				int sleep_ms = 0;

				if (res.return_count() > 0 && res[0].is<int>())
					sleep_ms = res[0];

				if (co.runnable())
				{
					ScriptMgr::Yield(std::chrono::milliseconds(sleep_ms));
				}
				else
				{
					break;
				}
			}
		});

		Script* rawPtr = script.get();
		ScriptMgr::AddScript(std::move(script));
		module->m_registeredScripts.push_back(rawPtr);
	}

	static bool is_active(const std::string& script_name)
	{
		if (auto script = Scripts::FindScriptThread(Joaat(script_name)))
			return true;

		return false;
	}

	static void execute_as_script(const std::string& script_name, sol::protected_function func)
	{
		auto thread = Scripts::FindScriptThread(Joaat(script_name));
		Scripts::RunAsScript(thread, func);
	}

	void bind(sol::state& state)
	{
		auto ns                 = state["script"].get_or_create<sol::table>();
		ns["register_looped"]   = register_looped;
		ns["run_in_fiber"]      = run_in_fiber;
		ns["is_active"]         = is_active;
		ns["execute_as_script"] = execute_as_script;

		auto usertype = state.new_usertype<script_util>("script_util");
		usertype["yield"] = sol::yielding(&script_util::yield);
		usertype["sleep"] = sol::yielding(&script_util::sleep);
	}
}
