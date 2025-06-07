#include "lua_native_binding.hpp"
#include "game/rdr/Natives.hpp"

namespace Lua::native
{
	static Any LUA_NATIVE_DEBUG_0xACF9CB705BEFA8CB_()
	{
		auto retval = DEBUG::_0xACF9CB705BEFA8CB();
		return retval;
	}

	static Any LUA_NATIVE_DEBUG_0xA8D970D8A72640A6_()
	{
		auto retval = DEBUG::_0xA8D970D8A72640A6();
		return retval;
	}

	static const char* LUA_NATIVE_DEBUG_GET_GAME_VERSION_NAME()
	{
		auto retval = DEBUG::GET_GAME_VERSION_NAME();
		return retval;
	}

	void init_native_binding_DEBUG(sol::state& L)
	{
		auto DEBUG = L["DEBUG"].get_or_create<sol::table>();
		DEBUG.set_function("0xACF9CB705BEFA8CB_", LUA_NATIVE_DEBUG_0xACF9CB705BEFA8CB_);
		DEBUG.set_function("0xA8D970D8A72640A6_", LUA_NATIVE_DEBUG_0xA8D970D8A72640A6_);
		DEBUG.set_function("GET_GAME_VERSION_NAME", LUA_NATIVE_DEBUG_GET_GAME_VERSION_NAME);
	}
}
