#include "LuaManager.hpp"

#include <filesystem>
#include <iostream>


namespace YimMenu
{
	LuaManager::LuaManager(const std::filesystem::path& scriptsFolder) :
	    m_scriptsFolder(scriptsFolder),
	    m_disabledFolder(scriptsFolder / "disabled"),
	    m_nextReloadCheckTime(std::chrono::high_resolution_clock::now())
	{
		std::filesystem::create_directories(m_scriptsFolder);
		std::filesystem::create_directories(m_disabledFolder);
		// LoadAllModules();
	}

	LuaManager::~LuaManager()
	{
		UnloadAllModules();
		g_LuaManager = nullptr;
	}

	void LuaManager::LoadAllModules()
	{
		m_enabledModules.clear();
		m_disabledModules.clear();

		for (const auto& entry : std::filesystem::directory_iterator(m_scriptsFolder))
		{
			if (entry.path().extension() == ".lua")
			{
				auto module = std::make_shared<LuaModule>(entry.path(), m_scriptsFolder);
				if (module->Load())
				{
					m_enabledModules[module->GetName()] = module;
				}
				else
				{
					m_failedModules[module->GetName()] = std::filesystem::last_write_time(entry.path());
				}
			}
		}

		for (const auto& entry : std::filesystem::directory_iterator(m_disabledFolder))
		{
			if (entry.path().extension() == ".lua")
			{
				auto module = std::make_shared<LuaModule>(entry.path(), m_scriptsFolder);
				module->SetDisabled(true);
				m_disabledModules[module->GetName()] = module;
			}
		}
	}

	void LuaManager::UnloadAllModules()
	{
		{
			for (auto& [_, module] : m_enabledModules)
				module.reset();
			m_enabledModules.clear();
		}
		{
			for (auto& [_, module] : m_disabledModules)
				module.reset();
			m_disabledModules.clear();
		}

		m_failedModules.clear();
	}

	void LuaManager::SetAutoReload(bool toggle)
	{
		m_autoReloadModules = toggle;
	}

	void LuaManager::ReloadChangedModules()
	{
		for (auto& [name, module] : m_enabledModules)
		{
			auto currentTime = std::filesystem::last_write_time(module->GetPath());
			if (currentTime != module->GetLastWriteTime())
			{
				module->Reload();
			}
		}

		for (auto it = m_failedModules.begin(); it != m_failedModules.end();)
		{
			auto& name = it->first;
			auto& lastKnownTime = it->second;
			auto fullPath = m_scriptsFolder / name;

			if (!std::filesystem::exists(fullPath))
			{
				it = m_failedModules.erase(it);
				continue;
			}

			auto currentTime = std::filesystem::last_write_time(fullPath);
			if (currentTime != lastKnownTime)
			{
				auto module = std::make_shared<LuaModule>(fullPath, m_scriptsFolder);
				if (module->Load())
				{
					m_enabledModules[name] = module;
					it = m_failedModules.erase(it);
					continue;
				}
				else
				{
					it->second = currentTime;
				}
			}
			++it;
		}
	}

	void LuaManager::ReloadAllModules()
	{
		for (auto& [_, module] : m_enabledModules)
			module->Reload();
	}

	void LuaManager::EnableModule(const std::string& name)
	{
		auto it = m_disabledModules.find(name);
		if (it == m_disabledModules.end())
			return;

		auto& module = it->second;
		auto newPath = m_scriptsFolder / module->GetPath().filename();
		std::filesystem::rename(module->GetPath(), newPath);

		module = std::make_shared<LuaModule>(newPath, m_scriptsFolder);
		if (module->Load())
		{
			m_enabledModules[name] = module;
			m_disabledModules.erase(it);
		}
	}

	void LuaManager::EnableAllModules()
	{
		for (const auto& [name, _] : m_disabledModules)
			EnableModule(name);
	}

	void LuaManager::DisableModule(const std::string& name)
	{
		auto it = m_enabledModules.find(name);
		if (it == m_enabledModules.end())
			return;

		auto& module = it->second;
		auto newPath = m_disabledFolder / module->GetPath().filename();
		std::filesystem::rename(module->GetPath(), newPath);

		module = std::make_shared<LuaModule>(newPath, m_scriptsFolder);
		module->SetDisabled(true);
		m_disabledModules[name] = module;
		m_enabledModules.erase(it);
	}

	void LuaManager::DisableAllModules()
	{
		for (const auto& [name, _] : m_enabledModules)
			DisableModule(name);
	}

	void LuaManager::ForEachModule(const std::function<void(std::shared_ptr<LuaModule>)>& fn)
	{
		for (auto& [_, module] : m_enabledModules)
			fn(module);

		for (auto& [_, module] : m_disabledModules)
			fn(module);
	}

	void LuaManager::Update()
	{
		if (m_autoReloadModules)
		{
			auto now = std::chrono::high_resolution_clock::now();
			if (now >= m_nextReloadCheckTime)
			{
				ReloadChangedModules();
				m_nextReloadCheckTime = now + m_reloadInterval;
			}
		}
	}
}
