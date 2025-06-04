#include "module.hpp"
#include "../LuaModule.hpp"

namespace Lua::module
{
	// Allow Lua scripts to reload themselves. Always wanted this in OG YimMenu
	//nvm. this is broken. I hate cpp.

	void bind(sol::state& state)
	{
		sol::usertype<YimMenu::LuaModule> luaModuleType = state.new_usertype<YimMenu::LuaModule>("LuaModule", sol::no_constructor);

		luaModuleType["Reload"]  = &YimMenu::LuaModule::Reload;
		luaModuleType["Disable"] = &YimMenu::LuaModule::SetDisabled;
	}
}
