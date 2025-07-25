#include "lua_native_binding.hpp"
#include "game/rdr/Natives.hpp"

namespace Lua::native
{
	static void LUA_NATIVE_TELEMETRY_TELEMETRY_SET_IS_FLOW_(bool toggle)
	{
		TELEMETRY::_TELEMETRY_SET_IS_FLOW(toggle);
	}

	static void LUA_NATIVE_TELEMETRY_0xEC0BD8736DCAF841_(bool toggle)
	{
		TELEMETRY::_0xEC0BD8736DCAF841(toggle);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_MISSION_STARTED_(Any p0, Any p1, Any p2, Any p3)
	{
		TELEMETRY::_TELEMETRY_MISSION_STARTED(p0, p1, p2, p3);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_MISSION_OVER_(Any p0, Any p1)
	{
		TELEMETRY::_TELEMETRY_MISSION_OVER(p0, p1);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_MISSION_CHECKPOINT_(Any p0, Any p1, Any p2)
	{
		TELEMETRY::_TELEMETRY_MISSION_CHECKPOINT(p0, p1, p2);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_PLAYER_SPAWNED_(Ped ped)
	{
		TELEMETRY::_TELEMETRY_PLAYER_SPAWNED(ped);
	}

	static bool LUA_NATIVE_TELEMETRY_TELEMETRY_CREATE_UUID_(uintptr_t uuid)
	{
		auto retval = (bool)TELEMETRY::_TELEMETRY_CREATE_UUID((Any*)uuid);
		return retval;
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_MATCH_QUEUE_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		TELEMETRY::_TELEMETRY_MATCH_QUEUE(p0, p1, p2, p3, p4, p5, p6);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_MATCH_STARTED_(uintptr_t p0, uintptr_t p1)
	{
		TELEMETRY::_TELEMETRY_MATCH_STARTED((Any*)p0, (Any*)p1);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_MATCH_OVER_(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		TELEMETRY::_TELEMETRY_MATCH_OVER(p0, p1, p2, p3, p4);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_MATCH_VOTE_(uintptr_t p0, uintptr_t p1)
	{
		TELEMETRY::_TELEMETRY_MATCH_VOTE((Any*)p0, (Any*)p1);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_LOBBY_PROGRESSION_(Any p0, Any p1, Any p2, Any p3)
	{
		TELEMETRY::_TELEMETRY_LOBBY_PROGRESSION(p0, p1, p2, p3);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_GAME_PROGRESS_(Any p0, Any p1)
	{
		TELEMETRY::_TELEMETRY_GAME_PROGRESS(p0, p1);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_HERB_PICKED_(Hash herbType)
	{
		TELEMETRY::_TELEMETRY_HERB_PICKED(herbType);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_ANIMAL_SKINNED_(Hash type, uintptr_t items)
	{
		TELEMETRY::_TELEMETRY_ANIMAL_SKINNED(type, (Any*)items);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_CAMP_CREATED_(Any p0)
	{
		TELEMETRY::_TELEMETRY_CAMP_CREATED(p0);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_CAMP_SUPPLIES_(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		TELEMETRY::_TELEMETRY_CAMP_SUPPLIES(p0, p1, p2, p3, p4);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_REGION_(Hash regionHash)
	{
		TELEMETRY::_TELEMETRY_REGION(regionHash);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_SHOP_ENTRY_(Any shopType, Any shopRegion, Any region, Any p3, Any p4, Any p5)
	{
		TELEMETRY::_TELEMETRY_SHOP_ENTRY(shopType, shopRegion, region, p3, p4, p5);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_SHOP_EXIT_(Any p0, Any p1)
	{
		TELEMETRY::_TELEMETRY_SHOP_EXIT(p0, p1);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_SET_SHOP_FOR_TRANSACTION_(int transactionId, Hash p1, Hash p2)
	{
		TELEMETRY::_TELEMETRY_SET_SHOP_FOR_TRANSACTION(transactionId, p1, p2);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_SHOP_PURCHASE_(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		TELEMETRY::_TELEMETRY_SHOP_PURCHASE(p0, p1, p2, p3, p4);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_SHOP_SELL_(Any p0, Any p1, Any p2, Any p3, int centSalePrice)
	{
		TELEMETRY::_TELEMETRY_SHOP_SELL(p0, p1, p2, p3, centSalePrice);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_GOLD_STORE_(Any p0, Any p1, Any p2, Any p3)
	{
		TELEMETRY::_TELEMETRY_GOLD_STORE(p0, p1, p2, p3);
	}

	static void LUA_NATIVE_TELEMETRY_CLEAR_TELEMETRY_SHOP_UI_()
	{
		TELEMETRY::_CLEAR_TELEMETRY_SHOP_UI();
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_SHOP_CUTSCENE_(Any p0, Any p1, Any p2, Any p3)
	{
		TELEMETRY::_TELEMETRY_SHOP_CUTSCENE(p0, p1, p2, p3);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_AMBIENT_VIGNETTE_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		TELEMETRY::_TELEMETRY_AMBIENT_VIGNETTE(p0, p1, p2, p3, p4, p5, p6);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_DISCOVERABLE_(Any p0)
	{
		TELEMETRY::_TELEMETRY_DISCOVERABLE(p0);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_HONOR_(Any p0, Any p1)
	{
		TELEMETRY::_TELEMETRY_HONOR(p0, p1);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_CRAFT_ITEM_(Any p0, Any p1, Any p2, Any quantity)
	{
		TELEMETRY::_TELEMETRY_CRAFT_ITEM(p0, p1, p2, quantity);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_CAMP_DONATE(Any transactionId, Any p1, Any p2, Any p3, Any p4, Hash slotId, Hash p6, Any p7, bool p8)
	{
		TELEMETRY::TELEMETRY_CAMP_DONATE(transactionId, p1, p2, p3, p4, slotId, p6, p7, p8);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_MOONSHINE_BREW_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10)
	{
		TELEMETRY::_TELEMETRY_MOONSHINE_BREW(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_COLLECT_(Any transactionId, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		TELEMETRY::_TELEMETRY_COLLECT(transactionId, p1, p2, p3, p4, p5, p6);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_MISSION_ILO_OPTION_(Any p0, Any p1)
	{
		TELEMETRY::_TELEMETRY_MISSION_ILO_OPTION(p0, p1);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_MISSION_FAILED_TO_LAUNCH_(Any p0, Any p1, float x, float y, float z, int reason)
	{
		TELEMETRY::_TELEMETRY_MISSION_FAILED_TO_LAUNCH(p0, p1, x, y, z, reason);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_GANG_SHARES_(Any p0, Any p1, Any p2, Any p3)
	{
		TELEMETRY::_TELEMETRY_GANG_SHARES(p0, p1, p2, p3);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_FAST_TRAVEL_(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		TELEMETRY::_TELEMETRY_FAST_TRAVEL(p0, p1, p2, p3, p4);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_NET_CAMP_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		TELEMETRY::_TELEMETRY_NET_CAMP(p0, p1, p2, p3, p4, p5, p6);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_RPG_GLOBAL_CALCULATE_ATTRIBUTE_CORE_DELTA_()
	{
		TELEMETRY::_TELEMETRY_RPG_GLOBAL_CALCULATE_ATTRIBUTE_CORE_DELTA();
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_SLEEP_(Any p0)
	{
		TELEMETRY::_TELEMETRY_SLEEP(p0);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_PARLEY_FEUD_(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		TELEMETRY::_TELEMETRY_PARLEY_FEUD(p0, p1, p2, p3, p4);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_PLAYER_MENU_PIN(Any p0, Any p1, Any p2, Any p3)
	{
		TELEMETRY::TELEMETRY_PLAYER_MENU_PIN(p0, p1, p2, p3);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_NOTORIETY_(Any p0, Any p1, Any p2, Any p3)
	{
		TELEMETRY::_TELEMETRY_NOTORIETY(p0, p1, p2, p3);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_DEFENSIVE_(Any p0, Any p1, Any p2)
	{
		TELEMETRY::_TELEMETRY_DEFENSIVE(p0, p1, p2);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_LOOT_(Any p0, Any p1, Any p2, Any p3)
	{
		TELEMETRY::_TELEMETRY_LOOT(p0, p1, p2, p3);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_EMOTE_ADD_CATEGORY_TO_SAVE_(Any p0, Any p1, Hash emote)
	{
		TELEMETRY::_TELEMETRY_EMOTE_ADD_CATEGORY_TO_SAVE(p0, p1, emote);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_FAVOR_EMOTE_(Any p0, Any p1, Any p2)
	{
		TELEMETRY::_TELEMETRY_FAVOR_EMOTE(p0, p1, p2);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_POKER_OVER_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		TELEMETRY::_TELEMETRY_POKER_OVER(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}

	static bool LUA_NATIVE_TELEMETRY_TELEMETRY_TRIGGER_TRANSACTION_REQUEST_(uintptr_t requestId, uintptr_t transactionId)
	{
		auto retval = (bool)TELEMETRY::_TELEMETRY_TRIGGER_TRANSACTION_REQUEST((Any*)requestId, (Any*)transactionId);
		return retval;
	}

	static bool LUA_NATIVE_TELEMETRY_TRY_GET_TELEMETRY_ID_FROM_TRANSACTION_ID_(uintptr_t transactionId, uintptr_t requestId)
	{
		auto retval = (bool)TELEMETRY::_TRY_GET_TELEMETRY_ID_FROM_TRANSACTION_ID((Any*)transactionId, (Any*)requestId);
		return retval;
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_ROLE_BOUNTY_(Any p0)
	{
		TELEMETRY::_TELEMETRY_ROLE_BOUNTY(p0);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_BOUNTY_TARGET_(uintptr_t data)
	{
		TELEMETRY::_TELEMETRY_BOUNTY_TARGET((Any*)data);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_PRISON_(Any transactionId, Any bountyAmount, Ped ped, Any completionType, Any jailTimeServed, Any jailTimeLeft, Any posseRole)
	{
		TELEMETRY::_TELEMETRY_PRISON(transactionId, bountyAmount, ped, completionType, jailTimeServed, jailTimeLeft, posseRole);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_ROLE_TRADER_(Any p0, Any transactionId)
	{
		TELEMETRY::_TELEMETRY_ROLE_TRADER(p0, transactionId);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_ROLE_MOONSHINER_(Any p0, Any transactionId)
	{
		TELEMETRY::_TELEMETRY_ROLE_MOONSHINER(p0, transactionId);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_ROLE_COLLECTOR_(Any transactionId, Any collectible, Any category, Any p3, Any p4, Any p5, Any p6)
	{
		TELEMETRY::_TELEMETRY_ROLE_COLLECTOR(transactionId, collectible, category, p3, p4, p5, p6);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_PHOTO_(Any p0, Any p1, Any p2, Any p3)
	{
		TELEMETRY::_TELEMETRY_PHOTO(p0, p1, p2, p3);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_START_GUN_LOCKER_INTERACTION_()
	{
		TELEMETRY::_TELEMETRY_START_GUN_LOCKER_INTERACTION();
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_GUN_LOCKER_()
	{
		TELEMETRY::_TELEMETRY_GUN_LOCKER();
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_GUN_LOCKER_WEAPON_STORED_(Hash p0)
	{
		TELEMETRY::_TELEMETRY_GUN_LOCKER_WEAPON_STORED(p0);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_GUN_LOCKER_WEAPON_REMOVED_(Hash p0)
	{
		TELEMETRY::_TELEMETRY_GUN_LOCKER_WEAPON_REMOVED(p0);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_ROLE_TOKEN_TRANSACTION_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		TELEMETRY::_TELEMETRY_ROLE_TOKEN_TRANSACTION(p0, p1, p2, p3, p4, p5);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_COUPON_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		TELEMETRY::_TELEMETRY_COUPON(p0, p1, p2, p3, p4, p5);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_PERSONAL_VEHICLE_MOUNT(Any p0, Any p1, Any p2, Any p3)
	{
		TELEMETRY::TELEMETRY_PERSONAL_VEHICLE_MOUNT(p0, p1, p2, p3);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_PERSONAL_VEHICLE_WAGON_(Any p0, Any p1, Any p2)
	{
		TELEMETRY::_TELEMETRY_PERSONAL_VEHICLE_WAGON(p0, p1, p2);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_MENU_NAVIGATION_(Any p0, Any p1, Any p2, Any p3)
	{
		TELEMETRY::_TELEMETRY_MENU_NAVIGATION(p0, p1, p2, p3);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_HUB_NAVIGATION_(Any p0, Any p1, Any p2, Any p3)
	{
		TELEMETRY::_TELEMETRY_HUB_NAVIGATION(p0, p1, p2, p3);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_HUB_OFFERS_(Any couponItem, Any p1)
	{
		TELEMETRY::_TELEMETRY_HUB_OFFERS(couponItem, p1);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_SAMPLE_(Any transactionId, Any animal, Any p2, Any bSampled, bool bTranq)
	{
		TELEMETRY::_TELEMETRY_SAMPLE(transactionId, animal, p2, bSampled, bTranq);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_ROLE_NATURALIST_(Any transactionId, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		TELEMETRY::_TELEMETRY_ROLE_NATURALIST(transactionId, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_PHOTO_CAM_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		TELEMETRY::_TELEMETRY_PHOTO_CAM(p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_INTRO_SKIP_(Any p0, Any p1, Any p2)
	{
		TELEMETRY::_TELEMETRY_INTRO_SKIP(p0, p1, p2);
	}

	static void LUA_NATIVE_TELEMETRY_ANALYTICS_PLAYTIME_FREEMODE_START()
	{
		TELEMETRY::ANALYTICS_PLAYTIME_FREEMODE_START();
	}

	static void LUA_NATIVE_TELEMETRY_ANALYTICS_PLAYTIME_FREEMODE_END()
	{
		TELEMETRY::ANALYTICS_PLAYTIME_FREEMODE_END();
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_CUSTOM_(uintptr_t args)
	{
		TELEMETRY::_TELEMETRY_CUSTOM((Any*)args);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_MATCH_NOMINATION_(uintptr_t args)
	{
		TELEMETRY::_TELEMETRY_MATCH_NOMINATION((Any*)args);
	}

	static void LUA_NATIVE_TELEMETRY_TELEMETRY_CHAR_CREATOR_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		TELEMETRY::_TELEMETRY_CHAR_CREATOR(p0, p1, p2, p3, p4, p5, p6);
	}

	void init_native_binding_TELEMETRY(sol::state& L)
	{
		auto TELEMETRY = L["TELEMETRY"].get_or_create<sol::table>();
		TELEMETRY.set_function("TELEMETRY_SET_IS_FLOW_", LUA_NATIVE_TELEMETRY_TELEMETRY_SET_IS_FLOW_);
		TELEMETRY.set_function("0xEC0BD8736DCAF841_", LUA_NATIVE_TELEMETRY_0xEC0BD8736DCAF841_);
		TELEMETRY.set_function("TELEMETRY_MISSION_STARTED_", LUA_NATIVE_TELEMETRY_TELEMETRY_MISSION_STARTED_);
		TELEMETRY.set_function("TELEMETRY_MISSION_OVER_", LUA_NATIVE_TELEMETRY_TELEMETRY_MISSION_OVER_);
		TELEMETRY.set_function("TELEMETRY_MISSION_CHECKPOINT_", LUA_NATIVE_TELEMETRY_TELEMETRY_MISSION_CHECKPOINT_);
		TELEMETRY.set_function("TELEMETRY_PLAYER_SPAWNED_", LUA_NATIVE_TELEMETRY_TELEMETRY_PLAYER_SPAWNED_);
		TELEMETRY.set_function("TELEMETRY_CREATE_UUID_", LUA_NATIVE_TELEMETRY_TELEMETRY_CREATE_UUID_);
		TELEMETRY.set_function("TELEMETRY_MATCH_QUEUE_", LUA_NATIVE_TELEMETRY_TELEMETRY_MATCH_QUEUE_);
		TELEMETRY.set_function("TELEMETRY_MATCH_STARTED_", LUA_NATIVE_TELEMETRY_TELEMETRY_MATCH_STARTED_);
		TELEMETRY.set_function("TELEMETRY_MATCH_OVER_", LUA_NATIVE_TELEMETRY_TELEMETRY_MATCH_OVER_);
		TELEMETRY.set_function("TELEMETRY_MATCH_VOTE_", LUA_NATIVE_TELEMETRY_TELEMETRY_MATCH_VOTE_);
		TELEMETRY.set_function("TELEMETRY_LOBBY_PROGRESSION_", LUA_NATIVE_TELEMETRY_TELEMETRY_LOBBY_PROGRESSION_);
		TELEMETRY.set_function("TELEMETRY_GAME_PROGRESS_", LUA_NATIVE_TELEMETRY_TELEMETRY_GAME_PROGRESS_);
		TELEMETRY.set_function("TELEMETRY_HERB_PICKED_", LUA_NATIVE_TELEMETRY_TELEMETRY_HERB_PICKED_);
		TELEMETRY.set_function("TELEMETRY_ANIMAL_SKINNED_", LUA_NATIVE_TELEMETRY_TELEMETRY_ANIMAL_SKINNED_);
		TELEMETRY.set_function("TELEMETRY_CAMP_CREATED_", LUA_NATIVE_TELEMETRY_TELEMETRY_CAMP_CREATED_);
		TELEMETRY.set_function("TELEMETRY_CAMP_SUPPLIES_", LUA_NATIVE_TELEMETRY_TELEMETRY_CAMP_SUPPLIES_);
		TELEMETRY.set_function("TELEMETRY_REGION_", LUA_NATIVE_TELEMETRY_TELEMETRY_REGION_);
		TELEMETRY.set_function("TELEMETRY_SHOP_ENTRY_", LUA_NATIVE_TELEMETRY_TELEMETRY_SHOP_ENTRY_);
		TELEMETRY.set_function("TELEMETRY_SHOP_EXIT_", LUA_NATIVE_TELEMETRY_TELEMETRY_SHOP_EXIT_);
		TELEMETRY.set_function("TELEMETRY_SET_SHOP_FOR_TRANSACTION_", LUA_NATIVE_TELEMETRY_TELEMETRY_SET_SHOP_FOR_TRANSACTION_);
		TELEMETRY.set_function("TELEMETRY_SHOP_PURCHASE_", LUA_NATIVE_TELEMETRY_TELEMETRY_SHOP_PURCHASE_);
		TELEMETRY.set_function("TELEMETRY_SHOP_SELL_", LUA_NATIVE_TELEMETRY_TELEMETRY_SHOP_SELL_);
		TELEMETRY.set_function("TELEMETRY_GOLD_STORE_", LUA_NATIVE_TELEMETRY_TELEMETRY_GOLD_STORE_);
		TELEMETRY.set_function("CLEAR_TELEMETRY_SHOP_UI_", LUA_NATIVE_TELEMETRY_CLEAR_TELEMETRY_SHOP_UI_);
		TELEMETRY.set_function("TELEMETRY_SHOP_CUTSCENE_", LUA_NATIVE_TELEMETRY_TELEMETRY_SHOP_CUTSCENE_);
		TELEMETRY.set_function("TELEMETRY_AMBIENT_VIGNETTE_", LUA_NATIVE_TELEMETRY_TELEMETRY_AMBIENT_VIGNETTE_);
		TELEMETRY.set_function("TELEMETRY_DISCOVERABLE_", LUA_NATIVE_TELEMETRY_TELEMETRY_DISCOVERABLE_);
		TELEMETRY.set_function("TELEMETRY_HONOR_", LUA_NATIVE_TELEMETRY_TELEMETRY_HONOR_);
		TELEMETRY.set_function("TELEMETRY_CRAFT_ITEM_", LUA_NATIVE_TELEMETRY_TELEMETRY_CRAFT_ITEM_);
		TELEMETRY.set_function("TELEMETRY_CAMP_DONATE", LUA_NATIVE_TELEMETRY_TELEMETRY_CAMP_DONATE);
		TELEMETRY.set_function("TELEMETRY_MOONSHINE_BREW_", LUA_NATIVE_TELEMETRY_TELEMETRY_MOONSHINE_BREW_);
		TELEMETRY.set_function("TELEMETRY_COLLECT_", LUA_NATIVE_TELEMETRY_TELEMETRY_COLLECT_);
		TELEMETRY.set_function("TELEMETRY_MISSION_ILO_OPTION_", LUA_NATIVE_TELEMETRY_TELEMETRY_MISSION_ILO_OPTION_);
		TELEMETRY.set_function("TELEMETRY_MISSION_FAILED_TO_LAUNCH_", LUA_NATIVE_TELEMETRY_TELEMETRY_MISSION_FAILED_TO_LAUNCH_);
		TELEMETRY.set_function("TELEMETRY_GANG_SHARES_", LUA_NATIVE_TELEMETRY_TELEMETRY_GANG_SHARES_);
		TELEMETRY.set_function("TELEMETRY_FAST_TRAVEL_", LUA_NATIVE_TELEMETRY_TELEMETRY_FAST_TRAVEL_);
		TELEMETRY.set_function("TELEMETRY_NET_CAMP_", LUA_NATIVE_TELEMETRY_TELEMETRY_NET_CAMP_);
		TELEMETRY.set_function("TELEMETRY_RPG_GLOBAL_CALCULATE_ATTRIBUTE_CORE_DELTA_", LUA_NATIVE_TELEMETRY_TELEMETRY_RPG_GLOBAL_CALCULATE_ATTRIBUTE_CORE_DELTA_);
		TELEMETRY.set_function("TELEMETRY_SLEEP_", LUA_NATIVE_TELEMETRY_TELEMETRY_SLEEP_);
		TELEMETRY.set_function("TELEMETRY_PARLEY_FEUD_", LUA_NATIVE_TELEMETRY_TELEMETRY_PARLEY_FEUD_);
		TELEMETRY.set_function("TELEMETRY_PLAYER_MENU_PIN", LUA_NATIVE_TELEMETRY_TELEMETRY_PLAYER_MENU_PIN);
		TELEMETRY.set_function("TELEMETRY_NOTORIETY_", LUA_NATIVE_TELEMETRY_TELEMETRY_NOTORIETY_);
		TELEMETRY.set_function("TELEMETRY_DEFENSIVE_", LUA_NATIVE_TELEMETRY_TELEMETRY_DEFENSIVE_);
		TELEMETRY.set_function("TELEMETRY_LOOT_", LUA_NATIVE_TELEMETRY_TELEMETRY_LOOT_);
		TELEMETRY.set_function("TELEMETRY_EMOTE_ADD_CATEGORY_TO_SAVE_", LUA_NATIVE_TELEMETRY_TELEMETRY_EMOTE_ADD_CATEGORY_TO_SAVE_);
		TELEMETRY.set_function("TELEMETRY_FAVOR_EMOTE_", LUA_NATIVE_TELEMETRY_TELEMETRY_FAVOR_EMOTE_);
		TELEMETRY.set_function("TELEMETRY_POKER_OVER_", LUA_NATIVE_TELEMETRY_TELEMETRY_POKER_OVER_);
		TELEMETRY.set_function("TELEMETRY_TRIGGER_TRANSACTION_REQUEST_", LUA_NATIVE_TELEMETRY_TELEMETRY_TRIGGER_TRANSACTION_REQUEST_);
		TELEMETRY.set_function("TRY_GET_TELEMETRY_ID_FROM_TRANSACTION_ID_", LUA_NATIVE_TELEMETRY_TRY_GET_TELEMETRY_ID_FROM_TRANSACTION_ID_);
		TELEMETRY.set_function("TELEMETRY_ROLE_BOUNTY_", LUA_NATIVE_TELEMETRY_TELEMETRY_ROLE_BOUNTY_);
		TELEMETRY.set_function("TELEMETRY_BOUNTY_TARGET_", LUA_NATIVE_TELEMETRY_TELEMETRY_BOUNTY_TARGET_);
		TELEMETRY.set_function("TELEMETRY_PRISON_", LUA_NATIVE_TELEMETRY_TELEMETRY_PRISON_);
		TELEMETRY.set_function("TELEMETRY_ROLE_TRADER_", LUA_NATIVE_TELEMETRY_TELEMETRY_ROLE_TRADER_);
		TELEMETRY.set_function("TELEMETRY_ROLE_MOONSHINER_", LUA_NATIVE_TELEMETRY_TELEMETRY_ROLE_MOONSHINER_);
		TELEMETRY.set_function("TELEMETRY_ROLE_COLLECTOR_", LUA_NATIVE_TELEMETRY_TELEMETRY_ROLE_COLLECTOR_);
		TELEMETRY.set_function("TELEMETRY_PHOTO_", LUA_NATIVE_TELEMETRY_TELEMETRY_PHOTO_);
		TELEMETRY.set_function("TELEMETRY_START_GUN_LOCKER_INTERACTION_", LUA_NATIVE_TELEMETRY_TELEMETRY_START_GUN_LOCKER_INTERACTION_);
		TELEMETRY.set_function("TELEMETRY_GUN_LOCKER_", LUA_NATIVE_TELEMETRY_TELEMETRY_GUN_LOCKER_);
		TELEMETRY.set_function("TELEMETRY_GUN_LOCKER_WEAPON_STORED_", LUA_NATIVE_TELEMETRY_TELEMETRY_GUN_LOCKER_WEAPON_STORED_);
		TELEMETRY.set_function("TELEMETRY_GUN_LOCKER_WEAPON_REMOVED_", LUA_NATIVE_TELEMETRY_TELEMETRY_GUN_LOCKER_WEAPON_REMOVED_);
		TELEMETRY.set_function("TELEMETRY_ROLE_TOKEN_TRANSACTION_", LUA_NATIVE_TELEMETRY_TELEMETRY_ROLE_TOKEN_TRANSACTION_);
		TELEMETRY.set_function("TELEMETRY_COUPON_", LUA_NATIVE_TELEMETRY_TELEMETRY_COUPON_);
		TELEMETRY.set_function("TELEMETRY_PERSONAL_VEHICLE_MOUNT", LUA_NATIVE_TELEMETRY_TELEMETRY_PERSONAL_VEHICLE_MOUNT);
		TELEMETRY.set_function("TELEMETRY_PERSONAL_VEHICLE_WAGON_", LUA_NATIVE_TELEMETRY_TELEMETRY_PERSONAL_VEHICLE_WAGON_);
		TELEMETRY.set_function("TELEMETRY_MENU_NAVIGATION_", LUA_NATIVE_TELEMETRY_TELEMETRY_MENU_NAVIGATION_);
		TELEMETRY.set_function("TELEMETRY_HUB_NAVIGATION_", LUA_NATIVE_TELEMETRY_TELEMETRY_HUB_NAVIGATION_);
		TELEMETRY.set_function("TELEMETRY_HUB_OFFERS_", LUA_NATIVE_TELEMETRY_TELEMETRY_HUB_OFFERS_);
		TELEMETRY.set_function("TELEMETRY_SAMPLE_", LUA_NATIVE_TELEMETRY_TELEMETRY_SAMPLE_);
		TELEMETRY.set_function("TELEMETRY_ROLE_NATURALIST_", LUA_NATIVE_TELEMETRY_TELEMETRY_ROLE_NATURALIST_);
		TELEMETRY.set_function("TELEMETRY_PHOTO_CAM_", LUA_NATIVE_TELEMETRY_TELEMETRY_PHOTO_CAM_);
		TELEMETRY.set_function("TELEMETRY_INTRO_SKIP_", LUA_NATIVE_TELEMETRY_TELEMETRY_INTRO_SKIP_);
		TELEMETRY.set_function("ANALYTICS_PLAYTIME_FREEMODE_START", LUA_NATIVE_TELEMETRY_ANALYTICS_PLAYTIME_FREEMODE_START);
		TELEMETRY.set_function("ANALYTICS_PLAYTIME_FREEMODE_END", LUA_NATIVE_TELEMETRY_ANALYTICS_PLAYTIME_FREEMODE_END);
		TELEMETRY.set_function("TELEMETRY_CUSTOM_", LUA_NATIVE_TELEMETRY_TELEMETRY_CUSTOM_);
		TELEMETRY.set_function("TELEMETRY_MATCH_NOMINATION_", LUA_NATIVE_TELEMETRY_TELEMETRY_MATCH_NOMINATION_);
		TELEMETRY.set_function("TELEMETRY_CHAR_CREATOR_", LUA_NATIVE_TELEMETRY_TELEMETRY_CHAR_CREATOR_);
	}
}
