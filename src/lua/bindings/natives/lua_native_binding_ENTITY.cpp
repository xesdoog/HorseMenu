#include "lua_native_binding.hpp"
#include "game/rdr/Natives.hpp"

namespace Lua::native
{
	static bool LUA_NATIVE_ENTITY_DOES_ENTITY_EXIST(Entity EntityIndex)
	{
		auto retval = (bool)ENTITY::DOES_ENTITY_EXIST(EntityIndex);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Entity EntityIndex, bool bDeadCheck)
	{
		auto retval = (bool)ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(EntityIndex, bDeadCheck);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_DOES_ENTITY_HAVE_DRAWABLE(Entity EntityIndex)
	{
		auto retval = (bool)ENTITY::DOES_ENTITY_HAVE_DRAWABLE(EntityIndex);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_DOES_ENTITY_HAVE_PHYSICS(Entity EntityIndex)
	{
		auto retval = (bool)ENTITY::DOES_ENTITY_HAVE_PHYSICS(EntityIndex);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(Entity EntityIndex)
	{
		auto retval = (bool)ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(EntityIndex);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Entity EntityIndex)
	{
		auto retval = (bool)ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(EntityIndex);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Entity EntityIndex)
	{
		auto retval = (bool)ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(EntityIndex);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Entity EntityIndex, Entity DamagerIndex, bool p2, bool p3)
	{
		auto retval = (bool)ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(EntityIndex, DamagerIndex, p2, p3);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_0x3EC28DA1FFAC9DDD_(Entity entity1, Entity entity2, Any p2, Any p3)
	{
		auto retval = (bool)ENTITY::_0x3EC28DA1FFAC9DDD(entity1, entity2, p2, p3);
		return retval;
	}

	static Entity LUA_NATIVE_ENTITY_0xAF72EC7E1B54539B_(Entity entity)
	{
		auto retval = ENTITY::_0xAF72EC7E1B54539B(entity);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Entity FirstEntityIndex, Entity SecondEntityIndex, int LOSFlags)
	{
		auto retval = (bool)ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(FirstEntityIndex, SecondEntityIndex, LOSFlags);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_HAS_ENTITY_CLEAR_LOS_TO_COORD(Entity entity, float x, float y, float z, int flags)
	{
		auto retval = (bool)ENTITY::HAS_ENTITY_CLEAR_LOS_TO_COORD(entity, x, y, z, flags);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Entity FirstEntityIndex, Entity SecondEntityIndex, int traceType)
	{
		auto retval = (bool)ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(FirstEntityIndex, SecondEntityIndex, traceType);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_HAS_ENTITY_COLLIDED_WITH_ANYTHING(Entity EntityIndex)
	{
		auto retval = (bool)ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(EntityIndex);
		return retval;
	}

	static float LUA_NATIVE_ENTITY_0x6D58167F62238284_(Vehicle vehicle)
	{
		auto retval = ENTITY::_0x6D58167F62238284(vehicle);
		return retval;
	}

	static float LUA_NATIVE_ENTITY_0xDFC2B226D56D85F6_(Any p0, Any p1)
	{
		auto retval = ENTITY::_0xDFC2B226D56D85F6(p0, p1);
		return retval;
	}

	static float LUA_NATIVE_ENTITY_GET_ANIM_DURATION(sol::stack_object pAnimDictName, sol::stack_object pAnimName)
	{
		auto retval = ENTITY::GET_ANIM_DURATION(pAnimDictName.is<const char*>() ? pAnimDictName.as<const char*>() : nullptr, pAnimName.is<const char*>() ? pAnimName.as<const char*>() : nullptr);
		return retval;
	}

	static Entity LUA_NATIVE_ENTITY_GET_ENTITY_ATTACHED_TO(Entity EntityIndex)
	{
		auto retval = ENTITY::GET_ENTITY_ATTACHED_TO(EntityIndex);
		return retval;
	}

	static Vector3 LUA_NATIVE_ENTITY_GET_ENTITY_COORDS(Entity EntityIndex, bool DoDeadCheck, bool realCoords)
	{
		auto retval = ENTITY::GET_ENTITY_COORDS(EntityIndex, DoDeadCheck, realCoords);
		return retval;
	}

	static Vector3 LUA_NATIVE_ENTITY_GET_ENTITY_FORWARD_VECTOR(Entity EntityIndex)
	{
		auto retval = ENTITY::GET_ENTITY_FORWARD_VECTOR(EntityIndex);
		return retval;
	}

	static float LUA_NATIVE_ENTITY_GET_ENTITY_FORWARD_X(Entity EntityIndex)
	{
		auto retval = ENTITY::GET_ENTITY_FORWARD_X(EntityIndex);
		return retval;
	}

	static float LUA_NATIVE_ENTITY_GET_ENTITY_FORWARD_Y(Entity EntityIndex)
	{
		auto retval = ENTITY::GET_ENTITY_FORWARD_Y(EntityIndex);
		return retval;
	}

	static Vector3 LUA_NATIVE_ENTITY_GET_ENTITY_FORWARD_VECTOR_YX_(Entity entity)
	{
		auto retval = ENTITY::_GET_ENTITY_FORWARD_VECTOR_YX(entity);
		return retval;
	}

	static float LUA_NATIVE_ENTITY_GET_ENTITY_HEADING(Entity EntityIndex)
	{
		auto retval = ENTITY::GET_ENTITY_HEADING(EntityIndex);
		return retval;
	}

	static int LUA_NATIVE_ENTITY_GET_ENTITY_HEALTH(Entity EntityIndex)
	{
		auto retval = ENTITY::GET_ENTITY_HEALTH(EntityIndex);
		return retval;
	}

	static float LUA_NATIVE_ENTITY_GET_ENTITY_HEALTH_FLOAT_(Entity entity)
	{
		auto retval = ENTITY::_GET_ENTITY_HEALTH_FLOAT(entity);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_CHANGE_ENTITY_HEALTH_(Entity entity, float amount, Entity entity2, Hash weaponHash)
	{
		auto retval = (bool)ENTITY::_CHANGE_ENTITY_HEALTH(entity, amount, entity2, weaponHash);
		return retval;
	}

	static int LUA_NATIVE_ENTITY_GET_ENTITY_MAX_HEALTH(Entity EntityIndex, bool p1)
	{
		auto retval = ENTITY::GET_ENTITY_MAX_HEALTH(EntityIndex, p1);
		return retval;
	}

	static void LUA_NATIVE_ENTITY_SET_ENTITY_MAX_HEALTH(Entity EntityIndex, int Health)
	{
		ENTITY::SET_ENTITY_MAX_HEALTH(EntityIndex, Health);
	}

	static float LUA_NATIVE_ENTITY_GET_ENTITY_HEIGHT(Entity EntityIndex, float PositionX, float PositionY, float PositionZ, bool IsWorldPos, bool WantWorldResult)
	{
		auto retval = ENTITY::GET_ENTITY_HEIGHT(EntityIndex, PositionX, PositionY, PositionZ, IsWorldPos, WantWorldResult);
		return retval;
	}

	static float LUA_NATIVE_ENTITY_GET_ENTITY_HEIGHT_ABOVE_GROUND(Entity EntityIndex)
	{
		auto retval = ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(EntityIndex);
		return retval;
	}

	static std::tuple<Vector3, Vector3> LUA_NATIVE_ENTITY_GET_ENTITY_WORLD_POSITION_OF_DIMENSIONS_(Entity entity, Vector3 minimum, Vector3 maximum)
	{
		std::tuple<Vector3, Vector3> return_values;
		ENTITY::_GET_ENTITY_WORLD_POSITION_OF_DIMENSIONS(entity, &minimum, &maximum);
		std::get<0>(return_values) = minimum;
		std::get<1>(return_values) = maximum;

		return return_values;
	}

	static std::tuple<Vector3, Vector3, Vector3, Vector3> LUA_NATIVE_ENTITY_GET_ENTITY_MATRIX(Entity EntityIndex, Vector3 vFront, Vector3 vSide, Vector3 vUp, Vector3 vPos)
	{
		std::tuple<Vector3, Vector3, Vector3, Vector3> return_values;
		ENTITY::GET_ENTITY_MATRIX(EntityIndex, &vFront, &vSide, &vUp, &vPos);
		std::get<0>(return_values) = vFront;
		std::get<1>(return_values) = vSide;
		std::get<2>(return_values) = vUp;
		std::get<3>(return_values) = vPos;

		return return_values;
	}

	static Hash LUA_NATIVE_ENTITY_GET_ENTITY_MODEL(Entity EntityIndex)
	{
		auto retval = ENTITY::GET_ENTITY_MODEL(EntityIndex);
		return retval;
	}

	static Hash LUA_NATIVE_ENTITY_GET_PED_ANIMAL_TYPE_(Ped ped)
	{
		auto retval = ENTITY::_GET_PED_ANIMAL_TYPE(ped);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_GET_IS_ANIMAL(Entity entity)
	{
		auto retval = (bool)ENTITY::GET_IS_ANIMAL(entity);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_GET_IS_BIRD_(Entity entity)
	{
		auto retval = (bool)ENTITY::_GET_IS_BIRD(entity);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_GET_IS_PREDATOR_(Entity entity)
	{
		auto retval = (bool)ENTITY::_GET_IS_PREDATOR(entity);
		return retval;
	}

	static Vector3 LUA_NATIVE_ENTITY_GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Entity EntityIndex, float VecWorldCoorsX, float VecWorldCoorsY, float VecWorldCoorsZ)
	{
		auto retval = ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(EntityIndex, VecWorldCoorsX, VecWorldCoorsY, VecWorldCoorsZ);
		return retval;
	}

	static Vector3 LUA_NATIVE_ENTITY_GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Entity EntityIndex, float VecNewCoorsX, float VecNewCoorsY, float VecNewCoorsZ)
	{
		auto retval = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(EntityIndex, VecNewCoorsX, VecNewCoorsY, VecNewCoorsZ);
		return retval;
	}

	static float LUA_NATIVE_ENTITY_GET_ENTITY_PITCH(Entity EntityIndex)
	{
		auto retval = ENTITY::GET_ENTITY_PITCH(EntityIndex);
		return retval;
	}

	static float LUA_NATIVE_ENTITY_GET_ENTITY_ROLL(Entity EntityIndex)
	{
		auto retval = ENTITY::GET_ENTITY_ROLL(EntityIndex);
		return retval;
	}

	static Vector3 LUA_NATIVE_ENTITY_GET_ENTITY_ROTATION(Entity EntityIndex, int RotOrder)
	{
		auto retval = ENTITY::GET_ENTITY_ROTATION(EntityIndex, RotOrder);
		return retval;
	}

	static Hash LUA_NATIVE_ENTITY_GET_ENTITY_SCRIPT_(Entity entity, uintptr_t argStruct)
	{
		auto retval = ENTITY::_GET_ENTITY_SCRIPT(entity, (Any*)argStruct);
		return retval;
	}

	static float LUA_NATIVE_ENTITY_GET_ENTITY_SPEED(Entity EntityIndex)
	{
		auto retval = ENTITY::GET_ENTITY_SPEED(EntityIndex);
		return retval;
	}

	static Vector3 LUA_NATIVE_ENTITY_GET_ENTITY_SPEED_VECTOR(Entity EntityIndex, bool bLocalResult)
	{
		auto retval = ENTITY::GET_ENTITY_SPEED_VECTOR(EntityIndex, bLocalResult);
		return retval;
	}

	static float LUA_NATIVE_ENTITY_GET_ENTITY_UPRIGHT_VALUE(Entity EntityIndex)
	{
		auto retval = ENTITY::GET_ENTITY_UPRIGHT_VALUE(EntityIndex);
		return retval;
	}

	static Vector3 LUA_NATIVE_ENTITY_GET_ENTITY_VELOCITY(Entity EntityIndex, int p1)
	{
		auto retval = ENTITY::GET_ENTITY_VELOCITY(EntityIndex, p1);
		return retval;
	}

	static Object LUA_NATIVE_ENTITY_GET_OBJECT_INDEX_FROM_ENTITY_INDEX(Entity EntityIndex)
	{
		auto retval = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(EntityIndex);
		return retval;
	}

	static Ped LUA_NATIVE_ENTITY_GET_PED_INDEX_FROM_ENTITY_INDEX(Entity EntityIndex)
	{
		auto retval = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(EntityIndex);
		return retval;
	}

	static Vehicle LUA_NATIVE_ENTITY_GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Entity EntityIndex)
	{
		auto retval = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(EntityIndex);
		return retval;
	}

	static Vector3 LUA_NATIVE_ENTITY_GET_WORLD_POSITION_OF_ENTITY_BONE(Entity EntityIndex, int iBoneIdx)
	{
		auto retval = ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(EntityIndex, iBoneIdx);
		return retval;
	}

	static Vector3 LUA_NATIVE_ENTITY_0x5E214112806591EA_(Entity entity, int boneIndex)
	{
		auto retval = ENTITY::_0x5E214112806591EA(entity, boneIndex);
		return retval;
	}

	static Vector3 LUA_NATIVE_ENTITY_0x3AB3A77672F6473F_(Any p0, Any p1, Any p2, Any p3)
	{
		auto retval = ENTITY::_0x3AB3A77672F6473F(p0, p1, p2, p3);
		return retval;
	}

	static int LUA_NATIVE_ENTITY_GET_NEAREST_PLAYER_TO_ENTITY(Entity entityIndex, Ped playerPedToIgnore, int flags)
	{
		auto retval = ENTITY::GET_NEAREST_PLAYER_TO_ENTITY(entityIndex, playerPedToIgnore, flags);
		return retval;
	}

	static int LUA_NATIVE_ENTITY_GET_NEAREST_PLAYER_TO_ENTITY_ON_TEAM(Entity entityIndex, int team, Ped playerPedToIgnore, int flags)
	{
		auto retval = ENTITY::GET_NEAREST_PLAYER_TO_ENTITY_ON_TEAM(entityIndex, team, playerPedToIgnore, flags);
		return retval;
	}

	static Player LUA_NATIVE_ENTITY_GET_NEAREST_PARTICIPANT_TO_ENTITY(Entity entity)
	{
		auto retval = ENTITY::GET_NEAREST_PARTICIPANT_TO_ENTITY(entity);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_PLACE_ENTITY_ON_GROUND_PROPERLY(Entity entity, bool p1)
	{
		auto retval = (bool)ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(entity, p1);
		return retval;
	}

	static int LUA_NATIVE_ENTITY_GET_ENTITY_TYPE(Entity EntityIndex)
	{
		auto retval = ENTITY::GET_ENTITY_TYPE(EntityIndex);
		return retval;
	}

	static int LUA_NATIVE_ENTITY_GET_ENTITY_POPULATION_TYPE(Entity EntityIndex)
	{
		auto retval = ENTITY::GET_ENTITY_POPULATION_TYPE(EntityIndex);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_IS_AN_ENTITY(ScrHandle obj)
	{
		auto retval = (bool)ENTITY::IS_AN_ENTITY(obj);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_IS_ENTITY_A_PED(Entity EntityIndex)
	{
		auto retval = (bool)ENTITY::IS_ENTITY_A_PED(EntityIndex);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_IS_ENTITY_A_MISSION_ENTITY(Entity EntityIndex)
	{
		auto retval = (bool)ENTITY::IS_ENTITY_A_MISSION_ENTITY(EntityIndex);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_IS_ENTITY_A_VEHICLE(Entity EntityIndex)
	{
		auto retval = (bool)ENTITY::IS_ENTITY_A_VEHICLE(EntityIndex);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_IS_ENTITY_AN_OBJECT(Entity EntityIndex)
	{
		auto retval = (bool)ENTITY::IS_ENTITY_AN_OBJECT(EntityIndex);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_IS_ENTITY_AT_COORD(Entity EntityIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ, float VecLocDimensionsX, float VecLocDimensionsY, float VecLocDimensionsZ, bool HighlightArea, bool Do3dCheck, int TM_MODE)
	{
		auto retval = (bool)ENTITY::IS_ENTITY_AT_COORD(EntityIndex, VecCoorsX, VecCoorsY, VecCoorsZ, VecLocDimensionsX, VecLocDimensionsY, VecLocDimensionsZ, HighlightArea, Do3dCheck, TM_MODE);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_IS_ENTITY_AT_ENTITY(Entity EntityIndex, Entity TargetEntityIndex, float VecLocDimensionsX, float VecLocDimensionsY, float VecLocDimensionsZ, bool HighlightArea, bool Do3dCheck, int TM_MODE)
	{
		auto retval = (bool)ENTITY::IS_ENTITY_AT_ENTITY(EntityIndex, TargetEntityIndex, VecLocDimensionsX, VecLocDimensionsY, VecLocDimensionsZ, HighlightArea, Do3dCheck, TM_MODE);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_IS_ENTITY_ATTACHED(Entity EntityIndex)
	{
		auto retval = (bool)ENTITY::IS_ENTITY_ATTACHED(EntityIndex);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_IS_ENTITY_ATTACHED_TO_ANY_OBJECT(Entity EntityIndex)
	{
		auto retval = (bool)ENTITY::IS_ENTITY_ATTACHED_TO_ANY_OBJECT(EntityIndex);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_IS_ENTITY_ATTACHED_TO_ANY_PED(Entity EntityIndex)
	{
		auto retval = (bool)ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(EntityIndex);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(Entity EntityIndex)
	{
		auto retval = (bool)ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(EntityIndex);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_IS_ENTITY_ATTACHED_TO_ENTITY(Entity EntityIndex1, Entity EntityIndex2)
	{
		auto retval = (bool)ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(EntityIndex1, EntityIndex2);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_IS_ENTITY_OWNED_BY_PERSISTENCE_SYSTEM_(Entity entity)
	{
		auto retval = (bool)ENTITY::_IS_ENTITY_OWNED_BY_PERSISTENCE_SYSTEM(entity);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_IS_ENTITY_DEAD(Entity EntityIndex)
	{
		auto retval = (bool)ENTITY::IS_ENTITY_DEAD(EntityIndex);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_IS_ENTITY_IN_AIR(Entity EntityIndex, Any p1)
	{
		auto retval = (bool)ENTITY::IS_ENTITY_IN_AIR(EntityIndex, p1);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_IS_ENTITY_IN_ANGLED_AREA(Entity EntityIndex, float VecCoors1X, float VecCoors1Y, float VecCoors1Z, float VecCoors2X, float VecCoors2Y, float VecCoors2Z, float AreaWidth, bool HighlightArea, bool Do3dCheck, int TM_MODE)
	{
		auto retval = (bool)ENTITY::IS_ENTITY_IN_ANGLED_AREA(EntityIndex, VecCoors1X, VecCoors1Y, VecCoors1Z, VecCoors2X, VecCoors2Y, VecCoors2Z, AreaWidth, HighlightArea, Do3dCheck, TM_MODE);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_IS_ENTITY_IN_AREA(Entity EntityIndex, float VecCoors1X, float VecCoors1Y, float VecCoors1Z, float VecCoors2X, float VecCoors2Y, float VecCoors2Z, bool HighlightArea, bool Do3dCheck, int TM_MODE)
	{
		auto retval = (bool)ENTITY::IS_ENTITY_IN_AREA(EntityIndex, VecCoors1X, VecCoors1Y, VecCoors1Z, VecCoors2X, VecCoors2Y, VecCoors2Z, HighlightArea, Do3dCheck, TM_MODE);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_IS_ENTITY_IN_VOLUME(Entity entity, ScrHandle volume, bool p2, int p3)
	{
		auto retval = (bool)ENTITY::IS_ENTITY_IN_VOLUME(entity, volume, p2, p3);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_IS_ENTITY_IN_WATER(Entity EntityIndex)
	{
		auto retval = (bool)ENTITY::IS_ENTITY_IN_WATER(EntityIndex);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_IS_ENTITY_UNDERWATER_(Entity entity, bool p1)
	{
		auto retval = (bool)ENTITY::_IS_ENTITY_UNDERWATER(entity, p1);
		return retval;
	}

	static float LUA_NATIVE_ENTITY_GET_ENTITY_SUBMERGED_LEVEL(Entity EntityIndex)
	{
		auto retval = ENTITY::GET_ENTITY_SUBMERGED_LEVEL(EntityIndex);
		return retval;
	}

	static void LUA_NATIVE_ENTITY_SET_ENTITY_REQUIRES_MORE_EXPENSIVE_RIVER_CHECK(Entity EntityIndex, bool FlagValue)
	{
		ENTITY::SET_ENTITY_REQUIRES_MORE_EXPENSIVE_RIVER_CHECK(EntityIndex, FlagValue);
	}

	static void LUA_NATIVE_ENTITY_0x7A49D40DE437BC8D_(Any p0, Any p1)
	{
		ENTITY::_0x7A49D40DE437BC8D(p0, p1);
	}

	static void LUA_NATIVE_ENTITY_0x978AA2323ED32209_(Any p0, Any p1)
	{
		ENTITY::_0x978AA2323ED32209(p0, p1);
	}

	static void LUA_NATIVE_ENTITY_0x002AAC783ED323ED_(Any p0, Any p1)
	{
		ENTITY::_0x002AAC783ED323ED(p0, p1);
	}

	static void LUA_NATIVE_ENTITY_0x007AAC783ED323ED_(Any p0, Any p1, Any p2)
	{
		ENTITY::_0x007AAC783ED323ED(p0, p1, p2);
	}

	static bool LUA_NATIVE_ENTITY_IS_ENTITY_ON_SCREEN(Entity EntityIndex)
	{
		auto retval = (bool)ENTITY::IS_ENTITY_ON_SCREEN(EntityIndex);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_IS_ENTITY_PLAYING_ANIM(Entity EntityIndex, sol::stack_object AnimDictName, sol::stack_object AnimName, int type)
	{
		auto retval = (bool)ENTITY::IS_ENTITY_PLAYING_ANIM(EntityIndex, AnimDictName.is<const char*>() ? AnimDictName.as<const char*>() : nullptr, AnimName.is<const char*>() ? AnimName.as<const char*>() : nullptr, type);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_IS_ENTITY_PLAYING_ANY_ANIM_(Entity entity, int p1)
	{
		auto retval = (bool)ENTITY::_IS_ENTITY_PLAYING_ANY_ANIM(entity, p1);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_IS_ENTITY_STATIC(Entity EntityIndex)
	{
		auto retval = (bool)ENTITY::IS_ENTITY_STATIC(EntityIndex);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_IS_ENTITY_TOUCHING_ENTITY(Entity FirstEntityIndex, Entity SecondEntityIndex)
	{
		auto retval = (bool)ENTITY::IS_ENTITY_TOUCHING_ENTITY(FirstEntityIndex, SecondEntityIndex);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_IS_ENTITY_TOUCHING_MODEL(Entity EntityIndex, Hash ModelHashKey)
	{
		auto retval = (bool)ENTITY::IS_ENTITY_TOUCHING_MODEL(EntityIndex, ModelHashKey);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_IS_ENTITY_UPRIGHT(Entity EntityIndex, float fAngleToVerticalLimit)
	{
		auto retval = (bool)ENTITY::IS_ENTITY_UPRIGHT(EntityIndex, fAngleToVerticalLimit);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_IS_ENTITY_UPSIDEDOWN(Entity EntityIndex)
	{
		auto retval = (bool)ENTITY::IS_ENTITY_UPSIDEDOWN(EntityIndex);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_IS_ENTITY_VISIBLE(Entity EntityIndex)
	{
		auto retval = (bool)ENTITY::IS_ENTITY_VISIBLE(EntityIndex);
		return retval;
	}

	static void LUA_NATIVE_ENTITY_0xFF9965C47FA404DA_(Entity entity, bool toggle)
	{
		ENTITY::_0xFF9965C47FA404DA(entity, toggle);
	}

	static bool LUA_NATIVE_ENTITY_IS_ENTITY_VISIBLE_TO_SCRIPT(Entity EntityIndex)
	{
		auto retval = (bool)ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(EntityIndex);
		return retval;
	}

	static void LUA_NATIVE_ENTITY_0x3F08C6163A4AB1D6_(Any p0)
	{
		ENTITY::_0x3F08C6163A4AB1D6(p0);
	}

	static void LUA_NATIVE_ENTITY_0x0DB41D59E0F1502B_(Any p0)
	{
		ENTITY::_0x0DB41D59E0F1502B(p0);
	}

	static bool LUA_NATIVE_ENTITY_IS_TRACKED_ENTITY_VISIBLE_(Entity entity)
	{
		auto retval = (bool)ENTITY::_IS_TRACKED_ENTITY_VISIBLE(entity);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_IS_ENTITY_OCCLUDED(Entity EntityIndex)
	{
		auto retval = (bool)ENTITY::IS_ENTITY_OCCLUDED(EntityIndex);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_WOULD_ENTITY_BE_OCCLUDED(Hash ModelHashKey, float CoordsX, float CoordsY, float CoordsZ, bool bAssertIfModelIsntLoaded)
	{
		auto retval = (bool)ENTITY::WOULD_ENTITY_BE_OCCLUDED(ModelHashKey, CoordsX, CoordsY, CoordsZ, bAssertIfModelIsntLoaded);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_IS_ENTITY_WAITING_FOR_WORLD_COLLISION(Entity EntityIndex)
	{
		auto retval = (bool)ENTITY::IS_ENTITY_WAITING_FOR_WORLD_COLLISION(EntityIndex);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_IS_ENTITY_ON_TRAIN_TRACK_(Entity entity)
	{
		auto retval = (bool)ENTITY::_IS_ENTITY_ON_TRAIN_TRACK(entity);
		return retval;
	}

	static void LUA_NATIVE_ENTITY_0xCDB682BB47C02F0A_(Entity entity, Hash p1)
	{
		ENTITY::_0xCDB682BB47C02F0A(entity, p1);
	}

	static void LUA_NATIVE_ENTITY_0xE19035EB65AB2932_(Any p0, Any p1)
	{
		ENTITY::_0xE19035EB65AB2932(p0, p1);
	}

	static bool LUA_NATIVE_ENTITY_SCRIPT_OVERRIDE_ENTITY_LOOT_TABLE_PERMANENT(Entity entity, Hash lootTable)
	{
		auto retval = (bool)ENTITY::SCRIPT_OVERRIDE_ENTITY_LOOT_TABLE_PERMANENT(entity, lootTable);
		return retval;
	}

	static std::tuple<bool, Hash> LUA_NATIVE_ENTITY_GET_SCRIPT_OVERRIDE_ENTITY_LOOT_TABLE_PERMANENT_(Entity entity, Hash lootTable)
	{
		std::tuple<bool, Hash> return_values;
		std::get<0>(return_values) = (bool)ENTITY::_GET_SCRIPT_OVERRIDE_ENTITY_LOOT_TABLE_PERMANENT(entity, &lootTable);
		std::get<1>(return_values) = lootTable;

		return return_values;
	}

	static bool LUA_NATIVE_ENTITY_REQUEST_ENTITY_LOOT_LIST_(Ped mount, uintptr_t argStruct, Hash visiblelootslotrequestType, int flag, int p4, bool p5)
	{
		auto retval = (bool)ENTITY::_REQUEST_ENTITY_LOOT_LIST(mount, (Any*)argStruct, visiblelootslotrequestType, flag, p4, p5);
		return retval;
	}

	static Any LUA_NATIVE_ENTITY_0xE31FC20319874CB3_(Any p0, Any p1, Any p2)
	{
		auto retval = ENTITY::_0xE31FC20319874CB3(p0, p1, p2);
		return retval;
	}

	static Any LUA_NATIVE_ENTITY_0x582F73ACFE969571_(Any p0, Any p1, Any p2)
	{
		auto retval = ENTITY::_0x582F73ACFE969571(p0, p1, p2);
		return retval;
	}

	static Any LUA_NATIVE_ENTITY_0xBA2A089E60ED1163_(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		auto retval = ENTITY::_0xBA2A089E60ED1163(p0, p1, p2, p3, p4);
		return retval;
	}

	static int LUA_NATIVE_ENTITY_GET_CARRIABLE_ENTITY_STATE(Entity entity)
	{
		auto retval = ENTITY::GET_CARRIABLE_ENTITY_STATE(entity);
		return retval;
	}

	static Any LUA_NATIVE_ENTITY_0xD46BF94C4C66FAB0_(Any p0, Any p1, Any p2, Any p3)
	{
		auto retval = ENTITY::_0xD46BF94C4C66FAB0(p0, p1, p2, p3);
		return retval;
	}

	static Hash LUA_NATIVE_ENTITY_GET_OPTIMAL_CARRY_CONFIG_(Entity entity, int index)
	{
		auto retval = ENTITY::_GET_OPTIMAL_CARRY_CONFIG(entity, index);
		return retval;
	}

	static Any LUA_NATIVE_ENTITY_0xD21C7418C590BB40_(Any p0)
	{
		auto retval = ENTITY::_0xD21C7418C590BB40(p0);
		return retval;
	}

	static Hash LUA_NATIVE_ENTITY_GET_ENTITY_CARRY_CONFIG_(Entity entity)
	{
		auto retval = ENTITY::_GET_ENTITY_CARRY_CONFIG(entity);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_IS_CARRIABLE_MODEL_(Hash model)
	{
		auto retval = (bool)ENTITY::_IS_CARRIABLE_MODEL(model);
		return retval;
	}

	static Hash LUA_NATIVE_ENTITY_GET_CARRIABLE_FROM_ENTITY_(Entity entity)
	{
		auto retval = ENTITY::_GET_CARRIABLE_FROM_ENTITY(entity);
		return retval;
	}

	static void LUA_NATIVE_ENTITY_SET_ENTITY_CARCASS_TYPE_(Entity entity, Hash type)
	{
		ENTITY::_SET_ENTITY_CARCASS_TYPE(entity, type);
	}

	static Any LUA_NATIVE_ENTITY_0x2A77EF9BEC8518F4_(Any p0)
	{
		auto retval = ENTITY::_0x2A77EF9BEC8518F4(p0);
		return retval;
	}

	static Entity LUA_NATIVE_ENTITY_DELETE_CARRIABLE_(Entity entity)
	{
		ENTITY::_DELETE_CARRIABLE(&entity);
		return entity;
	}

	static bool LUA_NATIVE_ENTITY_IS_ENTITY_FULLY_LOOTED_(Entity entity)
	{
		auto retval = (bool)ENTITY::_IS_ENTITY_FULLY_LOOTED(entity);
		return retval;
	}

	static void LUA_NATIVE_ENTITY_SET_ENTITY_FULLY_LOOTED_(Entity entity, bool looted)
	{
		ENTITY::_SET_ENTITY_FULLY_LOOTED(entity, looted);
	}

	static Ped LUA_NATIVE_ENTITY_0xEF2D9ED7CE684F08_(Ped ped)
	{
		auto retval = ENTITY::_0xEF2D9ED7CE684F08(ped);
		return retval;
	}

	static Any LUA_NATIVE_ENTITY_0x0CCEFC6C2C95DA2A_(Any p0, Any p1, Any p2, Any p3)
	{
		auto retval = ENTITY::_0x0CCEFC6C2C95DA2A(p0, p1, p2, p3);
		return retval;
	}

	static std::tuple<bool, int> LUA_NATIVE_ENTITY_0x383F64263F946E45_(int p0, Entity entity, int p2, Ped ped, Any p4, int p5)
	{
		std::tuple<bool, int> return_values;
		std::get<0>(return_values) = (bool)ENTITY::_0x383F64263F946E45(&p0, entity, p2, ped, p4, p5);
		std::get<1>(return_values) = p0;

		return return_values;
	}

	static Any LUA_NATIVE_ENTITY_0x8E10DF0FFA63FB65_(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		auto retval = ENTITY::_0x8E10DF0FFA63FB65(p0, p1, p2, p3, p4);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_GET_ENTITY_CARRYING_FLAG_(Entity entity, int flagId)
	{
		auto retval = (bool)ENTITY::_GET_ENTITY_CARRYING_FLAG(entity, flagId);
		return retval;
	}

	static void LUA_NATIVE_ENTITY_SET_ENTITY_CARRYING_FLAG_(Entity entity, int flagId, bool value)
	{
		ENTITY::_SET_ENTITY_CARRYING_FLAG(entity, flagId, value);
	}

	static void LUA_NATIVE_ENTITY_0xC3ABCFBC7D74AFA5_(Ped ped, int p1, bool p2)
	{
		ENTITY::_0xC3ABCFBC7D74AFA5(ped, p1, p2);
	}

	static void LUA_NATIVE_ENTITY_0x371D179701D9C082_(Entity entity)
	{
		ENTITY::_0x371D179701D9C082(entity);
	}

	static void LUA_NATIVE_ENTITY_0xA48E4801DEBDF7E4_(Entity entity, bool p1)
	{
		ENTITY::_0xA48E4801DEBDF7E4(entity, p1);
	}

	static bool LUA_NATIVE_ENTITY_GET_IS_CARRIABLE_PELT_(Entity entity)
	{
		auto retval = (bool)ENTITY::_GET_IS_CARRIABLE_PELT(entity);
		return retval;
	}

	static Any LUA_NATIVE_ENTITY_0xF59FDE7B4D31A630_(Any p0)
	{
		auto retval = ENTITY::_0xF59FDE7B4D31A630(p0);
		return retval;
	}

	static Any LUA_NATIVE_ENTITY_0x120376C23F019C6C_(Any p0, Any p1)
	{
		auto retval = ENTITY::_0x120376C23F019C6C(p0, p1);
		return retval;
	}

	static Any LUA_NATIVE_ENTITY_0x5744562E973E33CD_(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		auto retval = ENTITY::_0x5744562E973E33CD(p0, p1, p2, p3, p4);
		return retval;
	}

	static void LUA_NATIVE_ENTITY_0xDD03FC2089AD093C_(Any p0, Any p1, Any p2, Any p3)
	{
		ENTITY::_0xDD03FC2089AD093C(p0, p1, p2, p3);
	}

	static Any LUA_NATIVE_ENTITY_0xB16C780C51E51E2B_(Any p0)
	{
		auto retval = ENTITY::_0xB16C780C51E51E2B(p0);
		return retval;
	}

	static void LUA_NATIVE_ENTITY_0xEF259AA1E097E0AD_(Entity entity, Any p1)
	{
		ENTITY::_0xEF259AA1E097E0AD(entity, p1);
	}

	static void LUA_NATIVE_ENTITY_0xBD94CECFB2D65119_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		ENTITY::_0xBD94CECFB2D65119(p0, p1, p2, p3, p4, p5);
	}

	static void LUA_NATIVE_ENTITY_SET_ENTITY_CUSTOM_PICKUP_RADIUS_(Entity entity, float radius)
	{
		ENTITY::_SET_ENTITY_CUSTOM_PICKUP_RADIUS(entity, radius);
	}

	static void LUA_NATIVE_ENTITY_0xE75EEA8DB59A9F39_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		ENTITY::_0xE75EEA8DB59A9F39(p0, p1, p2, p3, p4, p5);
	}

	static Any LUA_NATIVE_ENTITY_0x188736456D1DEDE6_(Any p0, Any p1)
	{
		auto retval = ENTITY::_0x188736456D1DEDE6(p0, p1);
		return retval;
	}

	static void LUA_NATIVE_ENTITY_0xC6A1A3D63F122DE7_(Any p0, Any p1)
	{
		ENTITY::_0xC6A1A3D63F122DE7(p0, p1);
	}

	static void LUA_NATIVE_ENTITY_APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Entity EntityIndex, int ApplyType, float vForceX, float vForceY, float vForceZ, int Component, bool LocalForce, bool ScaleByMass, bool applyToChildren)
	{
		ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(EntityIndex, ApplyType, vForceX, vForceY, vForceZ, Component, LocalForce, ScaleByMass, applyToChildren);
	}

	static void LUA_NATIVE_ENTITY_APPLY_FORCE_TO_ENTITY(Entity EntityIndex, int ApplyType, float vForceX, float vForceY, float vForceZ, float vOffsetX, float vOffsetY, float vOffsetZ, int Component, bool LocalForce, bool LocalOffset, bool ScaleByMass, bool triggerAudio, bool ScaleByTimeWarp)
	{
		ENTITY::APPLY_FORCE_TO_ENTITY(EntityIndex, ApplyType, vForceX, vForceY, vForceZ, vOffsetX, vOffsetY, vOffsetZ, Component, LocalForce, LocalOffset, ScaleByMass, triggerAudio, ScaleByTimeWarp);
	}

	static void LUA_NATIVE_ENTITY_ATTACH_ENTITY_TO_ENTITY(Entity FirstEntityIndex, Entity SecondEntityIndex, int SecondEntityBoneIndex, float vecOffsetX, float vecOffsetY, float vecOffsetZ, float vecRotationX, float vecRotationY, float vecRotationZ, bool p9, bool useSoftPinning, bool collision, bool isPed, int RotOrder, bool bAttachOffsetIsRelative, bool p15, bool p16)
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY(FirstEntityIndex, SecondEntityIndex, SecondEntityBoneIndex, vecOffsetX, vecOffsetY, vecOffsetZ, vecRotationX, vecRotationY, vecRotationZ, p9, useSoftPinning, collision, isPed, RotOrder, bAttachOffsetIsRelative, p15, p16);
	}

	static void LUA_NATIVE_ENTITY_ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(Entity FirstEntityIndex, Entity SecondEntityIndex, int FirstEntityBoneIndex, int SecondEntityBoneIndex, float SecondEntityOffsetX, float SecondEntityOffsetY, float SecondEntityOffsetZ, float FirstEntityOffsetX, float FirstEntityOffsetY, float FirstEntityOffsetZ, float vecRotationX, float vecRotationY, float vecRotationZ, float PhysicalStrength, bool p14, bool p15, bool p16, bool p17, int RotOrder, bool p19, float p20, float p21)
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(FirstEntityIndex, SecondEntityIndex, FirstEntityBoneIndex, SecondEntityBoneIndex, SecondEntityOffsetX, SecondEntityOffsetY, SecondEntityOffsetZ, FirstEntityOffsetX, FirstEntityOffsetY, FirstEntityOffsetZ, vecRotationX, vecRotationY, vecRotationZ, PhysicalStrength, p14, p15, p16, p17, RotOrder, p19, p20, p21);
	}

	static void LUA_NATIVE_ENTITY_0x445D7D8EA66E373E_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15)
	{
		ENTITY::_0x445D7D8EA66E373E(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15);
	}

	static void LUA_NATIVE_ENTITY_0x16908E859C3AB698_(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		ENTITY::_0x16908E859C3AB698(p0, p1, p2, p3, p4);
	}

	static int LUA_NATIVE_ENTITY_GET_ENTITY_BONE_INDEX_BY_NAME(Entity EntityIndex, sol::stack_object BoneName)
	{
		auto retval = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(EntityIndex, BoneName.is<const char*>() ? BoneName.as<const char*>() : nullptr);
		return retval;
	}

	static void LUA_NATIVE_ENTITY_CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Entity EntityIndex)
	{
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(EntityIndex);
	}

	static Entity LUA_NATIVE_ENTITY_DELETE_ENTITY(Entity EntityIndex)
	{
		ENTITY::DELETE_ENTITY(&EntityIndex);
		return EntityIndex;
	}

	static Entity LUA_NATIVE_ENTITY_DELETE_ENTITY_2_(Entity entity)
	{
		ENTITY::_DELETE_ENTITY_2(&entity);
		return entity;
	}

	static void LUA_NATIVE_ENTITY_DETACH_ENTITY(Entity EntityIndex, bool ApplyVelocity, bool bNoCollisionUntilClear)
	{
		ENTITY::DETACH_ENTITY(EntityIndex, ApplyVelocity, bNoCollisionUntilClear);
	}

	static bool LUA_NATIVE_ENTITY_IS_ENTITY_FROZEN_(Entity entity)
	{
		auto retval = (bool)ENTITY::_IS_ENTITY_FROZEN(entity);
		return retval;
	}

	static void LUA_NATIVE_ENTITY_FREEZE_ENTITY_POSITION(Entity EntityIndex, bool FrozenByScriptFlag)
	{
		ENTITY::FREEZE_ENTITY_POSITION(EntityIndex, FrozenByScriptFlag);
	}

	static void LUA_NATIVE_ENTITY_SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Entity EntityIndex, bool ShouldFreeze)
	{
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(EntityIndex, ShouldFreeze);
	}

	static void LUA_NATIVE_ENTITY_SET_ENTITY_AS_MISSION_ENTITY(Entity EntityIndex, bool ScriptHostObject, bool GrabFromOtherScript)
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(EntityIndex, ScriptHostObject, GrabFromOtherScript);
	}

	static Entity LUA_NATIVE_ENTITY_SET_ENTITY_AS_NO_LONGER_NEEDED(Entity EntityIndex)
	{
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&EntityIndex);
		return EntityIndex;
	}

	static Ped LUA_NATIVE_ENTITY_SET_PED_AS_NO_LONGER_NEEDED(Ped PedIndex)
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&PedIndex);
		return PedIndex;
	}

	static Vehicle LUA_NATIVE_ENTITY_SET_VEHICLE_AS_NO_LONGER_NEEDED(Vehicle VehicleIndex)
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&VehicleIndex);
		return VehicleIndex;
	}

	static Object LUA_NATIVE_ENTITY_SET_OBJECT_AS_NO_LONGER_NEEDED(Object ObjectIndex)
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&ObjectIndex);
		return ObjectIndex;
	}

	static void LUA_NATIVE_ENTITY_0x20FAEE47427A4497_()
	{
		ENTITY::_0x20FAEE47427A4497();
	}

	static bool LUA_NATIVE_ENTITY_DOES_THREAD_OWN_THIS_ENTITY_(Entity entity)
	{
		auto retval = (bool)ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(entity);
		return retval;
	}

	static void LUA_NATIVE_ENTITY_0x56E0735D6273B227_(Any p0, Any p1)
	{
		ENTITY::_0x56E0735D6273B227(p0, p1);
	}

	static void LUA_NATIVE_ENTITY_0xC0EDEF16D90661EE_(Entity entity, float p1)
	{
		ENTITY::_0xC0EDEF16D90661EE(entity, p1);
	}

	static void LUA_NATIVE_ENTITY_0x0FD7D7C232876E72_(Any p0)
	{
		ENTITY::_0x0FD7D7C232876E72(p0);
	}

	static void LUA_NATIVE_ENTITY_0x0939E773925C4719_()
	{
		ENTITY::_0x0939E773925C4719();
	}

	static void LUA_NATIVE_ENTITY_SET_ENTITY_CAN_BE_DAMAGED(Entity EntityIndex, bool CanBeDamagedFlag)
	{
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(EntityIndex, CanBeDamagedFlag);
	}

	static bool LUA_NATIVE_ENTITY_GET_ENTITY_CAN_BE_DAMAGED_(Entity entity)
	{
		auto retval = (bool)ENTITY::_GET_ENTITY_CAN_BE_DAMAGED(entity);
		return retval;
	}

	static void LUA_NATIVE_ENTITY_SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Entity EntityIndex, bool AllowDamagedByRelGroup, Hash relGroup)
	{
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(EntityIndex, AllowDamagedByRelGroup, relGroup);
	}

	static void LUA_NATIVE_ENTITY_0xFF83AF534156B399_(Any p0, Any p1)
	{
		ENTITY::_0xFF83AF534156B399(p0, p1);
	}

	static void LUA_NATIVE_ENTITY_SET_ENTITY_CAN_BE_TARGETED_WITHOUT_LOS(Entity EntityIndex, bool TargettableWithNoLos)
	{
		ENTITY::SET_ENTITY_CAN_BE_TARGETED_WITHOUT_LOS(EntityIndex, TargettableWithNoLos);
	}

	static bool LUA_NATIVE_ENTITY_GET_ENTITY_COLLISION_DISABLED(Entity EntityIndex)
	{
		auto retval = (bool)ENTITY::GET_ENTITY_COLLISION_DISABLED(EntityIndex);
		return retval;
	}

	static void LUA_NATIVE_ENTITY_SET_ENTITY_COLLISION(Entity EntityIndex, bool UsesCollisionsFlag, bool KeepDisabledSimulatingFlag)
	{
		ENTITY::SET_ENTITY_COLLISION(EntityIndex, UsesCollisionsFlag, KeepDisabledSimulatingFlag);
	}

	static void LUA_NATIVE_ENTITY_SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Entity EntityIndex, bool UsesCollisionsFlag, bool KeepDisabledSimulatingFlag)
	{
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(EntityIndex, UsesCollisionsFlag, KeepDisabledSimulatingFlag);
	}

	static void LUA_NATIVE_ENTITY_SET_ENTITY_COORDS(Entity EntityIndex, float VecNewCoorsX, float VecNewCoorsY, float VecNewCoorsZ, bool DoDeadCheck, bool KeepTasks, bool KeepIK, bool DoWarp)
	{
		ENTITY::SET_ENTITY_COORDS(EntityIndex, VecNewCoorsX, VecNewCoorsY, VecNewCoorsZ, DoDeadCheck, KeepTasks, KeepIK, DoWarp);
	}

	static void LUA_NATIVE_ENTITY_SET_ENTITY_COORDS_NO_OFFSET(Entity EntityIndex, float VecNewCoorsX, float VecNewCoorsY, float VecNewCoorsZ, bool KeepTasks, bool KeepIK, bool DoWarp)
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(EntityIndex, VecNewCoorsX, VecNewCoorsY, VecNewCoorsZ, KeepTasks, KeepIK, DoWarp);
	}

	static void LUA_NATIVE_ENTITY_SET_ENTITY_DYNAMIC(Entity EntityIndex, bool IsDynamic)
	{
		ENTITY::SET_ENTITY_DYNAMIC(EntityIndex, IsDynamic);
	}

	static void LUA_NATIVE_ENTITY_SET_ENTITY_HEADING(Entity EntityIndex, float NewHeading)
	{
		ENTITY::SET_ENTITY_HEADING(EntityIndex, NewHeading);
	}

	static void LUA_NATIVE_ENTITY_SET_ENTITY_COORDS_AND_HEADING_(Entity entity, float xPos, float yPos, float zPos, float heading, bool xAxis, bool yAxis, bool zAxis)
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(entity, xPos, yPos, zPos, heading, xAxis, yAxis, zAxis);
	}

	static void LUA_NATIVE_ENTITY_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET_(Entity entity, float xPos, float yPos, float zPos, float heading, bool p5, bool p6)
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(entity, xPos, yPos, zPos, heading, p5, p6);
	}

	static void LUA_NATIVE_ENTITY_SET_ENTITY_HEALTH(Entity entity, int healthAmount, Entity entityKilledBy)
	{
		ENTITY::SET_ENTITY_HEALTH(entity, healthAmount, entityKilledBy);
	}

	static void LUA_NATIVE_ENTITY_SET_ENTITY_INVINCIBLE(Entity EntityIndex, bool bInvincible)
	{
		ENTITY::SET_ENTITY_INVINCIBLE(EntityIndex, bInvincible);
	}

	static void LUA_NATIVE_ENTITY_0xAF7F3099B9FEB535_(Entity entity, float p1, float p2, float p3)
	{
		ENTITY::_0xAF7F3099B9FEB535(entity, p1, p2, p3);
	}

	static void LUA_NATIVE_ENTITY_SET_ENTITY_IS_TARGET_PRIORITY(Entity EntityIndex, bool bHighPriority, float fTargetableDistance)
	{
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(EntityIndex, bHighPriority, fTargetableDistance);
	}

	static void LUA_NATIVE_ENTITY_0xB38A29CCD5447783_(Any p0, Any p1, Any p2)
	{
		ENTITY::_0xB38A29CCD5447783(p0, p1, p2);
	}

	static void LUA_NATIVE_ENTITY_SET_ENTITY_THREAT_TIER_(Entity entity, int tier, bool p2)
	{
		ENTITY::_SET_ENTITY_THREAT_TIER(entity, tier, p2);
	}

	static int LUA_NATIVE_ENTITY_GET_ENTITY_THREAT_TIER_(Entity entity)
	{
		auto retval = ENTITY::_GET_ENTITY_THREAT_TIER(entity);
		return retval;
	}

	static void LUA_NATIVE_ENTITY_0x2D40BCBFE9305DEA_(Any p0, Any p1)
	{
		ENTITY::_0x2D40BCBFE9305DEA(p0, p1);
	}

	static void LUA_NATIVE_ENTITY_SET_ENTITY_LIGHTS_ENABLED_(Entity entity, bool enabled)
	{
		ENTITY::_SET_ENTITY_LIGHTS_ENABLED(entity, enabled);
	}

	static void LUA_NATIVE_ENTITY_SET_ENTITY_LOAD_COLLISION_FLAG(Entity EntityIndex, bool LoadCollisionFlag)
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(EntityIndex, LoadCollisionFlag);
	}

	static bool LUA_NATIVE_ENTITY_HAS_COLLISION_LOADED_AROUND_ENTITY(Entity EntityIndex)
	{
		auto retval = (bool)ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(EntityIndex);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_HAS_COLLISION_LOADED_AROUND_POSITION(float xPos, float yPos, float zPos)
	{
		auto retval = (bool)ENTITY::HAS_COLLISION_LOADED_AROUND_POSITION(xPos, yPos, zPos);
		return retval;
	}

	static void LUA_NATIVE_ENTITY_SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Entity EntityIndex, bool OnlyDamagedByPlayer)
	{
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(EntityIndex, OnlyDamagedByPlayer);
	}

	static void LUA_NATIVE_ENTITY_SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(Entity EntityIndex, bool OnlyDamagedByRelGroup, Hash relGroup)
	{
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(EntityIndex, OnlyDamagedByRelGroup, relGroup);
	}

	static void LUA_NATIVE_ENTITY_SET_ENTITY_PROOFS(Entity EntityIndex, int proofsBitset, bool specialFlag)
	{
		ENTITY::SET_ENTITY_PROOFS(EntityIndex, proofsBitset, specialFlag);
	}

	static int LUA_NATIVE_ENTITY_GET_ENTITY_PROOFS_(Entity entity)
	{
		auto retval = ENTITY::_GET_ENTITY_PROOFS(entity);
		return retval;
	}

	static void LUA_NATIVE_ENTITY_SET_ENTITY_QUATERNION(Entity EntityIndex, float NewX, float NewY, float NewZ, float NewW)
	{
		ENTITY::SET_ENTITY_QUATERNION(EntityIndex, NewX, NewY, NewZ, NewW);
	}

	static void LUA_NATIVE_ENTITY_SET_ENTITY_ROTATION(Entity EntityIndex, float VecNewRotationX, float VecNewRotationY, float VecNewRotationZ, int RotOrder, bool DoDeadCheck)
	{
		ENTITY::SET_ENTITY_ROTATION(EntityIndex, VecNewRotationX, VecNewRotationY, VecNewRotationZ, RotOrder, DoDeadCheck);
	}

	static void LUA_NATIVE_ENTITY_0xD45BB89B53FC0CFD_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		ENTITY::_0xD45BB89B53FC0CFD(p0, p1, p2, p3, p4, p5, p6, p7);
	}

	static void LUA_NATIVE_ENTITY_SET_ENTITY_VISIBLE(Entity EntityIndex, bool VisibleFlag)
	{
		ENTITY::SET_ENTITY_VISIBLE(EntityIndex, VisibleFlag);
	}

	static void LUA_NATIVE_ENTITY_0x80FDEB3A9E9AA578_(Entity entity, bool p1)
	{
		ENTITY::_0x80FDEB3A9E9AA578(entity, p1);
	}

	static void LUA_NATIVE_ENTITY_0x9C6906EF8CB20C5F_(Entity entity)
	{
		ENTITY::_0x9C6906EF8CB20C5F(entity);
	}

	static void LUA_NATIVE_ENTITY_SET_ENTITY_VELOCITY(Entity EntityIndex, float VecVelocityComponenttX, float VecVelocityComponenttY, float VecVelocityComponenttZ)
	{
		ENTITY::SET_ENTITY_VELOCITY(EntityIndex, VecVelocityComponenttX, VecVelocityComponenttY, VecVelocityComponenttZ);
	}

	static void LUA_NATIVE_ENTITY_SET_ENTITY_HAS_GRAVITY(Entity EntityIndex, bool bHasGravity)
	{
		ENTITY::SET_ENTITY_HAS_GRAVITY(EntityIndex, bHasGravity);
	}

	static void LUA_NATIVE_ENTITY_SET_ENTITY_LOD_DIST(Entity entityIndex, int lodDist)
	{
		ENTITY::SET_ENTITY_LOD_DIST(entityIndex, lodDist);
	}

	static int LUA_NATIVE_ENTITY_GET_ENTITY_LOD_DIST(Entity entityIndex)
	{
		auto retval = ENTITY::GET_ENTITY_LOD_DIST(entityIndex);
		return retval;
	}

	static void LUA_NATIVE_ENTITY_SET_ENTITY_ALPHA(Entity entityIndex, int alpha_param, bool bUseSmoothAlpha)
	{
		ENTITY::SET_ENTITY_ALPHA(entityIndex, alpha_param, bUseSmoothAlpha);
	}

	static int LUA_NATIVE_ENTITY_GET_ENTITY_ALPHA(Entity entityIndex)
	{
		auto retval = ENTITY::GET_ENTITY_ALPHA(entityIndex);
		return retval;
	}

	static void LUA_NATIVE_ENTITY_RESET_ENTITY_ALPHA(Entity entityIndex)
	{
		ENTITY::RESET_ENTITY_ALPHA(entityIndex);
	}

	static void LUA_NATIVE_ENTITY_SET_ENTITY_FADE_IN_(Entity entity)
	{
		ENTITY::_SET_ENTITY_FADE_IN(entity);
	}

	static void LUA_NATIVE_ENTITY_SET_ENTITY_ALWAYS_PRERENDER(Entity entityIndex, bool bAlwaysPreRender)
	{
		ENTITY::SET_ENTITY_ALWAYS_PRERENDER(entityIndex, bAlwaysPreRender);
	}

	static void LUA_NATIVE_ENTITY_SET_ENTITY_RENDER_SCORCHED(Entity entityIndex, bool bRenderScorched)
	{
		ENTITY::SET_ENTITY_RENDER_SCORCHED(entityIndex, bRenderScorched);
	}

	static Any LUA_NATIVE_ENTITY_0x37B01666BAE8F7EF_(Entity entity)
	{
		auto retval = ENTITY::_0x37B01666BAE8F7EF(entity);
		return retval;
	}

	static void LUA_NATIVE_ENTITY_0xA9E6D8F2DDFC4DB9_(Any p0, Any p1)
	{
		ENTITY::_0xA9E6D8F2DDFC4DB9(p0, p1);
	}

	static void LUA_NATIVE_ENTITY_CREATE_MODEL_SWAP(float posX, float posY, float posZ, float radius, Hash oldModelHash, Hash newModelHash, bool bSurviveMapReload)
	{
		ENTITY::CREATE_MODEL_SWAP(posX, posY, posZ, radius, oldModelHash, newModelHash, bSurviveMapReload);
	}

	static void LUA_NATIVE_ENTITY_REMOVE_MODEL_SWAP(float posX, float posY, float posZ, float radius, Hash oldModelHash, Hash newModelHash, bool bLazy)
	{
		ENTITY::REMOVE_MODEL_SWAP(posX, posY, posZ, radius, oldModelHash, newModelHash, bLazy);
	}

	static void LUA_NATIVE_ENTITY_CREATE_MODEL_HIDE(float posX, float posY, float posZ, float radius, Hash modelHash, bool bSurviveMapReload)
	{
		ENTITY::CREATE_MODEL_HIDE(posX, posY, posZ, radius, modelHash, bSurviveMapReload);
	}

	static void LUA_NATIVE_ENTITY_CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS(float posX, float posY, float posZ, float radius, Hash modelHash, bool bSurviveMapReload)
	{
		ENTITY::CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS(posX, posY, posZ, radius, modelHash, bSurviveMapReload);
	}

	static void LUA_NATIVE_ENTITY_REMOVE_MODEL_HIDE(float posX, float posY, float posZ, float radius, Hash modelHash, bool bLazy)
	{
		ENTITY::REMOVE_MODEL_HIDE(posX, posY, posZ, radius, modelHash, bLazy);
	}

	static Any LUA_NATIVE_ENTITY_0xD4636C2EDB0DEA8A_(Any p0)
	{
		auto retval = ENTITY::_0xD4636C2EDB0DEA8A(p0);
		return retval;
	}

	static void LUA_NATIVE_ENTITY_CREATE_FORCED_OBJECT(float posX, float posY, float posZ, float radius, Hash modelHash, bool bSurviveMapReload)
	{
		ENTITY::CREATE_FORCED_OBJECT(posX, posY, posZ, radius, modelHash, bSurviveMapReload);
	}

	static void LUA_NATIVE_ENTITY_REMOVE_FORCED_OBJECT(float posX, float posY, float posZ, float radius, Hash modelHash)
	{
		ENTITY::REMOVE_FORCED_OBJECT(posX, posY, posZ, radius, modelHash);
	}

	static void LUA_NATIVE_ENTITY_SET_ENTITY_NO_COLLISION_ENTITY(Entity entityIndex, Entity secondEntityIndex, bool bReactivateWhenNoCollision)
	{
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(entityIndex, secondEntityIndex, bReactivateWhenNoCollision);
	}

	static void LUA_NATIVE_ENTITY_SET_ENTITY_MOTION_BLUR(Entity entityIndex, bool bEnableMotionBlur)
	{
		ENTITY::SET_ENTITY_MOTION_BLUR(entityIndex, bEnableMotionBlur);
	}

	static void LUA_NATIVE_ENTITY_SET_CAN_AUTO_VAULT_ON_ENTITY(Entity entityIndex, bool bCanAutoVault)
	{
		ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(entityIndex, bCanAutoVault);
	}

	static void LUA_NATIVE_ENTITY_SET_CAN_CLIMB_ON_ENTITY(Entity entityIndex, bool bCanClimb)
	{
		ENTITY::SET_CAN_CLIMB_ON_ENTITY(entityIndex, bCanClimb);
	}

	static void LUA_NATIVE_ENTITY_SET_ENTITY_NOWEAPONDECALS(Entity entityIndex, bool bNoWeaponDecals)
	{
		ENTITY::SET_ENTITY_NOWEAPONDECALS(entityIndex, bNoWeaponDecals);
	}

	static int LUA_NATIVE_ENTITY_GET_ENTITIES_NEAR_POINT_(float x, float y, float z, float radius, ItemSet itemSet, int p5)
	{
		auto retval = ENTITY::_GET_ENTITIES_NEAR_POINT(x, y, z, radius, itemSet, p5);
		return retval;
	}

	static int LUA_NATIVE_ENTITY_GET_MATCHING_ENTITIES(Volume volume, ItemSet itemSet, int entityType, Any p3, Hash p4, sol::stack_object p5)
	{
		auto retval = ENTITY::GET_MATCHING_ENTITIES(volume, itemSet, entityType, p3, p4, p5.is<const char*>() ? p5.as<const char*>() : nullptr);
		return retval;
	}

	static int LUA_NATIVE_ENTITY_GET_ENTITIES_IN_VOLUME_(Volume volume, ItemSet itemSet, int entityType)
	{
		auto retval = ENTITY::_GET_ENTITIES_IN_VOLUME(volume, itemSet, entityType);
		return retval;
	}

	static Entity LUA_NATIVE_ENTITY_SEARCH_BUILDING_POOL_FOR_ENTITY_WITH_THIS_MODEL_(Hash modelHash)
	{
		auto retval = ENTITY::_SEARCH_BUILDING_POOL_FOR_ENTITY_WITH_THIS_MODEL(modelHash);
		return retval;
	}

	static Any LUA_NATIVE_ENTITY_0xC2E71D7E0A7B4C89_(Any p0)
	{
		auto retval = ENTITY::_0xC2E71D7E0A7B4C89(p0);
		return retval;
	}

	static void LUA_NATIVE_ENTITY_0x6C31B06E91518269_(Any p0, Any p1)
	{
		ENTITY::_0x6C31B06E91518269(p0, p1);
	}

	static void LUA_NATIVE_ENTITY_0x119A5714578F4E05_(Any p0, Any p1)
	{
		ENTITY::_0x119A5714578F4E05(p0, p1);
	}

	static Entity LUA_NATIVE_ENTITY_GET_ENTITY_BY_DOORHASH_(Hash doorHash, int p1)
	{
		auto retval = ENTITY::_GET_ENTITY_BY_DOORHASH(doorHash, p1);
		return retval;
	}

	static std::tuple<bool, float, float> LUA_NATIVE_ENTITY_FIND_ANIM_EVENT_PHASE(sol::stack_object pAnimDictName, sol::stack_object pAnimName, sol::stack_object pEventName, float ReturnStartPhase, float ReturnEndPhase)
	{
		std::tuple<bool, float, float> return_values;
		std::get<0>(return_values) = (bool)ENTITY::FIND_ANIM_EVENT_PHASE(pAnimDictName.is<const char*>() ? pAnimDictName.as<const char*>() : nullptr, pAnimName.is<const char*>() ? pAnimName.as<const char*>() : nullptr, pEventName.is<const char*>() ? pEventName.as<const char*>() : nullptr, &ReturnStartPhase, &ReturnEndPhase);
		std::get<1>(return_values) = ReturnStartPhase;
		std::get<2>(return_values) = ReturnEndPhase;

		return return_values;
	}

	static void LUA_NATIVE_ENTITY_FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Entity EntityIndex, bool p1)
	{
		ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(EntityIndex, p1);
	}

	static float LUA_NATIVE_ENTITY_GET_ENTITY_ANIM_CURRENT_TIME_(Entity entity, sol::stack_object animDict, sol::stack_object animName)
	{
		auto retval = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(entity, animDict.is<const char*>() ? animDict.as<const char*>() : nullptr, animName.is<const char*>() ? animName.as<const char*>() : nullptr);
		return retval;
	}

	static float LUA_NATIVE_ENTITY_0x8E46E18AA828334F_(Entity entity, sol::stack_object animDict, sol::stack_object animClip)
	{
		auto retval = ENTITY::_0x8E46E18AA828334F(entity, animDict.is<const char*>() ? animDict.as<const char*>() : nullptr, animClip.is<const char*>() ? animClip.as<const char*>() : nullptr);
		return retval;
	}

	static Any LUA_NATIVE_ENTITY_0xDF8E49EA89A01DB1_(Any p0, Any p1, Any p2)
	{
		auto retval = ENTITY::_0xDF8E49EA89A01DB1(p0, p1, p2);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_HAS_ANIM_EVENT_FIRED(Entity EntityIndex, Hash EventHash)
	{
		auto retval = (bool)ENTITY::HAS_ANIM_EVENT_FIRED(EntityIndex, EventHash);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_HAS_ENTITY_ANIM_FINISHED(Entity EntityIndex, sol::stack_object pAnimDictName, sol::stack_object pAnimName, int animType)
	{
		auto retval = (bool)ENTITY::HAS_ENTITY_ANIM_FINISHED(EntityIndex, pAnimDictName.is<const char*>() ? pAnimDictName.as<const char*>() : nullptr, pAnimName.is<const char*>() ? pAnimName.as<const char*>() : nullptr, animType);
		return retval;
	}

	static bool LUA_NATIVE_ENTITY_PLAY_ENTITY_ANIM(Entity EntityIndex, sol::stack_object AnimName, sol::stack_object AnimDictName, float BlendDelta, bool Loop, bool HoldLastFrame, bool DriveToPose, float StartPhase, int AnimFlags)
	{
		auto retval = (bool)ENTITY::PLAY_ENTITY_ANIM(EntityIndex, AnimName.is<const char*>() ? AnimName.as<const char*>() : nullptr, AnimDictName.is<const char*>() ? AnimDictName.as<const char*>() : nullptr, BlendDelta, Loop, HoldLastFrame, DriveToPose, StartPhase, AnimFlags);
		return retval;
	}

	static void LUA_NATIVE_ENTITY_SET_ENTITY_ANIM_CURRENT_TIME_(Entity entity, sol::stack_object animDict, sol::stack_object animName, float time)
	{
		ENTITY::_SET_ENTITY_ANIM_CURRENT_TIME(entity, animDict.is<const char*>() ? animDict.as<const char*>() : nullptr, animName.is<const char*>() ? animName.as<const char*>() : nullptr, time);
	}

	static void LUA_NATIVE_ENTITY_SET_ENTITY_ANIM_SPEED_(Entity entity, sol::stack_object animDict, sol::stack_object animName, float speedMultiplier)
	{
		ENTITY::_SET_ENTITY_ANIM_SPEED(entity, animDict.is<const char*>() ? animDict.as<const char*>() : nullptr, animName.is<const char*>() ? animName.as<const char*>() : nullptr, speedMultiplier);
	}

	static bool LUA_NATIVE_ENTITY_STOP_ENTITY_ANIM(Entity EntityIndex, sol::stack_object AnimName, sol::stack_object AnimDictName, float BlendDelta)
	{
		auto retval = (bool)ENTITY::STOP_ENTITY_ANIM(EntityIndex, AnimName.is<const char*>() ? AnimName.as<const char*>() : nullptr, AnimDictName.is<const char*>() ? AnimDictName.as<const char*>() : nullptr, BlendDelta);
		return retval;
	}

	static void LUA_NATIVE_ENTITY_0x669655FFB29EF1A9_(Any p0, Any p1, Any p2, Any p3)
	{
		ENTITY::_0x669655FFB29EF1A9(p0, p1, p2, p3);
	}

	static void LUA_NATIVE_ENTITY_ADD_ENTITY_TRACKING_TRAILS_(Entity entity)
	{
		ENTITY::_ADD_ENTITY_TRACKING_TRAILS(entity);
	}

	static void LUA_NATIVE_ENTITY_0x5826EFD6D73C4DE5_(Entity entity)
	{
		ENTITY::_0x5826EFD6D73C4DE5(entity);
	}

	static void LUA_NATIVE_ENTITY_PAUSE_ENTITY_TRACKING_(Entity entity, bool pause)
	{
		ENTITY::_PAUSE_ENTITY_TRACKING(entity, pause);
	}

	static Any LUA_NATIVE_ENTITY_CREATE_FOOTPATH_TRAIL_(Any p0, sol::stack_object waypointRecord, bool bUseSnowOffset, float p3, float p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, bool bInit)
	{
		auto retval = ENTITY::_CREATE_FOOTPATH_TRAIL(p0, waypointRecord.is<const char*>() ? waypointRecord.as<const char*>() : nullptr, bUseSnowOffset, p3, p4, p5, p6, p7, p8, p9, p10, bInit);
		return retval;
	}

	static void LUA_NATIVE_ENTITY_0xC76E94A78127412B_(Any p0, Any p1, Any p2)
	{
		ENTITY::_0xC76E94A78127412B(p0, p1, p2);
	}

	static void LUA_NATIVE_ENTITY_0x7F20092547B4DDEA_(Any p0)
	{
		ENTITY::_0x7F20092547B4DDEA(p0);
	}

	static void LUA_NATIVE_ENTITY_0xF41E2979D5BC5370_(Any p0)
	{
		ENTITY::_0xF41E2979D5BC5370(p0);
	}

	static Any LUA_NATIVE_ENTITY_0xAAACB74442C1BED3_(Any p0)
	{
		auto retval = ENTITY::_0xAAACB74442C1BED3(p0);
		return retval;
	}

	static Any LUA_NATIVE_ENTITY_PIN_CLOSEST_MAP_ENTITY(Hash modelHash, float x, float y, float z, int flags)
	{
		auto retval = ENTITY::PIN_CLOSEST_MAP_ENTITY(modelHash, x, y, z, flags);
		return retval;
	}

	static void LUA_NATIVE_ENTITY_UNPIN_MAP_ENTITY_(Entity entity)
	{
		ENTITY::_UNPIN_MAP_ENTITY(entity);
	}

	static bool LUA_NATIVE_ENTITY_IS_MAP_ENTITY_PINNED(Any p0)
	{
		auto retval = (bool)ENTITY::IS_MAP_ENTITY_PINNED(p0);
		return retval;
	}

	static Entity LUA_NATIVE_ENTITY_GET_PINNED_MAP_ENTITY_(Any p0)
	{
		auto retval = ENTITY::_GET_PINNED_MAP_ENTITY(p0);
		return retval;
	}

	static void LUA_NATIVE_ENTITY_0xEAB3D91D30A344F1_(Any p0)
	{
		ENTITY::_0xEAB3D91D30A344F1(p0);
	}

	static void LUA_NATIVE_ENTITY_0x37CEB637BA3B1A47_(Any p0)
	{
		ENTITY::_0x37CEB637BA3B1A47(p0);
	}

	static Any LUA_NATIVE_ENTITY_0x350E9211074955AF_(Any p0, Any p1)
	{
		auto retval = ENTITY::_0x350E9211074955AF(p0, p1);
		return retval;
	}

	static void LUA_NATIVE_ENTITY_0x898586729DB5221D_(Ped ped)
	{
		ENTITY::_0x898586729DB5221D(ped);
	}

	static void LUA_NATIVE_ENTITY_0xE9E7A0BAC7F57746_(Any p0, Any p1)
	{
		ENTITY::_0xE9E7A0BAC7F57746(p0, p1);
	}

	void init_native_binding_ENTITY(sol::state& L)
	{
		auto ENTITY = L["ENTITY"].get_or_create<sol::table>();
		ENTITY.set_function("DOES_ENTITY_EXIST", LUA_NATIVE_ENTITY_DOES_ENTITY_EXIST);
		ENTITY.set_function("DOES_ENTITY_BELONG_TO_THIS_SCRIPT", LUA_NATIVE_ENTITY_DOES_ENTITY_BELONG_TO_THIS_SCRIPT);
		ENTITY.set_function("DOES_ENTITY_HAVE_DRAWABLE", LUA_NATIVE_ENTITY_DOES_ENTITY_HAVE_DRAWABLE);
		ENTITY.set_function("DOES_ENTITY_HAVE_PHYSICS", LUA_NATIVE_ENTITY_DOES_ENTITY_HAVE_PHYSICS);
		ENTITY.set_function("HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT", LUA_NATIVE_ENTITY_HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT);
		ENTITY.set_function("HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED", LUA_NATIVE_ENTITY_HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED);
		ENTITY.set_function("HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE", LUA_NATIVE_ENTITY_HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE);
		ENTITY.set_function("HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY", LUA_NATIVE_ENTITY_HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY);
		ENTITY.set_function("0x3EC28DA1FFAC9DDD_", LUA_NATIVE_ENTITY_0x3EC28DA1FFAC9DDD_);
		ENTITY.set_function("0xAF72EC7E1B54539B_", LUA_NATIVE_ENTITY_0xAF72EC7E1B54539B_);
		ENTITY.set_function("HAS_ENTITY_CLEAR_LOS_TO_ENTITY", LUA_NATIVE_ENTITY_HAS_ENTITY_CLEAR_LOS_TO_ENTITY);
		ENTITY.set_function("HAS_ENTITY_CLEAR_LOS_TO_COORD", LUA_NATIVE_ENTITY_HAS_ENTITY_CLEAR_LOS_TO_COORD);
		ENTITY.set_function("HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT", LUA_NATIVE_ENTITY_HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT);
		ENTITY.set_function("HAS_ENTITY_COLLIDED_WITH_ANYTHING", LUA_NATIVE_ENTITY_HAS_ENTITY_COLLIDED_WITH_ANYTHING);
		ENTITY.set_function("0x6D58167F62238284_", LUA_NATIVE_ENTITY_0x6D58167F62238284_);
		ENTITY.set_function("0xDFC2B226D56D85F6_", LUA_NATIVE_ENTITY_0xDFC2B226D56D85F6_);
		ENTITY.set_function("GET_ANIM_DURATION", LUA_NATIVE_ENTITY_GET_ANIM_DURATION);
		ENTITY.set_function("GET_ENTITY_ATTACHED_TO", LUA_NATIVE_ENTITY_GET_ENTITY_ATTACHED_TO);
		ENTITY.set_function("GET_ENTITY_COORDS", LUA_NATIVE_ENTITY_GET_ENTITY_COORDS);
		ENTITY.set_function("GET_ENTITY_FORWARD_VECTOR", LUA_NATIVE_ENTITY_GET_ENTITY_FORWARD_VECTOR);
		ENTITY.set_function("GET_ENTITY_FORWARD_X", LUA_NATIVE_ENTITY_GET_ENTITY_FORWARD_X);
		ENTITY.set_function("GET_ENTITY_FORWARD_Y", LUA_NATIVE_ENTITY_GET_ENTITY_FORWARD_Y);
		ENTITY.set_function("GET_ENTITY_FORWARD_VECTOR_YX_", LUA_NATIVE_ENTITY_GET_ENTITY_FORWARD_VECTOR_YX_);
		ENTITY.set_function("GET_ENTITY_HEADING", LUA_NATIVE_ENTITY_GET_ENTITY_HEADING);
		ENTITY.set_function("GET_ENTITY_HEALTH", LUA_NATIVE_ENTITY_GET_ENTITY_HEALTH);
		ENTITY.set_function("GET_ENTITY_HEALTH_FLOAT_", LUA_NATIVE_ENTITY_GET_ENTITY_HEALTH_FLOAT_);
		ENTITY.set_function("CHANGE_ENTITY_HEALTH_", LUA_NATIVE_ENTITY_CHANGE_ENTITY_HEALTH_);
		ENTITY.set_function("GET_ENTITY_MAX_HEALTH", LUA_NATIVE_ENTITY_GET_ENTITY_MAX_HEALTH);
		ENTITY.set_function("SET_ENTITY_MAX_HEALTH", LUA_NATIVE_ENTITY_SET_ENTITY_MAX_HEALTH);
		ENTITY.set_function("GET_ENTITY_HEIGHT", LUA_NATIVE_ENTITY_GET_ENTITY_HEIGHT);
		ENTITY.set_function("GET_ENTITY_HEIGHT_ABOVE_GROUND", LUA_NATIVE_ENTITY_GET_ENTITY_HEIGHT_ABOVE_GROUND);
		ENTITY.set_function("GET_ENTITY_WORLD_POSITION_OF_DIMENSIONS_", LUA_NATIVE_ENTITY_GET_ENTITY_WORLD_POSITION_OF_DIMENSIONS_);
		ENTITY.set_function("GET_ENTITY_MATRIX", LUA_NATIVE_ENTITY_GET_ENTITY_MATRIX);
		ENTITY.set_function("GET_ENTITY_MODEL", LUA_NATIVE_ENTITY_GET_ENTITY_MODEL);
		ENTITY.set_function("GET_PED_ANIMAL_TYPE_", LUA_NATIVE_ENTITY_GET_PED_ANIMAL_TYPE_);
		ENTITY.set_function("GET_IS_ANIMAL", LUA_NATIVE_ENTITY_GET_IS_ANIMAL);
		ENTITY.set_function("GET_IS_BIRD_", LUA_NATIVE_ENTITY_GET_IS_BIRD_);
		ENTITY.set_function("GET_IS_PREDATOR_", LUA_NATIVE_ENTITY_GET_IS_PREDATOR_);
		ENTITY.set_function("GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS", LUA_NATIVE_ENTITY_GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS);
		ENTITY.set_function("GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS", LUA_NATIVE_ENTITY_GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS);
		ENTITY.set_function("GET_ENTITY_PITCH", LUA_NATIVE_ENTITY_GET_ENTITY_PITCH);
		ENTITY.set_function("GET_ENTITY_ROLL", LUA_NATIVE_ENTITY_GET_ENTITY_ROLL);
		ENTITY.set_function("GET_ENTITY_ROTATION", LUA_NATIVE_ENTITY_GET_ENTITY_ROTATION);
		ENTITY.set_function("GET_ENTITY_SCRIPT_", LUA_NATIVE_ENTITY_GET_ENTITY_SCRIPT_);
		ENTITY.set_function("GET_ENTITY_SPEED", LUA_NATIVE_ENTITY_GET_ENTITY_SPEED);
		ENTITY.set_function("GET_ENTITY_SPEED_VECTOR", LUA_NATIVE_ENTITY_GET_ENTITY_SPEED_VECTOR);
		ENTITY.set_function("GET_ENTITY_UPRIGHT_VALUE", LUA_NATIVE_ENTITY_GET_ENTITY_UPRIGHT_VALUE);
		ENTITY.set_function("GET_ENTITY_VELOCITY", LUA_NATIVE_ENTITY_GET_ENTITY_VELOCITY);
		ENTITY.set_function("GET_OBJECT_INDEX_FROM_ENTITY_INDEX", LUA_NATIVE_ENTITY_GET_OBJECT_INDEX_FROM_ENTITY_INDEX);
		ENTITY.set_function("GET_PED_INDEX_FROM_ENTITY_INDEX", LUA_NATIVE_ENTITY_GET_PED_INDEX_FROM_ENTITY_INDEX);
		ENTITY.set_function("GET_VEHICLE_INDEX_FROM_ENTITY_INDEX", LUA_NATIVE_ENTITY_GET_VEHICLE_INDEX_FROM_ENTITY_INDEX);
		ENTITY.set_function("GET_WORLD_POSITION_OF_ENTITY_BONE", LUA_NATIVE_ENTITY_GET_WORLD_POSITION_OF_ENTITY_BONE);
		ENTITY.set_function("0x5E214112806591EA_", LUA_NATIVE_ENTITY_0x5E214112806591EA_);
		ENTITY.set_function("0x3AB3A77672F6473F_", LUA_NATIVE_ENTITY_0x3AB3A77672F6473F_);
		ENTITY.set_function("GET_NEAREST_PLAYER_TO_ENTITY", LUA_NATIVE_ENTITY_GET_NEAREST_PLAYER_TO_ENTITY);
		ENTITY.set_function("GET_NEAREST_PLAYER_TO_ENTITY_ON_TEAM", LUA_NATIVE_ENTITY_GET_NEAREST_PLAYER_TO_ENTITY_ON_TEAM);
		ENTITY.set_function("GET_NEAREST_PARTICIPANT_TO_ENTITY", LUA_NATIVE_ENTITY_GET_NEAREST_PARTICIPANT_TO_ENTITY);
		ENTITY.set_function("PLACE_ENTITY_ON_GROUND_PROPERLY", LUA_NATIVE_ENTITY_PLACE_ENTITY_ON_GROUND_PROPERLY);
		ENTITY.set_function("GET_ENTITY_TYPE", LUA_NATIVE_ENTITY_GET_ENTITY_TYPE);
		ENTITY.set_function("GET_ENTITY_POPULATION_TYPE", LUA_NATIVE_ENTITY_GET_ENTITY_POPULATION_TYPE);
		ENTITY.set_function("IS_AN_ENTITY", LUA_NATIVE_ENTITY_IS_AN_ENTITY);
		ENTITY.set_function("IS_ENTITY_A_PED", LUA_NATIVE_ENTITY_IS_ENTITY_A_PED);
		ENTITY.set_function("IS_ENTITY_A_MISSION_ENTITY", LUA_NATIVE_ENTITY_IS_ENTITY_A_MISSION_ENTITY);
		ENTITY.set_function("IS_ENTITY_A_VEHICLE", LUA_NATIVE_ENTITY_IS_ENTITY_A_VEHICLE);
		ENTITY.set_function("IS_ENTITY_AN_OBJECT", LUA_NATIVE_ENTITY_IS_ENTITY_AN_OBJECT);
		ENTITY.set_function("IS_ENTITY_AT_COORD", LUA_NATIVE_ENTITY_IS_ENTITY_AT_COORD);
		ENTITY.set_function("IS_ENTITY_AT_ENTITY", LUA_NATIVE_ENTITY_IS_ENTITY_AT_ENTITY);
		ENTITY.set_function("IS_ENTITY_ATTACHED", LUA_NATIVE_ENTITY_IS_ENTITY_ATTACHED);
		ENTITY.set_function("IS_ENTITY_ATTACHED_TO_ANY_OBJECT", LUA_NATIVE_ENTITY_IS_ENTITY_ATTACHED_TO_ANY_OBJECT);
		ENTITY.set_function("IS_ENTITY_ATTACHED_TO_ANY_PED", LUA_NATIVE_ENTITY_IS_ENTITY_ATTACHED_TO_ANY_PED);
		ENTITY.set_function("IS_ENTITY_ATTACHED_TO_ANY_VEHICLE", LUA_NATIVE_ENTITY_IS_ENTITY_ATTACHED_TO_ANY_VEHICLE);
		ENTITY.set_function("IS_ENTITY_ATTACHED_TO_ENTITY", LUA_NATIVE_ENTITY_IS_ENTITY_ATTACHED_TO_ENTITY);
		ENTITY.set_function("IS_ENTITY_OWNED_BY_PERSISTENCE_SYSTEM_", LUA_NATIVE_ENTITY_IS_ENTITY_OWNED_BY_PERSISTENCE_SYSTEM_);
		ENTITY.set_function("IS_ENTITY_DEAD", LUA_NATIVE_ENTITY_IS_ENTITY_DEAD);
		ENTITY.set_function("IS_ENTITY_IN_AIR", LUA_NATIVE_ENTITY_IS_ENTITY_IN_AIR);
		ENTITY.set_function("IS_ENTITY_IN_ANGLED_AREA", LUA_NATIVE_ENTITY_IS_ENTITY_IN_ANGLED_AREA);
		ENTITY.set_function("IS_ENTITY_IN_AREA", LUA_NATIVE_ENTITY_IS_ENTITY_IN_AREA);
		ENTITY.set_function("IS_ENTITY_IN_VOLUME", LUA_NATIVE_ENTITY_IS_ENTITY_IN_VOLUME);
		ENTITY.set_function("IS_ENTITY_IN_WATER", LUA_NATIVE_ENTITY_IS_ENTITY_IN_WATER);
		ENTITY.set_function("IS_ENTITY_UNDERWATER_", LUA_NATIVE_ENTITY_IS_ENTITY_UNDERWATER_);
		ENTITY.set_function("GET_ENTITY_SUBMERGED_LEVEL", LUA_NATIVE_ENTITY_GET_ENTITY_SUBMERGED_LEVEL);
		ENTITY.set_function("SET_ENTITY_REQUIRES_MORE_EXPENSIVE_RIVER_CHECK", LUA_NATIVE_ENTITY_SET_ENTITY_REQUIRES_MORE_EXPENSIVE_RIVER_CHECK);
		ENTITY.set_function("0x7A49D40DE437BC8D_", LUA_NATIVE_ENTITY_0x7A49D40DE437BC8D_);
		ENTITY.set_function("0x978AA2323ED32209_", LUA_NATIVE_ENTITY_0x978AA2323ED32209_);
		ENTITY.set_function("0x002AAC783ED323ED_", LUA_NATIVE_ENTITY_0x002AAC783ED323ED_);
		ENTITY.set_function("0x007AAC783ED323ED_", LUA_NATIVE_ENTITY_0x007AAC783ED323ED_);
		ENTITY.set_function("IS_ENTITY_ON_SCREEN", LUA_NATIVE_ENTITY_IS_ENTITY_ON_SCREEN);
		ENTITY.set_function("IS_ENTITY_PLAYING_ANIM", LUA_NATIVE_ENTITY_IS_ENTITY_PLAYING_ANIM);
		ENTITY.set_function("IS_ENTITY_PLAYING_ANY_ANIM_", LUA_NATIVE_ENTITY_IS_ENTITY_PLAYING_ANY_ANIM_);
		ENTITY.set_function("IS_ENTITY_STATIC", LUA_NATIVE_ENTITY_IS_ENTITY_STATIC);
		ENTITY.set_function("IS_ENTITY_TOUCHING_ENTITY", LUA_NATIVE_ENTITY_IS_ENTITY_TOUCHING_ENTITY);
		ENTITY.set_function("IS_ENTITY_TOUCHING_MODEL", LUA_NATIVE_ENTITY_IS_ENTITY_TOUCHING_MODEL);
		ENTITY.set_function("IS_ENTITY_UPRIGHT", LUA_NATIVE_ENTITY_IS_ENTITY_UPRIGHT);
		ENTITY.set_function("IS_ENTITY_UPSIDEDOWN", LUA_NATIVE_ENTITY_IS_ENTITY_UPSIDEDOWN);
		ENTITY.set_function("IS_ENTITY_VISIBLE", LUA_NATIVE_ENTITY_IS_ENTITY_VISIBLE);
		ENTITY.set_function("0xFF9965C47FA404DA_", LUA_NATIVE_ENTITY_0xFF9965C47FA404DA_);
		ENTITY.set_function("IS_ENTITY_VISIBLE_TO_SCRIPT", LUA_NATIVE_ENTITY_IS_ENTITY_VISIBLE_TO_SCRIPT);
		ENTITY.set_function("0x3F08C6163A4AB1D6_", LUA_NATIVE_ENTITY_0x3F08C6163A4AB1D6_);
		ENTITY.set_function("0x0DB41D59E0F1502B_", LUA_NATIVE_ENTITY_0x0DB41D59E0F1502B_);
		ENTITY.set_function("IS_TRACKED_ENTITY_VISIBLE_", LUA_NATIVE_ENTITY_IS_TRACKED_ENTITY_VISIBLE_);
		ENTITY.set_function("IS_ENTITY_OCCLUDED", LUA_NATIVE_ENTITY_IS_ENTITY_OCCLUDED);
		ENTITY.set_function("WOULD_ENTITY_BE_OCCLUDED", LUA_NATIVE_ENTITY_WOULD_ENTITY_BE_OCCLUDED);
		ENTITY.set_function("IS_ENTITY_WAITING_FOR_WORLD_COLLISION", LUA_NATIVE_ENTITY_IS_ENTITY_WAITING_FOR_WORLD_COLLISION);
		ENTITY.set_function("IS_ENTITY_ON_TRAIN_TRACK_", LUA_NATIVE_ENTITY_IS_ENTITY_ON_TRAIN_TRACK_);
		ENTITY.set_function("0xCDB682BB47C02F0A_", LUA_NATIVE_ENTITY_0xCDB682BB47C02F0A_);
		ENTITY.set_function("0xE19035EB65AB2932_", LUA_NATIVE_ENTITY_0xE19035EB65AB2932_);
		ENTITY.set_function("SCRIPT_OVERRIDE_ENTITY_LOOT_TABLE_PERMANENT", LUA_NATIVE_ENTITY_SCRIPT_OVERRIDE_ENTITY_LOOT_TABLE_PERMANENT);
		ENTITY.set_function("GET_SCRIPT_OVERRIDE_ENTITY_LOOT_TABLE_PERMANENT_", LUA_NATIVE_ENTITY_GET_SCRIPT_OVERRIDE_ENTITY_LOOT_TABLE_PERMANENT_);
		ENTITY.set_function("REQUEST_ENTITY_LOOT_LIST_", LUA_NATIVE_ENTITY_REQUEST_ENTITY_LOOT_LIST_);
		ENTITY.set_function("0xE31FC20319874CB3_", LUA_NATIVE_ENTITY_0xE31FC20319874CB3_);
		ENTITY.set_function("0x582F73ACFE969571_", LUA_NATIVE_ENTITY_0x582F73ACFE969571_);
		ENTITY.set_function("0xBA2A089E60ED1163_", LUA_NATIVE_ENTITY_0xBA2A089E60ED1163_);
		ENTITY.set_function("GET_CARRIABLE_ENTITY_STATE", LUA_NATIVE_ENTITY_GET_CARRIABLE_ENTITY_STATE);
		ENTITY.set_function("0xD46BF94C4C66FAB0_", LUA_NATIVE_ENTITY_0xD46BF94C4C66FAB0_);
		ENTITY.set_function("GET_OPTIMAL_CARRY_CONFIG_", LUA_NATIVE_ENTITY_GET_OPTIMAL_CARRY_CONFIG_);
		ENTITY.set_function("0xD21C7418C590BB40_", LUA_NATIVE_ENTITY_0xD21C7418C590BB40_);
		ENTITY.set_function("GET_ENTITY_CARRY_CONFIG_", LUA_NATIVE_ENTITY_GET_ENTITY_CARRY_CONFIG_);
		ENTITY.set_function("IS_CARRIABLE_MODEL_", LUA_NATIVE_ENTITY_IS_CARRIABLE_MODEL_);
		ENTITY.set_function("GET_CARRIABLE_FROM_ENTITY_", LUA_NATIVE_ENTITY_GET_CARRIABLE_FROM_ENTITY_);
		ENTITY.set_function("SET_ENTITY_CARCASS_TYPE_", LUA_NATIVE_ENTITY_SET_ENTITY_CARCASS_TYPE_);
		ENTITY.set_function("0x2A77EF9BEC8518F4_", LUA_NATIVE_ENTITY_0x2A77EF9BEC8518F4_);
		ENTITY.set_function("DELETE_CARRIABLE_", LUA_NATIVE_ENTITY_DELETE_CARRIABLE_);
		ENTITY.set_function("IS_ENTITY_FULLY_LOOTED_", LUA_NATIVE_ENTITY_IS_ENTITY_FULLY_LOOTED_);
		ENTITY.set_function("SET_ENTITY_FULLY_LOOTED_", LUA_NATIVE_ENTITY_SET_ENTITY_FULLY_LOOTED_);
		ENTITY.set_function("0xEF2D9ED7CE684F08_", LUA_NATIVE_ENTITY_0xEF2D9ED7CE684F08_);
		ENTITY.set_function("0x0CCEFC6C2C95DA2A_", LUA_NATIVE_ENTITY_0x0CCEFC6C2C95DA2A_);
		ENTITY.set_function("0x383F64263F946E45_", LUA_NATIVE_ENTITY_0x383F64263F946E45_);
		ENTITY.set_function("0x8E10DF0FFA63FB65_", LUA_NATIVE_ENTITY_0x8E10DF0FFA63FB65_);
		ENTITY.set_function("GET_ENTITY_CARRYING_FLAG_", LUA_NATIVE_ENTITY_GET_ENTITY_CARRYING_FLAG_);
		ENTITY.set_function("SET_ENTITY_CARRYING_FLAG_", LUA_NATIVE_ENTITY_SET_ENTITY_CARRYING_FLAG_);
		ENTITY.set_function("0xC3ABCFBC7D74AFA5_", LUA_NATIVE_ENTITY_0xC3ABCFBC7D74AFA5_);
		ENTITY.set_function("0x371D179701D9C082_", LUA_NATIVE_ENTITY_0x371D179701D9C082_);
		ENTITY.set_function("0xA48E4801DEBDF7E4_", LUA_NATIVE_ENTITY_0xA48E4801DEBDF7E4_);
		ENTITY.set_function("GET_IS_CARRIABLE_PELT_", LUA_NATIVE_ENTITY_GET_IS_CARRIABLE_PELT_);
		ENTITY.set_function("0xF59FDE7B4D31A630_", LUA_NATIVE_ENTITY_0xF59FDE7B4D31A630_);
		ENTITY.set_function("0x120376C23F019C6C_", LUA_NATIVE_ENTITY_0x120376C23F019C6C_);
		ENTITY.set_function("0x5744562E973E33CD_", LUA_NATIVE_ENTITY_0x5744562E973E33CD_);
		ENTITY.set_function("0xDD03FC2089AD093C_", LUA_NATIVE_ENTITY_0xDD03FC2089AD093C_);
		ENTITY.set_function("0xB16C780C51E51E2B_", LUA_NATIVE_ENTITY_0xB16C780C51E51E2B_);
		ENTITY.set_function("0xEF259AA1E097E0AD_", LUA_NATIVE_ENTITY_0xEF259AA1E097E0AD_);
		ENTITY.set_function("0xBD94CECFB2D65119_", LUA_NATIVE_ENTITY_0xBD94CECFB2D65119_);
		ENTITY.set_function("SET_ENTITY_CUSTOM_PICKUP_RADIUS_", LUA_NATIVE_ENTITY_SET_ENTITY_CUSTOM_PICKUP_RADIUS_);
		ENTITY.set_function("0xE75EEA8DB59A9F39_", LUA_NATIVE_ENTITY_0xE75EEA8DB59A9F39_);
		ENTITY.set_function("0x188736456D1DEDE6_", LUA_NATIVE_ENTITY_0x188736456D1DEDE6_);
		ENTITY.set_function("0xC6A1A3D63F122DE7_", LUA_NATIVE_ENTITY_0xC6A1A3D63F122DE7_);
		ENTITY.set_function("APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS", LUA_NATIVE_ENTITY_APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS);
		ENTITY.set_function("APPLY_FORCE_TO_ENTITY", LUA_NATIVE_ENTITY_APPLY_FORCE_TO_ENTITY);
		ENTITY.set_function("ATTACH_ENTITY_TO_ENTITY", LUA_NATIVE_ENTITY_ATTACH_ENTITY_TO_ENTITY);
		ENTITY.set_function("ATTACH_ENTITY_TO_ENTITY_PHYSICALLY", LUA_NATIVE_ENTITY_ATTACH_ENTITY_TO_ENTITY_PHYSICALLY);
		ENTITY.set_function("0x445D7D8EA66E373E_", LUA_NATIVE_ENTITY_0x445D7D8EA66E373E_);
		ENTITY.set_function("0x16908E859C3AB698_", LUA_NATIVE_ENTITY_0x16908E859C3AB698_);
		ENTITY.set_function("GET_ENTITY_BONE_INDEX_BY_NAME", LUA_NATIVE_ENTITY_GET_ENTITY_BONE_INDEX_BY_NAME);
		ENTITY.set_function("CLEAR_ENTITY_LAST_DAMAGE_ENTITY", LUA_NATIVE_ENTITY_CLEAR_ENTITY_LAST_DAMAGE_ENTITY);
		ENTITY.set_function("DELETE_ENTITY", LUA_NATIVE_ENTITY_DELETE_ENTITY);
		ENTITY.set_function("DELETE_ENTITY_2_", LUA_NATIVE_ENTITY_DELETE_ENTITY_2_);
		ENTITY.set_function("DETACH_ENTITY", LUA_NATIVE_ENTITY_DETACH_ENTITY);
		ENTITY.set_function("IS_ENTITY_FROZEN_", LUA_NATIVE_ENTITY_IS_ENTITY_FROZEN_);
		ENTITY.set_function("FREEZE_ENTITY_POSITION", LUA_NATIVE_ENTITY_FREEZE_ENTITY_POSITION);
		ENTITY.set_function("SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION", LUA_NATIVE_ENTITY_SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION);
		ENTITY.set_function("SET_ENTITY_AS_MISSION_ENTITY", LUA_NATIVE_ENTITY_SET_ENTITY_AS_MISSION_ENTITY);
		ENTITY.set_function("SET_ENTITY_AS_NO_LONGER_NEEDED", LUA_NATIVE_ENTITY_SET_ENTITY_AS_NO_LONGER_NEEDED);
		ENTITY.set_function("SET_PED_AS_NO_LONGER_NEEDED", LUA_NATIVE_ENTITY_SET_PED_AS_NO_LONGER_NEEDED);
		ENTITY.set_function("SET_VEHICLE_AS_NO_LONGER_NEEDED", LUA_NATIVE_ENTITY_SET_VEHICLE_AS_NO_LONGER_NEEDED);
		ENTITY.set_function("SET_OBJECT_AS_NO_LONGER_NEEDED", LUA_NATIVE_ENTITY_SET_OBJECT_AS_NO_LONGER_NEEDED);
		ENTITY.set_function("0x20FAEE47427A4497_", LUA_NATIVE_ENTITY_0x20FAEE47427A4497_);
		ENTITY.set_function("DOES_THREAD_OWN_THIS_ENTITY_", LUA_NATIVE_ENTITY_DOES_THREAD_OWN_THIS_ENTITY_);
		ENTITY.set_function("0x56E0735D6273B227_", LUA_NATIVE_ENTITY_0x56E0735D6273B227_);
		ENTITY.set_function("0xC0EDEF16D90661EE_", LUA_NATIVE_ENTITY_0xC0EDEF16D90661EE_);
		ENTITY.set_function("0x0FD7D7C232876E72_", LUA_NATIVE_ENTITY_0x0FD7D7C232876E72_);
		ENTITY.set_function("0x0939E773925C4719_", LUA_NATIVE_ENTITY_0x0939E773925C4719_);
		ENTITY.set_function("SET_ENTITY_CAN_BE_DAMAGED", LUA_NATIVE_ENTITY_SET_ENTITY_CAN_BE_DAMAGED);
		ENTITY.set_function("GET_ENTITY_CAN_BE_DAMAGED_", LUA_NATIVE_ENTITY_GET_ENTITY_CAN_BE_DAMAGED_);
		ENTITY.set_function("SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP", LUA_NATIVE_ENTITY_SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP);
		ENTITY.set_function("0xFF83AF534156B399_", LUA_NATIVE_ENTITY_0xFF83AF534156B399_);
		ENTITY.set_function("SET_ENTITY_CAN_BE_TARGETED_WITHOUT_LOS", LUA_NATIVE_ENTITY_SET_ENTITY_CAN_BE_TARGETED_WITHOUT_LOS);
		ENTITY.set_function("GET_ENTITY_COLLISION_DISABLED", LUA_NATIVE_ENTITY_GET_ENTITY_COLLISION_DISABLED);
		ENTITY.set_function("SET_ENTITY_COLLISION", LUA_NATIVE_ENTITY_SET_ENTITY_COLLISION);
		ENTITY.set_function("SET_ENTITY_COMPLETELY_DISABLE_COLLISION", LUA_NATIVE_ENTITY_SET_ENTITY_COMPLETELY_DISABLE_COLLISION);
		ENTITY.set_function("SET_ENTITY_COORDS", LUA_NATIVE_ENTITY_SET_ENTITY_COORDS);
		ENTITY.set_function("SET_ENTITY_COORDS_NO_OFFSET", LUA_NATIVE_ENTITY_SET_ENTITY_COORDS_NO_OFFSET);
		ENTITY.set_function("SET_ENTITY_DYNAMIC", LUA_NATIVE_ENTITY_SET_ENTITY_DYNAMIC);
		ENTITY.set_function("SET_ENTITY_HEADING", LUA_NATIVE_ENTITY_SET_ENTITY_HEADING);
		ENTITY.set_function("SET_ENTITY_COORDS_AND_HEADING_", LUA_NATIVE_ENTITY_SET_ENTITY_COORDS_AND_HEADING_);
		ENTITY.set_function("SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET_", LUA_NATIVE_ENTITY_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET_);
		ENTITY.set_function("SET_ENTITY_HEALTH", LUA_NATIVE_ENTITY_SET_ENTITY_HEALTH);
		ENTITY.set_function("SET_ENTITY_INVINCIBLE", LUA_NATIVE_ENTITY_SET_ENTITY_INVINCIBLE);
		ENTITY.set_function("0xAF7F3099B9FEB535_", LUA_NATIVE_ENTITY_0xAF7F3099B9FEB535_);
		ENTITY.set_function("SET_ENTITY_IS_TARGET_PRIORITY", LUA_NATIVE_ENTITY_SET_ENTITY_IS_TARGET_PRIORITY);
		ENTITY.set_function("0xB38A29CCD5447783_", LUA_NATIVE_ENTITY_0xB38A29CCD5447783_);
		ENTITY.set_function("SET_ENTITY_THREAT_TIER_", LUA_NATIVE_ENTITY_SET_ENTITY_THREAT_TIER_);
		ENTITY.set_function("GET_ENTITY_THREAT_TIER_", LUA_NATIVE_ENTITY_GET_ENTITY_THREAT_TIER_);
		ENTITY.set_function("0x2D40BCBFE9305DEA_", LUA_NATIVE_ENTITY_0x2D40BCBFE9305DEA_);
		ENTITY.set_function("SET_ENTITY_LIGHTS_ENABLED_", LUA_NATIVE_ENTITY_SET_ENTITY_LIGHTS_ENABLED_);
		ENTITY.set_function("SET_ENTITY_LOAD_COLLISION_FLAG", LUA_NATIVE_ENTITY_SET_ENTITY_LOAD_COLLISION_FLAG);
		ENTITY.set_function("HAS_COLLISION_LOADED_AROUND_ENTITY", LUA_NATIVE_ENTITY_HAS_COLLISION_LOADED_AROUND_ENTITY);
		ENTITY.set_function("HAS_COLLISION_LOADED_AROUND_POSITION", LUA_NATIVE_ENTITY_HAS_COLLISION_LOADED_AROUND_POSITION);
		ENTITY.set_function("SET_ENTITY_ONLY_DAMAGED_BY_PLAYER", LUA_NATIVE_ENTITY_SET_ENTITY_ONLY_DAMAGED_BY_PLAYER);
		ENTITY.set_function("SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP", LUA_NATIVE_ENTITY_SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP);
		ENTITY.set_function("SET_ENTITY_PROOFS", LUA_NATIVE_ENTITY_SET_ENTITY_PROOFS);
		ENTITY.set_function("GET_ENTITY_PROOFS_", LUA_NATIVE_ENTITY_GET_ENTITY_PROOFS_);
		ENTITY.set_function("SET_ENTITY_QUATERNION", LUA_NATIVE_ENTITY_SET_ENTITY_QUATERNION);
		ENTITY.set_function("SET_ENTITY_ROTATION", LUA_NATIVE_ENTITY_SET_ENTITY_ROTATION);
		ENTITY.set_function("0xD45BB89B53FC0CFD_", LUA_NATIVE_ENTITY_0xD45BB89B53FC0CFD_);
		ENTITY.set_function("SET_ENTITY_VISIBLE", LUA_NATIVE_ENTITY_SET_ENTITY_VISIBLE);
		ENTITY.set_function("0x80FDEB3A9E9AA578_", LUA_NATIVE_ENTITY_0x80FDEB3A9E9AA578_);
		ENTITY.set_function("0x9C6906EF8CB20C5F_", LUA_NATIVE_ENTITY_0x9C6906EF8CB20C5F_);
		ENTITY.set_function("SET_ENTITY_VELOCITY", LUA_NATIVE_ENTITY_SET_ENTITY_VELOCITY);
		ENTITY.set_function("SET_ENTITY_HAS_GRAVITY", LUA_NATIVE_ENTITY_SET_ENTITY_HAS_GRAVITY);
		ENTITY.set_function("SET_ENTITY_LOD_DIST", LUA_NATIVE_ENTITY_SET_ENTITY_LOD_DIST);
		ENTITY.set_function("GET_ENTITY_LOD_DIST", LUA_NATIVE_ENTITY_GET_ENTITY_LOD_DIST);
		ENTITY.set_function("SET_ENTITY_ALPHA", LUA_NATIVE_ENTITY_SET_ENTITY_ALPHA);
		ENTITY.set_function("GET_ENTITY_ALPHA", LUA_NATIVE_ENTITY_GET_ENTITY_ALPHA);
		ENTITY.set_function("RESET_ENTITY_ALPHA", LUA_NATIVE_ENTITY_RESET_ENTITY_ALPHA);
		ENTITY.set_function("SET_ENTITY_FADE_IN_", LUA_NATIVE_ENTITY_SET_ENTITY_FADE_IN_);
		ENTITY.set_function("SET_ENTITY_ALWAYS_PRERENDER", LUA_NATIVE_ENTITY_SET_ENTITY_ALWAYS_PRERENDER);
		ENTITY.set_function("SET_ENTITY_RENDER_SCORCHED", LUA_NATIVE_ENTITY_SET_ENTITY_RENDER_SCORCHED);
		ENTITY.set_function("0x37B01666BAE8F7EF_", LUA_NATIVE_ENTITY_0x37B01666BAE8F7EF_);
		ENTITY.set_function("0xA9E6D8F2DDFC4DB9_", LUA_NATIVE_ENTITY_0xA9E6D8F2DDFC4DB9_);
		ENTITY.set_function("CREATE_MODEL_SWAP", LUA_NATIVE_ENTITY_CREATE_MODEL_SWAP);
		ENTITY.set_function("REMOVE_MODEL_SWAP", LUA_NATIVE_ENTITY_REMOVE_MODEL_SWAP);
		ENTITY.set_function("CREATE_MODEL_HIDE", LUA_NATIVE_ENTITY_CREATE_MODEL_HIDE);
		ENTITY.set_function("CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS", LUA_NATIVE_ENTITY_CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS);
		ENTITY.set_function("REMOVE_MODEL_HIDE", LUA_NATIVE_ENTITY_REMOVE_MODEL_HIDE);
		ENTITY.set_function("0xD4636C2EDB0DEA8A_", LUA_NATIVE_ENTITY_0xD4636C2EDB0DEA8A_);
		ENTITY.set_function("CREATE_FORCED_OBJECT", LUA_NATIVE_ENTITY_CREATE_FORCED_OBJECT);
		ENTITY.set_function("REMOVE_FORCED_OBJECT", LUA_NATIVE_ENTITY_REMOVE_FORCED_OBJECT);
		ENTITY.set_function("SET_ENTITY_NO_COLLISION_ENTITY", LUA_NATIVE_ENTITY_SET_ENTITY_NO_COLLISION_ENTITY);
		ENTITY.set_function("SET_ENTITY_MOTION_BLUR", LUA_NATIVE_ENTITY_SET_ENTITY_MOTION_BLUR);
		ENTITY.set_function("SET_CAN_AUTO_VAULT_ON_ENTITY", LUA_NATIVE_ENTITY_SET_CAN_AUTO_VAULT_ON_ENTITY);
		ENTITY.set_function("SET_CAN_CLIMB_ON_ENTITY", LUA_NATIVE_ENTITY_SET_CAN_CLIMB_ON_ENTITY);
		ENTITY.set_function("SET_ENTITY_NOWEAPONDECALS", LUA_NATIVE_ENTITY_SET_ENTITY_NOWEAPONDECALS);
		ENTITY.set_function("GET_ENTITIES_NEAR_POINT_", LUA_NATIVE_ENTITY_GET_ENTITIES_NEAR_POINT_);
		ENTITY.set_function("GET_MATCHING_ENTITIES", LUA_NATIVE_ENTITY_GET_MATCHING_ENTITIES);
		ENTITY.set_function("GET_ENTITIES_IN_VOLUME_", LUA_NATIVE_ENTITY_GET_ENTITIES_IN_VOLUME_);
		ENTITY.set_function("SEARCH_BUILDING_POOL_FOR_ENTITY_WITH_THIS_MODEL_", LUA_NATIVE_ENTITY_SEARCH_BUILDING_POOL_FOR_ENTITY_WITH_THIS_MODEL_);
		ENTITY.set_function("0xC2E71D7E0A7B4C89_", LUA_NATIVE_ENTITY_0xC2E71D7E0A7B4C89_);
		ENTITY.set_function("0x6C31B06E91518269_", LUA_NATIVE_ENTITY_0x6C31B06E91518269_);
		ENTITY.set_function("0x119A5714578F4E05_", LUA_NATIVE_ENTITY_0x119A5714578F4E05_);
		ENTITY.set_function("GET_ENTITY_BY_DOORHASH_", LUA_NATIVE_ENTITY_GET_ENTITY_BY_DOORHASH_);
		ENTITY.set_function("FIND_ANIM_EVENT_PHASE", LUA_NATIVE_ENTITY_FIND_ANIM_EVENT_PHASE);
		ENTITY.set_function("FORCE_ENTITY_AI_AND_ANIMATION_UPDATE", LUA_NATIVE_ENTITY_FORCE_ENTITY_AI_AND_ANIMATION_UPDATE);
		ENTITY.set_function("GET_ENTITY_ANIM_CURRENT_TIME_", LUA_NATIVE_ENTITY_GET_ENTITY_ANIM_CURRENT_TIME_);
		ENTITY.set_function("0x8E46E18AA828334F_", LUA_NATIVE_ENTITY_0x8E46E18AA828334F_);
		ENTITY.set_function("0xDF8E49EA89A01DB1_", LUA_NATIVE_ENTITY_0xDF8E49EA89A01DB1_);
		ENTITY.set_function("HAS_ANIM_EVENT_FIRED", LUA_NATIVE_ENTITY_HAS_ANIM_EVENT_FIRED);
		ENTITY.set_function("HAS_ENTITY_ANIM_FINISHED", LUA_NATIVE_ENTITY_HAS_ENTITY_ANIM_FINISHED);
		ENTITY.set_function("PLAY_ENTITY_ANIM", LUA_NATIVE_ENTITY_PLAY_ENTITY_ANIM);
		ENTITY.set_function("SET_ENTITY_ANIM_CURRENT_TIME_", LUA_NATIVE_ENTITY_SET_ENTITY_ANIM_CURRENT_TIME_);
		ENTITY.set_function("SET_ENTITY_ANIM_SPEED_", LUA_NATIVE_ENTITY_SET_ENTITY_ANIM_SPEED_);
		ENTITY.set_function("STOP_ENTITY_ANIM", LUA_NATIVE_ENTITY_STOP_ENTITY_ANIM);
		ENTITY.set_function("0x669655FFB29EF1A9_", LUA_NATIVE_ENTITY_0x669655FFB29EF1A9_);
		ENTITY.set_function("ADD_ENTITY_TRACKING_TRAILS_", LUA_NATIVE_ENTITY_ADD_ENTITY_TRACKING_TRAILS_);
		ENTITY.set_function("0x5826EFD6D73C4DE5_", LUA_NATIVE_ENTITY_0x5826EFD6D73C4DE5_);
		ENTITY.set_function("PAUSE_ENTITY_TRACKING_", LUA_NATIVE_ENTITY_PAUSE_ENTITY_TRACKING_);
		ENTITY.set_function("CREATE_FOOTPATH_TRAIL_", LUA_NATIVE_ENTITY_CREATE_FOOTPATH_TRAIL_);
		ENTITY.set_function("0xC76E94A78127412B_", LUA_NATIVE_ENTITY_0xC76E94A78127412B_);
		ENTITY.set_function("0x7F20092547B4DDEA_", LUA_NATIVE_ENTITY_0x7F20092547B4DDEA_);
		ENTITY.set_function("0xF41E2979D5BC5370_", LUA_NATIVE_ENTITY_0xF41E2979D5BC5370_);
		ENTITY.set_function("0xAAACB74442C1BED3_", LUA_NATIVE_ENTITY_0xAAACB74442C1BED3_);
		ENTITY.set_function("PIN_CLOSEST_MAP_ENTITY", LUA_NATIVE_ENTITY_PIN_CLOSEST_MAP_ENTITY);
		ENTITY.set_function("UNPIN_MAP_ENTITY_", LUA_NATIVE_ENTITY_UNPIN_MAP_ENTITY_);
		ENTITY.set_function("IS_MAP_ENTITY_PINNED", LUA_NATIVE_ENTITY_IS_MAP_ENTITY_PINNED);
		ENTITY.set_function("GET_PINNED_MAP_ENTITY_", LUA_NATIVE_ENTITY_GET_PINNED_MAP_ENTITY_);
		ENTITY.set_function("0xEAB3D91D30A344F1_", LUA_NATIVE_ENTITY_0xEAB3D91D30A344F1_);
		ENTITY.set_function("0x37CEB637BA3B1A47_", LUA_NATIVE_ENTITY_0x37CEB637BA3B1A47_);
		ENTITY.set_function("0x350E9211074955AF_", LUA_NATIVE_ENTITY_0x350E9211074955AF_);
		ENTITY.set_function("0x898586729DB5221D_", LUA_NATIVE_ENTITY_0x898586729DB5221D_);
		ENTITY.set_function("0xE9E7A0BAC7F57746_", LUA_NATIVE_ENTITY_0xE9E7A0BAC7F57746_);
	}
}
