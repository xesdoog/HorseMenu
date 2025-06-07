#include "lua_native_binding.hpp"
#include "game/rdr/Natives.hpp"

namespace Lua::native
{
	static void LUA_NATIVE_LAW_REPORT_CRIME_(Player player, Hash crimeType, int bounty, Entity entity, bool isKnownSuspect)
	{
		LAW::_REPORT_CRIME(player, crimeType, bounty, entity, isKnownSuspect);
	}

	static void LUA_NATIVE_LAW_SUPPRESS_CRIME_THIS_FRAME(Player player, Hash crimeType, int p2, int p3, int p4)
	{
		LAW::SUPPRESS_CRIME_THIS_FRAME(player, crimeType, p2, p3, p4);
	}

	static int LUA_NATIVE_LAW_NUM_CRIMES_SUPPRESSED(Player player, Hash crimeType)
	{
		auto retval = LAW::NUM_CRIMES_SUPPRESSED(player, crimeType);
		return retval;
	}

	static Any LUA_NATIVE_LAW_0xFFEBE5AA96BC2E4E_(Ped ped, Hash crimeType, bool p2)
	{
		auto retval = LAW::_0xFFEBE5AA96BC2E4E(ped, crimeType, p2);
		return retval;
	}

	static void LUA_NATIVE_LAW_0x15ABD5004CAD2D99_(int p0)
	{
		LAW::_0x15ABD5004CAD2D99(p0);
	}

	static void LUA_NATIVE_LAW_0xF611DE44AEB36A1D_(Hash crimeType, bool p1)
	{
		LAW::_0xF611DE44AEB36A1D(crimeType, p1);
	}

	static bool LUA_NATIVE_LAW_0x3D2674828A4E6B3C_()
	{
		auto retval = (bool)LAW::_0x3D2674828A4E6B3C();
		return retval;
	}

	static void LUA_NATIVE_LAW_0xC5EB2755FA25F1E9_(bool p0)
	{
		LAW::_0xC5EB2755FA25F1E9(p0);
	}

	static int LUA_NATIVE_LAW_GET_BOUNTY(Player player)
	{
		auto retval = LAW::GET_BOUNTY(player);
		return retval;
	}

	static void LUA_NATIVE_LAW_ADD_BOUNTY(Player player, int itemValueAmount)
	{
		LAW::ADD_BOUNTY(player, itemValueAmount);
	}

	static void LUA_NATIVE_LAW_SET_BOUNTY(Player player, int amount)
	{
		LAW::SET_BOUNTY(player, amount);
	}

	static void LUA_NATIVE_LAW_CLEAR_BOUNTY(Player player)
	{
		LAW::CLEAR_BOUNTY(player);
	}

	static int LUA_NATIVE_LAW_GET_WANTED_SCORE(Player player)
	{
		auto retval = LAW::GET_WANTED_SCORE(player);
		return retval;
	}

	static void LUA_NATIVE_LAW_SET_WANTED_SCORE(Player player, int intensity)
	{
		LAW::SET_WANTED_SCORE(player, intensity);
	}

	static void LUA_NATIVE_LAW_CLEAR_WANTED_SCORE(Player player)
	{
		LAW::CLEAR_WANTED_SCORE(player);
	}

	static void LUA_NATIVE_LAW_0x331D349E0380B097_(Any p0)
	{
		LAW::_0x331D349E0380B097(p0);
	}

	static void LUA_NATIVE_LAW_0x292AD61A33A7A485_()
	{
		LAW::_0x292AD61A33A7A485();
	}

	static void LUA_NATIVE_LAW_0x07E8B8B20570271C_(Player player)
	{
		LAW::_0x07E8B8B20570271C(player);
	}

	static void LUA_NATIVE_LAW_0x22741652985C84D0_(Player player, Hash lawRegionHash)
	{
		LAW::_0x22741652985C84D0(player, lawRegionHash);
	}

	static void LUA_NATIVE_LAW_REPORT_PLAYER_LAW_DISPATCH_RESPONSE_OVERRIDE_(Player player, Hash dispatchResponseHash)
	{
		LAW::_REPORT_PLAYER_LAW_DISPATCH_RESPONSE_OVERRIDE(player, dispatchResponseHash);
	}

	static bool LUA_NATIVE_LAW_0x9EF07CFBB19A9733_()
	{
		auto retval = (bool)LAW::_0x9EF07CFBB19A9733();
		return retval;
	}

	static void LUA_NATIVE_LAW_SET_LAW_DISABLED_(bool toggle)
	{
		LAW::_SET_LAW_DISABLED(toggle);
	}

	static void LUA_NATIVE_LAW_FORCE_LAW_ON_LOCAL_PLAYER_IMMEDIATELY_()
	{
		LAW::_FORCE_LAW_ON_LOCAL_PLAYER_IMMEDIATELY();
	}

	static void LUA_NATIVE_LAW_SET_LAW_REGION_(Player player, Hash lawRegionHash, Hash stateHash)
	{
		LAW::_SET_LAW_REGION(player, lawRegionHash, stateHash);
	}

	static void LUA_NATIVE_LAW_0x5E6F375CA101C108_(Player player, bool p1)
	{
		LAW::_0x5E6F375CA101C108(player, p1);
	}

	static void LUA_NATIVE_LAW_SET_LAW_RBS_VOLUME_(Player player, Hash p1)
	{
		LAW::_SET_LAW_RBS_VOLUME(player, p1);
	}

	static bool LUA_NATIVE_LAW_IS_LAW_INCIDENT_ACTIVE(Player player)
	{
		auto retval = (bool)LAW::IS_LAW_INCIDENT_ACTIVE(player);
		return retval;
	}

	static Hash LUA_NATIVE_LAW_0x148E7AC8141C9E64_(Player player)
	{
		auto retval = LAW::_0x148E7AC8141C9E64(player);
		return retval;
	}

