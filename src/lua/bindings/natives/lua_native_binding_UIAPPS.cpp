#include "lua_native_binding.hpp"
#include "game/rdr/Natives.hpp"

namespace Lua::native
{
	static bool LUA_NATIVE_UIAPPS_IS_UIAPP_ACTIVE_BY_HASH(Hash appNameHash)
	{
		auto retval = (bool)UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(appNameHash);
		return retval;
	}

	static bool LUA_NATIVE_UIAPPS_IS_ANY_UIAPP_ACTIVE()
	{
		auto retval = (bool)UIAPPS::IS_ANY_UIAPP_ACTIVE();
		return retval;
	}

	static bool LUA_NATIVE_UIAPPS_IS_UIAPP_RUNNING_BY_HASH(Hash appNameHash)
	{
		auto retval = (bool)UIAPPS::IS_UIAPP_RUNNING_BY_HASH(appNameHash);
		return retval;
	}

	static bool LUA_NATIVE_UIAPPS_IS_UIAPP_RUNNING(sol::stack_object appName)
	{
		auto retval = (bool)UIAPPS::IS_UIAPP_RUNNING(appName.is<const char*>() ? appName.as<const char*>() : nullptr);
		return retval;
	}

	static bool LUA_NATIVE_UIAPPS_IS_ANY_UIAPP_RUNNING()
	{
		auto retval = (bool)UIAPPS::IS_ANY_UIAPP_RUNNING();
		return retval;
	}

	static Hash LUA_NATIVE_UIAPPS_GET_UIAPP_CURRENT_ACTIVITY_BY_HASH_(Hash appNameHash)
	{
		auto retval = UIAPPS::_GET_UIAPP_CURRENT_ACTIVITY_BY_HASH(appNameHash);
		return retval;
	}

	static void LUA_NATIVE_UIAPPS_CLOSE_UIAPP_BY_HASH_(Hash appNameHash)
	{
		UIAPPS::_CLOSE_UIAPP_BY_HASH(appNameHash);
	}

	static void LUA_NATIVE_UIAPPS_CLOSE_UIAPP_BY_HASH_IMMEDIATE_(Hash appNameHash)
	{
		UIAPPS::_CLOSE_UIAPP_BY_HASH_IMMEDIATE(appNameHash);
	}

