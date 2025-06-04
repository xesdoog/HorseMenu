#pragma once

#include "LuaModule.hpp"

#include <chrono>
#include <memory>
#include <unordered_map>
#include <filesystem>


namespace YimMenu
{
	class LuaManager
	{
	public:
		explicit LuaManager(const std::filesystem::path& scriptsFolder);

		void LoadAllModules();
		void UnloadAllModules();
		void ReloadAllModules();
		void ReloadChangedModules();
		void Update();
		void EnableAllModules();
		void DisableAllModules();

		void EnableModule(const std::string& name);
		void DisableModule(const std::string& name);
		void ForEachModule(const std::function<void(std::shared_ptr<LuaModule>)>& fn);

		const auto& GetScriptsFolder() const
		{
			return m_scriptsFolder;
		}

		const auto& GetEnabledModules() const
		{
			return m_enabledModules;
		}
		const auto& GetDisabledModules() const
		{
			return m_disabledModules;
		}

		void SetAutoReload(bool toggle);

		~LuaManager();

	private:
		std::unordered_map<std::string, std::shared_ptr<LuaModule>> m_enabledModules;
		std::unordered_map<std::string, std::shared_ptr<LuaModule>> m_disabledModules;
		std::unordered_map<std::string, std::filesystem::file_time_type> m_failedModules;

		std::filesystem::path m_scriptsFolder;
		std::filesystem::path m_disabledFolder;

		std::chrono::high_resolution_clock::time_point m_nextReloadCheckTime;
		static constexpr std::chrono::seconds m_reloadInterval{2};

		bool m_autoReloadModules = true;
	};

	inline LuaManager* g_LuaManager;
}
