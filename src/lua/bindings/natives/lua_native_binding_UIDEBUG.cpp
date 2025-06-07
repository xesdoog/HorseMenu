#include "lua_native_binding.hpp"
#include "game/rdr/Natives.hpp"

namespace Lua::native
{
	static void LUA_NATIVE_UIDEBUG_BG_DISPLAY_TEXT_(sol::stack_object text, float x, float y)
	{
		UIDEBUG::_BG_DISPLAY_TEXT(text.is<const char*>() ? text.as<const char*>() : nullptr, x, y);
	}

	static void LUA_NATIVE_UIDEBUG_BG_SET_TEXT_SCALE_(float scaleX, float scaleY)
	{
		UIDEBUG::_BG_SET_TEXT_SCALE(scaleX, scaleY);
	}

	static void LUA_NATIVE_UIDEBUG_BG_SET_TEXT_COLOR_(int red, int green, int blue, int alpha)
	{
		UIDEBUG::_BG_SET_TEXT_COLOR(red, green, blue, alpha);
	}

	void init_native_binding_UIDEBUG(sol::state& L)
	{
		auto UIDEBUG = L["UIDEBUG"].get_or_create<sol::table>();
		UIDEBUG.set_function("BG_DISPLAY_TEXT_", LUA_NATIVE_UIDEBUG_BG_DISPLAY_TEXT_);
		UIDEBUG.set_function("BG_SET_TEXT_SCALE_", LUA_NATIVE_UIDEBUG_BG_SET_TEXT_SCALE_);
		UIDEBUG.set_function("BG_SET_TEXT_COLOR_", LUA_NATIVE_UIDEBUG_BG_SET_TEXT_COLOR_);
	}
}
