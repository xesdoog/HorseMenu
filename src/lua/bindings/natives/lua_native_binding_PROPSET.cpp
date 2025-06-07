#include "lua_native_binding.hpp"
#include "game/rdr/Natives.hpp"

namespace Lua::native
{
	static bool LUA_NATIVE_PROPSET_REQUEST_PROP_SET_(Hash hash)
	{
		auto retval = (bool)PROPSET::_REQUEST_PROP_SET(hash);
		return retval;
	}

	static bool LUA_NATIVE_PROPSET_REQUEST_PROP_SET_2_(Hash hash)
	{
		auto retval = (bool)PROPSET::_REQUEST_PROP_SET_2(hash);
		return retval;
	}

	static bool LUA_NATIVE_PROPSET_HAS_PROP_SET_LOADED_(Hash hash)
	{
		auto retval = (bool)PROPSET::_HAS_PROP_SET_LOADED(hash);
		return retval;
	}

	static bool LUA_NATIVE_PROPSET_HAS_PROP_SET_LOADED_2_(Hash hash)
	{
		auto retval = (bool)PROPSET::_HAS_PROP_SET_LOADED_2(hash);
		return retval;
	}

	static void LUA_NATIVE_PROPSET_SET_PROP_SET_AS_NO_LONGER_NEEDED_(PropSet propSet)
	{
		PROPSET::_SET_PROP_SET_AS_NO_LONGER_NEEDED(propSet);
	}

	static void LUA_NATIVE_PROPSET_DELETE_PROP_SET_(PropSet propSet, bool p1, bool p2)
	{
		PROPSET::_DELETE_PROP_SET(propSet, p1, p2);
	}

	static bool LUA_NATIVE_PROPSET_RELEASE_PROP_SET_(Hash hash)
	{
		auto retval = (bool)PROPSET::_RELEASE_PROP_SET(hash);
		return retval;
	}

	static PropSet LUA_NATIVE_PROPSET_CREATE_PROP_SET_(Hash propsetType, float x, float y, float z, int placementType, float heading, float zProbe, bool p7, bool useVegMod)
	{
		auto retval = PROPSET::_CREATE_PROP_SET(propsetType, x, y, z, placementType, heading, zProbe, p7, useVegMod);
		return retval;
	}

	static PropSet LUA_NATIVE_PROPSET_CREATE_PROP_SET_2_(Hash propsetType, float x, float y, float z, int placementType, float heading, float zProbe, bool p7, bool useVegMod)
	{
		auto retval = PROPSET::_CREATE_PROP_SET_2(propsetType, x, y, z, placementType, heading, zProbe, p7, useVegMod);
		return retval;
	}

	static PropSet LUA_NATIVE_PROPSET_CREATE_PROP_SET_INSTANCE_ATTACHED_TO_ENTITY(Hash hash, float x, float y, float z, Entity entity, float p5, bool p6, int p7, bool p8)
	{
		auto retval = PROPSET::CREATE_PROP_SET_INSTANCE_ATTACHED_TO_ENTITY(hash, x, y, z, entity, p5, p6, p7, p8);
		return retval;
	}

	static PropSet LUA_NATIVE_PROPSET_CREATE_PROP_SET_INSTANCE_ATTACHED_TO_ENTITY_2_(Hash hash, float x, float y, float z, Entity entity, float p5, bool p6, int p7, bool p8)
	{
		auto retval = PROPSET::_CREATE_PROP_SET_INSTANCE_ATTACHED_TO_ENTITY_2(hash, x, y, z, entity, p5, p6, p7, p8);
		return retval;
	}

	static bool LUA_NATIVE_PROPSET_DOES_PROP_SET_EXIST(PropSet propSet)
	{
		auto retval = (bool)PROPSET::DOES_PROP_SET_EXIST(propSet);
		return retval;
	}

	static bool LUA_NATIVE_PROPSET_DOES_PROP_SET_OF_TYPE_EXIST_NEAR_COORDS_(Hash propsetHash, float x, float y, float z)
	{
		auto retval = (bool)PROPSET::_DOES_PROP_SET_OF_TYPE_EXIST_NEAR_COORDS(propsetHash, x, y, z);
		return retval;
	}

	static bool LUA_NATIVE_PROPSET_IS_PROP_SET_FULLY_LOADED(PropSet propSet)
	{
		auto retval = (bool)PROPSET::IS_PROP_SET_FULLY_LOADED(propSet);
		return retval;
	}

