#include "lua_native_binding.hpp"
#include "game/rdr/Natives.hpp"

namespace Lua::native
{
	static bool LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY_(Any p0, Any p1, Hash slotId)
	{
		auto retval = (bool)ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(p0, p1, slotId);
		return retval;
	}

	static int LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_FITS_SLOT_COUNT_(Any p0)
	{
		auto retval = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(p0);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_FITS_SLOT_INFO_(Any p0, Any p1, Any p2)
	{
		auto retval = (bool)ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(p0, p1, p2);
		return retval;
	}

	static int LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_HAS_SLOT_COUNT_(Any p0)
	{
		auto retval = ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(p0);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_HAS_SLOT_INFO_(Any p0, Any p1, Any p2)
	{
		auto retval = (bool)ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(p0, p1, p2);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_FILLOUT_ITEM_BY_NAME(Any p0, Any p1)
	{
		auto retval = (bool)ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_BY_NAME(p0, p1);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_FILLOUT_ITEM_INFO(Hash p0, uintptr_t p1)
	{
		auto retval = (bool)ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(p0, (Any*)p1);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_FILLOUT_ACQUIRE_COST_(Any p0, Any p1, Any p2)
	{
		auto retval = (bool)ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(p0, p1, p2);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_FILLOUT_SELL_PRICE_(Any p0, Any p1, Any p2)
	{
		auto retval = (bool)ITEMDATABASE::_ITEMDATABASE_FILLOUT_SELL_PRICE(p0, p1, p2);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_FILLOUT_SATCHEL_DATA_(Any p0, Any p1)
	{
		auto retval = (bool)ITEMDATABASE::_ITEMDATABASE_FILLOUT_SATCHEL_DATA(p0, p1);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_FILLOUT_UI_DATA_(Any p0, Any p1)
	{
		auto retval = (bool)ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(p0, p1);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_0x74C3B1093728D263_(Any p0, Any p1)
	{
		auto retval = (bool)ITEMDATABASE::_0x74C3B1093728D263(p0, p1);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS_(Any p0, Any p1)
	{
		auto retval = (bool)ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(p0, p1);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(Any p0, Any p1)
	{
		auto retval = (bool)ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(p0, p1);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_FILLOUT_TAG_DATA_(Any p0, Any p1, Any p2, Any p3)
	{
		auto retval = (bool)ITEMDATABASE::_ITEMDATABASE_FILLOUT_TAG_DATA(p0, p1, p2, p3);
		return retval;
	}

	static int LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT_(Any p0)
	{
		auto retval = ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT(p0);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_ACQUIRE_COST_(Any p0, Any p1, Any p2)
	{
		auto retval = (bool)ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COST(p0, p1, p2);
		return retval;
	}

	static int LUA_NATIVE_ITEMDATABASE_0xDEE7B3C76ED664BE_(Hash p0, Hash costShop)
	{
		auto retval = ITEMDATABASE::_0xDEE7B3C76ED664BE(p0, costShop);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_FILLOUT_ITEM_(Hash p0, Hash costShop, int fillOutIndex, Any p3)
	{
		auto retval = (bool)ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM(p0, costShop, fillOutIndex, p3);
		return retval;
	}

	static int LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_AWARD_ACQUIRE_COST_TYPE_(Any p0)
	{
		auto retval = ITEMDATABASE::_ITEMDATABASE_GET_AWARD_ACQUIRE_COST_TYPE(p0);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_0x1FC25AEB5F76B38D_(Any p0, int index, uintptr_t data)
	{
		auto retval = (bool)ITEMDATABASE::_0x1FC25AEB5F76B38D(p0, index, (Any*)data);
		return retval;
	}

	static int LUA_NATIVE_ITEMDATABASE_0xF540239F9937033B_(Any award, Hash cost)
	{
		auto retval = ITEMDATABASE::_0xF540239F9937033B(award, cost);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_0xF27F01BBF5ACD3F3_(Any award, Hash cost, int index, Any p3)
	{
		auto retval = (bool)ITEMDATABASE::_0xF27F01BBF5ACD3F3(award, cost, index, p3);
		return retval;
	}

	static std::tuple<int, int> LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_CREATE_ITEM_COLLECTION_(uintptr_t p0, int size, int comparisonType)
	{
		std::tuple<int, int> return_values;
		std::get<0>(return_values) = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION((Any*)p0, &size, comparisonType);
		std::get<1>(return_values) = size;

		return return_values;
	}

	static int LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_COLLECTION_SIZE_(int collectionId)
	{
		auto retval = ITEMDATABASE::_ITEMDATABASE_GET_COLLECTION_SIZE(collectionId);
		return retval;
	}

	static std::tuple<bool, Hash> LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_COMPONENT_ITEM_(int collectionId, int index, Hash p2)
	{
		std::tuple<bool, Hash> return_values;
		std::get<0>(return_values) = (bool)ITEMDATABASE::_ITEMDATABASE_GET_COMPONENT_ITEM(collectionId, index, &p2);
		std::get<1>(return_values) = p2;

		return return_values;
	}

	static bool LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_RELEASE_ITEM_COLLECTION_(int collectionId)
	{
		auto retval = (bool)ITEMDATABASE::_ITEMDATABASE_RELEASE_ITEM_COLLECTION(collectionId);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_IS_INTRINSIC_ITEM_(Any p0)
	{
		auto retval = (bool)ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(p0);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_IS_OVERPOWERED_ITEM_(Any p0)
	{
		auto retval = (bool)ITEMDATABASE::_ITEMDATABASE_IS_OVERPOWERED_ITEM(p0);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_IS_KEY_VALID_(Any p0, Any p1)
	{
		auto retval = (bool)ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(p0, p1);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_0x537A0555F62CA01A_(Hash p0, Any p1)
	{
		auto retval = (bool)ITEMDATABASE::_0x537A0555F62CA01A(p0, p1);
		return retval;
	}

	static int LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_BUNDLE_ID_(Any p0)
	{
		auto retval = ITEMDATABASE::_ITEMDATABASE_GET_BUNDLE_ID(p0);
		return retval;
	}

	static int LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_BUNDLE_ITEM_COUNT_(Any p0, Any p1)
	{
		auto retval = ITEMDATABASE::_ITEMDATABASE_GET_BUNDLE_ITEM_COUNT(p0, p1);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_BUNDLE_ITEM_INFO_(Any p0, Any p1, Any p2, Any p3)
	{
		auto retval = (bool)ITEMDATABASE::_ITEMDATABASE_GET_BUNDLE_ITEM_INFO(p0, p1, p2, p3);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_IS_BUNDLE_VALID_(Any p0, Any p1)
	{
		auto retval = (bool)ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(p0, p1);
		return retval;
	}

	static int LUA_NATIVE_ITEMDATABASE_0x799FCD53358ED5FA_(Any bundle, Any p1)
	{
		auto retval = ITEMDATABASE::_0x799FCD53358ED5FA(bundle, p1);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_0xC4146375D8A0B374_(Any bundle, Any p1, int index, Any p3)
	{
		auto retval = (bool)ITEMDATABASE::_0xC4146375D8A0B374(bundle, p1, index, p3);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_0xA97EE5E4589FCF5A_(Any p0, Any p1)
	{
		auto retval = (bool)ITEMDATABASE::_0xA97EE5E4589FCF5A(p0, p1);
		return retval;
	}

	static int LUA_NATIVE_ITEMDATABASE_0x7A35A72A692BE9DB_(Any p0)
	{
		auto retval = ITEMDATABASE::_0x7A35A72A692BE9DB(p0);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_0x3A0B667ABFF87F6E_(Any p0, Any p1, Any p2)
	{
		auto retval = (bool)ITEMDATABASE::_0x3A0B667ABFF87F6E(p0, p1, p2);
		return retval;
	}

	static int LUA_NATIVE_ITEMDATABASE_0x388088BFF3681189_(Any p0, Any p1)
	{
		auto retval = ITEMDATABASE::_0x388088BFF3681189(p0, p1);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_FILLOUT_BUNDLE_(Any p0, Any p1, Any p2, Any p3)
	{
		auto retval = (bool)ITEMDATABASE::_ITEMDATABASE_FILLOUT_BUNDLE(p0, p1, p2, p3);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_IS_SHOP_KEY_VALID_(Any p0)
	{
		auto retval = (bool)ITEMDATABASE::_ITEMDATABASE_IS_SHOP_KEY_VALID(p0);
		return retval;
	}

	static int LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_SHOP_INVENTORIES_ITEMS_COUNT_(Any p0)
	{
		auto retval = ITEMDATABASE::_ITEMDATABASE_GET_SHOP_INVENTORIES_ITEMS_COUNT(p0);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_SHOP_INVENTORIES_ITEM_INFO_(Any p0, Any p1, Any p2)
	{
		auto retval = (bool)ITEMDATABASE::_ITEMDATABASE_GET_SHOP_INVENTORIES_ITEM_INFO(p0, p1, p2);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_SHOP_INVENTORIES_ITEM_INFO_BY_KEY_(Any p0, Any p1, Any p2)
	{
		auto retval = (bool)ITEMDATABASE::_ITEMDATABASE_GET_SHOP_INVENTORIES_ITEM_INFO_BY_KEY(p0, p1, p2);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_SHOP_INVENTORIES_REQUIREMENT_GROUP_INFO_(Any p0, Any p1, Any p2, Any p3)
	{
		auto retval = (bool)ITEMDATABASE::_ITEMDATABASE_GET_SHOP_INVENTORIES_REQUIREMENT_GROUP_INFO(p0, p1, p2, p3);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_SHOP_INVENTORIES_REQUIREMENT_INFO_(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		auto retval = (bool)ITEMDATABASE::_ITEMDATABASE_GET_SHOP_INVENTORIES_REQUIREMENT_INFO(p0, p1, p2, p3, p4);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_0x17721003A66C72BF_(Any p0, Any p1, Any p2)
	{
		auto retval = (bool)ITEMDATABASE::_0x17721003A66C72BF(p0, p1, p2);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_IS_SHOP_LAYOUT_KEY_VALID_(Any p0)
	{
		auto retval = (bool)ITEMDATABASE::_ITEMDATABASE_IS_SHOP_LAYOUT_KEY_VALID(p0);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_SHOP_LAYOUT_INFO_(Any p0, Any p1)
	{
		auto retval = (bool)ITEMDATABASE::_ITEMDATABASE_GET_SHOP_LAYOUT_INFO(p0, p1);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_SHOP_LAYOUT_ROOT_MENU_INFO_(Any p0, Any p1, Any p2)
	{
		auto retval = (bool)ITEMDATABASE::_ITEMDATABASE_GET_SHOP_LAYOUT_ROOT_MENU_INFO(p0, p1, p2);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_ID_(Any p0, Any p1, Any p2)
	{
		auto retval = (bool)ITEMDATABASE::_ITEMDATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_ID(p0, p1, p2);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_INDEX_(Any p0, Any p1, Any p2, Any p3)
	{
		auto retval = (bool)ITEMDATABASE::_ITEMDATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_INDEX(p0, p1, p2, p3);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_SHOP_LAYOUT_MENU_PAGE_KEY_(Any p0, Any p1, Any p2, Any p3)
	{
		auto retval = (bool)ITEMDATABASE::_ITEMDATABASE_GET_SHOP_LAYOUT_MENU_PAGE_KEY(p0, p1, p2, p3);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_0xDBEADA0DF5F9AB9F_(Any p0, int index, Any menuKey)
	{
		auto retval = (bool)ITEMDATABASE::_0xDBEADA0DF5F9AB9F(p0, index, menuKey);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_SHOP_LAYOUT_PAGE_INFO_BY_KEY_(Any p0, Any p1, Any p2)
	{
		auto retval = (bool)ITEMDATABASE::_ITEMDATABASE_GET_SHOP_LAYOUT_PAGE_INFO_BY_KEY(p0, p1, p2);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_SHOP_LAYOUT_PAGE_ITEM_KEY_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		auto retval = (bool)ITEMDATABASE::_ITEMDATABASE_GET_SHOP_LAYOUT_PAGE_ITEM_KEY(p0, p1, p2, p3, p4, p5);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_IS_BUYABLE_AWARD_VALID(Any p0)
	{
		auto retval = (bool)ITEMDATABASE::ITEMDATABASE_IS_BUYABLE_AWARD_VALID(p0);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_FILLOUT_BUY_AWARD_ACQUIRE_COSTS_(Any p0, Any p1, Any p2, Any p3)
	{
		auto retval = (bool)ITEMDATABASE::_ITEMDATABASE_FILLOUT_BUY_AWARD_ACQUIRE_COSTS(p0, p1, p2, p3);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_0xF8D09EF8CE61D7BF_(Any p0, Any p1)
	{
		auto retval = (bool)ITEMDATABASE::_0xF8D09EF8CE61D7BF(p0, p1);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_ITEM_PRICE_MODIFIERS_(Any p0, Any p1)
	{
		auto retval = (bool)ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PRICE_MODIFIERS(p0, p1);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_FILLOUT_PRICE_MODIFIER_BY_KEY_(Any p0, Any p1)
	{
		auto retval = (bool)ITEMDATABASE::_ITEMDATABASE_FILLOUT_PRICE_MODIFIER_BY_KEY(p0, p1);
		return retval;
	}

	static int LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_NUMBER_OF_MODIFIED_PRICES_(Any p0)
	{
		auto retval = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIED_PRICES(p0);
		return retval;
	}

	static Hash LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_MODIFIED_PRICE_(Any p0, Any p1)
	{
		auto retval = ITEMDATABASE::_ITEMDATABASE_GET_MODIFIED_PRICE(p0, p1);
		return retval;
	}

	static int LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_NUMBER_OF_MODIFIERS_(Any p0)
	{
		auto retval = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIERS(p0);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_FILLOUT_MODIFIER_(Any p0, Any p1, Any p2)
	{
		auto retval = (bool)ITEMDATABASE::_ITEMDATABASE_FILLOUT_MODIFIER(p0, p1, p2);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_PRIORITY_ACCESS_AWARD_(Hash award)
	{
		auto retval = (bool)ITEMDATABASE::_ITEMDATABASE_GET_PRIORITY_ACCESS_AWARD(award);
		return retval;
	}

	static int LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_AWARD_ITEM_COUNT_(Hash award)
	{
		auto retval = ITEMDATABASE::_ITEMDATABASE_GET_AWARD_ITEM_COUNT(award);
		return retval;
	}

	static int LUA_NATIVE_ITEMDATABASE_0x48229CE0C7938237_(Hash award)
	{
		auto retval = ITEMDATABASE::_0x48229CE0C7938237(award);
		return retval;
	}

	static std::tuple<bool, Hash> LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_FILLOUT_AWARD_ITEM_INFO_(Hash award, int index, Hash currency)
	{
		std::tuple<bool, Hash> return_values;
		std::get<0>(return_values) = (bool)ITEMDATABASE::_ITEMDATABASE_FILLOUT_AWARD_ITEM_INFO(award, index, &currency);
		std::get<1>(return_values) = currency;

		return return_values;
	}

	static bool LUA_NATIVE_ITEMDATABASE_0x8D029948CA29409B_(Hash award, Any p1, Any p2)
	{
		auto retval = (bool)ITEMDATABASE::_0x8D029948CA29409B(award, p1, p2);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_AWARD_COST_MODIFIERS_(Any p0, Any p1)
	{
		auto retval = (bool)ITEMDATABASE::_ITEMDATABASE_GET_AWARD_COST_MODIFIERS(p0, p1);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_0xD076DB9B96FAADF1_(Any p0, Any p1)
	{
		auto retval = (bool)ITEMDATABASE::_0xD076DB9B96FAADF1(p0, p1);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_DOES_ITEM_HAVE_TAG_(Hash item, Hash tag, Hash tagType)
	{
		auto retval = (bool)ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(item, tag, tagType);
		return retval;
	}

	static bool LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG_(Hash bundle, Hash tag, Hash tagType)
	{
		auto retval = (bool)ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(bundle, tag, tagType);
		return retval;
	}

	static Hash LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_ITEM_TAG_TYPE_(Hash item, Hash tag)
	{
		auto retval = ITEMDATABASE::_ITEMDATABASE_GET_ITEM_TAG_TYPE(item, tag);
		return retval;
	}

	static int LUA_NATIVE_ITEMDATABASE_0x8870895BA5ED9385_(Any p0, Hash tagType, Any p2)
	{
		auto retval = ITEMDATABASE::_0x8870895BA5ED9385(p0, tagType, p2);
		return retval;
	}

	static int LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_LOCALIZATION_GET_NUM_LABEL_TYPES_(Any p0)
	{
		auto retval = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_NUM_LABEL_TYPES(p0);
		return retval;
	}

	static int LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_LOCALIZATION_GET_NUM_VALUES_(Any p0, Any p1)
	{
		auto retval = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_NUM_VALUES(p0, p1);
		return retval;
	}

	static Any LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_LOCALIZATION_GET_TYPE_(Any p0, Any p1)
	{
		auto retval = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_TYPE(p0, p1);
		return retval;
	}

	static int LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_LOCALIZATION_GET_VALUE_(Any p0, Hash label, Any p2)
	{
		auto retval = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_VALUE(p0, label, p2);
		return retval;
	}

	static int LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_ITEM_PATHSET_(int item, int p1)
	{
		auto retval = ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(item, p1);
		return retval;
	}

	static Hash LUA_NATIVE_ITEMDATABASE_0xAA29A5F13B2C20B2_(Any p0, Hash p1)
	{
		auto retval = ITEMDATABASE::_0xAA29A5F13B2C20B2(p0, p1);
		return retval;
	}

	void init_native_binding_ITEMDATABASE(sol::state& L)
	{
		auto ITEMDATABASE = L["ITEMDATABASE"].get_or_create<sol::table>();
		ITEMDATABASE.set_function("ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY_);
		ITEMDATABASE.set_function("ITEMDATABASE_GET_FITS_SLOT_COUNT_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_FITS_SLOT_COUNT_);
		ITEMDATABASE.set_function("ITEMDATABASE_GET_FITS_SLOT_INFO_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_FITS_SLOT_INFO_);
		ITEMDATABASE.set_function("ITEMDATABASE_GET_HAS_SLOT_COUNT_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_HAS_SLOT_COUNT_);
		ITEMDATABASE.set_function("ITEMDATABASE_GET_HAS_SLOT_INFO_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_HAS_SLOT_INFO_);
		ITEMDATABASE.set_function("ITEMDATABASE_FILLOUT_ITEM_BY_NAME", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_FILLOUT_ITEM_BY_NAME);
		ITEMDATABASE.set_function("ITEMDATABASE_FILLOUT_ITEM_INFO", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_FILLOUT_ITEM_INFO);
		ITEMDATABASE.set_function("ITEMDATABASE_FILLOUT_ACQUIRE_COST_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_FILLOUT_ACQUIRE_COST_);
		ITEMDATABASE.set_function("ITEMDATABASE_FILLOUT_SELL_PRICE_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_FILLOUT_SELL_PRICE_);
		ITEMDATABASE.set_function("ITEMDATABASE_FILLOUT_SATCHEL_DATA_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_FILLOUT_SATCHEL_DATA_);
		ITEMDATABASE.set_function("ITEMDATABASE_FILLOUT_UI_DATA_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_FILLOUT_UI_DATA_);
		ITEMDATABASE.set_function("0x74C3B1093728D263_", LUA_NATIVE_ITEMDATABASE_0x74C3B1093728D263_);
		ITEMDATABASE.set_function("ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS_);
		ITEMDATABASE.set_function("ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO);
		ITEMDATABASE.set_function("ITEMDATABASE_FILLOUT_TAG_DATA_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_FILLOUT_TAG_DATA_);
		ITEMDATABASE.set_function("ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT_);
		ITEMDATABASE.set_function("ITEMDATABASE_GET_ACQUIRE_COST_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_ACQUIRE_COST_);
		ITEMDATABASE.set_function("0xDEE7B3C76ED664BE_", LUA_NATIVE_ITEMDATABASE_0xDEE7B3C76ED664BE_);
		ITEMDATABASE.set_function("ITEMDATABASE_FILLOUT_ITEM_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_FILLOUT_ITEM_);
		ITEMDATABASE.set_function("ITEMDATABASE_GET_AWARD_ACQUIRE_COST_TYPE_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_AWARD_ACQUIRE_COST_TYPE_);
		ITEMDATABASE.set_function("0x1FC25AEB5F76B38D_", LUA_NATIVE_ITEMDATABASE_0x1FC25AEB5F76B38D_);
		ITEMDATABASE.set_function("0xF540239F9937033B_", LUA_NATIVE_ITEMDATABASE_0xF540239F9937033B_);
		ITEMDATABASE.set_function("0xF27F01BBF5ACD3F3_", LUA_NATIVE_ITEMDATABASE_0xF27F01BBF5ACD3F3_);
		ITEMDATABASE.set_function("ITEMDATABASE_CREATE_ITEM_COLLECTION_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_CREATE_ITEM_COLLECTION_);
		ITEMDATABASE.set_function("ITEMDATABASE_GET_COLLECTION_SIZE_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_COLLECTION_SIZE_);
		ITEMDATABASE.set_function("ITEMDATABASE_GET_COMPONENT_ITEM_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_COMPONENT_ITEM_);
		ITEMDATABASE.set_function("ITEMDATABASE_RELEASE_ITEM_COLLECTION_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_RELEASE_ITEM_COLLECTION_);
		ITEMDATABASE.set_function("ITEMDATABASE_IS_INTRINSIC_ITEM_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_IS_INTRINSIC_ITEM_);
		ITEMDATABASE.set_function("ITEMDATABASE_IS_OVERPOWERED_ITEM_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_IS_OVERPOWERED_ITEM_);
		ITEMDATABASE.set_function("ITEMDATABASE_IS_KEY_VALID_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_IS_KEY_VALID_);
		ITEMDATABASE.set_function("0x537A0555F62CA01A_", LUA_NATIVE_ITEMDATABASE_0x537A0555F62CA01A_);
		ITEMDATABASE.set_function("ITEMDATABASE_GET_BUNDLE_ID_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_BUNDLE_ID_);
		ITEMDATABASE.set_function("ITEMDATABASE_GET_BUNDLE_ITEM_COUNT_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_BUNDLE_ITEM_COUNT_);
		ITEMDATABASE.set_function("ITEMDATABASE_GET_BUNDLE_ITEM_INFO_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_BUNDLE_ITEM_INFO_);
		ITEMDATABASE.set_function("ITEMDATABASE_IS_BUNDLE_VALID_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_IS_BUNDLE_VALID_);
		ITEMDATABASE.set_function("0x799FCD53358ED5FA_", LUA_NATIVE_ITEMDATABASE_0x799FCD53358ED5FA_);
		ITEMDATABASE.set_function("0xC4146375D8A0B374_", LUA_NATIVE_ITEMDATABASE_0xC4146375D8A0B374_);
		ITEMDATABASE.set_function("0xA97EE5E4589FCF5A_", LUA_NATIVE_ITEMDATABASE_0xA97EE5E4589FCF5A_);
		ITEMDATABASE.set_function("0x7A35A72A692BE9DB_", LUA_NATIVE_ITEMDATABASE_0x7A35A72A692BE9DB_);
		ITEMDATABASE.set_function("0x3A0B667ABFF87F6E_", LUA_NATIVE_ITEMDATABASE_0x3A0B667ABFF87F6E_);
		ITEMDATABASE.set_function("0x388088BFF3681189_", LUA_NATIVE_ITEMDATABASE_0x388088BFF3681189_);
		ITEMDATABASE.set_function("ITEMDATABASE_FILLOUT_BUNDLE_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_FILLOUT_BUNDLE_);
		ITEMDATABASE.set_function("ITEMDATABASE_IS_SHOP_KEY_VALID_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_IS_SHOP_KEY_VALID_);
		ITEMDATABASE.set_function("ITEMDATABASE_GET_SHOP_INVENTORIES_ITEMS_COUNT_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_SHOP_INVENTORIES_ITEMS_COUNT_);
		ITEMDATABASE.set_function("ITEMDATABASE_GET_SHOP_INVENTORIES_ITEM_INFO_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_SHOP_INVENTORIES_ITEM_INFO_);
		ITEMDATABASE.set_function("ITEMDATABASE_GET_SHOP_INVENTORIES_ITEM_INFO_BY_KEY_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_SHOP_INVENTORIES_ITEM_INFO_BY_KEY_);
		ITEMDATABASE.set_function("ITEMDATABASE_GET_SHOP_INVENTORIES_REQUIREMENT_GROUP_INFO_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_SHOP_INVENTORIES_REQUIREMENT_GROUP_INFO_);
		ITEMDATABASE.set_function("ITEMDATABASE_GET_SHOP_INVENTORIES_REQUIREMENT_INFO_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_SHOP_INVENTORIES_REQUIREMENT_INFO_);
		ITEMDATABASE.set_function("0x17721003A66C72BF_", LUA_NATIVE_ITEMDATABASE_0x17721003A66C72BF_);
		ITEMDATABASE.set_function("ITEMDATABASE_IS_SHOP_LAYOUT_KEY_VALID_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_IS_SHOP_LAYOUT_KEY_VALID_);
		ITEMDATABASE.set_function("ITEMDATABASE_GET_SHOP_LAYOUT_INFO_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_SHOP_LAYOUT_INFO_);
		ITEMDATABASE.set_function("ITEMDATABASE_GET_SHOP_LAYOUT_ROOT_MENU_INFO_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_SHOP_LAYOUT_ROOT_MENU_INFO_);
		ITEMDATABASE.set_function("ITEMDATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_ID_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_ID_);
		ITEMDATABASE.set_function("ITEMDATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_INDEX_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_INDEX_);
		ITEMDATABASE.set_function("ITEMDATABASE_GET_SHOP_LAYOUT_MENU_PAGE_KEY_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_SHOP_LAYOUT_MENU_PAGE_KEY_);
		ITEMDATABASE.set_function("0xDBEADA0DF5F9AB9F_", LUA_NATIVE_ITEMDATABASE_0xDBEADA0DF5F9AB9F_);
		ITEMDATABASE.set_function("ITEMDATABASE_GET_SHOP_LAYOUT_PAGE_INFO_BY_KEY_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_SHOP_LAYOUT_PAGE_INFO_BY_KEY_);
		ITEMDATABASE.set_function("ITEMDATABASE_GET_SHOP_LAYOUT_PAGE_ITEM_KEY_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_SHOP_LAYOUT_PAGE_ITEM_KEY_);
		ITEMDATABASE.set_function("ITEMDATABASE_IS_BUYABLE_AWARD_VALID", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_IS_BUYABLE_AWARD_VALID);
		ITEMDATABASE.set_function("ITEMDATABASE_FILLOUT_BUY_AWARD_ACQUIRE_COSTS_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_FILLOUT_BUY_AWARD_ACQUIRE_COSTS_);
		ITEMDATABASE.set_function("0xF8D09EF8CE61D7BF_", LUA_NATIVE_ITEMDATABASE_0xF8D09EF8CE61D7BF_);
		ITEMDATABASE.set_function("ITEMDATABASE_GET_ITEM_PRICE_MODIFIERS_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_ITEM_PRICE_MODIFIERS_);
		ITEMDATABASE.set_function("ITEMDATABASE_FILLOUT_PRICE_MODIFIER_BY_KEY_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_FILLOUT_PRICE_MODIFIER_BY_KEY_);
		ITEMDATABASE.set_function("ITEMDATABASE_GET_NUMBER_OF_MODIFIED_PRICES_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_NUMBER_OF_MODIFIED_PRICES_);
		ITEMDATABASE.set_function("ITEMDATABASE_GET_MODIFIED_PRICE_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_MODIFIED_PRICE_);
		ITEMDATABASE.set_function("ITEMDATABASE_GET_NUMBER_OF_MODIFIERS_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_NUMBER_OF_MODIFIERS_);
		ITEMDATABASE.set_function("ITEMDATABASE_FILLOUT_MODIFIER_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_FILLOUT_MODIFIER_);
		ITEMDATABASE.set_function("ITEMDATABASE_GET_PRIORITY_ACCESS_AWARD_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_PRIORITY_ACCESS_AWARD_);
		ITEMDATABASE.set_function("ITEMDATABASE_GET_AWARD_ITEM_COUNT_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_AWARD_ITEM_COUNT_);
		ITEMDATABASE.set_function("0x48229CE0C7938237_", LUA_NATIVE_ITEMDATABASE_0x48229CE0C7938237_);
		ITEMDATABASE.set_function("ITEMDATABASE_FILLOUT_AWARD_ITEM_INFO_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_FILLOUT_AWARD_ITEM_INFO_);
		ITEMDATABASE.set_function("0x8D029948CA29409B_", LUA_NATIVE_ITEMDATABASE_0x8D029948CA29409B_);
		ITEMDATABASE.set_function("ITEMDATABASE_GET_AWARD_COST_MODIFIERS_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_AWARD_COST_MODIFIERS_);
		ITEMDATABASE.set_function("0xD076DB9B96FAADF1_", LUA_NATIVE_ITEMDATABASE_0xD076DB9B96FAADF1_);
		ITEMDATABASE.set_function("ITEMDATABASE_DOES_ITEM_HAVE_TAG_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_DOES_ITEM_HAVE_TAG_);
		ITEMDATABASE.set_function("ITEMDATABASE_DOES_BUNDLE_HAVE_TAG_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG_);
		ITEMDATABASE.set_function("ITEMDATABASE_GET_ITEM_TAG_TYPE_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_ITEM_TAG_TYPE_);
		ITEMDATABASE.set_function("0x8870895BA5ED9385_", LUA_NATIVE_ITEMDATABASE_0x8870895BA5ED9385_);
		ITEMDATABASE.set_function("ITEMDATABASE_LOCALIZATION_GET_NUM_LABEL_TYPES_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_LOCALIZATION_GET_NUM_LABEL_TYPES_);
		ITEMDATABASE.set_function("ITEMDATABASE_LOCALIZATION_GET_NUM_VALUES_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_LOCALIZATION_GET_NUM_VALUES_);
		ITEMDATABASE.set_function("ITEMDATABASE_LOCALIZATION_GET_TYPE_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_LOCALIZATION_GET_TYPE_);
		ITEMDATABASE.set_function("ITEMDATABASE_LOCALIZATION_GET_VALUE_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_LOCALIZATION_GET_VALUE_);
		ITEMDATABASE.set_function("ITEMDATABASE_GET_ITEM_PATHSET_", LUA_NATIVE_ITEMDATABASE_ITEMDATABASE_GET_ITEM_PATHSET_);
		ITEMDATABASE.set_function("0xAA29A5F13B2C20B2_", LUA_NATIVE_ITEMDATABASE_0xAA29A5F13B2C20B2_);
	}
}