	static void LUA_NATIVE_LAW_0xEDFC6C1FD1C964F5_(Player player, Hash crimeType, int bounty, float p3, float p4, bool p5, float p6, float p7, Any p8)
	{
		LAW::_0xEDFC6C1FD1C964F5(player, crimeType, bounty, p3, p4, p5, p6, p7, p8);
	}

	static bool LUA_NATIVE_LAW_LAW_WITNESS_RESPONSE_TASK_(Ped pedGroup1, Ped ped, Ped pedGroup2, float x, float y, float z, Hash crimeType)
	{
		auto retval = (bool)LAW::_LAW_WITNESS_RESPONSE_TASK(pedGroup1, ped, pedGroup2, x, y, z, crimeType);
		return retval;
	}

	static Any LUA_NATIVE_LAW_0x018F30D762E62DF8_(Ped ped, uintptr_t p1)
	{
		auto retval = LAW::_0x018F30D762E62DF8(ped, (Any*)p1);
		return retval;
	}

	static Any LUA_NATIVE_LAW_0x318F0F9A4426CFA2_(Ped ped, uintptr_t p1)
	{
		auto retval = LAW::_0x318F0F9A4426CFA2(ped, (Any*)p1);
		return retval;
	}

	static Any LUA_NATIVE_LAW_0x95878B13E272EF1F_(Entity entity, Ped ped, bool p2, float x, float y, float z, Hash crimeType)
	{
		auto retval = LAW::_0x95878B13E272EF1F(entity, ped, p2, x, y, z, crimeType);
		return retval;
	}

	static void LUA_NATIVE_LAW_ADD_WITNESS_RESPONSE_(Player player, Hash crimeType, Ped pedGroup)
	{
		LAW::_ADD_WITNESS_RESPONSE(player, crimeType, pedGroup);
	}

	static void LUA_NATIVE_LAW_0xD7494DED50C6EF52_(Player player, Hash crimeType, int p2)
	{
		LAW::_0xD7494DED50C6EF52(player, crimeType, p2);
	}

	static bool LUA_NATIVE_LAW_ARE_WITNESSES_ACTIVE(Player player)
	{
		auto retval = (bool)LAW::ARE_WITNESSES_ACTIVE(player);
		return retval;
	}

	static bool LUA_NATIVE_LAW_ARE_WITNESSES_PENDING_(Player player)
	{
		auto retval = (bool)LAW::_ARE_WITNESSES_PENDING(player);
		return retval;
	}

	static bool LUA_NATIVE_LAW_ARE_INVESTIGATORS_ACTIVE_(Player player, bool areInvestigatorsActive, Any p2)
	{
		auto retval = (bool)LAW::_ARE_INVESTIGATORS_ACTIVE(player, areInvestigatorsActive, p2);
		return retval;
	}

	static void LUA_NATIVE_LAW_0x522F74636DF10201_(Player player, ItemSet itemSet)
	{
		LAW::_0x522F74636DF10201(player, itemSet);
	}

	static void LUA_NATIVE_LAW_0xDA1A9ADC4E3D4B16_(ItemSet itemSet, bool p1, bool p2)
	{
		LAW::_0xDA1A9ADC4E3D4B16(itemSet, p1, p2);
	}

	static void LUA_NATIVE_LAW_ENABLE_DISPATCH_LAW_(bool toggle)
	{
		LAW::_ENABLE_DISPATCH_LAW(toggle);
	}

	static void LUA_NATIVE_LAW_ENABLE_DISPATCH_LAW_2_(bool toggle)
	{
		LAW::_ENABLE_DISPATCH_LAW_2(toggle);
	}

	static bool LUA_NATIVE_LAW_ARE_ANY_LAW_PEDS_INVESTIGATING_()
	{
		auto retval = (bool)LAW::_ARE_ANY_LAW_PEDS_INVESTIGATING();
		return retval;
	}

	static bool LUA_NATIVE_LAW_ARE_LAW_PEDS_ENABLED_FOR_TRAIN_()
	{
		auto retval = (bool)LAW::_ARE_LAW_PEDS_ENABLED_FOR_TRAIN();
		return retval;
	}

	static void LUA_NATIVE_LAW_0x82F11E1296996574_(int p0)
	{
		LAW::_0x82F11E1296996574(p0);
	}

	static void LUA_NATIVE_LAW_0x3852237A3D9DF145_(int p0)
	{
		LAW::_0x3852237A3D9DF145(p0);
	}

	static bool LUA_NATIVE_LAW_0x0EAF918F751F27BA_(Ped ped)
	{
		auto retval = (bool)LAW::_0x0EAF918F751F27BA(ped);
		return retval;
	}

	static bool LUA_NATIVE_LAW_0xC0DF161950FB101E_(Ped ped)
	{
		auto retval = (bool)LAW::_0xC0DF161950FB101E(ped);
		return retval;
	}

	static Any LUA_NATIVE_LAW_0xE4D6E45F491A66CB_(Player player, int p1)
	{
		auto retval = LAW::_0xE4D6E45F491A66CB(player, p1);
		return retval;
	}

	static int LUA_NATIVE_LAW_0xE9EB79CBF9C0F58A_(Player player)
	{
		auto retval = LAW::_0xE9EB79CBF9C0F58A(player);
		return retval;
	}

	static Vector3 LUA_NATIVE_LAW_0x21213B833EF4DAE7_(Player player, Ped ped, Vector3 outCoords)
	{
		LAW::_0x21213B833EF4DAE7(player, ped, &outCoords);
		return outCoords;
	}

	static void LUA_NATIVE_LAW_0x61B98367D93F012F_(Player player)
	{
		LAW::_0x61B98367D93F012F(player);
	}

	static Hash LUA_NATIVE_LAW_0x6ABC50979655BEE7_(Player player, Hash crimeType, Any p2)
	{
		LAW::_0x6ABC50979655BEE7(player, &crimeType, p2);
		return crimeType;
	}

	static void LUA_NATIVE_LAW_0x390710D2DAFA6BFF_(Player player, bool p1)
	{
		LAW::_0x390710D2DAFA6BFF(player, p1);
	}