	static void LUA_NATIVE_PROPSET_SET_PROP_SET_VISIBLE_(PropSet propSet, bool toggle)
	{
		PROPSET::_SET_PROP_SET_VISIBLE(propSet, toggle);
	}

	static bool LUA_NATIVE_PROPSET_IS_PROP_SET_VISIBLE_(PropSet propSet)
	{
		auto retval = (bool)PROPSET::_IS_PROP_SET_VISIBLE(propSet);
		return retval;
	}

	static Hash LUA_NATIVE_PROPSET_GET_PROP_SET_MODEL_(PropSet propSet)
	{
		auto retval = PROPSET::_GET_PROP_SET_MODEL(propSet);
		return retval;
	}

	static Hash LUA_NATIVE_PROPSET_GET_VEHICLE_PROP_SET_HASH_(Vehicle vehicle)
	{
		auto retval = PROPSET::_GET_VEHICLE_PROP_SET_HASH(vehicle);
		return retval;
	}

	static int LUA_NATIVE_PROPSET_GET_ENTITIES_FROM_PROP_SET_(PropSet propSet, ItemSet itemSet, Hash model, bool p3, bool p4)
	{
		auto retval = PROPSET::_GET_ENTITIES_FROM_PROP_SET(propSet, itemSet, model, p3, p4);
		return retval;
	}

