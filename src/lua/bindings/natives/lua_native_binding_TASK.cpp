#include "lua_native_binding.hpp"
#include "game/rdr/Natives.hpp"

namespace Lua::native
{
	static void LUA_NATIVE_TASK_TASK_PAUSE(Ped PedIndex, int Time)
	{
		TASK::TASK_PAUSE(PedIndex, Time);
	}

	static void LUA_NATIVE_TASK_TASK_STAND_STILL(Ped PedIndex, int Time)
	{
		TASK::TASK_STAND_STILL(PedIndex, Time);
	}

	static void LUA_NATIVE_TASK_TASK_JUMP(Ped PedIndex, bool unused)
	{
		TASK::TASK_JUMP(PedIndex, unused);
	}

	static void LUA_NATIVE_TASK_TASK_JUMP_2_(Ped ped, float x, float y, float z, Entity entity)
	{
		TASK::_TASK_JUMP_2(ped, x, y, z, entity);
	}

	static void LUA_NATIVE_TASK_TASK_COWER(Ped PedIndex, int Time, Ped pedToCowerFrom, sol::stack_object p3)
	{
		TASK::TASK_COWER(PedIndex, Time, pedToCowerFrom, p3.is<const char*>() ? p3.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_TASK_TASK_HANDS_UP(Ped PedIndex, int Time, Ped PedToFaceIndex, int TimeToFacePed, int Flags)
	{
		TASK::TASK_HANDS_UP(PedIndex, Time, PedToFaceIndex, TimeToFacePed, Flags);
	}

	static void LUA_NATIVE_TASK_TASK_KNOCKED_OUT(Ped ped, float p1, bool permanently)
	{
		TASK::TASK_KNOCKED_OUT(ped, p1, permanently);
	}

	static void LUA_NATIVE_TASK_TASK_KNOCKED_OUT_AND_HOGTIED(Ped ped, float p1, int p2)
	{
		TASK::TASK_KNOCKED_OUT_AND_HOGTIED(ped, p1, p2);
	}

	static void LUA_NATIVE_TASK_0xFFB520A3E16F7B7B_(Ped ped, float p1)
	{
		TASK::_0xFFB520A3E16F7B7B(ped, p1);
	}

	static void LUA_NATIVE_TASK_0x8B1FDF63C3193EDA_(Ped ped, float p1)
	{
		TASK::_0x8B1FDF63C3193EDA(ped, p1);
	}

	static void LUA_NATIVE_TASK_UPDATE_TASK_HANDS_UP_DURATION(Ped PedIndex, int Time)
	{
		TASK::UPDATE_TASK_HANDS_UP_DURATION(PedIndex, Time);
	}

	static void LUA_NATIVE_TASK_0x28EF780BDEA8A639_(Ped ped, int p1)
	{
		TASK::_0x28EF780BDEA8A639(ped, p1);
	}

	static void LUA_NATIVE_TASK_TASK_DUCK(Ped ped, int p1)
	{
		TASK::TASK_DUCK(ped, p1);
	}

	static void LUA_NATIVE_TASK_TASK_BOARD_VEHICLE_(Ped ped, Vehicle vehicle, Any p2, Any p3, Any p4, Any p5)
	{
		TASK::_TASK_BOARD_VEHICLE(ped, vehicle, p2, p3, p4, p5);
	}

	static void LUA_NATIVE_TASK_TASK_DISEMBARK_VEHICLE_(Any p0, Vehicle vehicle, int p2, Any p3, float p4, Any p5)
	{
		TASK::_TASK_DISEMBARK_VEHICLE(p0, vehicle, p2, p3, p4, p5);
	}

	static void LUA_NATIVE_TASK_TASK_BOARD_VEHICLE_2_(Ped ped, Any p1, Any p2, float p3, int flags)
	{
		TASK::_TASK_BOARD_VEHICLE_2(ped, p1, p2, p3, flags);
	}

	static void LUA_NATIVE_TASK_TASK_DISEMBARK_NEAREST_TRAIN_CARRIAGE(Ped ped, float p1, int flags)
	{
		TASK::TASK_DISEMBARK_NEAREST_TRAIN_CARRIAGE(ped, p1, flags);
	}

	static void LUA_NATIVE_TASK_TASK_ENTER_VEHICLE(Ped PedIndex, Vehicle VehicleIndex, int Time, int seat, float MoveBlendRatio, int iFlags, sol::stack_object OverridenClipSet)
	{
		TASK::TASK_ENTER_VEHICLE(PedIndex, VehicleIndex, Time, seat, MoveBlendRatio, iFlags, OverridenClipSet.is<const char*>() ? OverridenClipSet.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_TASK_TASK_LEAVE_VEHICLE(Ped PedIndex, Vehicle VehicleIndex, int iFlags, Ped unkPed)
	{
		TASK::TASK_LEAVE_VEHICLE(PedIndex, VehicleIndex, iFlags, unkPed);
	}

	static void LUA_NATIVE_TASK_TASK_MOUNT_ANIMAL(Ped ped, Ped mount, int timer, int seatIndex, float pedSpeed, int mountStyle, Any p6, Any p7)
	{
		TASK::TASK_MOUNT_ANIMAL(ped, mount, timer, seatIndex, pedSpeed, mountStyle, p6, p7);
	}

	static void LUA_NATIVE_TASK_TASK_DISMOUNT_ANIMAL(Ped rider, int taskFlag, Any p2, Any p3, Any p4, Ped targetPed)
	{
		TASK::TASK_DISMOUNT_ANIMAL(rider, taskFlag, p2, p3, p4, targetPed);
	}

	static void LUA_NATIVE_TASK_TASK_HITCH_ANIMAL(Ped ped, int scenarioPoint, int flag)
	{
		TASK::TASK_HITCH_ANIMAL(ped, scenarioPoint, flag);
	}

	static void LUA_NATIVE_TASK_0xE05A5D39BE6E93AF_(Any p0)
	{
		TASK::_0xE05A5D39BE6E93AF(p0);
	}

	static void LUA_NATIVE_TASK_TASK_VEHICLE_DRIVE_TO_COORD(Ped PedIndex, Vehicle VehicleIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ, float Speed, int Style, Hash CarModel, int Mode, float TargetRadius, float StraightLineDist)
	{
		TASK::TASK_VEHICLE_DRIVE_TO_COORD(PedIndex, VehicleIndex, VecCoorsX, VecCoorsY, VecCoorsZ, Speed, Style, CarModel, Mode, TargetRadius, StraightLineDist);
	}

	static void LUA_NATIVE_TASK_TASK_VEHICLE_DRIVE_TO_COORD_2_(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		TASK::_TASK_VEHICLE_DRIVE_TO_COORD_2(ped, p1, p2, p3, p4, p5, p6, p7, p8);
	}

	static void LUA_NATIVE_TASK_TASK_VEHICLE_DRIVE_WANDER(Ped PedIndex, Vehicle VehicleIndex, float CruiseSpeed, int Mode)
	{
		TASK::TASK_VEHICLE_DRIVE_WANDER(PedIndex, VehicleIndex, CruiseSpeed, Mode);
	}

	static void LUA_NATIVE_TASK_TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Ped PedIndex, Entity EntityIndex, float VecOffsetX, float VecOffsetY, float VecOffsetZ, float MoveBlendRatio, int Time, float Radius, bool persistFollowing, bool p9, bool walkOnly, bool p11, bool p12, bool p13)
	{
		TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(PedIndex, EntityIndex, VecOffsetX, VecOffsetY, VecOffsetZ, MoveBlendRatio, Time, Radius, persistFollowing, p9, walkOnly, p11, p12, p13);
	}

	static void LUA_NATIVE_TASK_TASK_FOLLOW_TO_OFFSET_OF_COORD(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14)
	{
		TASK::TASK_FOLLOW_TO_OFFSET_OF_COORD(ped, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14);
	}

	static void LUA_NATIVE_TASK_0x3FFCD7BBA074CC80_(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		TASK::_0x3FFCD7BBA074CC80(ped, p1, p2, p3, p4, p5, p6, p7, p8);
	}

	static void LUA_NATIVE_TASK_TASK_GO_STRAIGHT_TO_COORD(Ped PedIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ, float MoveBlendRatio, int Time, float FinalHeading, float TargetRadius, int p8)
	{
		TASK::TASK_GO_STRAIGHT_TO_COORD(PedIndex, VecCoorsX, VecCoorsY, VecCoorsZ, MoveBlendRatio, Time, FinalHeading, TargetRadius, p8);
	}

	static void LUA_NATIVE_TASK_TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_ENTITY(Ped PedIndex, Entity EntityIndex, float VecOffsetX, float VecOffsetY, float VecOffsetZ, float MoveBlendRatio, int Time, Any p7)
	{
		TASK::TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_ENTITY(PedIndex, EntityIndex, VecOffsetX, VecOffsetY, VecOffsetZ, MoveBlendRatio, Time, p7);
	}

	static void LUA_NATIVE_TASK_TASK_MOVE_IN_TRAFFIC(Ped ped, Any p1, Any p2, Any p3)
	{
		TASK::TASK_MOVE_IN_TRAFFIC(ped, p1, p2, p3);
	}

	static void LUA_NATIVE_TASK_TASK_MOVE_IN_TRAFFIC_TO_DESTINATION(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		TASK::TASK_MOVE_IN_TRAFFIC_TO_DESTINATION(ped, p1, p2, p3, p4, p5, p6, p7);
	}

	static void LUA_NATIVE_TASK_TASK_MOVE_IN_TRAFFIC_AWAY_FROM_ENTITY(Ped ped, Any p1, Any p2, Any p3, Any p4)
	{
		TASK::TASK_MOVE_IN_TRAFFIC_AWAY_FROM_ENTITY(ped, p1, p2, p3, p4);
	}

	static void LUA_NATIVE_TASK_0xBAAB791AA72C2821_(Any p0, Any p1)
	{
		TASK::_0xBAAB791AA72C2821(p0, p1);
	}

	static void LUA_NATIVE_TASK_TASK_MOVE_FOLLOW_ROAD_USING_NAVMESH(Ped ped, float moveBlendRatio, float x, float y, float z, Any p5)
	{
		TASK::TASK_MOVE_FOLLOW_ROAD_USING_NAVMESH(ped, moveBlendRatio, x, y, z, p5);
	}

	static void LUA_NATIVE_TASK_TASK_ACHIEVE_HEADING(Ped PedIndex, float heading, int Time)
	{
		TASK::TASK_ACHIEVE_HEADING(PedIndex, heading, Time);
	}

	static void LUA_NATIVE_TASK_TASK_FLUSH_ROUTE()
	{
		TASK::TASK_FLUSH_ROUTE();
	}

	static void LUA_NATIVE_TASK_TASK_EXTEND_ROUTE(float VecCoorsX, float VecCoorsY, float VecCoorsZ)
	{
		TASK::TASK_EXTEND_ROUTE(VecCoorsX, VecCoorsY, VecCoorsZ);
	}

	static void LUA_NATIVE_TASK_TASK_FOLLOW_POINT_ROUTE(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		TASK::TASK_FOLLOW_POINT_ROUTE(ped, p1, p2, p3, p4, p5);
	}

	static void LUA_NATIVE_TASK_TASK_ENTER_ANIM_SCENE(Ped ped, AnimScene animScene, sol::stack_object entityName, sol::stack_object playbackListName, float enterSpeed, bool bAutoStart, int flag, int p7, float p8)
	{
		TASK::TASK_ENTER_ANIM_SCENE(ped, animScene, entityName.is<const char*>() ? entityName.as<const char*>() : nullptr, playbackListName.is<const char*>() ? playbackListName.as<const char*>() : nullptr, enterSpeed, bAutoStart, flag, p7, p8);
	}

	static void LUA_NATIVE_TASK_TASK_MOVE_BE_IN_FORMATION(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		TASK::TASK_MOVE_BE_IN_FORMATION(ped, p1, p2, p3, p4, p5, p6);
	}

	static void LUA_NATIVE_TASK_TASK_GO_TO_ENTITY(Ped PedIndex, Entity EntityIndex, int Time, float SeekRadius, float MoveBlendRatio, float SlowDownDistance, int GotoFlags)
	{
		TASK::TASK_GO_TO_ENTITY(PedIndex, EntityIndex, Time, SeekRadius, MoveBlendRatio, SlowDownDistance, GotoFlags);
	}

	static void LUA_NATIVE_TASK_TASK_FOLLOW_AND_CONVERSE_WITH_PED(Ped ped, Ped targetPed, Any p2, Any p3, float p4, float p5, int p6, Any p7, Any p8, float p9, float p10)
	{
		TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(ped, targetPed, p2, p3, p4, p5, p6, p7, p8, p9, p10);
	}

	static void LUA_NATIVE_TASK_0xA052608A12559BBB_(Any p0, Any p1)
	{
		TASK::_0xA052608A12559BBB(p0, p1);
	}

	static void LUA_NATIVE_TASK_TASK_WANDER_AND_CONVERSE_WITH_PED(Ped ped, Any p1, Any p2, Any p3)
	{
		TASK::TASK_WANDER_AND_CONVERSE_WITH_PED(ped, p1, p2, p3);
	}

	static void LUA_NATIVE_TASK_TASK_LEAD_AND_CONVERSE(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		TASK::TASK_LEAD_AND_CONVERSE(ped, p1, p2, p3, p4, p5, p6, p7, p8);
	}

	static void LUA_NATIVE_TASK_0xDE0C8B145EA466FF_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		TASK::_0xDE0C8B145EA466FF(p0, p1, p2, p3, p4, p5);
	}

	static void LUA_NATIVE_TASK_TASK_SEEK_CLEAR_LOS_TO_ENTITY(Ped ped, Entity entity, float p2, float p3, float p4)
	{
		TASK::TASK_SEEK_CLEAR_LOS_TO_ENTITY(ped, entity, p2, p3, p4);
	}

	static void LUA_NATIVE_TASK_TASK_GO_TO_WHISTLE(Ped ped, Ped p1, int whistleType)
	{
		TASK::TASK_GO_TO_WHISTLE(ped, p1, whistleType);
	}

	static Any LUA_NATIVE_TASK_0xEB67D4E056C85A81_(Any p0)
	{
		auto retval = TASK::_0xEB67D4E056C85A81(p0);
		return retval;
	}

	static Any LUA_NATIVE_TASK_0x78D8C1D4EB80C588_(Any p0)
	{
		auto retval = TASK::_0x78D8C1D4EB80C588(p0);
		return retval;
	}

	static void LUA_NATIVE_TASK_TASK_LEAD_HORSE(Ped ped, Ped horse)
	{
		TASK::TASK_LEAD_HORSE(ped, horse);
	}

	static void LUA_NATIVE_TASK_TASK_STOP_LEADING_HORSE(Ped ped)
	{
		TASK::TASK_STOP_LEADING_HORSE(ped);
	}

	static void LUA_NATIVE_TASK_TASK_FLEE_FROM_COORD_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11)
	{
		TASK::_TASK_FLEE_FROM_COORD(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11);
	}

	static void LUA_NATIVE_TASK_TASK_FLEE_FROM_PED_(Ped ped, Ped fleeFromTarget, float x, float y, float z, float distance, int p6, int p7, float p8, Ped targetPed)
	{
		TASK::_TASK_FLEE_FROM_PED(ped, fleeFromTarget, x, y, z, distance, p6, p7, p8, targetPed);
	}

	static void LUA_NATIVE_TASK_TASK_SMART_FLEE_COORD(Ped PedIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ, float SafeDistance, int FleeTime, int fleeType, float fleeSpeed)
	{
		TASK::TASK_SMART_FLEE_COORD(PedIndex, VecCoorsX, VecCoorsY, VecCoorsZ, SafeDistance, FleeTime, fleeType, fleeSpeed);
	}

	static void LUA_NATIVE_TASK_TASK_SMART_FLEE_PED(Ped PedIndex, Ped OtherPedIndex, float SafeDistance, int FleeTime, int fleeType, float fleeSpeed, Ped targetPed)
	{
		TASK::TASK_SMART_FLEE_PED(PedIndex, OtherPedIndex, SafeDistance, FleeTime, fleeType, fleeSpeed, targetPed);
	}

	static void LUA_NATIVE_TASK_0x673A8779D229BA5A_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		TASK::_0x673A8779D229BA5A(p0, p1, p2, p3, p4, p5);
	}

	static void LUA_NATIVE_TASK_0x2E1D6D87346BB7D2_(Any p0, Any p1, Any p2, Any p3)
	{
		TASK::_0x2E1D6D87346BB7D2(p0, p1, p2, p3);
	}

	static void LUA_NATIVE_TASK_TASK_FLEE_COORD(Ped ped, float x, float y, float z, int fleeStyle, int p5, float p6, int duration, int p8)
	{
		TASK::TASK_FLEE_COORD(ped, x, y, z, fleeStyle, p5, p6, duration, p8);
	}

	static void LUA_NATIVE_TASK_TASK_FLEE_PED(Ped ped, Ped fleeFromTarget, int fleeStyle, int flag, float p4, int p5, int p6)
	{
		TASK::TASK_FLEE_PED(ped, fleeFromTarget, fleeStyle, flag, p4, p5, p6);
	}

