#include "lua_native_binding.hpp"
#include "game/rdr/Natives.hpp"

namespace Lua::native
{
	static void LUA_NATIVE_RECORDING_REPLAY_PREVENT_RECORDING_THIS_FRAME()
	{
		RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
	}

	void init_native_binding_RECORDING(sol::state& L)
	{
		auto RECORDING = L["RECORDING"].get_or_create<sol::table>();
		RECORDING.set_function("REPLAY_PREVENT_RECORDING_THIS_FRAME", LUA_NATIVE_RECORDING_REPLAY_PREVENT_RECORDING_THIS_FRAME);
	}
}
