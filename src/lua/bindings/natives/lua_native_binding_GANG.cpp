#include "lua_native_binding.hpp"
#include "game/rdr/Natives.hpp"

namespace Lua::native
{
	static bool LUA_NATIVE_GANG_NETWORK_IS_GANG_ID_VALID(Any gangId)
	{
		auto retval = (bool)GANG::NETWORK_IS_GANG_ID_VALID(gangId);
		return retval;
	}

	static bool LUA_NATIVE_GANG_NETWORK_IS_GANG_IN_SESSION(Any gangId)
	{
		auto retval = (bool)GANG::NETWORK_IS_GANG_IN_SESSION(gangId);
		return retval;
	}

	static bool LUA_NATIVE_GANG_NETWORK_IS_GANG_ACTIVE(Any gangId)
	{
		auto retval = (bool)GANG::NETWORK_IS_GANG_ACTIVE(gangId);
		return retval;
	}

	static bool LUA_NATIVE_GANG_NETWORK_IS_GANG_OPEN_(Any gangId)
	{
		auto retval = (bool)GANG::_NETWORK_IS_GANG_OPEN(gangId);
		return retval;
	}

	static int LUA_NATIVE_GANG_NETWORK_GET_GANG_PRIVACY_()
	{
		auto retval = GANG::_NETWORK_GET_GANG_PRIVACY();
		return retval;
	}

	static void LUA_NATIVE_GANG_NETWORK_START_GANG_(bool openStatus, int campSize)
	{
		GANG::_NETWORK_START_GANG(openStatus, campSize);
	}

	static bool LUA_NATIVE_GANG_NETWORK_SET_GANG_PRIVACY_(int privacyType)
	{
		auto retval = (bool)GANG::_NETWORK_SET_GANG_PRIVACY(privacyType);
		return retval;
	}

	static void LUA_NATIVE_GANG_NETWORK_LEAVE_GANG_(bool disband)
	{
		GANG::_NETWORK_LEAVE_GANG(disband);
	}

	static void LUA_NATIVE_GANG_NETWORK_KICK_GANG_MEMBER_(Player player, int banTimeSeconds)
	{
		GANG::_NETWORK_KICK_GANG_MEMBER(player, banTimeSeconds);
	}

	static bool LUA_NATIVE_GANG_NETWORK_REQUEST_GANG_JOIN_(Any gangId)
	{
		auto retval = (bool)GANG::_NETWORK_REQUEST_GANG_JOIN(gangId);
		return retval;
	}

	static bool LUA_NATIVE_GANG_NETWORK_IS_GANG_LEADER(Player player)
	{
		auto retval = (bool)GANG::NETWORK_IS_GANG_LEADER(player);
		return retval;
	}

	static bool LUA_NATIVE_GANG_NETWORK_IS_GANG_MEMBER_(Any gangId, Player player)
	{
		auto retval = (bool)GANG::_NETWORK_IS_GANG_MEMBER(gangId, player);
		return retval;
	}

	static bool LUA_NATIVE_GANG_NETWORK_IS_IN_SAME_GANG(Player player1, Player player2)
	{
		auto retval = (bool)GANG::NETWORK_IS_IN_SAME_GANG(player1, player2);
		return retval;
	}

	static bool LUA_NATIVE_GANG_NETWORK_IS_IN_MY_GANG_(Player player)
	{
		auto retval = (bool)GANG::_NETWORK_IS_IN_MY_GANG(player);
		return retval;
	}

	static int LUA_NATIVE_GANG_NETWORK_GET_NUM_GANG_MEMBERS(Any gangId)
	{
		auto retval = GANG::NETWORK_GET_NUM_GANG_MEMBERS(gangId);
		return retval;
	}

	static int LUA_NATIVE_GANG_NETWORK_GET_GANG_SIZE_(Any gangId)
	{
		auto retval = GANG::_NETWORK_GET_GANG_SIZE(gangId);
		return retval;
	}

