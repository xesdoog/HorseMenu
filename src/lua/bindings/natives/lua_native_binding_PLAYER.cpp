#include "lua_native_binding.hpp"
#include "game/rdr/Natives.hpp"

namespace Lua::native
{
	static Ped LUA_NATIVE_PLAYER_GET_PLAYER_PED(Player PlayerIndex)
	{
		auto retval = PLAYER::GET_PLAYER_PED(PlayerIndex);
		return retval;
	}

	static Ped LUA_NATIVE_PLAYER_GET_PLAYER_PED_2_(Player player)
	{
		auto retval = PLAYER::_GET_PLAYER_PED_2(player);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_0x325434C68358D282_(bool toggle)
	{
		PLAYER::_0x325434C68358D282(toggle);
	}

	static Ped LUA_NATIVE_PLAYER_GET_PLAYER_PED_SCRIPT_INDEX(Player PlayerIndex)
	{
		auto retval = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PlayerIndex);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_MODEL(Player PlayerIndex, Hash PlayerModelHashKey, bool p2)
	{
		PLAYER::SET_PLAYER_MODEL(PlayerIndex, PlayerModelHashKey, p2);
	}

	static bool LUA_NATIVE_PLAYER_NETWORK_HAS_PLAYER_VALID_PED_(Player player)
	{
		auto retval = (bool)PLAYER::_NETWORK_HAS_PLAYER_VALID_PED(player);
		return retval;
	}

	static int LUA_NATIVE_PLAYER_GET_PLAYER_TEAM(Player PlayerIndex)
	{
		auto retval = PLAYER::GET_PLAYER_TEAM(PlayerIndex);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_TEAM(Player PlayerIndex, int Team, bool bRestrictToThisScript)
	{
		PLAYER::SET_PLAYER_TEAM(PlayerIndex, Team, bRestrictToThisScript);
	}

	static const char* LUA_NATIVE_PLAYER_GET_PLAYER_NAME(Player PlayerIndex)
	{
		auto retval = PLAYER::GET_PLAYER_NAME(PlayerIndex);
		return retval;
	}

	static const char* LUA_NATIVE_PLAYER_FORMAT_PLAYER_NAME_STRING_(sol::stack_object string)
	{
		auto retval = PLAYER::_FORMAT_PLAYER_NAME_STRING(string.is<const char*>() ? string.as<const char*>() : nullptr);
		return retval;
	}

	static float LUA_NATIVE_PLAYER_GET_WANTED_LEVEL_RADIUS(int WantedLevel)
	{
		auto retval = PLAYER::GET_WANTED_LEVEL_RADIUS(WantedLevel);
		return retval;
	}

	static int LUA_NATIVE_PLAYER_GET_WANTED_LEVEL_THRESHOLD(int wantedLevel)
	{
		auto retval = PLAYER::GET_WANTED_LEVEL_THRESHOLD(wantedLevel);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_WANTED_LEVEL(Player PlayerIndex, int WantedLevel, bool bDelayLawResponse)
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PlayerIndex, WantedLevel, bDelayLawResponse);
	}

	static bool LUA_NATIVE_PLAYER_IS_PLAYER_WANTED_LEVEL_GREATER(Player PlayerIndex, int WantedLevel)
	{
		auto retval = (bool)PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PlayerIndex, WantedLevel);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_CLEAR_PLAYER_WANTED_LEVEL(Player PlayerIndex)
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PlayerIndex);
	}

	static bool LUA_NATIVE_PLAYER_IS_PLAYER_DEAD(Player PlayerIndex)
	{
		auto retval = (bool)PLAYER::IS_PLAYER_DEAD(PlayerIndex);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_CONTROL(Player iPlayerIndex, bool bSetControlOn, int iFlags, bool bPreventHeadingChange)
	{
		PLAYER::SET_PLAYER_CONTROL(iPlayerIndex, bSetControlOn, iFlags, bPreventHeadingChange);
	}

	static int LUA_NATIVE_PLAYER_GET_PLAYER_WANTED_LEVEL(Player PlayerIndex)
	{
		auto retval = PLAYER::GET_PLAYER_WANTED_LEVEL(PlayerIndex);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_SET_MAX_WANTED_LEVEL(int NewMaxLevel)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(NewMaxLevel);
	}

	static void LUA_NATIVE_PLAYER_SET_MAX_WANTED_LEVEL_2_(int maxWantedLevel)
	{
		PLAYER::_SET_MAX_WANTED_LEVEL_2(maxWantedLevel);
	}

	static void LUA_NATIVE_PLAYER_SET_POLICE_RADAR_BLIPS(bool bBlips)
	{
		PLAYER::SET_POLICE_RADAR_BLIPS(bBlips);
	}

	static bool LUA_NATIVE_PLAYER_IS_PLAYER_PLAYING(Player PlayerIndex)
	{
		auto retval = (bool)PLAYER::IS_PLAYER_PLAYING(PlayerIndex);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_SET_EVERYONE_IGNORE_PLAYER(Player PlayerIndex, bool IgnorePlayer)
	{
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PlayerIndex, IgnorePlayer);
	}

	static bool LUA_NATIVE_PLAYER_GET_IS_PLAYER_UI_PROMPT_ACTIVE(Player player, int p1)
	{
		auto retval = (bool)PLAYER::GET_IS_PLAYER_UI_PROMPT_ACTIVE(player, p1);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_MODIFY_PLAYER_UI_PROMPT_(Player player, int promptType, int promptMode, bool disabled)
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, promptMode, disabled);
	}

	static bool LUA_NATIVE_PLAYER_GET_PLAYER_UI_PROMPT_IS_DISABLED_(Player player, int promptType, int promptMode)
	{
		auto retval = (bool)PLAYER::_GET_PLAYER_UI_PROMPT_IS_DISABLED(player, promptType, promptMode);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_MODIFY_PLAYER_UI_PROMPT_FOR_PED_(Player player, Ped ped, int promptType, int promptMode, bool enabled)
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(player, ped, promptType, promptMode, enabled);
	}

	static bool LUA_NATIVE_PLAYER_GET_PLAYER_UI_PROMPT_FOR_PED_IS_ENABLED_(Player player, Ped ped, int promptType, int promptMode)
	{
		auto retval = (bool)PLAYER::_GET_PLAYER_UI_PROMPT_FOR_PED_IS_ENABLED(player, ped, promptType, promptMode);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_0x93624B36E8851B42_(Player player)
	{
		PLAYER::_0x93624B36E8851B42(player);
	}

	static void LUA_NATIVE_PLAYER_0x9073EC5456651A90_(Any p0, Any p1)
	{
		PLAYER::_0x9073EC5456651A90(p0, p1);
	}

	static void LUA_NATIVE_PLAYER_0x2E67707BEC52CA4B_(Any p0)
	{
		PLAYER::_0x2E67707BEC52CA4B(p0);
	}

	static void LUA_NATIVE_PLAYER_SET_ALL_RANDOM_PEDS_FLEE(Player PlayerIndex, bool PedsFlee)
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PlayerIndex, PedsFlee);
	}

	static void LUA_NATIVE_PLAYER_SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(Player PlayerIndex)
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PlayerIndex);
	}

	static void LUA_NATIVE_PLAYER_SET_ALL_NEUTRAL_RANDOM_PEDS_FLEE_THIS_FRAME(Player PlayerIndex)
	{
		PLAYER::SET_ALL_NEUTRAL_RANDOM_PEDS_FLEE_THIS_FRAME(PlayerIndex);
	}

	static void LUA_NATIVE_PLAYER_0x1D256EED194F5B58_(Any p0)
	{
		PLAYER::_0x1D256EED194F5B58(p0);
	}

	static Any LUA_NATIVE_PLAYER_0x5B7B97E99F84138B_(Any p0)
	{
		auto retval = PLAYER::_0x5B7B97E99F84138B(p0);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_SET_DISABLE_PLAYER_WANTED_LEVEL_(Player player, bool disable)
	{
		PLAYER::_SET_DISABLE_PLAYER_WANTED_LEVEL(player, disable);
	}

	static float LUA_NATIVE_PLAYER_GET_WANTED_LEVEL_MULTIPLIER_()
	{
		auto retval = PLAYER::_GET_WANTED_LEVEL_MULTIPLIER();
		return retval;
	}

	static void LUA_NATIVE_PLAYER_SET_WANTED_LEVEL_MULTIPLIER(float Multiplier)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(Multiplier);
	}

	static void LUA_NATIVE_PLAYER_RESET_WANTED_LEVEL_DIFFICULTY(Player PlayerIndex)
	{
		PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PlayerIndex);
	}

	static void LUA_NATIVE_PLAYER_UPDATE_WANTED_POSITION_THIS_FRAME(Player PlayerIndex)
	{
		PLAYER::UPDATE_WANTED_POSITION_THIS_FRAME(PlayerIndex);
	}

	static void LUA_NATIVE_PLAYER_SUPPRESS_WITNESSES_CALLING_POLICE_THIS_FRAME(Player PlayerIndex)
	{
		PLAYER::SUPPRESS_WITNESSES_CALLING_POLICE_THIS_FRAME(PlayerIndex);
	}

	static void LUA_NATIVE_PLAYER_REPORT_POLICE_SPOTTED_PLAYER(Player PlayerIndex)
	{
		PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PlayerIndex);
	}

	static void LUA_NATIVE_PLAYER_SET_LAW_RESPONSE_DELAY_OVERRIDE(float fLawResponseDelay)
	{
		PLAYER::SET_LAW_RESPONSE_DELAY_OVERRIDE(fLawResponseDelay);
	}

	static void LUA_NATIVE_PLAYER_RESET_LAW_RESPONSE_DELAY_OVERRIDE()
	{
		PLAYER::RESET_LAW_RESPONSE_DELAY_OVERRIDE();
	}

	static bool LUA_NATIVE_PLAYER_CAN_PLAYER_START_MISSION(Player PlayerIndex)
	{
		auto retval = (bool)PLAYER::CAN_PLAYER_START_MISSION(PlayerIndex);
		return retval;
	}

	static bool LUA_NATIVE_PLAYER_IS_PLAYER_READY_FOR_CUTSCENE(Player PlayerIndex)
	{
		auto retval = (bool)PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PlayerIndex);
		return retval;
	}

	static bool LUA_NATIVE_PLAYER_IS_PLAYER_TARGETTING_ENTITY(Player PlayerIndex, Entity EntityIndex, bool p2)
	{
		auto retval = (bool)PLAYER::IS_PLAYER_TARGETTING_ENTITY(PlayerIndex, EntityIndex, p2);
		return retval;
	}

	static std::tuple<bool, Entity> LUA_NATIVE_PLAYER_GET_PLAYER_TARGET_ENTITY(Player PlayerIndex, Entity EntityIndex)
	{
		std::tuple<bool, Entity> return_values;
		std::get<0>(return_values) = (bool)PLAYER::GET_PLAYER_TARGET_ENTITY(PlayerIndex, &EntityIndex);
		std::get<1>(return_values) = EntityIndex;

		return return_values;
	}

	static bool LUA_NATIVE_PLAYER_0x927861B2C08DBEA5_(Player player)
	{
		auto retval = (bool)PLAYER::_0x927861B2C08DBEA5(player);
		return retval;
	}

	static bool LUA_NATIVE_PLAYER_IS_PLAYER_FREE_FOCUSING_(Player player)
	{
		auto retval = (bool)PLAYER::_IS_PLAYER_FREE_FOCUSING(player);
		return retval;
	}

	static std::tuple<bool, Entity> LUA_NATIVE_PLAYER_GET_PLAYER_INTERACTION_TARGET_ENTITY(Player player, Entity outEntity, bool p2, bool p3)
	{
		std::tuple<bool, Entity> return_values;
		std::get<0>(return_values) = (bool)PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(player, &outEntity, p2, p3);
		std::get<1>(return_values) = outEntity;

		return return_values;
	}

	static Any LUA_NATIVE_PLAYER_0xBEA3A6E5F5F79A6F_(Any p0, Any p1)
	{
		auto retval = PLAYER::_0xBEA3A6E5F5F79A6F(p0, p1);
		return retval;
	}

	static bool LUA_NATIVE_PLAYER_IS_PLAYER_IN_SCOPE_(Player player)
	{
		auto retval = (bool)PLAYER::_IS_PLAYER_IN_SCOPE(player);
		return retval;
	}

	static bool LUA_NATIVE_PLAYER_IS_PLAYER_FREE_AIMING(Player PlayerIndex)
	{
		auto retval = (bool)PLAYER::IS_PLAYER_FREE_AIMING(PlayerIndex);
		return retval;
	}

	static bool LUA_NATIVE_PLAYER_IS_PLAYER_FREE_AIMING_AT_ENTITY(Player PlayerIndex, Entity EntityIndex)
	{
		auto retval = (bool)PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PlayerIndex, EntityIndex);
		return retval;
	}

	static std::tuple<bool, Entity> LUA_NATIVE_PLAYER_GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(Player PlayerIndex, Entity EntityIndex)
	{
		std::tuple<bool, Entity> return_values;
		std::get<0>(return_values) = (bool)PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PlayerIndex, &EntityIndex);
		std::get<1>(return_values) = EntityIndex;

		return return_values;
	}

	static void LUA_NATIVE_PLAYER_0x3DAABE78A23694BC_(Any p0, Any p1)
	{
		PLAYER::_0x3DAABE78A23694BC(p0, p1);
	}

	static std::tuple<bool, Ped> LUA_NATIVE_PLAYER_0x7AE93C45EC14A166_(Player player, Ped ped)
	{
		std::tuple<bool, Ped> return_values;
		std::get<0>(return_values) = (bool)PLAYER::_0x7AE93C45EC14A166(player, &ped);
		std::get<1>(return_values) = ped;

		return return_values;
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_LOCKON_RANGE_OVERRIDE(Player PlayerIndex, float Range)
	{
		PLAYER::SET_PLAYER_LOCKON_RANGE_OVERRIDE(PlayerIndex, Range);
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_CAN_BE_HASSLED_BY_GANGS(Player PlayerIndex, bool bCanBeHassled)
	{
		PLAYER::SET_PLAYER_CAN_BE_HASSLED_BY_GANGS(PlayerIndex, bCanBeHassled);
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_CAN_USE_COVER(Player PlayerIndex, bool CanUseCover)
	{
		PLAYER::SET_PLAYER_CAN_USE_COVER(PlayerIndex, CanUseCover);
	}

	static void LUA_NATIVE_PLAYER_0xD1A70C1E8D1031FE_(Any p0, Any p1)
	{
		PLAYER::_0xD1A70C1E8D1031FE(p0, p1);
	}

	static void LUA_NATIVE_PLAYER_0xACA45DDCEF6071C4_(Player player, bool p1)
	{
		PLAYER::_0xACA45DDCEF6071C4(player, p1);
	}

	static void LUA_NATIVE_PLAYER_0xA0C683284DF027C7_(Player player, int p1, bool enable)
	{
		PLAYER::_0xA0C683284DF027C7(player, p1, enable);
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_CAN_MERCY_KILL_(Player player, bool toggle)
	{
		PLAYER::_SET_PLAYER_CAN_MERCY_KILL(player, toggle);
	}

	static void LUA_NATIVE_PLAYER_0x4EC8BE63B8A5D4EF_(Player player, int p1)
	{
		PLAYER::_0x4EC8BE63B8A5D4EF(player, p1);
	}

	static int LUA_NATIVE_PLAYER_GET_MAX_WANTED_LEVEL()
	{
		auto retval = PLAYER::GET_MAX_WANTED_LEVEL();
		return retval;
	}

	static bool LUA_NATIVE_PLAYER_IS_PLAYER_TARGETTING_ANYTHING(Player PlayerIndex)
	{
		auto retval = (bool)PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PlayerIndex);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_RESTORE_PLAYER_STAMINA(Player PlayerIndex, float fPercent)
	{
		PLAYER::RESTORE_PLAYER_STAMINA(PlayerIndex, fPercent);
	}

	static void LUA_NATIVE_PLAYER_0x8591EE69CC3ED257_(Player player, bool toggle)
	{
		PLAYER::_0x8591EE69CC3ED257(player, toggle);
	}

	static int LUA_NATIVE_PLAYER_GET_PLAYER_GROUP(Player PlayerIndex)
	{
		auto retval = PLAYER::GET_PLAYER_GROUP(PlayerIndex);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_0x3D9DA5C9EFD20D88_(Any p0, Any p1)
	{
		PLAYER::_0x3D9DA5C9EFD20D88(p0, p1);
	}

	static void LUA_NATIVE_PLAYER_0x2BEED53B912537D0_(Any p0, Any p1, Any p2)
	{
		PLAYER::_0x2BEED53B912537D0(p0, p1, p2);
	}

	static void LUA_NATIVE_PLAYER_0x908D4B72854C8F62_(Any p0)
	{
		PLAYER::_0x908D4B72854C8F62(p0);
	}

	static Any LUA_NATIVE_PLAYER_0xD1F6B912785BFD35_(Any p0)
	{
		auto retval = PLAYER::_0xD1F6B912785BFD35(p0);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_0xC4873B053054C04B_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		PLAYER::_0xC4873B053054C04B(p0, p1, p2, p3, p4, p5, p6, p7);
	}

	static void LUA_NATIVE_PLAYER_0xCA59808E51FD67C4_(Any p0, Any p1)
	{
		PLAYER::_0xCA59808E51FD67C4(p0, p1);
	}

	static void LUA_NATIVE_PLAYER_0xBA5CA1FEB5DE0DF6_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		PLAYER::_0xBA5CA1FEB5DE0DF6(p0, p1, p2, p3, p4, p5);
	}

	static void LUA_NATIVE_PLAYER_0x0869D499A7848309_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		PLAYER::_0x0869D499A7848309(p0, p1, p2, p3, p4, p5, p6, p7);
	}

	static bool LUA_NATIVE_PLAYER_0xB331D8A73F9D2BDF_(Player player, uintptr_t p1)
	{
		auto retval = (bool)PLAYER::_0xB331D8A73F9D2BDF(player, (Any*)p1);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_ADD_PLAYER_AS_FOLLOW_TARGET_(Player player, Ped ped, float p2, float p3, int followMode, int followPriority, bool p6)
	{
		PLAYER::_ADD_PLAYER_AS_FOLLOW_TARGET(player, ped, p2, p3, followMode, followPriority, p6);
	}

	static void LUA_NATIVE_PLAYER_REMOVE_PLAYER_AS_FOLLOW_TARGET_(Player player, Ped ped)
	{
		PLAYER::_REMOVE_PLAYER_AS_FOLLOW_TARGET(player, ped);
	}

	static void LUA_NATIVE_PLAYER_0x12E09E278C6C29B7_(Any p0)
	{
		PLAYER::_0x12E09E278C6C29B7(p0);
	}

	static void LUA_NATIVE_PLAYER_0xDD33A82352C4652F_(Player player, Ped ped, int p2)
	{
		PLAYER::_0xDD33A82352C4652F(player, ped, p2);
	}

	static void LUA_NATIVE_PLAYER_0x1FDA57E8908F2609_(Player player, Ped ped, bool useSteerassist)
	{
		PLAYER::_0x1FDA57E8908F2609(player, ped, useSteerassist);
	}

	static void LUA_NATIVE_PLAYER_0x84481018E668E1B8_(Player player, Ped ped, Any p2)
	{
		PLAYER::_0x84481018E668E1B8(player, ped, p2);
	}

	static bool LUA_NATIVE_PLAYER_0x2009F8AB7A5E9D6D_(Player player)
	{
		auto retval = (bool)PLAYER::_0x2009F8AB7A5E9D6D(player);
		return retval;
	}

	static bool LUA_NATIVE_PLAYER_IS_PLAYER_FOLLOWING_TARGET_(Player player, Ped ped)
	{
		auto retval = (bool)PLAYER::_IS_PLAYER_FOLLOWING_TARGET(player, ped);
		return retval;
	}

	static bool LUA_NATIVE_PLAYER_0xE7F8707269544B29_(Player player, Ped ped)
	{
		auto retval = (bool)PLAYER::_0xE7F8707269544B29(player, ped);
		return retval;
	}

	static Any LUA_NATIVE_PLAYER_0xE631EAF35828FA67_(Any p0)
	{
		auto retval = PLAYER::_0xE631EAF35828FA67(p0);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_0x086549F3B0381CB1_(Any p0, Any p1)
	{
		PLAYER::_0x086549F3B0381CB1(p0, p1);
	}

	static bool LUA_NATIVE_PLAYER_IS_PLAYER_CONTROL_ON(Player PlayerIndex)
	{
		auto retval = (bool)PLAYER::IS_PLAYER_CONTROL_ON(PlayerIndex);
		return retval;
	}

	static bool LUA_NATIVE_PLAYER_IS_PLAYER_SCRIPT_CONTROL_ON(Player PlayerIndex)
	{
		auto retval = (bool)PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PlayerIndex);
		return retval;
	}

	static bool LUA_NATIVE_PLAYER_IS_PLAYER_CLIMBING(Player PlayerIndex)
	{
		auto retval = (bool)PLAYER::IS_PLAYER_CLIMBING(PlayerIndex);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_0xEBB6E27AC2FF32DA_(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		PLAYER::_0xEBB6E27AC2FF32DA(p0, p1, p2, p3, p4);
	}

	static Any LUA_NATIVE_PLAYER_0xB15CD2F9932C9AB5_(Any p0)
	{
		auto retval = PLAYER::_0xB15CD2F9932C9AB5(p0);
		return retval;
	}

	static bool LUA_NATIVE_PLAYER_0x621D1B289CAF5978_(Player player)
	{
		auto retval = (bool)PLAYER::_0x621D1B289CAF5978(player);
		return retval;
	}

	static bool LUA_NATIVE_PLAYER_IS_PLAYER_BEING_ARRESTED(Player PlayerIndex, bool CheckBustedTask)
	{
		auto retval = (bool)PLAYER::IS_PLAYER_BEING_ARRESTED(PlayerIndex, CheckBustedTask);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_RESET_PLAYER_ARREST_STATE(Player PlayerIndex)
	{
		PLAYER::RESET_PLAYER_ARREST_STATE(PlayerIndex);
	}

	static void LUA_NATIVE_PLAYER_0xCBB54CC7FFFFAB86_(Any p0, Any p1, Any p2, Any p3)
	{
		PLAYER::_0xCBB54CC7FFFFAB86(p0, p1, p2, p3);
	}

	static void LUA_NATIVE_PLAYER_0xBED386157F65942C_(Any p0, Any p1)
	{
		PLAYER::_0xBED386157F65942C(p0, p1);
	}

	static Any LUA_NATIVE_PLAYER_0xDAB6A2FC56B7DE65_(Any p0)
	{
		auto retval = PLAYER::_0xDAB6A2FC56B7DE65(p0);
		return retval;
	}

	static Any LUA_NATIVE_PLAYER_0x0F4EAF69DA41AF43_(Any p0)
	{
		auto retval = PLAYER::_0x0F4EAF69DA41AF43(p0);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_SET_BOUNTY_TARGET_(Player player, Player target)
	{
		PLAYER::_SET_BOUNTY_TARGET(player, target);
	}

	static void LUA_NATIVE_PLAYER_CLEAR_BOUNTY_TARGET_(Player player)
	{
		PLAYER::_CLEAR_BOUNTY_TARGET(player);
	}

	static Vehicle LUA_NATIVE_PLAYER_GET_PLAYERS_LAST_VEHICLE()
	{
		auto retval = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		return retval;
	}

	static Player LUA_NATIVE_PLAYER_GET_PLAYER_INDEX()
	{
		auto retval = PLAYER::GET_PLAYER_INDEX();
		return retval;
	}

	static Player LUA_NATIVE_PLAYER_INT_TO_PLAYERINDEX(int Arg)
	{
		auto retval = PLAYER::INT_TO_PLAYERINDEX(Arg);
		return retval;
	}

	static int LUA_NATIVE_PLAYER_INT_TO_PARTICIPANTINDEX(int Arg)
	{
		auto retval = PLAYER::INT_TO_PARTICIPANTINDEX(Arg);
		return retval;
	}

	static Player LUA_NATIVE_PLAYER_PLAYER_ID()
	{
		auto retval = PLAYER::PLAYER_ID();
		return retval;
	}

	static Ped LUA_NATIVE_PLAYER_PLAYER_PED_ID()
	{
		auto retval = PLAYER::PLAYER_PED_ID();
		return retval;
	}

	static int LUA_NATIVE_PLAYER_NETWORK_PLAYER_ID_TO_INT()
	{
		auto retval = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		return retval;
	}

	static bool LUA_NATIVE_PLAYER_HAS_FORCE_CLEANUP_OCCURRED(int ForceCleanupBitField)
	{
		auto retval = (bool)PLAYER::HAS_FORCE_CLEANUP_OCCURRED(ForceCleanupBitField);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_FORCE_CLEANUP(int ForceCleanupBitField)
	{
		PLAYER::FORCE_CLEANUP(ForceCleanupBitField);
	}

	static void LUA_NATIVE_PLAYER_FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(sol::stack_object pName, int ForceCleanupBitField)
	{
		PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(pName.is<const char*>() ? pName.as<const char*>() : nullptr, ForceCleanupBitField);
	}

	static void LUA_NATIVE_PLAYER_FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(int Thread_Id, int ForceCleanupBitField)
	{
		PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Thread_Id, ForceCleanupBitField);
	}

	static int LUA_NATIVE_PLAYER_GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP()
	{
		auto retval = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
		return retval;
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_MOOD_(Player player, int mood)
	{
		PLAYER::_SET_PLAYER_MOOD(player, mood);
	}

	static int LUA_NATIVE_PLAYER_GET_PLAYER_MOOD_(Player player)
	{
		auto retval = PLAYER::_GET_PLAYER_MOOD(player);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_MAY_ONLY_ENTER_THIS_VEHICLE(Player PlayerIndex, Vehicle iVehicleID)
	{
		PLAYER::SET_PLAYER_MAY_ONLY_ENTER_THIS_VEHICLE(PlayerIndex, iVehicleID);
	}

	static void LUA_NATIVE_PLAYER_0xC71D07C96946E263_(Any p0, Any p1)
	{
		PLAYER::_0xC71D07C96946E263(p0, p1);
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(Player PlayerIndex)
	{
		PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PlayerIndex);
	}

	static bool LUA_NATIVE_PLAYER_IS_SYSTEM_UI_BEING_DISPLAYED()
	{
		auto retval = (bool)PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED();
		return retval;
	}

	static void LUA_NATIVE_PLAYER_0xD48227263E3D06AE_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		PLAYER::_0xD48227263E3D06AE(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}

	static void LUA_NATIVE_PLAYER_0x3946FC742AC305CD_(Player player, Ped ped, sol::stack_object p2, float x, float y, float z, Entity targetEntity, sol::stack_object p7)
	{
		PLAYER::_0x3946FC742AC305CD(player, ped, p2.is<const char*>() ? p2.as<const char*>() : nullptr, x, y, z, targetEntity, p7.is<const char*>() ? p7.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_PLAYER_0xA28056CD1B04B250_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10)
	{
		PLAYER::_0xA28056CD1B04B250(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);
	}

	static void LUA_NATIVE_PLAYER_0xC67A4910425F11F1_(Player player, sol::stack_object name)
	{
		PLAYER::_0xC67A4910425F11F1(player, name.is<const char*>() ? name.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_INVINCIBLE(Player PlayerIndex, bool Invincible)
	{
		PLAYER::SET_PLAYER_INVINCIBLE(PlayerIndex, Invincible);
	}

	static bool LUA_NATIVE_PLAYER_GET_PLAYER_INVINCIBLE(Player PlayerIndex)
	{
		auto retval = (bool)PLAYER::GET_PLAYER_INVINCIBLE(PlayerIndex);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_LOCKON(Player PlayerIndex, bool bActive)
	{
		PLAYER::SET_PLAYER_LOCKON(PlayerIndex, bActive);
	}

	static void LUA_NATIVE_PLAYER_SET_LOCKON_TO_FRIENDLY_PLAYERS(Player player, bool toggle)
	{
		PLAYER::SET_LOCKON_TO_FRIENDLY_PLAYERS(player, toggle);
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_TARGETING_MODE(int TargetMode)
	{
		PLAYER::SET_PLAYER_TARGETING_MODE(TargetMode);
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_IN_VEHICLE_TARGETING_MODE_(int targetMode)
	{
		PLAYER::_SET_PLAYER_IN_VEHICLE_TARGETING_MODE(targetMode);
	}

	static Any LUA_NATIVE_PLAYER_0x747257807B8721CE_(Any p0, Any p1)
	{
		auto retval = PLAYER::_0x747257807B8721CE(p0, p1);
		return retval;
	}

	static Any LUA_NATIVE_PLAYER_0x8702D9150D9FBB3D_(Any p0, Any p1)
	{
		auto retval = PLAYER::_0x8702D9150D9FBB3D(p0, p1);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_0xCB0B9506BC91E441_(Any p0, Any p1)
	{
		PLAYER::_0xCB0B9506BC91E441(p0, p1);
	}

	static void LUA_NATIVE_PLAYER_CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(Player PlayerIndex)
	{
		PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PlayerIndex);
	}

	static bool LUA_NATIVE_PLAYER_HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(Player PlayerIndex)
	{
		auto retval = (bool)PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PlayerIndex);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(Player PlayerIndex)
	{
		PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PlayerIndex);
	}

	static bool LUA_NATIVE_PLAYER_HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(Player PlayerIndex)
	{
		auto retval = (bool)PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PlayerIndex);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_0xEACEBAAE0A33FB3F_(Any p0)
	{
		PLAYER::_0xEACEBAAE0A33FB3F(p0);
	}

	static bool LUA_NATIVE_PLAYER_0x72AD59F7B7FB6E24_(Player player, int p1)
	{
		auto retval = (bool)PLAYER::_0x72AD59F7B7FB6E24(player, p1);
		return retval;
	}

	static bool LUA_NATIVE_PLAYER_0x1A6E84F13C952094_(Player player, int p1, uintptr_t p2)
	{
		auto retval = (bool)PLAYER::_0x1A6E84F13C952094(player, p1, (Any*)p2);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_DAMAGE_INFO_OVERRIDE_(Player player, sol::stack_object damageInfo)
	{
		PLAYER::_SET_PLAYER_DAMAGE_INFO_OVERRIDE(player, damageInfo.is<const char*>() ? damageInfo.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_PLAYER_0x1F488807BC8E0630_(Player player)
	{
		PLAYER::_0x1F488807BC8E0630(player);
	}

	static void LUA_NATIVE_PLAYER_SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(Player PlayerIndex, float fDragMult)
	{
		PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PlayerIndex, fDragMult);
	}

	static void LUA_NATIVE_PLAYER_SET_SWIM_MULTIPLIER_FOR_PLAYER(Player PlayerIndex, float fMultiplier)
	{
		PLAYER::SET_SWIM_MULTIPLIER_FOR_PLAYER(PlayerIndex, fMultiplier);
	}

	static bool LUA_NATIVE_PLAYER_0x73EB2EF2E92D23BF_()
	{
		auto retval = (bool)PLAYER::_0x73EB2EF2E92D23BF();
		return retval;
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_FORCED_AIM(Player PlayerIndex, bool ForcedAim, Ped ped, int p3, bool p4)
	{
		PLAYER::SET_PLAYER_FORCED_AIM(PlayerIndex, ForcedAim, ped, p3, p4);
	}

	static void LUA_NATIVE_PLAYER_0x310CE349E0C0EC4B_(Player player, Ped ped, int p2)
	{
		PLAYER::_0x310CE349E0C0EC4B(player, ped, p2);
	}

	static void LUA_NATIVE_PLAYER_DISABLE_PLAYER_FIRING(Player PlayerIndex, bool disable)
	{
		PLAYER::DISABLE_PLAYER_FIRING(PlayerIndex, disable);
	}

	static void LUA_NATIVE_PLAYER_0xEBFF94328FF7A18A_(Any p0, Any p1)
	{
		PLAYER::_0xEBFF94328FF7A18A(p0, p1);
	}

	static void LUA_NATIVE_PLAYER_0xF993373285053D77_(Any p0, Any p1, Any p2)
	{
		PLAYER::_0xF993373285053D77(p0, p1, p2);
	}

	static Any LUA_NATIVE_PLAYER_0xE956C2340A76272E_(Any p0)
	{
		auto retval = PLAYER::_0xE956C2340A76272E(p0);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_ENABLE_CUSTOM_DEADEYE_ABILITY_(Player player, bool enable)
	{
		PLAYER::_ENABLE_CUSTOM_DEADEYE_ABILITY(player, enable);
	}

	static Any LUA_NATIVE_PLAYER_0xDE6C85975F9D4894_(Any p0)
	{
		auto retval = PLAYER::_0xDE6C85975F9D4894(p0);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_0xBBA140062B15A8AC_(Player player)
	{
		PLAYER::_0xBBA140062B15A8AC(player);
	}

	static void LUA_NATIVE_PLAYER_SPECIAL_ABILITY_SET_DISABLED_(Player player, bool disabled)
	{
		PLAYER::_SPECIAL_ABILITY_SET_DISABLED(player, disabled);
	}

	static bool LUA_NATIVE_PLAYER_IS_SPECIAL_ABILITY_ACTIVE_(Player player)
	{
		auto retval = (bool)PLAYER::_IS_SPECIAL_ABILITY_ACTIVE(player);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_MODIFY_INFINITE_TRAIL_VISION_(Player player, bool toggle)
	{
		PLAYER::_MODIFY_INFINITE_TRAIL_VISION(player, toggle);
	}

	static void LUA_NATIVE_PLAYER_SPECIAL_ABILITY_SET_EAGLE_EYE_DISABLED_(Player player)
	{
		PLAYER::_SPECIAL_ABILITY_SET_EAGLE_EYE_DISABLED(player);
	}

	static void LUA_NATIVE_PLAYER_SPECIAL_ABILITY_RESTORE_BY_AMOUNT_(Player player, float amount, int p2, int p3, int p4)
	{
		PLAYER::_SPECIAL_ABILITY_RESTORE_BY_AMOUNT(player, amount, p2, p3, p4);
	}

	static void LUA_NATIVE_PLAYER_0xFA437FA0738C370C_(Player player, float p1, int p2, int p3, int p4)
	{
		PLAYER::_0xFA437FA0738C370C(player, p1, p2, p3, p4);
	}

	static void LUA_NATIVE_PLAYER_SPECIAL_ABILITY_RESTORE_OUTER_RING_(Player player, float amount)
	{
		PLAYER::_SPECIAL_ABILITY_RESTORE_OUTER_RING(player, amount);
	}

	static float LUA_NATIVE_PLAYER_GET_PLAYER_REQUIRED_DEAD_EYE_AMOUNT_(Player player)
	{
		auto retval = PLAYER::_GET_PLAYER_REQUIRED_DEAD_EYE_AMOUNT(player);
		return retval;
	}

	static float LUA_NATIVE_PLAYER_SPECIAL_ABILITY_GET_AMOUNT_CACHED_(Player player)
	{
		auto retval = PLAYER::_SPECIAL_ABILITY_GET_AMOUNT_CACHED(player);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_SPECIAL_ABILITY_DRAIN_BY_AMOUNT_(Player player, float amount, Any p2)
	{
		PLAYER::_SPECIAL_ABILITY_DRAIN_BY_AMOUNT(player, amount, p2);
	}

	static void LUA_NATIVE_PLAYER_SPECIAL_ABILITY_START_RESTORE_(Player player, int p1, bool p2)
	{
		PLAYER::_SPECIAL_ABILITY_START_RESTORE(player, p1, p2);
	}

	static void LUA_NATIVE_PLAYER_SET_SPECIAL_ABILITY_MULTIPLIER_(Player player, float multiplier)
	{
		PLAYER::_SET_SPECIAL_ABILITY_MULTIPLIER(player, multiplier);
	}

	static float LUA_NATIVE_PLAYER_GET_PLAYER_SPECIAL_ABILITY_MULTIPLIER_(Player player)
	{
		auto retval = PLAYER::_GET_PLAYER_SPECIAL_ABILITY_MULTIPLIER(player);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_SET_SPECIAL_ABILITY_TYPE_(Player player, int type)
	{
		PLAYER::_SET_SPECIAL_ABILITY_TYPE(player, type);
	}

	static void LUA_NATIVE_PLAYER_0x22B3CABEDDB538B2_(Player player, float p1)
	{
		PLAYER::_0x22B3CABEDDB538B2(player, p1);
	}

	static void LUA_NATIVE_PLAYER_SET_SPECIAL_ABILITY_DURATION_COST_(Player player, float durationCost)
	{
		PLAYER::_SET_SPECIAL_ABILITY_DURATION_COST(player, durationCost);
	}

	static void LUA_NATIVE_PLAYER_SET_SPECIAL_ABILITY_DISABLE_TIMER_(Player player, float timer)
	{
		PLAYER::_SET_SPECIAL_ABILITY_DISABLE_TIMER(player, timer);
	}

	static Any LUA_NATIVE_PLAYER_0x57D9991DC1334151_(Any p0)
	{
		auto retval = PLAYER::_0x57D9991DC1334151(p0);
		return retval;
	}

	static Any LUA_NATIVE_PLAYER_0x21091B4BEB6376EE_(Any p0)
	{
		auto retval = PLAYER::_0x21091B4BEB6376EE(p0);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_SET_SPECIAL_ABILITY_ACTIVATION_COST_(Player player, float activationCost, int p2)
	{
		PLAYER::_SET_SPECIAL_ABILITY_ACTIVATION_COST(player, activationCost, p2);
	}

	static void LUA_NATIVE_PLAYER_0x4D1699543B1C023C_(Player player, float p1)
	{
		PLAYER::_0x4D1699543B1C023C(player, p1);
	}

	static float LUA_NATIVE_PLAYER_GET_PLAYER_DEAD_EYE_METER_LEVEL_(Player player, bool p1)
	{
		auto retval = PLAYER::_GET_PLAYER_DEAD_EYE_METER_LEVEL(player, p1);
		return retval;
	}

	static float LUA_NATIVE_PLAYER_GET_PLAYER_DEAD_EYE_(Player player)
	{
		auto retval = PLAYER::_GET_PLAYER_DEAD_EYE(player);
		return retval;
	}

	static float LUA_NATIVE_PLAYER_GET_PLAYER_CACHED_DEAD_EYE_AMOUNT_(Player player)
	{
		auto retval = PLAYER::_GET_PLAYER_CACHED_DEAD_EYE_AMOUNT(player);
		return retval;
	}

	static float LUA_NATIVE_PLAYER_GET_PLAYER_MAX_DEAD_EYE_(Player player, Any p1)
	{
		auto retval = PLAYER::_GET_PLAYER_MAX_DEAD_EYE(player, p1);
		return retval;
	}

	static float LUA_NATIVE_PLAYER_GET_PLAYER_HEALTH_(Player player)
	{
		auto retval = PLAYER::_GET_PLAYER_HEALTH(player);
		return retval;
	}

	static float LUA_NATIVE_PLAYER_GET_PLAYER_STAMINA_(Player player)
	{
		auto retval = PLAYER::_GET_PLAYER_STAMINA(player);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_STAT_FLAG_HASH_(Player player, Hash p1)
	{
		PLAYER::_SET_PLAYER_STAT_FLAG_HASH(player, p1);
	}

	static void LUA_NATIVE_PLAYER_SET_USED_ITEM_EFFECT_(float health, float stamina, float deadeye, int healthCore, int staminaCore, int deadeyeCore)
	{
		PLAYER::_SET_USED_ITEM_EFFECT(health, stamina, deadeye, healthCore, staminaCore, deadeyeCore);
	}

	static void LUA_NATIVE_PLAYER_0x08E22898A6AF4905_(Any p0, Any p1)
	{
		PLAYER::_0x08E22898A6AF4905(p0, p1);
	}

	static Any LUA_NATIVE_PLAYER_0xBEFED69CE8317F91_(Any p0)
	{
		auto retval = PLAYER::_0xBEFED69CE8317F91(p0);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_ENABLE_EAGLEEYE_(Player player, bool enable)
	{
		PLAYER::_ENABLE_EAGLEEYE(player, enable);
	}

	static bool LUA_NATIVE_PLAYER_IS_SECONDARY_SPECIAL_ABILITY_ENABLED_(Player player)
	{
		auto retval = (bool)PLAYER::_IS_SECONDARY_SPECIAL_ABILITY_ENABLED(player);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_SECONDARY_SPECIAL_ABILITY_SET_ACTIVE_(Player player)
	{
		PLAYER::_SECONDARY_SPECIAL_ABILITY_SET_ACTIVE(player);
	}

	static void LUA_NATIVE_PLAYER_SECONDARY_SPECIAL_ABILITY_SET_DISABLED_(Player player, bool disabled)
	{
		PLAYER::_SECONDARY_SPECIAL_ABILITY_SET_DISABLED(player, disabled);
	}

	static bool LUA_NATIVE_PLAYER_IS_SECONDARY_SPECIAL_ABILITY_ACTIVE_(Player player)
	{
		auto retval = (bool)PLAYER::_IS_SECONDARY_SPECIAL_ABILITY_ACTIVE(player);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_0x107F2A66E1C4C83A_(Any p0)
	{
		PLAYER::_0x107F2A66E1C4C83A(p0);
	}

	static void LUA_NATIVE_PLAYER_START_PLAYER_TELEPORT(Player PlayerIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ, float heading, bool p5, bool p6, bool p7, bool p8)
	{
		PLAYER::START_PLAYER_TELEPORT(PlayerIndex, VecCoorsX, VecCoorsY, VecCoorsZ, heading, p5, p6, p7, p8);
	}

	static void LUA_NATIVE_PLAYER_0x2C2D287748E8E9B7_(bool p0)
	{
		PLAYER::_0x2C2D287748E8E9B7(p0);
	}

	static bool LUA_NATIVE_PLAYER_UPDATE_PLAYER_TELEPORT(Player PlayerIndex)
	{
		auto retval = (bool)PLAYER::UPDATE_PLAYER_TELEPORT(PlayerIndex);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_STOP_PLAYER_TELEPORT()
	{
		PLAYER::STOP_PLAYER_TELEPORT();
	}

	static bool LUA_NATIVE_PLAYER_IS_PLAYER_TELEPORT_ACTIVE()
	{
		auto retval = (bool)PLAYER::IS_PLAYER_TELEPORT_ACTIVE();
		return retval;
	}

	static float LUA_NATIVE_PLAYER_GET_PLAYER_CURRENT_STEALTH_NOISE(Player PlayerIndex)
	{
		auto retval = PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PlayerIndex);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(Player PlayerIndex, float Mult)
	{
		PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PlayerIndex, Mult);
	}

	static float LUA_NATIVE_PLAYER_GET_PLAYER_HEALTH_RECHARGE_MULTIPLIER_(Player player)
	{
		auto retval = PLAYER::_GET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(player);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_HEALTH_RECHARGE_TIME_MODIFIER_(Player player, float modifier)
	{
		PLAYER::_SET_PLAYER_HEALTH_RECHARGE_TIME_MODIFIER(player, modifier);
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_STAMINA_RECHARGE_MULTIPLIER(Player player, float multiplier)
	{
		PLAYER::SET_PLAYER_STAMINA_RECHARGE_MULTIPLIER(player, multiplier);
	}

	static float LUA_NATIVE_PLAYER_GET_PLAYER_STAMINA_RECHARGE_MULTIPLIER_(Player player)
	{
		auto retval = PLAYER::_GET_PLAYER_STAMINA_RECHARGE_MULTIPLIER(player);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_STAMINA_SPRINT_DEPLETION_MULTIPLIER_(Player player, float multiplier)
	{
		PLAYER::_SET_PLAYER_STAMINA_SPRINT_DEPLETION_MULTIPLIER(player, multiplier);
	}

	static float LUA_NATIVE_PLAYER_GET_PLAYER_STAMINA_DEPLETION_MULTIPLIER_(Player player)
	{
		auto retval = PLAYER::_GET_PLAYER_STAMINA_DEPLETION_MULTIPLIER(player);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_SET_PED_ACTIVE_PLAYER_HORSE_(Player player, Ped horse)
	{
		PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(player, horse);
	}

	static Ped LUA_NATIVE_PLAYER_GET_ACTIVE_HORSE_FOR_PLAYER_(Player player)
	{
		auto retval = PLAYER::_GET_ACTIVE_HORSE_FOR_PLAYER(player);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER_(Player player, Ped mount)
	{
		PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(player, mount);
	}

	static Ped LUA_NATIVE_PLAYER_GET_SADDLE_HORSE_FOR_PLAYER_(Player player)
	{
		auto retval = PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(player);
		return retval;
	}

	static bool LUA_NATIVE_PLAYER_SET_PED_AS_TEMP_PLAYER_HORSE(Player player, Ped horse)
	{
		auto retval = (bool)PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(player, horse);
		return retval;
	}

	static Ped LUA_NATIVE_PLAYER_GET_TEMP_PLAYER_HORSE_(Player player)
	{
		auto retval = PLAYER::_GET_TEMP_PLAYER_HORSE(player);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_0x77B0B6D17A3AC9AA_(Any p0, Any p1)
	{
		PLAYER::_0x77B0B6D17A3AC9AA(p0, p1);
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_MOUNT_STATE_ACTIVE_(Player player, bool active)
	{
		PLAYER::_SET_PLAYER_MOUNT_STATE_ACTIVE(player, active);
	}

	static void LUA_NATIVE_PLAYER_0x694FFA4308060CD1_(Any p0, Any p1)
	{
		PLAYER::_0x694FFA4308060CD1(p0, p1);
	}

	static void LUA_NATIVE_PLAYER_BOOST_PLAYER_HORSE_SPEED_FOR_TIME(Player player, float speedBoost, int duration)
	{
		PLAYER::BOOST_PLAYER_HORSE_SPEED_FOR_TIME(player, speedBoost, duration);
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_WEAPON_DAMAGE_MODIFIER(Player PlayerIndex, float Modifier)
	{
		PLAYER::SET_PLAYER_WEAPON_DAMAGE_MODIFIER(PlayerIndex, Modifier);
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_WEAPON_DEFENSE_MODIFIER(Player PlayerIndex, float Modifier)
	{
		PLAYER::SET_PLAYER_WEAPON_DEFENSE_MODIFIER(PlayerIndex, Modifier);
	}

	static void LUA_NATIVE_PLAYER_0x818241B3EDA84191_(Player player, bool p1)
	{
		PLAYER::_0x818241B3EDA84191(player, p1);
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(Player PlayerIndex, float Modifier)
	{
		PLAYER::SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(PlayerIndex, Modifier);
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_EXPLOSIVE_WEAPON_DAMAGE_MODIFIER_(Player player, float modifier)
	{
		PLAYER::_SET_PLAYER_EXPLOSIVE_WEAPON_DAMAGE_MODIFIER(player, modifier);
	}

	static void LUA_NATIVE_PLAYER_0x83C989D5B5B5B466_(Any p0, Any p1)
	{
		PLAYER::_0x83C989D5B5B5B466(p0, p1);
	}

	static Any LUA_NATIVE_PLAYER_0x03B4B759A8990505_(Any p0)
	{
		auto retval = PLAYER::_0x03B4B759A8990505(p0);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_0x67659A8F248E0141_(Any p0, Any p1)
	{
		PLAYER::_0x67659A8F248E0141(p0, p1);
	}

	static void LUA_NATIVE_PLAYER_SET_RECEIVED_HORSEBACK_DAMAGE_DECREASE_(Player player, float damageDecrease)
	{
		PLAYER::_SET_RECEIVED_HORSEBACK_DAMAGE_DECREASE(player, damageDecrease);
	}

	static void LUA_NATIVE_PLAYER_SET_AI_PLAYER_DEFENSE_MODIFIER_AGAINST_AI_(Player player, float modifier)
	{
		PLAYER::_SET_AI_PLAYER_DEFENSE_MODIFIER_AGAINST_AI(player, modifier);
	}

	static float LUA_NATIVE_PLAYER_GET_AI_PLAYER_DEFENSE_MODIFIER_AGAINST_AI_(Player player)
	{
		auto retval = PLAYER::_GET_AI_PLAYER_DEFENSE_MODIFIER_AGAINST_AI(player);
		return retval;
	}

	static Any LUA_NATIVE_PLAYER_0x19B2C7A6C34FAD54_(Any p0, Any p1)
	{
		auto retval = PLAYER::_0x19B2C7A6C34FAD54(p0, p1);
		return retval;
	}

	static Any LUA_NATIVE_PLAYER_0x9422743A5BA50E10_(Any p0)
	{
		auto retval = PLAYER::_0x9422743A5BA50E10(p0);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_DEFENSE_MODIFIER_(Player player, float weaponDefenseMod, float meleeDefenseMod)
	{
		PLAYER::_SET_PLAYER_DEFENSE_MODIFIER(player, weaponDefenseMod, meleeDefenseMod);
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_DEFENSE_TYPE_MODIFIER_(Player player, int type, float defenseModifier)
	{
		PLAYER::_SET_PLAYER_DEFENSE_TYPE_MODIFIER(player, type, defenseModifier);
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_WEAPON_TYPE_DAMAGE_MODIFIER(Player player, Hash weaponHash, float damageModifier)
	{
		PLAYER::SET_PLAYER_WEAPON_TYPE_DAMAGE_MODIFIER(player, weaponHash, damageModifier);
	}

	static float LUA_NATIVE_PLAYER_GET_PLAYER_WEAPON_DAMAGE_(Player player, Hash weaponHash)
	{
		auto retval = PLAYER::_GET_PLAYER_WEAPON_DAMAGE(player, weaponHash);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_0x5C2E5E3CAEEB1F58_(Any p0, Any p1, Any p2)
	{
		PLAYER::_0x5C2E5E3CAEEB1F58(p0, p1, p2);
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_WEAPON_GROUP_DAMAGE_MODIFIER_(Player player, Hash weaponGroup, float modifier)
	{
		PLAYER::_SET_PLAYER_WEAPON_GROUP_DAMAGE_MODIFIER(player, weaponGroup, modifier);
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_WEAPON_GROUP_AS_INSTANT_KILL_(Player player, Hash weaponGroup, bool toggle)
	{
		PLAYER::_SET_PLAYER_WEAPON_GROUP_AS_INSTANT_KILL(player, weaponGroup, toggle);
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_TRAMPLE_DAMAGE_MODIFIER_(Player player, float modifier)
	{
		PLAYER::_SET_PLAYER_TRAMPLE_DAMAGE_MODIFIER(player, modifier);
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_LASSO_DAMAGE_PER_SECOND_(Player player, float damage)
	{
		PLAYER::_SET_PLAYER_LASSO_DAMAGE_PER_SECOND(player, damage);
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_TOTAL_ACCURACY_MODIFIER_(Player player, float accuracy)
	{
		PLAYER::_SET_PLAYER_TOTAL_ACCURACY_MODIFIER(player, accuracy);
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_LOCAL_ACCURACY_FLOOR_MODIFIER_(Player player, float accuracy)
	{
		PLAYER::_SET_PLAYER_LOCAL_ACCURACY_FLOOR_MODIFIER(player, accuracy);
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_REMOTE_ACCURACY_FLOOR_MODIFIER_(Player player, float accuracy)
	{
		PLAYER::_SET_PLAYER_REMOTE_ACCURACY_FLOOR_MODIFIER(player, accuracy);
	}

	static void LUA_NATIVE_PLAYER_0x3AD212429E095EFB_(Any p0, Any p1)
	{
		PLAYER::_0x3AD212429E095EFB(p0, p1);
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_NOISE_MULTIPLIER(Player PlayerIndex, float Mult)
	{
		PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PlayerIndex, Mult);
	}

	static void LUA_NATIVE_PLAYER_0x113EF458AB6CDA67_(Any p0, Any p1)
	{
		PLAYER::_0x113EF458AB6CDA67(p0, p1);
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_SNEAKING_NOISE_MULTIPLIER(Player PlayerIndex, float Mult)
	{
		PLAYER::SET_PLAYER_SNEAKING_NOISE_MULTIPLIER(PlayerIndex, Mult);
	}

	static void LUA_NATIVE_PLAYER_SIMULATE_PLAYER_INPUT_GAIT(Player playerIdx, float moveBlendRatio, int timer, float heading, bool useRelativeHeading, bool noInputInterruption)
	{
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(playerIdx, moveBlendRatio, timer, heading, useRelativeHeading, noInputInterruption);
	}

	static void LUA_NATIVE_PLAYER_RESET_PLAYER_INPUT_GAIT(Player playerIdx)
	{
		PLAYER::RESET_PLAYER_INPUT_GAIT(playerIdx);
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_SIMULATE_AIMING(Player PlayerIndex, bool SimulateAiming)
	{
		PLAYER::SET_PLAYER_SIMULATE_AIMING(PlayerIndex, SimulateAiming);
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_CLOTH_PIN_FRAMES(Player PlayerIndex, int pinFrames)
	{
		PLAYER::SET_PLAYER_CLOTH_PIN_FRAMES(PlayerIndex, pinFrames);
	}

	static bool LUA_NATIVE_PLAYER_HAS_PLAYER_BEEN_SPOTTED_IN_STOLEN_VEHICLE(Player PlayerIndex)
	{
		auto retval = (bool)PLAYER::HAS_PLAYER_BEEN_SPOTTED_IN_STOLEN_VEHICLE(PlayerIndex);
		return retval;
	}

	static bool LUA_NATIVE_PLAYER_GET_PLAYER_RECEIVED_BATTLE_EVENT_RECENTLY(Player PlayerIndex, int nTime, bool bIncludeLocalEvents)
	{
		auto retval = (bool)PLAYER::GET_PLAYER_RECEIVED_BATTLE_EVENT_RECENTLY(PlayerIndex, nTime, bIncludeLocalEvents);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_SET_MOUNT_PROMPT_DISABLED_(bool disabled)
	{
		PLAYER::_SET_MOUNT_PROMPT_DISABLED(disabled);
	}

	static bool LUA_NATIVE_PLAYER_IS_PLAYER_RIDING_TRAIN(Player PlayerIndex)
	{
		auto retval = (bool)PLAYER::IS_PLAYER_RIDING_TRAIN(PlayerIndex);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_0x9AFCF9FE1884BF62_(Any p0, Any p1)
	{
		PLAYER::_0x9AFCF9FE1884BF62(p0, p1);
	}

	static Any LUA_NATIVE_PLAYER_0x1E8099F449ABB0BA_(Any p0)
	{
		auto retval = PLAYER::_0x1E8099F449ABB0BA(p0);
		return retval;
	}

	static int LUA_NATIVE_PLAYER_GET_DEADEYE_ABILITY_LEVEL_(Player player)
	{
		auto retval = PLAYER::_GET_DEADEYE_ABILITY_LEVEL(player);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_SET_DEADEYE_ABILITY_LEVEL_(Player player, int level)
	{
		PLAYER::_SET_DEADEYE_ABILITY_LEVEL(player, level);
	}

	static bool LUA_NATIVE_PLAYER_IS_DEADEYE_ABILITY_LOCKED_(Player player, int abilityType)
	{
		auto retval = (bool)PLAYER::_IS_DEADEYE_ABILITY_LOCKED(player, abilityType);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_SET_DEADEYE_ABILITY_LOCKED_(Player player, int abilityType, bool toggle)
	{
		PLAYER::_SET_DEADEYE_ABILITY_LOCKED(player, abilityType, toggle);
	}

	static void LUA_NATIVE_PLAYER_SET_DEADEYE_TAGGING_ENABLED_(Player player, bool toggle)
	{
		PLAYER::_SET_DEADEYE_TAGGING_ENABLED(player, toggle);
	}

	static bool LUA_NATIVE_PLAYER_GET_IS_DEADEYE_TAGGING_ENABLED_(Player player)
	{
		auto retval = (bool)PLAYER::_GET_IS_DEADEYE_TAGGING_ENABLED(player);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_0x3C4AE8506638C7E2_(Any p0, Any p1)
	{
		PLAYER::_0x3C4AE8506638C7E2(p0, p1);
	}

	static Any LUA_NATIVE_PLAYER_0x51139D8C17B16FBC_(Any p0)
	{
		auto retval = PLAYER::_0x51139D8C17B16FBC(p0);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_0x8F44EBB3BA8F6D44_(Any p0, Any p1)
	{
		PLAYER::_0x8F44EBB3BA8F6D44(p0, p1);
	}

	static void LUA_NATIVE_PLAYER_SET_DEADEYE_TAGGING_CONFIG_(Player player, int filter)
	{
		PLAYER::_SET_DEADEYE_TAGGING_CONFIG(player, filter);
	}

	static Any LUA_NATIVE_PLAYER_0xE92261BD28C0878F_(Any p0)
	{
		auto retval = PLAYER::_0xE92261BD28C0878F(p0);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_SET_DEADEYE_ABILITY_DEPLETION_DELAY_(Player player, float delay)
	{
		PLAYER::_SET_DEADEYE_ABILITY_DEPLETION_DELAY(player, delay);
	}

	static Any LUA_NATIVE_PLAYER_0xA54000D4BFD90BDE_(Any p0)
	{
		auto retval = PLAYER::_0xA54000D4BFD90BDE(p0);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_0x6EDB5D08CB03E763_(Any p0, Any p1)
	{
		PLAYER::_0x6EDB5D08CB03E763(p0, p1);
	}

	static Any LUA_NATIVE_PLAYER_0x27AD7162D3FED01E_(Any p0, Any p1)
	{
		auto retval = PLAYER::_0x27AD7162D3FED01E(p0, p1);
		return retval;
	}

	static int LUA_NATIVE_PLAYER_GET_NUM_MARKED_DEADEYE_TARGETS_(Player player)
	{
		auto retval = PLAYER::_GET_NUM_MARKED_DEADEYE_TARGETS(player);
		return retval;
	}

	static Any LUA_NATIVE_PLAYER_0xC93A9A45430D484E_(Any p0)
	{
		auto retval = PLAYER::_0xC93A9A45430D484E(p0);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_0x570A13A4CA2799BB_(Player player, bool p1)
	{
		PLAYER::_0x570A13A4CA2799BB(player, p1);
	}

	static void LUA_NATIVE_PLAYER_0x3ACAC8832E77BC93_(Player player, bool p1)
	{
		PLAYER::_0x3ACAC8832E77BC93(player, p1);
	}

	static void LUA_NATIVE_PLAYER_0x2B12B6FC8B8772AB_(Player player, int p1)
	{
		PLAYER::_0x2B12B6FC8B8772AB(player, p1);
	}

	static void LUA_NATIVE_PLAYER_0xE910932F4B30BE23_(Player player)
	{
		PLAYER::_0xE910932F4B30BE23(player);
	}

	static void LUA_NATIVE_PLAYER_0x131E294EF60160DF_(Player player, float p1, float p2, float p3, float p4, Any p5)
	{
		PLAYER::_0x131E294EF60160DF(player, p1, p2, p3, p4, p5);
	}

	static void LUA_NATIVE_PLAYER_0x0E9057A9DA78D0F8_(Player player, int bitflag)
	{
		PLAYER::_0x0E9057A9DA78D0F8(player, bitflag);
	}

	static void LUA_NATIVE_PLAYER_0x263D69767F76059C_(Player player, int p1)
	{
		PLAYER::_0x263D69767F76059C(player, p1);
	}

	static void LUA_NATIVE_PLAYER_REGISTER_EAGLE_EYE_FOR_ENTITY_(Player player, Entity entity, bool p2)
	{
		PLAYER::_REGISTER_EAGLE_EYE_FOR_ENTITY(player, entity, p2);
	}

	static void LUA_NATIVE_PLAYER_REGISTER_EAGLE_EYE_TRAILS_FOR_ENTITY_(Player player, Entity entity, Any p2)
	{
		PLAYER::_REGISTER_EAGLE_EYE_TRAILS_FOR_ENTITY(player, entity, p2);
	}

	static void LUA_NATIVE_PLAYER_UNREGISTER_EAGLE_EYE_FOR_ENTITY_(Player player, Entity entity)
	{
		PLAYER::_UNREGISTER_EAGLE_EYE_FOR_ENTITY(player, entity);
	}

	static void LUA_NATIVE_PLAYER_UNREGISTER_EAGLE_EYE_TRAILS_FOR_ENTITY_(Player player, Entity entity, Any p2)
	{
		PLAYER::_UNREGISTER_EAGLE_EYE_TRAILS_FOR_ENTITY(player, entity, p2);
	}

	static void LUA_NATIVE_PLAYER_0xE5D3EB37ABC1EB03_(Player player)
	{
		PLAYER::_0xE5D3EB37ABC1EB03(player);
	}

	static bool LUA_NATIVE_PLAYER_IS_EAGLE_EYE_REGISTERED_FOR_ENTITY_(Player player, Entity entity)
	{
		auto retval = (bool)PLAYER::_IS_EAGLE_EYE_REGISTERED_FOR_ENTITY(player, entity);
		return retval;
	}

	static Any LUA_NATIVE_PLAYER_0x6852288340B43239_(Any p0, Any p1)
	{
		auto retval = PLAYER::_0x6852288340B43239(p0, p1);
		return retval;
	}

	static Any LUA_NATIVE_PLAYER_0xE50A67C33514A390_(Any p0, Any p1)
	{
		auto retval = PLAYER::_0xE50A67C33514A390(p0, p1);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_0xD288E02E364972D2_(Any p0, Any p1, Any p2)
	{
		PLAYER::_0xD288E02E364972D2(p0, p1, p2);
	}

	static void LUA_NATIVE_PLAYER_EAGLE_EYE_DISABLE_TRACKING_TRAIL_(Entity entity, sol::stack_object trail, Any p2, Any p3)
	{
		PLAYER::_EAGLE_EYE_DISABLE_TRACKING_TRAIL(entity, trail.is<const char*>() ? trail.as<const char*>() : nullptr, p2, p3);
	}

	static void LUA_NATIVE_PLAYER_0x6ECFC621A168424C_(Entity entity1, Entity entity2, Any p2, float p3)
	{
		PLAYER::_0x6ECFC621A168424C(entity1, entity2, p2, p3);
	}

	static void LUA_NATIVE_PLAYER_0xDC5E09D012D759C4_(Entity entity1, Entity entity2, Any p2)
	{
		PLAYER::_0xDC5E09D012D759C4(entity1, entity2, p2);
	}

	static void LUA_NATIVE_PLAYER_0x00B156AFEBCC5AE0_(Any p0)
	{
		PLAYER::_0x00B156AFEBCC5AE0(p0);
	}

	static void LUA_NATIVE_PLAYER_0xC58CE6824E604DEC_(Any p0)
	{
		PLAYER::_0xC58CE6824E604DEC(p0);
	}

	static void LUA_NATIVE_PLAYER_0x330CA55A3647FA1C_(Any p0, Any p1)
	{
		PLAYER::_0x330CA55A3647FA1C(p0, p1);
	}

	static Any LUA_NATIVE_PLAYER_0xA62BBAAE67A05BB0_(Any p0)
	{
		auto retval = PLAYER::_0xA62BBAAE67A05BB0(p0);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_EAGLE_EYE_SET_COLOR_(Player player, bool p1, uintptr_t p2)
	{
		PLAYER::_EAGLE_EYE_SET_COLOR(player, p1, (Any*)p2);
	}

	static void LUA_NATIVE_PLAYER_0x22C8B10802301381_(Any p0, Any p1)
	{
		PLAYER::_0x22C8B10802301381(p0, p1);
	}

	static void LUA_NATIVE_PLAYER_EAGLE_EYE_SET_DRAIN_RATE_MODIFIER_(Player player, float modifier)
	{
		PLAYER::_EAGLE_EYE_SET_DRAIN_RATE_MODIFIER(player, modifier);
	}

	static void LUA_NATIVE_PLAYER_0x06E1FB78B1E59CA5_(Ped ped, bool p1)
	{
		PLAYER::_0x06E1FB78B1E59CA5(ped, p1);
	}

	static void LUA_NATIVE_PLAYER_EAGLE_EYE_SET_PLUS_FLAG_DISABLED_(Ped ped, bool disabled)
	{
		PLAYER::_EAGLE_EYE_SET_PLUS_FLAG_DISABLED(ped, disabled);
	}

	static Any LUA_NATIVE_PLAYER_0x3813E11A378958A5_(Any p0)
	{
		auto retval = PLAYER::_0x3813E11A378958A5(p0);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_EAGLE_EYE_SET_FOCUS_ON_ASSOCIATED_CLUE_TRAIL_(Player player, Entity linkedWaypointPed)
	{
		PLAYER::_EAGLE_EYE_SET_FOCUS_ON_ASSOCIATED_CLUE_TRAIL(player, linkedWaypointPed);
	}

	static void LUA_NATIVE_PLAYER_0x0F9CF06986300875_(Any p0)
	{
		PLAYER::_0x0F9CF06986300875(p0);
	}

	static void LUA_NATIVE_PLAYER_EAGLE_EYE_SET_TRACKING_UPGRADE_(Player player, float p1)
	{
		PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE(player, p1);
	}

	static void LUA_NATIVE_PLAYER_EAGLE_EYE_SET_TRACKING_UPGRADE_2_(Player player, float p1)
	{
		PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE_2(player, p1);
	}

	static Any LUA_NATIVE_PLAYER_0x1DA5C5B0923E1B85_(Any p0)
	{
		auto retval = PLAYER::_0x1DA5C5B0923E1B85(p0);
		return retval;
	}

	static Any LUA_NATIVE_PLAYER_0xAAED694CE814817F_(Any p0)
	{
		auto retval = PLAYER::_0xAAED694CE814817F(p0);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_EAGLE_EYE_SET_CUSTOM_ENTITY_TINT(Entity entity, int red, int green, int blue)
	{
		PLAYER::EAGLE_EYE_SET_CUSTOM_ENTITY_TINT(entity, red, green, blue);
	}

	static void LUA_NATIVE_PLAYER_0xBC02B3D151D3859F_(Entity entity, Any p1)
	{
		PLAYER::_0xBC02B3D151D3859F(entity, p1);
	}

	static void LUA_NATIVE_PLAYER_EAGLE_EYE_SET_CUSTOM_DISTANCE_(Entity entity, float distance)
	{
		PLAYER::_EAGLE_EYE_SET_CUSTOM_DISTANCE(entity, distance);
	}

	static void LUA_NATIVE_PLAYER_0xF21C7A3F3FFBA629_(Player player)
	{
		PLAYER::_0xF21C7A3F3FFBA629(player);
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_MANAGE_BUFF_SUPER_JUMP_(Player player, float p1)
	{
		PLAYER::_SET_PLAYER_MANAGE_BUFF_SUPER_JUMP(player, p1);
	}

	static void LUA_NATIVE_PLAYER_SET_LOCAL_PLAYER_PERSONA_ABILITY_FLAG_(int flagId, bool toggle)
	{
		PLAYER::_SET_LOCAL_PLAYER_PERSONA_ABILITY_FLAG(flagId, toggle);
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_MAX_AMMO_OVERRIDE_FOR_AMMO_TYPE_(Player player, Hash ammoType, int amount)
	{
		PLAYER::_SET_PLAYER_MAX_AMMO_OVERRIDE_FOR_AMMO_TYPE(player, ammoType, amount);
	}

	static void LUA_NATIVE_PLAYER_0xC900A465364A85D6_(Player player)
	{
		PLAYER::_0xC900A465364A85D6(player);
	}

	static void LUA_NATIVE_PLAYER_0xCFB2EED4FCB7BD77_(Any p0, Any p1, Any p2)
	{
		PLAYER::_0xCFB2EED4FCB7BD77(p0, p1, p2);
	}

	static void LUA_NATIVE_PLAYER_0x2BB8D58E88777499_(Any p0)
	{
		PLAYER::_0x2BB8D58E88777499(p0);
	}

	static void LUA_NATIVE_PLAYER_0x00EB5A760638DB55_(Any p0, Any p1, Any p2)
	{
		PLAYER::_0x00EB5A760638DB55(p0, p1, p2);
	}

	static void LUA_NATIVE_PLAYER_0x65887EAC535A0B0C_(Any p0)
	{
		PLAYER::_0x65887EAC535A0B0C(p0);
	}

	static void LUA_NATIVE_PLAYER_SET_WEAPON_DEGRADATION_MODIFIER_(Player player, float modifier)
	{
		PLAYER::_SET_WEAPON_DEGRADATION_MODIFIER(player, modifier);
	}

	static void LUA_NATIVE_PLAYER_SET_BOW_DRAW_REDUCTION_TIME_IN_DEADEYE_(Player player, float drawReductionTime)
	{
		PLAYER::_SET_BOW_DRAW_REDUCTION_TIME_IN_DEADEYE(player, drawReductionTime);
	}

	static void LUA_NATIVE_PLAYER_SET_BOW_STAMINA_DRAIN_SPEED_(Player player, float staminaDrain)
	{
		PLAYER::_SET_BOW_STAMINA_DRAIN_SPEED(player, staminaDrain);
	}

	static void LUA_NATIVE_PLAYER_SET_DAMAGE_CLOSE_DISTANCE_BONUS_(Player player, float closeRangeLowerBound, float closeRangeUpperBound)
	{
		PLAYER::_SET_DAMAGE_CLOSE_DISTANCE_BONUS(player, closeRangeLowerBound, closeRangeUpperBound);
	}

	static void LUA_NATIVE_PLAYER_SET_DAMAGE_CLOSE_DISTANCE_BONUS_TOTAL_(Player player, float closeDamageBonus)
	{
		PLAYER::_SET_DAMAGE_CLOSE_DISTANCE_BONUS_TOTAL(player, closeDamageBonus);
	}

	static void LUA_NATIVE_PLAYER_SET_DAMAGE_FAR_DISTANCE_BONUS_(Player player, float farRangeLowerBound, float farRangeUpperBound)
	{
		PLAYER::_SET_DAMAGE_FAR_DISTANCE_BONUS(player, farRangeLowerBound, farRangeUpperBound);
	}

	static void LUA_NATIVE_PLAYER_SET_DAMAGE_FAR_DISTANCE_BONUS_TOTAL_(Player player, float farDamageBonus)
	{
		PLAYER::_SET_DAMAGE_FAR_DISTANCE_BONUS_TOTAL(player, farDamageBonus);
	}

	static Any LUA_NATIVE_PLAYER_0x6C54E69516CC56BD_(Any p0)
	{
		auto retval = PLAYER::_0x6C54E69516CC56BD(p0);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_0x3A8611BD7BDE84F7_(Any p0, Any p1)
	{
		PLAYER::_0x3A8611BD7BDE84F7(p0, p1);
	}

	static void LUA_NATIVE_PLAYER_0xC177C827CEFC0AA4_(Any p0, Any p1)
	{
		PLAYER::_0xC177C827CEFC0AA4(p0, p1);
	}

	static void LUA_NATIVE_PLAYER_0xBD96185264DDAAEA_(Any p0, Any p1)
	{
		PLAYER::_0xBD96185264DDAAEA(p0, p1);
	}

	static void LUA_NATIVE_PLAYER_0x628E742FE1F79C4A_(Any p0, Any p1)
	{
		PLAYER::_0x628E742FE1F79C4A(p0, p1);
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_INTERACTION_POSITIVE_RESPONSE_(Player player, sol::stack_object speech)
	{
		PLAYER::_SET_PLAYER_INTERACTION_POSITIVE_RESPONSE(player, speech.is<const char*>() ? speech.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_INTERACTION_NEGATIVE_RESPONSE_(Player player, sol::stack_object speech)
	{
		PLAYER::_SET_PLAYER_INTERACTION_NEGATIVE_RESPONSE(player, speech.is<const char*>() ? speech.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_PLAYER_0x216BC0D3D2E413D2_(Player player, Any p1)
	{
		PLAYER::_0x216BC0D3D2E413D2(player, p1);
	}

	static void LUA_NATIVE_PLAYER_0x45EF176B532CA851_(Any p0, Any p1)
	{
		PLAYER::_0x45EF176B532CA851(p0, p1);
	}

	static void LUA_NATIVE_PLAYER_0xA342495F93B7B838_(Any p0, Any p1)
	{
		PLAYER::_0xA342495F93B7B838(p0, p1);
	}

	static void LUA_NATIVE_PLAYER_0x3BB84F812E052C90_(Any p0)
	{
		PLAYER::_0x3BB84F812E052C90(p0);
	}

	static void LUA_NATIVE_PLAYER_0x9FC5A003FB76EDBD_(Any p0, Any p1)
	{
		PLAYER::_0x9FC5A003FB76EDBD(p0, p1);
	}

	static void LUA_NATIVE_PLAYER_0x0FAF95D71ED67ADE_(Player player, sol::stack_object p1)
	{
		PLAYER::_0x0FAF95D71ED67ADE(player, p1.is<const char*>() ? p1.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_PLAYER_0x988C9045531B9FCE_(Player player, sol::stack_object p1)
	{
		PLAYER::_0x988C9045531B9FCE(player, p1.is<const char*>() ? p1.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_PLAYER_0x06C3DB00B69D5435_(Player player, sol::stack_object p1)
	{
		PLAYER::_0x06C3DB00B69D5435(player, p1.is<const char*>() ? p1.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_PLAYER_0xBB6EA5D59E926095_(int category, Hash emote)
	{
		PLAYER::_0xBB6EA5D59E926095(category, emote);
	}

	static bool LUA_NATIVE_PLAYER_0xE1D356F5A66D0FFA_(Hash emote)
	{
		auto retval = (bool)PLAYER::_0xE1D356F5A66D0FFA(emote);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_0x929DDD5538F3DF1F_(Any p0, Any p1)
	{
		PLAYER::_0x929DDD5538F3DF1F(p0, p1);
	}

	static void LUA_NATIVE_PLAYER_0xFA7DAAE3959E6C7B_(Any p0, Any p1)
	{
		PLAYER::_0xFA7DAAE3959E6C7B(p0, p1);
	}

	static void LUA_NATIVE_PLAYER_0x9461A8FAB0378E5B_(Any p0, Any p1)
	{
		PLAYER::_0x9461A8FAB0378E5B(p0, p1);
	}

	static void LUA_NATIVE_PLAYER_0xCB61A63AA53D7D22_(Any p0, Any p1)
	{
		PLAYER::_0xCB61A63AA53D7D22(p0, p1);
	}

	static void LUA_NATIVE_PLAYER_0xCFFC3ECCD7A5CCEB_(Player player, Hash weapon, bool p2)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(player, weapon, p2);
	}

	static void LUA_NATIVE_PLAYER_0x76F7E1BCD623A429_(Any p0)
	{
		PLAYER::_0x76F7E1BCD623A429(p0);
	}

	static void LUA_NATIVE_PLAYER_0x585CE159DB46FADB_(Any p0, Any p1)
	{
		PLAYER::_0x585CE159DB46FADB(p0, p1);
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_RESET_FLAG_(Player player, int playerResetFlag, bool p2)
	{
		PLAYER::_SET_PLAYER_RESET_FLAG(player, playerResetFlag, p2);
	}

	static bool LUA_NATIVE_PLAYER_GET_PLAYER_RESET_FLAG_(Player player, int playerResetFlag)
	{
		auto retval = (bool)PLAYER::_GET_PLAYER_RESET_FLAG(player, playerResetFlag);
		return retval;
	}

	static Ped LUA_NATIVE_PLAYER_GET_MOUNT_OWNED_BY_PLAYER(Player player)
	{
		auto retval = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(player);
		return retval;
	}

	static Player LUA_NATIVE_PLAYER_GET_PLAYER_OWNER_OF_MOUNT_(Ped mount)
	{
		auto retval = PLAYER::_GET_PLAYER_OWNER_OF_MOUNT(mount);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_OWNS_MOUNT_(Player player, Ped mount)
	{
		PLAYER::_SET_PLAYER_OWNS_MOUNT(player, mount);
	}

	static Vehicle LUA_NATIVE_PLAYER_GET_VEHICLE_OWNED_BY_PLAYER_(Player player)
	{
		auto retval = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(player);
		return retval;
	}

	static Player LUA_NATIVE_PLAYER_GET_PLAYER_OWNER_OF_VEHICLE_(Vehicle vehicle)
	{
		auto retval = PLAYER::_GET_PLAYER_OWNER_OF_VEHICLE(vehicle);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_OWNS_VEHICLE_(Player player, Vehicle vehicle)
	{
		PLAYER::_SET_PLAYER_OWNS_VEHICLE(player, vehicle);
	}

	static Vehicle LUA_NATIVE_PLAYER_GET_PLAYER_HUNTING_WAGON_(Player player)
	{
		auto retval = PLAYER::_GET_PLAYER_HUNTING_WAGON(player);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_HUNTING_WAGON_(Player player, Vehicle wagon)
	{
		PLAYER::_SET_PLAYER_HUNTING_WAGON(player, wagon);
	}

	static void LUA_NATIVE_PLAYER_0x9044835BE9D9DBFE_(Any p0, Any p1)
	{
		PLAYER::_0x9044835BE9D9DBFE(p0, p1);
	}

	static std::tuple<Hash, Hash> LUA_NATIVE_PLAYER_GET_DISCOVERABLE_NAME_HASH_AND_TYPE_FOR_ENTITY(Entity entity, Hash type)
	{
		std::tuple<Hash, Hash> return_values;
		std::get<0>(return_values) = PLAYER::GET_DISCOVERABLE_NAME_HASH_AND_TYPE_FOR_ENTITY(entity, &type);
		std::get<1>(return_values) = type;

		return return_values;
	}

	static Hash LUA_NATIVE_PLAYER_GET_CONSTRUCTED_DISCOVERED_CHARACTER_NAME_(Hash p0, bool model, bool outfit)
	{
		auto retval = PLAYER::_GET_CONSTRUCTED_DISCOVERED_CHARACTER_NAME(p0, model, outfit);
		return retval;
	}

	static Hash LUA_NATIVE_PLAYER_GET_TARGET_CHARACTER_NAME_SCRIPT_OVERRIDE_HASH(Ped ped)
	{
		auto retval = PLAYER::GET_TARGET_CHARACTER_NAME_SCRIPT_OVERRIDE_HASH(ped);
		return retval;
	}

	static const char* LUA_NATIVE_PLAYER_GET_TARGET_CHARACTER_NAME_SCRIPT_OVERRIDE_RAW_STRING(Ped ped)
	{
		auto retval = PLAYER::GET_TARGET_CHARACTER_NAME_SCRIPT_OVERRIDE_RAW_STRING(ped);
		return retval;
	}

	static Hash LUA_NATIVE_PLAYER_GET_TARGET_CHARACTER_NAME_FOR_LOCAL_PLAYER(Ped ped)
	{
		auto retval = PLAYER::GET_TARGET_CHARACTER_NAME_FOR_LOCAL_PLAYER(ped);
		return retval;
	}

	static Any LUA_NATIVE_PLAYER_0xDA9D7BE231FE865F_(Any p0, Any p1, Any p2)
	{
		auto retval = PLAYER::_0xDA9D7BE231FE865F(p0, p1, p2);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP_(Player player, int p1, Hash discoveryHash)
	{
		PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP(player, p1, discoveryHash);
	}

	static bool LUA_NATIVE_PLAYER_GET_HAS_PLAYER_DISCOVERED_CHARACTER_NAME_SP_(Player player, int p1, Hash discoveryHash)
	{
		auto retval = (bool)PLAYER::_GET_HAS_PLAYER_DISCOVERED_CHARACTER_NAME_SP(player, p1, discoveryHash);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_0xCDDD4B74660E2335_(Any p0, Any p1, Any p2)
	{
		PLAYER::_0xCDDD4B74660E2335(p0, p1, p2);
	}

	static void LUA_NATIVE_PLAYER_0x77E83C315A3B31CA_(Any p0)
	{
		PLAYER::_0x77E83C315A3B31CA(p0);
	}

	static void LUA_NATIVE_PLAYER_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_MP_(Hash discoveryHash)
	{
		PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_MP(discoveryHash);
	}

	static bool LUA_NATIVE_PLAYER_GET_HAS_PLAYER_DISCOVERED_CHARACTER_NAME_MP(Hash discoveryHash)
	{
		auto retval = (bool)PLAYER::GET_HAS_PLAYER_DISCOVERED_CHARACTER_NAME_MP(discoveryHash);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_MODIFY_PLAYER_DISCOVERED_CHARACTER_NAME_MP_SET_UNDISCOVERED_(Hash discoveryHash)
	{
		PLAYER::_MODIFY_PLAYER_DISCOVERED_CHARACTER_NAME_MP_SET_UNDISCOVERED(discoveryHash);
	}

	static void LUA_NATIVE_PLAYER_SET_SHOW_INFO_CARD_(Player player, bool showingInfoCard)
	{
		PLAYER::_SET_SHOW_INFO_CARD(player, showingInfoCard);
	}

	static void LUA_NATIVE_PLAYER_0x4DBC4873707E8FD6_(Any p0, Any p1, Any p2, Any p3)
	{
		PLAYER::_0x4DBC4873707E8FD6(p0, p1, p2, p3);
	}

	static void LUA_NATIVE_PLAYER_0xCEDC16930526F728_(Any p0)
	{
		PLAYER::_0xCEDC16930526F728(p0);
	}

	static void LUA_NATIVE_PLAYER_0x14E57F88BA0A07FC_(Hash location)
	{
		PLAYER::_0x14E57F88BA0A07FC(location);
	}

	static Any LUA_NATIVE_PLAYER_0x2E1ABE627C95ED9B_()
	{
		auto retval = PLAYER::_0x2E1ABE627C95ED9B();
		return retval;
	}

	static void LUA_NATIVE_PLAYER_0x497A18F8F88AA9D8_()
	{
		PLAYER::_0x497A18F8F88AA9D8();
	}

	static void LUA_NATIVE_PLAYER_0x4F0D2256AAE94EDA_(int p0)
	{
		PLAYER::_0x4F0D2256AAE94EDA(p0);
	}

	static void LUA_NATIVE_PLAYER_SET_LOCKON_FOCUS_FIRE_VFX_(Player player, sol::stack_object p1)
	{
		PLAYER::_SET_LOCKON_FOCUS_FIRE_VFX(player, p1.is<const char*>() ? p1.as<const char*>() : nullptr);
	}

	static Any LUA_NATIVE_PLAYER_0x0B7803F6F7BB43E0_()
	{
		auto retval = PLAYER::_0x0B7803F6F7BB43E0();
		return retval;
	}

	static Any LUA_NATIVE_PLAYER_0xC74EB3F2EC169F6B_(Any p0)
	{
		auto retval = PLAYER::_0xC74EB3F2EC169F6B(p0);
		return retval;
	}

	static void LUA_NATIVE_PLAYER_0x3B296934DB026873_(Any p0, Any p1)
	{
		PLAYER::_0x3B296934DB026873(p0, p1);
	}

	static void LUA_NATIVE_PLAYER_SET_MIN_TIME_BEFORE_HORSE_BUCKING(Ped mount, int iMinBuckTime)
	{
		PLAYER::SET_MIN_TIME_BEFORE_HORSE_BUCKING(mount, iMinBuckTime);
	}

	static Any LUA_NATIVE_PLAYER_0xF4CB347D7B5EB0FD_()
	{
		auto retval = PLAYER::_0xF4CB347D7B5EB0FD();
		return retval;
	}

	static void LUA_NATIVE_PLAYER_0xCD7CA3013FD12749_(Any p0, Any p1)
	{
		PLAYER::_0xCD7CA3013FD12749(p0, p1);
	}

	static void LUA_NATIVE_PLAYER_FORCE_REST_SCENARIO_(bool toggle)
	{
		PLAYER::_FORCE_REST_SCENARIO(toggle);
	}

	static bool LUA_NATIVE_PLAYER_0x57028FD99886F6F9_()
	{
		auto retval = (bool)PLAYER::_0x57028FD99886F6F9();
		return retval;
	}

	static void LUA_NATIVE_PLAYER_0x35A33783EC3C3448_(Any p0)
	{
		PLAYER::_0x35A33783EC3C3448(p0);
	}

	static void LUA_NATIVE_PLAYER_0x39D8D7082BC34B72_(Any p0)
	{
		PLAYER::_0x39D8D7082BC34B72(p0);
	}

	static void LUA_NATIVE_PLAYER_0x1AD8AD999C27F44A_(Any p0)
	{
		PLAYER::_0x1AD8AD999C27F44A(p0);
	}

	void init_native_binding_PLAYER(sol::state& L)
	{
		auto PLAYER = L["PLAYER"].get_or_create<sol::table>();
		PLAYER.set_function("GET_PLAYER_PED", LUA_NATIVE_PLAYER_GET_PLAYER_PED);
		PLAYER.set_function("GET_PLAYER_PED_2_", LUA_NATIVE_PLAYER_GET_PLAYER_PED_2_);
		PLAYER.set_function("0x325434C68358D282_", LUA_NATIVE_PLAYER_0x325434C68358D282_);
		PLAYER.set_function("GET_PLAYER_PED_SCRIPT_INDEX", LUA_NATIVE_PLAYER_GET_PLAYER_PED_SCRIPT_INDEX);
		PLAYER.set_function("SET_PLAYER_MODEL", LUA_NATIVE_PLAYER_SET_PLAYER_MODEL);
		PLAYER.set_function("NETWORK_HAS_PLAYER_VALID_PED_", LUA_NATIVE_PLAYER_NETWORK_HAS_PLAYER_VALID_PED_);
		PLAYER.set_function("GET_PLAYER_TEAM", LUA_NATIVE_PLAYER_GET_PLAYER_TEAM);
		PLAYER.set_function("SET_PLAYER_TEAM", LUA_NATIVE_PLAYER_SET_PLAYER_TEAM);
		PLAYER.set_function("GET_PLAYER_NAME", LUA_NATIVE_PLAYER_GET_PLAYER_NAME);
		PLAYER.set_function("FORMAT_PLAYER_NAME_STRING_", LUA_NATIVE_PLAYER_FORMAT_PLAYER_NAME_STRING_);
		PLAYER.set_function("GET_WANTED_LEVEL_RADIUS", LUA_NATIVE_PLAYER_GET_WANTED_LEVEL_RADIUS);
		PLAYER.set_function("GET_WANTED_LEVEL_THRESHOLD", LUA_NATIVE_PLAYER_GET_WANTED_LEVEL_THRESHOLD);
		PLAYER.set_function("SET_PLAYER_WANTED_LEVEL", LUA_NATIVE_PLAYER_SET_PLAYER_WANTED_LEVEL);
		PLAYER.set_function("IS_PLAYER_WANTED_LEVEL_GREATER", LUA_NATIVE_PLAYER_IS_PLAYER_WANTED_LEVEL_GREATER);
		PLAYER.set_function("CLEAR_PLAYER_WANTED_LEVEL", LUA_NATIVE_PLAYER_CLEAR_PLAYER_WANTED_LEVEL);
		PLAYER.set_function("IS_PLAYER_DEAD", LUA_NATIVE_PLAYER_IS_PLAYER_DEAD);
		PLAYER.set_function("SET_PLAYER_CONTROL", LUA_NATIVE_PLAYER_SET_PLAYER_CONTROL);
		PLAYER.set_function("GET_PLAYER_WANTED_LEVEL", LUA_NATIVE_PLAYER_GET_PLAYER_WANTED_LEVEL);
		PLAYER.set_function("SET_MAX_WANTED_LEVEL", LUA_NATIVE_PLAYER_SET_MAX_WANTED_LEVEL);
		PLAYER.set_function("SET_MAX_WANTED_LEVEL_2_", LUA_NATIVE_PLAYER_SET_MAX_WANTED_LEVEL_2_);
		PLAYER.set_function("SET_POLICE_RADAR_BLIPS", LUA_NATIVE_PLAYER_SET_POLICE_RADAR_BLIPS);
		PLAYER.set_function("IS_PLAYER_PLAYING", LUA_NATIVE_PLAYER_IS_PLAYER_PLAYING);
		PLAYER.set_function("SET_EVERYONE_IGNORE_PLAYER", LUA_NATIVE_PLAYER_SET_EVERYONE_IGNORE_PLAYER);
		PLAYER.set_function("GET_IS_PLAYER_UI_PROMPT_ACTIVE", LUA_NATIVE_PLAYER_GET_IS_PLAYER_UI_PROMPT_ACTIVE);
		PLAYER.set_function("MODIFY_PLAYER_UI_PROMPT_", LUA_NATIVE_PLAYER_MODIFY_PLAYER_UI_PROMPT_);
		PLAYER.set_function("GET_PLAYER_UI_PROMPT_IS_DISABLED_", LUA_NATIVE_PLAYER_GET_PLAYER_UI_PROMPT_IS_DISABLED_);
		PLAYER.set_function("MODIFY_PLAYER_UI_PROMPT_FOR_PED_", LUA_NATIVE_PLAYER_MODIFY_PLAYER_UI_PROMPT_FOR_PED_);
		PLAYER.set_function("GET_PLAYER_UI_PROMPT_FOR_PED_IS_ENABLED_", LUA_NATIVE_PLAYER_GET_PLAYER_UI_PROMPT_FOR_PED_IS_ENABLED_);
		PLAYER.set_function("0x93624B36E8851B42_", LUA_NATIVE_PLAYER_0x93624B36E8851B42_);
		PLAYER.set_function("0x9073EC5456651A90_", LUA_NATIVE_PLAYER_0x9073EC5456651A90_);
		PLAYER.set_function("0x2E67707BEC52CA4B_", LUA_NATIVE_PLAYER_0x2E67707BEC52CA4B_);
		PLAYER.set_function("SET_ALL_RANDOM_PEDS_FLEE", LUA_NATIVE_PLAYER_SET_ALL_RANDOM_PEDS_FLEE);
		PLAYER.set_function("SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME", LUA_NATIVE_PLAYER_SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME);
		PLAYER.set_function("SET_ALL_NEUTRAL_RANDOM_PEDS_FLEE_THIS_FRAME", LUA_NATIVE_PLAYER_SET_ALL_NEUTRAL_RANDOM_PEDS_FLEE_THIS_FRAME);
		PLAYER.set_function("0x1D256EED194F5B58_", LUA_NATIVE_PLAYER_0x1D256EED194F5B58_);
		PLAYER.set_function("0x5B7B97E99F84138B_", LUA_NATIVE_PLAYER_0x5B7B97E99F84138B_);
		PLAYER.set_function("SET_DISABLE_PLAYER_WANTED_LEVEL_", LUA_NATIVE_PLAYER_SET_DISABLE_PLAYER_WANTED_LEVEL_);
		PLAYER.set_function("GET_WANTED_LEVEL_MULTIPLIER_", LUA_NATIVE_PLAYER_GET_WANTED_LEVEL_MULTIPLIER_);
		PLAYER.set_function("SET_WANTED_LEVEL_MULTIPLIER", LUA_NATIVE_PLAYER_SET_WANTED_LEVEL_MULTIPLIER);
		PLAYER.set_function("RESET_WANTED_LEVEL_DIFFICULTY", LUA_NATIVE_PLAYER_RESET_WANTED_LEVEL_DIFFICULTY);
		PLAYER.set_function("UPDATE_WANTED_POSITION_THIS_FRAME", LUA_NATIVE_PLAYER_UPDATE_WANTED_POSITION_THIS_FRAME);
		PLAYER.set_function("SUPPRESS_WITNESSES_CALLING_POLICE_THIS_FRAME", LUA_NATIVE_PLAYER_SUPPRESS_WITNESSES_CALLING_POLICE_THIS_FRAME);
		PLAYER.set_function("REPORT_POLICE_SPOTTED_PLAYER", LUA_NATIVE_PLAYER_REPORT_POLICE_SPOTTED_PLAYER);
		PLAYER.set_function("SET_LAW_RESPONSE_DELAY_OVERRIDE", LUA_NATIVE_PLAYER_SET_LAW_RESPONSE_DELAY_OVERRIDE);
		PLAYER.set_function("RESET_LAW_RESPONSE_DELAY_OVERRIDE", LUA_NATIVE_PLAYER_RESET_LAW_RESPONSE_DELAY_OVERRIDE);
		PLAYER.set_function("CAN_PLAYER_START_MISSION", LUA_NATIVE_PLAYER_CAN_PLAYER_START_MISSION);
		PLAYER.set_function("IS_PLAYER_READY_FOR_CUTSCENE", LUA_NATIVE_PLAYER_IS_PLAYER_READY_FOR_CUTSCENE);
		PLAYER.set_function("IS_PLAYER_TARGETTING_ENTITY", LUA_NATIVE_PLAYER_IS_PLAYER_TARGETTING_ENTITY);
		PLAYER.set_function("GET_PLAYER_TARGET_ENTITY", LUA_NATIVE_PLAYER_GET_PLAYER_TARGET_ENTITY);
		PLAYER.set_function("0x927861B2C08DBEA5_", LUA_NATIVE_PLAYER_0x927861B2C08DBEA5_);
		PLAYER.set_function("IS_PLAYER_FREE_FOCUSING_", LUA_NATIVE_PLAYER_IS_PLAYER_FREE_FOCUSING_);
		PLAYER.set_function("GET_PLAYER_INTERACTION_TARGET_ENTITY", LUA_NATIVE_PLAYER_GET_PLAYER_INTERACTION_TARGET_ENTITY);
		PLAYER.set_function("0xBEA3A6E5F5F79A6F_", LUA_NATIVE_PLAYER_0xBEA3A6E5F5F79A6F_);
		PLAYER.set_function("IS_PLAYER_IN_SCOPE_", LUA_NATIVE_PLAYER_IS_PLAYER_IN_SCOPE_);
		PLAYER.set_function("IS_PLAYER_FREE_AIMING", LUA_NATIVE_PLAYER_IS_PLAYER_FREE_AIMING);
		PLAYER.set_function("IS_PLAYER_FREE_AIMING_AT_ENTITY", LUA_NATIVE_PLAYER_IS_PLAYER_FREE_AIMING_AT_ENTITY);
		PLAYER.set_function("GET_ENTITY_PLAYER_IS_FREE_AIMING_AT", LUA_NATIVE_PLAYER_GET_ENTITY_PLAYER_IS_FREE_AIMING_AT);
		PLAYER.set_function("0x3DAABE78A23694BC_", LUA_NATIVE_PLAYER_0x3DAABE78A23694BC_);
		PLAYER.set_function("0x7AE93C45EC14A166_", LUA_NATIVE_PLAYER_0x7AE93C45EC14A166_);
		PLAYER.set_function("SET_PLAYER_LOCKON_RANGE_OVERRIDE", LUA_NATIVE_PLAYER_SET_PLAYER_LOCKON_RANGE_OVERRIDE);
		PLAYER.set_function("SET_PLAYER_CAN_BE_HASSLED_BY_GANGS", LUA_NATIVE_PLAYER_SET_PLAYER_CAN_BE_HASSLED_BY_GANGS);
		PLAYER.set_function("SET_PLAYER_CAN_USE_COVER", LUA_NATIVE_PLAYER_SET_PLAYER_CAN_USE_COVER);
		PLAYER.set_function("0xD1A70C1E8D1031FE_", LUA_NATIVE_PLAYER_0xD1A70C1E8D1031FE_);
		PLAYER.set_function("0xACA45DDCEF6071C4_", LUA_NATIVE_PLAYER_0xACA45DDCEF6071C4_);
		PLAYER.set_function("0xA0C683284DF027C7_", LUA_NATIVE_PLAYER_0xA0C683284DF027C7_);
		PLAYER.set_function("SET_PLAYER_CAN_MERCY_KILL_", LUA_NATIVE_PLAYER_SET_PLAYER_CAN_MERCY_KILL_);
		PLAYER.set_function("0x4EC8BE63B8A5D4EF_", LUA_NATIVE_PLAYER_0x4EC8BE63B8A5D4EF_);
		PLAYER.set_function("GET_MAX_WANTED_LEVEL", LUA_NATIVE_PLAYER_GET_MAX_WANTED_LEVEL);
		PLAYER.set_function("IS_PLAYER_TARGETTING_ANYTHING", LUA_NATIVE_PLAYER_IS_PLAYER_TARGETTING_ANYTHING);
		PLAYER.set_function("RESTORE_PLAYER_STAMINA", LUA_NATIVE_PLAYER_RESTORE_PLAYER_STAMINA);
		PLAYER.set_function("0x8591EE69CC3ED257_", LUA_NATIVE_PLAYER_0x8591EE69CC3ED257_);
		PLAYER.set_function("GET_PLAYER_GROUP", LUA_NATIVE_PLAYER_GET_PLAYER_GROUP);
		PLAYER.set_function("0x3D9DA5C9EFD20D88_", LUA_NATIVE_PLAYER_0x3D9DA5C9EFD20D88_);
		PLAYER.set_function("0x2BEED53B912537D0_", LUA_NATIVE_PLAYER_0x2BEED53B912537D0_);
		PLAYER.set_function("0x908D4B72854C8F62_", LUA_NATIVE_PLAYER_0x908D4B72854C8F62_);
		PLAYER.set_function("0xD1F6B912785BFD35_", LUA_NATIVE_PLAYER_0xD1F6B912785BFD35_);
		PLAYER.set_function("0xC4873B053054C04B_", LUA_NATIVE_PLAYER_0xC4873B053054C04B_);
		PLAYER.set_function("0xCA59808E51FD67C4_", LUA_NATIVE_PLAYER_0xCA59808E51FD67C4_);
		PLAYER.set_function("0xBA5CA1FEB5DE0DF6_", LUA_NATIVE_PLAYER_0xBA5CA1FEB5DE0DF6_);
		PLAYER.set_function("0x0869D499A7848309_", LUA_NATIVE_PLAYER_0x0869D499A7848309_);
		PLAYER.set_function("0xB331D8A73F9D2BDF_", LUA_NATIVE_PLAYER_0xB331D8A73F9D2BDF_);
		PLAYER.set_function("ADD_PLAYER_AS_FOLLOW_TARGET_", LUA_NATIVE_PLAYER_ADD_PLAYER_AS_FOLLOW_TARGET_);
		PLAYER.set_function("REMOVE_PLAYER_AS_FOLLOW_TARGET_", LUA_NATIVE_PLAYER_REMOVE_PLAYER_AS_FOLLOW_TARGET_);
		PLAYER.set_function("0x12E09E278C6C29B7_", LUA_NATIVE_PLAYER_0x12E09E278C6C29B7_);
		PLAYER.set_function("0xDD33A82352C4652F_", LUA_NATIVE_PLAYER_0xDD33A82352C4652F_);
		PLAYER.set_function("0x1FDA57E8908F2609_", LUA_NATIVE_PLAYER_0x1FDA57E8908F2609_);
		PLAYER.set_function("0x84481018E668E1B8_", LUA_NATIVE_PLAYER_0x84481018E668E1B8_);
		PLAYER.set_function("0x2009F8AB7A5E9D6D_", LUA_NATIVE_PLAYER_0x2009F8AB7A5E9D6D_);
		PLAYER.set_function("IS_PLAYER_FOLLOWING_TARGET_", LUA_NATIVE_PLAYER_IS_PLAYER_FOLLOWING_TARGET_);
		PLAYER.set_function("0xE7F8707269544B29_", LUA_NATIVE_PLAYER_0xE7F8707269544B29_);
		PLAYER.set_function("0xE631EAF35828FA67_", LUA_NATIVE_PLAYER_0xE631EAF35828FA67_);
		PLAYER.set_function("0x086549F3B0381CB1_", LUA_NATIVE_PLAYER_0x086549F3B0381CB1_);
		PLAYER.set_function("IS_PLAYER_CONTROL_ON", LUA_NATIVE_PLAYER_IS_PLAYER_CONTROL_ON);
		PLAYER.set_function("IS_PLAYER_SCRIPT_CONTROL_ON", LUA_NATIVE_PLAYER_IS_PLAYER_SCRIPT_CONTROL_ON);
		PLAYER.set_function("IS_PLAYER_CLIMBING", LUA_NATIVE_PLAYER_IS_PLAYER_CLIMBING);
		PLAYER.set_function("0xEBB6E27AC2FF32DA_", LUA_NATIVE_PLAYER_0xEBB6E27AC2FF32DA_);
		PLAYER.set_function("0xB15CD2F9932C9AB5_", LUA_NATIVE_PLAYER_0xB15CD2F9932C9AB5_);
		PLAYER.set_function("0x621D1B289CAF5978_", LUA_NATIVE_PLAYER_0x621D1B289CAF5978_);
		PLAYER.set_function("IS_PLAYER_BEING_ARRESTED", LUA_NATIVE_PLAYER_IS_PLAYER_BEING_ARRESTED);
		PLAYER.set_function("RESET_PLAYER_ARREST_STATE", LUA_NATIVE_PLAYER_RESET_PLAYER_ARREST_STATE);
		PLAYER.set_function("0xCBB54CC7FFFFAB86_", LUA_NATIVE_PLAYER_0xCBB54CC7FFFFAB86_);
		PLAYER.set_function("0xBED386157F65942C_", LUA_NATIVE_PLAYER_0xBED386157F65942C_);
		PLAYER.set_function("0xDAB6A2FC56B7DE65_", LUA_NATIVE_PLAYER_0xDAB6A2FC56B7DE65_);
		PLAYER.set_function("0x0F4EAF69DA41AF43_", LUA_NATIVE_PLAYER_0x0F4EAF69DA41AF43_);
		PLAYER.set_function("SET_BOUNTY_TARGET_", LUA_NATIVE_PLAYER_SET_BOUNTY_TARGET_);
		PLAYER.set_function("CLEAR_BOUNTY_TARGET_", LUA_NATIVE_PLAYER_CLEAR_BOUNTY_TARGET_);
		PLAYER.set_function("GET_PLAYERS_LAST_VEHICLE", LUA_NATIVE_PLAYER_GET_PLAYERS_LAST_VEHICLE);
		PLAYER.set_function("GET_PLAYER_INDEX", LUA_NATIVE_PLAYER_GET_PLAYER_INDEX);
		PLAYER.set_function("INT_TO_PLAYERINDEX", LUA_NATIVE_PLAYER_INT_TO_PLAYERINDEX);
		PLAYER.set_function("INT_TO_PARTICIPANTINDEX", LUA_NATIVE_PLAYER_INT_TO_PARTICIPANTINDEX);
		PLAYER.set_function("PLAYER_ID", LUA_NATIVE_PLAYER_PLAYER_ID);
		PLAYER.set_function("PLAYER_PED_ID", LUA_NATIVE_PLAYER_PLAYER_PED_ID);
		PLAYER.set_function("NETWORK_PLAYER_ID_TO_INT", LUA_NATIVE_PLAYER_NETWORK_PLAYER_ID_TO_INT);
		PLAYER.set_function("HAS_FORCE_CLEANUP_OCCURRED", LUA_NATIVE_PLAYER_HAS_FORCE_CLEANUP_OCCURRED);
		PLAYER.set_function("FORCE_CLEANUP", LUA_NATIVE_PLAYER_FORCE_CLEANUP);
		PLAYER.set_function("FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME", LUA_NATIVE_PLAYER_FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME);
		PLAYER.set_function("FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID", LUA_NATIVE_PLAYER_FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID);
		PLAYER.set_function("GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP", LUA_NATIVE_PLAYER_GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP);
		PLAYER.set_function("SET_PLAYER_MOOD_", LUA_NATIVE_PLAYER_SET_PLAYER_MOOD_);
		PLAYER.set_function("GET_PLAYER_MOOD_", LUA_NATIVE_PLAYER_GET_PLAYER_MOOD_);
		PLAYER.set_function("SET_PLAYER_MAY_ONLY_ENTER_THIS_VEHICLE", LUA_NATIVE_PLAYER_SET_PLAYER_MAY_ONLY_ENTER_THIS_VEHICLE);
		PLAYER.set_function("0xC71D07C96946E263_", LUA_NATIVE_PLAYER_0xC71D07C96946E263_);
		PLAYER.set_function("SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE", LUA_NATIVE_PLAYER_SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE);
		PLAYER.set_function("IS_SYSTEM_UI_BEING_DISPLAYED", LUA_NATIVE_PLAYER_IS_SYSTEM_UI_BEING_DISPLAYED);
		PLAYER.set_function("0xD48227263E3D06AE_", LUA_NATIVE_PLAYER_0xD48227263E3D06AE_);
		PLAYER.set_function("0x3946FC742AC305CD_", LUA_NATIVE_PLAYER_0x3946FC742AC305CD_);
		PLAYER.set_function("0xA28056CD1B04B250_", LUA_NATIVE_PLAYER_0xA28056CD1B04B250_);
		PLAYER.set_function("0xC67A4910425F11F1_", LUA_NATIVE_PLAYER_0xC67A4910425F11F1_);
		PLAYER.set_function("SET_PLAYER_INVINCIBLE", LUA_NATIVE_PLAYER_SET_PLAYER_INVINCIBLE);
		PLAYER.set_function("GET_PLAYER_INVINCIBLE", LUA_NATIVE_PLAYER_GET_PLAYER_INVINCIBLE);
		PLAYER.set_function("SET_PLAYER_LOCKON", LUA_NATIVE_PLAYER_SET_PLAYER_LOCKON);
		PLAYER.set_function("SET_LOCKON_TO_FRIENDLY_PLAYERS", LUA_NATIVE_PLAYER_SET_LOCKON_TO_FRIENDLY_PLAYERS);
		PLAYER.set_function("SET_PLAYER_TARGETING_MODE", LUA_NATIVE_PLAYER_SET_PLAYER_TARGETING_MODE);
		PLAYER.set_function("SET_PLAYER_IN_VEHICLE_TARGETING_MODE_", LUA_NATIVE_PLAYER_SET_PLAYER_IN_VEHICLE_TARGETING_MODE_);
		PLAYER.set_function("0x747257807B8721CE_", LUA_NATIVE_PLAYER_0x747257807B8721CE_);
		PLAYER.set_function("0x8702D9150D9FBB3D_", LUA_NATIVE_PLAYER_0x8702D9150D9FBB3D_);
		PLAYER.set_function("0xCB0B9506BC91E441_", LUA_NATIVE_PLAYER_0xCB0B9506BC91E441_);
		PLAYER.set_function("CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED", LUA_NATIVE_PLAYER_CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED);
		PLAYER.set_function("HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED", LUA_NATIVE_PLAYER_HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED);
		PLAYER.set_function("CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED", LUA_NATIVE_PLAYER_CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED);
		PLAYER.set_function("HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED", LUA_NATIVE_PLAYER_HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED);
		PLAYER.set_function("0xEACEBAAE0A33FB3F_", LUA_NATIVE_PLAYER_0xEACEBAAE0A33FB3F_);
		PLAYER.set_function("0x72AD59F7B7FB6E24_", LUA_NATIVE_PLAYER_0x72AD59F7B7FB6E24_);
		PLAYER.set_function("0x1A6E84F13C952094_", LUA_NATIVE_PLAYER_0x1A6E84F13C952094_);
		PLAYER.set_function("SET_PLAYER_DAMAGE_INFO_OVERRIDE_", LUA_NATIVE_PLAYER_SET_PLAYER_DAMAGE_INFO_OVERRIDE_);
		PLAYER.set_function("0x1F488807BC8E0630_", LUA_NATIVE_PLAYER_0x1F488807BC8E0630_);
		PLAYER.set_function("SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE", LUA_NATIVE_PLAYER_SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE);
		PLAYER.set_function("SET_SWIM_MULTIPLIER_FOR_PLAYER", LUA_NATIVE_PLAYER_SET_SWIM_MULTIPLIER_FOR_PLAYER);
		PLAYER.set_function("0x73EB2EF2E92D23BF_", LUA_NATIVE_PLAYER_0x73EB2EF2E92D23BF_);
		PLAYER.set_function("SET_PLAYER_FORCED_AIM", LUA_NATIVE_PLAYER_SET_PLAYER_FORCED_AIM);
		PLAYER.set_function("0x310CE349E0C0EC4B_", LUA_NATIVE_PLAYER_0x310CE349E0C0EC4B_);
		PLAYER.set_function("DISABLE_PLAYER_FIRING", LUA_NATIVE_PLAYER_DISABLE_PLAYER_FIRING);
		PLAYER.set_function("0xEBFF94328FF7A18A_", LUA_NATIVE_PLAYER_0xEBFF94328FF7A18A_);
		PLAYER.set_function("0xF993373285053D77_", LUA_NATIVE_PLAYER_0xF993373285053D77_);
		PLAYER.set_function("0xE956C2340A76272E_", LUA_NATIVE_PLAYER_0xE956C2340A76272E_);
		PLAYER.set_function("ENABLE_CUSTOM_DEADEYE_ABILITY_", LUA_NATIVE_PLAYER_ENABLE_CUSTOM_DEADEYE_ABILITY_);
		PLAYER.set_function("0xDE6C85975F9D4894_", LUA_NATIVE_PLAYER_0xDE6C85975F9D4894_);
		PLAYER.set_function("0xBBA140062B15A8AC_", LUA_NATIVE_PLAYER_0xBBA140062B15A8AC_);
		PLAYER.set_function("SPECIAL_ABILITY_SET_DISABLED_", LUA_NATIVE_PLAYER_SPECIAL_ABILITY_SET_DISABLED_);
		PLAYER.set_function("IS_SPECIAL_ABILITY_ACTIVE_", LUA_NATIVE_PLAYER_IS_SPECIAL_ABILITY_ACTIVE_);
		PLAYER.set_function("MODIFY_INFINITE_TRAIL_VISION_", LUA_NATIVE_PLAYER_MODIFY_INFINITE_TRAIL_VISION_);
		PLAYER.set_function("SPECIAL_ABILITY_SET_EAGLE_EYE_DISABLED_", LUA_NATIVE_PLAYER_SPECIAL_ABILITY_SET_EAGLE_EYE_DISABLED_);
		PLAYER.set_function("SPECIAL_ABILITY_RESTORE_BY_AMOUNT_", LUA_NATIVE_PLAYER_SPECIAL_ABILITY_RESTORE_BY_AMOUNT_);
		PLAYER.set_function("0xFA437FA0738C370C_", LUA_NATIVE_PLAYER_0xFA437FA0738C370C_);
		PLAYER.set_function("SPECIAL_ABILITY_RESTORE_OUTER_RING_", LUA_NATIVE_PLAYER_SPECIAL_ABILITY_RESTORE_OUTER_RING_);
		PLAYER.set_function("GET_PLAYER_REQUIRED_DEAD_EYE_AMOUNT_", LUA_NATIVE_PLAYER_GET_PLAYER_REQUIRED_DEAD_EYE_AMOUNT_);
		PLAYER.set_function("SPECIAL_ABILITY_GET_AMOUNT_CACHED_", LUA_NATIVE_PLAYER_SPECIAL_ABILITY_GET_AMOUNT_CACHED_);
		PLAYER.set_function("SPECIAL_ABILITY_DRAIN_BY_AMOUNT_", LUA_NATIVE_PLAYER_SPECIAL_ABILITY_DRAIN_BY_AMOUNT_);
		PLAYER.set_function("SPECIAL_ABILITY_START_RESTORE_", LUA_NATIVE_PLAYER_SPECIAL_ABILITY_START_RESTORE_);
		PLAYER.set_function("SET_SPECIAL_ABILITY_MULTIPLIER_", LUA_NATIVE_PLAYER_SET_SPECIAL_ABILITY_MULTIPLIER_);
		PLAYER.set_function("GET_PLAYER_SPECIAL_ABILITY_MULTIPLIER_", LUA_NATIVE_PLAYER_GET_PLAYER_SPECIAL_ABILITY_MULTIPLIER_);
		PLAYER.set_function("SET_SPECIAL_ABILITY_TYPE_", LUA_NATIVE_PLAYER_SET_SPECIAL_ABILITY_TYPE_);
		PLAYER.set_function("0x22B3CABEDDB538B2_", LUA_NATIVE_PLAYER_0x22B3CABEDDB538B2_);
		PLAYER.set_function("SET_SPECIAL_ABILITY_DURATION_COST_", LUA_NATIVE_PLAYER_SET_SPECIAL_ABILITY_DURATION_COST_);
		PLAYER.set_function("SET_SPECIAL_ABILITY_DISABLE_TIMER_", LUA_NATIVE_PLAYER_SET_SPECIAL_ABILITY_DISABLE_TIMER_);
		PLAYER.set_function("0x57D9991DC1334151_", LUA_NATIVE_PLAYER_0x57D9991DC1334151_);
		PLAYER.set_function("0x21091B4BEB6376EE_", LUA_NATIVE_PLAYER_0x21091B4BEB6376EE_);
		PLAYER.set_function("SET_SPECIAL_ABILITY_ACTIVATION_COST_", LUA_NATIVE_PLAYER_SET_SPECIAL_ABILITY_ACTIVATION_COST_);
		PLAYER.set_function("0x4D1699543B1C023C_", LUA_NATIVE_PLAYER_0x4D1699543B1C023C_);
		PLAYER.set_function("GET_PLAYER_DEAD_EYE_METER_LEVEL_", LUA_NATIVE_PLAYER_GET_PLAYER_DEAD_EYE_METER_LEVEL_);
		PLAYER.set_function("GET_PLAYER_DEAD_EYE_", LUA_NATIVE_PLAYER_GET_PLAYER_DEAD_EYE_);
		PLAYER.set_function("GET_PLAYER_CACHED_DEAD_EYE_AMOUNT_", LUA_NATIVE_PLAYER_GET_PLAYER_CACHED_DEAD_EYE_AMOUNT_);
		PLAYER.set_function("GET_PLAYER_MAX_DEAD_EYE_", LUA_NATIVE_PLAYER_GET_PLAYER_MAX_DEAD_EYE_);
		PLAYER.set_function("GET_PLAYER_HEALTH_", LUA_NATIVE_PLAYER_GET_PLAYER_HEALTH_);
		PLAYER.set_function("GET_PLAYER_STAMINA_", LUA_NATIVE_PLAYER_GET_PLAYER_STAMINA_);
		PLAYER.set_function("SET_PLAYER_STAT_FLAG_HASH_", LUA_NATIVE_PLAYER_SET_PLAYER_STAT_FLAG_HASH_);
		PLAYER.set_function("SET_USED_ITEM_EFFECT_", LUA_NATIVE_PLAYER_SET_USED_ITEM_EFFECT_);
		PLAYER.set_function("0x08E22898A6AF4905_", LUA_NATIVE_PLAYER_0x08E22898A6AF4905_);
		PLAYER.set_function("0xBEFED69CE8317F91_", LUA_NATIVE_PLAYER_0xBEFED69CE8317F91_);
		PLAYER.set_function("ENABLE_EAGLEEYE_", LUA_NATIVE_PLAYER_ENABLE_EAGLEEYE_);
		PLAYER.set_function("IS_SECONDARY_SPECIAL_ABILITY_ENABLED_", LUA_NATIVE_PLAYER_IS_SECONDARY_SPECIAL_ABILITY_ENABLED_);
		PLAYER.set_function("SECONDARY_SPECIAL_ABILITY_SET_ACTIVE_", LUA_NATIVE_PLAYER_SECONDARY_SPECIAL_ABILITY_SET_ACTIVE_);
		PLAYER.set_function("SECONDARY_SPECIAL_ABILITY_SET_DISABLED_", LUA_NATIVE_PLAYER_SECONDARY_SPECIAL_ABILITY_SET_DISABLED_);
		PLAYER.set_function("IS_SECONDARY_SPECIAL_ABILITY_ACTIVE_", LUA_NATIVE_PLAYER_IS_SECONDARY_SPECIAL_ABILITY_ACTIVE_);
		PLAYER.set_function("0x107F2A66E1C4C83A_", LUA_NATIVE_PLAYER_0x107F2A66E1C4C83A_);
		PLAYER.set_function("START_PLAYER_TELEPORT", LUA_NATIVE_PLAYER_START_PLAYER_TELEPORT);
		PLAYER.set_function("0x2C2D287748E8E9B7_", LUA_NATIVE_PLAYER_0x2C2D287748E8E9B7_);
		PLAYER.set_function("UPDATE_PLAYER_TELEPORT", LUA_NATIVE_PLAYER_UPDATE_PLAYER_TELEPORT);
		PLAYER.set_function("STOP_PLAYER_TELEPORT", LUA_NATIVE_PLAYER_STOP_PLAYER_TELEPORT);
		PLAYER.set_function("IS_PLAYER_TELEPORT_ACTIVE", LUA_NATIVE_PLAYER_IS_PLAYER_TELEPORT_ACTIVE);
		PLAYER.set_function("GET_PLAYER_CURRENT_STEALTH_NOISE", LUA_NATIVE_PLAYER_GET_PLAYER_CURRENT_STEALTH_NOISE);
		PLAYER.set_function("SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER", LUA_NATIVE_PLAYER_SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER);
		PLAYER.set_function("GET_PLAYER_HEALTH_RECHARGE_MULTIPLIER_", LUA_NATIVE_PLAYER_GET_PLAYER_HEALTH_RECHARGE_MULTIPLIER_);
		PLAYER.set_function("SET_PLAYER_HEALTH_RECHARGE_TIME_MODIFIER_", LUA_NATIVE_PLAYER_SET_PLAYER_HEALTH_RECHARGE_TIME_MODIFIER_);
		PLAYER.set_function("SET_PLAYER_STAMINA_RECHARGE_MULTIPLIER", LUA_NATIVE_PLAYER_SET_PLAYER_STAMINA_RECHARGE_MULTIPLIER);
		PLAYER.set_function("GET_PLAYER_STAMINA_RECHARGE_MULTIPLIER_", LUA_NATIVE_PLAYER_GET_PLAYER_STAMINA_RECHARGE_MULTIPLIER_);
		PLAYER.set_function("SET_PLAYER_STAMINA_SPRINT_DEPLETION_MULTIPLIER_", LUA_NATIVE_PLAYER_SET_PLAYER_STAMINA_SPRINT_DEPLETION_MULTIPLIER_);
		PLAYER.set_function("GET_PLAYER_STAMINA_DEPLETION_MULTIPLIER_", LUA_NATIVE_PLAYER_GET_PLAYER_STAMINA_DEPLETION_MULTIPLIER_);
		PLAYER.set_function("SET_PED_ACTIVE_PLAYER_HORSE_", LUA_NATIVE_PLAYER_SET_PED_ACTIVE_PLAYER_HORSE_);
		PLAYER.set_function("GET_ACTIVE_HORSE_FOR_PLAYER_", LUA_NATIVE_PLAYER_GET_ACTIVE_HORSE_FOR_PLAYER_);
		PLAYER.set_function("SET_PED_AS_SADDLE_HORSE_FOR_PLAYER_", LUA_NATIVE_PLAYER_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER_);
		PLAYER.set_function("GET_SADDLE_HORSE_FOR_PLAYER_", LUA_NATIVE_PLAYER_GET_SADDLE_HORSE_FOR_PLAYER_);
		PLAYER.set_function("SET_PED_AS_TEMP_PLAYER_HORSE", LUA_NATIVE_PLAYER_SET_PED_AS_TEMP_PLAYER_HORSE);
		PLAYER.set_function("GET_TEMP_PLAYER_HORSE_", LUA_NATIVE_PLAYER_GET_TEMP_PLAYER_HORSE_);
		PLAYER.set_function("0x77B0B6D17A3AC9AA_", LUA_NATIVE_PLAYER_0x77B0B6D17A3AC9AA_);
		PLAYER.set_function("SET_PLAYER_MOUNT_STATE_ACTIVE_", LUA_NATIVE_PLAYER_SET_PLAYER_MOUNT_STATE_ACTIVE_);
		PLAYER.set_function("0x694FFA4308060CD1_", LUA_NATIVE_PLAYER_0x694FFA4308060CD1_);
		PLAYER.set_function("BOOST_PLAYER_HORSE_SPEED_FOR_TIME", LUA_NATIVE_PLAYER_BOOST_PLAYER_HORSE_SPEED_FOR_TIME);
		PLAYER.set_function("SET_PLAYER_WEAPON_DAMAGE_MODIFIER", LUA_NATIVE_PLAYER_SET_PLAYER_WEAPON_DAMAGE_MODIFIER);
		PLAYER.set_function("SET_PLAYER_WEAPON_DEFENSE_MODIFIER", LUA_NATIVE_PLAYER_SET_PLAYER_WEAPON_DEFENSE_MODIFIER);
		PLAYER.set_function("0x818241B3EDA84191_", LUA_NATIVE_PLAYER_0x818241B3EDA84191_);
		PLAYER.set_function("SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER", LUA_NATIVE_PLAYER_SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER);
		PLAYER.set_function("SET_PLAYER_EXPLOSIVE_WEAPON_DAMAGE_MODIFIER_", LUA_NATIVE_PLAYER_SET_PLAYER_EXPLOSIVE_WEAPON_DAMAGE_MODIFIER_);
		PLAYER.set_function("0x83C989D5B5B5B466_", LUA_NATIVE_PLAYER_0x83C989D5B5B5B466_);
		PLAYER.set_function("0x03B4B759A8990505_", LUA_NATIVE_PLAYER_0x03B4B759A8990505_);
		PLAYER.set_function("0x67659A8F248E0141_", LUA_NATIVE_PLAYER_0x67659A8F248E0141_);
		PLAYER.set_function("SET_RECEIVED_HORSEBACK_DAMAGE_DECREASE_", LUA_NATIVE_PLAYER_SET_RECEIVED_HORSEBACK_DAMAGE_DECREASE_);
		PLAYER.set_function("SET_AI_PLAYER_DEFENSE_MODIFIER_AGAINST_AI_", LUA_NATIVE_PLAYER_SET_AI_PLAYER_DEFENSE_MODIFIER_AGAINST_AI_);
		PLAYER.set_function("GET_AI_PLAYER_DEFENSE_MODIFIER_AGAINST_AI_", LUA_NATIVE_PLAYER_GET_AI_PLAYER_DEFENSE_MODIFIER_AGAINST_AI_);
		PLAYER.set_function("0x19B2C7A6C34FAD54_", LUA_NATIVE_PLAYER_0x19B2C7A6C34FAD54_);
		PLAYER.set_function("0x9422743A5BA50E10_", LUA_NATIVE_PLAYER_0x9422743A5BA50E10_);
		PLAYER.set_function("SET_PLAYER_DEFENSE_MODIFIER_", LUA_NATIVE_PLAYER_SET_PLAYER_DEFENSE_MODIFIER_);
		PLAYER.set_function("SET_PLAYER_DEFENSE_TYPE_MODIFIER_", LUA_NATIVE_PLAYER_SET_PLAYER_DEFENSE_TYPE_MODIFIER_);
		PLAYER.set_function("SET_PLAYER_WEAPON_TYPE_DAMAGE_MODIFIER", LUA_NATIVE_PLAYER_SET_PLAYER_WEAPON_TYPE_DAMAGE_MODIFIER);
		PLAYER.set_function("GET_PLAYER_WEAPON_DAMAGE_", LUA_NATIVE_PLAYER_GET_PLAYER_WEAPON_DAMAGE_);
		PLAYER.set_function("0x5C2E5E3CAEEB1F58_", LUA_NATIVE_PLAYER_0x5C2E5E3CAEEB1F58_);
		PLAYER.set_function("SET_PLAYER_WEAPON_GROUP_DAMAGE_MODIFIER_", LUA_NATIVE_PLAYER_SET_PLAYER_WEAPON_GROUP_DAMAGE_MODIFIER_);
		PLAYER.set_function("SET_PLAYER_WEAPON_GROUP_AS_INSTANT_KILL_", LUA_NATIVE_PLAYER_SET_PLAYER_WEAPON_GROUP_AS_INSTANT_KILL_);
		PLAYER.set_function("SET_PLAYER_TRAMPLE_DAMAGE_MODIFIER_", LUA_NATIVE_PLAYER_SET_PLAYER_TRAMPLE_DAMAGE_MODIFIER_);
		PLAYER.set_function("SET_PLAYER_LASSO_DAMAGE_PER_SECOND_", LUA_NATIVE_PLAYER_SET_PLAYER_LASSO_DAMAGE_PER_SECOND_);
		PLAYER.set_function("SET_PLAYER_TOTAL_ACCURACY_MODIFIER_", LUA_NATIVE_PLAYER_SET_PLAYER_TOTAL_ACCURACY_MODIFIER_);
		PLAYER.set_function("SET_PLAYER_LOCAL_ACCURACY_FLOOR_MODIFIER_", LUA_NATIVE_PLAYER_SET_PLAYER_LOCAL_ACCURACY_FLOOR_MODIFIER_);
		PLAYER.set_function("SET_PLAYER_REMOTE_ACCURACY_FLOOR_MODIFIER_", LUA_NATIVE_PLAYER_SET_PLAYER_REMOTE_ACCURACY_FLOOR_MODIFIER_);
		PLAYER.set_function("0x3AD212429E095EFB_", LUA_NATIVE_PLAYER_0x3AD212429E095EFB_);
		PLAYER.set_function("SET_PLAYER_NOISE_MULTIPLIER", LUA_NATIVE_PLAYER_SET_PLAYER_NOISE_MULTIPLIER);
		PLAYER.set_function("0x113EF458AB6CDA67_", LUA_NATIVE_PLAYER_0x113EF458AB6CDA67_);
		PLAYER.set_function("SET_PLAYER_SNEAKING_NOISE_MULTIPLIER", LUA_NATIVE_PLAYER_SET_PLAYER_SNEAKING_NOISE_MULTIPLIER);
		PLAYER.set_function("SIMULATE_PLAYER_INPUT_GAIT", LUA_NATIVE_PLAYER_SIMULATE_PLAYER_INPUT_GAIT);
		PLAYER.set_function("RESET_PLAYER_INPUT_GAIT", LUA_NATIVE_PLAYER_RESET_PLAYER_INPUT_GAIT);
		PLAYER.set_function("SET_PLAYER_SIMULATE_AIMING", LUA_NATIVE_PLAYER_SET_PLAYER_SIMULATE_AIMING);
		PLAYER.set_function("SET_PLAYER_CLOTH_PIN_FRAMES", LUA_NATIVE_PLAYER_SET_PLAYER_CLOTH_PIN_FRAMES);
		PLAYER.set_function("HAS_PLAYER_BEEN_SPOTTED_IN_STOLEN_VEHICLE", LUA_NATIVE_PLAYER_HAS_PLAYER_BEEN_SPOTTED_IN_STOLEN_VEHICLE);
		PLAYER.set_function("GET_PLAYER_RECEIVED_BATTLE_EVENT_RECENTLY", LUA_NATIVE_PLAYER_GET_PLAYER_RECEIVED_BATTLE_EVENT_RECENTLY);
		PLAYER.set_function("SET_MOUNT_PROMPT_DISABLED_", LUA_NATIVE_PLAYER_SET_MOUNT_PROMPT_DISABLED_);
		PLAYER.set_function("IS_PLAYER_RIDING_TRAIN", LUA_NATIVE_PLAYER_IS_PLAYER_RIDING_TRAIN);
		PLAYER.set_function("0x9AFCF9FE1884BF62_", LUA_NATIVE_PLAYER_0x9AFCF9FE1884BF62_);
		PLAYER.set_function("0x1E8099F449ABB0BA_", LUA_NATIVE_PLAYER_0x1E8099F449ABB0BA_);
		PLAYER.set_function("GET_DEADEYE_ABILITY_LEVEL_", LUA_NATIVE_PLAYER_GET_DEADEYE_ABILITY_LEVEL_);
		PLAYER.set_function("SET_DEADEYE_ABILITY_LEVEL_", LUA_NATIVE_PLAYER_SET_DEADEYE_ABILITY_LEVEL_);
		PLAYER.set_function("IS_DEADEYE_ABILITY_LOCKED_", LUA_NATIVE_PLAYER_IS_DEADEYE_ABILITY_LOCKED_);
		PLAYER.set_function("SET_DEADEYE_ABILITY_LOCKED_", LUA_NATIVE_PLAYER_SET_DEADEYE_ABILITY_LOCKED_);
		PLAYER.set_function("SET_DEADEYE_TAGGING_ENABLED_", LUA_NATIVE_PLAYER_SET_DEADEYE_TAGGING_ENABLED_);
		PLAYER.set_function("GET_IS_DEADEYE_TAGGING_ENABLED_", LUA_NATIVE_PLAYER_GET_IS_DEADEYE_TAGGING_ENABLED_);
		PLAYER.set_function("0x3C4AE8506638C7E2_", LUA_NATIVE_PLAYER_0x3C4AE8506638C7E2_);
		PLAYER.set_function("0x51139D8C17B16FBC_", LUA_NATIVE_PLAYER_0x51139D8C17B16FBC_);
		PLAYER.set_function("0x8F44EBB3BA8F6D44_", LUA_NATIVE_PLAYER_0x8F44EBB3BA8F6D44_);
		PLAYER.set_function("SET_DEADEYE_TAGGING_CONFIG_", LUA_NATIVE_PLAYER_SET_DEADEYE_TAGGING_CONFIG_);
		PLAYER.set_function("0xE92261BD28C0878F_", LUA_NATIVE_PLAYER_0xE92261BD28C0878F_);
		PLAYER.set_function("SET_DEADEYE_ABILITY_DEPLETION_DELAY_", LUA_NATIVE_PLAYER_SET_DEADEYE_ABILITY_DEPLETION_DELAY_);
		PLAYER.set_function("0xA54000D4BFD90BDE_", LUA_NATIVE_PLAYER_0xA54000D4BFD90BDE_);
		PLAYER.set_function("0x6EDB5D08CB03E763_", LUA_NATIVE_PLAYER_0x6EDB5D08CB03E763_);
		PLAYER.set_function("0x27AD7162D3FED01E_", LUA_NATIVE_PLAYER_0x27AD7162D3FED01E_);
		PLAYER.set_function("GET_NUM_MARKED_DEADEYE_TARGETS_", LUA_NATIVE_PLAYER_GET_NUM_MARKED_DEADEYE_TARGETS_);
		PLAYER.set_function("0xC93A9A45430D484E_", LUA_NATIVE_PLAYER_0xC93A9A45430D484E_);
		PLAYER.set_function("0x570A13A4CA2799BB_", LUA_NATIVE_PLAYER_0x570A13A4CA2799BB_);
		PLAYER.set_function("0x3ACAC8832E77BC93_", LUA_NATIVE_PLAYER_0x3ACAC8832E77BC93_);
		PLAYER.set_function("0x2B12B6FC8B8772AB_", LUA_NATIVE_PLAYER_0x2B12B6FC8B8772AB_);
		PLAYER.set_function("0xE910932F4B30BE23_", LUA_NATIVE_PLAYER_0xE910932F4B30BE23_);
		PLAYER.set_function("0x131E294EF60160DF_", LUA_NATIVE_PLAYER_0x131E294EF60160DF_);
		PLAYER.set_function("0x0E9057A9DA78D0F8_", LUA_NATIVE_PLAYER_0x0E9057A9DA78D0F8_);
		PLAYER.set_function("0x263D69767F76059C_", LUA_NATIVE_PLAYER_0x263D69767F76059C_);
		PLAYER.set_function("REGISTER_EAGLE_EYE_FOR_ENTITY_", LUA_NATIVE_PLAYER_REGISTER_EAGLE_EYE_FOR_ENTITY_);
		PLAYER.set_function("REGISTER_EAGLE_EYE_TRAILS_FOR_ENTITY_", LUA_NATIVE_PLAYER_REGISTER_EAGLE_EYE_TRAILS_FOR_ENTITY_);
		PLAYER.set_function("UNREGISTER_EAGLE_EYE_FOR_ENTITY_", LUA_NATIVE_PLAYER_UNREGISTER_EAGLE_EYE_FOR_ENTITY_);
		PLAYER.set_function("UNREGISTER_EAGLE_EYE_TRAILS_FOR_ENTITY_", LUA_NATIVE_PLAYER_UNREGISTER_EAGLE_EYE_TRAILS_FOR_ENTITY_);
		PLAYER.set_function("0xE5D3EB37ABC1EB03_", LUA_NATIVE_PLAYER_0xE5D3EB37ABC1EB03_);
		PLAYER.set_function("IS_EAGLE_EYE_REGISTERED_FOR_ENTITY_", LUA_NATIVE_PLAYER_IS_EAGLE_EYE_REGISTERED_FOR_ENTITY_);
		PLAYER.set_function("0x6852288340B43239_", LUA_NATIVE_PLAYER_0x6852288340B43239_);
		PLAYER.set_function("0xE50A67C33514A390_", LUA_NATIVE_PLAYER_0xE50A67C33514A390_);
		PLAYER.set_function("0xD288E02E364972D2_", LUA_NATIVE_PLAYER_0xD288E02E364972D2_);
		PLAYER.set_function("EAGLE_EYE_DISABLE_TRACKING_TRAIL_", LUA_NATIVE_PLAYER_EAGLE_EYE_DISABLE_TRACKING_TRAIL_);
		PLAYER.set_function("0x6ECFC621A168424C_", LUA_NATIVE_PLAYER_0x6ECFC621A168424C_);
		PLAYER.set_function("0xDC5E09D012D759C4_", LUA_NATIVE_PLAYER_0xDC5E09D012D759C4_);
		PLAYER.set_function("0x00B156AFEBCC5AE0_", LUA_NATIVE_PLAYER_0x00B156AFEBCC5AE0_);
		PLAYER.set_function("0xC58CE6824E604DEC_", LUA_NATIVE_PLAYER_0xC58CE6824E604DEC_);
		PLAYER.set_function("0x330CA55A3647FA1C_", LUA_NATIVE_PLAYER_0x330CA55A3647FA1C_);
		PLAYER.set_function("0xA62BBAAE67A05BB0_", LUA_NATIVE_PLAYER_0xA62BBAAE67A05BB0_);
		PLAYER.set_function("EAGLE_EYE_SET_COLOR_", LUA_NATIVE_PLAYER_EAGLE_EYE_SET_COLOR_);
		PLAYER.set_function("0x22C8B10802301381_", LUA_NATIVE_PLAYER_0x22C8B10802301381_);
		PLAYER.set_function("EAGLE_EYE_SET_DRAIN_RATE_MODIFIER_", LUA_NATIVE_PLAYER_EAGLE_EYE_SET_DRAIN_RATE_MODIFIER_);
		PLAYER.set_function("0x06E1FB78B1E59CA5_", LUA_NATIVE_PLAYER_0x06E1FB78B1E59CA5_);
		PLAYER.set_function("EAGLE_EYE_SET_PLUS_FLAG_DISABLED_", LUA_NATIVE_PLAYER_EAGLE_EYE_SET_PLUS_FLAG_DISABLED_);
		PLAYER.set_function("0x3813E11A378958A5_", LUA_NATIVE_PLAYER_0x3813E11A378958A5_);
		PLAYER.set_function("EAGLE_EYE_SET_FOCUS_ON_ASSOCIATED_CLUE_TRAIL_", LUA_NATIVE_PLAYER_EAGLE_EYE_SET_FOCUS_ON_ASSOCIATED_CLUE_TRAIL_);
		PLAYER.set_function("0x0F9CF06986300875_", LUA_NATIVE_PLAYER_0x0F9CF06986300875_);
		PLAYER.set_function("EAGLE_EYE_SET_TRACKING_UPGRADE_", LUA_NATIVE_PLAYER_EAGLE_EYE_SET_TRACKING_UPGRADE_);
		PLAYER.set_function("EAGLE_EYE_SET_TRACKING_UPGRADE_2_", LUA_NATIVE_PLAYER_EAGLE_EYE_SET_TRACKING_UPGRADE_2_);
		PLAYER.set_function("0x1DA5C5B0923E1B85_", LUA_NATIVE_PLAYER_0x1DA5C5B0923E1B85_);
		PLAYER.set_function("0xAAED694CE814817F_", LUA_NATIVE_PLAYER_0xAAED694CE814817F_);
		PLAYER.set_function("EAGLE_EYE_SET_CUSTOM_ENTITY_TINT", LUA_NATIVE_PLAYER_EAGLE_EYE_SET_CUSTOM_ENTITY_TINT);
		PLAYER.set_function("0xBC02B3D151D3859F_", LUA_NATIVE_PLAYER_0xBC02B3D151D3859F_);
		PLAYER.set_function("EAGLE_EYE_SET_CUSTOM_DISTANCE_", LUA_NATIVE_PLAYER_EAGLE_EYE_SET_CUSTOM_DISTANCE_);
		PLAYER.set_function("0xF21C7A3F3FFBA629_", LUA_NATIVE_PLAYER_0xF21C7A3F3FFBA629_);
		PLAYER.set_function("SET_PLAYER_MANAGE_BUFF_SUPER_JUMP_", LUA_NATIVE_PLAYER_SET_PLAYER_MANAGE_BUFF_SUPER_JUMP_);
		PLAYER.set_function("SET_LOCAL_PLAYER_PERSONA_ABILITY_FLAG_", LUA_NATIVE_PLAYER_SET_LOCAL_PLAYER_PERSONA_ABILITY_FLAG_);
		PLAYER.set_function("SET_PLAYER_MAX_AMMO_OVERRIDE_FOR_AMMO_TYPE_", LUA_NATIVE_PLAYER_SET_PLAYER_MAX_AMMO_OVERRIDE_FOR_AMMO_TYPE_);
		PLAYER.set_function("0xC900A465364A85D6_", LUA_NATIVE_PLAYER_0xC900A465364A85D6_);
		PLAYER.set_function("0xCFB2EED4FCB7BD77_", LUA_NATIVE_PLAYER_0xCFB2EED4FCB7BD77_);
		PLAYER.set_function("0x2BB8D58E88777499_", LUA_NATIVE_PLAYER_0x2BB8D58E88777499_);
		PLAYER.set_function("0x00EB5A760638DB55_", LUA_NATIVE_PLAYER_0x00EB5A760638DB55_);
		PLAYER.set_function("0x65887EAC535A0B0C_", LUA_NATIVE_PLAYER_0x65887EAC535A0B0C_);
		PLAYER.set_function("SET_WEAPON_DEGRADATION_MODIFIER_", LUA_NATIVE_PLAYER_SET_WEAPON_DEGRADATION_MODIFIER_);
		PLAYER.set_function("SET_BOW_DRAW_REDUCTION_TIME_IN_DEADEYE_", LUA_NATIVE_PLAYER_SET_BOW_DRAW_REDUCTION_TIME_IN_DEADEYE_);
		PLAYER.set_function("SET_BOW_STAMINA_DRAIN_SPEED_", LUA_NATIVE_PLAYER_SET_BOW_STAMINA_DRAIN_SPEED_);
		PLAYER.set_function("SET_DAMAGE_CLOSE_DISTANCE_BONUS_", LUA_NATIVE_PLAYER_SET_DAMAGE_CLOSE_DISTANCE_BONUS_);
		PLAYER.set_function("SET_DAMAGE_CLOSE_DISTANCE_BONUS_TOTAL_", LUA_NATIVE_PLAYER_SET_DAMAGE_CLOSE_DISTANCE_BONUS_TOTAL_);
		PLAYER.set_function("SET_DAMAGE_FAR_DISTANCE_BONUS_", LUA_NATIVE_PLAYER_SET_DAMAGE_FAR_DISTANCE_BONUS_);
		PLAYER.set_function("SET_DAMAGE_FAR_DISTANCE_BONUS_TOTAL_", LUA_NATIVE_PLAYER_SET_DAMAGE_FAR_DISTANCE_BONUS_TOTAL_);
		PLAYER.set_function("0x6C54E69516CC56BD_", LUA_NATIVE_PLAYER_0x6C54E69516CC56BD_);
		PLAYER.set_function("0x3A8611BD7BDE84F7_", LUA_NATIVE_PLAYER_0x3A8611BD7BDE84F7_);
		PLAYER.set_function("0xC177C827CEFC0AA4_", LUA_NATIVE_PLAYER_0xC177C827CEFC0AA4_);
		PLAYER.set_function("0xBD96185264DDAAEA_", LUA_NATIVE_PLAYER_0xBD96185264DDAAEA_);
		PLAYER.set_function("0x628E742FE1F79C4A_", LUA_NATIVE_PLAYER_0x628E742FE1F79C4A_);
		PLAYER.set_function("SET_PLAYER_INTERACTION_POSITIVE_RESPONSE_", LUA_NATIVE_PLAYER_SET_PLAYER_INTERACTION_POSITIVE_RESPONSE_);
		PLAYER.set_function("SET_PLAYER_INTERACTION_NEGATIVE_RESPONSE_", LUA_NATIVE_PLAYER_SET_PLAYER_INTERACTION_NEGATIVE_RESPONSE_);
		PLAYER.set_function("0x216BC0D3D2E413D2_", LUA_NATIVE_PLAYER_0x216BC0D3D2E413D2_);
		PLAYER.set_function("0x45EF176B532CA851_", LUA_NATIVE_PLAYER_0x45EF176B532CA851_);
		PLAYER.set_function("0xA342495F93B7B838_", LUA_NATIVE_PLAYER_0xA342495F93B7B838_);
		PLAYER.set_function("0x3BB84F812E052C90_", LUA_NATIVE_PLAYER_0x3BB84F812E052C90_);
		PLAYER.set_function("0x9FC5A003FB76EDBD_", LUA_NATIVE_PLAYER_0x9FC5A003FB76EDBD_);
		PLAYER.set_function("0x0FAF95D71ED67ADE_", LUA_NATIVE_PLAYER_0x0FAF95D71ED67ADE_);
		PLAYER.set_function("0x988C9045531B9FCE_", LUA_NATIVE_PLAYER_0x988C9045531B9FCE_);
		PLAYER.set_function("0x06C3DB00B69D5435_", LUA_NATIVE_PLAYER_0x06C3DB00B69D5435_);
		PLAYER.set_function("0xBB6EA5D59E926095_", LUA_NATIVE_PLAYER_0xBB6EA5D59E926095_);
		PLAYER.set_function("0xE1D356F5A66D0FFA_", LUA_NATIVE_PLAYER_0xE1D356F5A66D0FFA_);
		PLAYER.set_function("0x929DDD5538F3DF1F_", LUA_NATIVE_PLAYER_0x929DDD5538F3DF1F_);
		PLAYER.set_function("0xFA7DAAE3959E6C7B_", LUA_NATIVE_PLAYER_0xFA7DAAE3959E6C7B_);
		PLAYER.set_function("0x9461A8FAB0378E5B_", LUA_NATIVE_PLAYER_0x9461A8FAB0378E5B_);
		PLAYER.set_function("0xCB61A63AA53D7D22_", LUA_NATIVE_PLAYER_0xCB61A63AA53D7D22_);
		PLAYER.set_function("0xCFFC3ECCD7A5CCEB_", LUA_NATIVE_PLAYER_0xCFFC3ECCD7A5CCEB_);
		PLAYER.set_function("0x76F7E1BCD623A429_", LUA_NATIVE_PLAYER_0x76F7E1BCD623A429_);
		PLAYER.set_function("0x585CE159DB46FADB_", LUA_NATIVE_PLAYER_0x585CE159DB46FADB_);
		PLAYER.set_function("SET_PLAYER_RESET_FLAG_", LUA_NATIVE_PLAYER_SET_PLAYER_RESET_FLAG_);
		PLAYER.set_function("GET_PLAYER_RESET_FLAG_", LUA_NATIVE_PLAYER_GET_PLAYER_RESET_FLAG_);
		PLAYER.set_function("GET_MOUNT_OWNED_BY_PLAYER", LUA_NATIVE_PLAYER_GET_MOUNT_OWNED_BY_PLAYER);
		PLAYER.set_function("GET_PLAYER_OWNER_OF_MOUNT_", LUA_NATIVE_PLAYER_GET_PLAYER_OWNER_OF_MOUNT_);
		PLAYER.set_function("SET_PLAYER_OWNS_MOUNT_", LUA_NATIVE_PLAYER_SET_PLAYER_OWNS_MOUNT_);
		PLAYER.set_function("GET_VEHICLE_OWNED_BY_PLAYER_", LUA_NATIVE_PLAYER_GET_VEHICLE_OWNED_BY_PLAYER_);
		PLAYER.set_function("GET_PLAYER_OWNER_OF_VEHICLE_", LUA_NATIVE_PLAYER_GET_PLAYER_OWNER_OF_VEHICLE_);
		PLAYER.set_function("SET_PLAYER_OWNS_VEHICLE_", LUA_NATIVE_PLAYER_SET_PLAYER_OWNS_VEHICLE_);
		PLAYER.set_function("GET_PLAYER_HUNTING_WAGON_", LUA_NATIVE_PLAYER_GET_PLAYER_HUNTING_WAGON_);
		PLAYER.set_function("SET_PLAYER_HUNTING_WAGON_", LUA_NATIVE_PLAYER_SET_PLAYER_HUNTING_WAGON_);
		PLAYER.set_function("0x9044835BE9D9DBFE_", LUA_NATIVE_PLAYER_0x9044835BE9D9DBFE_);
		PLAYER.set_function("GET_DISCOVERABLE_NAME_HASH_AND_TYPE_FOR_ENTITY", LUA_NATIVE_PLAYER_GET_DISCOVERABLE_NAME_HASH_AND_TYPE_FOR_ENTITY);
		PLAYER.set_function("GET_CONSTRUCTED_DISCOVERED_CHARACTER_NAME_", LUA_NATIVE_PLAYER_GET_CONSTRUCTED_DISCOVERED_CHARACTER_NAME_);
		PLAYER.set_function("GET_TARGET_CHARACTER_NAME_SCRIPT_OVERRIDE_HASH", LUA_NATIVE_PLAYER_GET_TARGET_CHARACTER_NAME_SCRIPT_OVERRIDE_HASH);
		PLAYER.set_function("GET_TARGET_CHARACTER_NAME_SCRIPT_OVERRIDE_RAW_STRING", LUA_NATIVE_PLAYER_GET_TARGET_CHARACTER_NAME_SCRIPT_OVERRIDE_RAW_STRING);
		PLAYER.set_function("GET_TARGET_CHARACTER_NAME_FOR_LOCAL_PLAYER", LUA_NATIVE_PLAYER_GET_TARGET_CHARACTER_NAME_FOR_LOCAL_PLAYER);
		PLAYER.set_function("0xDA9D7BE231FE865F_", LUA_NATIVE_PLAYER_0xDA9D7BE231FE865F_);
		PLAYER.set_function("SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP_", LUA_NATIVE_PLAYER_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_SP_);
		PLAYER.set_function("GET_HAS_PLAYER_DISCOVERED_CHARACTER_NAME_SP_", LUA_NATIVE_PLAYER_GET_HAS_PLAYER_DISCOVERED_CHARACTER_NAME_SP_);
		PLAYER.set_function("0xCDDD4B74660E2335_", LUA_NATIVE_PLAYER_0xCDDD4B74660E2335_);
		PLAYER.set_function("0x77E83C315A3B31CA_", LUA_NATIVE_PLAYER_0x77E83C315A3B31CA_);
		PLAYER.set_function("SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_MP_", LUA_NATIVE_PLAYER_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_MP_);
		PLAYER.set_function("GET_HAS_PLAYER_DISCOVERED_CHARACTER_NAME_MP", LUA_NATIVE_PLAYER_GET_HAS_PLAYER_DISCOVERED_CHARACTER_NAME_MP);
		PLAYER.set_function("MODIFY_PLAYER_DISCOVERED_CHARACTER_NAME_MP_SET_UNDISCOVERED_", LUA_NATIVE_PLAYER_MODIFY_PLAYER_DISCOVERED_CHARACTER_NAME_MP_SET_UNDISCOVERED_);
		PLAYER.set_function("SET_SHOW_INFO_CARD_", LUA_NATIVE_PLAYER_SET_SHOW_INFO_CARD_);
		PLAYER.set_function("0x4DBC4873707E8FD6_", LUA_NATIVE_PLAYER_0x4DBC4873707E8FD6_);
		PLAYER.set_function("0xCEDC16930526F728_", LUA_NATIVE_PLAYER_0xCEDC16930526F728_);
		PLAYER.set_function("0x14E57F88BA0A07FC_", LUA_NATIVE_PLAYER_0x14E57F88BA0A07FC_);
		PLAYER.set_function("0x2E1ABE627C95ED9B_", LUA_NATIVE_PLAYER_0x2E1ABE627C95ED9B_);
		PLAYER.set_function("0x497A18F8F88AA9D8_", LUA_NATIVE_PLAYER_0x497A18F8F88AA9D8_);
		PLAYER.set_function("0x4F0D2256AAE94EDA_", LUA_NATIVE_PLAYER_0x4F0D2256AAE94EDA_);
		PLAYER.set_function("SET_LOCKON_FOCUS_FIRE_VFX_", LUA_NATIVE_PLAYER_SET_LOCKON_FOCUS_FIRE_VFX_);
		PLAYER.set_function("0x0B7803F6F7BB43E0_", LUA_NATIVE_PLAYER_0x0B7803F6F7BB43E0_);
		PLAYER.set_function("0xC74EB3F2EC169F6B_", LUA_NATIVE_PLAYER_0xC74EB3F2EC169F6B_);
		PLAYER.set_function("0x3B296934DB026873_", LUA_NATIVE_PLAYER_0x3B296934DB026873_);
		PLAYER.set_function("SET_MIN_TIME_BEFORE_HORSE_BUCKING", LUA_NATIVE_PLAYER_SET_MIN_TIME_BEFORE_HORSE_BUCKING);
		PLAYER.set_function("0xF4CB347D7B5EB0FD_", LUA_NATIVE_PLAYER_0xF4CB347D7B5EB0FD_);
		PLAYER.set_function("0xCD7CA3013FD12749_", LUA_NATIVE_PLAYER_0xCD7CA3013FD12749_);
		PLAYER.set_function("FORCE_REST_SCENARIO_", LUA_NATIVE_PLAYER_FORCE_REST_SCENARIO_);
		PLAYER.set_function("0x57028FD99886F6F9_", LUA_NATIVE_PLAYER_0x57028FD99886F6F9_);
		PLAYER.set_function("0x35A33783EC3C3448_", LUA_NATIVE_PLAYER_0x35A33783EC3C3448_);
		PLAYER.set_function("0x39D8D7082BC34B72_", LUA_NATIVE_PLAYER_0x39D8D7082BC34B72_);
		PLAYER.set_function("0x1AD8AD999C27F44A_", LUA_NATIVE_PLAYER_0x1AD8AD999C27F44A_);
	}
}
