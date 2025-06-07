#include "lua_native_binding.hpp"
#include "game/rdr/Natives.hpp"

namespace Lua::native
{
	static const char* LUA_NATIVE_UIPINNING_UIPINNING_GET_TOOLTIP_TEXT_(Hash hash)
	{
		auto retval = UIPINNING::_UIPINNING_GET_TOOLTIP_TEXT(hash);
		return retval;
	}

	void init_native_binding_UIPINNING(sol::state& L)
	{
		auto UIPINNING = L["UIPINNING"].get_or_create<sol::table>();
		UIPINNING.set_function("UIPINNING_GET_TOOLTIP_TEXT_", LUA_NATIVE_UIPINNING_UIPINNING_GET_TOOLTIP_TEXT_);
	}
}