	static int LUA_NATIVE_LAW_GET_CRIME_BOUNTY_AMOUNT_BY_TYPE_(Hash crimeType)
	{
		auto retval = LAW::_GET_CRIME_BOUNTY_AMOUNT_BY_TYPE(crimeType);
		return retval;
	}

	static int LUA_NATIVE_LAW_0xDAEFDFDB2AEECE37_(Hash crimeType, Any p1)
	{
		auto retval = LAW::_0xDAEFDFDB2AEECE37(crimeType, p1);
		return retval;
	}

	static Hash LUA_NATIVE_LAW_GET_HUD_PLAYER_CRIME_TYPE_(Player player)
	{
		auto retval = LAW::_GET_HUD_PLAYER_CRIME_TYPE(player);
		return retval;
	}

	static int LUA_NATIVE_LAW_0xE083BEDA81709891_(Player player)
	{
		auto retval = LAW::_0xE083BEDA81709891(player);
		return retval;
	}

	static bool LUA_NATIVE_LAW_0x89E005B1662F6E48_(Player player, int p1, int p2)
	{
		auto retval = (bool)LAW::_0x89E005B1662F6E48(player, p1, p2);
		return retval;
	}

	static bool LUA_NATIVE_LAW_0x3738B784DDD35CC6_(Player player, int p1, int p2)
	{
		auto retval = (bool)LAW::_0x3738B784DDD35CC6(player, p1, p2);
		return retval;
	}

	static int LUA_NATIVE_LAW_0x0BDFEBCF40A5F7E3_(Hash crimeType)
	{
		auto retval = LAW::_0x0BDFEBCF40A5F7E3(crimeType);
		return retval;
	}

	static void LUA_NATIVE_LAW_SET_CUSTOM_LAW_DISPATCH_RESPONSE_(Hash dispatchResponseHash)
	{
		LAW::_SET_CUSTOM_LAW_DISPATCH_RESPONSE(dispatchResponseHash);
	}

	static Any LUA_NATIVE_LAW_CREATE_LAW_DISPATCH_RESPONSE_FOR_COORDS_(float x, float y, float z, Hash dispatchResponseHash)
	{
		auto retval = LAW::_CREATE_LAW_DISPATCH_RESPONSE_FOR_COORDS(x, y, z, dispatchResponseHash);
		return retval;
	}

	static void LUA_NATIVE_LAW_SET_BOUNTY_HUNTER_PURSUIT_CLEARED_()
	{
		LAW::_SET_BOUNTY_HUNTER_PURSUIT_CLEARED();
	}

	static void LUA_NATIVE_LAW_0xBD944A3D36E992DE_()
	{
		LAW::_0xBD944A3D36E992DE();
	}

	static void LUA_NATIVE_LAW_0x987BE590FB9D41E5_(bool p0)
	{
		LAW::_0x987BE590FB9D41E5(p0);
	}

	static void LUA_NATIVE_LAW_0xDCF12B89624AAC96_(bool p0)
	{
		LAW::_0xDCF12B89624AAC96(p0);
	}

	static void LUA_NATIVE_LAW_0xDDCE8E960D1DE240_(bool p0)
	{
		LAW::_0xDDCE8E960D1DE240(p0);
	}

	static void LUA_NATIVE_LAW_0xDEA083C16BB91345_()
	{
		LAW::_0xDEA083C16BB91345();
	}

	static void LUA_NATIVE_LAW_0x9C8A2BF37E966464_(Player player, ItemSet itemSet)
	{
		LAW::_0x9C8A2BF37E966464(player, itemSet);
	}

	static bool LUA_NATIVE_LAW_0x9D5C9A5A3321B128_(Player player)
	{
		auto retval = (bool)LAW::_0x9D5C9A5A3321B128(player);
		return retval;
	}

	static bool LUA_NATIVE_LAW_0x0F230DE0DDBE3649_(Player player)
	{
		auto retval = (bool)LAW::_0x0F230DE0DDBE3649(player);
		return retval;
	}

	static bool LUA_NATIVE_LAW_0x9945A3E2528A02E8_(Player player)
	{
		auto retval = (bool)LAW::_0x9945A3E2528A02E8(player);
		return retval;
	}

	static float LUA_NATIVE_LAW_GET_TIME_SINCE_LAST_SEEN_BY_LAW_(Player player)
	{
		auto retval = LAW::_GET_TIME_SINCE_LAST_SEEN_BY_LAW(player);
		return retval;
	}

	static void LUA_NATIVE_LAW_0x9B4C564BFA7CFF37_(float p0)
	{
		LAW::_0x9B4C564BFA7CFF37(p0);
	}

	static void LUA_NATIVE_LAW_SET_ALLOW_DISABLED_LAW_RESPONSES_(bool toggle)
	{
		LAW::_SET_ALLOW_DISABLED_LAW_RESPONSES(toggle);
	}

	static void LUA_NATIVE_LAW_RESET_WANTED_FOR_NEW_INCIDENT(Player player)
	{
		LAW::RESET_WANTED_FOR_NEW_INCIDENT(player);
	}

	static bool LUA_NATIVE_LAW_0x856CE8FDE2416602_(Ped ped)
	{
		auto retval = (bool)LAW::_0x856CE8FDE2416602(ped);
		return retval;
	}

	static bool LUA_NATIVE_LAW_0x7351DA734F989F4E_(Entity entity)
	{
		auto retval = (bool)LAW::_0x7351DA734F989F4E(entity);
		return retval;
	}

	static int LUA_NATIVE_LAW_GET_BOUNTY_HUNTER_GLOBAL_COOLDOWN_(Hash p0)
	{
		auto retval = LAW::_GET_BOUNTY_HUNTER_GLOBAL_COOLDOWN(p0);
		return retval;
	}

