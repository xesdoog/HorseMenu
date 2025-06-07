#include "lua_native_binding.hpp"
#include "game/rdr/Natives.hpp"

namespace Lua::native
{
	static bool LUA_NATIVE_VOICE_0xCCF71FCFA0070B1A_()
	{
		auto retval = (bool)VOICE::_0xCCF71FCFA0070B1A();
		return retval;
	}

	static void LUA_NATIVE_VOICE_0x79F478FF5F9F4F05_(bool enabled)
	{
		VOICE::_0x79F478FF5F9F4F05(enabled);
	}

	static bool LUA_NATIVE_VOICE_0xAA35FD9ABAB490A3_(Player player)
	{
		auto retval = (bool)VOICE::_0xAA35FD9ABAB490A3(player);
		return retval;
	}

	static bool LUA_NATIVE_VOICE_0x356135B9B10A2A82_(uintptr_t gamerHandle)
	{
		auto retval = (bool)VOICE::_0x356135B9B10A2A82((Any*)gamerHandle);
		return retval;
	}

	static bool LUA_NATIVE_VOICE_0xEF6F2A35FAAF2ED7_(Player player)
	{
		auto retval = (bool)VOICE::_0xEF6F2A35FAAF2ED7(player);
		return retval;
	}

	static bool LUA_NATIVE_VOICE_0x49623BCFC3A3D829_(Player player, bool muted)
	{
		auto retval = (bool)VOICE::_0x49623BCFC3A3D829(player, muted);
		return retval;
	}

	static bool LUA_NATIVE_VOICE_0x919AF2D93E9AA89D_(Player player)
	{
		auto retval = (bool)VOICE::_0x919AF2D93E9AA89D(player);
		return retval;
	}

	static bool LUA_NATIVE_VOICE_0x0DED260A1958A82E_(Player player)
	{
		auto retval = (bool)VOICE::_0x0DED260A1958A82E(player);
		return retval;
	}

	static bool LUA_NATIVE_VOICE_0x8E462DB1EAA9C47C_(Player player)
	{
		auto retval = (bool)VOICE::_0x8E462DB1EAA9C47C(player);
		return retval;
	}

	static float LUA_NATIVE_VOICE_0x5CA7FB7D6DE49DCC_(Player player)
	{
		auto retval = VOICE::_0x5CA7FB7D6DE49DCC(player);
		return retval;
	}

	static void LUA_NATIVE_VOICE_0x58125B691F6827D5_(float proximity)
	{
		VOICE::_0x58125B691F6827D5(proximity);
	}

	static float LUA_NATIVE_VOICE_0x2F82CAB262C8AE26_(Player player)
	{
		auto retval = VOICE::_0x2F82CAB262C8AE26(player);
		return retval;
	}

	static void LUA_NATIVE_VOICE_0x08797A8C03868CB8_(float threshold)
	{
		VOICE::_0x08797A8C03868CB8(threshold);
	}

	static void LUA_NATIVE_VOICE_0xB779F4FA19269AEC_(bool flag)
	{
		VOICE::_0xB779F4FA19269AEC(flag);
	}

	static void LUA_NATIVE_VOICE_0x1FBF7F5BA7E4BE3A_(int p0)
	{
		VOICE::_0x1FBF7F5BA7E4BE3A(p0);
	}

	static void LUA_NATIVE_VOICE_0xDC9B361CB7776673_(Player player)
	{
		VOICE::_0xDC9B361CB7776673(player);
	}

	static void LUA_NATIVE_VOICE_0xEC8703E4536A9952_()
	{
		VOICE::_0xEC8703E4536A9952();
	}

	static Any LUA_NATIVE_VOICE_0xDB622ECD3DCBE078_(Player player)
	{
		auto retval = VOICE::_0xDB622ECD3DCBE078(player);
		return retval;
	}

	static void LUA_NATIVE_VOICE_0xB6E79850B759A30E_(int teamId, bool allow)
	{
		VOICE::_0xB6E79850B759A30E(teamId, allow);
	}

	static void LUA_NATIVE_VOICE_0x4791899615D70FA2_(Player player, int p1, int p2)
	{
		VOICE::_0x4791899615D70FA2(player, p1, p2);
	}