	static bool LUA_NATIVE_GANG_NETWORK_SET_GANG_SIZE_(int size)
	{
		auto retval = (bool)GANG::_NETWORK_SET_GANG_SIZE(size);
		return retval;
	}

	static Any LUA_NATIVE_GANG_NETWORK_GET_GANG_ID(Player player)
	{
		auto retval = GANG::NETWORK_GET_GANG_ID(player);
		return retval;
	}

	static int LUA_NATIVE_GANG_NETWORK_GET_GANG_MEMBERS_(Any gangId, uintptr_t memberHandles)
	{
		auto retval = GANG::_NETWORK_GET_GANG_MEMBERS(gangId, (Any*)memberHandles);
		return retval;
	}

	static bool LUA_NATIVE_GANG_0xDA801F7F6A5278D3_(Player player)
	{
		auto retval = (bool)GANG::_0xDA801F7F6A5278D3(player);
		return retval;
	}

	static Any LUA_NATIVE_GANG_0x2F7EB8B6F6AFE79C_(Any p0)
	{
		auto retval = GANG::_0x2F7EB8B6F6AFE79C(p0);
		return retval;
	}

	static Any LUA_NATIVE_GANG_0x53A94294FDDCF98C_(Any p0, Any p1)
	{
		auto retval = GANG::_0x53A94294FDDCF98C(p0, p1);
		return retval;
	}

	static Player LUA_NATIVE_GANG_NETWORK_GET_GANG_LEADER(Any gangId)
	{
		auto retval = GANG::NETWORK_GET_GANG_LEADER(gangId);
		return retval;
	}

	static bool LUA_NATIVE_GANG_NETWORK_GET_GANG_LEADER_HANDLE_(Any gangId, uintptr_t gamerHandle)
	{
		auto retval = (bool)GANG::_NETWORK_GET_GANG_LEADER_HANDLE(gangId, (Any*)gamerHandle);
		return retval;
	}

	static bool LUA_NATIVE_GANG_0x6102830F764B3DE1_(Player player)
	{
		auto retval = (bool)GANG::_0x6102830F764B3DE1(player);
		return retval;
	}

	static void LUA_NATIVE_GANG_0xB38C256498748413_()
	{
		GANG::_0xB38C256498748413();
	}

	static Any LUA_NATIVE_GANG_0xE4C64CD37CB176AA_(int p0)
	{
		auto retval = GANG::_0xE4C64CD37CB176AA(p0);
		return retval;
	}

	static Any LUA_NATIVE_GANG_0x7BAA30C9BBE8AEE7_(Any p0, Any p1)
	{
		auto retval = GANG::_0x7BAA30C9BBE8AEE7(p0, p1);
		return retval;
	}

	static Any LUA_NATIVE_GANG_0x0E5C9FB9ED5DFF1C_(Any p0)
	{
		auto retval = GANG::_0x0E5C9FB9ED5DFF1C(p0);
		return retval;
	}

	static void LUA_NATIVE_GANG_0xB22B1D9F74095382_(Any p0)
	{
		GANG::_0xB22B1D9F74095382(p0);
	}

	static void LUA_NATIVE_GANG_0xEE4F20004D0288B7_()
	{
		GANG::_0xEE4F20004D0288B7();
	}

	static void LUA_NATIVE_GANG_0xAD22AB64FA428DF3_(Any p0)
	{
		GANG::_0xAD22AB64FA428DF3(p0);
	}

	static Any LUA_NATIVE_GANG_0x48D82C83987E18E4_(Any p0)
	{
		auto retval = GANG::_0x48D82C83987E18E4(p0);
		return retval;
	}

	static void LUA_NATIVE_GANG_0xA9CEAE8D6637FBAD_(Any p0)
	{
		GANG::_0xA9CEAE8D6637FBAD(p0);
	}

	static Any LUA_NATIVE_GANG_0x51C5EF47086AA0D7_()
	{
		auto retval = GANG::_0x51C5EF47086AA0D7();
		return retval;
	}

