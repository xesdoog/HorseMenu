#pragma once

#include "core/filemgr/FileMgr.hpp"

#include <chrono>
#include <filesystem>
#include <sol/sol.hpp>
#include <unordered_map>

namespace YimMenu
{
	class LuaAPI
	{
	public:
		static LuaAPI& Get();

		LuaAPI(const LuaAPI&) = delete;
		LuaAPI(LuaAPI&&) = delete;
		LuaAPI& operator=(const LuaAPI&) = delete;
		LuaAPI& operator=(LuaAPI&&) = delete;

		void Initialize();

		void LoadScript(const std::string& scriptPath);
		void ReloadScript(const std::string& scriptPath);
		void LoadAllScripts();
		void ReloadAllScripts();
		void EnableAllScripts();
		void DisableAllScripts();
		void EnableScript(const std::string& scriptPath);
		void DisableScript(const std::string& scriptPath);
		void Update();

		bool IsScriptEnabled(const std::string& path) const;

		void SetAutoReload(bool enabled);
		bool IsAutoReloadEnabled() const;

		const auto& GetLoadedScripts() const
		{
			return m_loadedScripts;
		}
		const auto& GetDisabledScripts() const
		{
			return m_disabledScripts;
		}

	private:
		LuaAPI(const std::filesystem::path& scriptsFolder);

		std::filesystem::path m_ScriptsFolder;
		std::unique_ptr<sol::state> m_lua;

		std::unordered_map<std::string, std::filesystem::file_time_type> m_loadedScripts;
		std::unordered_map<std::string, std::filesystem::path> m_disabledScripts;

		bool m_autoReload = false;
		bool TryLoadScript(const std::string& scriptPath);
	};
}