	static void LUA_NATIVE_LAW_SET_BOUNTY_HUNTER_GLOBAL_COOLDOWN_(Hash p0, int p1)
	{
		LAW::_SET_BOUNTY_HUNTER_GLOBAL_COOLDOWN(p0, p1);
	}

	static void LUA_NATIVE_LAW_0x2001687F9562FD9D_(Any p0)
	{
		LAW::_0x2001687F9562FD9D(p0);
	}

	static void LUA_NATIVE_LAW_PAUSE_BOUNTY_HUNTER_COOLDOWN_(Hash p0, bool p1, Any p2)
	{
		LAW::_PAUSE_BOUNTY_HUNTER_COOLDOWN(p0, p1, p2);
	}

	static void LUA_NATIVE_LAW_0xE9AC8466ABE484BB_(bool p0, Any p1)
	{
		LAW::_0xE9AC8466ABE484BB(p0, p1);
	}

	static bool LUA_NATIVE_LAW_0x40851BCC33ACD9AB_(Ped ped)
	{
		auto retval = (bool)LAW::_0x40851BCC33ACD9AB(ped);
		return retval;
	}

	static bool LUA_NATIVE_LAW_0xF46108C50A22B029_()
	{
		auto retval = (bool)LAW::_0xF46108C50A22B029();
		return retval;
	}

	static void LUA_NATIVE_LAW_0x7803436E68C32B26_()
	{
		LAW::_0x7803436E68C32B26();
	}

	static void LUA_NATIVE_LAW_0xC310239ACCCF5579_()
	{
		LAW::_0xC310239ACCCF5579();
	}

	static void LUA_NATIVE_LAW_0x29CD4896ECB66C12_()
	{
		LAW::_0x29CD4896ECB66C12();
	}

	static void LUA_NATIVE_LAW_0xE94B5E938619712E_()
	{
		LAW::_0xE94B5E938619712E();
	}

	static int LUA_NATIVE_LAW_0x7FC667F6DDFBCDCC_(Player player)
	{
		auto retval = LAW::_0x7FC667F6DDFBCDCC(player);
		return retval;
	}

	static Hash LUA_NATIVE_LAW_0x9C5BD8C562565CE6_(Hash crimeType)
	{
		LAW::_0x9C5BD8C562565CE6(&crimeType);
		return crimeType;
	}

	static void LUA_NATIVE_LAW_0xCBFB4951F2E3934C_(Player player, uintptr_t data)
	{
		LAW::_0xCBFB4951F2E3934C(player, (Any*)data);
	}

	static void LUA_NATIVE_LAW_SET_PED_LAW_BEHAVIOUR_(Ped ped, int behaviour)
	{
		LAW::_SET_PED_LAW_BEHAVIOUR(ped, behaviour);
	}

	static void LUA_NATIVE_LAW_0x00DB0BC05E3FAA4E_(Ped ped, int bitset)
	{
		LAW::_0x00DB0BC05E3FAA4E(ped, bitset);
	}

	static void LUA_NATIVE_LAW_0x0C392DB374655176_(float x, float y, float z, float p3, ItemSet itemSet)
	{
		LAW::_0x0C392DB374655176(x, y, z, p3, itemSet);
	}

	static Any LUA_NATIVE_LAW_0xC687A23E166DCF68_(uintptr_t p0)
	{
		auto retval = LAW::_0xC687A23E166DCF68((Any*)p0);
		return retval;
	}

	static void LUA_NATIVE_LAW_SET_DISPATCH_MULTIPLIER_OVERRIDE_(float multiplier)
	{
		LAW::_SET_DISPATCH_MULTIPLIER_OVERRIDE(multiplier);
	}

	static bool LUA_NATIVE_LAW_0x26934083D3F2579C_(Player player)
	{
		auto retval = (bool)LAW::_0x26934083D3F2579C(player);
		return retval;
	}

	static std::tuple<bool, Hash> LUA_NATIVE_LAW_GET_PLAYER_REGISTERED_CRIME(Player player, int p1, Hash crimeType)
	{
		std::tuple<bool, Hash> return_values;
		std::get<0>(return_values) = (bool)LAW::GET_PLAYER_REGISTERED_CRIME(player, p1, &crimeType);
		std::get<1>(return_values) = crimeType;

		return return_values;
	}

	static std::tuple<bool, Hash> LUA_NATIVE_LAW_0xB527099D1E1EED49_(Player player, int p1, Hash crimeType)
	{
		std::tuple<bool, Hash> return_values;
		std::get<0>(return_values) = (bool)LAW::_0xB527099D1E1EED49(player, p1, &crimeType);
		std::get<1>(return_values) = crimeType;

		return return_values;
	}

	static void LUA_NATIVE_LAW_CLEAR_PLAYER_PAST_CRIMES(Player player)
	{
		LAW::CLEAR_PLAYER_PAST_CRIMES(player);
	}

	static void LUA_NATIVE_LAW_SET_PLAYER_ARRESTED_IN_REGION(Player player, Hash lawRegionHash)
	{
		LAW::SET_PLAYER_ARRESTED_IN_REGION(player, lawRegionHash);
	}

	static void LUA_NATIVE_LAW_SET_PLAYER_TURNED_IN_BOUNTY_IN_REGION(Player player, Hash lawRegionHash)
	{
		LAW::SET_PLAYER_TURNED_IN_BOUNTY_IN_REGION(player, lawRegionHash);
	}

	static void LUA_NATIVE_LAW_0xD6C0A8C7C0B2F82C_(Player player, bool p1)
	{
		LAW::_0xD6C0A8C7C0B2F82C(player, p1);
	}

	static void LUA_NATIVE_LAW_SET_LAW_SENSE_RANGE_MODIFIER(Player player, float range)
	{
		LAW::SET_LAW_SENSE_RANGE_MODIFIER(player, range);
	}

	static void LUA_NATIVE_LAW_0x7EF2A2FE38D74456_(int flag, bool p1)
	{
		LAW::_0x7EF2A2FE38D74456(flag, p1);
	}

