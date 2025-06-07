#include "lua_native_binding.hpp"
#include "game/rdr/Natives.hpp"

namespace Lua::native
{
	static void LUA_NATIVE_COMPAPP_0xB6FD96420C0126A1_(Hash p0, bool p1)
	{
		COMPAPP::_0xB6FD96420C0126A1(p0, p1);
	}

	static void LUA_NATIVE_COMPAPP_0x74BCCEB233AD95B2_(Hash p0, Hash p1)
	{
		COMPAPP::_0x74BCCEB233AD95B2(p0, p1);
	}

	static void LUA_NATIVE_COMPAPP_0x29C733459A9011EB_(Hash p0, sol::stack_object p1)
	{
		COMPAPP::_0x29C733459A9011EB(p0, p1.is<const char*>() ? p1.as<const char*>() : nullptr);
	}

	static bool LUA_NATIVE_COMPAPP_0x7AF1BB4504EA5ED9_()
	{
		auto retval = (bool)COMPAPP::_0x7AF1BB4504EA5ED9();
		return retval;
	}

	static void LUA_NATIVE_COMPAPP_0xCCB4635A071FB62D_()
	{
		COMPAPP::_0xCCB4635A071FB62D();
	}

	void init_native_binding_COMPAPP(sol::state& L)
	{
		auto COMPAPP = L["COMPAPP"].get_or_create<sol::table>();
		COMPAPP.set_function("0xB6FD96420C0126A1_", LUA_NATIVE_COMPAPP_0xB6FD96420C0126A1_);
		COMPAPP.set_function("0x74BCCEB233AD95B2_", LUA_NATIVE_COMPAPP_0x74BCCEB233AD95B2_);
		COMPAPP.set_function("0x29C733459A9011EB_", LUA_NATIVE_COMPAPP_0x29C733459A9011EB_);
		COMPAPP.set_function("0x7AF1BB4504EA5ED9_", LUA_NATIVE_COMPAPP_0x7AF1BB4504EA5ED9_);
		COMPAPP.set_function("0xCCB4635A071FB62D_", LUA_NATIVE_COMPAPP_0xCCB4635A071FB62D_);
	}
}
