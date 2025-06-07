#include "lua_native_binding.hpp"
#include "game/rdr/Natives.hpp"

namespace Lua::native
{
	static void LUA_NATIVE_BRAIN_REGISTER_OBJECT_SCRIPT_BRAIN(sol::stack_object pScriptName, Hash ObjectModelHashKey, int PercentageChance, float fActivationRange, int ObjectGroupingID, int SetToWhichThisBrainBelongs)
	{
		BRAIN::REGISTER_OBJECT_SCRIPT_BRAIN(pScriptName.is<const char*>() ? pScriptName.as<const char*>() : nullptr, ObjectModelHashKey, PercentageChance, fActivationRange, ObjectGroupingID, SetToWhichThisBrainBelongs);
	}

	static int LUA_NATIVE_BRAIN_START_PRELOADED_SCRIPT_BRAIN_(Entity entity, sol::stack_object scriptName, int scriptStackSize, bool p3)
	{
		auto retval = BRAIN::_START_PRELOADED_SCRIPT_BRAIN(entity, scriptName.is<const char*>() ? scriptName.as<const char*>() : nullptr, scriptStackSize, p3);
		return retval;
	}

	static int LUA_NATIVE_BRAIN_START_SCRIPT_BRAIN_(Entity entity, sol::stack_object scriptName, int p2, uintptr_t p3, int p4, bool p5)
	{
		auto retval = BRAIN::_START_SCRIPT_BRAIN(entity, scriptName.is<const char*>() ? scriptName.as<const char*>() : nullptr, p2, (Any*)p3, p4, p5);
		return retval;
	}

	static void LUA_NATIVE_BRAIN_REMOVE_SCRIPT_BRAIN_ENTITY_(Entity entity)
	{
		BRAIN::_REMOVE_SCRIPT_BRAIN_ENTITY(entity);
	}

	static Entity LUA_NATIVE_BRAIN_GET_SCRIPT_BRAIN_ENTITY_()
	{
		auto retval = BRAIN::_GET_SCRIPT_BRAIN_ENTITY();
		return retval;
	}

	static void LUA_NATIVE_BRAIN_0xA6AC35DB4A7957A8_(int flag)
	{
		BRAIN::_0xA6AC35DB4A7957A8(flag);
	}

	static void LUA_NATIVE_BRAIN_0x4AA5EA1EDFB25786_(int flag)
	{
		BRAIN::_0x4AA5EA1EDFB25786(flag);
	}

	static void LUA_NATIVE_BRAIN_ENABLE_SCRIPT_BRAIN_SET(int set)
	{
		BRAIN::ENABLE_SCRIPT_BRAIN_SET(set);
	}

	static void LUA_NATIVE_BRAIN_DISABLE_SCRIPT_BRAIN_SET(int set)
	{
		BRAIN::DISABLE_SCRIPT_BRAIN_SET(set);
	}

	static void LUA_NATIVE_BRAIN_REACTIVATE_ALL_OBJECT_BRAINS_THAT_ARE_WAITING_TILL_OUT_OF_RANGE()
	{
		BRAIN::REACTIVATE_ALL_OBJECT_BRAINS_THAT_ARE_WAITING_TILL_OUT_OF_RANGE();
	}

	static void LUA_NATIVE_BRAIN_REACTIVATE_NAMED_OBJECT_BRAINS_WAITING_TILL_OUT_OF_RANGE(sol::stack_object pScriptName)
	{
		BRAIN::REACTIVATE_NAMED_OBJECT_BRAINS_WAITING_TILL_OUT_OF_RANGE(pScriptName.is<const char*>() ? pScriptName.as<const char*>() : nullptr);
	}

	void init_native_binding_BRAIN(sol::state& L)
	{
		auto BRAIN = L["BRAIN"].get_or_create<sol::table>();
		BRAIN.set_function("REGISTER_OBJECT_SCRIPT_BRAIN", LUA_NATIVE_BRAIN_REGISTER_OBJECT_SCRIPT_BRAIN);
		BRAIN.set_function("START_PRELOADED_SCRIPT_BRAIN_", LUA_NATIVE_BRAIN_START_PRELOADED_SCRIPT_BRAIN_);
		BRAIN.set_function("START_SCRIPT_BRAIN_", LUA_NATIVE_BRAIN_START_SCRIPT_BRAIN_);
		BRAIN.set_function("REMOVE_SCRIPT_BRAIN_ENTITY_", LUA_NATIVE_BRAIN_REMOVE_SCRIPT_BRAIN_ENTITY_);
		BRAIN.set_function("GET_SCRIPT_BRAIN_ENTITY_", LUA_NATIVE_BRAIN_GET_SCRIPT_BRAIN_ENTITY_);
		BRAIN.set_function("0xA6AC35DB4A7957A8_", LUA_NATIVE_BRAIN_0xA6AC35DB4A7957A8_);
		BRAIN.set_function("0x4AA5EA1EDFB25786_", LUA_NATIVE_BRAIN_0x4AA5EA1EDFB25786_);
		BRAIN.set_function("ENABLE_SCRIPT_BRAIN_SET", LUA_NATIVE_BRAIN_ENABLE_SCRIPT_BRAIN_SET);
		BRAIN.set_function("DISABLE_SCRIPT_BRAIN_SET", LUA_NATIVE_BRAIN_DISABLE_SCRIPT_BRAIN_SET);
		BRAIN.set_function("REACTIVATE_ALL_OBJECT_BRAINS_THAT_ARE_WAITING_TILL_OUT_OF_RANGE", LUA_NATIVE_BRAIN_REACTIVATE_ALL_OBJECT_BRAINS_THAT_ARE_WAITING_TILL_OUT_OF_RANGE);
		BRAIN.set_function("REACTIVATE_NAMED_OBJECT_BRAINS_WAITING_TILL_OUT_OF_RANGE", LUA_NATIVE_BRAIN_REACTIVATE_NAMED_OBJECT_BRAINS_WAITING_TILL_OUT_OF_RANGE);
	}
}
