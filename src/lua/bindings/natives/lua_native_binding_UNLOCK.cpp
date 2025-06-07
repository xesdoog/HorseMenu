#include "lua_native_binding.hpp"
#include "game/rdr/Natives.hpp"

namespace Lua::native
{
	static bool LUA_NATIVE_UNLOCK_UNLOCK_IS_UNLOCK_FLAG_SET_(Hash unlockHash, int flag)
	{
		auto retval = (bool)UNLOCK::_UNLOCK_IS_UNLOCK_FLAG_SET(unlockHash, flag);
		return retval;
	}

	static bool LUA_NATIVE_UNLOCK_UNLOCK_IS_UNLOCKED(Hash unlockHash)
	{
		auto retval = (bool)UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash);
		return retval;
	}

	static void LUA_NATIVE_UNLOCK_UNLOCK_SET_UNLOCKED(Hash unlockHash, bool toggle)
	{
		UNLOCK::UNLOCK_SET_UNLOCKED(unlockHash, toggle);
	}

	static bool LUA_NATIVE_UNLOCK_UNLOCK_IS_VISIBLE(Hash unlockHash)
	{
		auto retval = (bool)UNLOCK::UNLOCK_IS_VISIBLE(unlockHash);
		return retval;
	}

	static void LUA_NATIVE_UNLOCK_UNLOCK_SET_VISIBLE(Hash unlockHash, bool toggle)
	{
		UNLOCK::UNLOCK_SET_VISIBLE(unlockHash, toggle);
	}

	static bool LUA_NATIVE_UNLOCK_UNLOCK_IS_NEW_(Hash unlockHash)
	{
		auto retval = (bool)UNLOCK::_UNLOCK_IS_NEW(unlockHash);
		return retval;
	}

	static void LUA_NATIVE_UNLOCK_UNLOCK_SET_NEW_(Hash unlockHash, bool toggle)
	{
		UNLOCK::_UNLOCK_SET_NEW(unlockHash, toggle);
	}

	static bool LUA_NATIVE_UNLOCK_UNLOCK_IS_LOOTABLE_(Hash unlockHash)
	{
		auto retval = (bool)UNLOCK::_UNLOCK_IS_LOOTABLE(unlockHash);
		return retval;
	}

	static void LUA_NATIVE_UNLOCK_UNLOCK_GET_ITEM_ROLE_UNLOCK_INFO_(Hash unlockHash, uintptr_t outData)
	{
		UNLOCK::_UNLOCK_GET_ITEM_ROLE_UNLOCK_INFO(unlockHash, (Any*)outData);
	}

	void init_native_binding_UNLOCK(sol::state& L)
	{
		auto UNLOCK = L["UNLOCK"].get_or_create<sol::table>();
		UNLOCK.set_function("UNLOCK_IS_UNLOCK_FLAG_SET_", LUA_NATIVE_UNLOCK_UNLOCK_IS_UNLOCK_FLAG_SET_);
		UNLOCK.set_function("UNLOCK_IS_UNLOCKED", LUA_NATIVE_UNLOCK_UNLOCK_IS_UNLOCKED);
		UNLOCK.set_function("UNLOCK_SET_UNLOCKED", LUA_NATIVE_UNLOCK_UNLOCK_SET_UNLOCKED);
		UNLOCK.set_function("UNLOCK_IS_VISIBLE", LUA_NATIVE_UNLOCK_UNLOCK_IS_VISIBLE);
		UNLOCK.set_function("UNLOCK_SET_VISIBLE", LUA_NATIVE_UNLOCK_UNLOCK_SET_VISIBLE);
		UNLOCK.set_function("UNLOCK_IS_NEW_", LUA_NATIVE_UNLOCK_UNLOCK_IS_NEW_);
		UNLOCK.set_function("UNLOCK_SET_NEW_", LUA_NATIVE_UNLOCK_UNLOCK_SET_NEW_);
		UNLOCK.set_function("UNLOCK_IS_LOOTABLE_", LUA_NATIVE_UNLOCK_UNLOCK_IS_LOOTABLE_);
		UNLOCK.set_function("UNLOCK_GET_ITEM_ROLE_UNLOCK_INFO_", LUA_NATIVE_UNLOCK_UNLOCK_GET_ITEM_ROLE_UNLOCK_INFO_);
	}
}
