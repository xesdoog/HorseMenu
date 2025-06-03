#include "LuaAPI.hpp"

namespace fs = std::filesystem;

namespace YimMenu
{
	LuaAPI& LuaAPI::Get()
	{
		static LuaAPI instance(FileMgr::GetProjectFolder("scripts"));
		return instance;
	}

	LuaAPI::LuaAPI(const std::filesystem::path& scriptsFolder) : m_ScriptsFolder(scriptsFolder)
	{
		std::filesystem::create_directories(m_ScriptsFolder);
	}

	void LuaAPI::Initialize()
	{
		m_lua = std::make_unique<sol::state>();
		m_lua->open_libraries(sol::lib::base, sol::lib::math);

		m_lua->set_function("log", [this](const std::string& message) {
			LOG(INFO) << message.c_str();
		});

		LOG(INFO) << "Lua API initialized.";
		LoadAllScripts();
	}

	bool LuaAPI::TryLoadScript(const std::string& scriptPath)
	{
		if (!fs::exists(scriptPath))
		{
			return false;
		}

		std::string filename = std::filesystem::path(scriptPath).filename().string();
		try
		{
			std::ifstream testFile(scriptPath);
			if (!testFile.good())
			{
				LOG(FATAL) << filename << " is unreadable!";
				return false;
			}
			testFile.close();

			auto result = m_lua->script_file(scriptPath);
			if (!result.valid())
			{
				sol::error err = result;
				return false;
			}

			LOG(INFO) << "[Lua] Loaded " << filename;
			m_loadedScripts[scriptPath] = fs::last_write_time(scriptPath);
			return true;
		}
		catch (const std::exception& e)
		{
			LOG(FATAL) << "[Lua] " << filename << " failed to load: " << e.what();
			return false;
		}
	}

	void LuaAPI::LoadScript(const std::string& scriptPath)
	{
		TryLoadScript(scriptPath);
	}

	void LuaAPI::ReloadScript(const std::string& scriptPath)
	{
		if (m_loadedScripts.find(scriptPath) != m_loadedScripts.end())
		{
			if (!TryLoadScript(scriptPath))
			{
				return;
			}
		}
	}

	void LuaAPI::LoadAllScripts()
	{
		m_loadedScripts.clear();
		m_disabledScripts.clear();

		if (!fs::exists(m_ScriptsFolder))
		{
			LOG(WARNING) << "Scripts folder not found! ";
			return;
		}

		for (const auto& entry : fs::directory_iterator(m_ScriptsFolder))
		{
			if (entry.is_regular_file() && entry.path().extension() == ".lua")
			{
				LoadScript(entry.path().string());
			}
		}

		auto disabledFolder = m_ScriptsFolder / "disabled";
		if (fs::exists(disabledFolder))
		{
			for (const auto& entry : fs::directory_iterator(disabledFolder))
			{
				if (entry.is_regular_file() && entry.path().extension() == ".lua")
				{
					m_disabledScripts[entry.path().filename().string()] = entry.path();
				}
			}
		}
	}

	void LuaAPI::ReloadAllScripts()
	{
		for (const auto& [scriptPath, _] : m_loadedScripts)
		{
			ReloadScript(scriptPath);
		}
	}

	void LuaAPI::DisableScript(const std::string& scriptPath)
	{
		auto filename = fs::path(scriptPath).filename();
		auto src = m_ScriptsFolder / filename;
		auto dest = m_ScriptsFolder / "disabled" / filename;

		if (!fs::exists(src))
		{
			LOG(WARNING) << src.string() << " does not exist in the scripts folder!";
			return;
		}

		std::error_code e;
		fs::create_directories(dest.parent_path());
		fs::rename(src, dest, e);
		if (e)
		{
			LOG(FATAL) << "Failed to disable script: " << e.message();
			return;
		}

		m_loadedScripts.erase(src.string());
		LOG(INFO) << "Disabled " << filename.string();
	}


	void LuaAPI::EnableScript(const std::string& scriptPath)
	{
		auto filename = fs::path(scriptPath).filename();
		auto disabledPath = m_ScriptsFolder / "disabled" / filename;
		auto enabledPath = m_ScriptsFolder / filename;

		if (!fs::exists(disabledPath))
		{
			LOG(WARNING) << disabledPath.string() << " does not exist in the disabled folder!";
			return;
		}

		std::error_code e;
		fs::rename(disabledPath, enabledPath, e);
		if (e)
		{
			LOG(FATAL) << "Failed to enable script: " << e.message();
			return;
		}

		LoadScript(enabledPath.string());
	}

	void LuaAPI::DisableAllScripts()
	{
		for (const auto& [scriptPath, _] : m_loadedScripts)
		{
			DisableScript(scriptPath);
		}
	}

	void LuaAPI::EnableAllScripts()
	{
		for (const auto& [scriptPath, _] : m_loadedScripts)
		{
			EnableScript(scriptPath);
		}
	}

	bool LuaAPI::IsScriptEnabled(const std::string& path) const
	{
		return m_loadedScripts.find(path) != m_loadedScripts.end();
	}

	void LuaAPI::SetAutoReload(bool enabled)
	{
		m_autoReload = enabled;
	}

	bool LuaAPI::IsAutoReloadEnabled() const
	{
		return m_autoReload;
	}

    void LuaAPI::Update()
	{
		if (!IsAutoReloadEnabled())
			return;

		for (auto it = m_loadedScripts.begin(); it != m_loadedScripts.end();)
		{
			const auto& scriptPath = it->first;

			if (!IsScriptEnabled(scriptPath))
				++it;
				continue;

			if (!fs::exists(scriptPath))
			{
				it = m_loadedScripts.erase(it);
			}
			else
			{
				auto currentWriteTime = fs::last_write_time(scriptPath);
				if (currentWriteTime != it->second)
				{
					ReloadScript(scriptPath);
					it->second = currentWriteTime;
				}
				++it;
			}
		}
	}
}