	static void LUA_NATIVE_UIAPPS_CLOSE_UIAPP_(sol::stack_object appName)
	{
		UIAPPS::_CLOSE_UIAPP(appName.is<const char*>() ? appName.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_UIAPPS_CLOSE_UIAPP_IMMEDIATE_(sol::stack_object appName)
	{
		UIAPPS::_CLOSE_UIAPP_IMMEDIATE(appName.is<const char*>() ? appName.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_UIAPPS_CLOSE_ALL_UIAPPS_()
	{
		UIAPPS::_CLOSE_ALL_UIAPPS();
	}

	static void LUA_NATIVE_UIAPPS_CLOSE_ALL_UIAPPS_IMMEDIATE_()
	{
		UIAPPS::_CLOSE_ALL_UIAPPS_IMMEDIATE();
	}

	static int LUA_NATIVE_UIAPPS_LAUNCH_UIAPP_BY_HASH_WITH_ENTRY(Hash appNameHash, Hash entryHash)
	{
		auto retval = UIAPPS::LAUNCH_UIAPP_BY_HASH_WITH_ENTRY(appNameHash, entryHash);
		return retval;
	}

	static int LUA_NATIVE_UIAPPS_LAUNCH_UIAPP_BY_HASH(Hash appNameHash)
	{
		auto retval = UIAPPS::LAUNCH_UIAPP_BY_HASH(appNameHash);
		return retval;
	}

	static int LUA_NATIVE_UIAPPS_LAUNCH_UIAPP_WITH_ENTRY(sol::stack_object appName, sol::stack_object entry)
	{
		auto retval = UIAPPS::LAUNCH_UIAPP_WITH_ENTRY(appName.is<const char*>() ? appName.as<const char*>() : nullptr, entry.is<const char*>() ? entry.as<const char*>() : nullptr);
		return retval;
	}

	static bool LUA_NATIVE_UIAPPS_CAN_LAUNCH_UIAPP_BY_HASH_WITH_ENTRY(Hash appNameHash, Hash entryHash)
	{
		auto retval = (bool)UIAPPS::CAN_LAUNCH_UIAPP_BY_HASH_WITH_ENTRY(appNameHash, entryHash);
		return retval;
	}

	static bool LUA_NATIVE_UIAPPS_CAN_LAUNCH_UIAPP_BY_HASH(Hash appNameHash)
	{
		auto retval = (bool)UIAPPS::CAN_LAUNCH_UIAPP_BY_HASH(appNameHash);
		return retval;
	}

	static bool LUA_NATIVE_UIAPPS_REQUEST_UIAPP_TRANSITION_BY_HASH(Hash appNameHash, Hash transitionHash)
	{
		auto retval = (bool)UIAPPS::REQUEST_UIAPP_TRANSITION_BY_HASH(appNameHash, transitionHash);
		return retval;
	}

	static bool LUA_NATIVE_UIAPPS_IS_UIAPP_TRANSITIONING_BY_HASH(Hash appNameHash)
	{
		auto retval = (bool)UIAPPS::IS_UIAPP_TRANSITIONING_BY_HASH(appNameHash);
		return retval;
	}

	void init_native_binding_UIAPPS(sol::state& L)
	{
		auto UIAPPS = L["UIAPPS"].get_or_create<sol::table>();
		UIAPPS.set_function("IS_UIAPP_ACTIVE_BY_HASH", LUA_NATIVE_UIAPPS_IS_UIAPP_ACTIVE_BY_HASH);
		UIAPPS.set_function("IS_ANY_UIAPP_ACTIVE", LUA_NATIVE_UIAPPS_IS_ANY_UIAPP_ACTIVE);
		UIAPPS.set_function("IS_UIAPP_RUNNING_BY_HASH", LUA_NATIVE_UIAPPS_IS_UIAPP_RUNNING_BY_HASH);
		UIAPPS.set_function("IS_UIAPP_RUNNING", LUA_NATIVE_UIAPPS_IS_UIAPP_RUNNING);
		UIAPPS.set_function("IS_ANY_UIAPP_RUNNING", LUA_NATIVE_UIAPPS_IS_ANY_UIAPP_RUNNING);
		UIAPPS.set_function("GET_UIAPP_CURRENT_ACTIVITY_BY_HASH_", LUA_NATIVE_UIAPPS_GET_UIAPP_CURRENT_ACTIVITY_BY_HASH_);
		UIAPPS.set_function("CLOSE_UIAPP_BY_HASH_", LUA_NATIVE_UIAPPS_CLOSE_UIAPP_BY_HASH_);
		UIAPPS.set_function("CLOSE_UIAPP_BY_HASH_IMMEDIATE_", LUA_NATIVE_UIAPPS_CLOSE_UIAPP_BY_HASH_IMMEDIATE_);
		UIAPPS.set_function("CLOSE_UIAPP_", LUA_NATIVE_UIAPPS_CLOSE_UIAPP_);
		UIAPPS.set_function("CLOSE_UIAPP_IMMEDIATE_", LUA_NATIVE_UIAPPS_CLOSE_UIAPP_IMMEDIATE_);
		UIAPPS.set_function("CLOSE_ALL_UIAPPS_", LUA_NATIVE_UIAPPS_CLOSE_ALL_UIAPPS_);
		UIAPPS.set_function("CLOSE_ALL_UIAPPS_IMMEDIATE_", LUA_NATIVE_UIAPPS_CLOSE_ALL_UIAPPS_IMMEDIATE_);
		UIAPPS.set_function("LAUNCH_UIAPP_BY_HASH_WITH_ENTRY", LUA_NATIVE_UIAPPS_LAUNCH_UIAPP_BY_HASH_WITH_ENTRY);
		UIAPPS.set_function("LAUNCH_UIAPP_BY_HASH", LUA_NATIVE_UIAPPS_LAUNCH_UIAPP_BY_HASH);
		UIAPPS.set_function("LAUNCH_UIAPP_WITH_ENTRY", LUA_NATIVE_UIAPPS_LAUNCH_UIAPP_WITH_ENTRY);
		UIAPPS.set_function("CAN_LAUNCH_UIAPP_BY_HASH_WITH_ENTRY", LUA_NATIVE_UIAPPS_CAN_LAUNCH_UIAPP_BY_HASH_WITH_ENTRY);
		UIAPPS.set_function("CAN_LAUNCH_UIAPP_BY_HASH", LUA_NATIVE_UIAPPS_CAN_LAUNCH_UIAPP_BY_HASH);
		UIAPPS.set_function("REQUEST_UIAPP_TRANSITION_BY_HASH", LUA_NATIVE_UIAPPS_REQUEST_UIAPP_TRANSITION_BY_HASH);
		UIAPPS.set_function("IS_UIAPP_TRANSITIONING_BY_HASH", LUA_NATIVE_UIAPPS_IS_UIAPP_TRANSITIONING_BY_HASH);
	}
}
