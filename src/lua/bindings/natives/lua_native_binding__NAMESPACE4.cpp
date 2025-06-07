#include "lua_native_binding.hpp"
#include "game/rdr/Natives.hpp"

namespace Lua::native
{
	static void LUA_NATIVE__NAMESPACE4_REPORT_PLAYER_BAD_SPORT_BEHAVIOR_(uintptr_t gamerHandle, int badSportBehaviorType)
	{
		_NAMESPACE4::_REPORT_PLAYER_BAD_SPORT_BEHAVIOR((Any*)gamerHandle, badSportBehaviorType);
	}

	void init_native_binding__NAMESPACE4(sol::state& L)
	{
		auto _NAMESPACE4 = L["_NAMESPACE4"].get_or_create<sol::table>();
		_NAMESPACE4.set_function("REPORT_PLAYER_BAD_SPORT_BEHAVIOR_", LUA_NATIVE__NAMESPACE4_REPORT_PLAYER_BAD_SPORT_BEHAVIOR_);
	}
}
