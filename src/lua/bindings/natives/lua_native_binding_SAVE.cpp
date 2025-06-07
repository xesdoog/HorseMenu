#include "lua_native_binding.hpp"
#include "game/rdr/Natives.hpp"

namespace Lua::native
{
	static void LUA_NATIVE_SAVE_0x4FB5869E2B37FC00_()
	{
		SAVE::_0x4FB5869E2B37FC00();
	}

	static bool LUA_NATIVE_SAVE_SAVEGAME_SAVE_SP(Hash savegameType)
	{
		auto retval = (bool)SAVE::SAVEGAME_SAVE_SP(savegameType);
		return retval;
	}

	static bool LUA_NATIVE_SAVE_SAVEGAME_SAVE_MP(Hash savegameType)
	{
		auto retval = (bool)SAVE::SAVEGAME_SAVE_MP(savegameType);
		return retval;
	}

	static bool LUA_NATIVE_SAVE_SAVEGAME_IS_SAVE_PENDING()
	{
		auto retval = (bool)SAVE::SAVEGAME_IS_SAVE_PENDING();
		return retval;
	}

	static Any LUA_NATIVE_SAVE_0x1431540BCA1A1BD2_()
	{
		auto retval = SAVE::_0x1431540BCA1A1BD2();
		return retval;
	}

	static Any LUA_NATIVE_SAVE_0xA7ECEBAFBAF997A5_(Hash savegameType)
	{
		auto retval = SAVE::_0xA7ECEBAFBAF997A5(savegameType);
		return retval;
	}

	static void LUA_NATIVE_SAVE_0xED4B0C1057892B2E_(Any p0, Any p1, Any p2, Any p3)
	{
		SAVE::_0xED4B0C1057892B2E(p0, p1, p2, p3);
	}

	static void LUA_NATIVE_SAVE_0x9BB83C4DD7BE0802_(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		SAVE::_0x9BB83C4DD7BE0802(p0, p1, p2, p3, p4);
	}

	static void LUA_NATIVE_SAVE_0xE8346E62FD7FB962_()
	{
		SAVE::_0xE8346E62FD7FB962();
	}

	static void LUA_NATIVE_SAVE_0xC0ABF784590798A9_(Any p0)
	{
		SAVE::_0xC0ABF784590798A9(p0);
	}

	static Any LUA_NATIVE_SAVE_0xB00CE33465B5406D_(Any p0, Any p1)
	{
		auto retval = SAVE::_0xB00CE33465B5406D(p0, p1);
		return retval;
	}