	static void LUA_NATIVE_TASK_TASK_FLEE_COORD_VIA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11)
	{
		TASK::TASK_FLEE_COORD_VIA(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11);
	}

	static void LUA_NATIVE_TASK_TASK_FLEE_PED_VIA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		TASK::TASK_FLEE_PED_VIA(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}

	static void LUA_NATIVE_TASK_ADD_FLEE_TARGET_COORDS_(Ped ped, float x, float y, float z, float p4)
	{
		TASK::_ADD_FLEE_TARGET_COORDS(ped, x, y, z, p4);
	}

	static void LUA_NATIVE_TASK_ADD_FLEE_TARGET_PED(Ped ped, Ped targetPed, float p2)
	{
		TASK::ADD_FLEE_TARGET_PED(ped, targetPed, p2);
	}

	static void LUA_NATIVE_TASK_0xA42DC7919159CCCF_(Any p0)
	{
		TASK::_0xA42DC7919159CCCF(p0);
	}

	static void LUA_NATIVE_TASK_TASK_FLY_AWAY(Ped ped, Ped fleeFromTarget)
	{
		TASK::TASK_FLY_AWAY(ped, fleeFromTarget);
	}

	static void LUA_NATIVE_TASK_TASK_FLY_TO_COORD(Ped ped, float travelMbr, float x, float y, float z, bool p5, bool p6)
	{
		TASK::TASK_FLY_TO_COORD(ped, travelMbr, x, y, z, p5, p6);
	}

	static void LUA_NATIVE_TASK_TASK_FLYING_CIRCLE(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		TASK::TASK_FLYING_CIRCLE(ped, p1, p2, p3, p4, p5, p6);
	}

	static void LUA_NATIVE_TASK_TASK_WALK_AWAY(Ped ped, Entity entity)
	{
		TASK::TASK_WALK_AWAY(ped, entity);
	}

	static void LUA_NATIVE_TASK_TASK_SHOCKING_EVENT_REACT(Ped PedIndex, int shockingEventId, Any p2)
	{
		TASK::TASK_SHOCKING_EVENT_REACT(PedIndex, shockingEventId, p2);
	}

	static void LUA_NATIVE_TASK_TASK_REACT(Ped ped, Entity reactingTo, float x, float y, float z, sol::stack_object reactionName, float p6, float p7, int p8)
	{
		TASK::TASK_REACT(ped, reactingTo, x, y, z, reactionName.is<const char*>() ? reactionName.as<const char*>() : nullptr, p6, p7, p8);
	}

	static void LUA_NATIVE_TASK_TASK_WANDER_IN_AREA(Ped PedIndex, float VecCenterX, float VecCenterY, float VecCenterZ, float Radius, float MinWaitTime, float MaxWaitTime, int p7)
	{
		TASK::TASK_WANDER_IN_AREA(PedIndex, VecCenterX, VecCenterY, VecCenterZ, Radius, MinWaitTime, MaxWaitTime, p7);
	}

	static void LUA_NATIVE_TASK_TASK_WANDER_IN_VOLUME(Ped ped, Volume volume, float p2, float p3, int p4)
	{
		TASK::TASK_WANDER_IN_VOLUME(ped, volume, p2, p3, p4);
	}

	static void LUA_NATIVE_TASK_TASK_WANDER_STANDARD(Ped PedIndex, float Heading, int WanderFlags)
	{
		TASK::TASK_WANDER_STANDARD(PedIndex, Heading, WanderFlags);
	}

	static void LUA_NATIVE_TASK_TASK_WANDER_SWIM(Ped ped, Any p1)
	{
		TASK::TASK_WANDER_SWIM(ped, p1);
	}

	static void LUA_NATIVE_TASK_TASK_PLANT_BOMB(Ped PedIndex, float vTargetPositionX, float vTargetPositionY, float vTargetPositionZ, float fTargetHeading)
	{
		TASK::TASK_PLANT_BOMB(PedIndex, vTargetPositionX, vTargetPositionY, vTargetPositionZ, fTargetHeading);
	}

	static void LUA_NATIVE_TASK_TASK_HORSE_ACTION(Ped ped, int action, Ped targetPed, Any p3)
	{
		TASK::TASK_HORSE_ACTION(ped, action, targetPed, p3);
	}

	static void LUA_NATIVE_TASK_TASK_ANIMAL_INTERACTION(Ped ped, Ped targetPed, Hash interactionType, Hash interactionModel, bool skipIdleAnimationClip)
	{
		TASK::TASK_ANIMAL_INTERACTION(ped, targetPed, interactionType, interactionModel, skipIdleAnimationClip);
	}

	static void LUA_NATIVE_TASK_TASK_COMBAT_ANIMAL_WARN(Ped ped, Any p1, Any p2)
	{
		TASK::TASK_COMBAT_ANIMAL_WARN(ped, p1, p2);
	}

	static void LUA_NATIVE_TASK_TASK_COMBAT_ANIMAL_CHARGE_PED(Ped ped, Ped targetPed, bool p2, Any p3, Any p4, Any p5, Any p6)
	{
		TASK::TASK_COMBAT_ANIMAL_CHARGE_PED(ped, targetPed, p2, p3, p4, p5, p6);
	}

	static Any LUA_NATIVE_TASK_0x76610D12A838EBDE_(Any p0)
	{
		auto retval = TASK::_0x76610D12A838EBDE(p0);
		return retval;
	}

	static void LUA_NATIVE_TASK_TASK_AMBIENT_ANIMAL_STALK(Ped ped, Any p1, Any p2)
	{
		TASK::TASK_AMBIENT_ANIMAL_STALK(ped, p1, p2);
	}

	static void LUA_NATIVE_TASK_TASK_AMBIENT_ANIMAL_HUNT(Ped ped, Any p1, Any p2)
	{
		TASK::TASK_AMBIENT_ANIMAL_HUNT(ped, p1, p2);
	}

	static void LUA_NATIVE_TASK_TASK_ANIMAL_UNALERTED(Ped ped, Any p1, Any p2, Any p3, Any p4)
	{
		TASK::TASK_ANIMAL_UNALERTED(ped, p1, p2, p3, p4);
	}

	static void LUA_NATIVE_TASK_TASK_ANIMAL_ALERTED(Ped ped, Any p1, Any p2)
	{
		TASK::TASK_ANIMAL_ALERTED(ped, p1, p2);
	}

	static void LUA_NATIVE_TASK_TASK_ANIMAL_FLEE(Ped ped, Ped targetPed, Any p2)
	{
		TASK::TASK_ANIMAL_FLEE(ped, targetPed, p2);
	}

	static Any LUA_NATIVE_TASK_0x244430C13BA5258E_(Any p0, Any p1, Any p2, Any p3)
	{
		auto retval = TASK::_0x244430C13BA5258E(p0, p1, p2, p3);
		return retval;
	}

	static void LUA_NATIVE_TASK_TASK_EAT(Ped ped, Any p1, Any p2)
	{
		TASK::TASK_EAT(ped, p1, p2);
	}

	static void LUA_NATIVE_TASK_TASK_BARK(Ped ped, Ped barkAtTarget, Hash mood)
	{
		TASK::TASK_BARK(ped, barkAtTarget, mood);
	}

	static void LUA_NATIVE_TASK_TASK_FOLLOW_PAVEMENT_TO_COORD(Ped ped, uintptr_t args)
	{
		TASK::TASK_FOLLOW_PAVEMENT_TO_COORD(ped, (Any*)args);
	}

	static void LUA_NATIVE_TASK_TASK_FOLLOW_NAV_MESH_TO_COORD(Ped PedIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ, float MoveBlendRatio, int Time, float Radius, int NavFlags, float FinalHeading)
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PedIndex, VecCoorsX, VecCoorsY, VecCoorsZ, MoveBlendRatio, Time, Radius, NavFlags, FinalHeading);
	}

	static void LUA_NATIVE_TASK_TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(Ped PedIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ, float MoveBlendRatio, int Time, float Radius, int iNavFlags, float m_fSlideToCoordHeading, float m_fMaxSlopeNavigable, float m_fClampMaxSearchDistance, Entity entity, float FinalHeading)
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(PedIndex, VecCoorsX, VecCoorsY, VecCoorsZ, MoveBlendRatio, Time, Radius, iNavFlags, m_fSlideToCoordHeading, m_fMaxSlopeNavigable, m_fClampMaxSearchDistance, entity, FinalHeading);
	}

	static void LUA_NATIVE_TASK_SET_PED_PATH_CAN_USE_CLIMBOVERS(Ped PedIndex, bool bUseClimbovers)
	{
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(PedIndex, bUseClimbovers);
	}

	static void LUA_NATIVE_TASK_SET_PED_PATH_CAN_USE_LADDERS(Ped PedIndex, bool bUseLadders)
	{
		TASK::SET_PED_PATH_CAN_USE_LADDERS(PedIndex, bUseLadders);
	}

	static void LUA_NATIVE_TASK_SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Ped PedIndex, bool bDrop)
	{
		TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(PedIndex, bDrop);
	}

	static Any LUA_NATIVE_TASK_0xE6A151364C600B24_(Any p0)
	{
		auto retval = TASK::_0xE6A151364C600B24(p0);
		return retval;
	}

	static void LUA_NATIVE_TASK_0x1632EB9386CDBE64_(Any p0, Any p1)
	{
		TASK::_0x1632EB9386CDBE64(p0, p1);
	}

	static void LUA_NATIVE_TASK_SET_PED_PATH_CLIMB_COST_MODIFIER(Ped PedIndex, float fClimbModifier)
	{
		TASK::SET_PED_PATH_CLIMB_COST_MODIFIER(PedIndex, fClimbModifier);
	}

	static void LUA_NATIVE_TASK_SET_PED_PATH_DEEP_SNOW_COST_MODIFIER(Ped ped, float modifier)
	{
		TASK::SET_PED_PATH_DEEP_SNOW_COST_MODIFIER(ped, modifier);
	}

	static void LUA_NATIVE_TASK_SET_PED_PATH_FOLIAGE_COST_MODIFIER(Ped ped, float modifier)
	{
		TASK::SET_PED_PATH_FOLIAGE_COST_MODIFIER(ped, modifier);
	}

	static void LUA_NATIVE_TASK_0x8798CF6815B8FE0F_(Any p0, Any p1)
	{
		TASK::_0x8798CF6815B8FE0F(p0, p1);
	}

	static void LUA_NATIVE_TASK_0x5B68D0007D9C92EB_(Any p0, Any p1)
	{
		TASK::_0x5B68D0007D9C92EB(p0, p1);
	}

	static void LUA_NATIVE_TASK_0x82ED59F095056550_(Any p0, Any p1)
	{
		TASK::_0x82ED59F095056550(p0, p1);
	}

	static void LUA_NATIVE_TASK_0xE01C8DC8EDD28D31_(Any p0, Any p1)
	{
		TASK::_0xE01C8DC8EDD28D31(p0, p1);
	}

	static void LUA_NATIVE_TASK_0x098CAA6DBE7D8D82_(Any p0, Any p1)
	{
		TASK::_0x098CAA6DBE7D8D82(p0, p1);
	}

	static bool LUA_NATIVE_TASK_GET_PED_IS_IGNORING_DEAD_BODIES_(Ped ped)
	{
		auto retval = (bool)TASK::_GET_PED_IS_IGNORING_DEAD_BODIES(ped);
		return retval;
	}

	static void LUA_NATIVE_TASK_SET_PED_IGNORE_DEAD_BODIES_(Ped ped, bool toggle)
	{
		TASK::_SET_PED_IGNORE_DEAD_BODIES(ped, toggle);
	}

	static void LUA_NATIVE_TASK_SET_PED_PATH_LADDER_COST_MODIFIER_(Ped ped, float modifier)
	{
		TASK::_SET_PED_PATH_LADDER_COST_MODIFIER(ped, modifier);
	}

	static void LUA_NATIVE_TASK_SET_PED_PATH_MAY_ENTER_WATER(Ped PedIndex, bool bMayEnter)
	{
		TASK::SET_PED_PATH_MAY_ENTER_WATER(PedIndex, bMayEnter);
	}

	static void LUA_NATIVE_TASK_SET_PED_PATH_MAY_ENTER_DEEP_WATER_(Ped ped, bool mayEnterDeepWater)
	{
		TASK::_SET_PED_PATH_MAY_ENTER_DEEP_WATER(ped, mayEnterDeepWater);
	}

	static void LUA_NATIVE_TASK_0xC6170856E54557B2_(Any p0, Any p1, Any p2)
	{
		TASK::_0xC6170856E54557B2(p0, p1, p2);
	}

	static void LUA_NATIVE_TASK_0xF948F4356F010F11_(Any p0, Any p1, Any p2)
	{
		TASK::_0xF948F4356F010F11(p0, p1, p2);
	}

	static void LUA_NATIVE_TASK_SET_PED_PATH_PREFER_TO_AVOID_WATER(Ped PedIndex, bool bPreferToAvoid, float p2)
	{
		TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(PedIndex, bPreferToAvoid, p2);
	}

	static void LUA_NATIVE_TASK_0x8BB283A7888AD1AD_(Any p0, Any p1, Any p2)
	{
		TASK::_0x8BB283A7888AD1AD(p0, p1, p2);
	}

	static void LUA_NATIVE_TASK_0x12990818C1D35886_(Any p0, Any p1, Any p2)
	{
		TASK::_0x12990818C1D35886(p0, p1, p2);
	}

	static void LUA_NATIVE_TASK_0x7C015D8BCEC72CF4_(Any p0, Any p1)
	{
		TASK::_0x7C015D8BCEC72CF4(p0, p1);
	}

	static void LUA_NATIVE_TASK_SET_PED_PATH_AVOID_FIRE(Ped PedIndex, bool bAvoid)
	{
		TASK::SET_PED_PATH_AVOID_FIRE(PedIndex, bAvoid);
	}

	static void LUA_NATIVE_TASK_0x42CFD8FD8CC8DC69_(Any p0, Any p1)
	{
		TASK::_0x42CFD8FD8CC8DC69(p0, p1);
	}

	static void LUA_NATIVE_TASK_0x216343750545A486_(Any p0, Any p1, Any p2)
	{
		TASK::_0x216343750545A486(p0, p1, p2);
	}

	static void LUA_NATIVE_TASK_0x06ECF3925BC2ABAE_(Any p0, Any p1)
	{
		TASK::_0x06ECF3925BC2ABAE(p0, p1);
	}

	static void LUA_NATIVE_TASK_0xFA30E2254461ADEB_(Any p0, Any p1)
	{
		TASK::_0xFA30E2254461ADEB(p0, p1);
	}

	static void LUA_NATIVE_TASK_TASK_GO_TO_COORD_ANY_MEANS(Ped PedIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ, float MoveBlendRatio, Vehicle VehicleIndex, bool p6, int DrivingFlags, float MaxRangeToShootTargets)
	{
		TASK::TASK_GO_TO_COORD_ANY_MEANS(PedIndex, VecCoorsX, VecCoorsY, VecCoorsZ, MoveBlendRatio, VehicleIndex, p6, DrivingFlags, MaxRangeToShootTargets);
	}

	static void LUA_NATIVE_TASK_TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS(Ped PedIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ, float MoveBlendRatio, Vehicle VehicleIndex, bool p6, int DrivingFlags, float MaxRangeToShootTargets, float fExtraVehToTargetDistToPreferVeh, float fDriveStraightLineDistance, int iExtraFlags, float fWarpTimerMS)
	{
		TASK::TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS(PedIndex, VecCoorsX, VecCoorsY, VecCoorsZ, MoveBlendRatio, VehicleIndex, p6, DrivingFlags, MaxRangeToShootTargets, fExtraVehToTargetDistToPreferVeh, fDriveStraightLineDistance, iExtraFlags, fWarpTimerMS);
	}

	static void LUA_NATIVE_TASK_TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED(Ped PedIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ, float MoveBlendRatio, Vehicle VehicleIndex, bool p6, int DrivingFlags, float MaxRangeToShootTargets, float fExtraVehToTargetDistToPreferVeh, float fDriveStraightLineDistance, int iExtraFlags, float fCruiseSpeed, float fTargetArriveDist, Any p14)
	{
		TASK::TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED(PedIndex, VecCoorsX, VecCoorsY, VecCoorsZ, MoveBlendRatio, VehicleIndex, p6, DrivingFlags, MaxRangeToShootTargets, fExtraVehToTargetDistToPreferVeh, fDriveStraightLineDistance, iExtraFlags, fCruiseSpeed, fTargetArriveDist, p14);
	}

	static void LUA_NATIVE_TASK_TASK_PLAY_ANIM(Ped PedIndex, sol::stack_object pAnimDictName, sol::stack_object pAnimName, float fBlendInDelta, float fBlendOutDelta, int nTimeToPlay, int AnimFlags, float startPhase, bool phaseControlled, int ikFlags, bool bAllowOverrideCloneUpdate, sol::stack_object taskFilter, bool p12)
	{
		TASK::TASK_PLAY_ANIM(PedIndex, pAnimDictName.is<const char*>() ? pAnimDictName.as<const char*>() : nullptr, pAnimName.is<const char*>() ? pAnimName.as<const char*>() : nullptr, fBlendInDelta, fBlendOutDelta, nTimeToPlay, AnimFlags, startPhase, phaseControlled, ikFlags, bAllowOverrideCloneUpdate, taskFilter.is<const char*>() ? taskFilter.as<const char*>() : nullptr, p12);
	}

	static void LUA_NATIVE_TASK_TASK_PLAY_ANIM_ADVANCED(Ped PedIndex, sol::stack_object pAnimDictName, sol::stack_object pAnimName, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float fBlendInDelta, float fBlendOutDelta, int nTimeToPlay, int AnimFlags, float startPhase, int RotOrder, int p15, bool p16)
	{
		TASK::TASK_PLAY_ANIM_ADVANCED(PedIndex, pAnimDictName.is<const char*>() ? pAnimDictName.as<const char*>() : nullptr, pAnimName.is<const char*>() ? pAnimName.as<const char*>() : nullptr, posX, posY, posZ, rotX, rotY, rotZ, fBlendInDelta, fBlendOutDelta, nTimeToPlay, AnimFlags, startPhase, RotOrder, p15, p16);
	}

	static void LUA_NATIVE_TASK_TASK_PLAY_UPPER_ANIM_FACING_ENTITY(Ped ped, sol::stack_object animDict, sol::stack_object animName, Entity entity, int p4, float p5, float p6, int p7, float p8, bool p9, bool p10, float p11, sol::stack_object p12, int p13, float p14)
	{
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(ped, animDict.is<const char*>() ? animDict.as<const char*>() : nullptr, animName.is<const char*>() ? animName.as<const char*>() : nullptr, entity, p4, p5, p6, p7, p8, p9, p10, p11, p12.is<const char*>() ? p12.as<const char*>() : nullptr, p13, p14);
	}

	static void LUA_NATIVE_TASK_STOP_ANIM_TASK(Entity EntityIndex, sol::stack_object pAnimDictName, sol::stack_object pAnimName, float fBlendOutDelta)
	{
		TASK::STOP_ANIM_TASK(EntityIndex, pAnimDictName.is<const char*>() ? pAnimDictName.as<const char*>() : nullptr, pAnimName.is<const char*>() ? pAnimName.as<const char*>() : nullptr, fBlendOutDelta);
	}

	static void LUA_NATIVE_TASK_TASK_SCRIPTED_ANIMATION(Ped PedIndex, uintptr_t args)
	{
		TASK::TASK_SCRIPTED_ANIMATION(PedIndex, (Any*)args);
	}

	static void LUA_NATIVE_TASK_PLAY_ENTITY_SCRIPTED_ANIM(Entity EntityIndex, uintptr_t args)
	{
		TASK::PLAY_ENTITY_SCRIPTED_ANIM(EntityIndex, (Any*)args);
	}

	static void LUA_NATIVE_TASK_STOP_ANIM_PLAYBACK(Entity EntityIndex, int priority, bool secondary)
	{
		TASK::STOP_ANIM_PLAYBACK(EntityIndex, priority, secondary);
	}

	static void LUA_NATIVE_TASK_SET_ANIM_FILTER(Any p0, Any p1, Any p2, Any p3)
	{
		TASK::SET_ANIM_FILTER(p0, p1, p2, p3);
	}

	static void LUA_NATIVE_TASK_SET_ANIM_RATE(Entity EntityIndex, float rate, int priority, bool secondary)
	{
		TASK::SET_ANIM_RATE(EntityIndex, rate, priority, secondary);
	}

	static bool LUA_NATIVE_TASK_CAN_START_ITEM_INTERACTION(Ped ped, Hash itemHash, Hash interactionAnimHash, int p3)
	{
		auto retval = (bool)TASK::CAN_START_ITEM_INTERACTION(ped, itemHash, interactionAnimHash, p3);
		return retval;
	}

	static void LUA_NATIVE_TASK_START_TASK_ITEM_INTERACTION(Ped ped, Hash itemHash, Hash interactionAnimHash, int p3, int flag, float p5)
	{
		TASK::START_TASK_ITEM_INTERACTION(ped, itemHash, interactionAnimHash, p3, flag, p5);
	}

	static void LUA_NATIVE_TASK_TASK_ITEM_INTERACTION_2_(Ped ped, Hash propNameGxt, Object prop, Hash propId, Hash itemInteractionState, int p5, Any p6, float p7)
	{
		TASK::_TASK_ITEM_INTERACTION_2(ped, propNameGxt, prop, propId, itemInteractionState, p5, p6, p7);
	}

	static void LUA_NATIVE_TASK_TASK_ITEM_INTERACTION_3_(Ped ped, Hash item, uintptr_t guid, Any p3, Any p4, Any p5, float p6)
	{
		TASK::_TASK_ITEM_INTERACTION_3(ped, item, (Any*)guid, p3, p4, p5, p6);
	}

	static void LUA_NATIVE_TASK_0xB35370D5353995CB_(Ped ped, Hash item, float p2)
	{
		TASK::_0xB35370D5353995CB(ped, item, p2);
	}

	static Hash LUA_NATIVE_TASK_GET_ITEM_INTERACTION_STATE(Ped ped)
	{
		auto retval = TASK::GET_ITEM_INTERACTION_STATE(ped);
		return retval;
	}

	static Hash LUA_NATIVE_TASK_GET_ITEM_INTERACTION_ITEM_ID(Ped ped)
	{
		auto retval = TASK::GET_ITEM_INTERACTION_ITEM_ID(ped);
		return retval;
	}

	static bool LUA_NATIVE_TASK_IS_PED_RUNNING_INSPECTION_TASK(Ped ped)
	{
		auto retval = (bool)TASK::IS_PED_RUNNING_INSPECTION_TASK(ped);
		return retval;
	}

	static bool LUA_NATIVE_TASK_IS_PED_RUNNING_TASK_ITEM_INTERACTION(Ped ped)
	{
		auto retval = (bool)TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(ped);
		return retval;
	}

	static Entity LUA_NATIVE_TASK_GET_ITEM_INTERACTION_ENTITY_FROM_PED_(Ped ped, Hash item)
	{
		auto retval = TASK::_GET_ITEM_INTERACTION_ENTITY_FROM_PED(ped, item);
		return retval;
	}

	static float LUA_NATIVE_TASK_GET_ITEM_INTERACTION_PROMPT_PROGRESS(Ped ped, Hash inputContext)
	{
		auto retval = TASK::GET_ITEM_INTERACTION_PROMPT_PROGRESS(ped, inputContext);
		return retval;
	}

	static Object LUA_NATIVE_TASK_0x678D3226CF70B9C8_(Ped ped, bool p1)
	{
		auto retval = TASK::_0x678D3226CF70B9C8(ped, p1);
		return retval;
	}

	static void LUA_NATIVE_TASK_TASK_EVASIVE_ANIM(Ped ped1, Ped ped2, int p2)
	{
		TASK::TASK_EVASIVE_ANIM(ped1, ped2, p2);
	}

	static void LUA_NATIVE_TASK_TASK_LOOK_AT_COORD(Ped PedIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ, int time, int LookFlags, int p6, bool p7)
	{
		TASK::TASK_LOOK_AT_COORD(PedIndex, VecCoorsX, VecCoorsY, VecCoorsZ, time, LookFlags, p6, p7);
	}

	static void LUA_NATIVE_TASK_TASK_LOOK_AT_ENTITY(Ped PedIndex, Entity EntityIndex, int time, int p3, int p4, int p5)
	{
		TASK::TASK_LOOK_AT_ENTITY(PedIndex, EntityIndex, time, p3, p4, p5);
	}

	static void LUA_NATIVE_TASK_TASK_CLEAR_LOOK_AT(Ped PedIndex)
	{
		TASK::TASK_CLEAR_LOOK_AT(PedIndex);
	}

	static bool LUA_NATIVE_TASK_0x508F5053E3F6F0C4_(Ped ped, float x, float y, float z, float p4)
	{
		auto retval = (bool)TASK::_0x508F5053E3F6F0C4(ped, x, y, z, p4);
		return retval;
	}

	static void LUA_NATIVE_TASK_0x23767D80C7EED7C6_(Any p0, Any p1)
	{
		TASK::_0x23767D80C7EED7C6(p0, p1);
	}

	static int LUA_NATIVE_TASK_OPEN_SEQUENCE_TASK(int Sequence)
	{
		TASK::OPEN_SEQUENCE_TASK(&Sequence);
		return Sequence;
	}

	static void LUA_NATIVE_TASK_CLOSE_SEQUENCE_TASK(int Sequence)
	{
		TASK::CLOSE_SEQUENCE_TASK(Sequence);
	}

	static void LUA_NATIVE_TASK_TASK_PERFORM_SEQUENCE(Ped PedIndex, int Sequence)
	{
		TASK::TASK_PERFORM_SEQUENCE(PedIndex, Sequence);
	}

	static void LUA_NATIVE_TASK_TASK_PERFORM_SEQUENCE_2_(Any p0, Any p1, Any p2, Any p3)
	{
		TASK::_TASK_PERFORM_SEQUENCE_2(p0, p1, p2, p3);
	}

	static int LUA_NATIVE_TASK_CLEAR_SEQUENCE_TASK(int Sequence)
	{
		TASK::CLEAR_SEQUENCE_TASK(&Sequence);
		return Sequence;
	}

	static void LUA_NATIVE_TASK_SET_SEQUENCE_TO_REPEAT(int Sequence, int DoRepeat)
	{
		TASK::SET_SEQUENCE_TO_REPEAT(Sequence, DoRepeat);
	}

	static int LUA_NATIVE_TASK_GET_SEQUENCE_PROGRESS(Ped PedIndex)
	{
		auto retval = TASK::GET_SEQUENCE_PROGRESS(PedIndex);
		return retval;
	}

	static bool LUA_NATIVE_TASK_GET_IS_TASK_ACTIVE(Ped PedIndex, int TaskID)
	{
		auto retval = (bool)TASK::GET_IS_TASK_ACTIVE(PedIndex, TaskID);
		return retval;
	}

	static int LUA_NATIVE_TASK_GET_SCRIPT_TASK_STATUS(Ped PedIndex, Hash TaskName, bool p2)
	{
		auto retval = TASK::GET_SCRIPT_TASK_STATUS(PedIndex, TaskName, p2);
		return retval;
	}

	static Any LUA_NATIVE_TASK_0x9FF5F9B24E870748_(Any p0)
	{
		auto retval = TASK::_0x9FF5F9B24E870748(p0);
		return retval;
	}

	static float LUA_NATIVE_TASK_GET_SCRIPT_TASK_ACTION_TIME_(Ped ped, Hash task)
	{
		auto retval = TASK::_GET_SCRIPT_TASK_ACTION_TIME(ped, task);
		return retval;
	}

	static void LUA_NATIVE_TASK_REACT_LOOK_AT(Ped ped, Ped targetPed, int lookIntensity, int exitAnimation, float duration, int p5, Ped targetPed2, Any p7, Any p8)
	{
		TASK::REACT_LOOK_AT(ped, targetPed, lookIntensity, exitAnimation, duration, p5, targetPed2, p7, p8);
	}

	static void LUA_NATIVE_TASK_REACT_LOOK_AT_END(Ped ped, int exitAnimation, bool p2)
	{
		TASK::REACT_LOOK_AT_END(ped, exitAnimation, p2);
	}

	static bool LUA_NATIVE_TASK_IS_PED_SCENARIO_REACT_LOOKING(Ped ped, bool p1)
	{
		auto retval = (bool)TASK::IS_PED_SCENARIO_REACT_LOOKING(ped, p1);
		return retval;
	}

	static int LUA_NATIVE_TASK_GET_ACTIVE_VEHICLE_MISSION_TYPE(Vehicle vehIndex)
	{
		auto retval = TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(vehIndex);
		return retval;
	}

	static void LUA_NATIVE_TASK_TASK_LEAVE_ANY_VEHICLE(Ped PedIndex, int DelayTime, int iFlags)
	{
		TASK::TASK_LEAVE_ANY_VEHICLE(PedIndex, DelayTime, iFlags);
	}

	static Any LUA_NATIVE_TASK_0xBD70108D01875299_(Any p0)
	{
		auto retval = TASK::_0xBD70108D01875299(p0);
		return retval;
	}

	static void LUA_NATIVE_TASK_TASK_USE_RANDOM_SCENARIO_IN_GROUP(Ped ped, Any p1, Any p2, Any p3, Any p4)
	{
		TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(ped, p1, p2, p3, p4);
	}

	static void LUA_NATIVE_TASK_TASK_AIM_GUN_AT_ENTITY(Ped PedIndex, Entity EntityIndex, int Duration, bool InstantBlendToAim, int p4)
	{
		TASK::TASK_AIM_GUN_AT_ENTITY(PedIndex, EntityIndex, Duration, InstantBlendToAim, p4);
	}

	static void LUA_NATIVE_TASK_TASK_TURN_PED_TO_FACE_ENTITY(Ped PedIndex, Entity EntityIndex, int Time, float p3, float p4, float p5)
	{
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(PedIndex, EntityIndex, Time, p3, p4, p5);
	}

	static void LUA_NATIVE_TASK_TASK_AIM_GUN_AT_COORD(Ped PedIndex, float VecTargetCoorsX, float VecTargetCoorsY, float VecTargetCoorsZ, int Duration, bool InstantBlendToAim, bool PlayAimIntro)
	{
		TASK::TASK_AIM_GUN_AT_COORD(PedIndex, VecTargetCoorsX, VecTargetCoorsY, VecTargetCoorsZ, Duration, InstantBlendToAim, PlayAimIntro);
	}

	static void LUA_NATIVE_TASK_TASK_AIM_AT_COORD(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		TASK::TASK_AIM_AT_COORD(ped, p1, p2, p3, p4, p5, p6);
	}

	static void LUA_NATIVE_TASK_TASK_AIM_AT_ENTITY(Ped ped, Any p1, Any p2, Any p3, Any p4)
	{
		TASK::TASK_AIM_AT_ENTITY(ped, p1, p2, p3, p4);
	}

	static void LUA_NATIVE_TASK_TASK_SHOOT_AT_COORD(Ped PedIndex, float VecTargetCoorsX, float VecTargetCoorsY, float VecTargetCoorsZ, int Duration, Hash FiringType, Any p6)
	{
		TASK::TASK_SHOOT_AT_COORD(PedIndex, VecTargetCoorsX, VecTargetCoorsY, VecTargetCoorsZ, Duration, FiringType, p6);
	}

	static void LUA_NATIVE_TASK_TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Ped PedIndex, Vehicle VehicleIndex)
	{
		TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(PedIndex, VehicleIndex);
	}

	static void LUA_NATIVE_TASK_CLEAR_PED_TASKS(Ped PedIndex, bool p1, bool p2)
	{
		TASK::CLEAR_PED_TASKS(PedIndex, p1, p2);
	}

	static void LUA_NATIVE_TASK_0x1A7D63CB1B0BB223_(Any p0)
	{
		TASK::_0x1A7D63CB1B0BB223(p0);
	}

	static void LUA_NATIVE_TASK_0xB2D15D3551FE4FAE_(Any p0)
	{
		TASK::_0xB2D15D3551FE4FAE(p0);
	}

	static void LUA_NATIVE_TASK_0xDF94844D474F31E5_(Ped ped)
	{
		TASK::_0xDF94844D474F31E5(ped);
	}

	static void LUA_NATIVE_TASK_0xEBA2081E0A5F4D17_(Any p0)
	{
		TASK::_0xEBA2081E0A5F4D17(p0);
	}

	static void LUA_NATIVE_TASK_0x141BC64C8D7C5529_(Vehicle vehicle)
	{
		TASK::_0x141BC64C8D7C5529(vehicle);
	}

	static void LUA_NATIVE_TASK_CLEAR_PED_SECONDARY_TASK(Ped PedIndex)
	{
		TASK::CLEAR_PED_SECONDARY_TASK(PedIndex);
	}

	static void LUA_NATIVE_TASK_TASK_EVERYONE_LEAVE_VEHICLE_IN_ORDER(Vehicle vehicle, bool p1)
	{
		TASK::TASK_EVERYONE_LEAVE_VEHICLE_IN_ORDER(vehicle, p1);
	}

	static void LUA_NATIVE_TASK_TASK_INVESTIGATE(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		TASK::TASK_INVESTIGATE(ped, p1, p2, p3, p4, p5);
	}

	static void LUA_NATIVE_TASK_TASK_GOTO_ENTITY_OFFSET(Ped PedIndex, Entity EntityIndex, int Time, float SeekRadius, float SeekAngle, float MoveBlendRatio, int OffsetFlags)
	{
		TASK::TASK_GOTO_ENTITY_OFFSET(PedIndex, EntityIndex, Time, SeekRadius, SeekAngle, MoveBlendRatio, OffsetFlags);
	}

	static void LUA_NATIVE_TASK_TASK_GOTO_ENTITY_OFFSET_XY(Ped PedIndex, Entity EntityIndex, int Time, float fTargetRadius, float fXOffset, float fYOffset, float MoveBlendRatio, int OffsetFlags)
	{
		TASK::TASK_GOTO_ENTITY_OFFSET_XY(PedIndex, EntityIndex, Time, fTargetRadius, fXOffset, fYOffset, MoveBlendRatio, OffsetFlags);
	}

	static void LUA_NATIVE_TASK_TASK_GOTO_ENTITY_OFFSET_XYZ(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		TASK::TASK_GOTO_ENTITY_OFFSET_XYZ(ped, p1, p2, p3, p4, p5, p6, p7, p8);
	}

	static void LUA_NATIVE_TASK_TASK_GOTO_ENTITY_OFFSET_XY_AIMING(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		TASK::TASK_GOTO_ENTITY_OFFSET_XY_AIMING(ped, p1, p2, p3, p4, p5, p6, p7, p8);
	}

	static void LUA_NATIVE_TASK_TASK_GOTO_ENTITY_OFFSET_XYZ_AIMING(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		TASK::TASK_GOTO_ENTITY_OFFSET_XYZ_AIMING(ped, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}

	static void LUA_NATIVE_TASK_TASK_FOLLOW_ENTITY_WHILE_AIMING_AT_ENTITY(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		TASK::TASK_FOLLOW_ENTITY_WHILE_AIMING_AT_ENTITY(ped, p1, p2, p3, p4, p5, p6, p7);
	}

	static void LUA_NATIVE_TASK_TASK_TURN_PED_TO_FACE_COORD(Ped PedIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ, int Time)
	{
		TASK::TASK_TURN_PED_TO_FACE_COORD(PedIndex, VecCoorsX, VecCoorsY, VecCoorsZ, Time);
	}

	static void LUA_NATIVE_TASK_TASK_VEHICLE_TEMP_ACTION(Ped PedIndex, Vehicle VehicleIndex, int Action, int Time)
	{
		TASK::TASK_VEHICLE_TEMP_ACTION(PedIndex, VehicleIndex, Action, Time);
	}

	static void LUA_NATIVE_TASK_TASK_VEHICLE_MISSION(Ped PedIndex, Vehicle VehicleIndex, Vehicle TargetVehicleIndex, int Mission, float CruiseSpeed, int mode, float TargetReachedDist, float StraightLineDist, bool DriveAgainstTraffic)
	{
		TASK::TASK_VEHICLE_MISSION(PedIndex, VehicleIndex, TargetVehicleIndex, Mission, CruiseSpeed, mode, TargetReachedDist, StraightLineDist, DriveAgainstTraffic);
	}

	static void LUA_NATIVE_TASK_TASK_VEHICLE_DRIVE_TO_DESTINATION(Ped driver, Vehicle vehicle, float x, float y, float z, float speed, int drivingFlags, int p7, float stoppingRange1, float stoppingRange2, bool p10)
	{
		TASK::TASK_VEHICLE_DRIVE_TO_DESTINATION(driver, vehicle, x, y, z, speed, drivingFlags, p7, stoppingRange1, stoppingRange2, p10);
	}

	static void LUA_NATIVE_TASK_TASK_VEHICLE_DRIVE_TO_DESTINATION_2_(Vehicle vehicle, float x, float y, float z, float speed, int p5, int p6, float p7, float p8)
	{
		TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION_2(vehicle, x, y, z, speed, p5, p6, p7, p8);
	}

	static void LUA_NATIVE_TASK_TASK_VEHICLE_FLEE_ON_CLEANUP_(Vehicle vehicle, float p1, float p2, float p3, float speed, Hash type)
	{
		TASK::_TASK_VEHICLE_FLEE_ON_CLEANUP(vehicle, p1, p2, p3, speed, type);
	}

	static void LUA_NATIVE_TASK_TASK_VEHICLE_DRIVE_STRAIGHT_TO_POINT(Ped driver, Vehicle vehicle, float x, float y, float z, float p5, float p6, int flag)
	{
		TASK::TASK_VEHICLE_DRIVE_STRAIGHT_TO_POINT(driver, vehicle, x, y, z, p5, p6, flag);
	}

	static void LUA_NATIVE_TASK_TASK_VEHICLE_DRIVE_TO_POINT_2_(Vehicle vehicle, float x, float y, float z, float p4, float p5, Any p6)
	{
		TASK::_TASK_VEHICLE_DRIVE_TO_POINT_2(vehicle, x, y, z, p4, p5, p6);
	}

	static void LUA_NATIVE_TASK_0x1D125814EBC517EB_(Any p0, Any p1, Any p2, Any p3)
	{
		TASK::_0x1D125814EBC517EB(p0, p1, p2, p3);
	}

	static bool LUA_NATIVE_TASK_0x583AE9AF9CEE0958_(Vehicle vehicle, float x, float y, float z)
	{
		auto retval = (bool)TASK::_0x583AE9AF9CEE0958(vehicle, x, y, z);
		return retval;
	}

	static void LUA_NATIVE_TASK_TASK_VEHICLE_MISSION_PED_TARGET(Ped PedIndex, Vehicle VehicleIndex, Ped TargetPedIndex, int Mission, float CruiseSpeed, int mode, float TargetReachedDist, float StraightLineDist, bool DriveAgainstTraffic)
	{
		TASK::TASK_VEHICLE_MISSION_PED_TARGET(PedIndex, VehicleIndex, TargetPedIndex, Mission, CruiseSpeed, mode, TargetReachedDist, StraightLineDist, DriveAgainstTraffic);
	}

	static void LUA_NATIVE_TASK_0xA263ADBBC8056214_(Any p0, Any p1)
	{
		TASK::_0xA263ADBBC8056214(p0, p1);
	}

	static void LUA_NATIVE_TASK_TASK_VEHICLE_ESCORT(Ped PedIndex, Vehicle VehicleIndex, Entity EscortEntityIndex, int EscortType, float CruiseSpeed, int mode, float CustomOffset, int MinHeightAboveTerrain, float StraightLineDistance)
	{
		TASK::TASK_VEHICLE_ESCORT(PedIndex, VehicleIndex, EscortEntityIndex, EscortType, CruiseSpeed, mode, CustomOffset, MinHeightAboveTerrain, StraightLineDistance);
	}

	static void LUA_NATIVE_TASK_TASK_BOAT_MISSION(Ped PedIndex, Vehicle BoatIndex, Vehicle TargetVehicleIndex, Ped TargetPedIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ, int Mission, float CruiseSpeed, int mode, float TargetReachedDist, int BoatFlags)
	{
		TASK::TASK_BOAT_MISSION(PedIndex, BoatIndex, TargetVehicleIndex, TargetPedIndex, VecCoorsX, VecCoorsY, VecCoorsZ, Mission, CruiseSpeed, mode, TargetReachedDist, BoatFlags);
	}

	static void LUA_NATIVE_TASK_TASK_WEAPON(Ped ped)
	{
		TASK::TASK_WEAPON(ped);
	}

	static void LUA_NATIVE_TASK_TASK_DRIVE_BY(Ped PedIndex, Ped OtherPedIndex, Vehicle TargetVehicleIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ, float AbortRange, int FrequencyPercentage, bool bPushUnderneathDrivingTaskIfDriving, Hash FiringPatternHash)
	{
		TASK::TASK_DRIVE_BY(PedIndex, OtherPedIndex, TargetVehicleIndex, VecCoorsX, VecCoorsY, VecCoorsZ, AbortRange, FrequencyPercentage, bPushUnderneathDrivingTaskIfDriving, FiringPatternHash);
	}

	static void LUA_NATIVE_TASK_SET_DRIVEBY_TASK_TARGET(Ped PedIndex, Ped OtherPedIndex, Vehicle TargetVehicleIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ)
	{
		TASK::SET_DRIVEBY_TASK_TARGET(PedIndex, OtherPedIndex, TargetVehicleIndex, VecCoorsX, VecCoorsY, VecCoorsZ);
	}

	static void LUA_NATIVE_TASK_CLEAR_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(Ped PedIndex)
	{
		TASK::CLEAR_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(PedIndex);
	}

	static bool LUA_NATIVE_TASK_IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(Ped PedIndex)
	{
		auto retval = (bool)TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(PedIndex);
		return retval;
	}

	static bool LUA_NATIVE_TASK_GET_IS_PED_AIMING_IN_THE_AIR(Ped ped)
	{
		auto retval = (bool)TASK::GET_IS_PED_AIMING_IN_THE_AIR(ped);
		return retval;
	}

	static void LUA_NATIVE_TASK_SET_PED_CLEAR_AIMING_IN_THE_AIR_(Ped ped, Any p1)
	{
		TASK::_SET_PED_CLEAR_AIMING_IN_THE_AIR(ped, p1);
	}

	static bool LUA_NATIVE_TASK_IS_MOUNTED_WEAPON_TASK_UNDERNEATH_DRIVING_TASK(Ped PedIndex)
	{
		auto retval = (bool)TASK::IS_MOUNTED_WEAPON_TASK_UNDERNEATH_DRIVING_TASK(PedIndex);
		return retval;
	}

	static void LUA_NATIVE_TASK_TASK_WARP_PED_INTO_VEHICLE(Ped Ped, Vehicle VehicleIndex, int seat)
	{
		TASK::TASK_WARP_PED_INTO_VEHICLE(Ped, VehicleIndex, seat);
	}

	static void LUA_NATIVE_TASK_TASK_SHOOT_AT_ENTITY(Ped PedIndex, Entity EntityIndex, int Time, Hash FiringType, bool affectCockedState)
	{
		TASK::TASK_SHOOT_AT_ENTITY(PedIndex, EntityIndex, Time, FiringType, affectCockedState);
	}

	static void LUA_NATIVE_TASK_TASK_SHOOT_WITH_WEAPON(Ped ped, uintptr_t args)
	{
		TASK::TASK_SHOOT_WITH_WEAPON(ped, (Any*)args);
	}

	static void LUA_NATIVE_TASK_0x2416EC2F31F75266_(Entity entity, Entity targetEntity, int duration, Any p3, Any p4)
	{
		TASK::_0x2416EC2F31F75266(entity, targetEntity, duration, p3, p4);
	}

	static void LUA_NATIVE_TASK_0x41323F4E0C4AE94B_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		TASK::_0x41323F4E0C4AE94B(p0, p1, p2, p3, p4, p5, p6);
	}

	static Any LUA_NATIVE_TASK_0x5EA655F01D93667A_(Any p0)
	{
		auto retval = TASK::_0x5EA655F01D93667A(p0);
		return retval;
	}

	static void LUA_NATIVE_TASK_TASK_CLIMB(Ped PedIndex, bool UsePlayerLaunchForce)
	{
		TASK::TASK_CLIMB(PedIndex, UsePlayerLaunchForce);
	}

	static void LUA_NATIVE_TASK_TASK_CLIMB_2_(Ped ped, float heading)
	{
		TASK::_TASK_CLIMB_2(ped, heading);
	}

	static void LUA_NATIVE_TASK_TASK_CLIMB_LADDER(Ped PedIndex, float p1, bool p2, bool p3)
	{
		TASK::TASK_CLIMB_LADDER(PedIndex, p1, p2, p3);
	}

	static void LUA_NATIVE_TASK_CLEAR_PED_TASKS_IMMEDIATELY(Ped PedIndex, bool p1, bool resetCrouch)
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PedIndex, p1, resetCrouch);
	}

	static void LUA_NATIVE_TASK_TASK_PERFORM_SEQUENCE_FROM_PROGRESS(Ped PedIndex, int TaskIndex, int Progress1, int Progress2)
	{
		TASK::TASK_PERFORM_SEQUENCE_FROM_PROGRESS(PedIndex, TaskIndex, Progress1, Progress2);
	}

	static void LUA_NATIVE_TASK_SET_PED_DESIRED_MOVE_BLEND_RATIO(Ped PedIndex, float MoveBlendRatio)
	{
		TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(PedIndex, MoveBlendRatio);
	}

	static float LUA_NATIVE_TASK_GET_PED_DESIRED_MOVE_BLEND_RATIO(Ped PedIndex)
	{
		auto retval = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PedIndex);
		return retval;
	}

	static void LUA_NATIVE_TASK_TASK_GOTO_ENTITY_AIMING(Ped PedIndex, Entity EntityIndex, float SeekRadius, float AimRadius)
	{
		TASK::TASK_GOTO_ENTITY_AIMING(PedIndex, EntityIndex, SeekRadius, AimRadius);
	}

	static void LUA_NATIVE_TASK_TASK_SET_SPHERE_DEFENSIVE_AREA(Ped PedIndex, float vCentreX, float vCentreY, float vCentreZ, float fRadius)
	{
		TASK::TASK_SET_SPHERE_DEFENSIVE_AREA(PedIndex, vCentreX, vCentreY, vCentreZ, fRadius);
	}

	static void LUA_NATIVE_TASK_TASK_CLEAR_DEFENSIVE_AREA(Ped PedIndex)
	{
		TASK::TASK_CLEAR_DEFENSIVE_AREA(PedIndex);
	}

	static void LUA_NATIVE_TASK_TASK_PED_SLIDE_TO_COORD(Ped PedIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ, float headingDegrees, float speed)
	{
		TASK::TASK_PED_SLIDE_TO_COORD(PedIndex, VecCoorsX, VecCoorsY, VecCoorsZ, headingDegrees, speed);
	}

	static Any LUA_NATIVE_TASK_0x9420FB11B8D77948_(Any p0)
	{
		auto retval = TASK::_0x9420FB11B8D77948(p0);
		return retval;
	}

	static Any LUA_NATIVE_TASK_0x6BA606AB3A83BC4D_(Any p0)
	{
		auto retval = TASK::_0x6BA606AB3A83BC4D(p0);
		return retval;
	}

	static ScrHandle LUA_NATIVE_TASK_ADD_COVER_POINT(float VecCoorsX, float VecCoorsY, float VecCoorsZ, float direction, int usage, int height, int arc, bool isPriorityToPlayer)
	{
		auto retval = TASK::ADD_COVER_POINT(VecCoorsX, VecCoorsY, VecCoorsZ, direction, usage, height, arc, isPriorityToPlayer);
		return retval;
	}

	static Any LUA_NATIVE_TASK_0x59872EA4CBD11C56_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		auto retval = TASK::_0x59872EA4CBD11C56(p0, p1, p2, p3, p4, p5, p6, p7, p8);
		return retval;
	}

	static void LUA_NATIVE_TASK_REMOVE_COVER_POINT(ScrHandle index)
	{
		TASK::REMOVE_COVER_POINT(index);
	}

	static bool LUA_NATIVE_TASK_DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(float VecCoorsX, float VecCoorsY, float VecCoorsZ, Any p3)
	{
		auto retval = (bool)TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(VecCoorsX, VecCoorsY, VecCoorsZ, p3);
		return retval;
	}

	static Vector3 LUA_NATIVE_TASK_GET_SCRIPTED_COVER_POINT_COORDS(ScrHandle index)
	{
		auto retval = TASK::GET_SCRIPTED_COVER_POINT_COORDS(index);
		return retval;
	}

	static Vector3 LUA_NATIVE_TASK_0xE116F6F2DA2D777E_(Any p0)
	{
		auto retval = TASK::_0xE116F6F2DA2D777E(p0);
		return retval;
	}

	static void LUA_NATIVE_TASK_0x50AA09A0DA64E73C_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		TASK::_0x50AA09A0DA64E73C(p0, p1, p2, p3, p4, p5, p6);
	}

	static void LUA_NATIVE_TASK_0xE5831AA1E2FD147C_(Any p0)
	{
		TASK::_0xE5831AA1E2FD147C(p0);
	}

	static void LUA_NATIVE_TASK_TASK_COMBAT_PED(Ped PedIndex, Ped OtherPedIndex, int CombatFlags, int TaskThreatResponseFlags)
	{
		TASK::TASK_COMBAT_PED(PedIndex, OtherPedIndex, CombatFlags, TaskThreatResponseFlags);
	}

	static void LUA_NATIVE_TASK_TASK_COMBAT_PED_TIMED(Ped PedIndex, Ped OtherPedIndex, int Time, int Flags)
	{
		TASK::TASK_COMBAT_PED_TIMED(PedIndex, OtherPedIndex, Time, Flags);
	}

	static void LUA_NATIVE_TASK_TASK_COMBAT_PED_3_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		TASK::_TASK_COMBAT_PED_3(p0, p1, p2, p3, p4, p5);
	}

	static void LUA_NATIVE_TASK_TASK_SEEK_COVER_FROM_POS(Ped PedIndex, float VecFromCoorsX, float VecFromCoorsY, float VecFromCoorsZ, int Time, bool p5, bool p6, bool p7)
	{
		TASK::TASK_SEEK_COVER_FROM_POS(PedIndex, VecFromCoorsX, VecFromCoorsY, VecFromCoorsZ, Time, p5, p6, p7);
	}

	static void LUA_NATIVE_TASK_TASK_SEEK_COVER_FROM_PED(Ped PedIndex, Ped OtherPedIndex, int Time, bool p3, bool p4, bool p5)
	{
		TASK::TASK_SEEK_COVER_FROM_PED(PedIndex, OtherPedIndex, Time, p3, p4, p5);
	}

	static void LUA_NATIVE_TASK_TASK_SEEK_COVER_TO_COVER_POINT(Ped PedIndex, ScrHandle CoverIndex, float VecFromCoorsX, float VecFromCoorsY, float VecFromCoorsZ, int Time, Any p6, Any p7, Any p8)
	{
		TASK::TASK_SEEK_COVER_TO_COVER_POINT(PedIndex, CoverIndex, VecFromCoorsX, VecFromCoorsY, VecFromCoorsZ, Time, p6, p7, p8);
	}

	static void LUA_NATIVE_TASK_TASK_SEEK_COVER_TO_COORDS(Ped PedIndex, float VecCooverCoorsX, float VecCooverCoorsY, float VecCooverCoorsZ, float VecFromCoorsX, float VecFromCoorsY, float VecFromCoorsZ, int Time, Any p8, Any p9, Any p10)
	{
		TASK::TASK_SEEK_COVER_TO_COORDS(PedIndex, VecCooverCoorsX, VecCooverCoorsY, VecCooverCoorsZ, VecFromCoorsX, VecFromCoorsY, VecFromCoorsZ, Time, p8, p9, p10);
	}

	static void LUA_NATIVE_TASK_TASK_PUT_PED_DIRECTLY_INTO_COVER(Ped PedIndex, float vCoverPosX, float vCoverPosY, float vCoverPosZ, int Time, bool CanPeekAndAim, float BlendInDuration, Any p7, Any p8, ScrHandle coverpoint, bool p10, bool p11, Any p12)
	{
		TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(PedIndex, vCoverPosX, vCoverPosY, vCoverPosZ, Time, CanPeekAndAim, BlendInDuration, p7, p8, coverpoint, p10, p11, p12);
	}

	static void LUA_NATIVE_TASK_TASK_PUT_PED_DIRECTLY_INTO_COVER_FROM_COORDS_(Ped ped, float x, float y, float z, float fromX, float fromY, float fromZ, int timeout, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15, Any p16, Any p17)
	{
		TASK::_TASK_PUT_PED_DIRECTLY_INTO_COVER_FROM_COORDS(ped, x, y, z, fromX, fromY, fromZ, timeout, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17);
	}

	static void LUA_NATIVE_TASK_TASK_PUT_PED_DIRECTLY_INTO_MELEE(Ped PedIndex, Ped PedTargetIndex, Hash meleeStyle, float p3, float animBlendRatio, bool p5, int AiCombatFlags)
	{
		TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(PedIndex, PedTargetIndex, meleeStyle, p3, animBlendRatio, p5, AiCombatFlags);
	}

	static void LUA_NATIVE_TASK_TASK_PUT_PED_DIRECTLY_INTO_GRAPPLE(Ped ped, Ped grappleTarget, Hash grappleStyle, float p3, float p4, bool p5, int p6)
	{
		TASK::TASK_PUT_PED_DIRECTLY_INTO_GRAPPLE(ped, grappleTarget, grappleStyle, p3, p4, p5, p6);
	}

	static void LUA_NATIVE_TASK_TASK_COMPANION_AMBIENT(Ped ped, Any p1)
	{
		TASK::TASK_COMPANION_AMBIENT(ped, p1);
	}

	static void LUA_NATIVE_TASK_0x098036CAB8373D36_(Any p0)
	{
		TASK::_0x098036CAB8373D36(p0);
	}

	static void LUA_NATIVE_TASK_0x10C44F633E2D6D9E_(Any p0)
	{
		TASK::_0x10C44F633E2D6D9E(p0);
	}

	static void LUA_NATIVE_TASK_0x7FB78B2199C10E92_(Any p0)
	{
		TASK::_0x7FB78B2199C10E92(p0);
	}

	static void LUA_NATIVE_TASK_TASK_GUARD(Ped ped, Any p1, Any p2)
	{
		TASK::TASK_GUARD(ped, p1, p2);
	}

	static void LUA_NATIVE_TASK_TASK_GUARD_CURRENT_POSITION(Ped PedIndex, float fMaxPatrolProximity, float GuardAreaRadius, bool bSetDefensiveArea)
	{
		TASK::TASK_GUARD_CURRENT_POSITION(PedIndex, fMaxPatrolProximity, GuardAreaRadius, bSetDefensiveArea);
	}

	static void LUA_NATIVE_TASK_TASK_GUARD_ASSIGNED_DEFENSIVE_AREA_2_(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		TASK::_TASK_GUARD_ASSIGNED_DEFENSIVE_AREA_2(ped, p1, p2, p3, p4, p5, p6, p7);
	}

	static void LUA_NATIVE_TASK_TASK_GUARD_ASSIGNED_DEFENSIVE_AREA(Ped PedIndex, float vDefendPositionX, float vDefendPositionY, float vDefendPositionZ, float fHeading, float fMaxPatrolProximity, int nTimer)
	{
		TASK::TASK_GUARD_ASSIGNED_DEFENSIVE_AREA(PedIndex, vDefendPositionX, vDefendPositionY, vDefendPositionZ, fHeading, fMaxPatrolProximity, nTimer);
	}

	static void LUA_NATIVE_TASK_TASK_STAND_GUARD(Ped PedIndex, float vDefendPositionX, float vDefendPositionY, float vDefendPositionZ, float fHeading, sol::stack_object context)
	{
		TASK::TASK_STAND_GUARD(PedIndex, vDefendPositionX, vDefendPositionY, vDefendPositionZ, fHeading, context.is<const char*>() ? context.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_TASK_SET_DRIVE_TASK_CRUISE_SPEED(Ped PedIndex, float CruiseSpeed)
	{
		TASK::SET_DRIVE_TASK_CRUISE_SPEED(PedIndex, CruiseSpeed);
	}

	static void LUA_NATIVE_TASK_SET_DRIVE_TASK_MAX_CRUISE_SPEED(Ped PedIndex, float MaxCruiseSpeed)
	{
		TASK::SET_DRIVE_TASK_MAX_CRUISE_SPEED(PedIndex, MaxCruiseSpeed);
	}

	static void LUA_NATIVE_TASK_ADD_COVER_BLOCKING_AREA(float vStartX, float vStartY, float vStartZ, float vEndX, float vEndY, float vEndZ, bool bBlockObjects, bool bBlockVehicles, bool bBlockMap, bool bBlockPlayer)
	{
		TASK::ADD_COVER_BLOCKING_AREA(vStartX, vStartY, vStartZ, vEndX, vEndY, vEndZ, bBlockObjects, bBlockVehicles, bBlockMap, bBlockPlayer);
	}

	static void LUA_NATIVE_TASK_ADD_COVER_BLOCKING_VOLUME_(Volume volume, bool p1, bool p2, bool p3, bool p4)
	{
		TASK::_ADD_COVER_BLOCKING_VOLUME(volume, p1, p2, p3, p4);
	}

	static void LUA_NATIVE_TASK_REMOVE_ALL_COVER_BLOCKING_AREAS()
	{
		TASK::REMOVE_ALL_COVER_BLOCKING_AREAS();
	}

	static void LUA_NATIVE_TASK_0x2A10538D0A005E81_(Any p0, Any p1)
	{
		TASK::_0x2A10538D0A005E81(p0, p1);
	}

	static void LUA_NATIVE_TASK_0x4F57397388E1DFF8_()
	{
		TASK::_0x4F57397388E1DFF8();
	}

	static void LUA_NATIVE_TASK_TASK_ROB_PED(Ped ped, Any p1, Any p2, Any p3, Any p4)
	{
		TASK::TASK_ROB_PED(ped, p1, p2, p3, p4);
	}

	static bool LUA_NATIVE_TASK_0xBEDBE39B5FD98FD6_(Ped ped)
	{
		auto retval = (bool)TASK::_0xBEDBE39B5FD98FD6(ped);
		return retval;
	}

	static int LUA_NATIVE_TASK_CREATE_SCENARIO_POINT_HASH(Hash scenarioHash, float x, float y, float z, float heading, Any p5, Any p6, bool p7)
	{
		auto retval = TASK::CREATE_SCENARIO_POINT_HASH(scenarioHash, x, y, z, heading, p5, p6, p7);
		return retval;
	}

	static int LUA_NATIVE_TASK_CREATE_SCENARIO_POINT_HASH_ATTACHED_TO_ENTITY(Entity entity, Hash scenarioHash, float x, float y, float z, float heading, Any p6, Any p7, bool p8)
	{
		auto retval = TASK::CREATE_SCENARIO_POINT_HASH_ATTACHED_TO_ENTITY(entity, scenarioHash, x, y, z, heading, p6, p7, p8);
		return retval;
	}

	static bool LUA_NATIVE_TASK_DOES_SCENARIO_POINT_HAVE_PROPS_(int scenario)
	{
		auto retval = (bool)TASK::_DOES_SCENARIO_POINT_HAVE_PROPS(scenario);
		return retval;
	}

	static Entity LUA_NATIVE_TASK_GET_PROP_FOR_SCENARIO_POINT(int scenarioPoint, sol::stack_object name)
	{
		auto retval = TASK::GET_PROP_FOR_SCENARIO_POINT(scenarioPoint, name.is<const char*>() ? name.as<const char*>() : nullptr);
		return retval;
	}

	static bool LUA_NATIVE_TASK_ASSOCIATE_PROP_WITH_SCENARIO_(int scenario, Entity entity, sol::stack_object propName, bool p3)
	{
		auto retval = (bool)TASK::_ASSOCIATE_PROP_WITH_SCENARIO(scenario, entity, propName.is<const char*>() ? propName.as<const char*>() : nullptr, p3);
		return retval;
	}

	static void LUA_NATIVE_TASK_SET_SCENARIO_POINT_FLAG_(int scenario, int flag, bool value)
	{
		TASK::_SET_SCENARIO_POINT_FLAG(scenario, flag, value);
	}

	static bool LUA_NATIVE_TASK_IS_SCENARIO_POINT_FLAG_SET_(int scenario, int flag)
	{
		auto retval = (bool)TASK::_IS_SCENARIO_POINT_FLAG_SET(scenario, flag);
		return retval;
	}

	static void LUA_NATIVE_TASK_0xADC45010BC17AF0E_(Any p0, Any p1)
	{
		TASK::_0xADC45010BC17AF0E(p0, p1);
	}

	static Any LUA_NATIVE_TASK_0x974DA3408DEC4E79_(Any p0)
	{
		auto retval = TASK::_0x974DA3408DEC4E79(p0);
		return retval;
	}

	static bool LUA_NATIVE_TASK_DISASSOCIATE_PROP_FROM_SCENARIO_(int scenario, sol::stack_object propName)
	{
		auto retval = (bool)TASK::_DISASSOCIATE_PROP_FROM_SCENARIO(scenario, propName.is<const char*>() ? propName.as<const char*>() : nullptr);
		return retval;
	}

	static bool LUA_NATIVE_TASK_DOES_SCENARIO_POINT_EXIST(int scenario)
	{
		auto retval = (bool)TASK::DOES_SCENARIO_POINT_EXIST(scenario);
		return retval;
	}

	static Any LUA_NATIVE_TASK_0x22CD2C33ED4467A1_(Any p0)
	{
		auto retval = TASK::_0x22CD2C33ED4467A1(p0);
		return retval;
	}

	static Entity LUA_NATIVE_TASK_GET_SCENARIO_POINT_ENTITY_(int scenario)
	{
		auto retval = TASK::_GET_SCENARIO_POINT_ENTITY(scenario);
		return retval;
	}

	static Ped LUA_NATIVE_TASK_GET_PED_USING_SCENARIO_POINT_(int scenario)
	{
		auto retval = TASK::_GET_PED_USING_SCENARIO_POINT(scenario);
		return retval;
	}

	static Vector3 LUA_NATIVE_TASK_GET_SCENARIO_POINT_COORDS_(int scenario, bool p1)
	{
		auto retval = TASK::_GET_SCENARIO_POINT_COORDS(scenario, p1);
		return retval;
	}

	static Vector3 LUA_NATIVE_TASK_0x91CB5E431F579BA1_(Any p0)
	{
		auto retval = TASK::_0x91CB5E431F579BA1(p0);
		return retval;
	}

	static Any LUA_NATIVE_TASK_0x370F57C47F68EBCA_(Any p0)
	{
		auto retval = TASK::_0x370F57C47F68EBCA(p0);
		return retval;
	}

	static float LUA_NATIVE_TASK_GET_SCENARIO_POINT_HEADING_(int scenario, bool p1)
	{
		auto retval = TASK::_GET_SCENARIO_POINT_HEADING(scenario, p1);
		return retval;
	}

	static float LUA_NATIVE_TASK_GET_SCENARIO_POINT_RADIUS_(int scenario)
	{
		auto retval = TASK::_GET_SCENARIO_POINT_RADIUS(scenario);
		return retval;
	}

	static void LUA_NATIVE_TASK_SET_SCENARIO_POINT_COORDS_(int scenario, float xPos, float yPos, float zPos, bool p4)
	{
		TASK::_SET_SCENARIO_POINT_COORDS(scenario, xPos, yPos, zPos, p4);
	}

	static void LUA_NATIVE_TASK_SET_SCENARIO_POINT_HEADING_(int scenario, float heading, bool p2)
	{
		TASK::_SET_SCENARIO_POINT_HEADING(scenario, heading, p2);
	}

	static void LUA_NATIVE_TASK_SET_SCENARIO_POINT_RADIUS_(int scenario, float radius)
	{
		TASK::_SET_SCENARIO_POINT_RADIUS(scenario, radius);
	}

	static void LUA_NATIVE_TASK_0xA7479FB665361EDB_(Any p0, Any p1)
	{
		TASK::_0xA7479FB665361EDB(p0, p1);
	}

	static void LUA_NATIVE_TASK_0xE69FDA40AAC3EFC0_(Any p0, Any p1)
	{
		TASK::_0xE69FDA40AAC3EFC0(p0, p1);
	}

	static int LUA_NATIVE_TASK_GET_SCENARIO_POINTS_IN_AREA(float posX, float posY, float posZ, float radius, uintptr_t scenariosInRadius, int size)
	{
		auto retval = TASK::GET_SCENARIO_POINTS_IN_AREA(posX, posY, posZ, radius, (Any*)scenariosInRadius, size);
		return retval;
	}

	static Any LUA_NATIVE_TASK_0xEFD875C2791EBEFD_(Any p0, Any p1, Any p2, Any p3)
	{
		auto retval = TASK::_0xEFD875C2791EBEFD(p0, p1, p2, p3);
		return retval;
	}

	static Any LUA_NATIVE_TASK_0x152664AA3188B193_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		auto retval = TASK::_0x152664AA3188B193(p0, p1, p2, p3, p4, p5);
		return retval;
	}

	static Any LUA_NATIVE_TASK_0xE7BBC4E56B989449_(Any p0, Any p1, Any p2)
	{
		auto retval = TASK::_0xE7BBC4E56B989449(p0, p1, p2);
		return retval;
	}

	static int LUA_NATIVE_TASK_GET_SCENARIO_POINT_PED_IS_USING_(Ped ped, bool p1)
	{
		auto retval = TASK::_GET_SCENARIO_POINT_PED_IS_USING(ped, p1);
		return retval;
	}

	static Any LUA_NATIVE_TASK_GET_RANSACK_SCENARIO_POINT_PED_IS_USING(Ped ped)
	{
		auto retval = TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(ped);
		return retval;
	}

	static void LUA_NATIVE_TASK_SET_SCENARIO_CONTAINER_OPENING_STATE_(Entity entity, bool open)
	{
		TASK::_SET_SCENARIO_CONTAINER_OPENING_STATE(entity, open);
	}

	static Any LUA_NATIVE_TASK_0xA9E7672F8C6C6F74_(Any p0)
	{
		auto retval = TASK::_0xA9E7672F8C6C6F74(p0);
		return retval;
	}

	static Any LUA_NATIVE_TASK_0x0A98A362C5A19A43_(Any p0)
	{
		auto retval = TASK::_0x0A98A362C5A19A43(p0);
		return retval;
	}

	static Any LUA_NATIVE_TASK_0x849791EBBDBA0362_(Any p0)
	{
		auto retval = TASK::_0x849791EBBDBA0362(p0);
		return retval;
	}

	static Any LUA_NATIVE_TASK_0x640A602946A8C972_(Any p0)
	{
		auto retval = TASK::_0x640A602946A8C972(p0);
		return retval;
	}

	static Any LUA_NATIVE_TASK_0x01AF8A3729231A43_(Any p0)
	{
		auto retval = TASK::_0x01AF8A3729231A43(p0);
		return retval;
	}

	static bool LUA_NATIVE_TASK_GET_SCENARIO_CONTAINER_OPENING_STATE_(Entity entity)
	{
		auto retval = (bool)TASK::_GET_SCENARIO_CONTAINER_OPENING_STATE(entity);
		return retval;
	}

	static void LUA_NATIVE_TASK_RESET_SCENARIO_FOR_ENTITY_(int scenario, Entity entity)
	{
		TASK::_RESET_SCENARIO_FOR_ENTITY(scenario, entity);
	}

	static void LUA_NATIVE_TASK_0x4161648394262FDF_(Any p0, Any p1, Any p2, Any p3)
	{
		TASK::_0x4161648394262FDF(p0, p1, p2, p3);
	}

	static void LUA_NATIVE_TASK_0x9C8F42A5D1859DC1_(Any p0)
	{
		TASK::_0x9C8F42A5D1859DC1(p0);
	}

	static void LUA_NATIVE_TASK_DELETE_SCENARIO_POINT_(int scenario)
	{
		TASK::_DELETE_SCENARIO_POINT(scenario);
	}

	static void LUA_NATIVE_TASK_TASK_USE_SCENARIO_POINT(Ped ped, int scenario, sol::stack_object conditionalAnim, int p3, bool p4, bool p5, Hash p6, bool p7, float p8, bool p9)
	{
		TASK::TASK_USE_SCENARIO_POINT(ped, scenario, conditionalAnim.is<const char*>() ? conditionalAnim.as<const char*>() : nullptr, p3, p4, p5, p6, p7, p8, p9);
	}

	static void LUA_NATIVE_TASK_TASK_USE_SCENARIO_POINT_2_(Ped ped, Ped ped2, Any p2, sol::stack_object p3, int p4, Hash p5, float p6, bool p7)
	{
		TASK::_TASK_USE_SCENARIO_POINT_2(ped, ped2, p2, p3.is<const char*>() ? p3.as<const char*>() : nullptr, p4, p5, p6, p7);
	}

	static void LUA_NATIVE_TASK_TASK_START_SCENARIO_IN_PLACE_HASH(Ped ped, Hash scenarioHash, int duration, bool playEnterAnim, Hash conditionalHash, float heading, bool p6)
	{
		TASK::TASK_START_SCENARIO_IN_PLACE_HASH(ped, scenarioHash, duration, playEnterAnim, conditionalHash, heading, p6);
	}

	static void LUA_NATIVE_TASK_TASK_START_SCENARIO_IN_PLACE_2_(Ped ped, Any p1, sol::stack_object p2, int p3, bool p4, float p5, bool p6)
	{
		TASK::_TASK_START_SCENARIO_IN_PLACE_2(ped, p1, p2.is<const char*>() ? p2.as<const char*>() : nullptr, p3, p4, p5, p6);
	}

	static void LUA_NATIVE_TASK_TASK_START_SCENARIO_AT_POSITION(Ped ped, Hash scenarioHash, float x, float y, float z, float heading, int duration, bool sittingScenario, bool teleport, sol::stack_object p9, float p10, bool p11)
	{
		TASK::TASK_START_SCENARIO_AT_POSITION(ped, scenarioHash, x, y, z, heading, duration, sittingScenario, teleport, p9.is<const char*>() ? p9.as<const char*>() : nullptr, p10, p11);
	}

	static Any LUA_NATIVE_TASK_0xF97F462779B31786_(Any p0)
	{
		auto retval = TASK::_0xF97F462779B31786(p0);
		return retval;
	}

	static Any LUA_NATIVE_TASK_0x6C269F673C47031E_(Any p0)
	{
		auto retval = TASK::_0x6C269F673C47031E(p0);
		return retval;
	}

	static void LUA_NATIVE_TASK_0x9667CCE29BFA0780_(Any p0)
	{
		TASK::_0x9667CCE29BFA0780(p0);
	}

	static Any LUA_NATIVE_TASK_0x00FFE0F85253C572_(Any p0)
	{
		auto retval = TASK::_0x00FFE0F85253C572(p0);
		return retval;
	}

	static void LUA_NATIVE_TASK_TASK_USE_NEAREST_SCENARIO_TO_COORD_(Ped ped, float x, float y, float z, float distance, int duration, bool p6, bool p7, bool p8, bool p9)
	{
		TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(ped, x, y, z, distance, duration, p6, p7, p8, p9);
	}

	static void LUA_NATIVE_TASK_TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Ped PedIndex, float vPositionX, float vPositionY, float vPositionZ, float fRange, int iTimeToLeaveMS, bool p6, bool p7, bool p8, bool p9)
	{
		TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(PedIndex, vPositionX, vPositionY, vPositionZ, fRange, iTimeToLeaveMS, p6, p7, p8, p9);
	}

	static void LUA_NATIVE_TASK_TASK_USE_NEAREST_TRAIN_SCENARIO_TO_COORD_WARP(Ped ped, float x, float y, float z, float distance)
	{
		TASK::TASK_USE_NEAREST_TRAIN_SCENARIO_TO_COORD_WARP(ped, x, y, z, distance);
	}

	static void LUA_NATIVE_TASK_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(Ped PedIndex, float vPositionX, float vPositionY, float vPositionZ, float fRange, bool p5, bool p6, bool p7, bool p8)
	{
		TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(PedIndex, vPositionX, vPositionY, vPositionZ, fRange, p5, p6, p7, p8);
	}

	static void LUA_NATIVE_TASK_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD_WARP(Ped PedIndex, float vPositionX, float vPositionY, float vPositionZ, float fRange, bool p5, bool p6, bool p7, bool p8)
	{
		TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD_WARP(PedIndex, vPositionX, vPositionY, vPositionZ, fRange, p5, p6, p7, p8);
	}

	static Any LUA_NATIVE_TASK_0xFDECCA06E8B81346_(Ped ped)
	{
		auto retval = TASK::_0xFDECCA06E8B81346(ped);
		return retval;
	}

	static Any LUA_NATIVE_TASK_0x2D657B10F211C572_(Ped ped, float p1)
	{
		auto retval = TASK::_0x2D657B10F211C572(ped, p1);
		return retval;
	}

	static void LUA_NATIVE_TASK_TASK_RIDE_TRAIN(Ped ped, Vehicle train, int scenarioPoint, Hash scenarioHash)
	{
		TASK::TASK_RIDE_TRAIN(ped, train, scenarioPoint, scenarioHash);
	}

	static Any LUA_NATIVE_TASK_0x79197F7D2BB5E73A_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		auto retval = TASK::_0x79197F7D2BB5E73A(p0, p1, p2, p3, p4, p5);
		return retval;
	}

	static bool LUA_NATIVE_TASK_DOES_SCENARIO_EXIST_IN_AREA(float vPositionX, float vPositionY, float vPositionZ, float fRange, bool p4, Any p5, bool p6)
	{
		auto retval = (bool)TASK::DOES_SCENARIO_EXIST_IN_AREA(vPositionX, vPositionY, vPositionZ, fRange, p4, p5, p6);
		return retval;
	}

	static bool LUA_NATIVE_TASK_DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA_HASH(float x, float y, float z, Hash typeHash, float radius, bool p5)
	{
		auto retval = (bool)TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA_HASH(x, y, z, typeHash, radius, p5);
		return retval;
	}

	static int LUA_NATIVE_TASK_FIND_SCENARIO_OF_TYPE_HASH(float xPos, float yPos, float zPos, Hash scenarioType, float distance, Any p5, bool p6)
	{
		auto retval = TASK::FIND_SCENARIO_OF_TYPE_HASH(xPos, yPos, zPos, scenarioType, distance, p5, p6);
		return retval;
	}

	static void LUA_NATIVE_TASK_0x0D322AEF8878B8FE_(Any p0, Any p1)
	{
		TASK::_0x0D322AEF8878B8FE(p0, p1);
	}

	static Any LUA_NATIVE_TASK_0xD508FA229F1C4900_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		auto retval = TASK::_0xD508FA229F1C4900(p0, p1, p2, p3, p4, p5);
		return retval;
	}

	static void LUA_NATIVE_TASK_0xB8E213D02F37947D_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		TASK::_0xB8E213D02F37947D(p0, p1, p2, p3, p4, p5, p6);
	}

	static bool LUA_NATIVE_TASK_IS_SCENARIO_OCCUPIED(float vPositionX, float vPositionY, float vPositionZ, float fRange, bool bOnlyUsersActuallyAtScenario)
	{
		auto retval = (bool)TASK::IS_SCENARIO_OCCUPIED(vPositionX, vPositionY, vPositionZ, fRange, bOnlyUsersActuallyAtScenario);
		return retval;
	}

	static Any LUA_NATIVE_TASK_0x1ACBC313966C21F3_(int scenario)
	{
		auto retval = TASK::_0x1ACBC313966C21F3(scenario);
		return retval;
	}

	static bool LUA_NATIVE_TASK_PED_HAS_USE_SCENARIO_TASK(Ped PedIndex)
	{
		auto retval = (bool)TASK::PED_HAS_USE_SCENARIO_TASK(PedIndex);
		return retval;
	}

	static bool LUA_NATIVE_TASK_PED_IS_IN_SCENARIO_BASE_(Ped ped)
	{
		auto retval = (bool)TASK::_PED_IS_IN_SCENARIO_BASE(ped);
		return retval;
	}

	static Any LUA_NATIVE_TASK_0x90703A8F75EE4ABD_(Any p0, Any p1)
	{
		auto retval = TASK::_0x90703A8F75EE4ABD(p0, p1);
		return retval;
	}

	static void LUA_NATIVE_TASK_0xD999E379265A4501_(Any p0, Any p1, Any p2)
	{
		TASK::_0xD999E379265A4501(p0, p1, p2);
	}

	static void LUA_NATIVE_TASK_PLAY_ANIM_ON_RUNNING_SCENARIO(Ped PedIndex, sol::stack_object clipSet, sol::stack_object clip)
	{
		TASK::PLAY_ANIM_ON_RUNNING_SCENARIO(PedIndex, clipSet.is<const char*>() ? clipSet.as<const char*>() : nullptr, clip.is<const char*>() ? clip.as<const char*>() : nullptr);
	}

	static Any LUA_NATIVE_TASK_0x74F0209674864CBD_()
	{
		auto retval = TASK::_0x74F0209674864CBD();
		return retval;
	}

	static Any LUA_NATIVE_TASK_0xE1C105E6BBA48270_()
	{
		auto retval = TASK::_0xE1C105E6BBA48270();
		return retval;
	}

	static Any LUA_NATIVE_TASK_0x1AC5A8AB50CFAA33_(Any p0)
	{
		auto retval = TASK::_0x1AC5A8AB50CFAA33(p0);
		return retval;
	}

	static void LUA_NATIVE_TASK_0xBEEFBB608D2AA68A_(Any p0)
	{
		TASK::_0xBEEFBB608D2AA68A(p0);
	}

	static void LUA_NATIVE_TASK_0x19BC99C678FBA139_(Any p0, Any p1, Any p2)
	{
		TASK::_0x19BC99C678FBA139(p0, p1, p2);
	}

	static void LUA_NATIVE_TASK_0x5D9B0BAAF04CF65B_(Any p0, Any p1, Any p2, Any p3)
	{
		TASK::_0x5D9B0BAAF04CF65B(p0, p1, p2, p3);
	}

	static void LUA_NATIVE_TASK_0x9B6A58FDB0024F12_(Any p0, Any p1)
	{
		TASK::_0x9B6A58FDB0024F12(p0, p1);
	}

	static void LUA_NATIVE_TASK_0xBC3F847AE2C3DC65_(Any p0, Any p1)
	{
		TASK::_0xBC3F847AE2C3DC65(p0, p1);
	}

	static void LUA_NATIVE_TASK_0x450080DDEDB91258_(Any p0, Any p1)
	{
		TASK::_0x450080DDEDB91258(p0, p1);
	}

	static void LUA_NATIVE_TASK_0x954451EA2D2120FB_(Any p0, Any p1)
	{
		TASK::_0x954451EA2D2120FB(p0, p1);
	}

	static void LUA_NATIVE_TASK_0x0F4F6C4CE471259D_(Any p0, Any p1)
	{
		TASK::_0x0F4F6C4CE471259D(p0, p1);
	}

	static void LUA_NATIVE_TASK_0xB8E3486D107F4194_(Any p0, Any p1)
	{
		TASK::_0xB8E3486D107F4194(p0, p1);
	}

	static void LUA_NATIVE_TASK_0x827A58CED9D4D5B4_(Any p0, Any p1)
	{
		TASK::_0x827A58CED9D4D5B4(p0, p1);
	}

	static void LUA_NATIVE_TASK_0x4A7D73989F52EB37_(Any p0, Any p1)
	{
		TASK::_0x4A7D73989F52EB37(p0, p1);
	}

	static void LUA_NATIVE_TASK_0xB79817DB31FF72B9_(Any p0, Any p1)
	{
		TASK::_0xB79817DB31FF72B9(p0, p1);
	}

	static void LUA_NATIVE_TASK_0x65D281985F2BDFC2_(Any p0, Any p1)
	{
		TASK::_0x65D281985F2BDFC2(p0, p1);
	}

	static void LUA_NATIVE_TASK_0x885D19AC2B6FBFF4_(Any p0, Any p1)
	{
		TASK::_0x885D19AC2B6FBFF4(p0, p1);
	}

	static void LUA_NATIVE_TASK_0x2064B33F6E6B92D4_(Any p0, Any p1, Any p2, Any p3)
	{
		TASK::_0x2064B33F6E6B92D4(p0, p1, p2, p3);
	}

	static void LUA_NATIVE_TASK_0xCE4E669400E5F8AA_(Any p0, Any p1, Any p2, Any p3)
	{
		TASK::_0xCE4E669400E5F8AA(p0, p1, p2, p3);
	}

	static void LUA_NATIVE_TASK_0x2EB977293923C723_(Any p0, Any p1)
	{
		TASK::_0x2EB977293923C723(p0, p1);
	}

	static void LUA_NATIVE_TASK_0xE9225354FB7437A7_(Any p0, Any p1)
	{
		TASK::_0xE9225354FB7437A7(p0, p1);
	}

	static void LUA_NATIVE_TASK_0x764DB5A48390FBAD_(Any p0, Any p1)
	{
		TASK::_0x764DB5A48390FBAD(p0, p1);
	}

	static void LUA_NATIVE_TASK_0x8F8C84363810691A_(Any p0, Any p1)
	{
		TASK::_0x8F8C84363810691A(p0, p1);
	}

	static void LUA_NATIVE_TASK_0xFF8AFCA532B500D4_(Any p0, Any p1)
	{
		TASK::_0xFF8AFCA532B500D4(p0, p1);
	}

	static Any LUA_NATIVE_TASK_0xFE5D28B9B7837CC1_(Any p0, Any p1, Any p2, Any p3)
	{
		auto retval = TASK::_0xFE5D28B9B7837CC1(p0, p1, p2, p3);
		return retval;
	}

	static void LUA_NATIVE_TASK_0x2B8AF29A78024BD3_(Any p0)
	{
		TASK::_0x2B8AF29A78024BD3(p0);
	}

	static Any LUA_NATIVE_TASK_0x0365000D8BF86531_(Any p0)
	{
		auto retval = TASK::_0x0365000D8BF86531(p0);
		return retval;
	}

	static Vector3 LUA_NATIVE_TASK_0x865732725536EE39_(Any p0)
	{
		auto retval = TASK::_0x865732725536EE39(p0);
		return retval;
	}

	static void LUA_NATIVE_TASK_0x0E184495B27BB57D_()
	{
		TASK::_0x0E184495B27BB57D();
	}

	static bool LUA_NATIVE_TASK_DOES_SCENARIO_GROUP_EXIST(sol::stack_object scenarioGroupName)
	{
		auto retval = (bool)TASK::DOES_SCENARIO_GROUP_EXIST(scenarioGroupName.is<const char*>() ? scenarioGroupName.as<const char*>() : nullptr);
		return retval;
	}

	static bool LUA_NATIVE_TASK_DOES_SCENARIO_GROUP_EXIST_HASH_(Hash scenarioGroup)
	{
		auto retval = (bool)TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(scenarioGroup);
		return retval;
	}

	static bool LUA_NATIVE_TASK_IS_SCENARIO_GROUP_ENABLED(sol::stack_object scenarioGroupName)
	{
		auto retval = (bool)TASK::IS_SCENARIO_GROUP_ENABLED(scenarioGroupName.is<const char*>() ? scenarioGroupName.as<const char*>() : nullptr);
		return retval;
	}

	static bool LUA_NATIVE_TASK_IS_SCENARIO_GROUP_ENABLED_HASH_(Hash scenarioGroup)
	{
		auto retval = (bool)TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(scenarioGroup);
		return retval;
	}

	static void LUA_NATIVE_TASK_SET_SCENARIO_GROUP_ENABLED(sol::stack_object scenarioGroupName, bool enabled)
	{
		TASK::SET_SCENARIO_GROUP_ENABLED(scenarioGroupName.is<const char*>() ? scenarioGroupName.as<const char*>() : nullptr, enabled);
	}

	static void LUA_NATIVE_TASK_SET_SCENARIO_GROUP_ENABLED_HASH_(Hash scenarioGroup, bool toggle)
	{
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(scenarioGroup, toggle);
	}

	static void LUA_NATIVE_TASK_RESET_SCENARIO_GROUPS_ENABLED()
	{
		TASK::RESET_SCENARIO_GROUPS_ENABLED();
	}

	static void LUA_NATIVE_TASK_0x358A1A751B335A11_(Any p0)
	{
		TASK::_0x358A1A751B335A11(p0);
	}

	static void LUA_NATIVE_TASK_FORCE_SCENARIO_GROUP_PRIORITY(Any p0, Any p1)
	{
		TASK::FORCE_SCENARIO_GROUP_PRIORITY(p0, p1);
	}

	static Any LUA_NATIVE_TASK_0xE55478C5EDF70AC2_(Any p0)
	{
		auto retval = TASK::_0xE55478C5EDF70AC2(p0);
		return retval;
	}

	static bool LUA_NATIVE_TASK_IS_SCENARIO_POINT_ACTIVE_(int scenario)
	{
		auto retval = (bool)TASK::_IS_SCENARIO_POINT_ACTIVE(scenario);
		return retval;
	}

	static void LUA_NATIVE_TASK_SET_SCENARIO_POINT_ACTIVE_(int scenario, bool active)
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(scenario, active);
	}

	static void LUA_NATIVE_TASK_RESET_SCENARIO_SCRIPT_(int scenario)
	{
		TASK::_RESET_SCENARIO_SCRIPT(scenario);
	}

	static bool LUA_NATIVE_TASK_IS_SCENARIO_TYPE_ENABLED(sol::stack_object scenarioTypeName)
	{
		auto retval = (bool)TASK::IS_SCENARIO_TYPE_ENABLED(scenarioTypeName.is<const char*>() ? scenarioTypeName.as<const char*>() : nullptr);
		return retval;
	}

	static void LUA_NATIVE_TASK_SET_SCENARIO_TYPE_ENABLED(sol::stack_object scenarioTypeName, bool enabled)
	{
		TASK::SET_SCENARIO_TYPE_ENABLED(scenarioTypeName.is<const char*>() ? scenarioTypeName.as<const char*>() : nullptr, enabled);
	}

	static void LUA_NATIVE_TASK_SET_SCENARIO_TYPE_ENABLED_HASH_(Hash scenarioType, bool toggle)
	{
		TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(scenarioType, toggle);
	}

	static void LUA_NATIVE_TASK_RESET_SCENARIO_TYPES_ENABLED()
	{
		TASK::RESET_SCENARIO_TYPES_ENABLED();
	}

	static int LUA_NATIVE_TASK_GET_SCENARIO_POINT_TYPE_PED_IS_USING_(Ped ped)
	{
		auto retval = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(ped);
		return retval;
	}

	static Hash LUA_NATIVE_TASK_GET_SCENARIO_POINT_TYPE_(int scenario)
	{
		auto retval = TASK::_GET_SCENARIO_POINT_TYPE(scenario);
		return retval;
	}

	static bool LUA_NATIVE_TASK_IS_PED_ACTIVE_IN_SCENARIO(Ped PedIndex, int scenario)
	{
		auto retval = (bool)TASK::IS_PED_ACTIVE_IN_SCENARIO(PedIndex, scenario);
		return retval;
	}

	static bool LUA_NATIVE_TASK_IS_PED_EXITING_SCENARIO(Ped ped, bool p1)
	{
		auto retval = (bool)TASK::IS_PED_EXITING_SCENARIO(ped, p1);
		return retval;
	}

	static Any LUA_NATIVE_TASK_0x2C497BDEF897C6DF_(Any p0)
	{
		auto retval = TASK::_0x2C497BDEF897C6DF(p0);
		return retval;
	}

	static void LUA_NATIVE_TASK_TASK_COMBAT_HATED_TARGETS_IN_AREA(Ped PedIndex, float vPositionX, float vPositionY, float vPositionZ, float fRange, int Flags, Any p6)
	{
		TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(PedIndex, vPositionX, vPositionY, vPositionZ, fRange, Flags, p6);
	}

	static void LUA_NATIVE_TASK_TASK_COMBAT_HATED_TARGETS_NO_LOS_TEST(Ped ped, float radius)
	{
		TASK::TASK_COMBAT_HATED_TARGETS_NO_LOS_TEST(ped, radius);
	}

	static void LUA_NATIVE_TASK_TASK_COMBAT_HATED_TARGETS_AROUND_PED(Ped PedIndex, float fRange, int Flags, Any p3)
	{
		TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(PedIndex, fRange, Flags, p3);
	}

	static void LUA_NATIVE_TASK_TASK_COMBAT_HATED_TARGETS_AROUND_PED_TIMED(Ped PedIndex, float fRange, int iTime, int Flags)
	{
		TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED_TIMED(PedIndex, fRange, iTime, Flags);
	}

	static void LUA_NATIVE_TASK_TASK_COMBAT_HATED_TARGETS(Ped ped, float radius)
	{
		TASK::TASK_COMBAT_HATED_TARGETS(ped, radius);
	}

	static void LUA_NATIVE_TASK_0x30B391915538EBE2_(Any p0)
	{
		TASK::_0x30B391915538EBE2(p0);
	}

	static void LUA_NATIVE_TASK_TASK_THROW_PROJECTILE(Ped PedIndex, float ThrowAtCoordX, float ThrowAtCoordY, float ThrowAtCoordZ)
	{
		TASK::TASK_THROW_PROJECTILE(PedIndex, ThrowAtCoordX, ThrowAtCoordY, ThrowAtCoordZ);
	}

	static void LUA_NATIVE_TASK_TASK_THROW_PROJECTILE_2_(Any p0, Any p1, Any p2, Any p3)
	{
		TASK::_TASK_THROW_PROJECTILE_2(p0, p1, p2, p3);
	}

	static void LUA_NATIVE_TASK_TASK_WHISTLE_ANIM(Ped ped, Hash audPedWhistleType, Hash p2)
	{
		TASK::TASK_WHISTLE_ANIM(ped, audPedWhistleType, p2);
	}

	static void LUA_NATIVE_TASK_TASK_SWAP_WEAPON(Ped PedIndex, bool p1, bool p2, bool p3, bool p4)
	{
		TASK::TASK_SWAP_WEAPON(PedIndex, p1, p2, p3, p4);
	}

	static void LUA_NATIVE_TASK_0x0000A8ACDC2E1B6A_(Any p0, Any p1)
	{
		TASK::_0x0000A8ACDC2E1B6A(p0, p1);
	}

	static void LUA_NATIVE_TASK_TASK_RELOAD_WEAPON(Ped PedIndex, bool bDrawWeapon)
	{
		TASK::TASK_RELOAD_WEAPON(PedIndex, bDrawWeapon);
	}

	static void LUA_NATIVE_TASK_TASK_PICK_UP_WEAPON(Ped ped, Any p1)
	{
		TASK::TASK_PICK_UP_WEAPON(ped, p1);
	}

	static bool LUA_NATIVE_TASK_IS_PED_GETTING_UP(Ped PedIndex)
	{
		auto retval = (bool)TASK::IS_PED_GETTING_UP(PedIndex);
		return retval;
	}

	static void LUA_NATIVE_TASK_TASK_ANIMAL_WRITHE(Ped ped, Any p1, Any p2)
	{
		TASK::TASK_ANIMAL_WRITHE(ped, p1, p2);
	}

	static void LUA_NATIVE_TASK_TASK_ANIMAL_BLEED_OUT_(Ped ped, Ped killer, bool p2, Hash weaponHash, int p4, int p5)
	{
		TASK::_TASK_ANIMAL_BLEED_OUT(ped, killer, p2, weaponHash, p4, p5);
	}

	static bool LUA_NATIVE_TASK_IS_PED_IN_WRITHE(Ped PedIndex)
	{
		auto retval = (bool)TASK::IS_PED_IN_WRITHE(PedIndex);
		return retval;
	}

	static Any LUA_NATIVE_TASK_0x3F8387DB1B9F31B7_(Any p0, Any p1)
	{
		auto retval = TASK::_0x3F8387DB1B9F31B7(p0, p1);
		return retval;
	}

	static Any LUA_NATIVE_TASK_0x756C7B4C43DF0422_(Any p0)
	{
		auto retval = TASK::_0x756C7B4C43DF0422(p0);
		return retval;
	}

	static Any LUA_NATIVE_TASK_0x351F74ED6177EBE7_()
	{
		auto retval = TASK::_0x351F74ED6177EBE7();
		return retval;
	}

	static Any LUA_NATIVE_TASK_0x6C50B9DCCCA70023_(Any p0)
	{
		auto retval = TASK::_0x6C50B9DCCCA70023(p0);
		return retval;
	}

	static void LUA_NATIVE_TASK_TASK_REVIVE_TARGET(Ped ped, Ped reviver, Hash tool)
	{
		TASK::TASK_REVIVE_TARGET(ped, reviver, tool);
	}

	static void LUA_NATIVE_TASK_OPEN_PATROL_ROUTE(sol::stack_object RouteName)
	{
		TASK::OPEN_PATROL_ROUTE(RouteName.is<const char*>() ? RouteName.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_TASK_CLOSE_PATROL_ROUTE()
	{
		TASK::CLOSE_PATROL_ROUTE();
	}

	static void LUA_NATIVE_TASK_ADD_PATROL_ROUTE_NODE(int NodeId, sol::stack_object NodeType, float vNodePositionX, float vNodePositionY, float vNodePositionZ, float NodeLookAtPosX, float NodeLookAtPosY, float NodeLookAtPosZ, int Duration, bool p9)
	{
		TASK::ADD_PATROL_ROUTE_NODE(NodeId, NodeType.is<const char*>() ? NodeType.as<const char*>() : nullptr, vNodePositionX, vNodePositionY, vNodePositionZ, NodeLookAtPosX, NodeLookAtPosY, NodeLookAtPosZ, Duration, p9);
	}

	static void LUA_NATIVE_TASK_ADD_PATROL_ROUTE_LINK(int NodeId1, int NodeId2)
	{
		TASK::ADD_PATROL_ROUTE_LINK(NodeId1, NodeId2);
	}

	static void LUA_NATIVE_TASK_CREATE_PATROL_ROUTE()
	{
		TASK::CREATE_PATROL_ROUTE();
	}

	static void LUA_NATIVE_TASK_DELETE_PATROL_ROUTE(sol::stack_object RouteName)
	{
		TASK::DELETE_PATROL_ROUTE(RouteName.is<const char*>() ? RouteName.as<const char*>() : nullptr);
	}

	static Any LUA_NATIVE_TASK_0x643FD1556F621772_(Any p0, Any p1, Any p2)
	{
		auto retval = TASK::_0x643FD1556F621772(p0, p1, p2);
		return retval;
	}

	static void LUA_NATIVE_TASK_TASK_PATROL(Ped Ped, sol::stack_object RouteName, int PedAlertState, bool CanChatToPeds, bool CanUseHeadLookAtAlongRoute)
	{
		TASK::TASK_PATROL(Ped, RouteName.is<const char*>() ? RouteName.as<const char*>() : nullptr, PedAlertState, CanChatToPeds, CanUseHeadLookAtAlongRoute);
	}

	static void LUA_NATIVE_TASK_TASK_PATROL_2_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		TASK::_TASK_PATROL_2(p0, p1, p2, p3, p4, p5, p6, p7);
	}

	static void LUA_NATIVE_TASK_TASK_STAY_IN_COVER(Ped Ped)
	{
		TASK::TASK_STAY_IN_COVER(Ped);
	}

	static void LUA_NATIVE_TASK_TASK_VEHICLE_SHOOT_AT_PED(Ped PedIndex, Ped OtherPed, float FireTolerance)
	{
		TASK::TASK_VEHICLE_SHOOT_AT_PED(PedIndex, OtherPed, FireTolerance);
	}

	static void LUA_NATIVE_TASK_TASK_VEHICLE_AIM_AT_PED(Ped PedIndex, Ped OtherPed)
	{
		TASK::TASK_VEHICLE_AIM_AT_PED(PedIndex, OtherPed);
	}

	static void LUA_NATIVE_TASK_TASK_VEHICLE_SHOOT_AT_COORD(Ped PedIndex, float vPositionX, float vPositionY, float vPositionZ, float FireTolerance)
	{
		TASK::TASK_VEHICLE_SHOOT_AT_COORD(PedIndex, vPositionX, vPositionY, vPositionZ, FireTolerance);
	}

	static void LUA_NATIVE_TASK_0xAF2EF28CE3084505_(Any p0, Any p1, Any p2, Any p3)
	{
		TASK::_0xAF2EF28CE3084505(p0, p1, p2, p3);
	}

	static void LUA_NATIVE_TASK_TASK_VEHICLE_AIM_AT_COORD(Ped PedIndex, float vPositionX, float vPositionY, float vPositionZ)
	{
		TASK::TASK_VEHICLE_AIM_AT_COORD(PedIndex, vPositionX, vPositionY, vPositionZ);
	}

	static void LUA_NATIVE_TASK_TASK_VEHICLE_GOTO_NAVMESH(Ped iPed, Vehicle VehicleIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ, float CruiseSpeed, int Mode, float TargetReachedDist)
	{
		TASK::TASK_VEHICLE_GOTO_NAVMESH(iPed, VehicleIndex, VecCoorsX, VecCoorsY, VecCoorsZ, CruiseSpeed, Mode, TargetReachedDist);
	}

	static void LUA_NATIVE_TASK_TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(Ped PedIndex, float GoToCoordX, float GoToCoordY, float GoToCoordZ, float AimAtCoordX, float AimAtCoordY, float AimAtCoordZ, float p7, bool p8, float p9, float p10, bool p11, Any p12, bool p13, Hash FiringPatternHash, Any p15)
	{
		TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(PedIndex, GoToCoordX, GoToCoordY, GoToCoordZ, AimAtCoordX, AimAtCoordY, AimAtCoordZ, p7, p8, p9, p10, p11, p12, p13, FiringPatternHash, p15);
	}

	static void LUA_NATIVE_TASK_TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD_USING_COMBAT_STYLE(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15)
	{
		TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD_USING_COMBAT_STYLE(ped, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15);
	}

	static void LUA_NATIVE_TASK_TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(Ped PedIndex, float GoToCoordX, float GoToCoordY, float GoToCoordZ, Ped ped2, float p5, Any p6, float p7, float p8, Any p9, Any p10, Any p11, Hash firingPattern, int p13, Any p14)
	{
		TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(PedIndex, GoToCoordX, GoToCoordY, GoToCoordZ, ped2, p5, p6, p7, p8, p9, p10, p11, firingPattern, p13, p14);
	}

	static void LUA_NATIVE_TASK_TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY_USING_COMBAT_STYLE(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14)
	{
		TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY_USING_COMBAT_STYLE(ped, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14);
	}

	static void LUA_NATIVE_TASK_TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(Ped PedIndex, Entity GoToEntityIndex, Entity AimAtEntityIndex, float p3, Any p4, float p5, float p6, Any p7, Any p8, Hash FiringPatternHash, Any p10)
	{
		TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(PedIndex, GoToEntityIndex, AimAtEntityIndex, p3, p4, p5, p6, p7, p8, FiringPatternHash, p10);
	}

	static void LUA_NATIVE_TASK_TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY_USING_COMBAT_STYLE(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10)
	{
		TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY_USING_COMBAT_STYLE(ped, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);
	}

	static void LUA_NATIVE_TASK_TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(Ped PedIndex, float GoToCoordX, float GoToCoordY, float GoToCoordZ, float AimNearCoordX, float AimNearCoordY, float AimNearCoordZ, float MoveBlendRatio, bool Shoot, float TargetDistance, float SlowDistance, bool UseNavMesh, int iNavFlags, int iTaskFlags, Hash FiringPatternHash)
	{
		TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(PedIndex, GoToCoordX, GoToCoordY, GoToCoordZ, AimNearCoordX, AimNearCoordY, AimNearCoordZ, MoveBlendRatio, Shoot, TargetDistance, SlowDistance, UseNavMesh, iNavFlags, iTaskFlags, FiringPatternHash);
	}

	static void LUA_NATIVE_TASK_TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD_USING_COMBAT_STYLE(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14)
	{
		TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD_USING_COMBAT_STYLE(ped, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14);
	}

	static void LUA_NATIVE_TASK_SET_HIGH_FALL_TASK(Ped nPedIndex, int nMinTime, int nMaxTime, int type)
	{
		TASK::SET_HIGH_FALL_TASK(nPedIndex, nMinTime, nMaxTime, type);
	}

	static void LUA_NATIVE_TASK_0x5217B7B6DB78E1F3_(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		TASK::_0x5217B7B6DB78E1F3(p0, p1, p2, p3, p4);
	}

	static void LUA_NATIVE_TASK_REQUEST_WAYPOINT_RECORDING(sol::stack_object RecordingName)
	{
		TASK::REQUEST_WAYPOINT_RECORDING(RecordingName.is<const char*>() ? RecordingName.as<const char*>() : nullptr);
	}

	static bool LUA_NATIVE_TASK_GET_IS_WAYPOINT_RECORDING_LOADED(sol::stack_object RecordingName)
	{
		auto retval = (bool)TASK::GET_IS_WAYPOINT_RECORDING_LOADED(RecordingName.is<const char*>() ? RecordingName.as<const char*>() : nullptr);
		return retval;
	}

	static void LUA_NATIVE_TASK_REMOVE_WAYPOINT_RECORDING(sol::stack_object RecordingName)
	{
		TASK::REMOVE_WAYPOINT_RECORDING(RecordingName.is<const char*>() ? RecordingName.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_TASK_0xF718931A82EEB898_()
	{
		TASK::_0xF718931A82EEB898();
	}

	static std::tuple<bool, int> LUA_NATIVE_TASK_WAYPOINT_RECORDING_GET_NUM_POINTS(sol::stack_object RecordingName, int iOutNumPoints)
	{
		std::tuple<bool, int> return_values;
		std::get<0>(return_values) = (bool)TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(RecordingName.is<const char*>() ? RecordingName.as<const char*>() : nullptr, &iOutNumPoints);
		std::get<1>(return_values) = iOutNumPoints;

		return return_values;
	}

	static std::tuple<bool, Vector3> LUA_NATIVE_TASK_WAYPOINT_RECORDING_GET_COORD(sol::stack_object RecordingName, int iWaypoint, Vector3 vOutCoord)
	{
		std::tuple<bool, Vector3> return_values;
		std::get<0>(return_values) = (bool)TASK::WAYPOINT_RECORDING_GET_COORD(RecordingName.is<const char*>() ? RecordingName.as<const char*>() : nullptr, iWaypoint, &vOutCoord);
		std::get<1>(return_values) = vOutCoord;

		return return_values;
	}

	static float LUA_NATIVE_TASK_WAYPOINT_RECORDING_GET_SPEED_AT_POINT(sol::stack_object RecordingName, int iWaypoint)
	{
		auto retval = TASK::WAYPOINT_RECORDING_GET_SPEED_AT_POINT(RecordingName.is<const char*>() ? RecordingName.as<const char*>() : nullptr, iWaypoint);
		return retval;
	}

	static std::tuple<bool, int> LUA_NATIVE_TASK_WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sol::stack_object RecordingName, float vPosX, float vPosY, float vPosZ, int iOutWaypoint)
	{
		std::tuple<bool, int> return_values;
		std::get<0>(return_values) = (bool)TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(RecordingName.is<const char*>() ? RecordingName.as<const char*>() : nullptr, vPosX, vPosY, vPosZ, &iOutWaypoint);
		std::get<1>(return_values) = iOutWaypoint;

		return return_values;
	}

	static void LUA_NATIVE_TASK_TASK_FOLLOW_WAYPOINT_RECORDING_ADVANCED(Ped ped, Any p1)
	{
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING_ADVANCED(ped, p1);
	}

	static void LUA_NATIVE_TASK_TASK_FOLLOW_WAYPOINT_RECORDING(Ped iPed, sol::stack_object RecordingName, int iStartingProgress, int iFlags, int iTargetProgress, bool p5, Any p6, int p7)
	{
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iPed, RecordingName.is<const char*>() ? RecordingName.as<const char*>() : nullptr, iStartingProgress, iFlags, iTargetProgress, p5, p6, p7);
	}

	static void LUA_NATIVE_TASK_TASK_FOLLOW_WAYPOINT_RECORDING_AT_OFFSET(Ped ped, sol::stack_object waypointRecording, float p2, int p3, int p4, int p5, bool p6)
	{
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING_AT_OFFSET(ped, waypointRecording.is<const char*>() ? waypointRecording.as<const char*>() : nullptr, p2, p3, p4, p5, p6);
	}

	static void LUA_NATIVE_TASK_TASK_FOLLOW_ENTITY_ALONG_WAYPOINT_RECORDING_AT_OFFSET(Ped ped0, Ped ped1, sol::stack_object waypointRecording, float p3, float p4, int p5, int p6, int p7, bool p8)
	{
		TASK::TASK_FOLLOW_ENTITY_ALONG_WAYPOINT_RECORDING_AT_OFFSET(ped0, ped1, waypointRecording.is<const char*>() ? waypointRecording.as<const char*>() : nullptr, p3, p4, p5, p6, p7, p8);
	}

	static bool LUA_NATIVE_TASK_IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Ped iPed, sol::stack_object waypointRecording)
	{
		auto retval = (bool)TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iPed, waypointRecording.is<const char*>() ? waypointRecording.as<const char*>() : nullptr);
		return retval;
	}

	static int LUA_NATIVE_TASK_GET_PED_WAYPOINT_PROGRESS(Ped iPed)
	{
		auto retval = TASK::GET_PED_WAYPOINT_PROGRESS(iPed);
		return retval;
	}

	static float LUA_NATIVE_TASK_GET_PED_WAYPOINT_DISTANCE(Ped iPed)
	{
		auto retval = TASK::GET_PED_WAYPOINT_DISTANCE(iPed);
		return retval;
	}

	static bool LUA_NATIVE_TASK_SET_PED_WAYPOINT_ROUTE_OFFSET(Ped iPed, float vOffsetX, float vOffsetY, float vOffsetZ)
	{
		auto retval = (bool)TASK::SET_PED_WAYPOINT_ROUTE_OFFSET(iPed, vOffsetX, vOffsetY, vOffsetZ);
		return retval;
	}

	static float LUA_NATIVE_TASK_GET_WAYPOINT_DISTANCE_ALONG_ROUTE(sol::stack_object RecordingName, int iWaypoint)
	{
		auto retval = TASK::GET_WAYPOINT_DISTANCE_ALONG_ROUTE(RecordingName.is<const char*>() ? RecordingName.as<const char*>() : nullptr, iWaypoint);
		return retval;
	}

	static float LUA_NATIVE_TASK_0x3ACC128510142B9D_(sol::stack_object waypointRecording, float x, float y, float z)
	{
		auto retval = TASK::_0x3ACC128510142B9D(waypointRecording.is<const char*>() ? waypointRecording.as<const char*>() : nullptr, x, y, z);
		return retval;
	}

	static bool LUA_NATIVE_TASK_WAYPOINT_PLAYBACK_GET_IS_PAUSED(Ped iPed)
	{
		auto retval = (bool)TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iPed);
		return retval;
	}

	static bool LUA_NATIVE_TASK_WAYPOINT_PLAYBACK_GET_IS_AIMING(Ped ped)
	{
		auto retval = (bool)TASK::WAYPOINT_PLAYBACK_GET_IS_AIMING(ped);
		return retval;
	}

	static bool LUA_NATIVE_TASK_WAYPOINT_PLAYBACK_GET_IS_SHOOTING(Ped ped)
	{
		auto retval = (bool)TASK::WAYPOINT_PLAYBACK_GET_IS_SHOOTING(ped);
		return retval;
	}

	static void LUA_NATIVE_TASK_WAYPOINT_PLAYBACK_PAUSE(Ped iPed, bool p1, bool p2, bool p3)
	{
		TASK::WAYPOINT_PLAYBACK_PAUSE(iPed, p1, p2, p3);
	}

	static void LUA_NATIVE_TASK_WAYPOINT_PLAYBACK_RESUME(Ped iPed, bool bAchieveHeadingFirst, int iProgressToContinueFrom, int iTimeBeforeResumingMs)
	{
		TASK::WAYPOINT_PLAYBACK_RESUME(iPed, bAchieveHeadingFirst, iProgressToContinueFrom, iTimeBeforeResumingMs);
	}

	static void LUA_NATIVE_TASK_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Ped iPed, float fMoveBlendRatio, bool p2, float p3, bool p4)
	{
		TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iPed, fMoveBlendRatio, p2, p3, p4);
	}

	static void LUA_NATIVE_TASK_WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(Ped iPed)
	{
		TASK::WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(iPed);
	}

	static float LUA_NATIVE_TASK_GET_PED_WAYPOINT_OVERRIDE_SPEED(Ped ped)
	{
		auto retval = TASK::GET_PED_WAYPOINT_OVERRIDE_SPEED(ped);
		return retval;
	}

	static void LUA_NATIVE_TASK_USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sol::stack_object RecordingName, bool bUseAsAssistedMovementRoute, float fPathWidth, float fTension, bool p4)
	{
		TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(RecordingName.is<const char*>() ? RecordingName.as<const char*>() : nullptr, bUseAsAssistedMovementRoute, fPathWidth, fTension, p4);
	}

	static void LUA_NATIVE_TASK_WAYPOINT_PLAYBACK_START_AIMING_AT_PED(Ped iPed, Ped iTargetPed, bool bRunAndGun, Any p3)
	{
		TASK::WAYPOINT_PLAYBACK_START_AIMING_AT_PED(iPed, iTargetPed, bRunAndGun, p3);
	}

	static void LUA_NATIVE_TASK_WAYPOINT_PLAYBACK_START_AIMING_AT_ENTITY(Any p0, Any p1, Any p2, Any p3)
	{
		TASK::WAYPOINT_PLAYBACK_START_AIMING_AT_ENTITY(p0, p1, p2, p3);
	}

	static void LUA_NATIVE_TASK_WAYPOINT_PLAYBACK_START_AIMING_AT_COORD(Ped iPed, float vTargetCoordsX, float vTargetCoordsY, float vTargetCoordsZ, bool bRunAndGun, Any p5)
	{
		TASK::WAYPOINT_PLAYBACK_START_AIMING_AT_COORD(iPed, vTargetCoordsX, vTargetCoordsY, vTargetCoordsZ, bRunAndGun, p5);
	}

	static void LUA_NATIVE_TASK_WAYPOINT_PLAYBACK_START_SHOOTING_AT_PED(Ped iPed, Ped iTargetPed, bool bRunAndGun, Hash FiringPatternHash, float p4)
	{
		TASK::WAYPOINT_PLAYBACK_START_SHOOTING_AT_PED(iPed, iTargetPed, bRunAndGun, FiringPatternHash, p4);
	}

	static void LUA_NATIVE_TASK_WAYPOINT_PLAYBACK_START_SHOOTING_AT_ENTITY(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		TASK::WAYPOINT_PLAYBACK_START_SHOOTING_AT_ENTITY(p0, p1, p2, p3, p4);
	}

	static void LUA_NATIVE_TASK_WAYPOINT_PLAYBACK_START_SHOOTING_AT_COORD(Ped iPed, float vTargetCoordsX, float vTargetCoordsY, float vTargetCoordsZ, bool bRunAndGun, Hash FiringPatternHash, float p6)
	{
		TASK::WAYPOINT_PLAYBACK_START_SHOOTING_AT_COORD(iPed, vTargetCoordsX, vTargetCoordsY, vTargetCoordsZ, bRunAndGun, FiringPatternHash, p6);
	}

	static void LUA_NATIVE_TASK_WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING(Ped iPed)
	{
		TASK::WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING(iPed);
	}

	static void LUA_NATIVE_TASK_ASSISTED_MOVEMENT_REMOVE_ROUTE(sol::stack_object RouteName)
	{
		TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE(RouteName.is<const char*>() ? RouteName.as<const char*>() : nullptr);
	}

	static bool LUA_NATIVE_TASK_CREATE_WAYPOINT_PATH_(sol::stack_object pathName, uintptr_t p1, int nodes, int p3)
	{
		auto retval = (bool)TASK::_CREATE_WAYPOINT_PATH(pathName.is<const char*>() ? pathName.as<const char*>() : nullptr, (Any*)p1, nodes, p3);
		return retval;
	}

	static bool LUA_NATIVE_TASK_ASSISTED_MOVEMENT_IS_ROUTE_LOADED(sol::stack_object RouteName)
	{
		auto retval = (bool)TASK::ASSISTED_MOVEMENT_IS_ROUTE_LOADED(RouteName.is<const char*>() ? RouteName.as<const char*>() : nullptr);
		return retval;
	}

	static void LUA_NATIVE_TASK_ASSISTED_MOVEMENT_SET_ROUTE_PROPERTIES(sol::stack_object RouteName, int iFlags)
	{
		TASK::ASSISTED_MOVEMENT_SET_ROUTE_PROPERTIES(RouteName.is<const char*>() ? RouteName.as<const char*>() : nullptr, iFlags);
	}

	static void LUA_NATIVE_TASK_SET_ENABLE_SPEED_RESTRAIN_FOR_WAYPOINT_RECORDING_LEADER(Any p0, Any p1)
	{
		TASK::SET_ENABLE_SPEED_RESTRAIN_FOR_WAYPOINT_RECORDING_LEADER(p0, p1);
	}

	static void LUA_NATIVE_TASK_SET_UP_SPEED_RESTRAIN_INFORMATION_FOR_PLAYER_FOLLOWER(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8)
	{
		TASK::SET_UP_SPEED_RESTRAIN_INFORMATION_FOR_PLAYER_FOLLOWER(p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}

	static void LUA_NATIVE_TASK_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Ped iPed, Vehicle VehicleIndex, sol::stack_object RecordingName, int Mode, Any p4, int eWaypoint, int iFlags, float MaxSpeed, bool DriveInLoop, float fTargetArriveDistance, bool p10)
	{
		TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iPed, VehicleIndex, RecordingName.is<const char*>() ? RecordingName.as<const char*>() : nullptr, Mode, p4, eWaypoint, iFlags, MaxSpeed, DriveInLoop, fTargetArriveDistance, p10);
	}

	static void LUA_NATIVE_TASK_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING_2_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		TASK::_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING_2(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}

	static bool LUA_NATIVE_TASK_IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Vehicle iVeh, Any p1)
	{
		auto retval = (bool)TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iVeh, p1);
		return retval;
	}

	static int LUA_NATIVE_TASK_GET_VEHICLE_WAYPOINT_PROGRESS(Vehicle iVeh)
	{
		auto retval = TASK::GET_VEHICLE_WAYPOINT_PROGRESS(iVeh);
		return retval;
	}

	static int LUA_NATIVE_TASK_GET_VEHICLE_WAYPOINT_TARGET_POINT(Vehicle iVeh)
	{
		auto retval = TASK::GET_VEHICLE_WAYPOINT_TARGET_POINT(iVeh);
		return retval;
	}

	static void LUA_NATIVE_TASK_VEHICLE_WAYPOINT_PLAYBACK_PAUSE(Vehicle iVeh)
	{
		TASK::VEHICLE_WAYPOINT_PLAYBACK_PAUSE(iVeh);
	}

	static Any LUA_NATIVE_TASK_VEHICLE_WAYPOINT_PLAYBACK_GET_IS_PAUSED(Any p0)
	{
		auto retval = TASK::VEHICLE_WAYPOINT_PLAYBACK_GET_IS_PAUSED(p0);
		return retval;
	}

	static void LUA_NATIVE_TASK_VEHICLE_WAYPOINT_PLAYBACK_RESUME(Vehicle iVeh)
	{
		TASK::VEHICLE_WAYPOINT_PLAYBACK_RESUME(iVeh);
	}

	static void LUA_NATIVE_TASK_VEHICLE_WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(Vehicle iVeh)
	{
		TASK::VEHICLE_WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(iVeh);
	}

	static void LUA_NATIVE_TASK_VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Vehicle iVeh, float fSpeed)
	{
		TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iVeh, fSpeed);
	}

	static Any LUA_NATIVE_TASK_GET_VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Any p0)
	{
		auto retval = TASK::GET_VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(p0);
		return retval;
	}

	static void LUA_NATIVE_TASK_TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Ped PedIndex, bool bSet)
	{
		TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PedIndex, bSet);
	}

	static void LUA_NATIVE_TASK_TASK_SET_STEALTH_MOVEMENT(Ped ped, bool p1, Any p2, bool p3)
	{
		TASK::TASK_SET_STEALTH_MOVEMENT(ped, p1, p2, p3);
	}

	static void LUA_NATIVE_TASK_TASK_SET_CROUCH_MOVEMENT(Ped ped, bool p1, Any p2, bool p3)
	{
		TASK::TASK_SET_CROUCH_MOVEMENT(ped, p1, p2, p3);
	}

	static void LUA_NATIVE_TASK_TASK_FORCE_MOTION_STATE(Ped PedIndex, Hash motionState, bool bForceRestart)
	{
		TASK::TASK_FORCE_MOTION_STATE(PedIndex, motionState, bForceRestart);
	}

	static void LUA_NATIVE_TASK_TASK_MOVE_NETWORK_BY_NAME(Ped PedIndex, sol::stack_object network, float blendDuration, bool bAllowOverrideCloneUpdate, sol::stack_object animDictionary, int flags)
	{
		TASK::TASK_MOVE_NETWORK_BY_NAME(PedIndex, network.is<const char*>() ? network.as<const char*>() : nullptr, blendDuration, bAllowOverrideCloneUpdate, animDictionary.is<const char*>() ? animDictionary.as<const char*>() : nullptr, flags);
	}

	static void LUA_NATIVE_TASK_TASK_MOVE_NETWORK_BY_NAME_WITH_INIT_PARAMS(Ped ped, sol::stack_object moveNetworkDefName, uintptr_t taskData, float p3, bool p4, sol::stack_object animDict, int flags)
	{
		TASK::TASK_MOVE_NETWORK_BY_NAME_WITH_INIT_PARAMS(ped, moveNetworkDefName.is<const char*>() ? moveNetworkDefName.as<const char*>() : nullptr, (Any*)taskData, p3, p4, animDict.is<const char*>() ? animDict.as<const char*>() : nullptr, flags);
	}

	static void LUA_NATIVE_TASK_TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS(Ped ped, sol::stack_object moveNetworkDefName, uintptr_t taskData, float xPos, float yPos, float zPos, float xRot, float yRot, float zRot, int p9, float p10, int p11, int p12, int flag, int p14)
	{
		TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS(ped, moveNetworkDefName.is<const char*>() ? moveNetworkDefName.as<const char*>() : nullptr, (Any*)taskData, xPos, yPos, zPos, xRot, yRot, zRot, p9, p10, p11, p12, flag, p14);
	}

	static void LUA_NATIVE_TASK_TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS_ATTACHED(Ped ped, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15, Any p16, Any p17)
	{
		TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS_ATTACHED(ped, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17);
	}

	static bool LUA_NATIVE_TASK_IS_TASK_MOVE_NETWORK_ACTIVE(Ped PedIndex)
	{
		auto retval = (bool)TASK::IS_TASK_MOVE_NETWORK_ACTIVE(PedIndex);
		return retval;
	}

	static Hash LUA_NATIVE_TASK_GET_TASK_MOVE_NETWORK_ID_(Ped ped)
	{
		auto retval = TASK::_GET_TASK_MOVE_NETWORK_ID(ped);
		return retval;
	}

	static bool LUA_NATIVE_TASK_IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Ped PedIndex)
	{
		auto retval = (bool)TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(PedIndex);
		return retval;
	}

	static void LUA_NATIVE_TASK_REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Ped PedIndex, sol::stack_object StateName)
	{
		TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(PedIndex, StateName.is<const char*>() ? StateName.as<const char*>() : nullptr);
	}

	static const char* LUA_NATIVE_TASK_GET_TASK_MOVE_NETWORK_STATE(Ped PedIndex)
	{
		auto retval = TASK::GET_TASK_MOVE_NETWORK_STATE(PedIndex);
		return retval;
	}

	static Any LUA_NATIVE_TASK_0xE9A6400D1A0E7A55_(Any p0)
	{
		auto retval = TASK::_0xE9A6400D1A0E7A55(p0);
		return retval;
	}

	static void LUA_NATIVE_TASK_0x615DC4A82E90BB48_(Any p0, Any p1, Any p2)
	{
		TASK::_0x615DC4A82E90BB48(p0, p1, p2);
	}

	static void LUA_NATIVE_TASK_SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Ped PedIndex, sol::stack_object signalName, float fSignal)
	{
		TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(PedIndex, signalName.is<const char*>() ? signalName.as<const char*>() : nullptr, fSignal);
	}

	static void LUA_NATIVE_TASK_SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT_2_(Ped ped, sol::stack_object signalName, float value)
	{
		TASK::_SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT_2(ped, signalName.is<const char*>() ? signalName.as<const char*>() : nullptr, value);
	}

	static void LUA_NATIVE_TASK_SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(Ped PedIndex, sol::stack_object signalName, bool bSignal)
	{
		TASK::SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(PedIndex, signalName.is<const char*>() ? signalName.as<const char*>() : nullptr, bSignal);
	}

	static void LUA_NATIVE_TASK_SET_TASK_MOVE_NETWORK_SIGNAL_VECTOR_(Ped ped, sol::stack_object signalName, float x, float y, float z)
	{
		TASK::_SET_TASK_MOVE_NETWORK_SIGNAL_VECTOR(ped, signalName.is<const char*>() ? signalName.as<const char*>() : nullptr, x, y, z);
	}

	static float LUA_NATIVE_TASK_GET_TASK_MOVE_NETWORK_PHASE_FLOAT_(Ped ped, sol::stack_object phaseName)
	{
		auto retval = TASK::_GET_TASK_MOVE_NETWORK_PHASE_FLOAT(ped, phaseName.is<const char*>() ? phaseName.as<const char*>() : nullptr);
		return retval;
	}

	static bool LUA_NATIVE_TASK_GET_TASK_MOVE_NETWORK_EVENT(Ped PedIndex, sol::stack_object eventName)
	{
		auto retval = (bool)TASK::GET_TASK_MOVE_NETWORK_EVENT(PedIndex, eventName.is<const char*>() ? eventName.as<const char*>() : nullptr);
		return retval;
	}

	static void LUA_NATIVE_TASK_0x9585FF23C4B8EDE0_(Any p0, Any p1)
	{
		TASK::_0x9585FF23C4B8EDE0(p0, p1);
	}

	static void LUA_NATIVE_TASK_0xEAF87DA2BE78A15B_(Any p0, Any p1)
	{
		TASK::_0xEAF87DA2BE78A15B(p0, p1);
	}

	static void LUA_NATIVE_TASK_0x3BBEECC5B8F35318_(Any p0, Any p1)
	{
		TASK::_0x3BBEECC5B8F35318(p0, p1);
	}

	static bool LUA_NATIVE_TASK_IS_MOVE_BLEND_RATIO_STILL(float MoveBlendRatio)
	{
		auto retval = (bool)TASK::IS_MOVE_BLEND_RATIO_STILL(MoveBlendRatio);
		return retval;
	}

	static bool LUA_NATIVE_TASK_IS_MOVE_BLEND_RATIO_WALKING(float MoveBlendRatio)
	{
		auto retval = (bool)TASK::IS_MOVE_BLEND_RATIO_WALKING(MoveBlendRatio);
		return retval;
	}

	static bool LUA_NATIVE_TASK_IS_MOVE_BLEND_RATIO_RUNNING(float MoveBlendRatio)
	{
		auto retval = (bool)TASK::IS_MOVE_BLEND_RATIO_RUNNING(MoveBlendRatio);
		return retval;
	}

	static bool LUA_NATIVE_TASK_IS_MOVE_BLEND_RATIO_SPRINTING(float MoveBlendRatio)
	{
		auto retval = (bool)TASK::IS_MOVE_BLEND_RATIO_SPRINTING(MoveBlendRatio);
		return retval;
	}

	static bool LUA_NATIVE_TASK_IS_PED_STILL(Ped PedIndex)
	{
		auto retval = (bool)TASK::IS_PED_STILL(PedIndex);
		return retval;
	}

	static bool LUA_NATIVE_TASK_IS_PED_WALKING(Ped PedIndex)
	{
		auto retval = (bool)TASK::IS_PED_WALKING(PedIndex);
		return retval;
	}

	static bool LUA_NATIVE_TASK_IS_PED_RUNNING(Ped PedIndex)
	{
		auto retval = (bool)TASK::IS_PED_RUNNING(PedIndex);
		return retval;
	}

	static bool LUA_NATIVE_TASK_IS_PED_SPRINTING(Ped PedIndex)
	{
		auto retval = (bool)TASK::IS_PED_SPRINTING(PedIndex);
		return retval;
	}

	static bool LUA_NATIVE_TASK_IS_PED_IN_HIT_REACT(Ped ped)
	{
		auto retval = (bool)TASK::IS_PED_IN_HIT_REACT(ped);
		return retval;
	}

	static void LUA_NATIVE_TASK_TASK_ARREST_PED(Ped ArresterPedIndex, Ped ArresteePedIndex)
	{
		TASK::TASK_ARREST_PED(ArresterPedIndex, ArresteePedIndex);
	}

	static bool LUA_NATIVE_TASK_IS_PED_BEING_ARRESTED(Ped PedIndex)
	{
		auto retval = (bool)TASK::IS_PED_BEING_ARRESTED(PedIndex);
		return retval;
	}

	static bool LUA_NATIVE_TASK_IS_PED_ARRESTING_ANY_PED_(Ped ped)
	{
		auto retval = (bool)TASK::_IS_PED_ARRESTING_ANY_PED(ped);
		return retval;
	}

	static void LUA_NATIVE_TASK_CUFF_PED_(Ped ped)
	{
		TASK::_CUFF_PED(ped);
	}

	static void LUA_NATIVE_TASK_UNCUFF_PED(Ped PedIndex)
	{
		TASK::UNCUFF_PED(PedIndex);
	}

	static bool LUA_NATIVE_TASK_IS_PED_CUFFED(Ped PedIndex)
	{
		auto retval = (bool)TASK::IS_PED_CUFFED(PedIndex);
		return retval;
	}

	static bool LUA_NATIVE_TASK_IS_PED_DUELLING_(Ped ped)
	{
		auto retval = (bool)TASK::_IS_PED_DUELLING(ped);
		return retval;
	}

	static void LUA_NATIVE_TASK_TASK_DUEL(Ped ped, Any p1, float p2, Entity entity, float p4, int p5, float vPosOpponentX, float vPosOpponentY, float vPosOpponentZ, float fOpponentHead, int p10)
	{
		TASK::TASK_DUEL(ped, p1, p2, entity, p4, p5, vPosOpponentX, vPosOpponentY, vPosOpponentZ, fOpponentHead, p10);
	}

	static Any LUA_NATIVE_TASK_0x908BB14BCE85C80E_(Any p0)
	{
		auto retval = TASK::_0x908BB14BCE85C80E(p0);
		return retval;
	}

	static Any LUA_NATIVE_TASK_0x1F7A9A9C38C13A56_(Any p0)
	{
		auto retval = TASK::_0x1F7A9A9C38C13A56(p0);
		return retval;
	}

	static Any LUA_NATIVE_TASK_0x3FEB770D8ED9047A_(Any p0)
	{
		auto retval = TASK::_0x3FEB770D8ED9047A(p0);
		return retval;
	}

	static Any LUA_NATIVE_TASK_0x30146C25686B7836_(Any p0, Any p1)
	{
		auto retval = TASK::_0x30146C25686B7836(p0, p1);
		return retval;
	}

	static Any LUA_NATIVE_TASK_0x59AE5CA4FFB4E378_(Any p0, Any p1)
	{
		auto retval = TASK::_0x59AE5CA4FFB4E378(p0, p1);
		return retval;
	}

	static void LUA_NATIVE_TASK_0x748D5E0D2A1A4C61_(Any p0, Any p1, Any p2)
	{
		TASK::_0x748D5E0D2A1A4C61(p0, p1, p2);
	}

	static void LUA_NATIVE_TASK_END_DUEL(Ped ped, bool p1, float p2)
	{
		TASK::END_DUEL(ped, p1, p2);
	}

	static void LUA_NATIVE_TASK_0x651F0530083C0E5A_(Any p0, Any p1)
	{
		TASK::_0x651F0530083C0E5A(p0, p1);
	}

	static void LUA_NATIVE_TASK_TASK_CARRIABLE(Entity entity, Hash carryConfig, Ped carrier, int carriableSlot, int flags)
	{
		TASK::TASK_CARRIABLE(entity, carryConfig, carrier, carriableSlot, flags);
	}

	static void LUA_NATIVE_TASK_0x9EBD34958AB6F824_(Any p0)
	{
		TASK::_0x9EBD34958AB6F824(p0);
	}

	static bool LUA_NATIVE_TASK_GET_IS_CARRIABLE_ENTITY(Entity entity)
	{
		auto retval = (bool)TASK::GET_IS_CARRIABLE_ENTITY(entity);
		return retval;
	}

	static Any LUA_NATIVE_TASK_0x10ADFDF07B7DFFBA_(Any p0, Any p1, Any p2)
	{
		auto retval = TASK::_0x10ADFDF07B7DFFBA(p0, p1, p2);
		return retval;
	}

	static void LUA_NATIVE_TASK_TASK_PLACE_CARRIED_ENTITY_AT_COORD(Ped ped, Entity entity, float x, float y, float z, float p5, int flags)
	{
		TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(ped, entity, x, y, z, p5, flags);
	}

	static void LUA_NATIVE_TASK_TASK_PLACE_CARRIED_ENTITY_ON_MOUNT(Ped ped, Entity entity, Ped mount, float p3)
	{
		TASK::TASK_PLACE_CARRIED_ENTITY_ON_MOUNT(ped, entity, mount, p3);
	}

	static void LUA_NATIVE_TASK_TASK_DUMP_CARRIABLE_FROM_PARENT(Ped ped, Ped ped2, Entity entity)
	{
		TASK::TASK_DUMP_CARRIABLE_FROM_PARENT(ped, ped2, entity);
	}

	static void LUA_NATIVE_TASK_DETACH_CARRIABLE_PED_(Ped ped)
	{
		TASK::_DETACH_CARRIABLE_PED(ped);
	}

	static void LUA_NATIVE_TASK_0xE2CF104ADD49D4BF_(Any p0)
	{
		TASK::_0xE2CF104ADD49D4BF(p0);
	}

	static void LUA_NATIVE_TASK_TASK_PICKUP_CARRIABLE_ENTITY(Ped ped, Entity entity)
	{
		TASK::TASK_PICKUP_CARRIABLE_ENTITY(ped, entity);
	}

	static void LUA_NATIVE_TASK_TASK_HOGTIE_TARGET_PED(Ped ped, Ped targetPed)
	{
		TASK::TASK_HOGTIE_TARGET_PED(ped, targetPed);
	}

	static void LUA_NATIVE_TASK_TASK_CUT_FREE_HOGTIED_TARGET_PED_(Ped ped, Ped targetPed)
	{
		TASK::_TASK_CUT_FREE_HOGTIED_TARGET_PED(ped, targetPed);
	}

	static void LUA_NATIVE_TASK_TASK_CUT_FREE_HOGTIED_TARGET_PED_2_(Ped ped, Ped targetPed, float p2)
	{
		TASK::_TASK_CUT_FREE_HOGTIED_TARGET_PED_2(ped, targetPed, p2);
	}

	static void LUA_NATIVE_TASK_SET_HOGTIE_ESCAPE_TIMER_(Ped ped, float time)
	{
		TASK::_SET_HOGTIE_ESCAPE_TIMER(ped, time);
	}

	static float LUA_NATIVE_TASK_GET_HOGTIE_ESCAPE_TIMER_(Ped ped)
	{
		auto retval = TASK::_GET_HOGTIE_ESCAPE_TIMER(ped);
		return retval;
	}

	static Any LUA_NATIVE_TASK_0x03D741CB4052E26C_(Any p0)
	{
		auto retval = TASK::_0x03D741CB4052E26C(p0);
		return retval;
	}

	static bool LUA_NATIVE_TASK_REQUEST_HERB_COMPOSITE_ASSET_(Hash asset)
	{
		auto retval = (bool)TASK::_REQUEST_HERB_COMPOSITE_ASSET(asset);
		return retval;
	}

	static bool LUA_NATIVE_TASK_ARE_COMPOSITE_LOOTABLE_ENTITY_DEF_ASSETS_LOADED(Hash asset)
	{
		auto retval = (bool)TASK::ARE_COMPOSITE_LOOTABLE_ENTITY_DEF_ASSETS_LOADED(asset);
		return retval;
	}

	static int LUA_NATIVE_TASK_CREATE_HERB_COMPOSITES_(Hash asset, float x, float y, float z, float heading, int groundSetting, uintptr_t p6, int p7)
	{
		auto retval = TASK::_CREATE_HERB_COMPOSITES(asset, x, y, z, heading, groundSetting, (Any*)p6, p7);
		return retval;
	}

	static void LUA_NATIVE_TASK_DELETE_PATCH_OBJECTS_FROM_HERB_COMPOSITES_(int compositeId, bool p1)
	{
		TASK::_DELETE_PATCH_OBJECTS_FROM_HERB_COMPOSITES(compositeId, p1);
	}

	static int LUA_NATIVE_TASK_GET_HERB_COMPOSITE_NUM_ENTITIES_(int compositeId, uintptr_t outEntities)
	{
		auto retval = TASK::_GET_HERB_COMPOSITE_NUM_ENTITIES(compositeId, (Any*)outEntities);
		return retval;
	}

	static Any LUA_NATIVE_TASK_0xDF56A2B50C04DEA4_(Any p0, Any p1)
	{
		auto retval = TASK::_0xDF56A2B50C04DEA4(p0, p1);
		return retval;
	}

	static void LUA_NATIVE_TASK_TASK_LOOT_ENTITY(Ped ped, Entity entity)
	{
		TASK::TASK_LOOT_ENTITY(ped, entity);
	}

	static void LUA_NATIVE_TASK_TASK_BREAK_VEHICLE_DOOR_LOCK(Ped ped, Vehicle vehicle)
	{
		TASK::TASK_BREAK_VEHICLE_DOOR_LOCK(ped, vehicle);
	}

	static void LUA_NATIVE_TASK_TASK_LOOT_NEAREST_ENTITY(Ped ped, float x, float y, float z, int p4, float p5)
	{
		TASK::TASK_LOOT_NEAREST_ENTITY(ped, x, y, z, p4, p5);
	}

	static void LUA_NATIVE_TASK_TASK_LASSO_PED(Ped ped, Ped targetPed)
	{
		TASK::TASK_LASSO_PED(ped, targetPed);
	}

	static void LUA_NATIVE_TASK_TASK_HOGTIEABLE(Ped ped)
	{
		TASK::TASK_HOGTIEABLE(ped);
	}

	static void LUA_NATIVE_TASK_UNHOGTIE_PED(Ped ped, int flags, Hash getupSetHash, sol::stack_object p3, sol::stack_object p4, float p5)
	{
		TASK::UNHOGTIE_PED(ped, flags, getupSetHash, p3.is<const char*>() ? p3.as<const char*>() : nullptr, p4.is<const char*>() ? p4.as<const char*>() : nullptr, p5);
	}

	static void LUA_NATIVE_TASK_0x722D6A49200174FE_(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		TASK::_0x722D6A49200174FE(p0, p1, p2, p3, p4);
	}

	static void LUA_NATIVE_TASK_MAKE_OBJECT_CARRIABLE_(Object object)
	{
		TASK::_MAKE_OBJECT_CARRIABLE(object);
	}

	static void LUA_NATIVE_TASK_MAKE_OBJECT_NOT_CARRIABLE(Object object)
	{
		TASK::MAKE_OBJECT_NOT_CARRIABLE(object);
	}

	static void LUA_NATIVE_TASK_0x8E1DDE26D270CC5E_(Any p0, Any p1)
	{
		TASK::_0x8E1DDE26D270CC5E(p0, p1);
	}

	static void LUA_NATIVE_TASK_0xA6A76D666A281F2D_(Any p0, Hash item)
	{
		TASK::_0xA6A76D666A281F2D(p0, item);
	}

	static void LUA_NATIVE_TASK_0xA21AA2F0C2180125_(Any p0, Any p1)
	{
		TASK::_0xA21AA2F0C2180125(p0, p1);
	}

	static Hash LUA_NATIVE_TASK_FIND_MODEL_FOR_ITEM_(Hash item)
	{
		auto retval = TASK::_FIND_MODEL_FOR_ITEM(item);
		return retval;
	}

	static void LUA_NATIVE_TASK_0xFF745B0346E19E2C_(Any p0)
	{
		TASK::_0xFF745B0346E19E2C(p0);
	}

	static Any LUA_NATIVE_TASK_0xB8F52A3F84A7CC59_(Any p0)
	{
		auto retval = TASK::_0xB8F52A3F84A7CC59(p0);
		return retval;
	}

	static void LUA_NATIVE_TASK_0x6AFDA2264925BD11_(Any p0)
	{
		TASK::_0x6AFDA2264925BD11(p0);
	}

	static void LUA_NATIVE_TASK_0x816A3ACD265E2297_(Any p0, Any p1)
	{
		TASK::_0x816A3ACD265E2297(p0, p1);
	}

	static void LUA_NATIVE_TASK_0x4E806A395D43A458_(Any p0)
	{
		TASK::_0x4E806A395D43A458(p0);
	}

	static void LUA_NATIVE_TASK_SET_TEAM_CARRIABLE_ENTITY(Any p0, Any p1, Any p2)
	{
		TASK::SET_TEAM_CARRIABLE_ENTITY(p0, p1, p2);
	}

	static bool LUA_NATIVE_TASK_IS_TEAM_CARRIABLE_ENTITY(Any p0, Any p1)
	{
		auto retval = (bool)TASK::IS_TEAM_CARRIABLE_ENTITY(p0, p1);
		return retval;
	}

	static bool LUA_NATIVE_TASK_IS_HAT_BEING_PICKED_UP_(Object hatObject)
	{
		auto retval = (bool)TASK::_IS_HAT_BEING_PICKED_UP(hatObject);
		return retval;
	}

	static void LUA_NATIVE_TASK_0x9ADDBB9242179D56_(Object object, Ped ped)
	{
		TASK::_0x9ADDBB9242179D56(object, ped);
	}

	static bool LUA_NATIVE_TASK_IS_HAT_BEING_PICKED_UP_2_(Object hatObject)
	{
		auto retval = (bool)TASK::_IS_HAT_BEING_PICKED_UP_2(hatObject);
		return retval;
	}

	static void LUA_NATIVE_TASK_TASK_EQUIP_HAT_(Object hatObject, Ped ped)
	{
		TASK::_TASK_EQUIP_HAT(hatObject, ped);
	}

	static Any LUA_NATIVE_TASK_0x7CB99FADDE73CD1B_(Any p0)
	{
		auto retval = TASK::_0x7CB99FADDE73CD1B(p0);
		return retval;
	}

	static void LUA_NATIVE_TASK_0xF3C3503276F4A034_(Entity entity, Any p1)
	{
		TASK::_0xF3C3503276F4A034(entity, p1);
	}

	static Any LUA_NATIVE_TASK_0x6DAC799857EF3F11_(Any p0, Any p1)
	{
		auto retval = TASK::_0x6DAC799857EF3F11(p0, p1);
		return retval;
	}

	static Any LUA_NATIVE_TASK_0x920684BE432875B1_(Any p0)
	{
		auto retval = TASK::_0x920684BE432875B1(p0);
		return retval;
	}

	static bool LUA_NATIVE_TASK_SET_ENHANCED_BREAK_FREE(Ped ped, bool p1, sol::stack_object clipset)
	{
		auto retval = (bool)TASK::SET_ENHANCED_BREAK_FREE(ped, p1, clipset.is<const char*>() ? clipset.as<const char*>() : nullptr);
		return retval;
	}

	static Any LUA_NATIVE_TASK_0x6AFD84AEAA3EA538_(Any p0)
	{
		auto retval = TASK::_0x6AFD84AEAA3EA538(p0);
		return retval;
	}

	static void LUA_NATIVE_TASK_0xBD1C3C0F271C39D3_(Any p0, Any p1)
	{
		TASK::_0xBD1C3C0F271C39D3(p0, p1);
	}

	static void LUA_NATIVE_TASK_0x1ECF56C040FD839C_(Any p0, Any p1)
	{
		TASK::_0x1ECF56C040FD839C(p0, p1);
	}

	static void LUA_NATIVE_TASK_0xF40A109B4B79A848_(Any p0, Any p1, Any p2)
	{
		TASK::_0xF40A109B4B79A848(p0, p1, p2);
	}

	static bool LUA_NATIVE_TASK_IS_PED_LEADING_HORSE_(Ped ped)
	{
		auto retval = (bool)TASK::_IS_PED_LEADING_HORSE(ped);
		return retval;
	}

	static Any LUA_NATIVE_TASK_0xAC5045AB7F1A34FD_(Any p0)
	{
		auto retval = TASK::_0xAC5045AB7F1A34FD(p0);
		return retval;
	}

	static Ped LUA_NATIVE_TASK_GET_LED_HORSE_FROM_PED_(Ped ped)
	{
		auto retval = TASK::_GET_LED_HORSE_FROM_PED(ped);
		return retval;
	}

	static void LUA_NATIVE_TASK_TASK_TURN_TO_FACE_CLOSEST_PED(Ped ped, float p1, float p2, int p3)
	{
		TASK::TASK_TURN_TO_FACE_CLOSEST_PED(ped, p1, p2, p3);
	}

	static bool LUA_NATIVE_TASK_TASK_CONFRONT(Ped ped, Ped targetPed, int p2)
	{
		auto retval = (bool)TASK::TASK_CONFRONT(ped, targetPed, p2);
		return retval;
	}

	static bool LUA_NATIVE_TASK_TASK_POLICE(Ped ped, bool p1)
	{
		auto retval = (bool)TASK::TASK_POLICE(ped, p1);
		return retval;
	}

	static bool LUA_NATIVE_TASK_TASK_MELEE(Ped ped, Ped targetPed, Hash p2, Any p3, Any p4, float p5, Any p6, float p7)
	{
		auto retval = (bool)TASK::TASK_MELEE(ped, targetPed, p2, p3, p4, p5, p6, p7);
		return retval;
	}

	static bool LUA_NATIVE_TASK_TASK_GRAPPLE(Ped ped, Ped targetPed, Hash grappleStyle, int p3, float p4, int p5, int p6)
	{
		auto retval = (bool)TASK::TASK_GRAPPLE(ped, targetPed, grappleStyle, p3, p4, p5, p6);
		return retval;
	}

	static bool LUA_NATIVE_TASK_TASK_INTIMIDATED_(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		auto retval = (bool)TASK::_TASK_INTIMIDATED(p0, p1, p2, p3, p4);
		return retval;
	}

	static bool LUA_NATIVE_TASK_TASK_INTIMIDATED_2_(Ped victim, Ped attacker, int p2, bool p3, bool p4, bool everyFrame, bool p6, bool p7, int flag)
	{
		auto retval = (bool)TASK::_TASK_INTIMIDATED_2(victim, attacker, p2, p3, p4, everyFrame, p6, p7, flag);
		return retval;
	}

	static void LUA_NATIVE_TASK_0x2948235DB2058E99_(Any p0, Any p1)
	{
		TASK::_0x2948235DB2058E99(p0, p1);
	}

	static void LUA_NATIVE_TASK_0xB2F47A1AFDFCC595_(Any p0, Any p1)
	{
		TASK::_0xB2F47A1AFDFCC595(p0, p1);
	}

	static void LUA_NATIVE_TASK_0x41D1331AFAD5A091_(Ped ped, int p1, Any p2)
	{
		TASK::_0x41D1331AFAD5A091(ped, p1, p2);
	}

	static void LUA_NATIVE_TASK_0x801BD27403F3CBA0_(Any p0, Any p1, Any p2, Any p3)
	{
		TASK::_0x801BD27403F3CBA0(p0, p1, p2, p3);
	}

	static void LUA_NATIVE_TASK_0x0FE797DD9F70DFA6_(Any p0, Any p1, Any p2, Any p3)
	{
		TASK::_0x0FE797DD9F70DFA6(p0, p1, p2, p3);
	}

	static void LUA_NATIVE_TASK_TASK_PERSISTENT_CHARACTER(Ped ped)
	{
		TASK::TASK_PERSISTENT_CHARACTER(ped);
	}

	static void LUA_NATIVE_TASK_0xFC7F71CF49F70B6B_(Any p0)
	{
		TASK::_0xFC7F71CF49F70B6B(p0);
	}

	static void LUA_NATIVE_TASK_0xE01F55B2896F6B37_(Any p0, Any p1)
	{
		TASK::_0xE01F55B2896F6B37(p0, p1);
	}

	static Any LUA_NATIVE_TASK_0xE62754D09354F6CF_(Any p0)
	{
		auto retval = TASK::_0xE62754D09354F6CF(p0);
		return retval;
	}

	static void LUA_NATIVE_TASK_0x4BA972D0E5AD8122_(Any p0, Any p1)
	{
		TASK::_0x4BA972D0E5AD8122(p0, p1);
	}

	static bool LUA_NATIVE_TASK_GET_TASK_FISHING_(Ped ped, uintptr_t p1)
	{
		auto retval = (bool)TASK::_GET_TASK_FISHING(ped, (Any*)p1);
		return retval;
	}

	static bool LUA_NATIVE_TASK_SET_TASK_FISHING_(Ped ped, uintptr_t p1)
	{
		auto retval = (bool)TASK::_SET_TASK_FISHING(ped, (Any*)p1);
		return retval;
	}

	static void LUA_NATIVE_TASK_TASK_SWAP_FISHING_BAIT(Ped ped, sol::stack_object bait, bool withoutBuoy)
	{
		TASK::TASK_SWAP_FISHING_BAIT(ped, bait.is<const char*>() ? bait.as<const char*>() : nullptr, withoutBuoy);
	}

	static void LUA_NATIVE_TASK_SET_FISHING_BAIT_(Ped ped, sol::stack_object bait, bool withoutBuoy, bool instantly)
	{
		TASK::_SET_FISHING_BAIT(ped, bait.is<const char*>() ? bait.as<const char*>() : nullptr, withoutBuoy, instantly);
	}

	static void LUA_NATIVE_TASK_0x1F298C7BD30D1240_(Ped ped)
	{
		TASK::_0x1F298C7BD30D1240(ped);
	}

	static void LUA_NATIVE_TASK_PED_FISHINGROD_HOOK_ENTITY_(Ped ped, Entity entity)
	{
		TASK::_PED_FISHINGROD_HOOK_ENTITY(ped, entity);
	}

	static void LUA_NATIVE_TASK_PED_FISHINGROD_HOOK_OBJECT_(Ped ped, Object object)
	{
		TASK::_PED_FISHINGROD_HOOK_OBJECT(ped, object);
	}

	static bool LUA_NATIVE_TASK_0xB520DBDA7FCF573F_(Ped ped)
	{
		auto retval = (bool)TASK::_0xB520DBDA7FCF573F(ped);
		return retval;
	}

	static void LUA_NATIVE_TASK_0x31BB338F64D5C861_(Ped ped, bool p1)
	{
		TASK::_0x31BB338F64D5C861(ped, p1);
	}

	static void LUA_NATIVE_TASK_0x517D01BF27B682D1_(Ped ped, Entity entity, float p2, float p3, float p4, float p5, int p6)
	{
		TASK::_0x517D01BF27B682D1(ped, entity, p2, p3, p4, p5, p6);
	}

	static void LUA_NATIVE_TASK_0x88FD60D846D9CD63_(Ped ped)
	{
		TASK::_0x88FD60D846D9CD63(ped);
	}

	static void LUA_NATIVE_TASK_0x9050DF2C53801208_(Ped ped, float p1)
	{
		TASK::_0x9050DF2C53801208(ped, p1);
	}

	static void LUA_NATIVE_TASK_0x22CDBF317C40A122_(Ped ped)
	{
		TASK::_0x22CDBF317C40A122(ped);
	}

	static Any LUA_NATIVE_TASK_0x5952DFA38FA529FE_()
	{
		auto retval = TASK::_0x5952DFA38FA529FE();
		return retval;
	}

	static void LUA_NATIVE_TASK_TASK_PLAY_EMOTE_WITH_HASH(Ped ped, int emoteType, int playbackMode, Hash emote, bool isSecondaryTask, bool canBreakOut, bool disableEarlyOutAnimTag, bool ignoreInvalidMainTask, bool destroyProps)
	{
		TASK::TASK_PLAY_EMOTE_WITH_HASH(ped, emoteType, playbackMode, emote, isSecondaryTask, canBreakOut, disableEarlyOutAnimTag, ignoreInvalidMainTask, destroyProps);
	}

	static void LUA_NATIVE_TASK_TASK_PLAY_EMOTE_(Ped ped, int emoteType, int playbackMode, Hash emote, bool isSecondaryTask, bool canBreakOut, bool disableEarlyOutAnimTag, bool ignoreInvalidMainTask, bool destroyProps)
	{
		TASK::_TASK_PLAY_EMOTE(ped, emoteType, playbackMode, emote, isSecondaryTask, canBreakOut, disableEarlyOutAnimTag, ignoreInvalidMainTask, destroyProps);
	}

	static void LUA_NATIVE_TASK_0x6A1AF481407BF6E9_(Any p0)
	{
		TASK::_0x6A1AF481407BF6E9(p0);
	}

	static void LUA_NATIVE_TASK_TASK_EMOTE_OUTRO_(Ped ped)
	{
		TASK::_TASK_EMOTE_OUTRO(ped);
	}

	static void LUA_NATIVE_TASK_0xEC516FE805D2CB2D_(Any p0)
	{
		TASK::_0xEC516FE805D2CB2D(p0);
	}

	static void LUA_NATIVE_TASK_0x59AEA4DC640814B9_(Any p0, Any p1)
	{
		TASK::_0x59AEA4DC640814B9(p0, p1);
	}

	static Any LUA_NATIVE_TASK_0x11C7CE1AE38911B5_(Any p0)
	{
		auto retval = TASK::_0x11C7CE1AE38911B5(p0);
		return retval;
	}

	static Any LUA_NATIVE_TASK_0xD0ABC4EA3B5E21A0_(Any p0, Any p1)
	{
		auto retval = TASK::_0xD0ABC4EA3B5E21A0(p0, p1);
		return retval;
	}

	static bool LUA_NATIVE_TASK_IS_EMOTE_TASK_RUNNING(Ped ped, Any p1)
	{
		auto retval = (bool)TASK::IS_EMOTE_TASK_RUNNING(ped, p1);
		return retval;
	}

	void init_native_binding_TASK(sol::state& L)
	{
		auto TASK = L["TASK"].get_or_create<sol::table>();
		TASK.set_function("TASK_PAUSE", LUA_NATIVE_TASK_TASK_PAUSE);
		TASK.set_function("TASK_STAND_STILL", LUA_NATIVE_TASK_TASK_STAND_STILL);
		TASK.set_function("TASK_JUMP", LUA_NATIVE_TASK_TASK_JUMP);
		TASK.set_function("TASK_JUMP_2_", LUA_NATIVE_TASK_TASK_JUMP_2_);
		TASK.set_function("TASK_COWER", LUA_NATIVE_TASK_TASK_COWER);
		TASK.set_function("TASK_HANDS_UP", LUA_NATIVE_TASK_TASK_HANDS_UP);
		TASK.set_function("TASK_KNOCKED_OUT", LUA_NATIVE_TASK_TASK_KNOCKED_OUT);
		TASK.set_function("TASK_KNOCKED_OUT_AND_HOGTIED", LUA_NATIVE_TASK_TASK_KNOCKED_OUT_AND_HOGTIED);
		TASK.set_function("0xFFB520A3E16F7B7B_", LUA_NATIVE_TASK_0xFFB520A3E16F7B7B_);
		TASK.set_function("0x8B1FDF63C3193EDA_", LUA_NATIVE_TASK_0x8B1FDF63C3193EDA_);
		TASK.set_function("UPDATE_TASK_HANDS_UP_DURATION", LUA_NATIVE_TASK_UPDATE_TASK_HANDS_UP_DURATION);
		TASK.set_function("0x28EF780BDEA8A639_", LUA_NATIVE_TASK_0x28EF780BDEA8A639_);
		TASK.set_function("TASK_DUCK", LUA_NATIVE_TASK_TASK_DUCK);
		TASK.set_function("TASK_BOARD_VEHICLE_", LUA_NATIVE_TASK_TASK_BOARD_VEHICLE_);
		TASK.set_function("TASK_DISEMBARK_VEHICLE_", LUA_NATIVE_TASK_TASK_DISEMBARK_VEHICLE_);
		TASK.set_function("TASK_BOARD_VEHICLE_2_", LUA_NATIVE_TASK_TASK_BOARD_VEHICLE_2_);
		TASK.set_function("TASK_DISEMBARK_NEAREST_TRAIN_CARRIAGE", LUA_NATIVE_TASK_TASK_DISEMBARK_NEAREST_TRAIN_CARRIAGE);
		TASK.set_function("TASK_ENTER_VEHICLE", LUA_NATIVE_TASK_TASK_ENTER_VEHICLE);
		TASK.set_function("TASK_LEAVE_VEHICLE", LUA_NATIVE_TASK_TASK_LEAVE_VEHICLE);
		TASK.set_function("TASK_MOUNT_ANIMAL", LUA_NATIVE_TASK_TASK_MOUNT_ANIMAL);
		TASK.set_function("TASK_DISMOUNT_ANIMAL", LUA_NATIVE_TASK_TASK_DISMOUNT_ANIMAL);
		TASK.set_function("TASK_HITCH_ANIMAL", LUA_NATIVE_TASK_TASK_HITCH_ANIMAL);
		TASK.set_function("0xE05A5D39BE6E93AF_", LUA_NATIVE_TASK_0xE05A5D39BE6E93AF_);
		TASK.set_function("TASK_VEHICLE_DRIVE_TO_COORD", LUA_NATIVE_TASK_TASK_VEHICLE_DRIVE_TO_COORD);
		TASK.set_function("TASK_VEHICLE_DRIVE_TO_COORD_2_", LUA_NATIVE_TASK_TASK_VEHICLE_DRIVE_TO_COORD_2_);
		TASK.set_function("TASK_VEHICLE_DRIVE_WANDER", LUA_NATIVE_TASK_TASK_VEHICLE_DRIVE_WANDER);
		TASK.set_function("TASK_FOLLOW_TO_OFFSET_OF_ENTITY", LUA_NATIVE_TASK_TASK_FOLLOW_TO_OFFSET_OF_ENTITY);
		TASK.set_function("TASK_FOLLOW_TO_OFFSET_OF_COORD", LUA_NATIVE_TASK_TASK_FOLLOW_TO_OFFSET_OF_COORD);
		TASK.set_function("0x3FFCD7BBA074CC80_", LUA_NATIVE_TASK_0x3FFCD7BBA074CC80_);
		TASK.set_function("TASK_GO_STRAIGHT_TO_COORD", LUA_NATIVE_TASK_TASK_GO_STRAIGHT_TO_COORD);
		TASK.set_function("TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_ENTITY", LUA_NATIVE_TASK_TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_ENTITY);
		TASK.set_function("TASK_MOVE_IN_TRAFFIC", LUA_NATIVE_TASK_TASK_MOVE_IN_TRAFFIC);
		TASK.set_function("TASK_MOVE_IN_TRAFFIC_TO_DESTINATION", LUA_NATIVE_TASK_TASK_MOVE_IN_TRAFFIC_TO_DESTINATION);
		TASK.set_function("TASK_MOVE_IN_TRAFFIC_AWAY_FROM_ENTITY", LUA_NATIVE_TASK_TASK_MOVE_IN_TRAFFIC_AWAY_FROM_ENTITY);
		TASK.set_function("0xBAAB791AA72C2821_", LUA_NATIVE_TASK_0xBAAB791AA72C2821_);
		TASK.set_function("TASK_MOVE_FOLLOW_ROAD_USING_NAVMESH", LUA_NATIVE_TASK_TASK_MOVE_FOLLOW_ROAD_USING_NAVMESH);
		TASK.set_function("TASK_ACHIEVE_HEADING", LUA_NATIVE_TASK_TASK_ACHIEVE_HEADING);
		TASK.set_function("TASK_FLUSH_ROUTE", LUA_NATIVE_TASK_TASK_FLUSH_ROUTE);
		TASK.set_function("TASK_EXTEND_ROUTE", LUA_NATIVE_TASK_TASK_EXTEND_ROUTE);
		TASK.set_function("TASK_FOLLOW_POINT_ROUTE", LUA_NATIVE_TASK_TASK_FOLLOW_POINT_ROUTE);
		TASK.set_function("TASK_ENTER_ANIM_SCENE", LUA_NATIVE_TASK_TASK_ENTER_ANIM_SCENE);
		TASK.set_function("TASK_MOVE_BE_IN_FORMATION", LUA_NATIVE_TASK_TASK_MOVE_BE_IN_FORMATION);
		TASK.set_function("TASK_GO_TO_ENTITY", LUA_NATIVE_TASK_TASK_GO_TO_ENTITY);
		TASK.set_function("TASK_FOLLOW_AND_CONVERSE_WITH_PED", LUA_NATIVE_TASK_TASK_FOLLOW_AND_CONVERSE_WITH_PED);
		TASK.set_function("0xA052608A12559BBB_", LUA_NATIVE_TASK_0xA052608A12559BBB_);
		TASK.set_function("TASK_WANDER_AND_CONVERSE_WITH_PED", LUA_NATIVE_TASK_TASK_WANDER_AND_CONVERSE_WITH_PED);
		TASK.set_function("TASK_LEAD_AND_CONVERSE", LUA_NATIVE_TASK_TASK_LEAD_AND_CONVERSE);
		TASK.set_function("0xDE0C8B145EA466FF_", LUA_NATIVE_TASK_0xDE0C8B145EA466FF_);
		TASK.set_function("TASK_SEEK_CLEAR_LOS_TO_ENTITY", LUA_NATIVE_TASK_TASK_SEEK_CLEAR_LOS_TO_ENTITY);
		TASK.set_function("TASK_GO_TO_WHISTLE", LUA_NATIVE_TASK_TASK_GO_TO_WHISTLE);
		TASK.set_function("0xEB67D4E056C85A81_", LUA_NATIVE_TASK_0xEB67D4E056C85A81_);
		TASK.set_function("0x78D8C1D4EB80C588_", LUA_NATIVE_TASK_0x78D8C1D4EB80C588_);
		TASK.set_function("TASK_LEAD_HORSE", LUA_NATIVE_TASK_TASK_LEAD_HORSE);
		TASK.set_function("TASK_STOP_LEADING_HORSE", LUA_NATIVE_TASK_TASK_STOP_LEADING_HORSE);
		TASK.set_function("TASK_FLEE_FROM_COORD_", LUA_NATIVE_TASK_TASK_FLEE_FROM_COORD_);
		TASK.set_function("TASK_FLEE_FROM_PED_", LUA_NATIVE_TASK_TASK_FLEE_FROM_PED_);
		TASK.set_function("TASK_SMART_FLEE_COORD", LUA_NATIVE_TASK_TASK_SMART_FLEE_COORD);
		TASK.set_function("TASK_SMART_FLEE_PED", LUA_NATIVE_TASK_TASK_SMART_FLEE_PED);
		TASK.set_function("0x673A8779D229BA5A_", LUA_NATIVE_TASK_0x673A8779D229BA5A_);
		TASK.set_function("0x2E1D6D87346BB7D2_", LUA_NATIVE_TASK_0x2E1D6D87346BB7D2_);
		TASK.set_function("TASK_FLEE_COORD", LUA_NATIVE_TASK_TASK_FLEE_COORD);
		TASK.set_function("TASK_FLEE_PED", LUA_NATIVE_TASK_TASK_FLEE_PED);
		TASK.set_function("TASK_FLEE_COORD_VIA", LUA_NATIVE_TASK_TASK_FLEE_COORD_VIA);
		TASK.set_function("TASK_FLEE_PED_VIA", LUA_NATIVE_TASK_TASK_FLEE_PED_VIA);
		TASK.set_function("ADD_FLEE_TARGET_COORDS_", LUA_NATIVE_TASK_ADD_FLEE_TARGET_COORDS_);
		TASK.set_function("ADD_FLEE_TARGET_PED", LUA_NATIVE_TASK_ADD_FLEE_TARGET_PED);
		TASK.set_function("0xA42DC7919159CCCF_", LUA_NATIVE_TASK_0xA42DC7919159CCCF_);
		TASK.set_function("TASK_FLY_AWAY", LUA_NATIVE_TASK_TASK_FLY_AWAY);
		TASK.set_function("TASK_FLY_TO_COORD", LUA_NATIVE_TASK_TASK_FLY_TO_COORD);
		TASK.set_function("TASK_FLYING_CIRCLE", LUA_NATIVE_TASK_TASK_FLYING_CIRCLE);
		TASK.set_function("TASK_WALK_AWAY", LUA_NATIVE_TASK_TASK_WALK_AWAY);
		TASK.set_function("TASK_SHOCKING_EVENT_REACT", LUA_NATIVE_TASK_TASK_SHOCKING_EVENT_REACT);
		TASK.set_function("TASK_REACT", LUA_NATIVE_TASK_TASK_REACT);
		TASK.set_function("TASK_WANDER_IN_AREA", LUA_NATIVE_TASK_TASK_WANDER_IN_AREA);
		TASK.set_function("TASK_WANDER_IN_VOLUME", LUA_NATIVE_TASK_TASK_WANDER_IN_VOLUME);
		TASK.set_function("TASK_WANDER_STANDARD", LUA_NATIVE_TASK_TASK_WANDER_STANDARD);
		TASK.set_function("TASK_WANDER_SWIM", LUA_NATIVE_TASK_TASK_WANDER_SWIM);
		TASK.set_function("TASK_PLANT_BOMB", LUA_NATIVE_TASK_TASK_PLANT_BOMB);
		TASK.set_function("TASK_HORSE_ACTION", LUA_NATIVE_TASK_TASK_HORSE_ACTION);
		TASK.set_function("TASK_ANIMAL_INTERACTION", LUA_NATIVE_TASK_TASK_ANIMAL_INTERACTION);
		TASK.set_function("TASK_COMBAT_ANIMAL_WARN", LUA_NATIVE_TASK_TASK_COMBAT_ANIMAL_WARN);
		TASK.set_function("TASK_COMBAT_ANIMAL_CHARGE_PED", LUA_NATIVE_TASK_TASK_COMBAT_ANIMAL_CHARGE_PED);
		TASK.set_function("0x76610D12A838EBDE_", LUA_NATIVE_TASK_0x76610D12A838EBDE_);
		TASK.set_function("TASK_AMBIENT_ANIMAL_STALK", LUA_NATIVE_TASK_TASK_AMBIENT_ANIMAL_STALK);
		TASK.set_function("TASK_AMBIENT_ANIMAL_HUNT", LUA_NATIVE_TASK_TASK_AMBIENT_ANIMAL_HUNT);
		TASK.set_function("TASK_ANIMAL_UNALERTED", LUA_NATIVE_TASK_TASK_ANIMAL_UNALERTED);
		TASK.set_function("TASK_ANIMAL_ALERTED", LUA_NATIVE_TASK_TASK_ANIMAL_ALERTED);
		TASK.set_function("TASK_ANIMAL_FLEE", LUA_NATIVE_TASK_TASK_ANIMAL_FLEE);
		TASK.set_function("0x244430C13BA5258E_", LUA_NATIVE_TASK_0x244430C13BA5258E_);
		TASK.set_function("TASK_EAT", LUA_NATIVE_TASK_TASK_EAT);
		TASK.set_function("TASK_BARK", LUA_NATIVE_TASK_TASK_BARK);
		TASK.set_function("TASK_FOLLOW_PAVEMENT_TO_COORD", LUA_NATIVE_TASK_TASK_FOLLOW_PAVEMENT_TO_COORD);
		TASK.set_function("TASK_FOLLOW_NAV_MESH_TO_COORD", LUA_NATIVE_TASK_TASK_FOLLOW_NAV_MESH_TO_COORD);
		TASK.set_function("TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED", LUA_NATIVE_TASK_TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED);
		TASK.set_function("SET_PED_PATH_CAN_USE_CLIMBOVERS", LUA_NATIVE_TASK_SET_PED_PATH_CAN_USE_CLIMBOVERS);
		TASK.set_function("SET_PED_PATH_CAN_USE_LADDERS", LUA_NATIVE_TASK_SET_PED_PATH_CAN_USE_LADDERS);
		TASK.set_function("SET_PED_PATH_CAN_DROP_FROM_HEIGHT", LUA_NATIVE_TASK_SET_PED_PATH_CAN_DROP_FROM_HEIGHT);
		TASK.set_function("0xE6A151364C600B24_", LUA_NATIVE_TASK_0xE6A151364C600B24_);
		TASK.set_function("0x1632EB9386CDBE64_", LUA_NATIVE_TASK_0x1632EB9386CDBE64_);
		TASK.set_function("SET_PED_PATH_CLIMB_COST_MODIFIER", LUA_NATIVE_TASK_SET_PED_PATH_CLIMB_COST_MODIFIER);
		TASK.set_function("SET_PED_PATH_DEEP_SNOW_COST_MODIFIER", LUA_NATIVE_TASK_SET_PED_PATH_DEEP_SNOW_COST_MODIFIER);
		TASK.set_function("SET_PED_PATH_FOLIAGE_COST_MODIFIER", LUA_NATIVE_TASK_SET_PED_PATH_FOLIAGE_COST_MODIFIER);
		TASK.set_function("0x8798CF6815B8FE0F_", LUA_NATIVE_TASK_0x8798CF6815B8FE0F_);
		TASK.set_function("0x5B68D0007D9C92EB_", LUA_NATIVE_TASK_0x5B68D0007D9C92EB_);
		TASK.set_function("0x82ED59F095056550_", LUA_NATIVE_TASK_0x82ED59F095056550_);
		TASK.set_function("0xE01C8DC8EDD28D31_", LUA_NATIVE_TASK_0xE01C8DC8EDD28D31_);
		TASK.set_function("0x098CAA6DBE7D8D82_", LUA_NATIVE_TASK_0x098CAA6DBE7D8D82_);
		TASK.set_function("GET_PED_IS_IGNORING_DEAD_BODIES_", LUA_NATIVE_TASK_GET_PED_IS_IGNORING_DEAD_BODIES_);
		TASK.set_function("SET_PED_IGNORE_DEAD_BODIES_", LUA_NATIVE_TASK_SET_PED_IGNORE_DEAD_BODIES_);
		TASK.set_function("SET_PED_PATH_LADDER_COST_MODIFIER_", LUA_NATIVE_TASK_SET_PED_PATH_LADDER_COST_MODIFIER_);
		TASK.set_function("SET_PED_PATH_MAY_ENTER_WATER", LUA_NATIVE_TASK_SET_PED_PATH_MAY_ENTER_WATER);
		TASK.set_function("SET_PED_PATH_MAY_ENTER_DEEP_WATER_", LUA_NATIVE_TASK_SET_PED_PATH_MAY_ENTER_DEEP_WATER_);
		TASK.set_function("0xC6170856E54557B2_", LUA_NATIVE_TASK_0xC6170856E54557B2_);
		TASK.set_function("0xF948F4356F010F11_", LUA_NATIVE_TASK_0xF948F4356F010F11_);
		TASK.set_function("SET_PED_PATH_PREFER_TO_AVOID_WATER", LUA_NATIVE_TASK_SET_PED_PATH_PREFER_TO_AVOID_WATER);
		TASK.set_function("0x8BB283A7888AD1AD_", LUA_NATIVE_TASK_0x8BB283A7888AD1AD_);
		TASK.set_function("0x12990818C1D35886_", LUA_NATIVE_TASK_0x12990818C1D35886_);
		TASK.set_function("0x7C015D8BCEC72CF4_", LUA_NATIVE_TASK_0x7C015D8BCEC72CF4_);
		TASK.set_function("SET_PED_PATH_AVOID_FIRE", LUA_NATIVE_TASK_SET_PED_PATH_AVOID_FIRE);
		TASK.set_function("0x42CFD8FD8CC8DC69_", LUA_NATIVE_TASK_0x42CFD8FD8CC8DC69_);
		TASK.set_function("0x216343750545A486_", LUA_NATIVE_TASK_0x216343750545A486_);
		TASK.set_function("0x06ECF3925BC2ABAE_", LUA_NATIVE_TASK_0x06ECF3925BC2ABAE_);
		TASK.set_function("0xFA30E2254461ADEB_", LUA_NATIVE_TASK_0xFA30E2254461ADEB_);
		TASK.set_function("TASK_GO_TO_COORD_ANY_MEANS", LUA_NATIVE_TASK_TASK_GO_TO_COORD_ANY_MEANS);
		TASK.set_function("TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS", LUA_NATIVE_TASK_TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS);
		TASK.set_function("TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED", LUA_NATIVE_TASK_TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED);
		TASK.set_function("TASK_PLAY_ANIM", LUA_NATIVE_TASK_TASK_PLAY_ANIM);
		TASK.set_function("TASK_PLAY_ANIM_ADVANCED", LUA_NATIVE_TASK_TASK_PLAY_ANIM_ADVANCED);
		TASK.set_function("TASK_PLAY_UPPER_ANIM_FACING_ENTITY", LUA_NATIVE_TASK_TASK_PLAY_UPPER_ANIM_FACING_ENTITY);
		TASK.set_function("STOP_ANIM_TASK", LUA_NATIVE_TASK_STOP_ANIM_TASK);
		TASK.set_function("TASK_SCRIPTED_ANIMATION", LUA_NATIVE_TASK_TASK_SCRIPTED_ANIMATION);
		TASK.set_function("PLAY_ENTITY_SCRIPTED_ANIM", LUA_NATIVE_TASK_PLAY_ENTITY_SCRIPTED_ANIM);
		TASK.set_function("STOP_ANIM_PLAYBACK", LUA_NATIVE_TASK_STOP_ANIM_PLAYBACK);
		TASK.set_function("SET_ANIM_FILTER", LUA_NATIVE_TASK_SET_ANIM_FILTER);
		TASK.set_function("SET_ANIM_RATE", LUA_NATIVE_TASK_SET_ANIM_RATE);
		TASK.set_function("CAN_START_ITEM_INTERACTION", LUA_NATIVE_TASK_CAN_START_ITEM_INTERACTION);
		TASK.set_function("START_TASK_ITEM_INTERACTION", LUA_NATIVE_TASK_START_TASK_ITEM_INTERACTION);
		TASK.set_function("TASK_ITEM_INTERACTION_2_", LUA_NATIVE_TASK_TASK_ITEM_INTERACTION_2_);
		TASK.set_function("TASK_ITEM_INTERACTION_3_", LUA_NATIVE_TASK_TASK_ITEM_INTERACTION_3_);
		TASK.set_function("0xB35370D5353995CB_", LUA_NATIVE_TASK_0xB35370D5353995CB_);
		TASK.set_function("GET_ITEM_INTERACTION_STATE", LUA_NATIVE_TASK_GET_ITEM_INTERACTION_STATE);
		TASK.set_function("GET_ITEM_INTERACTION_ITEM_ID", LUA_NATIVE_TASK_GET_ITEM_INTERACTION_ITEM_ID);
		TASK.set_function("IS_PED_RUNNING_INSPECTION_TASK", LUA_NATIVE_TASK_IS_PED_RUNNING_INSPECTION_TASK);
		TASK.set_function("IS_PED_RUNNING_TASK_ITEM_INTERACTION", LUA_NATIVE_TASK_IS_PED_RUNNING_TASK_ITEM_INTERACTION);
		TASK.set_function("GET_ITEM_INTERACTION_ENTITY_FROM_PED_", LUA_NATIVE_TASK_GET_ITEM_INTERACTION_ENTITY_FROM_PED_);
		TASK.set_function("GET_ITEM_INTERACTION_PROMPT_PROGRESS", LUA_NATIVE_TASK_GET_ITEM_INTERACTION_PROMPT_PROGRESS);
		TASK.set_function("0x678D3226CF70B9C8_", LUA_NATIVE_TASK_0x678D3226CF70B9C8_);
		TASK.set_function("TASK_EVASIVE_ANIM", LUA_NATIVE_TASK_TASK_EVASIVE_ANIM);
		TASK.set_function("TASK_LOOK_AT_COORD", LUA_NATIVE_TASK_TASK_LOOK_AT_COORD);
		TASK.set_function("TASK_LOOK_AT_ENTITY", LUA_NATIVE_TASK_TASK_LOOK_AT_ENTITY);
		TASK.set_function("TASK_CLEAR_LOOK_AT", LUA_NATIVE_TASK_TASK_CLEAR_LOOK_AT);
		TASK.set_function("0x508F5053E3F6F0C4_", LUA_NATIVE_TASK_0x508F5053E3F6F0C4_);
		TASK.set_function("0x23767D80C7EED7C6_", LUA_NATIVE_TASK_0x23767D80C7EED7C6_);
		TASK.set_function("OPEN_SEQUENCE_TASK", LUA_NATIVE_TASK_OPEN_SEQUENCE_TASK);
		TASK.set_function("CLOSE_SEQUENCE_TASK", LUA_NATIVE_TASK_CLOSE_SEQUENCE_TASK);
		TASK.set_function("TASK_PERFORM_SEQUENCE", LUA_NATIVE_TASK_TASK_PERFORM_SEQUENCE);
		TASK.set_function("TASK_PERFORM_SEQUENCE_2_", LUA_NATIVE_TASK_TASK_PERFORM_SEQUENCE_2_);
		TASK.set_function("CLEAR_SEQUENCE_TASK", LUA_NATIVE_TASK_CLEAR_SEQUENCE_TASK);
		TASK.set_function("SET_SEQUENCE_TO_REPEAT", LUA_NATIVE_TASK_SET_SEQUENCE_TO_REPEAT);
		TASK.set_function("GET_SEQUENCE_PROGRESS", LUA_NATIVE_TASK_GET_SEQUENCE_PROGRESS);
		TASK.set_function("GET_IS_TASK_ACTIVE", LUA_NATIVE_TASK_GET_IS_TASK_ACTIVE);
		TASK.set_function("GET_SCRIPT_TASK_STATUS", LUA_NATIVE_TASK_GET_SCRIPT_TASK_STATUS);
		TASK.set_function("0x9FF5F9B24E870748_", LUA_NATIVE_TASK_0x9FF5F9B24E870748_);
		TASK.set_function("GET_SCRIPT_TASK_ACTION_TIME_", LUA_NATIVE_TASK_GET_SCRIPT_TASK_ACTION_TIME_);
		TASK.set_function("REACT_LOOK_AT", LUA_NATIVE_TASK_REACT_LOOK_AT);
		TASK.set_function("REACT_LOOK_AT_END", LUA_NATIVE_TASK_REACT_LOOK_AT_END);
		TASK.set_function("IS_PED_SCENARIO_REACT_LOOKING", LUA_NATIVE_TASK_IS_PED_SCENARIO_REACT_LOOKING);
		TASK.set_function("GET_ACTIVE_VEHICLE_MISSION_TYPE", LUA_NATIVE_TASK_GET_ACTIVE_VEHICLE_MISSION_TYPE);
		TASK.set_function("TASK_LEAVE_ANY_VEHICLE", LUA_NATIVE_TASK_TASK_LEAVE_ANY_VEHICLE);
		TASK.set_function("0xBD70108D01875299_", LUA_NATIVE_TASK_0xBD70108D01875299_);
		TASK.set_function("TASK_USE_RANDOM_SCENARIO_IN_GROUP", LUA_NATIVE_TASK_TASK_USE_RANDOM_SCENARIO_IN_GROUP);
		TASK.set_function("TASK_AIM_GUN_AT_ENTITY", LUA_NATIVE_TASK_TASK_AIM_GUN_AT_ENTITY);
		TASK.set_function("TASK_TURN_PED_TO_FACE_ENTITY", LUA_NATIVE_TASK_TASK_TURN_PED_TO_FACE_ENTITY);
		TASK.set_function("TASK_AIM_GUN_AT_COORD", LUA_NATIVE_TASK_TASK_AIM_GUN_AT_COORD);
		TASK.set_function("TASK_AIM_AT_COORD", LUA_NATIVE_TASK_TASK_AIM_AT_COORD);
		TASK.set_function("TASK_AIM_AT_ENTITY", LUA_NATIVE_TASK_TASK_AIM_AT_ENTITY);
		TASK.set_function("TASK_SHOOT_AT_COORD", LUA_NATIVE_TASK_TASK_SHOOT_AT_COORD);
		TASK.set_function("TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT", LUA_NATIVE_TASK_TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT);
		TASK.set_function("CLEAR_PED_TASKS", LUA_NATIVE_TASK_CLEAR_PED_TASKS);
		TASK.set_function("0x1A7D63CB1B0BB223_", LUA_NATIVE_TASK_0x1A7D63CB1B0BB223_);
		TASK.set_function("0xB2D15D3551FE4FAE_", LUA_NATIVE_TASK_0xB2D15D3551FE4FAE_);
		TASK.set_function("0xDF94844D474F31E5_", LUA_NATIVE_TASK_0xDF94844D474F31E5_);
		TASK.set_function("0xEBA2081E0A5F4D17_", LUA_NATIVE_TASK_0xEBA2081E0A5F4D17_);
		TASK.set_function("0x141BC64C8D7C5529_", LUA_NATIVE_TASK_0x141BC64C8D7C5529_);
		TASK.set_function("CLEAR_PED_SECONDARY_TASK", LUA_NATIVE_TASK_CLEAR_PED_SECONDARY_TASK);
		TASK.set_function("TASK_EVERYONE_LEAVE_VEHICLE_IN_ORDER", LUA_NATIVE_TASK_TASK_EVERYONE_LEAVE_VEHICLE_IN_ORDER);
		TASK.set_function("TASK_INVESTIGATE", LUA_NATIVE_TASK_TASK_INVESTIGATE);
		TASK.set_function("TASK_GOTO_ENTITY_OFFSET", LUA_NATIVE_TASK_TASK_GOTO_ENTITY_OFFSET);
		TASK.set_function("TASK_GOTO_ENTITY_OFFSET_XY", LUA_NATIVE_TASK_TASK_GOTO_ENTITY_OFFSET_XY);
		TASK.set_function("TASK_GOTO_ENTITY_OFFSET_XYZ", LUA_NATIVE_TASK_TASK_GOTO_ENTITY_OFFSET_XYZ);
		TASK.set_function("TASK_GOTO_ENTITY_OFFSET_XY_AIMING", LUA_NATIVE_TASK_TASK_GOTO_ENTITY_OFFSET_XY_AIMING);
		TASK.set_function("TASK_GOTO_ENTITY_OFFSET_XYZ_AIMING", LUA_NATIVE_TASK_TASK_GOTO_ENTITY_OFFSET_XYZ_AIMING);
		TASK.set_function("TASK_FOLLOW_ENTITY_WHILE_AIMING_AT_ENTITY", LUA_NATIVE_TASK_TASK_FOLLOW_ENTITY_WHILE_AIMING_AT_ENTITY);
		TASK.set_function("TASK_TURN_PED_TO_FACE_COORD", LUA_NATIVE_TASK_TASK_TURN_PED_TO_FACE_COORD);
		TASK.set_function("TASK_VEHICLE_TEMP_ACTION", LUA_NATIVE_TASK_TASK_VEHICLE_TEMP_ACTION);
		TASK.set_function("TASK_VEHICLE_MISSION", LUA_NATIVE_TASK_TASK_VEHICLE_MISSION);
		TASK.set_function("TASK_VEHICLE_DRIVE_TO_DESTINATION", LUA_NATIVE_TASK_TASK_VEHICLE_DRIVE_TO_DESTINATION);
		TASK.set_function("TASK_VEHICLE_DRIVE_TO_DESTINATION_2_", LUA_NATIVE_TASK_TASK_VEHICLE_DRIVE_TO_DESTINATION_2_);
		TASK.set_function("TASK_VEHICLE_FLEE_ON_CLEANUP_", LUA_NATIVE_TASK_TASK_VEHICLE_FLEE_ON_CLEANUP_);
		TASK.set_function("TASK_VEHICLE_DRIVE_STRAIGHT_TO_POINT", LUA_NATIVE_TASK_TASK_VEHICLE_DRIVE_STRAIGHT_TO_POINT);
		TASK.set_function("TASK_VEHICLE_DRIVE_TO_POINT_2_", LUA_NATIVE_TASK_TASK_VEHICLE_DRIVE_TO_POINT_2_);
		TASK.set_function("0x1D125814EBC517EB_", LUA_NATIVE_TASK_0x1D125814EBC517EB_);
		TASK.set_function("0x583AE9AF9CEE0958_", LUA_NATIVE_TASK_0x583AE9AF9CEE0958_);
		TASK.set_function("TASK_VEHICLE_MISSION_PED_TARGET", LUA_NATIVE_TASK_TASK_VEHICLE_MISSION_PED_TARGET);
		TASK.set_function("0xA263ADBBC8056214_", LUA_NATIVE_TASK_0xA263ADBBC8056214_);
		TASK.set_function("TASK_VEHICLE_ESCORT", LUA_NATIVE_TASK_TASK_VEHICLE_ESCORT);
		TASK.set_function("TASK_BOAT_MISSION", LUA_NATIVE_TASK_TASK_BOAT_MISSION);
		TASK.set_function("TASK_WEAPON", LUA_NATIVE_TASK_TASK_WEAPON);
		TASK.set_function("TASK_DRIVE_BY", LUA_NATIVE_TASK_TASK_DRIVE_BY);
		TASK.set_function("SET_DRIVEBY_TASK_TARGET", LUA_NATIVE_TASK_SET_DRIVEBY_TASK_TARGET);
		TASK.set_function("CLEAR_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK", LUA_NATIVE_TASK_CLEAR_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK);
		TASK.set_function("IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK", LUA_NATIVE_TASK_IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK);
		TASK.set_function("GET_IS_PED_AIMING_IN_THE_AIR", LUA_NATIVE_TASK_GET_IS_PED_AIMING_IN_THE_AIR);
		TASK.set_function("SET_PED_CLEAR_AIMING_IN_THE_AIR_", LUA_NATIVE_TASK_SET_PED_CLEAR_AIMING_IN_THE_AIR_);
		TASK.set_function("IS_MOUNTED_WEAPON_TASK_UNDERNEATH_DRIVING_TASK", LUA_NATIVE_TASK_IS_MOUNTED_WEAPON_TASK_UNDERNEATH_DRIVING_TASK);
		TASK.set_function("TASK_WARP_PED_INTO_VEHICLE", LUA_NATIVE_TASK_TASK_WARP_PED_INTO_VEHICLE);
		TASK.set_function("TASK_SHOOT_AT_ENTITY", LUA_NATIVE_TASK_TASK_SHOOT_AT_ENTITY);
		TASK.set_function("TASK_SHOOT_WITH_WEAPON", LUA_NATIVE_TASK_TASK_SHOOT_WITH_WEAPON);
		TASK.set_function("0x2416EC2F31F75266_", LUA_NATIVE_TASK_0x2416EC2F31F75266_);
		TASK.set_function("0x41323F4E0C4AE94B_", LUA_NATIVE_TASK_0x41323F4E0C4AE94B_);
		TASK.set_function("0x5EA655F01D93667A_", LUA_NATIVE_TASK_0x5EA655F01D93667A_);
		TASK.set_function("TASK_CLIMB", LUA_NATIVE_TASK_TASK_CLIMB);
		TASK.set_function("TASK_CLIMB_2_", LUA_NATIVE_TASK_TASK_CLIMB_2_);
		TASK.set_function("TASK_CLIMB_LADDER", LUA_NATIVE_TASK_TASK_CLIMB_LADDER);
		TASK.set_function("CLEAR_PED_TASKS_IMMEDIATELY", LUA_NATIVE_TASK_CLEAR_PED_TASKS_IMMEDIATELY);
		TASK.set_function("TASK_PERFORM_SEQUENCE_FROM_PROGRESS", LUA_NATIVE_TASK_TASK_PERFORM_SEQUENCE_FROM_PROGRESS);
		TASK.set_function("SET_PED_DESIRED_MOVE_BLEND_RATIO", LUA_NATIVE_TASK_SET_PED_DESIRED_MOVE_BLEND_RATIO);
		TASK.set_function("GET_PED_DESIRED_MOVE_BLEND_RATIO", LUA_NATIVE_TASK_GET_PED_DESIRED_MOVE_BLEND_RATIO);
		TASK.set_function("TASK_GOTO_ENTITY_AIMING", LUA_NATIVE_TASK_TASK_GOTO_ENTITY_AIMING);
		TASK.set_function("TASK_SET_SPHERE_DEFENSIVE_AREA", LUA_NATIVE_TASK_TASK_SET_SPHERE_DEFENSIVE_AREA);
		TASK.set_function("TASK_CLEAR_DEFENSIVE_AREA", LUA_NATIVE_TASK_TASK_CLEAR_DEFENSIVE_AREA);
		TASK.set_function("TASK_PED_SLIDE_TO_COORD", LUA_NATIVE_TASK_TASK_PED_SLIDE_TO_COORD);
		TASK.set_function("0x9420FB11B8D77948_", LUA_NATIVE_TASK_0x9420FB11B8D77948_);
		TASK.set_function("0x6BA606AB3A83BC4D_", LUA_NATIVE_TASK_0x6BA606AB3A83BC4D_);
		TASK.set_function("ADD_COVER_POINT", LUA_NATIVE_TASK_ADD_COVER_POINT);
		TASK.set_function("0x59872EA4CBD11C56_", LUA_NATIVE_TASK_0x59872EA4CBD11C56_);
		TASK.set_function("REMOVE_COVER_POINT", LUA_NATIVE_TASK_REMOVE_COVER_POINT);
		TASK.set_function("DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS", LUA_NATIVE_TASK_DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS);
		TASK.set_function("GET_SCRIPTED_COVER_POINT_COORDS", LUA_NATIVE_TASK_GET_SCRIPTED_COVER_POINT_COORDS);
		TASK.set_function("0xE116F6F2DA2D777E_", LUA_NATIVE_TASK_0xE116F6F2DA2D777E_);
		TASK.set_function("0x50AA09A0DA64E73C_", LUA_NATIVE_TASK_0x50AA09A0DA64E73C_);
		TASK.set_function("0xE5831AA1E2FD147C_", LUA_NATIVE_TASK_0xE5831AA1E2FD147C_);
		TASK.set_function("TASK_COMBAT_PED", LUA_NATIVE_TASK_TASK_COMBAT_PED);
		TASK.set_function("TASK_COMBAT_PED_TIMED", LUA_NATIVE_TASK_TASK_COMBAT_PED_TIMED);
		TASK.set_function("TASK_COMBAT_PED_3_", LUA_NATIVE_TASK_TASK_COMBAT_PED_3_);
		TASK.set_function("TASK_SEEK_COVER_FROM_POS", LUA_NATIVE_TASK_TASK_SEEK_COVER_FROM_POS);
		TASK.set_function("TASK_SEEK_COVER_FROM_PED", LUA_NATIVE_TASK_TASK_SEEK_COVER_FROM_PED);
		TASK.set_function("TASK_SEEK_COVER_TO_COVER_POINT", LUA_NATIVE_TASK_TASK_SEEK_COVER_TO_COVER_POINT);
		TASK.set_function("TASK_SEEK_COVER_TO_COORDS", LUA_NATIVE_TASK_TASK_SEEK_COVER_TO_COORDS);
		TASK.set_function("TASK_PUT_PED_DIRECTLY_INTO_COVER", LUA_NATIVE_TASK_TASK_PUT_PED_DIRECTLY_INTO_COVER);
		TASK.set_function("TASK_PUT_PED_DIRECTLY_INTO_COVER_FROM_COORDS_", LUA_NATIVE_TASK_TASK_PUT_PED_DIRECTLY_INTO_COVER_FROM_COORDS_);
		TASK.set_function("TASK_PUT_PED_DIRECTLY_INTO_MELEE", LUA_NATIVE_TASK_TASK_PUT_PED_DIRECTLY_INTO_MELEE);
		TASK.set_function("TASK_PUT_PED_DIRECTLY_INTO_GRAPPLE", LUA_NATIVE_TASK_TASK_PUT_PED_DIRECTLY_INTO_GRAPPLE);
		TASK.set_function("TASK_COMPANION_AMBIENT", LUA_NATIVE_TASK_TASK_COMPANION_AMBIENT);
		TASK.set_function("0x098036CAB8373D36_", LUA_NATIVE_TASK_0x098036CAB8373D36_);
		TASK.set_function("0x10C44F633E2D6D9E_", LUA_NATIVE_TASK_0x10C44F633E2D6D9E_);
		TASK.set_function("0x7FB78B2199C10E92_", LUA_NATIVE_TASK_0x7FB78B2199C10E92_);
		TASK.set_function("TASK_GUARD", LUA_NATIVE_TASK_TASK_GUARD);
		TASK.set_function("TASK_GUARD_CURRENT_POSITION", LUA_NATIVE_TASK_TASK_GUARD_CURRENT_POSITION);
		TASK.set_function("TASK_GUARD_ASSIGNED_DEFENSIVE_AREA_2_", LUA_NATIVE_TASK_TASK_GUARD_ASSIGNED_DEFENSIVE_AREA_2_);
		TASK.set_function("TASK_GUARD_ASSIGNED_DEFENSIVE_AREA", LUA_NATIVE_TASK_TASK_GUARD_ASSIGNED_DEFENSIVE_AREA);
		TASK.set_function("TASK_STAND_GUARD", LUA_NATIVE_TASK_TASK_STAND_GUARD);
		TASK.set_function("SET_DRIVE_TASK_CRUISE_SPEED", LUA_NATIVE_TASK_SET_DRIVE_TASK_CRUISE_SPEED);
		TASK.set_function("SET_DRIVE_TASK_MAX_CRUISE_SPEED", LUA_NATIVE_TASK_SET_DRIVE_TASK_MAX_CRUISE_SPEED);
		TASK.set_function("ADD_COVER_BLOCKING_AREA", LUA_NATIVE_TASK_ADD_COVER_BLOCKING_AREA);
		TASK.set_function("ADD_COVER_BLOCKING_VOLUME_", LUA_NATIVE_TASK_ADD_COVER_BLOCKING_VOLUME_);
		TASK.set_function("REMOVE_ALL_COVER_BLOCKING_AREAS", LUA_NATIVE_TASK_REMOVE_ALL_COVER_BLOCKING_AREAS);
		TASK.set_function("0x2A10538D0A005E81_", LUA_NATIVE_TASK_0x2A10538D0A005E81_);
		TASK.set_function("0x4F57397388E1DFF8_", LUA_NATIVE_TASK_0x4F57397388E1DFF8_);
		TASK.set_function("TASK_ROB_PED", LUA_NATIVE_TASK_TASK_ROB_PED);
		TASK.set_function("0xBEDBE39B5FD98FD6_", LUA_NATIVE_TASK_0xBEDBE39B5FD98FD6_);
		TASK.set_function("CREATE_SCENARIO_POINT_HASH", LUA_NATIVE_TASK_CREATE_SCENARIO_POINT_HASH);
		TASK.set_function("CREATE_SCENARIO_POINT_HASH_ATTACHED_TO_ENTITY", LUA_NATIVE_TASK_CREATE_SCENARIO_POINT_HASH_ATTACHED_TO_ENTITY);
		TASK.set_function("DOES_SCENARIO_POINT_HAVE_PROPS_", LUA_NATIVE_TASK_DOES_SCENARIO_POINT_HAVE_PROPS_);
		TASK.set_function("GET_PROP_FOR_SCENARIO_POINT", LUA_NATIVE_TASK_GET_PROP_FOR_SCENARIO_POINT);
		TASK.set_function("ASSOCIATE_PROP_WITH_SCENARIO_", LUA_NATIVE_TASK_ASSOCIATE_PROP_WITH_SCENARIO_);
		TASK.set_function("SET_SCENARIO_POINT_FLAG_", LUA_NATIVE_TASK_SET_SCENARIO_POINT_FLAG_);
		TASK.set_function("IS_SCENARIO_POINT_FLAG_SET_", LUA_NATIVE_TASK_IS_SCENARIO_POINT_FLAG_SET_);
		TASK.set_function("0xADC45010BC17AF0E_", LUA_NATIVE_TASK_0xADC45010BC17AF0E_);
		TASK.set_function("0x974DA3408DEC4E79_", LUA_NATIVE_TASK_0x974DA3408DEC4E79_);
		TASK.set_function("DISASSOCIATE_PROP_FROM_SCENARIO_", LUA_NATIVE_TASK_DISASSOCIATE_PROP_FROM_SCENARIO_);
		TASK.set_function("DOES_SCENARIO_POINT_EXIST", LUA_NATIVE_TASK_DOES_SCENARIO_POINT_EXIST);
		TASK.set_function("0x22CD2C33ED4467A1_", LUA_NATIVE_TASK_0x22CD2C33ED4467A1_);
		TASK.set_function("GET_SCENARIO_POINT_ENTITY_", LUA_NATIVE_TASK_GET_SCENARIO_POINT_ENTITY_);
		TASK.set_function("GET_PED_USING_SCENARIO_POINT_", LUA_NATIVE_TASK_GET_PED_USING_SCENARIO_POINT_);
		TASK.set_function("GET_SCENARIO_POINT_COORDS_", LUA_NATIVE_TASK_GET_SCENARIO_POINT_COORDS_);
		TASK.set_function("0x91CB5E431F579BA1_", LUA_NATIVE_TASK_0x91CB5E431F579BA1_);
		TASK.set_function("0x370F57C47F68EBCA_", LUA_NATIVE_TASK_0x370F57C47F68EBCA_);
		TASK.set_function("GET_SCENARIO_POINT_HEADING_", LUA_NATIVE_TASK_GET_SCENARIO_POINT_HEADING_);
		TASK.set_function("GET_SCENARIO_POINT_RADIUS_", LUA_NATIVE_TASK_GET_SCENARIO_POINT_RADIUS_);
		TASK.set_function("SET_SCENARIO_POINT_COORDS_", LUA_NATIVE_TASK_SET_SCENARIO_POINT_COORDS_);
		TASK.set_function("SET_SCENARIO_POINT_HEADING_", LUA_NATIVE_TASK_SET_SCENARIO_POINT_HEADING_);
		TASK.set_function("SET_SCENARIO_POINT_RADIUS_", LUA_NATIVE_TASK_SET_SCENARIO_POINT_RADIUS_);
		TASK.set_function("0xA7479FB665361EDB_", LUA_NATIVE_TASK_0xA7479FB665361EDB_);
		TASK.set_function("0xE69FDA40AAC3EFC0_", LUA_NATIVE_TASK_0xE69FDA40AAC3EFC0_);
		TASK.set_function("GET_SCENARIO_POINTS_IN_AREA", LUA_NATIVE_TASK_GET_SCENARIO_POINTS_IN_AREA);
		TASK.set_function("0xEFD875C2791EBEFD_", LUA_NATIVE_TASK_0xEFD875C2791EBEFD_);
		TASK.set_function("0x152664AA3188B193_", LUA_NATIVE_TASK_0x152664AA3188B193_);
		TASK.set_function("0xE7BBC4E56B989449_", LUA_NATIVE_TASK_0xE7BBC4E56B989449_);
		TASK.set_function("GET_SCENARIO_POINT_PED_IS_USING_", LUA_NATIVE_TASK_GET_SCENARIO_POINT_PED_IS_USING_);
		TASK.set_function("GET_RANSACK_SCENARIO_POINT_PED_IS_USING", LUA_NATIVE_TASK_GET_RANSACK_SCENARIO_POINT_PED_IS_USING);
		TASK.set_function("SET_SCENARIO_CONTAINER_OPENING_STATE_", LUA_NATIVE_TASK_SET_SCENARIO_CONTAINER_OPENING_STATE_);
		TASK.set_function("0xA9E7672F8C6C6F74_", LUA_NATIVE_TASK_0xA9E7672F8C6C6F74_);
		TASK.set_function("0x0A98A362C5A19A43_", LUA_NATIVE_TASK_0x0A98A362C5A19A43_);
		TASK.set_function("0x849791EBBDBA0362_", LUA_NATIVE_TASK_0x849791EBBDBA0362_);
		TASK.set_function("0x640A602946A8C972_", LUA_NATIVE_TASK_0x640A602946A8C972_);
		TASK.set_function("0x01AF8A3729231A43_", LUA_NATIVE_TASK_0x01AF8A3729231A43_);
		TASK.set_function("GET_SCENARIO_CONTAINER_OPENING_STATE_", LUA_NATIVE_TASK_GET_SCENARIO_CONTAINER_OPENING_STATE_);
		TASK.set_function("RESET_SCENARIO_FOR_ENTITY_", LUA_NATIVE_TASK_RESET_SCENARIO_FOR_ENTITY_);
		TASK.set_function("0x4161648394262FDF_", LUA_NATIVE_TASK_0x4161648394262FDF_);
		TASK.set_function("0x9C8F42A5D1859DC1_", LUA_NATIVE_TASK_0x9C8F42A5D1859DC1_);
		TASK.set_function("DELETE_SCENARIO_POINT_", LUA_NATIVE_TASK_DELETE_SCENARIO_POINT_);
		TASK.set_function("TASK_USE_SCENARIO_POINT", LUA_NATIVE_TASK_TASK_USE_SCENARIO_POINT);
		TASK.set_function("TASK_USE_SCENARIO_POINT_2_", LUA_NATIVE_TASK_TASK_USE_SCENARIO_POINT_2_);
		TASK.set_function("TASK_START_SCENARIO_IN_PLACE_HASH", LUA_NATIVE_TASK_TASK_START_SCENARIO_IN_PLACE_HASH);
		TASK.set_function("TASK_START_SCENARIO_IN_PLACE_2_", LUA_NATIVE_TASK_TASK_START_SCENARIO_IN_PLACE_2_);
		TASK.set_function("TASK_START_SCENARIO_AT_POSITION", LUA_NATIVE_TASK_TASK_START_SCENARIO_AT_POSITION);
		TASK.set_function("0xF97F462779B31786_", LUA_NATIVE_TASK_0xF97F462779B31786_);
		TASK.set_function("0x6C269F673C47031E_", LUA_NATIVE_TASK_0x6C269F673C47031E_);
		TASK.set_function("0x9667CCE29BFA0780_", LUA_NATIVE_TASK_0x9667CCE29BFA0780_);
		TASK.set_function("0x00FFE0F85253C572_", LUA_NATIVE_TASK_0x00FFE0F85253C572_);
		TASK.set_function("TASK_USE_NEAREST_SCENARIO_TO_COORD_", LUA_NATIVE_TASK_TASK_USE_NEAREST_SCENARIO_TO_COORD_);
		TASK.set_function("TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP", LUA_NATIVE_TASK_TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP);
		TASK.set_function("TASK_USE_NEAREST_TRAIN_SCENARIO_TO_COORD_WARP", LUA_NATIVE_TASK_TASK_USE_NEAREST_TRAIN_SCENARIO_TO_COORD_WARP);
		TASK.set_function("TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD", LUA_NATIVE_TASK_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD);
		TASK.set_function("TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD_WARP", LUA_NATIVE_TASK_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD_WARP);
		TASK.set_function("0xFDECCA06E8B81346_", LUA_NATIVE_TASK_0xFDECCA06E8B81346_);
		TASK.set_function("0x2D657B10F211C572_", LUA_NATIVE_TASK_0x2D657B10F211C572_);
		TASK.set_function("TASK_RIDE_TRAIN", LUA_NATIVE_TASK_TASK_RIDE_TRAIN);
		TASK.set_function("0x79197F7D2BB5E73A_", LUA_NATIVE_TASK_0x79197F7D2BB5E73A_);
		TASK.set_function("DOES_SCENARIO_EXIST_IN_AREA", LUA_NATIVE_TASK_DOES_SCENARIO_EXIST_IN_AREA);
		TASK.set_function("DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA_HASH", LUA_NATIVE_TASK_DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA_HASH);
		TASK.set_function("FIND_SCENARIO_OF_TYPE_HASH", LUA_NATIVE_TASK_FIND_SCENARIO_OF_TYPE_HASH);
		TASK.set_function("0x0D322AEF8878B8FE_", LUA_NATIVE_TASK_0x0D322AEF8878B8FE_);
		TASK.set_function("0xD508FA229F1C4900_", LUA_NATIVE_TASK_0xD508FA229F1C4900_);
		TASK.set_function("0xB8E213D02F37947D_", LUA_NATIVE_TASK_0xB8E213D02F37947D_);
		TASK.set_function("IS_SCENARIO_OCCUPIED", LUA_NATIVE_TASK_IS_SCENARIO_OCCUPIED);
		TASK.set_function("0x1ACBC313966C21F3_", LUA_NATIVE_TASK_0x1ACBC313966C21F3_);
		TASK.set_function("PED_HAS_USE_SCENARIO_TASK", LUA_NATIVE_TASK_PED_HAS_USE_SCENARIO_TASK);
		TASK.set_function("PED_IS_IN_SCENARIO_BASE_", LUA_NATIVE_TASK_PED_IS_IN_SCENARIO_BASE_);
		TASK.set_function("0x90703A8F75EE4ABD_", LUA_NATIVE_TASK_0x90703A8F75EE4ABD_);
		TASK.set_function("0xD999E379265A4501_", LUA_NATIVE_TASK_0xD999E379265A4501_);
		TASK.set_function("PLAY_ANIM_ON_RUNNING_SCENARIO", LUA_NATIVE_TASK_PLAY_ANIM_ON_RUNNING_SCENARIO);
		TASK.set_function("0x74F0209674864CBD_", LUA_NATIVE_TASK_0x74F0209674864CBD_);
		TASK.set_function("0xE1C105E6BBA48270_", LUA_NATIVE_TASK_0xE1C105E6BBA48270_);
		TASK.set_function("0x1AC5A8AB50CFAA33_", LUA_NATIVE_TASK_0x1AC5A8AB50CFAA33_);
		TASK.set_function("0xBEEFBB608D2AA68A_", LUA_NATIVE_TASK_0xBEEFBB608D2AA68A_);
		TASK.set_function("0x19BC99C678FBA139_", LUA_NATIVE_TASK_0x19BC99C678FBA139_);
		TASK.set_function("0x5D9B0BAAF04CF65B_", LUA_NATIVE_TASK_0x5D9B0BAAF04CF65B_);
		TASK.set_function("0x9B6A58FDB0024F12_", LUA_NATIVE_TASK_0x9B6A58FDB0024F12_);
		TASK.set_function("0xBC3F847AE2C3DC65_", LUA_NATIVE_TASK_0xBC3F847AE2C3DC65_);
		TASK.set_function("0x450080DDEDB91258_", LUA_NATIVE_TASK_0x450080DDEDB91258_);
		TASK.set_function("0x954451EA2D2120FB_", LUA_NATIVE_TASK_0x954451EA2D2120FB_);
		TASK.set_function("0x0F4F6C4CE471259D_", LUA_NATIVE_TASK_0x0F4F6C4CE471259D_);
		TASK.set_function("0xB8E3486D107F4194_", LUA_NATIVE_TASK_0xB8E3486D107F4194_);
		TASK.set_function("0x827A58CED9D4D5B4_", LUA_NATIVE_TASK_0x827A58CED9D4D5B4_);
		TASK.set_function("0x4A7D73989F52EB37_", LUA_NATIVE_TASK_0x4A7D73989F52EB37_);
		TASK.set_function("0xB79817DB31FF72B9_", LUA_NATIVE_TASK_0xB79817DB31FF72B9_);
		TASK.set_function("0x65D281985F2BDFC2_", LUA_NATIVE_TASK_0x65D281985F2BDFC2_);
		TASK.set_function("0x885D19AC2B6FBFF4_", LUA_NATIVE_TASK_0x885D19AC2B6FBFF4_);
		TASK.set_function("0x2064B33F6E6B92D4_", LUA_NATIVE_TASK_0x2064B33F6E6B92D4_);
		TASK.set_function("0xCE4E669400E5F8AA_", LUA_NATIVE_TASK_0xCE4E669400E5F8AA_);
		TASK.set_function("0x2EB977293923C723_", LUA_NATIVE_TASK_0x2EB977293923C723_);
		TASK.set_function("0xE9225354FB7437A7_", LUA_NATIVE_TASK_0xE9225354FB7437A7_);
		TASK.set_function("0x764DB5A48390FBAD_", LUA_NATIVE_TASK_0x764DB5A48390FBAD_);
		TASK.set_function("0x8F8C84363810691A_", LUA_NATIVE_TASK_0x8F8C84363810691A_);
		TASK.set_function("0xFF8AFCA532B500D4_", LUA_NATIVE_TASK_0xFF8AFCA532B500D4_);
		TASK.set_function("0xFE5D28B9B7837CC1_", LUA_NATIVE_TASK_0xFE5D28B9B7837CC1_);
		TASK.set_function("0x2B8AF29A78024BD3_", LUA_NATIVE_TASK_0x2B8AF29A78024BD3_);
		TASK.set_function("0x0365000D8BF86531_", LUA_NATIVE_TASK_0x0365000D8BF86531_);
		TASK.set_function("0x865732725536EE39_", LUA_NATIVE_TASK_0x865732725536EE39_);
		TASK.set_function("0x0E184495B27BB57D_", LUA_NATIVE_TASK_0x0E184495B27BB57D_);
		TASK.set_function("DOES_SCENARIO_GROUP_EXIST", LUA_NATIVE_TASK_DOES_SCENARIO_GROUP_EXIST);
		TASK.set_function("DOES_SCENARIO_GROUP_EXIST_HASH_", LUA_NATIVE_TASK_DOES_SCENARIO_GROUP_EXIST_HASH_);
		TASK.set_function("IS_SCENARIO_GROUP_ENABLED", LUA_NATIVE_TASK_IS_SCENARIO_GROUP_ENABLED);
		TASK.set_function("IS_SCENARIO_GROUP_ENABLED_HASH_", LUA_NATIVE_TASK_IS_SCENARIO_GROUP_ENABLED_HASH_);
		TASK.set_function("SET_SCENARIO_GROUP_ENABLED", LUA_NATIVE_TASK_SET_SCENARIO_GROUP_ENABLED);
		TASK.set_function("SET_SCENARIO_GROUP_ENABLED_HASH_", LUA_NATIVE_TASK_SET_SCENARIO_GROUP_ENABLED_HASH_);
		TASK.set_function("RESET_SCENARIO_GROUPS_ENABLED", LUA_NATIVE_TASK_RESET_SCENARIO_GROUPS_ENABLED);
		TASK.set_function("0x358A1A751B335A11_", LUA_NATIVE_TASK_0x358A1A751B335A11_);
		TASK.set_function("FORCE_SCENARIO_GROUP_PRIORITY", LUA_NATIVE_TASK_FORCE_SCENARIO_GROUP_PRIORITY);
		TASK.set_function("0xE55478C5EDF70AC2_", LUA_NATIVE_TASK_0xE55478C5EDF70AC2_);
		TASK.set_function("IS_SCENARIO_POINT_ACTIVE_", LUA_NATIVE_TASK_IS_SCENARIO_POINT_ACTIVE_);
		TASK.set_function("SET_SCENARIO_POINT_ACTIVE_", LUA_NATIVE_TASK_SET_SCENARIO_POINT_ACTIVE_);
		TASK.set_function("RESET_SCENARIO_SCRIPT_", LUA_NATIVE_TASK_RESET_SCENARIO_SCRIPT_);
		TASK.set_function("IS_SCENARIO_TYPE_ENABLED", LUA_NATIVE_TASK_IS_SCENARIO_TYPE_ENABLED);
		TASK.set_function("SET_SCENARIO_TYPE_ENABLED", LUA_NATIVE_TASK_SET_SCENARIO_TYPE_ENABLED);
		TASK.set_function("SET_SCENARIO_TYPE_ENABLED_HASH_", LUA_NATIVE_TASK_SET_SCENARIO_TYPE_ENABLED_HASH_);
		TASK.set_function("RESET_SCENARIO_TYPES_ENABLED", LUA_NATIVE_TASK_RESET_SCENARIO_TYPES_ENABLED);
		TASK.set_function("GET_SCENARIO_POINT_TYPE_PED_IS_USING_", LUA_NATIVE_TASK_GET_SCENARIO_POINT_TYPE_PED_IS_USING_);
		TASK.set_function("GET_SCENARIO_POINT_TYPE_", LUA_NATIVE_TASK_GET_SCENARIO_POINT_TYPE_);
		TASK.set_function("IS_PED_ACTIVE_IN_SCENARIO", LUA_NATIVE_TASK_IS_PED_ACTIVE_IN_SCENARIO);
		TASK.set_function("IS_PED_EXITING_SCENARIO", LUA_NATIVE_TASK_IS_PED_EXITING_SCENARIO);
		TASK.set_function("0x2C497BDEF897C6DF_", LUA_NATIVE_TASK_0x2C497BDEF897C6DF_);
		TASK.set_function("TASK_COMBAT_HATED_TARGETS_IN_AREA", LUA_NATIVE_TASK_TASK_COMBAT_HATED_TARGETS_IN_AREA);
		TASK.set_function("TASK_COMBAT_HATED_TARGETS_NO_LOS_TEST", LUA_NATIVE_TASK_TASK_COMBAT_HATED_TARGETS_NO_LOS_TEST);
		TASK.set_function("TASK_COMBAT_HATED_TARGETS_AROUND_PED", LUA_NATIVE_TASK_TASK_COMBAT_HATED_TARGETS_AROUND_PED);
		TASK.set_function("TASK_COMBAT_HATED_TARGETS_AROUND_PED_TIMED", LUA_NATIVE_TASK_TASK_COMBAT_HATED_TARGETS_AROUND_PED_TIMED);
		TASK.set_function("TASK_COMBAT_HATED_TARGETS", LUA_NATIVE_TASK_TASK_COMBAT_HATED_TARGETS);
		TASK.set_function("0x30B391915538EBE2_", LUA_NATIVE_TASK_0x30B391915538EBE2_);
		TASK.set_function("TASK_THROW_PROJECTILE", LUA_NATIVE_TASK_TASK_THROW_PROJECTILE);
		TASK.set_function("TASK_THROW_PROJECTILE_2_", LUA_NATIVE_TASK_TASK_THROW_PROJECTILE_2_);
		TASK.set_function("TASK_WHISTLE_ANIM", LUA_NATIVE_TASK_TASK_WHISTLE_ANIM);
		TASK.set_function("TASK_SWAP_WEAPON", LUA_NATIVE_TASK_TASK_SWAP_WEAPON);
		TASK.set_function("0x0000A8ACDC2E1B6A_", LUA_NATIVE_TASK_0x0000A8ACDC2E1B6A_);
		TASK.set_function("TASK_RELOAD_WEAPON", LUA_NATIVE_TASK_TASK_RELOAD_WEAPON);
		TASK.set_function("TASK_PICK_UP_WEAPON", LUA_NATIVE_TASK_TASK_PICK_UP_WEAPON);
		TASK.set_function("IS_PED_GETTING_UP", LUA_NATIVE_TASK_IS_PED_GETTING_UP);
		TASK.set_function("TASK_ANIMAL_WRITHE", LUA_NATIVE_TASK_TASK_ANIMAL_WRITHE);
		TASK.set_function("TASK_ANIMAL_BLEED_OUT_", LUA_NATIVE_TASK_TASK_ANIMAL_BLEED_OUT_);
		TASK.set_function("IS_PED_IN_WRITHE", LUA_NATIVE_TASK_IS_PED_IN_WRITHE);
		TASK.set_function("0x3F8387DB1B9F31B7_", LUA_NATIVE_TASK_0x3F8387DB1B9F31B7_);
		TASK.set_function("0x756C7B4C43DF0422_", LUA_NATIVE_TASK_0x756C7B4C43DF0422_);
		TASK.set_function("0x351F74ED6177EBE7_", LUA_NATIVE_TASK_0x351F74ED6177EBE7_);
		TASK.set_function("0x6C50B9DCCCA70023_", LUA_NATIVE_TASK_0x6C50B9DCCCA70023_);
		TASK.set_function("TASK_REVIVE_TARGET", LUA_NATIVE_TASK_TASK_REVIVE_TARGET);
		TASK.set_function("OPEN_PATROL_ROUTE", LUA_NATIVE_TASK_OPEN_PATROL_ROUTE);
		TASK.set_function("CLOSE_PATROL_ROUTE", LUA_NATIVE_TASK_CLOSE_PATROL_ROUTE);
		TASK.set_function("ADD_PATROL_ROUTE_NODE", LUA_NATIVE_TASK_ADD_PATROL_ROUTE_NODE);
		TASK.set_function("ADD_PATROL_ROUTE_LINK", LUA_NATIVE_TASK_ADD_PATROL_ROUTE_LINK);
		TASK.set_function("CREATE_PATROL_ROUTE", LUA_NATIVE_TASK_CREATE_PATROL_ROUTE);
		TASK.set_function("DELETE_PATROL_ROUTE", LUA_NATIVE_TASK_DELETE_PATROL_ROUTE);
		TASK.set_function("0x643FD1556F621772_", LUA_NATIVE_TASK_0x643FD1556F621772_);
		TASK.set_function("TASK_PATROL", LUA_NATIVE_TASK_TASK_PATROL);
		TASK.set_function("TASK_PATROL_2_", LUA_NATIVE_TASK_TASK_PATROL_2_);
		TASK.set_function("TASK_STAY_IN_COVER", LUA_NATIVE_TASK_TASK_STAY_IN_COVER);
		TASK.set_function("TASK_VEHICLE_SHOOT_AT_PED", LUA_NATIVE_TASK_TASK_VEHICLE_SHOOT_AT_PED);
		TASK.set_function("TASK_VEHICLE_AIM_AT_PED", LUA_NATIVE_TASK_TASK_VEHICLE_AIM_AT_PED);
		TASK.set_function("TASK_VEHICLE_SHOOT_AT_COORD", LUA_NATIVE_TASK_TASK_VEHICLE_SHOOT_AT_COORD);
		TASK.set_function("0xAF2EF28CE3084505_", LUA_NATIVE_TASK_0xAF2EF28CE3084505_);
		TASK.set_function("TASK_VEHICLE_AIM_AT_COORD", LUA_NATIVE_TASK_TASK_VEHICLE_AIM_AT_COORD);
		TASK.set_function("TASK_VEHICLE_GOTO_NAVMESH", LUA_NATIVE_TASK_TASK_VEHICLE_GOTO_NAVMESH);
		TASK.set_function("TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD", LUA_NATIVE_TASK_TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD);
		TASK.set_function("TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD_USING_COMBAT_STYLE", LUA_NATIVE_TASK_TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD_USING_COMBAT_STYLE);
		TASK.set_function("TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY", LUA_NATIVE_TASK_TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY);
		TASK.set_function("TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY_USING_COMBAT_STYLE", LUA_NATIVE_TASK_TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY_USING_COMBAT_STYLE);
		TASK.set_function("TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY", LUA_NATIVE_TASK_TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY);
		TASK.set_function("TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY_USING_COMBAT_STYLE", LUA_NATIVE_TASK_TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY_USING_COMBAT_STYLE);
		TASK.set_function("TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD", LUA_NATIVE_TASK_TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD);
		TASK.set_function("TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD_USING_COMBAT_STYLE", LUA_NATIVE_TASK_TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD_USING_COMBAT_STYLE);
		TASK.set_function("SET_HIGH_FALL_TASK", LUA_NATIVE_TASK_SET_HIGH_FALL_TASK);
		TASK.set_function("0x5217B7B6DB78E1F3_", LUA_NATIVE_TASK_0x5217B7B6DB78E1F3_);
		TASK.set_function("REQUEST_WAYPOINT_RECORDING", LUA_NATIVE_TASK_REQUEST_WAYPOINT_RECORDING);
		TASK.set_function("GET_IS_WAYPOINT_RECORDING_LOADED", LUA_NATIVE_TASK_GET_IS_WAYPOINT_RECORDING_LOADED);
		TASK.set_function("REMOVE_WAYPOINT_RECORDING", LUA_NATIVE_TASK_REMOVE_WAYPOINT_RECORDING);
		TASK.set_function("0xF718931A82EEB898_", LUA_NATIVE_TASK_0xF718931A82EEB898_);
		TASK.set_function("WAYPOINT_RECORDING_GET_NUM_POINTS", LUA_NATIVE_TASK_WAYPOINT_RECORDING_GET_NUM_POINTS);
		TASK.set_function("WAYPOINT_RECORDING_GET_COORD", LUA_NATIVE_TASK_WAYPOINT_RECORDING_GET_COORD);
		TASK.set_function("WAYPOINT_RECORDING_GET_SPEED_AT_POINT", LUA_NATIVE_TASK_WAYPOINT_RECORDING_GET_SPEED_AT_POINT);
		TASK.set_function("WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT", LUA_NATIVE_TASK_WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT);
		TASK.set_function("TASK_FOLLOW_WAYPOINT_RECORDING_ADVANCED", LUA_NATIVE_TASK_TASK_FOLLOW_WAYPOINT_RECORDING_ADVANCED);
		TASK.set_function("TASK_FOLLOW_WAYPOINT_RECORDING", LUA_NATIVE_TASK_TASK_FOLLOW_WAYPOINT_RECORDING);
		TASK.set_function("TASK_FOLLOW_WAYPOINT_RECORDING_AT_OFFSET", LUA_NATIVE_TASK_TASK_FOLLOW_WAYPOINT_RECORDING_AT_OFFSET);
		TASK.set_function("TASK_FOLLOW_ENTITY_ALONG_WAYPOINT_RECORDING_AT_OFFSET", LUA_NATIVE_TASK_TASK_FOLLOW_ENTITY_ALONG_WAYPOINT_RECORDING_AT_OFFSET);
		TASK.set_function("IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED", LUA_NATIVE_TASK_IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED);
		TASK.set_function("GET_PED_WAYPOINT_PROGRESS", LUA_NATIVE_TASK_GET_PED_WAYPOINT_PROGRESS);
		TASK.set_function("GET_PED_WAYPOINT_DISTANCE", LUA_NATIVE_TASK_GET_PED_WAYPOINT_DISTANCE);
		TASK.set_function("SET_PED_WAYPOINT_ROUTE_OFFSET", LUA_NATIVE_TASK_SET_PED_WAYPOINT_ROUTE_OFFSET);
		TASK.set_function("GET_WAYPOINT_DISTANCE_ALONG_ROUTE", LUA_NATIVE_TASK_GET_WAYPOINT_DISTANCE_ALONG_ROUTE);
		TASK.set_function("0x3ACC128510142B9D_", LUA_NATIVE_TASK_0x3ACC128510142B9D_);
		TASK.set_function("WAYPOINT_PLAYBACK_GET_IS_PAUSED", LUA_NATIVE_TASK_WAYPOINT_PLAYBACK_GET_IS_PAUSED);
		TASK.set_function("WAYPOINT_PLAYBACK_GET_IS_AIMING", LUA_NATIVE_TASK_WAYPOINT_PLAYBACK_GET_IS_AIMING);
		TASK.set_function("WAYPOINT_PLAYBACK_GET_IS_SHOOTING", LUA_NATIVE_TASK_WAYPOINT_PLAYBACK_GET_IS_SHOOTING);
		TASK.set_function("WAYPOINT_PLAYBACK_PAUSE", LUA_NATIVE_TASK_WAYPOINT_PLAYBACK_PAUSE);
		TASK.set_function("WAYPOINT_PLAYBACK_RESUME", LUA_NATIVE_TASK_WAYPOINT_PLAYBACK_RESUME);
		TASK.set_function("WAYPOINT_PLAYBACK_OVERRIDE_SPEED", LUA_NATIVE_TASK_WAYPOINT_PLAYBACK_OVERRIDE_SPEED);
		TASK.set_function("WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED", LUA_NATIVE_TASK_WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED);
		TASK.set_function("GET_PED_WAYPOINT_OVERRIDE_SPEED", LUA_NATIVE_TASK_GET_PED_WAYPOINT_OVERRIDE_SPEED);
		TASK.set_function("USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE", LUA_NATIVE_TASK_USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE);
		TASK.set_function("WAYPOINT_PLAYBACK_START_AIMING_AT_PED", LUA_NATIVE_TASK_WAYPOINT_PLAYBACK_START_AIMING_AT_PED);
		TASK.set_function("WAYPOINT_PLAYBACK_START_AIMING_AT_ENTITY", LUA_NATIVE_TASK_WAYPOINT_PLAYBACK_START_AIMING_AT_ENTITY);
		TASK.set_function("WAYPOINT_PLAYBACK_START_AIMING_AT_COORD", LUA_NATIVE_TASK_WAYPOINT_PLAYBACK_START_AIMING_AT_COORD);
		TASK.set_function("WAYPOINT_PLAYBACK_START_SHOOTING_AT_PED", LUA_NATIVE_TASK_WAYPOINT_PLAYBACK_START_SHOOTING_AT_PED);
		TASK.set_function("WAYPOINT_PLAYBACK_START_SHOOTING_AT_ENTITY", LUA_NATIVE_TASK_WAYPOINT_PLAYBACK_START_SHOOTING_AT_ENTITY);
		TASK.set_function("WAYPOINT_PLAYBACK_START_SHOOTING_AT_COORD", LUA_NATIVE_TASK_WAYPOINT_PLAYBACK_START_SHOOTING_AT_COORD);
		TASK.set_function("WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING", LUA_NATIVE_TASK_WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING);
		TASK.set_function("ASSISTED_MOVEMENT_REMOVE_ROUTE", LUA_NATIVE_TASK_ASSISTED_MOVEMENT_REMOVE_ROUTE);
		TASK.set_function("CREATE_WAYPOINT_PATH_", LUA_NATIVE_TASK_CREATE_WAYPOINT_PATH_);
		TASK.set_function("ASSISTED_MOVEMENT_IS_ROUTE_LOADED", LUA_NATIVE_TASK_ASSISTED_MOVEMENT_IS_ROUTE_LOADED);
		TASK.set_function("ASSISTED_MOVEMENT_SET_ROUTE_PROPERTIES", LUA_NATIVE_TASK_ASSISTED_MOVEMENT_SET_ROUTE_PROPERTIES);
		TASK.set_function("SET_ENABLE_SPEED_RESTRAIN_FOR_WAYPOINT_RECORDING_LEADER", LUA_NATIVE_TASK_SET_ENABLE_SPEED_RESTRAIN_FOR_WAYPOINT_RECORDING_LEADER);
		TASK.set_function("SET_UP_SPEED_RESTRAIN_INFORMATION_FOR_PLAYER_FOLLOWER", LUA_NATIVE_TASK_SET_UP_SPEED_RESTRAIN_INFORMATION_FOR_PLAYER_FOLLOWER);
		TASK.set_function("TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING", LUA_NATIVE_TASK_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING);
		TASK.set_function("TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING_2_", LUA_NATIVE_TASK_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING_2_);
		TASK.set_function("IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE", LUA_NATIVE_TASK_IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE);
		TASK.set_function("GET_VEHICLE_WAYPOINT_PROGRESS", LUA_NATIVE_TASK_GET_VEHICLE_WAYPOINT_PROGRESS);
		TASK.set_function("GET_VEHICLE_WAYPOINT_TARGET_POINT", LUA_NATIVE_TASK_GET_VEHICLE_WAYPOINT_TARGET_POINT);
		TASK.set_function("VEHICLE_WAYPOINT_PLAYBACK_PAUSE", LUA_NATIVE_TASK_VEHICLE_WAYPOINT_PLAYBACK_PAUSE);
		TASK.set_function("VEHICLE_WAYPOINT_PLAYBACK_GET_IS_PAUSED", LUA_NATIVE_TASK_VEHICLE_WAYPOINT_PLAYBACK_GET_IS_PAUSED);
		TASK.set_function("VEHICLE_WAYPOINT_PLAYBACK_RESUME", LUA_NATIVE_TASK_VEHICLE_WAYPOINT_PLAYBACK_RESUME);
		TASK.set_function("VEHICLE_WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED", LUA_NATIVE_TASK_VEHICLE_WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED);
		TASK.set_function("VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED", LUA_NATIVE_TASK_VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED);
		TASK.set_function("GET_VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED", LUA_NATIVE_TASK_GET_VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED);
		TASK.set_function("TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS", LUA_NATIVE_TASK_TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS);
		TASK.set_function("TASK_SET_STEALTH_MOVEMENT", LUA_NATIVE_TASK_TASK_SET_STEALTH_MOVEMENT);
		TASK.set_function("TASK_SET_CROUCH_MOVEMENT", LUA_NATIVE_TASK_TASK_SET_CROUCH_MOVEMENT);
		TASK.set_function("TASK_FORCE_MOTION_STATE", LUA_NATIVE_TASK_TASK_FORCE_MOTION_STATE);
		TASK.set_function("TASK_MOVE_NETWORK_BY_NAME", LUA_NATIVE_TASK_TASK_MOVE_NETWORK_BY_NAME);
		TASK.set_function("TASK_MOVE_NETWORK_BY_NAME_WITH_INIT_PARAMS", LUA_NATIVE_TASK_TASK_MOVE_NETWORK_BY_NAME_WITH_INIT_PARAMS);
		TASK.set_function("TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS", LUA_NATIVE_TASK_TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS);
		TASK.set_function("TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS_ATTACHED", LUA_NATIVE_TASK_TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS_ATTACHED);
		TASK.set_function("IS_TASK_MOVE_NETWORK_ACTIVE", LUA_NATIVE_TASK_IS_TASK_MOVE_NETWORK_ACTIVE);
		TASK.set_function("GET_TASK_MOVE_NETWORK_ID_", LUA_NATIVE_TASK_GET_TASK_MOVE_NETWORK_ID_);
		TASK.set_function("IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION", LUA_NATIVE_TASK_IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION);
		TASK.set_function("REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION", LUA_NATIVE_TASK_REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION);
		TASK.set_function("GET_TASK_MOVE_NETWORK_STATE", LUA_NATIVE_TASK_GET_TASK_MOVE_NETWORK_STATE);
		TASK.set_function("0xE9A6400D1A0E7A55_", LUA_NATIVE_TASK_0xE9A6400D1A0E7A55_);
		TASK.set_function("0x615DC4A82E90BB48_", LUA_NATIVE_TASK_0x615DC4A82E90BB48_);
		TASK.set_function("SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT", LUA_NATIVE_TASK_SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT);
		TASK.set_function("SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT_2_", LUA_NATIVE_TASK_SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT_2_);
		TASK.set_function("SET_TASK_MOVE_NETWORK_SIGNAL_BOOL", LUA_NATIVE_TASK_SET_TASK_MOVE_NETWORK_SIGNAL_BOOL);
		TASK.set_function("SET_TASK_MOVE_NETWORK_SIGNAL_VECTOR_", LUA_NATIVE_TASK_SET_TASK_MOVE_NETWORK_SIGNAL_VECTOR_);
		TASK.set_function("GET_TASK_MOVE_NETWORK_PHASE_FLOAT_", LUA_NATIVE_TASK_GET_TASK_MOVE_NETWORK_PHASE_FLOAT_);
		TASK.set_function("GET_TASK_MOVE_NETWORK_EVENT", LUA_NATIVE_TASK_GET_TASK_MOVE_NETWORK_EVENT);
		TASK.set_function("0x9585FF23C4B8EDE0_", LUA_NATIVE_TASK_0x9585FF23C4B8EDE0_);
		TASK.set_function("0xEAF87DA2BE78A15B_", LUA_NATIVE_TASK_0xEAF87DA2BE78A15B_);
		TASK.set_function("0x3BBEECC5B8F35318_", LUA_NATIVE_TASK_0x3BBEECC5B8F35318_);
		TASK.set_function("IS_MOVE_BLEND_RATIO_STILL", LUA_NATIVE_TASK_IS_MOVE_BLEND_RATIO_STILL);
		TASK.set_function("IS_MOVE_BLEND_RATIO_WALKING", LUA_NATIVE_TASK_IS_MOVE_BLEND_RATIO_WALKING);
		TASK.set_function("IS_MOVE_BLEND_RATIO_RUNNING", LUA_NATIVE_TASK_IS_MOVE_BLEND_RATIO_RUNNING);
		TASK.set_function("IS_MOVE_BLEND_RATIO_SPRINTING", LUA_NATIVE_TASK_IS_MOVE_BLEND_RATIO_SPRINTING);
		TASK.set_function("IS_PED_STILL", LUA_NATIVE_TASK_IS_PED_STILL);
		TASK.set_function("IS_PED_WALKING", LUA_NATIVE_TASK_IS_PED_WALKING);
		TASK.set_function("IS_PED_RUNNING", LUA_NATIVE_TASK_IS_PED_RUNNING);
		TASK.set_function("IS_PED_SPRINTING", LUA_NATIVE_TASK_IS_PED_SPRINTING);
		TASK.set_function("IS_PED_IN_HIT_REACT", LUA_NATIVE_TASK_IS_PED_IN_HIT_REACT);
		TASK.set_function("TASK_ARREST_PED", LUA_NATIVE_TASK_TASK_ARREST_PED);
		TASK.set_function("IS_PED_BEING_ARRESTED", LUA_NATIVE_TASK_IS_PED_BEING_ARRESTED);
		TASK.set_function("IS_PED_ARRESTING_ANY_PED_", LUA_NATIVE_TASK_IS_PED_ARRESTING_ANY_PED_);
		TASK.set_function("CUFF_PED_", LUA_NATIVE_TASK_CUFF_PED_);
		TASK.set_function("UNCUFF_PED", LUA_NATIVE_TASK_UNCUFF_PED);
		TASK.set_function("IS_PED_CUFFED", LUA_NATIVE_TASK_IS_PED_CUFFED);
		TASK.set_function("IS_PED_DUELLING_", LUA_NATIVE_TASK_IS_PED_DUELLING_);
		TASK.set_function("TASK_DUEL", LUA_NATIVE_TASK_TASK_DUEL);
		TASK.set_function("0x908BB14BCE85C80E_", LUA_NATIVE_TASK_0x908BB14BCE85C80E_);
		TASK.set_function("0x1F7A9A9C38C13A56_", LUA_NATIVE_TASK_0x1F7A9A9C38C13A56_);
		TASK.set_function("0x3FEB770D8ED9047A_", LUA_NATIVE_TASK_0x3FEB770D8ED9047A_);
		TASK.set_function("0x30146C25686B7836_", LUA_NATIVE_TASK_0x30146C25686B7836_);
		TASK.set_function("0x59AE5CA4FFB4E378_", LUA_NATIVE_TASK_0x59AE5CA4FFB4E378_);
		TASK.set_function("0x748D5E0D2A1A4C61_", LUA_NATIVE_TASK_0x748D5E0D2A1A4C61_);
		TASK.set_function("END_DUEL", LUA_NATIVE_TASK_END_DUEL);
		TASK.set_function("0x651F0530083C0E5A_", LUA_NATIVE_TASK_0x651F0530083C0E5A_);
		TASK.set_function("TASK_CARRIABLE", LUA_NATIVE_TASK_TASK_CARRIABLE);
		TASK.set_function("0x9EBD34958AB6F824_", LUA_NATIVE_TASK_0x9EBD34958AB6F824_);
		TASK.set_function("GET_IS_CARRIABLE_ENTITY", LUA_NATIVE_TASK_GET_IS_CARRIABLE_ENTITY);
		TASK.set_function("0x10ADFDF07B7DFFBA_", LUA_NATIVE_TASK_0x10ADFDF07B7DFFBA_);
		TASK.set_function("TASK_PLACE_CARRIED_ENTITY_AT_COORD", LUA_NATIVE_TASK_TASK_PLACE_CARRIED_ENTITY_AT_COORD);
		TASK.set_function("TASK_PLACE_CARRIED_ENTITY_ON_MOUNT", LUA_NATIVE_TASK_TASK_PLACE_CARRIED_ENTITY_ON_MOUNT);
		TASK.set_function("TASK_DUMP_CARRIABLE_FROM_PARENT", LUA_NATIVE_TASK_TASK_DUMP_CARRIABLE_FROM_PARENT);
		TASK.set_function("DETACH_CARRIABLE_PED_", LUA_NATIVE_TASK_DETACH_CARRIABLE_PED_);
		TASK.set_function("0xE2CF104ADD49D4BF_", LUA_NATIVE_TASK_0xE2CF104ADD49D4BF_);
		TASK.set_function("TASK_PICKUP_CARRIABLE_ENTITY", LUA_NATIVE_TASK_TASK_PICKUP_CARRIABLE_ENTITY);
		TASK.set_function("TASK_HOGTIE_TARGET_PED", LUA_NATIVE_TASK_TASK_HOGTIE_TARGET_PED);
		TASK.set_function("TASK_CUT_FREE_HOGTIED_TARGET_PED_", LUA_NATIVE_TASK_TASK_CUT_FREE_HOGTIED_TARGET_PED_);
		TASK.set_function("TASK_CUT_FREE_HOGTIED_TARGET_PED_2_", LUA_NATIVE_TASK_TASK_CUT_FREE_HOGTIED_TARGET_PED_2_);
		TASK.set_function("SET_HOGTIE_ESCAPE_TIMER_", LUA_NATIVE_TASK_SET_HOGTIE_ESCAPE_TIMER_);
		TASK.set_function("GET_HOGTIE_ESCAPE_TIMER_", LUA_NATIVE_TASK_GET_HOGTIE_ESCAPE_TIMER_);
		TASK.set_function("0x03D741CB4052E26C_", LUA_NATIVE_TASK_0x03D741CB4052E26C_);
		TASK.set_function("REQUEST_HERB_COMPOSITE_ASSET_", LUA_NATIVE_TASK_REQUEST_HERB_COMPOSITE_ASSET_);
		TASK.set_function("ARE_COMPOSITE_LOOTABLE_ENTITY_DEF_ASSETS_LOADED", LUA_NATIVE_TASK_ARE_COMPOSITE_LOOTABLE_ENTITY_DEF_ASSETS_LOADED);
		TASK.set_function("CREATE_HERB_COMPOSITES_", LUA_NATIVE_TASK_CREATE_HERB_COMPOSITES_);
		TASK.set_function("DELETE_PATCH_OBJECTS_FROM_HERB_COMPOSITES_", LUA_NATIVE_TASK_DELETE_PATCH_OBJECTS_FROM_HERB_COMPOSITES_);
		TASK.set_function("GET_HERB_COMPOSITE_NUM_ENTITIES_", LUA_NATIVE_TASK_GET_HERB_COMPOSITE_NUM_ENTITIES_);
		TASK.set_function("0xDF56A2B50C04DEA4_", LUA_NATIVE_TASK_0xDF56A2B50C04DEA4_);
		TASK.set_function("TASK_LOOT_ENTITY", LUA_NATIVE_TASK_TASK_LOOT_ENTITY);
		TASK.set_function("TASK_BREAK_VEHICLE_DOOR_LOCK", LUA_NATIVE_TASK_TASK_BREAK_VEHICLE_DOOR_LOCK);
		TASK.set_function("TASK_LOOT_NEAREST_ENTITY", LUA_NATIVE_TASK_TASK_LOOT_NEAREST_ENTITY);
		TASK.set_function("TASK_LASSO_PED", LUA_NATIVE_TASK_TASK_LASSO_PED);
		TASK.set_function("TASK_HOGTIEABLE", LUA_NATIVE_TASK_TASK_HOGTIEABLE);
		TASK.set_function("UNHOGTIE_PED", LUA_NATIVE_TASK_UNHOGTIE_PED);
		TASK.set_function("0x722D6A49200174FE_", LUA_NATIVE_TASK_0x722D6A49200174FE_);
		TASK.set_function("MAKE_OBJECT_CARRIABLE_", LUA_NATIVE_TASK_MAKE_OBJECT_CARRIABLE_);
		TASK.set_function("MAKE_OBJECT_NOT_CARRIABLE", LUA_NATIVE_TASK_MAKE_OBJECT_NOT_CARRIABLE);
		TASK.set_function("0x8E1DDE26D270CC5E_", LUA_NATIVE_TASK_0x8E1DDE26D270CC5E_);
		TASK.set_function("0xA6A76D666A281F2D_", LUA_NATIVE_TASK_0xA6A76D666A281F2D_);
		TASK.set_function("0xA21AA2F0C2180125_", LUA_NATIVE_TASK_0xA21AA2F0C2180125_);
		TASK.set_function("FIND_MODEL_FOR_ITEM_", LUA_NATIVE_TASK_FIND_MODEL_FOR_ITEM_);
		TASK.set_function("0xFF745B0346E19E2C_", LUA_NATIVE_TASK_0xFF745B0346E19E2C_);
		TASK.set_function("0xB8F52A3F84A7CC59_", LUA_NATIVE_TASK_0xB8F52A3F84A7CC59_);
		TASK.set_function("0x6AFDA2264925BD11_", LUA_NATIVE_TASK_0x6AFDA2264925BD11_);
		TASK.set_function("0x816A3ACD265E2297_", LUA_NATIVE_TASK_0x816A3ACD265E2297_);
		TASK.set_function("0x4E806A395D43A458_", LUA_NATIVE_TASK_0x4E806A395D43A458_);
		TASK.set_function("SET_TEAM_CARRIABLE_ENTITY", LUA_NATIVE_TASK_SET_TEAM_CARRIABLE_ENTITY);
		TASK.set_function("IS_TEAM_CARRIABLE_ENTITY", LUA_NATIVE_TASK_IS_TEAM_CARRIABLE_ENTITY);
		TASK.set_function("IS_HAT_BEING_PICKED_UP_", LUA_NATIVE_TASK_IS_HAT_BEING_PICKED_UP_);
		TASK.set_function("0x9ADDBB9242179D56_", LUA_NATIVE_TASK_0x9ADDBB9242179D56_);
		TASK.set_function("IS_HAT_BEING_PICKED_UP_2_", LUA_NATIVE_TASK_IS_HAT_BEING_PICKED_UP_2_);
		TASK.set_function("TASK_EQUIP_HAT_", LUA_NATIVE_TASK_TASK_EQUIP_HAT_);
		TASK.set_function("0x7CB99FADDE73CD1B_", LUA_NATIVE_TASK_0x7CB99FADDE73CD1B_);
		TASK.set_function("0xF3C3503276F4A034_", LUA_NATIVE_TASK_0xF3C3503276F4A034_);
		TASK.set_function("0x6DAC799857EF3F11_", LUA_NATIVE_TASK_0x6DAC799857EF3F11_);
		TASK.set_function("0x920684BE432875B1_", LUA_NATIVE_TASK_0x920684BE432875B1_);
		TASK.set_function("SET_ENHANCED_BREAK_FREE", LUA_NATIVE_TASK_SET_ENHANCED_BREAK_FREE);
		TASK.set_function("0x6AFD84AEAA3EA538_", LUA_NATIVE_TASK_0x6AFD84AEAA3EA538_);
		TASK.set_function("0xBD1C3C0F271C39D3_", LUA_NATIVE_TASK_0xBD1C3C0F271C39D3_);
		TASK.set_function("0x1ECF56C040FD839C_", LUA_NATIVE_TASK_0x1ECF56C040FD839C_);
		TASK.set_function("0xF40A109B4B79A848_", LUA_NATIVE_TASK_0xF40A109B4B79A848_);
		TASK.set_function("IS_PED_LEADING_HORSE_", LUA_NATIVE_TASK_IS_PED_LEADING_HORSE_);
		TASK.set_function("0xAC5045AB7F1A34FD_", LUA_NATIVE_TASK_0xAC5045AB7F1A34FD_);
		TASK.set_function("GET_LED_HORSE_FROM_PED_", LUA_NATIVE_TASK_GET_LED_HORSE_FROM_PED_);
		TASK.set_function("TASK_TURN_TO_FACE_CLOSEST_PED", LUA_NATIVE_TASK_TASK_TURN_TO_FACE_CLOSEST_PED);
		TASK.set_function("TASK_CONFRONT", LUA_NATIVE_TASK_TASK_CONFRONT);
		TASK.set_function("TASK_POLICE", LUA_NATIVE_TASK_TASK_POLICE);
		TASK.set_function("TASK_MELEE", LUA_NATIVE_TASK_TASK_MELEE);
		TASK.set_function("TASK_GRAPPLE", LUA_NATIVE_TASK_TASK_GRAPPLE);
		TASK.set_function("TASK_INTIMIDATED_", LUA_NATIVE_TASK_TASK_INTIMIDATED_);
		TASK.set_function("TASK_INTIMIDATED_2_", LUA_NATIVE_TASK_TASK_INTIMIDATED_2_);
		TASK.set_function("0x2948235DB2058E99_", LUA_NATIVE_TASK_0x2948235DB2058E99_);
		TASK.set_function("0xB2F47A1AFDFCC595_", LUA_NATIVE_TASK_0xB2F47A1AFDFCC595_);
		TASK.set_function("0x41D1331AFAD5A091_", LUA_NATIVE_TASK_0x41D1331AFAD5A091_);
		TASK.set_function("0x801BD27403F3CBA0_", LUA_NATIVE_TASK_0x801BD27403F3CBA0_);
		TASK.set_function("0x0FE797DD9F70DFA6_", LUA_NATIVE_TASK_0x0FE797DD9F70DFA6_);
		TASK.set_function("TASK_PERSISTENT_CHARACTER", LUA_NATIVE_TASK_TASK_PERSISTENT_CHARACTER);
		TASK.set_function("0xFC7F71CF49F70B6B_", LUA_NATIVE_TASK_0xFC7F71CF49F70B6B_);
		TASK.set_function("0xE01F55B2896F6B37_", LUA_NATIVE_TASK_0xE01F55B2896F6B37_);
		TASK.set_function("0xE62754D09354F6CF_", LUA_NATIVE_TASK_0xE62754D09354F6CF_);
		TASK.set_function("0x4BA972D0E5AD8122_", LUA_NATIVE_TASK_0x4BA972D0E5AD8122_);
		TASK.set_function("GET_TASK_FISHING_", LUA_NATIVE_TASK_GET_TASK_FISHING_);
		TASK.set_function("SET_TASK_FISHING_", LUA_NATIVE_TASK_SET_TASK_FISHING_);
		TASK.set_function("TASK_SWAP_FISHING_BAIT", LUA_NATIVE_TASK_TASK_SWAP_FISHING_BAIT);
		TASK.set_function("SET_FISHING_BAIT_", LUA_NATIVE_TASK_SET_FISHING_BAIT_);
		TASK.set_function("0x1F298C7BD30D1240_", LUA_NATIVE_TASK_0x1F298C7BD30D1240_);
		TASK.set_function("PED_FISHINGROD_HOOK_ENTITY_", LUA_NATIVE_TASK_PED_FISHINGROD_HOOK_ENTITY_);
		TASK.set_function("PED_FISHINGROD_HOOK_OBJECT_", LUA_NATIVE_TASK_PED_FISHINGROD_HOOK_OBJECT_);
		TASK.set_function("0xB520DBDA7FCF573F_", LUA_NATIVE_TASK_0xB520DBDA7FCF573F_);
		TASK.set_function("0x31BB338F64D5C861_", LUA_NATIVE_TASK_0x31BB338F64D5C861_);
		TASK.set_function("0x517D01BF27B682D1_", LUA_NATIVE_TASK_0x517D01BF27B682D1_);
		TASK.set_function("0x88FD60D846D9CD63_", LUA_NATIVE_TASK_0x88FD60D846D9CD63_);
		TASK.set_function("0x9050DF2C53801208_", LUA_NATIVE_TASK_0x9050DF2C53801208_);
		TASK.set_function("0x22CDBF317C40A122_", LUA_NATIVE_TASK_0x22CDBF317C40A122_);
		TASK.set_function("0x5952DFA38FA529FE_", LUA_NATIVE_TASK_0x5952DFA38FA529FE_);
		TASK.set_function("TASK_PLAY_EMOTE_WITH_HASH", LUA_NATIVE_TASK_TASK_PLAY_EMOTE_WITH_HASH);
		TASK.set_function("TASK_PLAY_EMOTE_", LUA_NATIVE_TASK_TASK_PLAY_EMOTE_);
		TASK.set_function("0x6A1AF481407BF6E9_", LUA_NATIVE_TASK_0x6A1AF481407BF6E9_);
		TASK.set_function("TASK_EMOTE_OUTRO_", LUA_NATIVE_TASK_TASK_EMOTE_OUTRO_);
		TASK.set_function("0xEC516FE805D2CB2D_", LUA_NATIVE_TASK_0xEC516FE805D2CB2D_);
		TASK.set_function("0x59AEA4DC640814B9_", LUA_NATIVE_TASK_0x59AEA4DC640814B9_);
		TASK.set_function("0x11C7CE1AE38911B5_", LUA_NATIVE_TASK_0x11C7CE1AE38911B5_);
		TASK.set_function("0xD0ABC4EA3B5E21A0_", LUA_NATIVE_TASK_0xD0ABC4EA3B5E21A0_);
		TASK.set_function("IS_EMOTE_TASK_RUNNING", LUA_NATIVE_TASK_IS_EMOTE_TASK_RUNNING);
	}
}
