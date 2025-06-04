#include <sol/sol.hpp>

namespace Lua::log
{
	static std::string get_module_name(sol::this_state s)
	{
		sol::state_view view(s);
		if (view["!module_name"].valid())
			return view["!module_name"];
		return "[Unknown]";
	}

	// https://github.com/Mr-X-GTA/YimMenu/blob/master/src/lua/bindings/log.cpp
	// Lua API: Table
	// Name: log
	// Table containing functions for printing to console / log file.

	// Lua API: Function
	// Table: log
	// Name: debug
	// Param: data: string
	// Logs a debug message.
	static void debug(const std::string& data, sol::this_state state)
	{
		LOG(VERBOSE) << "[" << get_module_name(state) << "]: " << data;
	}

	// Lua API: Function
	// Table: log
	// Name: info
	// Param: data: string
	// Logs an informational message.
	static void info(const std::string& data, sol::this_state state)
	{
		LOG(INFO) << "[" << get_module_name(state) << "]: " << data;
	}

	// Lua API: Function
	// Table: log
	// Name: warning
	// Param: data: string
	// Logs a warning message.
	static void warning(const std::string& data, sol::this_state state)
	{
		LOG(WARNING) << "[" << get_module_name(state) << "]: " << data;
	}

	// Lua API: Function
	// Table: log
	// Name: error
	// Param: data: string
	// Logs an error message.
	static void error(const std::string& data, sol::this_state state)
	{
		LOG(FATAL) << "[" << get_module_name(state) << "]: " << data;
	}

	void bind(sol::state& state)
	{
		auto ns       = state["log"].get_or_create<sol::table>();
		ns["info"]    = info;
		ns["warning"] = warning;
		ns["debug"]   = debug;
		ns["error"]   = error;
	}
}
