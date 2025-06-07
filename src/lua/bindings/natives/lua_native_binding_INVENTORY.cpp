#include "lua_native_binding.hpp"
#include "game/rdr/Natives.hpp"

namespace Lua::native
{
	static int LUA_NATIVE_INVENTORY_INVENTORY_GET_INVENTORY_ID_FROM_PED_(Ped ped)
	{
		auto retval = INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(ped);
		return retval;
	}

	static int LUA_NATIVE_INVENTORY_GET_ITEM_ROLE_MAX_LEVEL_COUNT_(int inventoryId, Hash eRoleMaxLevel)
	{
		auto retval = INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(inventoryId, eRoleMaxLevel);
		return retval;
	}

	static int LUA_NATIVE_INVENTORY_GET_ITEM_SLOT_MAX_COUNT_(Hash provision, Hash slotId)
	{
		auto retval = INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(provision, slotId);
		return retval;
	}

	static std::tuple<bool, int, int, int, int, int, int> LUA_NATIVE_INVENTORY_0x112BCA290D2EB53C_(int inventoryId, Hash p1, int year, int month, int day, int hour, int minute, int second)
	{
		std::tuple<bool, int, int, int, int, int, int> return_values;
		std::get<0>(return_values) = (bool)INVENTORY::_0x112BCA290D2EB53C(inventoryId, p1, &year, &month, &day, &hour, &minute, &second);
		std::get<1>(return_values) = year;
		std::get<2>(return_values) = month;
		std::get<3>(return_values) = day;
		std::get<4>(return_values) = hour;
		std::get<5>(return_values) = minute;
		std::get<6>(return_values) = second;

		return return_values;
	}

	static void LUA_NATIVE_INVENTORY_0x46743BBFEDBC859E_(int inventoryId, Hash eInventoryItem, bool p2)
	{
		INVENTORY::_0x46743BBFEDBC859E(inventoryId, eInventoryItem, p2);
	}

	static void LUA_NATIVE_INVENTORY_INVENTORY_SET_INVENTORY_ITEM_IN_USE_(int inventoryId, uintptr_t guid, bool inUse)
	{
		INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(inventoryId, (Any*)guid, inUse);
	}

	static bool LUA_NATIVE_INVENTORY_INVENTORY_GET_INVENTORY_ITEM_IN_USE_(int inventoryId, uintptr_t guid)
	{
		auto retval = (bool)INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_IN_USE(inventoryId, (Any*)guid);
		return retval;
	}

	static void LUA_NATIVE_INVENTORY_INVENTORY_SET_INVENTORY_ITEM_HIDDEN_(int inventoryId, uintptr_t guid, bool hidden)
	{
		INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_HIDDEN(inventoryId, (Any*)guid, hidden);
	}

	static void LUA_NATIVE_INVENTORY_INVENTORY_SET_INVENTORY_ITEM_HIDDEN_2_(int inventoryId, uintptr_t guid, bool hidden)
	{
		INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_HIDDEN_2(inventoryId, (Any*)guid, hidden);
	}

	static bool LUA_NATIVE_INVENTORY_INVENTORY_GET_INVENTORY_ITEM_HIDDEN_(int inventoryId, uintptr_t guid)
	{
		auto retval = (bool)INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_HIDDEN(inventoryId, (Any*)guid);
		return retval;
	}

	static bool LUA_NATIVE_INVENTORY_INVENTORY_GET_INVENTORY_ITEM_IS_ANIMAL_PELT_(Hash item)
	{
		auto retval = (bool)INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_IS_ANIMAL_PELT(item);
		return retval;
	}

	static Hash LUA_NATIVE_INVENTORY_INVENTORY_GET_INVENTORY_ITEM_DESCRIPTION_HASH_(Hash item)
	{
		auto retval = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_DESCRIPTION_HASH(item);
		return retval;
	}

	static bool LUA_NATIVE_INVENTORY_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED_(Hash item, int flag)
	{
		auto retval = (bool)INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(item, flag);
		return retval;
	}

	static bool LUA_NATIVE_INVENTORY_INVENTORY_GET_IS_INVENTORY_ITEM_SOUND_VALID_(Hash item, int soundType)
	{
		auto retval = (bool)INVENTORY::_INVENTORY_GET_IS_INVENTORY_ITEM_SOUND_VALID(item, soundType);
		return retval;
	}

	static Hash LUA_NATIVE_INVENTORY_INVENTORY_GET_INVENTORY_ITEM_SOUND_(Hash item, int soundType)
	{
		auto retval = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_SOUND(item, soundType);
		return retval;
	}

	static bool LUA_NATIVE_INVENTORY_INVENTORY_GET_INVENTORY_ITEM_INSPECTION_INFO_(Hash item, uintptr_t info)
	{
		auto retval = (bool)INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_INSPECTION_INFO(item, (Any*)info);
		return retval;
	}

	static int LUA_NATIVE_INVENTORY_INVENTORY_GET_INVENTORY_ITEM_WEAPON_COPY_ID_(int inventoryId, uintptr_t guid)
	{
		auto retval = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_WEAPON_COPY_ID(inventoryId, (Any*)guid);
		return retval;
	}

