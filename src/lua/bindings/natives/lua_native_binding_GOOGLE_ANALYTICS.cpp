#include "lua_native_binding.hpp"
#include "game/rdr/Natives.hpp"

namespace Lua::native
{
	static void LUA_NATIVE_GOOGLE_ANALYTICS_GOOGLE_ANALYTICS_PUSH_PAGE_(sol::stack_object pageName)
	{
		GOOGLE_ANALYTICS::_GOOGLE_ANALYTICS_PUSH_PAGE(pageName.is<const char*>() ? pageName.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_GOOGLE_ANALYTICS_GOOGLE_ANALYTICS_POP_PAGE_(sol::stack_object pageName)
	{
		GOOGLE_ANALYTICS::_GOOGLE_ANALYTICS_POP_PAGE(pageName.is<const char*>() ? pageName.as<const char*>() : nullptr);
	}

	static bool LUA_NATIVE_GOOGLE_ANALYTICS_GOOGLE_ANALYTICS_START_EVENT_(sol::stack_object eventCategory, sol::stack_object eventAction, sol::stack_object eventLabel, int eventValue)
	{
		auto retval = (bool)GOOGLE_ANALYTICS::_GOOGLE_ANALYTICS_START_EVENT(eventCategory.is<const char*>() ? eventCategory.as<const char*>() : nullptr, eventAction.is<const char*>() ? eventAction.as<const char*>() : nullptr, eventLabel.is<const char*>() ? eventLabel.as<const char*>() : nullptr, eventValue);
		return retval;
	}

	static bool LUA_NATIVE_GOOGLE_ANALYTICS_GOOGLE_ANALYTICS_END_EVENT_()
	{
		auto retval = (bool)GOOGLE_ANALYTICS::_GOOGLE_ANALYTICS_END_EVENT();
		return retval;
	}

	void init_native_binding_GOOGLE_ANALYTICS(sol::state& L)
	{
		auto GOOGLE_ANALYTICS = L["GOOGLE_ANALYTICS"].get_or_create<sol::table>();
		GOOGLE_ANALYTICS.set_function("GOOGLE_ANALYTICS_PUSH_PAGE_", LUA_NATIVE_GOOGLE_ANALYTICS_GOOGLE_ANALYTICS_PUSH_PAGE_);
		GOOGLE_ANALYTICS.set_function("GOOGLE_ANALYTICS_POP_PAGE_", LUA_NATIVE_GOOGLE_ANALYTICS_GOOGLE_ANALYTICS_POP_PAGE_);
		GOOGLE_ANALYTICS.set_function("GOOGLE_ANALYTICS_START_EVENT_", LUA_NATIVE_GOOGLE_ANALYTICS_GOOGLE_ANALYTICS_START_EVENT_);
		GOOGLE_ANALYTICS.set_function("GOOGLE_ANALYTICS_END_EVENT_", LUA_NATIVE_GOOGLE_ANALYTICS_GOOGLE_ANALYTICS_END_EVENT_);
	}
}