	static Any LUA_NATIVE_GANG_0x644E02F24F9D4E98_(Any p0, Any p1)
	{
		auto retval = GANG::_0x644E02F24F9D4E98(p0, p1);
		return retval;
	}

	static Any LUA_NATIVE_GANG_0x3ADC71A66356D706_()
	{
		auto retval = GANG::_0x3ADC71A66356D706();
		return retval;
	}

	static Any LUA_NATIVE_GANG_0xFA7C5B7E087A4CEB_()
	{
		auto retval = GANG::_0xFA7C5B7E087A4CEB();
		return retval;
	}

	static Any LUA_NATIVE_GANG_0x1F11702DDBD915C6_(Any p0, Any p1)
	{
		auto retval = GANG::_0x1F11702DDBD915C6(p0, p1);
		return retval;
	}

	static Any LUA_NATIVE_GANG_0x7933754F260B428A_(Player player)
	{
		auto retval = GANG::_0x7933754F260B428A(player);
		return retval;
	}

	static Any LUA_NATIVE_GANG_0xAFD3599A3CC5637D_()
	{
		auto retval = GANG::_0xAFD3599A3CC5637D();
		return retval;
	}

	static void LUA_NATIVE_GANG_0xC81A9E2C8EFD28D5_(Any p0)
	{
		GANG::_0xC81A9E2C8EFD28D5(p0);
	}