	static bool LUA_NATIVE_INVENTORY_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED_(int inventoryId)
	{
		auto retval = (bool)INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(inventoryId);
		return retval;
	}

	static bool LUA_NATIVE_INVENTORY_INVENTORY_IS_GUID_VALID_(uintptr_t guid)
	{
		auto retval = (bool)INVENTORY::_INVENTORY_IS_GUID_VALID((Any*)guid);
		return retval;
	}

	static bool LUA_NATIVE_INVENTORY_INVENTORY_COMPARE_GUIDS_(uintptr_t guid1, uintptr_t guid2)
	{
		auto retval = (bool)INVENTORY::_INVENTORY_COMPARE_GUIDS((Any*)guid1, (Any*)guid2);
		return retval;
	}

	static bool LUA_NATIVE_INVENTORY_INVENTORY_GET_GUID_FROM_ITEMID(int inventoryId, uintptr_t guid, Hash p2, Hash slotId, uintptr_t outGuid)
	{
		auto retval = (bool)INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(inventoryId, (Any*)guid, p2, slotId, (Any*)outGuid);
		return retval;
	}

	static bool LUA_NATIVE_INVENTORY_0x5D6182F3BCE1333B_(int inventoryId, Hash removeReason)
	{
		auto retval = (bool)INVENTORY::_0x5D6182F3BCE1333B(inventoryId, removeReason);
		return retval;
	}

	static bool LUA_NATIVE_INVENTORY_INVENTORY_GET_INVENTORY_ITEM(int inventoryId, uintptr_t inData, uintptr_t outData, bool p3)
	{
		auto retval = (bool)INVENTORY::INVENTORY_GET_INVENTORY_ITEM(inventoryId, (Any*)inData, (Any*)outData, p3);
		return retval;
	}

