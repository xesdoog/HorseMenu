#include <sol/sol.hpp>
#include "game/rdr/Natives.hpp"


namespace Lua::self
{
	static int GetPed()
	{
		return PLAYER::PLAYER_PED_ID();
	}

	static int GetPlayer()
	{
		return PLAYER::PLAYER_ID();
	}

	static int GetMount()
	{
		return PED::GET_MOUNT(PLAYER::PLAYER_PED_ID());
	}

	static int GetVehicle()
	{
		return PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
	}

	static Vector3 GetPos()
	{
		return ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0, 1);
	}

	static Vector3 GetRot()
	{
		return ENTITY::GET_ENTITY_ROTATION(PLAYER::PLAYER_PED_ID(), 2);
	}

	void bind(sol::state& state)
	{
		auto table = state["Self"].get_or_create<sol::table>();

		table["GetPed"]     = GetPed;
		table["GetPlayer"]  = GetPlayer;
		table["GetMount"]   = GetMount;
		table["GetVehicle"] = GetVehicle;
		table["GetPos"]     = GetPos;
		table["GetRot"]     = GetRot;
	}
}
