#include "lua_native_binding.hpp"
#include "game/rdr/Natives.hpp"

namespace Lua::native
{
	static bool LUA_NATIVE_QUEUE_EVENT_QUEUE_IS_EMPTY_(Hash hash)
	{
		auto retval = (bool)QUEUE::_EVENT_QUEUE_IS_EMPTY(hash);
		return retval;
	}

	static void LUA_NATIVE_QUEUE_EVENT_QUEUE_POP_(Hash hash)
	{
		QUEUE::_EVENT_QUEUE_POP(hash);
	}

	void init_native_binding_QUEUE(sol::state& L)
	{
		auto QUEUE = L["QUEUE"].get_or_create<sol::table>();
		QUEUE.set_function("EVENT_QUEUE_IS_EMPTY_", LUA_NATIVE_QUEUE_EVENT_QUEUE_IS_EMPTY_);
		QUEUE.set_function("EVENT_QUEUE_POP_", LUA_NATIVE_QUEUE_EVENT_QUEUE_POP_);
	}
}
