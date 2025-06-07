#include "lua_native_binding.hpp"
#include "game/rdr/Natives.hpp"

namespace Lua::native
{
	static Volume LUA_NATIVE_VOLUME_CREATE_VOLUME_BY_HASH_(Hash volumeType, float x, float y, float z, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ)
	{
		auto retval = VOLUME::_CREATE_VOLUME_BY_HASH(volumeType, x, y, z, rotX, rotY, rotZ, scaleX, scaleY, scaleZ);
		return retval;
	}

	static Volume LUA_NATIVE_VOLUME_CREATE_VOLUME_BOX(float x, float y, float z, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ)
	{
		auto retval = VOLUME::CREATE_VOLUME_BOX(x, y, z, rotX, rotY, rotZ, scaleX, scaleY, scaleZ);
		return retval;
	}

	static Volume LUA_NATIVE_VOLUME_CREATE_VOLUME_CYLINDER(float x, float y, float z, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ)
	{
		auto retval = VOLUME::CREATE_VOLUME_CYLINDER(x, y, z, rotX, rotY, rotZ, scaleX, scaleY, scaleZ);
		return retval;
	}

	static Volume LUA_NATIVE_VOLUME_CREATE_VOLUME_SPHERE(float x, float y, float z, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ)
	{
		auto retval = VOLUME::CREATE_VOLUME_SPHERE(x, y, z, rotX, rotY, rotZ, scaleX, scaleY, scaleZ);
		return retval;
	}

	static Volume LUA_NATIVE_VOLUME_CREATE_VOLUME_AGGREGATE()
	{
		auto retval = VOLUME::CREATE_VOLUME_AGGREGATE();
		return retval;
	}

	static Volume LUA_NATIVE_VOLUME_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME_(Hash volumeType, float x, float y, float z, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ, sol::stack_object name)
	{
		auto retval = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(volumeType, x, y, z, rotX, rotY, rotZ, scaleX, scaleY, scaleZ, name.is<const char*>() ? name.as<const char*>() : nullptr);
		return retval;
	}

	static Volume LUA_NATIVE_VOLUME_CREATE_ANTI_GRIEF_VOLUME_(Hash volumeType, float x, float y, float z, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ)
	{
		auto retval = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(volumeType, x, y, z, rotX, rotY, rotZ, scaleX, scaleY, scaleZ);
		return retval;
	}

	static void LUA_NATIVE_VOLUME_SET_ANTI_GRIEF_VOLUME_BLOCKS_HORSE_(Volume volume, bool toggle)
	{
		VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_HORSE(volume, toggle);
	}

	static void LUA_NATIVE_VOLUME_SET_ANTI_GRIEF_VOLUME_BLOCKS_PLAYER_(Volume volume, bool toggle)
	{
		VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_PLAYER(volume, toggle);
	}