	static bool LUA_NATIVE_INVENTORY_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA_(int inventoryId, uintptr_t guid, uintptr_t p2, int p3, int p4)
	{
		auto retval = (bool)INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, (Any*)guid, (Any*)p2, p3, p4);
		return retval;
	}

	static bool LUA_NATIVE_INVENTORY_INVENTORY_GET_INVENTORY_ITEM_CHILD_(int inventoryId, uintptr_t parentGuid, Any childIndex, uintptr_t outInventoryItem)
	{
		auto retval = (bool)INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_CHILD(inventoryId, (Any*)parentGuid, childIndex, (Any*)outInventoryItem);
		return retval;
	}

	static bool LUA_NATIVE_INVENTORY_INVENTORY_ADD_ITEM_WITH_GUID_(int inventoryId, uintptr_t guid1, uintptr_t guid2, Hash item, Hash inventoryItemSlot, int p5, Hash addReason)
	{
		auto retval = (bool)INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(inventoryId, (Any*)guid1, (Any*)guid2, item, inventoryItemSlot, p5, addReason);
		return retval;
	}

	static bool LUA_NATIVE_INVENTORY_INVENTORY_UPDATE_INVENTORY_ITEM_(int inventoryId, uintptr_t guid1, uintptr_t guid2, int p3)
	{
		auto retval = (bool)INVENTORY::_INVENTORY_UPDATE_INVENTORY_ITEM(inventoryId, (Any*)guid1, (Any*)guid2, p3);
		return retval;
	}

	static bool LUA_NATIVE_INVENTORY_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID_(int inventoryId, uintptr_t guid, int quantity, Hash removeReason)
	{
		auto retval = (bool)INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(inventoryId, (Any*)guid, quantity, removeReason);
		return retval;
	}

	static bool LUA_NATIVE_INVENTORY_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID_(int inventoryId, Hash item, int quantity, Hash removeReason)
	{
		auto retval = (bool)INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(inventoryId, item, quantity, removeReason);
		return retval;
	}

	static bool LUA_NATIVE_INVENTORY_INVENTORY_MOVE_INVENTORY_ITEM_(int inventoryId, uintptr_t guid1, uintptr_t guid2, Hash slotId, int quantity, uintptr_t outGuid)
	{
		auto retval = (bool)INVENTORY::_INVENTORY_MOVE_INVENTORY_ITEM(inventoryId, (Any*)guid1, (Any*)guid2, slotId, quantity, (Any*)outGuid);
		return retval;
	}

	static bool LUA_NATIVE_INVENTORY_INVENTORY_SWAP_INVENTORY_ITEM_(int inventoryId, uintptr_t guid1, uintptr_t guid2)
	{
		auto retval = (bool)INVENTORY::_INVENTORY_SWAP_INVENTORY_ITEM(inventoryId, (Any*)guid1, (Any*)guid2);
		return retval;
	}

	static std::tuple<int, int> LUA_NATIVE_INVENTORY_INVENTORY_CREATE_ITEM_COLLECTION_(int inventoryId, sol::stack_object filterName, Hash slotId, int size)
	{
		std::tuple<int, int> return_values;
		std::get<0>(return_values) = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(inventoryId, filterName.is<const char*>() ? filterName.as<const char*>() : nullptr, slotId, &size);
		std::get<1>(return_values) = size;

		return return_values;
	}

	static std::tuple<int, int> LUA_NATIVE_INVENTORY_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER_(int inventoryId, uintptr_t filter, int numInCollection)
	{
		std::tuple<int, int> return_values;
		std::get<0>(return_values) = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(inventoryId, (Any*)filter, &numInCollection);
		std::get<1>(return_values) = numInCollection;

		return return_values;
	}

	static bool LUA_NATIVE_INVENTORY_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX_(int collectionId, int itemIndex, uintptr_t itemData)
	{
		auto retval = (bool)INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(collectionId, itemIndex, (Any*)itemData);
		return retval;
	}

	static bool LUA_NATIVE_INVENTORY_INVENTORY_RELEASE_ITEM_COLLECTION_(int collectionId)
	{
		auto retval = (bool)INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(collectionId);
		return retval;
	}

	static bool LUA_NATIVE_INVENTORY_INVENTORY_EQUIP_ITEM_WITH_GUID_(int inventoryId, uintptr_t guid, bool bEquipped)
	{
		auto retval = (bool)INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(inventoryId, (Any*)guid, bEquipped);
		return retval;
	}

	static bool LUA_NATIVE_INVENTORY_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF_(int inventoryId, uintptr_t guid, Hash slotId, uintptr_t outGuid)
	{
		auto retval = (bool)INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(inventoryId, (Any*)guid, slotId, (Any*)outGuid);
		return retval;
	}

	static bool LUA_NATIVE_INVENTORY_INVENTORY_DOES_ITEM_OWN_EQUIPMENT_(int inventoryId, uintptr_t guid, Hash item)
	{
		auto retval = (bool)INVENTORY::_INVENTORY_DOES_ITEM_OWN_EQUIPMENT(inventoryId, (Any*)guid, item);
		return retval;
	}

	static std::tuple<bool, int, int> LUA_NATIVE_INVENTORY_0xD08685BA892DBFAB_(int inventoryId, uintptr_t guid, int p2, int p3)
	{
		std::tuple<bool, int, int> return_values;
		std::get<0>(return_values) = (bool)INVENTORY::_0xD08685BA892DBFAB(inventoryId, (Any*)guid, &p2, &p3);
		std::get<1>(return_values) = p2;
		std::get<2>(return_values) = p3;

		return return_values;
	}

	static void LUA_NATIVE_INVENTORY_0x0349404A22736740_(bool p0, int inventoryId, uintptr_t guid)
	{
		INVENTORY::_0x0349404A22736740(p0, inventoryId, (Any*)guid);
	}

	static void LUA_NATIVE_INVENTORY_INVENTORY_SET_INVENTORY_ITEM_WEATHER_EFFECTIVENESS_(int inventoryId, uintptr_t guid, int weatherEffectiveness)
	{
		INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_WEATHER_EFFECTIVENESS(inventoryId, (Any*)guid, weatherEffectiveness);
	}

	static void LUA_NATIVE_INVENTORY_INVENTORY_DISABLE_ITEM_(int inventoryId, Hash item, Hash gtxReason)
	{
		INVENTORY::_INVENTORY_DISABLE_ITEM(inventoryId, item, gtxReason);
	}

	static void LUA_NATIVE_INVENTORY_INVENTORY_ENABLE_ITEM_(int inventoryId, Hash item)
	{
		INVENTORY::_INVENTORY_ENABLE_ITEM(inventoryId, item);
	}

	static bool LUA_NATIVE_INVENTORY_INVENTORY_IS_INVENTORY_ITEM_EQUIPPED_(int inventoryId, Hash item, bool p2)
	{
		auto retval = (bool)INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_EQUIPPED(inventoryId, item, p2);
		return retval;
	}

	static bool LUA_NATIVE_INVENTORY_INVENTORY_SET_INVENTORY_ITEM_INSPECTION_ENABLED_(int inventoryId, uintptr_t p1, bool enabled)
	{
		auto retval = (bool)INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_INSPECTION_ENABLED(inventoryId, (Any*)p1, enabled);
		return retval;
	}

	static bool LUA_NATIVE_INVENTORY_INVENTORY_IS_ITEM_EXPIRED_(uintptr_t itemGUID)
	{
		auto retval = (bool)INVENTORY::_INVENTORY_IS_ITEM_EXPIRED((Any*)itemGUID);
		return retval;
	}

	static int LUA_NATIVE_INVENTORY_INVENTORY_GET_ITEM_EXPIRY_TIME_(uintptr_t itemGUID)
	{
		auto retval = INVENTORY::_INVENTORY_GET_ITEM_EXPIRY_TIME((Any*)itemGUID);
		return retval;
	}

	static int LUA_NATIVE_INVENTORY_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID_(int inventoryId, uintptr_t guid, bool p2)
	{
		auto retval = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(inventoryId, (Any*)guid, p2);
		return retval;
	}

	static int LUA_NATIVE_INVENTORY_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID_(int inventoryId, Hash eInventoryItem, bool p2)
	{
		auto retval = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(inventoryId, eInventoryItem, p2);
		return retval;
	}

	static bool LUA_NATIVE_INVENTORY_0xB1DD74A1F5536622_(int inventoryId, uintptr_t itemGUID)
	{
		auto retval = (bool)INVENTORY::_0xB1DD74A1F5536622(inventoryId, (Any*)itemGUID);
		return retval;
	}

	static int LUA_NATIVE_INVENTORY_INVENTORY_GET_CHILDREN_COUNT_(int inventoryId, uintptr_t parentGuid)
	{
		auto retval = INVENTORY::_INVENTORY_GET_CHILDREN_COUNT(inventoryId, (Any*)parentGuid);
		return retval;
	}

	static int LUA_NATIVE_INVENTORY_INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(int inventoryId, uintptr_t guid, Hash slotId)
	{
		auto retval = INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(inventoryId, (Any*)guid, slotId);
		return retval;
	}

	static int LUA_NATIVE_INVENTORY_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_(int inventoryId, uintptr_t guid, Hash slotId, int p3, uintptr_t p4)
	{
		auto retval = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT(inventoryId, (Any*)guid, slotId, p3, (Any*)p4);
		return retval;
	}

	static bool LUA_NATIVE_INVENTORY_INVENTORY_FITS_SLOT_ID_(Hash item, Hash slotId)
	{
		auto retval = (bool)INVENTORY::_INVENTORY_FITS_SLOT_ID(item, slotId);
		return retval;
	}

	static Hash LUA_NATIVE_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO_(Hash item, Hash p1)
	{
		auto retval = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(item, p1);
		return retval;
	}

	static bool LUA_NATIVE_INVENTORY_INVENTORY_GET_INVENTORY_ITEM_FIT_SLOT_(Hash p0, uintptr_t p1, int p2)
	{
		auto retval = (bool)INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_FIT_SLOT(p0, (Any*)p1, p2);
		return retval;
	}

	static bool LUA_NATIVE_INVENTORY_0x9AC53CB6907B4428_(Hash item, uintptr_t p1, uintptr_t p2)
	{
		auto retval = (bool)INVENTORY::_0x9AC53CB6907B4428(item, (Any*)p1, (Any*)p2);
		return retval;
	}

	static Hash LUA_NATIVE_INVENTORY_0x9D21B185ABC2DBC4_(Any data, sol::stack_object effects, bool p2, bool p3)
	{
		auto retval = INVENTORY::_0x9D21B185ABC2DBC4(data, effects.is<const char*>() ? effects.as<const char*>() : nullptr, p2, p3);
		return retval;
	}

	static void LUA_NATIVE_INVENTORY_0x75CFAC49301E134F_(Hash databindingEntryId, bool p1, bool p2)
	{
		INVENTORY::_0x75CFAC49301E134F(databindingEntryId, p1, p2);
	}

	static Hash LUA_NATIVE_INVENTORY_0x9D21B185ABC2DBC5_(Any data, sol::stack_object stats, int p2, int p3)
	{
		auto retval = INVENTORY::_0x9D21B185ABC2DBC5(data, stats.is<const char*>() ? stats.as<const char*>() : nullptr, p2, p3);
		return retval;
	}

	static void LUA_NATIVE_INVENTORY_0x75CFAC49301E134E_(Any data, bool p1, Ped ped)
	{
		INVENTORY::_0x75CFAC49301E134E(data, p1, ped);
	}

	static Hash LUA_NATIVE_INVENTORY_0x46DB71883EE9D5AF_(Any data, sol::stack_object stats, uintptr_t guid, Ped ped)
	{
		auto retval = INVENTORY::_0x46DB71883EE9D5AF(data, stats.is<const char*>() ? stats.as<const char*>() : nullptr, (Any*)guid, ped);
		return retval;
	}

	static void LUA_NATIVE_INVENTORY_0x951847CEF3D829FF_(Any p0, uintptr_t outGuid, Ped ped)
	{
		INVENTORY::_0x951847CEF3D829FF(p0, (Any*)outGuid, ped);
	}

	static bool LUA_NATIVE_INVENTORY_0x6862E4D93F64CF01_(int inventoryId, uintptr_t guid, Hash p2, uintptr_t p3)
	{
		auto retval = (bool)INVENTORY::_0x6862E4D93F64CF01(inventoryId, (Any*)guid, p2, (Any*)p3);
		return retval;
	}

	static void LUA_NATIVE_INVENTORY_SET_USE_MISSION_INVENTORY_(bool toggle)
	{
		INVENTORY::_SET_USE_MISSION_INVENTORY(toggle);
	}

	static void LUA_NATIVE_INVENTORY_INVENTORY_DISABLE_MISSION_INVENTORY_PICKUPS()
	{
		INVENTORY::INVENTORY_DISABLE_MISSION_INVENTORY_PICKUPS();
	}

	static void LUA_NATIVE_INVENTORY_INVENTORY_USE_MISSION_INVENTORY_(bool enable, bool mirrorTransactions)
	{
		INVENTORY::_INVENTORY_USE_MISSION_INVENTORY(enable, mirrorTransactions);
	}

	static void LUA_NATIVE_INVENTORY_INVENTORY_COPY_MP_INVENTORY_TO_MISSION_INVENTORY(bool p0, bool p1, bool bCopySatchelItems, bool bCopyEmotes, bool bCopyHorse, bool p5)
	{
		INVENTORY::INVENTORY_COPY_MP_INVENTORY_TO_MISSION_INVENTORY(p0, p1, bCopySatchelItems, bCopyEmotes, bCopyHorse, p5);
	}

	static void LUA_NATIVE_INVENTORY_INVENTORY_COPY_ITEM_TO_MISSION_INVENTORY_(uintptr_t guid, bool p1)
	{
		INVENTORY::_INVENTORY_COPY_ITEM_TO_MISSION_INVENTORY((Any*)guid, p1);
	}

	static void LUA_NATIVE_INVENTORY_0xE36D4A38D28D9CFB_(bool p0)
	{
		INVENTORY::_0xE36D4A38D28D9CFB(p0);
	}

	static bool LUA_NATIVE_INVENTORY_INVENTORY_USE_SP_BACKUP_()
	{
		auto retval = (bool)INVENTORY::_INVENTORY_USE_SP_BACKUP();
		return retval;
	}

	static bool LUA_NATIVE_INVENTORY_INVENTORY_IS_PLAYER_INVENTORY_MIRRORING_TRANSACTIONS_()
	{
		auto retval = (bool)INVENTORY::_INVENTORY_IS_PLAYER_INVENTORY_MIRRORING_TRANSACTIONS();
		return retval;
	}

	static void LUA_NATIVE_INVENTORY_INVENTORY_COPY_ITEM_TO_INVENTORY_(int inventoryId, int inventoryIdCloned, uintptr_t p2, Any p3)
	{
		INVENTORY::_INVENTORY_COPY_ITEM_TO_INVENTORY(inventoryId, inventoryIdCloned, (Any*)p2, p3);
	}

	static void LUA_NATIVE_INVENTORY_0x9E58207B194488AC_(Ped ped, int p1)
	{
		INVENTORY::_0x9E58207B194488AC(ped, p1);
	}

	static void LUA_NATIVE_INVENTORY_SET_ITEM_PROMPT_INFO_REQUEST_(uintptr_t p0)
	{
		INVENTORY::_SET_ITEM_PROMPT_INFO_REQUEST((Any*)p0);
	}

	static void LUA_NATIVE_INVENTORY_0x9B4E793B1CB6550A_()
	{
		INVENTORY::_0x9B4E793B1CB6550A();
	}

	static void LUA_NATIVE_INVENTORY_SET_CARRIABLE_CARRY_ACTION_PROMPT_OVERRIDE_(uintptr_t data)
	{
		INVENTORY::_SET_CARRIABLE_CARRY_ACTION_PROMPT_OVERRIDE((Any*)data);
	}

	static void LUA_NATIVE_INVENTORY_INVENTORY_ENABLE_WEAPONS_(int inventoryId)
	{
		INVENTORY::_INVENTORY_ENABLE_WEAPONS(inventoryId);
	}

	static void LUA_NATIVE_INVENTORY_INVENTORY_DISABLE_WEAPONS_(int inventoryId, Any p1)
	{
		INVENTORY::_INVENTORY_DISABLE_WEAPONS(inventoryId, p1);
	}

	static void LUA_NATIVE_INVENTORY_0xE1F45A67A9F0DCBC_(int inventoryId)
	{
		INVENTORY::_0xE1F45A67A9F0DCBC(inventoryId);
	}

	static void LUA_NATIVE_INVENTORY_0x6968CE7AC32F6788_(int inventoryId)
	{
		INVENTORY::_0x6968CE7AC32F6788(inventoryId);
	}

	static std::tuple<int, int> LUA_NATIVE_INVENTORY_INVENTORY_CREATE_ITEM_COLLECTION_2_(int collectionSize)
	{
		std::tuple<int, int> return_values;
		std::get<0>(return_values) = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_2(&collectionSize);
		std::get<1>(return_values) = collectionSize;

		return return_values;
	}

	static std::tuple<int, int> LUA_NATIVE_INVENTORY_INVENTORY_CREATE_SORTED_COLLECTION_(int inventoryId, int p1, int size)
	{
		std::tuple<int, int> return_values;
		std::get<0>(return_values) = INVENTORY::_INVENTORY_CREATE_SORTED_COLLECTION(inventoryId, p1, &size);
		std::get<1>(return_values) = size;

		return return_values;
	}

	void init_native_binding_INVENTORY(sol::state& L)
	{
		auto INVENTORY = L["INVENTORY"].get_or_create<sol::table>();
		INVENTORY.set_function("INVENTORY_GET_INVENTORY_ID_FROM_PED_", LUA_NATIVE_INVENTORY_INVENTORY_GET_INVENTORY_ID_FROM_PED_);
		INVENTORY.set_function("GET_ITEM_ROLE_MAX_LEVEL_COUNT_", LUA_NATIVE_INVENTORY_GET_ITEM_ROLE_MAX_LEVEL_COUNT_);
		INVENTORY.set_function("GET_ITEM_SLOT_MAX_COUNT_", LUA_NATIVE_INVENTORY_GET_ITEM_SLOT_MAX_COUNT_);
		INVENTORY.set_function("0x112BCA290D2EB53C_", LUA_NATIVE_INVENTORY_0x112BCA290D2EB53C_);
		INVENTORY.set_function("0x46743BBFEDBC859E_", LUA_NATIVE_INVENTORY_0x46743BBFEDBC859E_);
		INVENTORY.set_function("INVENTORY_SET_INVENTORY_ITEM_IN_USE_", LUA_NATIVE_INVENTORY_INVENTORY_SET_INVENTORY_ITEM_IN_USE_);
		INVENTORY.set_function("INVENTORY_GET_INVENTORY_ITEM_IN_USE_", LUA_NATIVE_INVENTORY_INVENTORY_GET_INVENTORY_ITEM_IN_USE_);
		INVENTORY.set_function("INVENTORY_SET_INVENTORY_ITEM_HIDDEN_", LUA_NATIVE_INVENTORY_INVENTORY_SET_INVENTORY_ITEM_HIDDEN_);
		INVENTORY.set_function("INVENTORY_SET_INVENTORY_ITEM_HIDDEN_2_", LUA_NATIVE_INVENTORY_INVENTORY_SET_INVENTORY_ITEM_HIDDEN_2_);
		INVENTORY.set_function("INVENTORY_GET_INVENTORY_ITEM_HIDDEN_", LUA_NATIVE_INVENTORY_INVENTORY_GET_INVENTORY_ITEM_HIDDEN_);
		INVENTORY.set_function("INVENTORY_GET_INVENTORY_ITEM_IS_ANIMAL_PELT_", LUA_NATIVE_INVENTORY_INVENTORY_GET_INVENTORY_ITEM_IS_ANIMAL_PELT_);
		INVENTORY.set_function("INVENTORY_GET_INVENTORY_ITEM_DESCRIPTION_HASH_", LUA_NATIVE_INVENTORY_INVENTORY_GET_INVENTORY_ITEM_DESCRIPTION_HASH_);
		INVENTORY.set_function("INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED_", LUA_NATIVE_INVENTORY_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED_);
		INVENTORY.set_function("INVENTORY_GET_IS_INVENTORY_ITEM_SOUND_VALID_", LUA_NATIVE_INVENTORY_INVENTORY_GET_IS_INVENTORY_ITEM_SOUND_VALID_);
		INVENTORY.set_function("INVENTORY_GET_INVENTORY_ITEM_SOUND_", LUA_NATIVE_INVENTORY_INVENTORY_GET_INVENTORY_ITEM_SOUND_);
		INVENTORY.set_function("INVENTORY_GET_INVENTORY_ITEM_INSPECTION_INFO_", LUA_NATIVE_INVENTORY_INVENTORY_GET_INVENTORY_ITEM_INSPECTION_INFO_);
		INVENTORY.set_function("INVENTORY_GET_INVENTORY_ITEM_WEAPON_COPY_ID_", LUA_NATIVE_INVENTORY_INVENTORY_GET_INVENTORY_ITEM_WEAPON_COPY_ID_);
		INVENTORY.set_function("INVENTORY_ARE_LOCAL_CHANGES_ALLOWED_", LUA_NATIVE_INVENTORY_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED_);
		INVENTORY.set_function("INVENTORY_IS_GUID_VALID_", LUA_NATIVE_INVENTORY_INVENTORY_IS_GUID_VALID_);
		INVENTORY.set_function("INVENTORY_COMPARE_GUIDS_", LUA_NATIVE_INVENTORY_INVENTORY_COMPARE_GUIDS_);
		INVENTORY.set_function("INVENTORY_GET_GUID_FROM_ITEMID", LUA_NATIVE_INVENTORY_INVENTORY_GET_GUID_FROM_ITEMID);
		INVENTORY.set_function("0x5D6182F3BCE1333B_", LUA_NATIVE_INVENTORY_0x5D6182F3BCE1333B_);
		INVENTORY.set_function("INVENTORY_GET_INVENTORY_ITEM", LUA_NATIVE_INVENTORY_INVENTORY_GET_INVENTORY_ITEM);
		INVENTORY.set_function("INVENTORY_GET_FULL_INVENTORY_ITEM_DATA_", LUA_NATIVE_INVENTORY_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA_);
		INVENTORY.set_function("INVENTORY_GET_INVENTORY_ITEM_CHILD_", LUA_NATIVE_INVENTORY_INVENTORY_GET_INVENTORY_ITEM_CHILD_);
		INVENTORY.set_function("INVENTORY_ADD_ITEM_WITH_GUID_", LUA_NATIVE_INVENTORY_INVENTORY_ADD_ITEM_WITH_GUID_);
		INVENTORY.set_function("INVENTORY_UPDATE_INVENTORY_ITEM_", LUA_NATIVE_INVENTORY_INVENTORY_UPDATE_INVENTORY_ITEM_);
		INVENTORY.set_function("INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID_", LUA_NATIVE_INVENTORY_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID_);
		INVENTORY.set_function("INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID_", LUA_NATIVE_INVENTORY_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID_);
		INVENTORY.set_function("INVENTORY_MOVE_INVENTORY_ITEM_", LUA_NATIVE_INVENTORY_INVENTORY_MOVE_INVENTORY_ITEM_);
		INVENTORY.set_function("INVENTORY_SWAP_INVENTORY_ITEM_", LUA_NATIVE_INVENTORY_INVENTORY_SWAP_INVENTORY_ITEM_);
		INVENTORY.set_function("INVENTORY_CREATE_ITEM_COLLECTION_", LUA_NATIVE_INVENTORY_INVENTORY_CREATE_ITEM_COLLECTION_);
		INVENTORY.set_function("INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER_", LUA_NATIVE_INVENTORY_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER_);
		INVENTORY.set_function("INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX_", LUA_NATIVE_INVENTORY_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX_);
		INVENTORY.set_function("INVENTORY_RELEASE_ITEM_COLLECTION_", LUA_NATIVE_INVENTORY_INVENTORY_RELEASE_ITEM_COLLECTION_);
		INVENTORY.set_function("INVENTORY_EQUIP_ITEM_WITH_GUID_", LUA_NATIVE_INVENTORY_INVENTORY_EQUIP_ITEM_WITH_GUID_);
		INVENTORY.set_function("INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF_", LUA_NATIVE_INVENTORY_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF_);
		INVENTORY.set_function("INVENTORY_DOES_ITEM_OWN_EQUIPMENT_", LUA_NATIVE_INVENTORY_INVENTORY_DOES_ITEM_OWN_EQUIPMENT_);
		INVENTORY.set_function("0xD08685BA892DBFAB_", LUA_NATIVE_INVENTORY_0xD08685BA892DBFAB_);
		INVENTORY.set_function("0x0349404A22736740_", LUA_NATIVE_INVENTORY_0x0349404A22736740_);
		INVENTORY.set_function("INVENTORY_SET_INVENTORY_ITEM_WEATHER_EFFECTIVENESS_", LUA_NATIVE_INVENTORY_INVENTORY_SET_INVENTORY_ITEM_WEATHER_EFFECTIVENESS_);
		INVENTORY.set_function("INVENTORY_DISABLE_ITEM_", LUA_NATIVE_INVENTORY_INVENTORY_DISABLE_ITEM_);
		INVENTORY.set_function("INVENTORY_ENABLE_ITEM_", LUA_NATIVE_INVENTORY_INVENTORY_ENABLE_ITEM_);
		INVENTORY.set_function("INVENTORY_IS_INVENTORY_ITEM_EQUIPPED_", LUA_NATIVE_INVENTORY_INVENTORY_IS_INVENTORY_ITEM_EQUIPPED_);
		INVENTORY.set_function("INVENTORY_SET_INVENTORY_ITEM_INSPECTION_ENABLED_", LUA_NATIVE_INVENTORY_INVENTORY_SET_INVENTORY_ITEM_INSPECTION_ENABLED_);
		INVENTORY.set_function("INVENTORY_IS_ITEM_EXPIRED_", LUA_NATIVE_INVENTORY_INVENTORY_IS_ITEM_EXPIRED_);
		INVENTORY.set_function("INVENTORY_GET_ITEM_EXPIRY_TIME_", LUA_NATIVE_INVENTORY_INVENTORY_GET_ITEM_EXPIRY_TIME_);
		INVENTORY.set_function("INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID_", LUA_NATIVE_INVENTORY_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID_);
		INVENTORY.set_function("INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID_", LUA_NATIVE_INVENTORY_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID_);
		INVENTORY.set_function("0xB1DD74A1F5536622_", LUA_NATIVE_INVENTORY_0xB1DD74A1F5536622_);
		INVENTORY.set_function("INVENTORY_GET_CHILDREN_COUNT_", LUA_NATIVE_INVENTORY_INVENTORY_GET_CHILDREN_COUNT_);
		INVENTORY.set_function("INVENTORY_GET_CHILDREN_IN_SLOT_COUNT", LUA_NATIVE_INVENTORY_INVENTORY_GET_CHILDREN_IN_SLOT_COUNT);
		INVENTORY.set_function("INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_", LUA_NATIVE_INVENTORY_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_);
		INVENTORY.set_function("INVENTORY_FITS_SLOT_ID_", LUA_NATIVE_INVENTORY_INVENTORY_FITS_SLOT_ID_);
		INVENTORY.set_function("GET_DEFAULT_ITEM_SLOT_INFO_", LUA_NATIVE_INVENTORY_GET_DEFAULT_ITEM_SLOT_INFO_);
		INVENTORY.set_function("INVENTORY_GET_INVENTORY_ITEM_FIT_SLOT_", LUA_NATIVE_INVENTORY_INVENTORY_GET_INVENTORY_ITEM_FIT_SLOT_);
		INVENTORY.set_function("0x9AC53CB6907B4428_", LUA_NATIVE_INVENTORY_0x9AC53CB6907B4428_);
		INVENTORY.set_function("0x9D21B185ABC2DBC4_", LUA_NATIVE_INVENTORY_0x9D21B185ABC2DBC4_);
		INVENTORY.set_function("0x75CFAC49301E134F_", LUA_NATIVE_INVENTORY_0x75CFAC49301E134F_);
		INVENTORY.set_function("0x9D21B185ABC2DBC5_", LUA_NATIVE_INVENTORY_0x9D21B185ABC2DBC5_);
		INVENTORY.set_function("0x75CFAC49301E134E_", LUA_NATIVE_INVENTORY_0x75CFAC49301E134E_);
		INVENTORY.set_function("0x46DB71883EE9D5AF_", LUA_NATIVE_INVENTORY_0x46DB71883EE9D5AF_);
		INVENTORY.set_function("0x951847CEF3D829FF_", LUA_NATIVE_INVENTORY_0x951847CEF3D829FF_);
		INVENTORY.set_function("0x6862E4D93F64CF01_", LUA_NATIVE_INVENTORY_0x6862E4D93F64CF01_);
		INVENTORY.set_function("SET_USE_MISSION_INVENTORY_", LUA_NATIVE_INVENTORY_SET_USE_MISSION_INVENTORY_);
		INVENTORY.set_function("INVENTORY_DISABLE_MISSION_INVENTORY_PICKUPS", LUA_NATIVE_INVENTORY_INVENTORY_DISABLE_MISSION_INVENTORY_PICKUPS);
		INVENTORY.set_function("INVENTORY_USE_MISSION_INVENTORY_", LUA_NATIVE_INVENTORY_INVENTORY_USE_MISSION_INVENTORY_);
		INVENTORY.set_function("INVENTORY_COPY_MP_INVENTORY_TO_MISSION_INVENTORY", LUA_NATIVE_INVENTORY_INVENTORY_COPY_MP_INVENTORY_TO_MISSION_INVENTORY);
		INVENTORY.set_function("INVENTORY_COPY_ITEM_TO_MISSION_INVENTORY_", LUA_NATIVE_INVENTORY_INVENTORY_COPY_ITEM_TO_MISSION_INVENTORY_);
		INVENTORY.set_function("0xE36D4A38D28D9CFB_", LUA_NATIVE_INVENTORY_0xE36D4A38D28D9CFB_);
		INVENTORY.set_function("INVENTORY_USE_SP_BACKUP_", LUA_NATIVE_INVENTORY_INVENTORY_USE_SP_BACKUP_);
		INVENTORY.set_function("INVENTORY_IS_PLAYER_INVENTORY_MIRRORING_TRANSACTIONS_", LUA_NATIVE_INVENTORY_INVENTORY_IS_PLAYER_INVENTORY_MIRRORING_TRANSACTIONS_);
		INVENTORY.set_function("INVENTORY_COPY_ITEM_TO_INVENTORY_", LUA_NATIVE_INVENTORY_INVENTORY_COPY_ITEM_TO_INVENTORY_);
		INVENTORY.set_function("0x9E58207B194488AC_", LUA_NATIVE_INVENTORY_0x9E58207B194488AC_);
		INVENTORY.set_function("SET_ITEM_PROMPT_INFO_REQUEST_", LUA_NATIVE_INVENTORY_SET_ITEM_PROMPT_INFO_REQUEST_);
		INVENTORY.set_function("0x9B4E793B1CB6550A_", LUA_NATIVE_INVENTORY_0x9B4E793B1CB6550A_);
		INVENTORY.set_function("SET_CARRIABLE_CARRY_ACTION_PROMPT_OVERRIDE_", LUA_NATIVE_INVENTORY_SET_CARRIABLE_CARRY_ACTION_PROMPT_OVERRIDE_);
		INVENTORY.set_function("INVENTORY_ENABLE_WEAPONS_", LUA_NATIVE_INVENTORY_INVENTORY_ENABLE_WEAPONS_);
		INVENTORY.set_function("INVENTORY_DISABLE_WEAPONS_", LUA_NATIVE_INVENTORY_INVENTORY_DISABLE_WEAPONS_);
		INVENTORY.set_function("0xE1F45A67A9F0DCBC_", LUA_NATIVE_INVENTORY_0xE1F45A67A9F0DCBC_);
		INVENTORY.set_function("0x6968CE7AC32F6788_", LUA_NATIVE_INVENTORY_0x6968CE7AC32F6788_);
		INVENTORY.set_function("INVENTORY_CREATE_ITEM_COLLECTION_2_", LUA_NATIVE_INVENTORY_INVENTORY_CREATE_ITEM_COLLECTION_2_);
		INVENTORY.set_function("INVENTORY_CREATE_SORTED_COLLECTION_", LUA_NATIVE_INVENTORY_INVENTORY_CREATE_SORTED_COLLECTION_);
	}
}