	static void LUA_NATIVE_SAVE_SAVEGAME_GET_INT_2_(uintptr_t p0, sol::stack_object variableName)
	{
		SAVE::_SAVEGAME_GET_INT_2((Any*)p0, variableName.is<const char*>() ? variableName.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_SAVE_SAVEGAME_GET_INT_(uintptr_t p0, sol::stack_object variableName)
	{
		SAVE::_SAVEGAME_GET_INT((Any*)p0, variableName.is<const char*>() ? variableName.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_SAVE_SAVEGAME_GET_INT_3_(uintptr_t p0, sol::stack_object variableName)
	{
		SAVE::_SAVEGAME_GET_INT_3((Any*)p0, variableName.is<const char*>() ? variableName.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_SAVE_SAVEGAME_GET_FLOAT_(uintptr_t p0, sol::stack_object variableName)
	{
		SAVE::_SAVEGAME_GET_FLOAT((Any*)p0, variableName.is<const char*>() ? variableName.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_SAVE_SAVEGAME_GET_BOOL_(uintptr_t p0, sol::stack_object variableName)
	{
		SAVE::_SAVEGAME_GET_BOOL((Any*)p0, variableName.is<const char*>() ? variableName.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_SAVE_SAVEGAME_GET_TEXT_LABEL_23_(uintptr_t p0, sol::stack_object variableName)
	{
		SAVE::_SAVEGAME_GET_TEXT_LABEL_23((Any*)p0, variableName.is<const char*>() ? variableName.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_SAVE_SAVEGAME_GET_TEXT_LABEL_31_(uintptr_t p0, sol::stack_object variableName)
	{
		SAVE::_SAVEGAME_GET_TEXT_LABEL_31((Any*)p0, variableName.is<const char*>() ? variableName.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_SAVE_SAVEGAME_GET_TEXT_LABEL_63_(uintptr_t p0, sol::stack_object variableName)
	{
		SAVE::_SAVEGAME_GET_TEXT_LABEL_63((Any*)p0, variableName.is<const char*>() ? variableName.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_SAVE_0x443174C20B8B9E7F_(Any p0, Any p1, Any p2)
	{
		SAVE::_0x443174C20B8B9E7F(p0, p1, p2);
	}

	static void LUA_NATIVE_SAVE_0x8E8FFB9E4AD051D2_(Any p0, Any p1, Any p2, Any p3)
	{
		SAVE::_0x8E8FFB9E4AD051D2(p0, p1, p2, p3);
	}

	static void LUA_NATIVE_SAVE_0xE0B45E983BFC0768_()
	{
		SAVE::_0xE0B45E983BFC0768();
	}

	static void LUA_NATIVE_SAVE_0x81F4E92BE3958364_(Any p0, Any p1, Any p2)
	{
		SAVE::_0x81F4E92BE3958364(p0, p1, p2);
	}

	static void LUA_NATIVE_SAVE_0xA844FEB5C22C2C74_()
	{
		SAVE::_0xA844FEB5C22C2C74();
	}

	void init_native_binding_SAVE(sol::state& L)
	{
		auto SAVE = L["SAVE"].get_or_create<sol::table>();
		SAVE.set_function("0x4FB5869E2B37FC00_", LUA_NATIVE_SAVE_0x4FB5869E2B37FC00_);
		SAVE.set_function("SAVEGAME_SAVE_SP", LUA_NATIVE_SAVE_SAVEGAME_SAVE_SP);
		SAVE.set_function("SAVEGAME_SAVE_MP", LUA_NATIVE_SAVE_SAVEGAME_SAVE_MP);
		SAVE.set_function("SAVEGAME_IS_SAVE_PENDING", LUA_NATIVE_SAVE_SAVEGAME_IS_SAVE_PENDING);
		SAVE.set_function("0x1431540BCA1A1BD2_", LUA_NATIVE_SAVE_0x1431540BCA1A1BD2_);
		SAVE.set_function("0xA7ECEBAFBAF997A5_", LUA_NATIVE_SAVE_0xA7ECEBAFBAF997A5_);
		SAVE.set_function("0xED4B0C1057892B2E_", LUA_NATIVE_SAVE_0xED4B0C1057892B2E_);
		SAVE.set_function("0x9BB83C4DD7BE0802_", LUA_NATIVE_SAVE_0x9BB83C4DD7BE0802_);
		SAVE.set_function("0xE8346E62FD7FB962_", LUA_NATIVE_SAVE_0xE8346E62FD7FB962_);
		SAVE.set_function("0xC0ABF784590798A9_", LUA_NATIVE_SAVE_0xC0ABF784590798A9_);
		SAVE.set_function("0xB00CE33465B5406D_", LUA_NATIVE_SAVE_0xB00CE33465B5406D_);
		SAVE.set_function("SAVEGAME_GET_INT_2_", LUA_NATIVE_SAVE_SAVEGAME_GET_INT_2_);
		SAVE.set_function("SAVEGAME_GET_INT_", LUA_NATIVE_SAVE_SAVEGAME_GET_INT_);
		SAVE.set_function("SAVEGAME_GET_INT_3_", LUA_NATIVE_SAVE_SAVEGAME_GET_INT_3_);
		SAVE.set_function("SAVEGAME_GET_FLOAT_", LUA_NATIVE_SAVE_SAVEGAME_GET_FLOAT_);
		SAVE.set_function("SAVEGAME_GET_BOOL_", LUA_NATIVE_SAVE_SAVEGAME_GET_BOOL_);
		SAVE.set_function("SAVEGAME_GET_TEXT_LABEL_23_", LUA_NATIVE_SAVE_SAVEGAME_GET_TEXT_LABEL_23_);
		SAVE.set_function("SAVEGAME_GET_TEXT_LABEL_31_", LUA_NATIVE_SAVE_SAVEGAME_GET_TEXT_LABEL_31_);
		SAVE.set_function("SAVEGAME_GET_TEXT_LABEL_63_", LUA_NATIVE_SAVE_SAVEGAME_GET_TEXT_LABEL_63_);
		SAVE.set_function("0x443174C20B8B9E7F_", LUA_NATIVE_SAVE_0x443174C20B8B9E7F_);
		SAVE.set_function("0x8E8FFB9E4AD051D2_", LUA_NATIVE_SAVE_0x8E8FFB9E4AD051D2_);
		SAVE.set_function("0xE0B45E983BFC0768_", LUA_NATIVE_SAVE_0xE0B45E983BFC0768_);
		SAVE.set_function("0x81F4E92BE3958364_", LUA_NATIVE_SAVE_0x81F4E92BE3958364_);
		SAVE.set_function("0xA844FEB5C22C2C74_", LUA_NATIVE_SAVE_0xA844FEB5C22C2C74_);
	}
}