	static Volume LUA_NATIVE_VOLUME_CREATE_WALK_AND_TALK_VOLUME_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12)
	{
		auto retval = VOLUME::_CREATE_WALK_AND_TALK_VOLUME(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12);
		return retval;
	}

	static Volume LUA_NATIVE_VOLUME_CREATE_SPEED_VOLUME_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14)
	{
		auto retval = VOLUME::_CREATE_SPEED_VOLUME(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14);
		return retval;
	}

	static Volume LUA_NATIVE_VOLUME_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME_(float x, float y, float z, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ, sol::stack_object name)
	{
		auto retval = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(x, y, z, rotX, rotY, rotZ, scaleX, scaleY, scaleZ, name.is<const char*>() ? name.as<const char*>() : nullptr);
		return retval;
	}

	static Volume LUA_NATIVE_VOLUME_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME_(float x, float y, float z, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ, sol::stack_object name)
	{
		auto retval = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(x, y, z, rotX, rotY, rotZ, scaleX, scaleY, scaleZ, name.is<const char*>() ? name.as<const char*>() : nullptr);
		return retval;
	}

	static Volume LUA_NATIVE_VOLUME_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME_(float x, float y, float z, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ, sol::stack_object name)
	{
		auto retval = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(x, y, z, rotX, rotY, rotZ, scaleX, scaleY, scaleZ, name.is<const char*>() ? name.as<const char*>() : nullptr);
		return retval;
	}

	static Volume LUA_NATIVE_VOLUME_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME_(sol::stack_object name)
	{
		auto retval = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME(name.is<const char*>() ? name.as<const char*>() : nullptr);
		return retval;
	}

	static void LUA_NATIVE_VOLUME_ADD_BOUNDS_TO_AGGREGATE_VOLUME_(Volume volume, Volume aggregate)
	{
		VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(volume, aggregate);
	}

	static void LUA_NATIVE_VOLUME_REMOVE_BOUNDS_FROM_AGGREGATE_VOLUME_(Volume volume, Volume aggregate)
	{
		VOLUME::_REMOVE_BOUNDS_FROM_AGGREGATE_VOLUME(volume, aggregate);
	}

	static void LUA_NATIVE_VOLUME_ADD_VOLUME_TO_VOLUME_AGGREGATE_(Volume aggregate, Hash typeHash, float x, float y, float z, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ)
	{
		VOLUME::_ADD_VOLUME_TO_VOLUME_AGGREGATE(aggregate, typeHash, x, y, z, rotX, rotY, rotZ, scaleX, scaleY, scaleZ);
	}

	static void LUA_NATIVE_VOLUME_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE_(Volume aggregate, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9)
	{
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}

	static void LUA_NATIVE_VOLUME_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE_(Volume aggregate, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9)
	{
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(aggregate, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}

	static void LUA_NATIVE_VOLUME_ADD_SPHERE_VOLUME_TO_VOLUME_AGGREGATE_(Volume aggregate, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9)
	{
		VOLUME::_ADD_SPHERE_VOLUME_TO_VOLUME_AGGREGATE(aggregate, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}

	static void LUA_NATIVE_VOLUME_DELETE_VOLUME(Volume volume)
	{
		VOLUME::DELETE_VOLUME(volume);
	}

	static bool LUA_NATIVE_VOLUME_DOES_VOLUME_EXIST(Volume volume)
	{
		auto retval = (bool)VOLUME::DOES_VOLUME_EXIST(volume);
		return retval;
	}

	static bool LUA_NATIVE_VOLUME_IS_POINT_IN_VOLUME(Volume volume, float x, float y, float z)
	{
		auto retval = (bool)VOLUME::IS_POINT_IN_VOLUME(volume, x, y, z);
		return retval;
	}

	static Vector3 LUA_NATIVE_VOLUME_GET_VOLUME_COORDS(Volume volume)
	{
		auto retval = VOLUME::GET_VOLUME_COORDS(volume);
		return retval;
	}

	static bool LUA_NATIVE_VOLUME_SET_VOLUME_COORDS(Volume volume, float posX, float posY, float posZ)
	{
		auto retval = (bool)VOLUME::SET_VOLUME_COORDS(volume, posX, posY, posZ);
		return retval;
	}

	static Vector3 LUA_NATIVE_VOLUME_GET_VOLUME_ROTATION(Volume volume)
	{
		auto retval = VOLUME::GET_VOLUME_ROTATION(volume);
		return retval;
	}

	static bool LUA_NATIVE_VOLUME_SET_VOLUME_ROTATION(Volume volume, float rotX, float rotY, float rotZ)
	{
		auto retval = (bool)VOLUME::SET_VOLUME_ROTATION(volume, rotX, rotY, rotZ);
		return retval;
	}

	static Vector3 LUA_NATIVE_VOLUME_GET_VOLUME_SCALE(Volume volume)
	{
		auto retval = VOLUME::GET_VOLUME_SCALE(volume);
		return retval;
	}

	static bool LUA_NATIVE_VOLUME_SET_VOLUME_SCALE(Volume volume, float scaleX, float scaleY, float scaleZ)
	{
		auto retval = (bool)VOLUME::SET_VOLUME_SCALE(volume, scaleX, scaleY, scaleZ);
		return retval;
	}

	static std::tuple<Vector3, Vector3> LUA_NATIVE_VOLUME_GET_VOLUME_BOUNDS_(Volume volume, Vector3 min, Vector3 max)
	{
		std::tuple<Vector3, Vector3> return_values;
		VOLUME::_GET_VOLUME_BOUNDS(volume, &min, &max);
		std::get<0>(return_values) = min;
		std::get<1>(return_values) = max;

		return return_values;
	}

	static void LUA_NATIVE_VOLUME_0x748C5F51A18CB8F0_(bool p0)
	{
		VOLUME::_0x748C5F51A18CB8F0(p0);
	}

	static Any LUA_NATIVE_VOLUME_0x2B32B11520626229_(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		auto retval = VOLUME::_0x2B32B11520626229(p0, p1, p2, p3, p4);
		return retval;
	}

	static Any LUA_NATIVE_VOLUME_0x40F769D31A00D5A0_(Any p0, Any p1)
	{
		auto retval = VOLUME::_0x40F769D31A00D5A0(p0, p1);
		return retval;
	}

	static Vector3 LUA_NATIVE_VOLUME_0xD882C5B3991575B7_(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		auto retval = VOLUME::_0xD882C5B3991575B7(p0, p1, p2, p3, p4);
		return retval;
	}

	static void LUA_NATIVE_VOLUME_0xB469CFD9E065EB99_(Any p0, Any p1)
	{
		VOLUME::_0xB469CFD9E065EB99(p0, p1);
	}

	static Any LUA_NATIVE_VOLUME_0x7FD78DFD0C5D7B9B_(Any p0)
	{
		auto retval = VOLUME::_0x7FD78DFD0C5D7B9B(p0);
		return retval;
	}

	static Any LUA_NATIVE_VOLUME_0xEE1D6FF54CAF7714_(Any p0, Any p1)
	{
		auto retval = VOLUME::_0xEE1D6FF54CAF7714(p0, p1);
		return retval;
	}

	static void LUA_NATIVE_VOLUME_0xD52DF30355EA7C8E_(Any p0, Any p1, Any p2)
	{
		VOLUME::_0xD52DF30355EA7C8E(p0, p1, p2);
	}

	static void LUA_NATIVE_VOLUME_SET_VOLUME_OWNER_PERSISTENT_CHARACTER(Volume volume, PersChar persChar, bool p2)
	{
		VOLUME::SET_VOLUME_OWNER_PERSISTENT_CHARACTER(volume, persChar, p2);
	}

	static void LUA_NATIVE_VOLUME_0x6D5F9E69BA1BE783_(Any p0)
	{
		VOLUME::_0x6D5F9E69BA1BE783(p0);
	}

	static void LUA_NATIVE_VOLUME_0x998202B206872672_(Any p0)
	{
		VOLUME::_0x998202B206872672(p0);
	}

	static void LUA_NATIVE_VOLUME_0x4A8FEFC43FD8AC9B_(Any p0, Any p1, Any p2)
	{
		VOLUME::_0x4A8FEFC43FD8AC9B(p0, p1, p2);
	}

	static void LUA_NATIVE_VOLUME_0xF3A2FBA5985C8CD5_(Any p0, Any p1, Any p2, Any p3)
	{
		VOLUME::_0xF3A2FBA5985C8CD5(p0, p1, p2, p3);
	}

	static void LUA_NATIVE_VOLUME_0x53D05D60E5F5B40C_(Any p0, Any p1, Any p2, Any p3)
	{
		VOLUME::_0x53D05D60E5F5B40C(p0, p1, p2, p3);
	}

	static Any LUA_NATIVE_VOLUME_0xCA5C90D40665D5CE_(Any p0, Any p1)
	{
		auto retval = VOLUME::_0xCA5C90D40665D5CE(p0, p1);
		return retval;
	}

	static void LUA_NATIVE_VOLUME_0x3EFABB21E14A6BD1_(Any p0, Any p1, Any p2)
	{
		VOLUME::_0x3EFABB21E14A6BD1(p0, p1, p2);
	}

	static bool LUA_NATIVE_VOLUME_IS_AGGREGATE_VOLUME_(Volume volume)
	{
		auto retval = (bool)VOLUME::_IS_AGGREGATE_VOLUME(volume);
		return retval;
	}

	static Volume LUA_NATIVE_VOLUME_CREATE_VOLUME_LOCK_(float x, float y, float z, float radius, int flag, Any p5)
	{
		auto retval = VOLUME::_CREATE_VOLUME_LOCK(x, y, z, radius, flag, p5);
		return retval;
	}

	static Volume LUA_NATIVE_VOLUME_CREATE_VOLUME_LOCK_ATTACHED_TO_ENTITY_(Entity entity, float radius, int flag, Any p3)
	{
		auto retval = VOLUME::_CREATE_VOLUME_LOCK_ATTACHED_TO_ENTITY(entity, radius, flag, p3);
		return retval;
	}

	static bool LUA_NATIVE_VOLUME_IS_VOLUME_LOCK_REQUEST_VALID_2_(int volLockRequestId)
	{
		auto retval = (bool)VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(volLockRequestId);
		return retval;
	}

	static Vector3 LUA_NATIVE_VOLUME_0xC4019CF9AE8E931A_(int volLockRequestId)
	{
		auto retval = VOLUME::_0xC4019CF9AE8E931A(volLockRequestId);
		return retval;
	}

	static Any LUA_NATIVE_VOLUME_0xF6CE6F9C3897804E_(Any p0)
	{
		auto retval = VOLUME::_0xF6CE6F9C3897804E(p0);
		return retval;
	}

	static Any LUA_NATIVE_VOLUME_0xF6F5447D418DAA82_(Any p0)
	{
		auto retval = VOLUME::_0xF6F5447D418DAA82(p0);
		return retval;
	}

	static void LUA_NATIVE_VOLUME_0xD4FA73FE628FEC63_(Any p0, Any p1)
	{
		VOLUME::_0xD4FA73FE628FEC63(p0, p1);
	}

	static void LUA_NATIVE_VOLUME_0xB440F4E35393FC39_(Volume volume, Any p1)
	{
		VOLUME::_0xB440F4E35393FC39(volume, p1);
	}

	static void LUA_NATIVE_VOLUME_0xD460135C98940274_(Volume volume, Any p1)
	{
		VOLUME::_0xD460135C98940274(volume, p1);
	}

	static void LUA_NATIVE_VOLUME_0xEBA87B9273835CF3_(Any p0, Any p1)
	{
		VOLUME::_0xEBA87B9273835CF3(p0, p1);
	}

	static Any LUA_NATIVE_VOLUME_0xAA9EE2AAFC717623_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		auto retval = VOLUME::_0xAA9EE2AAFC717623(p0, p1, p2, p3, p4, p5);
		return retval;
	}

	static Any LUA_NATIVE_VOLUME_0x870E9981ED27C815_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		auto retval = VOLUME::_0x870E9981ED27C815(p0, p1, p2, p3, p4, p5);
		return retval;
	}

	static bool LUA_NATIVE_VOLUME_DOES_VOLUME_COLLIDE_WITH_ANY_VOLUME_LOCK(float x, float y, float z, float radius, bool p4, int p5, int p6)
	{
		auto retval = (bool)VOLUME::DOES_VOLUME_COLLIDE_WITH_ANY_VOLUME_LOCK(x, y, z, radius, p4, p5, p6);
		return retval;
	}

	static bool LUA_NATIVE_VOLUME_IS_POINT_NEAR_VOLUME_LOCK_CENTER_(float x, float y, float z, float radius, int p4, int p5, int flags)
	{
		auto retval = (bool)VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(x, y, z, radius, p4, p5, flags);
		return retval;
	}

	static Any LUA_NATIVE_VOLUME_0x51E52C9687FCDEEC_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		auto retval = VOLUME::_0x51E52C9687FCDEEC(p0, p1, p2, p3, p4, p5, p6);
		return retval;
	}

	static int LUA_NATIVE_VOLUME_FIND_VOLUME_LOCK_REQUEST_ID_WITH_ARGS_(uintptr_t args)
	{
		auto retval = VOLUME::_FIND_VOLUME_LOCK_REQUEST_ID_WITH_ARGS((Any*)args);
		return retval;
	}

	static void LUA_NATIVE_VOLUME_MODIFY_VOLUME_LOCK_LOCATION_(int volLock, float x, float y, float z)
	{
		VOLUME::_MODIFY_VOLUME_LOCK_LOCATION(volLock, x, y, z);
	}

	static void LUA_NATIVE_VOLUME_0x695DAC2DB928F308_(Any p0, Any p1)
	{
		VOLUME::_0x695DAC2DB928F308(p0, p1);
	}

	static void LUA_NATIVE_VOLUME_RELEASE_LOCK_VOLUME_(int volLockRequestId)
	{
		VOLUME::_RELEASE_LOCK_VOLUME(volLockRequestId);
	}

	static void LUA_NATIVE_VOLUME_0xAC355980681A7F89_(Any p0)
	{
		VOLUME::_0xAC355980681A7F89(p0);
	}

	static bool LUA_NATIVE_VOLUME_ADD_ENTRY_VOLUME_LOCK_(uintptr_t args)
	{
		auto retval = (bool)VOLUME::_ADD_ENTRY_VOLUME_LOCK((Any*)args);
		return retval;
	}

	static void LUA_NATIVE_VOLUME_0xC61E2FD926DBB406_()
	{
		VOLUME::_0xC61E2FD926DBB406();
	}

	static int LUA_NATIVE_VOLUME_REQUEST_VOLUME_LOCK(float x, float y, float z, float radius, int p4, int p5)
	{
		auto retval = VOLUME::REQUEST_VOLUME_LOCK(x, y, z, radius, p4, p5);
		return retval;
	}

	static int LUA_NATIVE_VOLUME_REQUEST_VOLUME_LOCK_WITH_ARGS(uintptr_t args)
	{
		auto retval = VOLUME::REQUEST_VOLUME_LOCK_WITH_ARGS((Any*)args);
		return retval;
	}

	static bool LUA_NATIVE_VOLUME_IS_VOLUME_LOCK_REQUEST_VALID(int volLockRequestId)
	{
		auto retval = (bool)VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(volLockRequestId);
		return retval;
	}

	static int LUA_NATIVE_VOLUME_GET_VOLUME_LOCK_REQUEST_STATUS(int volLockRequestId)
	{
		auto retval = VOLUME::GET_VOLUME_LOCK_REQUEST_STATUS(volLockRequestId);
		return retval;
	}

	static Any LUA_NATIVE_VOLUME_0x351D71B8B72B858B_(Any p0)
	{
		auto retval = VOLUME::_0x351D71B8B72B858B(p0);
		return retval;
	}

	static void LUA_NATIVE_VOLUME_0xFA15C9A320E707B0_()
	{
		VOLUME::_0xFA15C9A320E707B0();
	}

	static void LUA_NATIVE_VOLUME_0x52572B331E693AED_(Any p0, Any p1, Any p2)
	{
		VOLUME::_0x52572B331E693AED(p0, p1, p2);
	}

	static void LUA_NATIVE_VOLUME_0x128FC3A893BF853A_(Any p0)
	{
		VOLUME::_0x128FC3A893BF853A(p0);
	}

	static void LUA_NATIVE_VOLUME_SET_VOLUME_RELATIONSHIP_(Volume volume, Hash relationshipGroup)
	{
		VOLUME::_SET_VOLUME_RELATIONSHIP(volume, relationshipGroup);
	}

	static Hash LUA_NATIVE_VOLUME_GET_VOLUME_RELATIONSHIP_(Volume volume)
	{
		auto retval = VOLUME::_GET_VOLUME_RELATIONSHIP(volume);
		return retval;
	}

	void init_native_binding_VOLUME(sol::state& L)
	{
		auto VOLUME = L["VOLUME"].get_or_create<sol::table>();
		VOLUME.set_function("CREATE_VOLUME_BY_HASH_", LUA_NATIVE_VOLUME_CREATE_VOLUME_BY_HASH_);
		VOLUME.set_function("CREATE_VOLUME_BOX", LUA_NATIVE_VOLUME_CREATE_VOLUME_BOX);
		VOLUME.set_function("CREATE_VOLUME_CYLINDER", LUA_NATIVE_VOLUME_CREATE_VOLUME_CYLINDER);
		VOLUME.set_function("CREATE_VOLUME_SPHERE", LUA_NATIVE_VOLUME_CREATE_VOLUME_SPHERE);
		VOLUME.set_function("CREATE_VOLUME_AGGREGATE", LUA_NATIVE_VOLUME_CREATE_VOLUME_AGGREGATE);
		VOLUME.set_function("CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME_", LUA_NATIVE_VOLUME_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME_);
		VOLUME.set_function("CREATE_ANTI_GRIEF_VOLUME_", LUA_NATIVE_VOLUME_CREATE_ANTI_GRIEF_VOLUME_);
		VOLUME.set_function("SET_ANTI_GRIEF_VOLUME_BLOCKS_HORSE_", LUA_NATIVE_VOLUME_SET_ANTI_GRIEF_VOLUME_BLOCKS_HORSE_);
		VOLUME.set_function("SET_ANTI_GRIEF_VOLUME_BLOCKS_PLAYER_", LUA_NATIVE_VOLUME_SET_ANTI_GRIEF_VOLUME_BLOCKS_PLAYER_);
		VOLUME.set_function("CREATE_WALK_AND_TALK_VOLUME_", LUA_NATIVE_VOLUME_CREATE_WALK_AND_TALK_VOLUME_);
		VOLUME.set_function("CREATE_SPEED_VOLUME_", LUA_NATIVE_VOLUME_CREATE_SPEED_VOLUME_);
		VOLUME.set_function("CREATE_VOLUME_BOX_WITH_CUSTOM_NAME_", LUA_NATIVE_VOLUME_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME_);
		VOLUME.set_function("CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME_", LUA_NATIVE_VOLUME_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME_);
		VOLUME.set_function("CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME_", LUA_NATIVE_VOLUME_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME_);
		VOLUME.set_function("CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME_", LUA_NATIVE_VOLUME_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME_);
		VOLUME.set_function("ADD_BOUNDS_TO_AGGREGATE_VOLUME_", LUA_NATIVE_VOLUME_ADD_BOUNDS_TO_AGGREGATE_VOLUME_);
		VOLUME.set_function("REMOVE_BOUNDS_FROM_AGGREGATE_VOLUME_", LUA_NATIVE_VOLUME_REMOVE_BOUNDS_FROM_AGGREGATE_VOLUME_);
		VOLUME.set_function("ADD_VOLUME_TO_VOLUME_AGGREGATE_", LUA_NATIVE_VOLUME_ADD_VOLUME_TO_VOLUME_AGGREGATE_);
		VOLUME.set_function("ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE_", LUA_NATIVE_VOLUME_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE_);
		VOLUME.set_function("ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE_", LUA_NATIVE_VOLUME_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE_);
		VOLUME.set_function("ADD_SPHERE_VOLUME_TO_VOLUME_AGGREGATE_", LUA_NATIVE_VOLUME_ADD_SPHERE_VOLUME_TO_VOLUME_AGGREGATE_);
		VOLUME.set_function("DELETE_VOLUME", LUA_NATIVE_VOLUME_DELETE_VOLUME);
		VOLUME.set_function("DOES_VOLUME_EXIST", LUA_NATIVE_VOLUME_DOES_VOLUME_EXIST);
		VOLUME.set_function("IS_POINT_IN_VOLUME", LUA_NATIVE_VOLUME_IS_POINT_IN_VOLUME);
		VOLUME.set_function("GET_VOLUME_COORDS", LUA_NATIVE_VOLUME_GET_VOLUME_COORDS);
		VOLUME.set_function("SET_VOLUME_COORDS", LUA_NATIVE_VOLUME_SET_VOLUME_COORDS);
		VOLUME.set_function("GET_VOLUME_ROTATION", LUA_NATIVE_VOLUME_GET_VOLUME_ROTATION);
		VOLUME.set_function("SET_VOLUME_ROTATION", LUA_NATIVE_VOLUME_SET_VOLUME_ROTATION);
		VOLUME.set_function("GET_VOLUME_SCALE", LUA_NATIVE_VOLUME_GET_VOLUME_SCALE);
		VOLUME.set_function("SET_VOLUME_SCALE", LUA_NATIVE_VOLUME_SET_VOLUME_SCALE);
		VOLUME.set_function("GET_VOLUME_BOUNDS_", LUA_NATIVE_VOLUME_GET_VOLUME_BOUNDS_);
		VOLUME.set_function("0x748C5F51A18CB8F0_", LUA_NATIVE_VOLUME_0x748C5F51A18CB8F0_);
		VOLUME.set_function("0x2B32B11520626229_", LUA_NATIVE_VOLUME_0x2B32B11520626229_);
		VOLUME.set_function("0x40F769D31A00D5A0_", LUA_NATIVE_VOLUME_0x40F769D31A00D5A0_);
		VOLUME.set_function("0xD882C5B3991575B7_", LUA_NATIVE_VOLUME_0xD882C5B3991575B7_);
		VOLUME.set_function("0xB469CFD9E065EB99_", LUA_NATIVE_VOLUME_0xB469CFD9E065EB99_);
		VOLUME.set_function("0x7FD78DFD0C5D7B9B_", LUA_NATIVE_VOLUME_0x7FD78DFD0C5D7B9B_);
		VOLUME.set_function("0xEE1D6FF54CAF7714_", LUA_NATIVE_VOLUME_0xEE1D6FF54CAF7714_);
		VOLUME.set_function("0xD52DF30355EA7C8E_", LUA_NATIVE_VOLUME_0xD52DF30355EA7C8E_);
		VOLUME.set_function("SET_VOLUME_OWNER_PERSISTENT_CHARACTER", LUA_NATIVE_VOLUME_SET_VOLUME_OWNER_PERSISTENT_CHARACTER);
		VOLUME.set_function("0x6D5F9E69BA1BE783_", LUA_NATIVE_VOLUME_0x6D5F9E69BA1BE783_);
		VOLUME.set_function("0x998202B206872672_", LUA_NATIVE_VOLUME_0x998202B206872672_);
		VOLUME.set_function("0x4A8FEFC43FD8AC9B_", LUA_NATIVE_VOLUME_0x4A8FEFC43FD8AC9B_);
		VOLUME.set_function("0xF3A2FBA5985C8CD5_", LUA_NATIVE_VOLUME_0xF3A2FBA5985C8CD5_);
		VOLUME.set_function("0x53D05D60E5F5B40C_", LUA_NATIVE_VOLUME_0x53D05D60E5F5B40C_);
		VOLUME.set_function("0xCA5C90D40665D5CE_", LUA_NATIVE_VOLUME_0xCA5C90D40665D5CE_);
		VOLUME.set_function("0x3EFABB21E14A6BD1_", LUA_NATIVE_VOLUME_0x3EFABB21E14A6BD1_);
		VOLUME.set_function("IS_AGGREGATE_VOLUME_", LUA_NATIVE_VOLUME_IS_AGGREGATE_VOLUME_);
		VOLUME.set_function("CREATE_VOLUME_LOCK_", LUA_NATIVE_VOLUME_CREATE_VOLUME_LOCK_);
		VOLUME.set_function("CREATE_VOLUME_LOCK_ATTACHED_TO_ENTITY_", LUA_NATIVE_VOLUME_CREATE_VOLUME_LOCK_ATTACHED_TO_ENTITY_);
		VOLUME.set_function("IS_VOLUME_LOCK_REQUEST_VALID_2_", LUA_NATIVE_VOLUME_IS_VOLUME_LOCK_REQUEST_VALID_2_);
		VOLUME.set_function("0xC4019CF9AE8E931A_", LUA_NATIVE_VOLUME_0xC4019CF9AE8E931A_);
		VOLUME.set_function("0xF6CE6F9C3897804E_", LUA_NATIVE_VOLUME_0xF6CE6F9C3897804E_);
		VOLUME.set_function("0xF6F5447D418DAA82_", LUA_NATIVE_VOLUME_0xF6F5447D418DAA82_);
		VOLUME.set_function("0xD4FA73FE628FEC63_", LUA_NATIVE_VOLUME_0xD4FA73FE628FEC63_);
		VOLUME.set_function("0xB440F4E35393FC39_", LUA_NATIVE_VOLUME_0xB440F4E35393FC39_);
		VOLUME.set_function("0xD460135C98940274_", LUA_NATIVE_VOLUME_0xD460135C98940274_);
		VOLUME.set_function("0xEBA87B9273835CF3_", LUA_NATIVE_VOLUME_0xEBA87B9273835CF3_);
		VOLUME.set_function("0xAA9EE2AAFC717623_", LUA_NATIVE_VOLUME_0xAA9EE2AAFC717623_);
		VOLUME.set_function("0x870E9981ED27C815_", LUA_NATIVE_VOLUME_0x870E9981ED27C815_);
		VOLUME.set_function("DOES_VOLUME_COLLIDE_WITH_ANY_VOLUME_LOCK", LUA_NATIVE_VOLUME_DOES_VOLUME_COLLIDE_WITH_ANY_VOLUME_LOCK);
		VOLUME.set_function("IS_POINT_NEAR_VOLUME_LOCK_CENTER_", LUA_NATIVE_VOLUME_IS_POINT_NEAR_VOLUME_LOCK_CENTER_);
		VOLUME.set_function("0x51E52C9687FCDEEC_", LUA_NATIVE_VOLUME_0x51E52C9687FCDEEC_);
		VOLUME.set_function("FIND_VOLUME_LOCK_REQUEST_ID_WITH_ARGS_", LUA_NATIVE_VOLUME_FIND_VOLUME_LOCK_REQUEST_ID_WITH_ARGS_);
		VOLUME.set_function("MODIFY_VOLUME_LOCK_LOCATION_", LUA_NATIVE_VOLUME_MODIFY_VOLUME_LOCK_LOCATION_);
		VOLUME.set_function("0x695DAC2DB928F308_", LUA_NATIVE_VOLUME_0x695DAC2DB928F308_);
		VOLUME.set_function("RELEASE_LOCK_VOLUME_", LUA_NATIVE_VOLUME_RELEASE_LOCK_VOLUME_);
		VOLUME.set_function("0xAC355980681A7F89_", LUA_NATIVE_VOLUME_0xAC355980681A7F89_);
		VOLUME.set_function("ADD_ENTRY_VOLUME_LOCK_", LUA_NATIVE_VOLUME_ADD_ENTRY_VOLUME_LOCK_);
		VOLUME.set_function("0xC61E2FD926DBB406_", LUA_NATIVE_VOLUME_0xC61E2FD926DBB406_);
		VOLUME.set_function("REQUEST_VOLUME_LOCK", LUA_NATIVE_VOLUME_REQUEST_VOLUME_LOCK);
		VOLUME.set_function("REQUEST_VOLUME_LOCK_WITH_ARGS", LUA_NATIVE_VOLUME_REQUEST_VOLUME_LOCK_WITH_ARGS);
		VOLUME.set_function("IS_VOLUME_LOCK_REQUEST_VALID", LUA_NATIVE_VOLUME_IS_VOLUME_LOCK_REQUEST_VALID);
		VOLUME.set_function("GET_VOLUME_LOCK_REQUEST_STATUS", LUA_NATIVE_VOLUME_GET_VOLUME_LOCK_REQUEST_STATUS);
		VOLUME.set_function("0x351D71B8B72B858B_", LUA_NATIVE_VOLUME_0x351D71B8B72B858B_);
		VOLUME.set_function("0xFA15C9A320E707B0_", LUA_NATIVE_VOLUME_0xFA15C9A320E707B0_);
		VOLUME.set_function("0x52572B331E693AED_", LUA_NATIVE_VOLUME_0x52572B331E693AED_);
		VOLUME.set_function("0x128FC3A893BF853A_", LUA_NATIVE_VOLUME_0x128FC3A893BF853A_);
		VOLUME.set_function("SET_VOLUME_RELATIONSHIP_", LUA_NATIVE_VOLUME_SET_VOLUME_RELATIONSHIP_);
		VOLUME.set_function("GET_VOLUME_RELATIONSHIP_", LUA_NATIVE_VOLUME_GET_VOLUME_RELATIONSHIP_);
	}
}
