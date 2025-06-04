#pragma once

#include <chrono>
#include <filesystem>
#include <memory>
#include <sol/sol.hpp>


namespace YimMenu
{
	class LuaModule
	{
		sol::state m_state;
		std::filesystem::path m_path;
		std::filesystem::path m_scriptsPath;
		std::string m_name;
		bool m_disabled = false;

	public:
		explicit LuaModule(const std::filesystem::path& modulePath, const std::filesystem::path& scriptsPath);

		bool Load();
		bool Reload();
		bool IsValid() const;
		bool IsDisabled() const;

		void SetDisabled(bool toggle);
		void InitAPI();

		~LuaModule();

		const std::string& GetName() const;
		const std::filesystem::path& GetPath() const;

		std::chrono::file_clock::time_point GetLastWriteTime() const;

	private:
		void SetLuaRequireFolder();
		std::chrono::file_clock::time_point m_lastWriteTime;
	};
}
