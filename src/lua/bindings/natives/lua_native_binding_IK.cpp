#include "lua_native_binding.hpp"
#include "game/rdr/Natives.hpp"

namespace Lua::native
{
	static void LUA_NATIVE_IK_INVERSE_KINEMATICS_REQUEST_LOOK_AT_(Ped ped, uintptr_t args)
	{
		IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(ped, (Any*)args);
	}

	static void LUA_NATIVE_IK_0x0B9F7A01EC50448D_(Ped ped, uintptr_t args)
	{
		IK::_0x0B9F7A01EC50448D(ped, (Any*)args);
	}

	static void LUA_NATIVE_IK_INVERSE_KINEMATICS_SET_DISABLED_FOR_PED_(Ped ped, int p1, bool p2)
	{
		IK::_INVERSE_KINEMATICS_SET_DISABLED_FOR_PED(ped, p1, p2);
	}

	static bool LUA_NATIVE_IK_0x6098139150DCC745_(Ped ped, int p1)
	{
		auto retval = (bool)IK::_0x6098139150DCC745(ped, p1);
		return retval;
	}

	static void LUA_NATIVE_IK_0x873C792E07A32C8B_(Ped ped1, Ped ped2)
	{
		IK::_0x873C792E07A32C8B(ped1, ped2);
	}

	void init_native_binding_IK(sol::state& L)
	{
		auto IK = L["IK"].get_or_create<sol::table>();
		IK.set_function("INVERSE_KINEMATICS_REQUEST_LOOK_AT_", LUA_NATIVE_IK_INVERSE_KINEMATICS_REQUEST_LOOK_AT_);
		IK.set_function("0x0B9F7A01EC50448D_", LUA_NATIVE_IK_0x0B9F7A01EC50448D_);
		IK.set_function("INVERSE_KINEMATICS_SET_DISABLED_FOR_PED_", LUA_NATIVE_IK_INVERSE_KINEMATICS_SET_DISABLED_FOR_PED_);
		IK.set_function("0x6098139150DCC745_", LUA_NATIVE_IK_0x6098139150DCC745_);
		IK.set_function("0x873C792E07A32C8B_", LUA_NATIVE_IK_0x873C792E07A32C8B_);
	}
}