	static void LUA_NATIVE_VOICE_0xF8938CF3984092A5_(Player player)
	{
		VOICE::_0xF8938CF3984092A5(player);
	}

	static int LUA_NATIVE_VOICE_0x767931C727DF2ED7_(Player player, int p1)
	{
		auto retval = VOICE::_0x767931C727DF2ED7(player, p1);
		return retval;
	}

	static void LUA_NATIVE_VOICE_0x1C38C3577901AF1F_()
	{
		VOICE::_0x1C38C3577901AF1F();
	}

	static void LUA_NATIVE_VOICE_0xB3E8841F6BDAF83E_()
	{
		VOICE::_0xB3E8841F6BDAF83E();
	}

	void init_native_binding_VOICE(sol::state& L)
	{
		auto VOICE = L["VOICE"].get_or_create<sol::table>();
		VOICE.set_function("0xCCF71FCFA0070B1A_", LUA_NATIVE_VOICE_0xCCF71FCFA0070B1A_);
		VOICE.set_function("0x79F478FF5F9F4F05_", LUA_NATIVE_VOICE_0x79F478FF5F9F4F05_);
		VOICE.set_function("0xAA35FD9ABAB490A3_", LUA_NATIVE_VOICE_0xAA35FD9ABAB490A3_);
		VOICE.set_function("0x356135B9B10A2A82_", LUA_NATIVE_VOICE_0x356135B9B10A2A82_);
		VOICE.set_function("0xEF6F2A35FAAF2ED7_", LUA_NATIVE_VOICE_0xEF6F2A35FAAF2ED7_);
		VOICE.set_function("0x49623BCFC3A3D829_", LUA_NATIVE_VOICE_0x49623BCFC3A3D829_);
		VOICE.set_function("0x919AF2D93E9AA89D_", LUA_NATIVE_VOICE_0x919AF2D93E9AA89D_);
		VOICE.set_function("0x0DED260A1958A82E_", LUA_NATIVE_VOICE_0x0DED260A1958A82E_);
		VOICE.set_function("0x8E462DB1EAA9C47C_", LUA_NATIVE_VOICE_0x8E462DB1EAA9C47C_);
		VOICE.set_function("0x5CA7FB7D6DE49DCC_", LUA_NATIVE_VOICE_0x5CA7FB7D6DE49DCC_);
		VOICE.set_function("0x58125B691F6827D5_", LUA_NATIVE_VOICE_0x58125B691F6827D5_);
		VOICE.set_function("0x2F82CAB262C8AE26_", LUA_NATIVE_VOICE_0x2F82CAB262C8AE26_);
		VOICE.set_function("0x08797A8C03868CB8_", LUA_NATIVE_VOICE_0x08797A8C03868CB8_);
		VOICE.set_function("0xB779F4FA19269AEC_", LUA_NATIVE_VOICE_0xB779F4FA19269AEC_);
		VOICE.set_function("0x1FBF7F5BA7E4BE3A_", LUA_NATIVE_VOICE_0x1FBF7F5BA7E4BE3A_);
		VOICE.set_function("0xDC9B361CB7776673_", LUA_NATIVE_VOICE_0xDC9B361CB7776673_);
		VOICE.set_function("0xEC8703E4536A9952_", LUA_NATIVE_VOICE_0xEC8703E4536A9952_);
		VOICE.set_function("0xDB622ECD3DCBE078_", LUA_NATIVE_VOICE_0xDB622ECD3DCBE078_);
		VOICE.set_function("0xB6E79850B759A30E_", LUA_NATIVE_VOICE_0xB6E79850B759A30E_);
		VOICE.set_function("0x4791899615D70FA2_", LUA_NATIVE_VOICE_0x4791899615D70FA2_);
		VOICE.set_function("0xF8938CF3984092A5_", LUA_NATIVE_VOICE_0xF8938CF3984092A5_);
		VOICE.set_function("0x767931C727DF2ED7_", LUA_NATIVE_VOICE_0x767931C727DF2ED7_);
		VOICE.set_function("0x1C38C3577901AF1F_", LUA_NATIVE_VOICE_0x1C38C3577901AF1F_);
		VOICE.set_function("0xB3E8841F6BDAF83E_", LUA_NATIVE_VOICE_0xB3E8841F6BDAF83E_);
	}
}