	static bool LUA_NATIVE_LAW_0xC7DC5A0A7DF608CB_(int flag)
	{
		auto retval = (bool)LAW::_0xC7DC5A0A7DF608CB(flag);
		return retval;
	}

	static void LUA_NATIVE_LAW_SET_DISABLE_DISTURBANCE_CRIMES(Player player, bool p1)
	{
		LAW::SET_DISABLE_DISTURBANCE_CRIMES(player, p1);
	}

	static void LUA_NATIVE_LAW_SET_POSTPONE_DISTURBANCE_CRIMES_DURING_COMBAT(Player player, bool p1)
	{
		LAW::SET_POSTPONE_DISTURBANCE_CRIMES_DURING_COMBAT(player, p1);
	}

	static void LUA_NATIVE_LAW_CREATE_GUARD_ZONE_(sol::stack_object name)
	{
		LAW::_CREATE_GUARD_ZONE(name.is<const char*>() ? name.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_LAW_REMOVE_GUARD_ZONE_(sol::stack_object name)
	{
		LAW::_REMOVE_GUARD_ZONE(name.is<const char*>() ? name.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_LAW_0x9772395CC73E8D1F_(Ped ped, sol::stack_object name)
	{
		LAW::_0x9772395CC73E8D1F(ped, name.is<const char*>() ? name.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_LAW_DISABLE_GUARD_ZONE_(sol::stack_object name)
	{
		LAW::_DISABLE_GUARD_ZONE(name.is<const char*>() ? name.as<const char*>() : nullptr);
	}

	static bool LUA_NATIVE_LAW_0x0DBACA9C38C9A686_(sol::stack_object name)
	{
		auto retval = (bool)LAW::_0x0DBACA9C38C9A686(name.is<const char*>() ? name.as<const char*>() : nullptr);
		return retval;
	}

	static bool LUA_NATIVE_LAW_IS_GUARD_PED_INVESTIGATING_(Ped ped)
	{
		auto retval = (bool)LAW::_IS_GUARD_PED_INVESTIGATING(ped);
		return retval;
	}

	static bool LUA_NATIVE_LAW_CREATE_GUARD_ZONE_FOR_ENTITY_(sol::stack_object guardZoneName, Entity entity, float x, float y, float z)
	{
		auto retval = (bool)LAW::_CREATE_GUARD_ZONE_FOR_ENTITY(guardZoneName.is<const char*>() ? guardZoneName.as<const char*>() : nullptr, entity, x, y, z);
		return retval;
	}

	static void LUA_NATIVE_LAW_SET_GUARD_ZONE_VOLUME_REGISTRATION_START_(sol::stack_object name, Volume volume)
	{
		LAW::_SET_GUARD_ZONE_VOLUME_REGISTRATION_START(name.is<const char*>() ? name.as<const char*>() : nullptr, volume);
	}

	static void LUA_NATIVE_LAW_SET_GUARD_ZONE_VOLUME_RESTRICTED_(sol::stack_object name, Volume volume)
	{
		LAW::_SET_GUARD_ZONE_VOLUME_RESTRICTED(name.is<const char*>() ? name.as<const char*>() : nullptr, volume);
	}

	static void LUA_NATIVE_LAW_SET_GUARD_ZONE_VOLUME_THREAT_(sol::stack_object name, Volume volume)
	{
		LAW::_SET_GUARD_ZONE_VOLUME_THREAT(name.is<const char*>() ? name.as<const char*>() : nullptr, volume);
	}

	static void LUA_NATIVE_LAW_SET_GUARD_ZONE_VOLUME_WARNING_(sol::stack_object name, Volume volume)
	{
		LAW::_SET_GUARD_ZONE_VOLUME_WARNING(name.is<const char*>() ? name.as<const char*>() : nullptr, volume);
	}

	static void LUA_NATIVE_LAW_SET_GUARD_ZONE_VOLUME_REGISTRATION_END_(sol::stack_object name, Volume volume)
	{
		LAW::_SET_GUARD_ZONE_VOLUME_REGISTRATION_END(name.is<const char*>() ? name.as<const char*>() : nullptr, volume);
	}

	static void LUA_NATIVE_LAW_SET_GUARD_ZONE_POSITION_(sol::stack_object name, float x, float y, float z)
	{
		LAW::_SET_GUARD_ZONE_POSITION(name.is<const char*>() ? name.as<const char*>() : nullptr, x, y, z);
	}

	static void LUA_NATIVE_LAW_SET_GUARD_ZONE_POSITION_2_(sol::stack_object name, float x, float y, float z)
	{
		LAW::_SET_GUARD_ZONE_POSITION_2(name.is<const char*>() ? name.as<const char*>() : nullptr, x, y, z);
	}

	void init_native_binding_LAW(sol::state& L)
	{
		auto LAW = L["LAW"].get_or_create<sol::table>();
		LAW.set_function("REPORT_CRIME_", LUA_NATIVE_LAW_REPORT_CRIME_);
		LAW.set_function("SUPPRESS_CRIME_THIS_FRAME", LUA_NATIVE_LAW_SUPPRESS_CRIME_THIS_FRAME);
		LAW.set_function("NUM_CRIMES_SUPPRESSED", LUA_NATIVE_LAW_NUM_CRIMES_SUPPRESSED);
		LAW.set_function("0xFFEBE5AA96BC2E4E_", LUA_NATIVE_LAW_0xFFEBE5AA96BC2E4E_);
		LAW.set_function("0x15ABD5004CAD2D99_", LUA_NATIVE_LAW_0x15ABD5004CAD2D99_);
		LAW.set_function("0xF611DE44AEB36A1D_", LUA_NATIVE_LAW_0xF611DE44AEB36A1D_);
		LAW.set_function("0x3D2674828A4E6B3C_", LUA_NATIVE_LAW_0x3D2674828A4E6B3C_);
		LAW.set_function("0xC5EB2755FA25F1E9_", LUA_NATIVE_LAW_0xC5EB2755FA25F1E9_);
		LAW.set_function("GET_BOUNTY", LUA_NATIVE_LAW_GET_BOUNTY);
		LAW.set_function("ADD_BOUNTY", LUA_NATIVE_LAW_ADD_BOUNTY);
		LAW.set_function("SET_BOUNTY", LUA_NATIVE_LAW_SET_BOUNTY);
		LAW.set_function("CLEAR_BOUNTY", LUA_NATIVE_LAW_CLEAR_BOUNTY);
		LAW.set_function("GET_WANTED_SCORE", LUA_NATIVE_LAW_GET_WANTED_SCORE);
		LAW.set_function("SET_WANTED_SCORE", LUA_NATIVE_LAW_SET_WANTED_SCORE);
		LAW.set_function("CLEAR_WANTED_SCORE", LUA_NATIVE_LAW_CLEAR_WANTED_SCORE);
		LAW.set_function("0x331D349E0380B097_", LUA_NATIVE_LAW_0x331D349E0380B097_);
		LAW.set_function("0x292AD61A33A7A485_", LUA_NATIVE_LAW_0x292AD61A33A7A485_);
		LAW.set_function("0x07E8B8B20570271C_", LUA_NATIVE_LAW_0x07E8B8B20570271C_);
		LAW.set_function("0x22741652985C84D0_", LUA_NATIVE_LAW_0x22741652985C84D0_);
		LAW.set_function("REPORT_PLAYER_LAW_DISPATCH_RESPONSE_OVERRIDE_", LUA_NATIVE_LAW_REPORT_PLAYER_LAW_DISPATCH_RESPONSE_OVERRIDE_);
		LAW.set_function("0x9EF07CFBB19A9733_", LUA_NATIVE_LAW_0x9EF07CFBB19A9733_);
		LAW.set_function("SET_LAW_DISABLED_", LUA_NATIVE_LAW_SET_LAW_DISABLED_);
		LAW.set_function("FORCE_LAW_ON_LOCAL_PLAYER_IMMEDIATELY_", LUA_NATIVE_LAW_FORCE_LAW_ON_LOCAL_PLAYER_IMMEDIATELY_);
		LAW.set_function("SET_LAW_REGION_", LUA_NATIVE_LAW_SET_LAW_REGION_);
		LAW.set_function("0x5E6F375CA101C108_", LUA_NATIVE_LAW_0x5E6F375CA101C108_);
		LAW.set_function("SET_LAW_RBS_VOLUME_", LUA_NATIVE_LAW_SET_LAW_RBS_VOLUME_);
		LAW.set_function("IS_LAW_INCIDENT_ACTIVE", LUA_NATIVE_LAW_IS_LAW_INCIDENT_ACTIVE);
		LAW.set_function("0x148E7AC8141C9E64_", LUA_NATIVE_LAW_0x148E7AC8141C9E64_);
		LAW.set_function("0xEDFC6C1FD1C964F5_", LUA_NATIVE_LAW_0xEDFC6C1FD1C964F5_);
		LAW.set_function("LAW_WITNESS_RESPONSE_TASK_", LUA_NATIVE_LAW_LAW_WITNESS_RESPONSE_TASK_);
		LAW.set_function("0x018F30D762E62DF8_", LUA_NATIVE_LAW_0x018F30D762E62DF8_);
		LAW.set_function("0x318F0F9A4426CFA2_", LUA_NATIVE_LAW_0x318F0F9A4426CFA2_);
		LAW.set_function("0x95878B13E272EF1F_", LUA_NATIVE_LAW_0x95878B13E272EF1F_);
		LAW.set_function("ADD_WITNESS_RESPONSE_", LUA_NATIVE_LAW_ADD_WITNESS_RESPONSE_);
		LAW.set_function("0xD7494DED50C6EF52_", LUA_NATIVE_LAW_0xD7494DED50C6EF52_);
		LAW.set_function("ARE_WITNESSES_ACTIVE", LUA_NATIVE_LAW_ARE_WITNESSES_ACTIVE);
		LAW.set_function("ARE_WITNESSES_PENDING_", LUA_NATIVE_LAW_ARE_WITNESSES_PENDING_);
		LAW.set_function("ARE_INVESTIGATORS_ACTIVE_", LUA_NATIVE_LAW_ARE_INVESTIGATORS_ACTIVE_);
		LAW.set_function("0x522F74636DF10201_", LUA_NATIVE_LAW_0x522F74636DF10201_);
		LAW.set_function("0xDA1A9ADC4E3D4B16_", LUA_NATIVE_LAW_0xDA1A9ADC4E3D4B16_);
		LAW.set_function("ENABLE_DISPATCH_LAW_", LUA_NATIVE_LAW_ENABLE_DISPATCH_LAW_);
		LAW.set_function("ENABLE_DISPATCH_LAW_2_", LUA_NATIVE_LAW_ENABLE_DISPATCH_LAW_2_);
		LAW.set_function("ARE_ANY_LAW_PEDS_INVESTIGATING_", LUA_NATIVE_LAW_ARE_ANY_LAW_PEDS_INVESTIGATING_);
		LAW.set_function("ARE_LAW_PEDS_ENABLED_FOR_TRAIN_", LUA_NATIVE_LAW_ARE_LAW_PEDS_ENABLED_FOR_TRAIN_);
		LAW.set_function("0x82F11E1296996574_", LUA_NATIVE_LAW_0x82F11E1296996574_);
		LAW.set_function("0x3852237A3D9DF145_", LUA_NATIVE_LAW_0x3852237A3D9DF145_);
		LAW.set_function("0x0EAF918F751F27BA_", LUA_NATIVE_LAW_0x0EAF918F751F27BA_);
		LAW.set_function("0xC0DF161950FB101E_", LUA_NATIVE_LAW_0xC0DF161950FB101E_);
		LAW.set_function("0xE4D6E45F491A66CB_", LUA_NATIVE_LAW_0xE4D6E45F491A66CB_);
		LAW.set_function("0xE9EB79CBF9C0F58A_", LUA_NATIVE_LAW_0xE9EB79CBF9C0F58A_);
		LAW.set_function("0x21213B833EF4DAE7_", LUA_NATIVE_LAW_0x21213B833EF4DAE7_);
		LAW.set_function("0x61B98367D93F012F_", LUA_NATIVE_LAW_0x61B98367D93F012F_);
		LAW.set_function("0x6ABC50979655BEE7_", LUA_NATIVE_LAW_0x6ABC50979655BEE7_);
		LAW.set_function("0x390710D2DAFA6BFF_", LUA_NATIVE_LAW_0x390710D2DAFA6BFF_);
		LAW.set_function("GET_CRIME_BOUNTY_AMOUNT_BY_TYPE_", LUA_NATIVE_LAW_GET_CRIME_BOUNTY_AMOUNT_BY_TYPE_);
		LAW.set_function("0xDAEFDFDB2AEECE37_", LUA_NATIVE_LAW_0xDAEFDFDB2AEECE37_);
		LAW.set_function("GET_HUD_PLAYER_CRIME_TYPE_", LUA_NATIVE_LAW_GET_HUD_PLAYER_CRIME_TYPE_);
		LAW.set_function("0xE083BEDA81709891_", LUA_NATIVE_LAW_0xE083BEDA81709891_);
		LAW.set_function("0x89E005B1662F6E48_", LUA_NATIVE_LAW_0x89E005B1662F6E48_);
		LAW.set_function("0x3738B784DDD35CC6_", LUA_NATIVE_LAW_0x3738B784DDD35CC6_);
		LAW.set_function("0x0BDFEBCF40A5F7E3_", LUA_NATIVE_LAW_0x0BDFEBCF40A5F7E3_);
		LAW.set_function("SET_CUSTOM_LAW_DISPATCH_RESPONSE_", LUA_NATIVE_LAW_SET_CUSTOM_LAW_DISPATCH_RESPONSE_);
		LAW.set_function("CREATE_LAW_DISPATCH_RESPONSE_FOR_COORDS_", LUA_NATIVE_LAW_CREATE_LAW_DISPATCH_RESPONSE_FOR_COORDS_);
		LAW.set_function("SET_BOUNTY_HUNTER_PURSUIT_CLEARED_", LUA_NATIVE_LAW_SET_BOUNTY_HUNTER_PURSUIT_CLEARED_);
		LAW.set_function("0xBD944A3D36E992DE_", LUA_NATIVE_LAW_0xBD944A3D36E992DE_);
		LAW.set_function("0x987BE590FB9D41E5_", LUA_NATIVE_LAW_0x987BE590FB9D41E5_);
		LAW.set_function("0xDCF12B89624AAC96_", LUA_NATIVE_LAW_0xDCF12B89624AAC96_);
		LAW.set_function("0xDDCE8E960D1DE240_", LUA_NATIVE_LAW_0xDDCE8E960D1DE240_);
		LAW.set_function("0xDEA083C16BB91345_", LUA_NATIVE_LAW_0xDEA083C16BB91345_);
		LAW.set_function("0x9C8A2BF37E966464_", LUA_NATIVE_LAW_0x9C8A2BF37E966464_);
		LAW.set_function("0x9D5C9A5A3321B128_", LUA_NATIVE_LAW_0x9D5C9A5A3321B128_);
		LAW.set_function("0x0F230DE0DDBE3649_", LUA_NATIVE_LAW_0x0F230DE0DDBE3649_);
		LAW.set_function("0x9945A3E2528A02E8_", LUA_NATIVE_LAW_0x9945A3E2528A02E8_);
		LAW.set_function("GET_TIME_SINCE_LAST_SEEN_BY_LAW_", LUA_NATIVE_LAW_GET_TIME_SINCE_LAST_SEEN_BY_LAW_);
		LAW.set_function("0x9B4C564BFA7CFF37_", LUA_NATIVE_LAW_0x9B4C564BFA7CFF37_);
		LAW.set_function("SET_ALLOW_DISABLED_LAW_RESPONSES_", LUA_NATIVE_LAW_SET_ALLOW_DISABLED_LAW_RESPONSES_);
		LAW.set_function("RESET_WANTED_FOR_NEW_INCIDENT", LUA_NATIVE_LAW_RESET_WANTED_FOR_NEW_INCIDENT);
		LAW.set_function("0x856CE8FDE2416602_", LUA_NATIVE_LAW_0x856CE8FDE2416602_);
		LAW.set_function("0x7351DA734F989F4E_", LUA_NATIVE_LAW_0x7351DA734F989F4E_);
		LAW.set_function("GET_BOUNTY_HUNTER_GLOBAL_COOLDOWN_", LUA_NATIVE_LAW_GET_BOUNTY_HUNTER_GLOBAL_COOLDOWN_);
		LAW.set_function("SET_BOUNTY_HUNTER_GLOBAL_COOLDOWN_", LUA_NATIVE_LAW_SET_BOUNTY_HUNTER_GLOBAL_COOLDOWN_);
		LAW.set_function("0x2001687F9562FD9D_", LUA_NATIVE_LAW_0x2001687F9562FD9D_);
		LAW.set_function("PAUSE_BOUNTY_HUNTER_COOLDOWN_", LUA_NATIVE_LAW_PAUSE_BOUNTY_HUNTER_COOLDOWN_);
		LAW.set_function("0xE9AC8466ABE484BB_", LUA_NATIVE_LAW_0xE9AC8466ABE484BB_);
		LAW.set_function("0x40851BCC33ACD9AB_", LUA_NATIVE_LAW_0x40851BCC33ACD9AB_);
		LAW.set_function("0xF46108C50A22B029_", LUA_NATIVE_LAW_0xF46108C50A22B029_);
		LAW.set_function("0x7803436E68C32B26_", LUA_NATIVE_LAW_0x7803436E68C32B26_);
		LAW.set_function("0xC310239ACCCF5579_", LUA_NATIVE_LAW_0xC310239ACCCF5579_);
		LAW.set_function("0x29CD4896ECB66C12_", LUA_NATIVE_LAW_0x29CD4896ECB66C12_);
		LAW.set_function("0xE94B5E938619712E_", LUA_NATIVE_LAW_0xE94B5E938619712E_);
		LAW.set_function("0x7FC667F6DDFBCDCC_", LUA_NATIVE_LAW_0x7FC667F6DDFBCDCC_);
		LAW.set_function("0x9C5BD8C562565CE6_", LUA_NATIVE_LAW_0x9C5BD8C562565CE6_);
		LAW.set_function("0xCBFB4951F2E3934C_", LUA_NATIVE_LAW_0xCBFB4951F2E3934C_);
		LAW.set_function("SET_PED_LAW_BEHAVIOUR_", LUA_NATIVE_LAW_SET_PED_LAW_BEHAVIOUR_);
		LAW.set_function("0x00DB0BC05E3FAA4E_", LUA_NATIVE_LAW_0x00DB0BC05E3FAA4E_);
		LAW.set_function("0x0C392DB374655176_", LUA_NATIVE_LAW_0x0C392DB374655176_);
		LAW.set_function("0xC687A23E166DCF68_", LUA_NATIVE_LAW_0xC687A23E166DCF68_);
		LAW.set_function("SET_DISPATCH_MULTIPLIER_OVERRIDE_", LUA_NATIVE_LAW_SET_DISPATCH_MULTIPLIER_OVERRIDE_);
		LAW.set_function("0x26934083D3F2579C_", LUA_NATIVE_LAW_0x26934083D3F2579C_);
		LAW.set_function("GET_PLAYER_REGISTERED_CRIME", LUA_NATIVE_LAW_GET_PLAYER_REGISTERED_CRIME);
		LAW.set_function("0xB527099D1E1EED49_", LUA_NATIVE_LAW_0xB527099D1E1EED49_);
		LAW.set_function("CLEAR_PLAYER_PAST_CRIMES", LUA_NATIVE_LAW_CLEAR_PLAYER_PAST_CRIMES);
		LAW.set_function("SET_PLAYER_ARRESTED_IN_REGION", LUA_NATIVE_LAW_SET_PLAYER_ARRESTED_IN_REGION);
		LAW.set_function("SET_PLAYER_TURNED_IN_BOUNTY_IN_REGION", LUA_NATIVE_LAW_SET_PLAYER_TURNED_IN_BOUNTY_IN_REGION);
		LAW.set_function("0xD6C0A8C7C0B2F82C_", LUA_NATIVE_LAW_0xD6C0A8C7C0B2F82C_);
		LAW.set_function("SET_LAW_SENSE_RANGE_MODIFIER", LUA_NATIVE_LAW_SET_LAW_SENSE_RANGE_MODIFIER);
		LAW.set_function("0x7EF2A2FE38D74456_", LUA_NATIVE_LAW_0x7EF2A2FE38D74456_);
		LAW.set_function("0xC7DC5A0A7DF608CB_", LUA_NATIVE_LAW_0xC7DC5A0A7DF608CB_);
		LAW.set_function("SET_DISABLE_DISTURBANCE_CRIMES", LUA_NATIVE_LAW_SET_DISABLE_DISTURBANCE_CRIMES);
		LAW.set_function("SET_POSTPONE_DISTURBANCE_CRIMES_DURING_COMBAT", LUA_NATIVE_LAW_SET_POSTPONE_DISTURBANCE_CRIMES_DURING_COMBAT);
		LAW.set_function("CREATE_GUARD_ZONE_", LUA_NATIVE_LAW_CREATE_GUARD_ZONE_);
		LAW.set_function("REMOVE_GUARD_ZONE_", LUA_NATIVE_LAW_REMOVE_GUARD_ZONE_);
		LAW.set_function("0x9772395CC73E8D1F_", LUA_NATIVE_LAW_0x9772395CC73E8D1F_);
		LAW.set_function("DISABLE_GUARD_ZONE_", LUA_NATIVE_LAW_DISABLE_GUARD_ZONE_);
		LAW.set_function("0x0DBACA9C38C9A686_", LUA_NATIVE_LAW_0x0DBACA9C38C9A686_);
		LAW.set_function("IS_GUARD_PED_INVESTIGATING_", LUA_NATIVE_LAW_IS_GUARD_PED_INVESTIGATING_);
		LAW.set_function("CREATE_GUARD_ZONE_FOR_ENTITY_", LUA_NATIVE_LAW_CREATE_GUARD_ZONE_FOR_ENTITY_);
		LAW.set_function("SET_GUARD_ZONE_VOLUME_REGISTRATION_START_", LUA_NATIVE_LAW_SET_GUARD_ZONE_VOLUME_REGISTRATION_START_);
		LAW.set_function("SET_GUARD_ZONE_VOLUME_RESTRICTED_", LUA_NATIVE_LAW_SET_GUARD_ZONE_VOLUME_RESTRICTED_);
		LAW.set_function("SET_GUARD_ZONE_VOLUME_THREAT_", LUA_NATIVE_LAW_SET_GUARD_ZONE_VOLUME_THREAT_);
		LAW.set_function("SET_GUARD_ZONE_VOLUME_WARNING_", LUA_NATIVE_LAW_SET_GUARD_ZONE_VOLUME_WARNING_);
		LAW.set_function("SET_GUARD_ZONE_VOLUME_REGISTRATION_END_", LUA_NATIVE_LAW_SET_GUARD_ZONE_VOLUME_REGISTRATION_END_);
		LAW.set_function("SET_GUARD_ZONE_POSITION_", LUA_NATIVE_LAW_SET_GUARD_ZONE_POSITION_);
		LAW.set_function("SET_GUARD_ZONE_POSITION_2_", LUA_NATIVE_LAW_SET_GUARD_ZONE_POSITION_2_);
	}
}
