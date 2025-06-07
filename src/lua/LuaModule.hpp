#pragma once

#include <chrono>
#include <filesystem>
#include <memory>
#include <sol/sol.hpp>
#include <game/backend/ScriptMgr.hpp>


namespace YimMenu
{
	class LuaModule
	{
		sol::state m_state;
		std::filesystem::path m_path;
		std::filesystem::path m_scriptsPath;
		std::string m_name;
		std::mutex m_registeredScriptsMutex;
		bool m_disabled = false;

	public:
		explicit LuaModule(const std::filesystem::path& modulePath, const std::filesystem::path& scriptsPath);

		bool Load();
		bool IsValid() const;
		bool IsDisabled() const;

		void SetDisabled(bool toggle);
		void InitAPI();
		void TickScripts();
		void CleanupScripts();

		~LuaModule();

		const std::string& GetName() const;
		const std::filesystem::path& GetPath() const;

		std::chrono::file_clock::time_point GetLastWriteTime() const;
		std::vector<Script*> m_registeredScripts;

	private:
		void SetLuaRequireFolder();
		std::chrono::file_clock::time_point m_lastWriteTime;
	};
}