	void init_native_binding_GANG(sol::state& L)
	{
		auto GANG = L["GANG"].get_or_create<sol::table>();
		GANG.set_function("NETWORK_IS_GANG_ID_VALID", LUA_NATIVE_GANG_NETWORK_IS_GANG_ID_VALID);
		GANG.set_function("NETWORK_IS_GANG_IN_SESSION", LUA_NATIVE_GANG_NETWORK_IS_GANG_IN_SESSION);
		GANG.set_function("NETWORK_IS_GANG_ACTIVE", LUA_NATIVE_GANG_NETWORK_IS_GANG_ACTIVE);
		GANG.set_function("NETWORK_IS_GANG_OPEN_", LUA_NATIVE_GANG_NETWORK_IS_GANG_OPEN_);
		GANG.set_function("NETWORK_GET_GANG_PRIVACY_", LUA_NATIVE_GANG_NETWORK_GET_GANG_PRIVACY_);
		GANG.set_function("NETWORK_START_GANG_", LUA_NATIVE_GANG_NETWORK_START_GANG_);
		GANG.set_function("NETWORK_SET_GANG_PRIVACY_", LUA_NATIVE_GANG_NETWORK_SET_GANG_PRIVACY_);
		GANG.set_function("NETWORK_LEAVE_GANG_", LUA_NATIVE_GANG_NETWORK_LEAVE_GANG_);
		GANG.set_function("NETWORK_KICK_GANG_MEMBER_", LUA_NATIVE_GANG_NETWORK_KICK_GANG_MEMBER_);
		GANG.set_function("NETWORK_REQUEST_GANG_JOIN_", LUA_NATIVE_GANG_NETWORK_REQUEST_GANG_JOIN_);
		GANG.set_function("NETWORK_IS_GANG_LEADER", LUA_NATIVE_GANG_NETWORK_IS_GANG_LEADER);
		GANG.set_function("NETWORK_IS_GANG_MEMBER_", LUA_NATIVE_GANG_NETWORK_IS_GANG_MEMBER_);
		GANG.set_function("NETWORK_IS_IN_SAME_GANG", LUA_NATIVE_GANG_NETWORK_IS_IN_SAME_GANG);
		GANG.set_function("NETWORK_IS_IN_MY_GANG_", LUA_NATIVE_GANG_NETWORK_IS_IN_MY_GANG_);
		GANG.set_function("NETWORK_GET_NUM_GANG_MEMBERS", LUA_NATIVE_GANG_NETWORK_GET_NUM_GANG_MEMBERS);
		GANG.set_function("NETWORK_GET_GANG_SIZE_", LUA_NATIVE_GANG_NETWORK_GET_GANG_SIZE_);
		GANG.set_function("NETWORK_SET_GANG_SIZE_", LUA_NATIVE_GANG_NETWORK_SET_GANG_SIZE_);
		GANG.set_function("NETWORK_GET_GANG_ID", LUA_NATIVE_GANG_NETWORK_GET_GANG_ID);
		GANG.set_function("NETWORK_GET_GANG_MEMBERS_", LUA_NATIVE_GANG_NETWORK_GET_GANG_MEMBERS_);
		GANG.set_function("0xDA801F7F6A5278D3_", LUA_NATIVE_GANG_0xDA801F7F6A5278D3_);
		GANG.set_function("0x2F7EB8B6F6AFE79C_", LUA_NATIVE_GANG_0x2F7EB8B6F6AFE79C_);
		GANG.set_function("0x53A94294FDDCF98C_", LUA_NATIVE_GANG_0x53A94294FDDCF98C_);
		GANG.set_function("NETWORK_GET_GANG_LEADER", LUA_NATIVE_GANG_NETWORK_GET_GANG_LEADER);
		GANG.set_function("NETWORK_GET_GANG_LEADER_HANDLE_", LUA_NATIVE_GANG_NETWORK_GET_GANG_LEADER_HANDLE_);
		GANG.set_function("0x6102830F764B3DE1_", LUA_NATIVE_GANG_0x6102830F764B3DE1_);
		GANG.set_function("0xB38C256498748413_", LUA_NATIVE_GANG_0xB38C256498748413_);
		GANG.set_function("0xE4C64CD37CB176AA_", LUA_NATIVE_GANG_0xE4C64CD37CB176AA_);
		GANG.set_function("0x7BAA30C9BBE8AEE7_", LUA_NATIVE_GANG_0x7BAA30C9BBE8AEE7_);
		GANG.set_function("0x0E5C9FB9ED5DFF1C_", LUA_NATIVE_GANG_0x0E5C9FB9ED5DFF1C_);
		GANG.set_function("0xB22B1D9F74095382_", LUA_NATIVE_GANG_0xB22B1D9F74095382_);
		GANG.set_function("0xEE4F20004D0288B7_", LUA_NATIVE_GANG_0xEE4F20004D0288B7_);
		GANG.set_function("0xAD22AB64FA428DF3_", LUA_NATIVE_GANG_0xAD22AB64FA428DF3_);
		GANG.set_function("0x48D82C83987E18E4_", LUA_NATIVE_GANG_0x48D82C83987E18E4_);
		GANG.set_function("0xA9CEAE8D6637FBAD_", LUA_NATIVE_GANG_0xA9CEAE8D6637FBAD_);
		GANG.set_function("0x51C5EF47086AA0D7_", LUA_NATIVE_GANG_0x51C5EF47086AA0D7_);
		GANG.set_function("0x644E02F24F9D4E98_", LUA_NATIVE_GANG_0x644E02F24F9D4E98_);
		GANG.set_function("0x3ADC71A66356D706_", LUA_NATIVE_GANG_0x3ADC71A66356D706_);
		GANG.set_function("0xFA7C5B7E087A4CEB_", LUA_NATIVE_GANG_0xFA7C5B7E087A4CEB_);
		GANG.set_function("0x1F11702DDBD915C6_", LUA_NATIVE_GANG_0x1F11702DDBD915C6_);
		GANG.set_function("0x7933754F260B428A_", LUA_NATIVE_GANG_0x7933754F260B428A_);
		GANG.set_function("0xAFD3599A3CC5637D_", LUA_NATIVE_GANG_0xAFD3599A3CC5637D_);
		GANG.set_function("0xC81A9E2C8EFD28D5_", LUA_NATIVE_GANG_0xC81A9E2C8EFD28D5_);
	}
}
