#include "lua_native_binding.hpp"
#include "game/rdr/Natives.hpp"

namespace Lua::native
{
	static Hash LUA_NATIVE_ZONE_GET_MAP_ZONE_AT_COORDS_(float x, float y, float z, int type)
	{
		auto retval = ZONE::_GET_MAP_ZONE_AT_COORDS(x, y, z, type);
		return retval;
	}

	static Hash LUA_NATIVE_ZONE_GET_WATER_MAP_ZONE_AT_COORDS_(float x, float y, float z)
	{
		auto retval = ZONE::_GET_WATER_MAP_ZONE_AT_COORDS(x, y, z);
		return retval;
	}

	void init_native_binding_ZONE(sol::state& L)
	{
		auto ZONE = L["ZONE"].get_or_create<sol::table>();
		ZONE.set_function("GET_MAP_ZONE_AT_COORDS_", LUA_NATIVE_ZONE_GET_MAP_ZONE_AT_COORDS_);
		ZONE.set_function("GET_WATER_MAP_ZONE_AT_COORDS_", LUA_NATIVE_ZONE_GET_WATER_MAP_ZONE_AT_COORDS_);
	}
}