	static void LUA_NATIVE_PROPSET_0xC4B67EF3FD65622D_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		PROPSET::_0xC4B67EF3FD65622D(p0, p1, p2, p3, p4, p5);
	}

	static void LUA_NATIVE_PROPSET_0x58E0B01D45CA7357_(Any p0)
	{
		PROPSET::_0x58E0B01D45CA7357(p0);
	}

	static void LUA_NATIVE_PROPSET_SET_PROP_SET_FLAG_(PropSet propSet, int flag)
	{
		PROPSET::_SET_PROP_SET_FLAG(propSet, flag);
	}

	static PropSet LUA_NATIVE_PROPSET_GET_VEHICLE_PROP_SET_(Vehicle vehicle)
	{
		auto retval = PROPSET::_GET_VEHICLE_PROP_SET(vehicle);
		return retval;
	}

	static bool LUA_NATIVE_PROPSET_DOES_VEHICLE_HAVE_ANY_PROP_SET_(Vehicle vehicle)
	{
		auto retval = (bool)PROPSET::_DOES_VEHICLE_HAVE_ANY_PROP_SET(vehicle);
		return retval;
	}

	static void LUA_NATIVE_PROPSET_ADD_PROP_SET_FOR_VEHICLE_(Vehicle vehicle, Hash propset)
	{
		PROPSET::_ADD_PROP_SET_FOR_VEHICLE(vehicle, propset);
	}

	static void LUA_NATIVE_PROPSET_REMOVE_VEHICLE_PROP_SETS_(Vehicle vehicle)
	{
		PROPSET::_REMOVE_VEHICLE_PROP_SETS(vehicle);
	}

	static bool LUA_NATIVE_PROPSET_IS_VEHICLE_PROP_SET_LOADED_(Vehicle vehicle)
	{
		auto retval = (bool)PROPSET::_IS_VEHICLE_PROP_SET_LOADED(vehicle);
		return retval;
	}

	static void LUA_NATIVE_PROPSET_ADD_ADDITIONAL_PROP_SET_FOR_VEHICLE_(Vehicle vehicle, Hash propset)
	{
		PROPSET::_ADD_ADDITIONAL_PROP_SET_FOR_VEHICLE(vehicle, propset);
	}

	static bool LUA_NATIVE_PROPSET_IS_VEHICLE_PROP_SET_LOADED_ADDITIONAL_(Vehicle vehicle)
	{
		auto retval = (bool)PROPSET::_IS_VEHICLE_PROP_SET_LOADED_ADDITIONAL(vehicle);
		return retval;
	}

	static PropSet LUA_NATIVE_PROPSET_GET_VEHICLE_LIGHT_PROP_SET_(Vehicle vehicle)
	{
		auto retval = PROPSET::_GET_VEHICLE_LIGHT_PROP_SET(vehicle);
		return retval;
	}

	static bool LUA_NATIVE_PROPSET_DOES_VEHICLE_HAVE_ANY_LIGHT_PROP_SET_(Vehicle vehicle)
	{
		auto retval = (bool)PROPSET::_DOES_VEHICLE_HAVE_ANY_LIGHT_PROP_SET(vehicle);
		return retval;
	}

	static void LUA_NATIVE_PROPSET_ADD_LIGHT_PROP_SET_TO_VEHICLE_(Vehicle vehicle, Hash lightPropset)
	{
		PROPSET::_ADD_LIGHT_PROP_SET_TO_VEHICLE(vehicle, lightPropset);
	}

	static void LUA_NATIVE_PROPSET_REMOVE_VEHICLE_LIGHT_PROP_SETS_(Vehicle vehicle)
	{
		PROPSET::_REMOVE_VEHICLE_LIGHT_PROP_SETS(vehicle);
	}

	static bool LUA_NATIVE_PROPSET_IS_VEHICLE_LIGHT_PROP_SET_LOADED_(Vehicle vehicle)
	{
		auto retval = (bool)PROPSET::_IS_VEHICLE_LIGHT_PROP_SET_LOADED(vehicle);
		return retval;
	}

	static PropSet LUA_NATIVE_PROPSET_GET_TRAIN_CARRIAGE_PROP_SET_(Entity trainCarriage)
	{
		auto retval = PROPSET::_GET_TRAIN_CARRIAGE_PROP_SET(trainCarriage);
		return retval;
	}

	static bool LUA_NATIVE_PROPSET_HAS_VEHICLE_TRAILER_PROP_SET_LOADED_(Vehicle vehicle, int wagonIndex)
	{
		auto retval = (bool)PROPSET::_HAS_VEHICLE_TRAILER_PROP_SET_LOADED(vehicle, wagonIndex);
		return retval;
	}

	static PropSet LUA_NATIVE_PROPSET_GET_PROP_SET_AT_COORDS_(Hash propsetHash, float x, float y, float z)
	{
		auto retval = PROPSET::_GET_PROP_SET_AT_COORDS(propsetHash, x, y, z);
		return retval;
	}

	void init_native_binding_PROPSET(sol::state& L)
	{
		auto PROPSET = L["PROPSET"].get_or_create<sol::table>();
		PROPSET.set_function("REQUEST_PROP_SET_", LUA_NATIVE_PROPSET_REQUEST_PROP_SET_);
		PROPSET.set_function("REQUEST_PROP_SET_2_", LUA_NATIVE_PROPSET_REQUEST_PROP_SET_2_);
		PROPSET.set_function("HAS_PROP_SET_LOADED_", LUA_NATIVE_PROPSET_HAS_PROP_SET_LOADED_);
		PROPSET.set_function("HAS_PROP_SET_LOADED_2_", LUA_NATIVE_PROPSET_HAS_PROP_SET_LOADED_2_);
		PROPSET.set_function("SET_PROP_SET_AS_NO_LONGER_NEEDED_", LUA_NATIVE_PROPSET_SET_PROP_SET_AS_NO_LONGER_NEEDED_);
		PROPSET.set_function("DELETE_PROP_SET_", LUA_NATIVE_PROPSET_DELETE_PROP_SET_);
		PROPSET.set_function("RELEASE_PROP_SET_", LUA_NATIVE_PROPSET_RELEASE_PROP_SET_);
		PROPSET.set_function("CREATE_PROP_SET_", LUA_NATIVE_PROPSET_CREATE_PROP_SET_);
		PROPSET.set_function("CREATE_PROP_SET_2_", LUA_NATIVE_PROPSET_CREATE_PROP_SET_2_);
		PROPSET.set_function("CREATE_PROP_SET_INSTANCE_ATTACHED_TO_ENTITY", LUA_NATIVE_PROPSET_CREATE_PROP_SET_INSTANCE_ATTACHED_TO_ENTITY);
		PROPSET.set_function("CREATE_PROP_SET_INSTANCE_ATTACHED_TO_ENTITY_2_", LUA_NATIVE_PROPSET_CREATE_PROP_SET_INSTANCE_ATTACHED_TO_ENTITY_2_);
		PROPSET.set_function("DOES_PROP_SET_EXIST", LUA_NATIVE_PROPSET_DOES_PROP_SET_EXIST);
		PROPSET.set_function("DOES_PROP_SET_OF_TYPE_EXIST_NEAR_COORDS_", LUA_NATIVE_PROPSET_DOES_PROP_SET_OF_TYPE_EXIST_NEAR_COORDS_);
		PROPSET.set_function("IS_PROP_SET_FULLY_LOADED", LUA_NATIVE_PROPSET_IS_PROP_SET_FULLY_LOADED);
		PROPSET.set_function("SET_PROP_SET_VISIBLE_", LUA_NATIVE_PROPSET_SET_PROP_SET_VISIBLE_);
		PROPSET.set_function("IS_PROP_SET_VISIBLE_", LUA_NATIVE_PROPSET_IS_PROP_SET_VISIBLE_);
		PROPSET.set_function("GET_PROP_SET_MODEL_", LUA_NATIVE_PROPSET_GET_PROP_SET_MODEL_);
		PROPSET.set_function("GET_VEHICLE_PROP_SET_HASH_", LUA_NATIVE_PROPSET_GET_VEHICLE_PROP_SET_HASH_);
		PROPSET.set_function("GET_ENTITIES_FROM_PROP_SET_", LUA_NATIVE_PROPSET_GET_ENTITIES_FROM_PROP_SET_);
		PROPSET.set_function("0xC4B67EF3FD65622D_", LUA_NATIVE_PROPSET_0xC4B67EF3FD65622D_);
		PROPSET.set_function("0x58E0B01D45CA7357_", LUA_NATIVE_PROPSET_0x58E0B01D45CA7357_);
		PROPSET.set_function("SET_PROP_SET_FLAG_", LUA_NATIVE_PROPSET_SET_PROP_SET_FLAG_);
		PROPSET.set_function("GET_VEHICLE_PROP_SET_", LUA_NATIVE_PROPSET_GET_VEHICLE_PROP_SET_);
		PROPSET.set_function("DOES_VEHICLE_HAVE_ANY_PROP_SET_", LUA_NATIVE_PROPSET_DOES_VEHICLE_HAVE_ANY_PROP_SET_);
		PROPSET.set_function("ADD_PROP_SET_FOR_VEHICLE_", LUA_NATIVE_PROPSET_ADD_PROP_SET_FOR_VEHICLE_);
		PROPSET.set_function("REMOVE_VEHICLE_PROP_SETS_", LUA_NATIVE_PROPSET_REMOVE_VEHICLE_PROP_SETS_);
		PROPSET.set_function("IS_VEHICLE_PROP_SET_LOADED_", LUA_NATIVE_PROPSET_IS_VEHICLE_PROP_SET_LOADED_);
		PROPSET.set_function("ADD_ADDITIONAL_PROP_SET_FOR_VEHICLE_", LUA_NATIVE_PROPSET_ADD_ADDITIONAL_PROP_SET_FOR_VEHICLE_);
		PROPSET.set_function("IS_VEHICLE_PROP_SET_LOADED_ADDITIONAL_", LUA_NATIVE_PROPSET_IS_VEHICLE_PROP_SET_LOADED_ADDITIONAL_);
		PROPSET.set_function("GET_VEHICLE_LIGHT_PROP_SET_", LUA_NATIVE_PROPSET_GET_VEHICLE_LIGHT_PROP_SET_);
		PROPSET.set_function("DOES_VEHICLE_HAVE_ANY_LIGHT_PROP_SET_", LUA_NATIVE_PROPSET_DOES_VEHICLE_HAVE_ANY_LIGHT_PROP_SET_);
		PROPSET.set_function("ADD_LIGHT_PROP_SET_TO_VEHICLE_", LUA_NATIVE_PROPSET_ADD_LIGHT_PROP_SET_TO_VEHICLE_);
		PROPSET.set_function("REMOVE_VEHICLE_LIGHT_PROP_SETS_", LUA_NATIVE_PROPSET_REMOVE_VEHICLE_LIGHT_PROP_SETS_);
		PROPSET.set_function("IS_VEHICLE_LIGHT_PROP_SET_LOADED_", LUA_NATIVE_PROPSET_IS_VEHICLE_LIGHT_PROP_SET_LOADED_);
		PROPSET.set_function("GET_TRAIN_CARRIAGE_PROP_SET_", LUA_NATIVE_PROPSET_GET_TRAIN_CARRIAGE_PROP_SET_);
		PROPSET.set_function("HAS_VEHICLE_TRAILER_PROP_SET_LOADED_", LUA_NATIVE_PROPSET_HAS_VEHICLE_TRAILER_PROP_SET_LOADED_);
		PROPSET.set_function("GET_PROP_SET_AT_COORDS_", LUA_NATIVE_PROPSET_GET_PROP_SET_AT_COORDS_);
	}
}
