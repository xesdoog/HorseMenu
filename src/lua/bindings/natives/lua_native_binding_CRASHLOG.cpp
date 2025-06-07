#include "lua_native_binding.hpp"
#include "game/rdr/Natives.hpp"

namespace Lua::native
{
	static void LUA_NATIVE_CRASHLOG_0x0FD3ECF9D0C8655F_(sol::stack_object p0)
	{
		CRASHLOG::_0x0FD3ECF9D0C8655F(p0.is<const char*>() ? p0.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_CRASHLOG_0xCA0BAC376C541978_(sol::stack_object p0)
	{
		CRASHLOG::_0xCA0BAC376C541978(p0.is<const char*>() ? p0.as<const char*>() : nullptr);
	}

	static bool LUA_NATIVE_CRASHLOG_0x3A66F1963B223F61_(sol::stack_object p0)
	{
		auto retval = (bool)CRASHLOG::_0x3A66F1963B223F61(p0.is<const char*>() ? p0.as<const char*>() : nullptr);
		return retval;
	}

	static bool LUA_NATIVE_CRASHLOG_0x7C680FF55617F82F_()
	{
		auto retval = (bool)CRASHLOG::_0x7C680FF55617F82F();
		return retval;
	}

	static bool LUA_NATIVE_CRASHLOG_0xD8E3D22AA4F0E0A5_(sol::stack_object p0)
	{
		auto retval = (bool)CRASHLOG::_0xD8E3D22AA4F0E0A5(p0.is<const char*>() ? p0.as<const char*>() : nullptr);
		return retval;
	}

	static bool LUA_NATIVE_CRASHLOG_0xA67F0B039D9CD513_(bool p0)
	{
		auto retval = (bool)CRASHLOG::_0xA67F0B039D9CD513(p0);
		return retval;
	}

	static bool LUA_NATIVE_CRASHLOG_0xE72E234B30DA7B7A_(int p0)
	{
		auto retval = (bool)CRASHLOG::_0xE72E234B30DA7B7A(p0);
		return retval;
	}

	static bool LUA_NATIVE_CRASHLOG_0x87F005C969EF1563_(float p0)
	{
		auto retval = (bool)CRASHLOG::_0x87F005C969EF1563(p0);
		return retval;
	}

	static bool LUA_NATIVE_CRASHLOG_0x23CCAB8F40B9CBEE_(float x, float y, float z)
	{
		auto retval = (bool)CRASHLOG::_0x23CCAB8F40B9CBEE(x, y, z);
		return retval;
	}

	static bool LUA_NATIVE_CRASHLOG_0xF0D545C1EEAD614A_()
	{
		auto retval = (bool)CRASHLOG::_0xF0D545C1EEAD614A();
		return retval;
	}

	static bool LUA_NATIVE_CRASHLOG_0x33C1D63E55FA4284_(sol::stack_object p0)
	{
		auto retval = (bool)CRASHLOG::_0x33C1D63E55FA4284(p0.is<const char*>() ? p0.as<const char*>() : nullptr);
		return retval;
	}

	static void LUA_NATIVE_CRASHLOG_0x4E42CA5BCD45444A_()
	{
		CRASHLOG::_0x4E42CA5BCD45444A();
	}

	static void LUA_NATIVE_CRASHLOG_0xDA05310EA94DC8C6_(sol::stack_object p0, sol::stack_object p1)
	{
		CRASHLOG::_0xDA05310EA94DC8C6(p0.is<const char*>() ? p0.as<const char*>() : nullptr, p1.is<const char*>() ? p1.as<const char*>() : nullptr);
	}

	void init_native_binding_CRASHLOG(sol::state& L)
	{
		auto CRASHLOG = L["CRASHLOG"].get_or_create<sol::table>();
		CRASHLOG.set_function("0x0FD3ECF9D0C8655F_", LUA_NATIVE_CRASHLOG_0x0FD3ECF9D0C8655F_);
		CRASHLOG.set_function("0xCA0BAC376C541978_", LUA_NATIVE_CRASHLOG_0xCA0BAC376C541978_);
		CRASHLOG.set_function("0x3A66F1963B223F61_", LUA_NATIVE_CRASHLOG_0x3A66F1963B223F61_);
		CRASHLOG.set_function("0x7C680FF55617F82F_", LUA_NATIVE_CRASHLOG_0x7C680FF55617F82F_);
		CRASHLOG.set_function("0xD8E3D22AA4F0E0A5_", LUA_NATIVE_CRASHLOG_0xD8E3D22AA4F0E0A5_);
		CRASHLOG.set_function("0xA67F0B039D9CD513_", LUA_NATIVE_CRASHLOG_0xA67F0B039D9CD513_);
		CRASHLOG.set_function("0xE72E234B30DA7B7A_", LUA_NATIVE_CRASHLOG_0xE72E234B30DA7B7A_);
		CRASHLOG.set_function("0x87F005C969EF1563_", LUA_NATIVE_CRASHLOG_0x87F005C969EF1563_);
		CRASHLOG.set_function("0x23CCAB8F40B9CBEE_", LUA_NATIVE_CRASHLOG_0x23CCAB8F40B9CBEE_);
		CRASHLOG.set_function("0xF0D545C1EEAD614A_", LUA_NATIVE_CRASHLOG_0xF0D545C1EEAD614A_);
		CRASHLOG.set_function("0x33C1D63E55FA4284_", LUA_NATIVE_CRASHLOG_0x33C1D63E55FA4284_);
		CRASHLOG.set_function("0x4E42CA5BCD45444A_", LUA_NATIVE_CRASHLOG_0x4E42CA5BCD45444A_);
		CRASHLOG.set_function("0xDA05310EA94DC8C6_", LUA_NATIVE_CRASHLOG_0xDA05310EA94DC8C6_);
	}
}
