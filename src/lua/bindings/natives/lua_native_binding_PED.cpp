#include "lua_native_binding.hpp"
#include "game/rdr/Natives.hpp"

namespace Lua::native
{
	static Ped LUA_NATIVE_PED_CREATE_PED(Hash PedModelHashKey, float VecNewCoorsX, float VecNewCoorsY, float VecNewCoorsZ, float fPedHeading, bool RegisterAsNetworkObject, bool ScriptHostObject, bool p7, bool p8)
	{
		auto retval = PED::CREATE_PED(PedModelHashKey, VecNewCoorsX, VecNewCoorsY, VecNewCoorsZ, fPedHeading, RegisterAsNetworkObject, ScriptHostObject, p7, p8);
		return retval;
	}

	static Ped LUA_NATIVE_PED_DELETE_PED(Ped PedIndex)
	{
		PED::DELETE_PED(&PedIndex);
		return PedIndex;
	}

	static void LUA_NATIVE_PED_SET_REMOVE_PED_NETWORKED_(Ped ped, int p1)
	{
		PED::_SET_REMOVE_PED_NETWORKED(ped, p1);
	}

	static void LUA_NATIVE_PED_0x7C08E7CB8D951B70_(Ped ped, float p1)
	{
		PED::_0x7C08E7CB8D951B70(ped, p1);
	}

	static void LUA_NATIVE_PED_SET_PED_TO_BE_REMOVED_(Ped ped, float p1, float p2, int p3, Any p4)
	{
		PED::_SET_PED_TO_BE_REMOVED(ped, p1, p2, p3, p4);
	}

	static Ped LUA_NATIVE_PED_CLONE_PED(Ped PedIndex, bool bRegisterAsNetworkObject, bool bScriptHostObject, bool bLinkBlends)
	{
		auto retval = PED::CLONE_PED(PedIndex, bRegisterAsNetworkObject, bScriptHostObject, bLinkBlends);
		return retval;
	}

	static void LUA_NATIVE_PED_CLONE_PED_TO_TARGET(Ped PedIndexSource, Ped PedIndexTarget)
	{
		PED::CLONE_PED_TO_TARGET(PedIndexSource, PedIndexTarget);
	}

	static bool LUA_NATIVE_PED_IS_PED_IN_VEHICLE(Ped PedIndex, Vehicle VehicleIndex, bool ConsiderEnteringAsInVehicle)
	{
		auto retval = (bool)PED::IS_PED_IN_VEHICLE(PedIndex, VehicleIndex, ConsiderEnteringAsInVehicle);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_IN_MODEL(Ped PedIndex, Hash VehicleModelHashKey)
	{
		auto retval = (bool)PED::IS_PED_IN_MODEL(PedIndex, VehicleModelHashKey);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_IN_ANY_VEHICLE(Ped PedIndex, bool ConsiderEnteringAsInVehicle)
	{
		auto retval = (bool)PED::IS_PED_IN_ANY_VEHICLE(PedIndex, ConsiderEnteringAsInVehicle);
		return retval;
	}

	static void LUA_NATIVE_PED_0x9851DE7AEC10B4E1_(float x, float y, float z, float p3, int p4, Any p5)
	{
		PED::_0x9851DE7AEC10B4E1(x, y, z, p3, p4, p5);
	}

	static bool LUA_NATIVE_PED_IS_PED_INJURED(Ped PedIndex)
	{
		auto retval = (bool)PED::IS_PED_INJURED(PedIndex);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_FATALLY_INJURED(Ped PedIndex)
	{
		auto retval = (bool)PED::IS_PED_FATALLY_INJURED(PedIndex);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_DEAD_OR_DYING(Ped PedIndex, bool CheckMeleeDeathFlags)
	{
		auto retval = (bool)PED::IS_PED_DEAD_OR_DYING(PedIndex, CheckMeleeDeathFlags);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PED_BLEEDOUT_PROFILE_(Ped ped, Hash bleedoutProfile)
	{
		PED::_SET_PED_BLEEDOUT_PROFILE(ped, bleedoutProfile);
	}

	static bool LUA_NATIVE_PED_IS_PED_AIMING_FROM_COVER(Ped PedIndex)
	{
		auto retval = (bool)PED::IS_PED_AIMING_FROM_COVER(PedIndex);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_RELOADING(Ped PedIndex)
	{
		auto retval = (bool)PED::IS_PED_RELOADING(PedIndex);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_A_PLAYER(Ped PedIndex)
	{
		auto retval = (bool)PED::IS_PED_A_PLAYER(PedIndex);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_ANIMAL_CONTROLLED_BY_A_PLAYER_(Ped ped)
	{
		auto retval = (bool)PED::_IS_ANIMAL_CONTROLLED_BY_A_PLAYER(ped);
		return retval;
	}

	static Ped LUA_NATIVE_PED_CREATE_PED_INSIDE_VEHICLE(Vehicle VehicleIndex, Hash PedModelHashKey, int Seat, bool RegisterAsNetworkObject, bool ScriptHostObject, bool p5)
	{
		auto retval = PED::CREATE_PED_INSIDE_VEHICLE(VehicleIndex, PedModelHashKey, Seat, RegisterAsNetworkObject, ScriptHostObject, p5);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PED_DESIRED_HEADING(Ped PedIndex, float DesiredHeading)
	{
		PED::SET_PED_DESIRED_HEADING(PedIndex, DesiredHeading);
	}

	static void LUA_NATIVE_PED_FORCE_ALL_HEADING_VALUES_TO_ALIGN(Ped PedIndex)
	{
		PED::FORCE_ALL_HEADING_VALUES_TO_ALIGN(PedIndex);
	}

	static bool LUA_NATIVE_PED_IS_PED_FACING_PED(Ped PedIndex1, Ped PedIndex2, float Degrees)
	{
		auto retval = (bool)PED::IS_PED_FACING_PED(PedIndex1, PedIndex2, Degrees);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_IN_MELEE_COMBAT(Ped PedIndex)
	{
		auto retval = (bool)PED::IS_PED_IN_MELEE_COMBAT(PedIndex);
		return retval;
	}

	static Any LUA_NATIVE_PED_0x6DB875AFC584FA32_(Ped ped, int p1)
	{
		auto retval = PED::_0x6DB875AFC584FA32(ped, p1);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_STOPPED(Ped PedIndex)
	{
		auto retval = (bool)PED::IS_PED_STOPPED(PedIndex);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_SITTING(Ped ped)
	{
		auto retval = (bool)PED::IS_PED_SITTING(ped);
		return retval;
	}

	static bool LUA_NATIVE_PED_0x09D7AFD3716DA8E1_(Ped ped, int p1)
	{
		auto retval = (bool)PED::_0x09D7AFD3716DA8E1(ped, p1);
		return retval;
	}

	static bool LUA_NATIVE_PED_0x9C81338B2E62CE0A_(Player player, Ped ped, int shotNearRecentlyTime)
	{
		auto retval = (bool)PED::_0x9C81338B2E62CE0A(player, ped, shotNearRecentlyTime);
		return retval;
	}

	static bool LUA_NATIVE_PED_0xB7DBB2986B87E230_(Ped ped, float p1)
	{
		auto retval = (bool)PED::_0xB7DBB2986B87E230(ped, p1);
		return retval;
	}

	static bool LUA_NATIVE_PED_0xD355E2F1BB41087E_(Ped ped, float p1)
	{
		auto retval = (bool)PED::_0xD355E2F1BB41087E(ped, p1);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_ANY_PED_SHOOTING_IN_AREA(float vMinX, float vMinY, float vMinZ, float vMaxX, float vMaxY, float vMaxZ, bool HighlightArea, bool bDo3DCheck)
	{
		auto retval = (bool)PED::IS_ANY_PED_SHOOTING_IN_AREA(vMinX, vMinY, vMinZ, vMaxX, vMaxY, vMaxZ, HighlightArea, bDo3DCheck);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_SHOOTING(Ped PedIndex)
	{
		auto retval = (bool)PED::IS_PED_SHOOTING(PedIndex);
		return retval;
	}

	static float LUA_NATIVE_PED_TIME_SINCE_PED_LAST_SHOT(Ped ped)
	{
		auto retval = PED::TIME_SINCE_PED_LAST_SHOT(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PED_ACCURACY(Ped PedIndex, int NewAccuracy)
	{
		PED::SET_PED_ACCURACY(PedIndex, NewAccuracy);
	}

	static int LUA_NATIVE_PED_GET_PED_ACCURACY(Ped PedIndex)
	{
		auto retval = PED::GET_PED_ACCURACY(PedIndex);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_MODEL(Ped PedIndex, Hash PedModelHashKey)
	{
		auto retval = (bool)PED::IS_PED_MODEL(PedIndex, PedModelHashKey);
		return retval;
	}

	static void LUA_NATIVE_PED_EXPLODE_PED_HEAD(Ped PedIndex, Hash wtWeapon)
	{
		PED::EXPLODE_PED_HEAD(PedIndex, wtWeapon);
	}

	static void LUA_NATIVE_PED_ADD_ARMOUR_TO_PED(Ped PedIndex, int ArmourToAdd)
	{
		PED::ADD_ARMOUR_TO_PED(PedIndex, ArmourToAdd);
	}

	static void LUA_NATIVE_PED_0x5CA20FBE49891BBD_(Ped ped, int p1)
	{
		PED::_0x5CA20FBE49891BBD(ped, p1);
	}

	static void LUA_NATIVE_PED_SET_PED_INTO_VEHICLE(Ped PedIndex, Vehicle VehicleIndex, int seat)
	{
		PED::SET_PED_INTO_VEHICLE(PedIndex, VehicleIndex, seat);
	}

	static void LUA_NATIVE_PED_SET_PED_MOVE_ANIMS_BLEND_OUT(Ped PedIndex)
	{
		PED::SET_PED_MOVE_ANIMS_BLEND_OUT(PedIndex);
	}

	static void LUA_NATIVE_PED_0x606D529DADA3C940_(Ped ped, Any p1)
	{
		PED::_0x606D529DADA3C940(ped, p1);
	}

	static bool LUA_NATIVE_PED_IS_PED_MALE(Ped PedIndex)
	{
		auto retval = (bool)PED::IS_PED_MALE(PedIndex);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_HUMAN(Ped PedIndex)
	{
		auto retval = (bool)PED::IS_PED_HUMAN(PedIndex);
		return retval;
	}

	static Vehicle LUA_NATIVE_PED_GET_VEHICLE_PED_IS_IN(Ped PedIndex, bool ConsiderEnteringAsInVehicle)
	{
		auto retval = PED::GET_VEHICLE_PED_IS_IN(PedIndex, ConsiderEnteringAsInVehicle);
		return retval;
	}

	static void LUA_NATIVE_PED_RESET_PED_LAST_VEHICLE(Ped PedIndex)
	{
		PED::RESET_PED_LAST_VEHICLE(PedIndex);
	}

	static void LUA_NATIVE_PED_0xC6136B40FFFB778B_(bool p0)
	{
		PED::_0xC6136B40FFFB778B(p0);
	}

	static void LUA_NATIVE_PED_0x6E8B87139854022D_(Ped ped, sol::stack_object clipset)
	{
		PED::_0x6E8B87139854022D(ped, clipset.is<const char*>() ? clipset.as<const char*>() : nullptr);
	}

	static int LUA_NATIVE_PED_GET_NUM_FREE_SLOTS_IN_PED_POOL_()
	{
		auto retval = PED::_GET_NUM_FREE_SLOTS_IN_PED_POOL();
		return retval;
	}

	static void LUA_NATIVE_PED_RESERVE_AMBIENT_PEDS_(int numPeds)
	{
		PED::_RESERVE_AMBIENT_PEDS(numPeds);
	}

	static void LUA_NATIVE_PED_RESERVE_AMBIENT_PEDS_TOTAL_(int numPeds)
	{
		PED::_RESERVE_AMBIENT_PEDS_TOTAL(numPeds);
	}

	static void LUA_NATIVE_PED_UNRESERVE_AMBIENT_PEDS_(int numPeds)
	{
		PED::_UNRESERVE_AMBIENT_PEDS(numPeds);
	}

	static int LUA_NATIVE_PED_GET_NUM_RESERVED_AMBIENT_PEDS_DESIRED_()
	{
		auto retval = PED::_GET_NUM_RESERVED_AMBIENT_PEDS_DESIRED();
		return retval;
	}

	static int LUA_NATIVE_PED_GET_NUM_RESERVED_AMBIENT_PEDS_READY_()
	{
		auto retval = PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY();
		return retval;
	}

	static bool LUA_NATIVE_PED_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY_()
	{
		auto retval = (bool)PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY();
		return retval;
	}

	static void LUA_NATIVE_PED_SET_SCENARIO_PED_RANGE_MULTIPLIER_THIS_FRAME_(float multiplier)
	{
		PED::_SET_SCENARIO_PED_RANGE_MULTIPLIER_THIS_FRAME(multiplier);
	}

	static void LUA_NATIVE_PED_0x9E3842E5DAD69F80_(Volume volume)
	{
		PED::_0x9E3842E5DAD69F80(volume);
	}

	static void LUA_NATIVE_PED_SET_AMBIENT_PED_DENSITY_MULTIPLIER_THIS_FRAME_(float multiplier)
	{
		PED::_SET_AMBIENT_PED_DENSITY_MULTIPLIER_THIS_FRAME(multiplier);
	}

	static void LUA_NATIVE_PED_SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier)
	{
		PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(multiplier);
	}

	static void LUA_NATIVE_PED_SET_AMBIENT_ANIMAL_DENSITY_MULTIPLIER_THIS_FRAME_(float multiplier)
	{
		PED::_SET_AMBIENT_ANIMAL_DENSITY_MULTIPLIER_THIS_FRAME(multiplier);
	}

	static void LUA_NATIVE_PED_SET_AMBIENT_HUMAN_DENSITY_MULTIPLIER_THIS_FRAME_(float multiplier)
	{
		PED::_SET_AMBIENT_HUMAN_DENSITY_MULTIPLIER_THIS_FRAME(multiplier);
	}

	static void LUA_NATIVE_PED_SET_SCENARIO_ANIMAL_DENSITY_MULTIPLIER_THIS_FRAME_(float multiplier)
	{
		PED::_SET_SCENARIO_ANIMAL_DENSITY_MULTIPLIER_THIS_FRAME(multiplier);
	}

	static void LUA_NATIVE_PED_SET_SCENARIO_HUMAN_DENSITY_MULTIPLIER_THIS_FRAME_(float multiplier)
	{
		PED::_SET_SCENARIO_HUMAN_DENSITY_MULTIPLIER_THIS_FRAME(multiplier);
	}

	static void LUA_NATIVE_PED_SET_SCENARIO_PED_DENSITY_THIS_FRAME_(Hash configHash)
	{
		PED::_SET_SCENARIO_PED_DENSITY_THIS_FRAME(configHash);
	}

	static void LUA_NATIVE_PED_INSTANTLY_FILL_PED_POPULATION()
	{
		PED::INSTANTLY_FILL_PED_POPULATION();
	}

	static void LUA_NATIVE_PED_0xBFA6B7731C3BAF02_()
	{
		PED::_0xBFA6B7731C3BAF02();
	}

	static bool LUA_NATIVE_PED_IS_INSTANTLY_FILL_PED_POPULATION_FINISHED()
	{
		auto retval = (bool)PED::IS_INSTANTLY_FILL_PED_POPULATION_FINISHED();
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PED_NON_CREATION_AREA(float MinX, float MinY, float MinZ, float MaxX, float MaxY, float MaxZ)
	{
		PED::SET_PED_NON_CREATION_AREA(MinX, MinY, MinZ, MaxX, MaxY, MaxZ);
	}

	static void LUA_NATIVE_PED_CLEAR_PED_NON_CREATION_AREA()
	{
		PED::CLEAR_PED_NON_CREATION_AREA();
	}

	static void LUA_NATIVE_PED_ATTACH_VOLUME_TO_ENTITY_(Volume volume, Entity entity, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, int p8, bool p9)
	{
		PED::_ATTACH_VOLUME_TO_ENTITY(volume, entity, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, p8, p9);
	}

	static void LUA_NATIVE_PED_DETACH_VOLUME_FROM_ENTITY_(Volume volume, Entity entity)
	{
		PED::_DETACH_VOLUME_FROM_ENTITY(volume, entity);
	}

	static void LUA_NATIVE_PED_SET_PED_ONTO_MOUNT(Ped ped, Ped mount, int seatIndex, bool p3)
	{
		PED::SET_PED_ONTO_MOUNT(ped, mount, seatIndex, p3);
	}

	static void LUA_NATIVE_PED_REMOVE_PED_FROM_MOUNT_(Ped ped, bool p1, bool p2)
	{
		PED::_REMOVE_PED_FROM_MOUNT(ped, p1, p2);
	}

	static Ped LUA_NATIVE_PED_CREATE_PED_ON_MOUNT(Ped mount, Hash modelHash, int index, bool p3, bool p4, bool p5, bool p6)
	{
		auto retval = PED::CREATE_PED_ON_MOUNT(mount, modelHash, index, p3, p4, p5, p6);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_MOUNT_SEAT_FREE_(Ped mount, int seat)
	{
		auto retval = (bool)PED::_IS_MOUNT_SEAT_FREE(mount, seat);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_ON_MOUNT(Ped PedIndex)
	{
		auto retval = (bool)PED::IS_PED_ON_MOUNT(PedIndex);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_FULLY_ON_MOUNT(Ped ped, bool p1)
	{
		auto retval = (bool)PED::IS_PED_FULLY_ON_MOUNT(ped, p1);
		return retval;
	}

	static Ped LUA_NATIVE_PED_GET_MOUNT(Ped PedIndex)
	{
		auto retval = PED::GET_MOUNT(PedIndex);
		return retval;
	}

	static Ped LUA_NATIVE_PED_GET_LAST_LED_MOUNT_(Ped ped)
	{
		auto retval = PED::_GET_LAST_LED_MOUNT(ped);
		return retval;
	}

	static Ped LUA_NATIVE_PED_GET_LAST_MOUNT_(Ped ped)
	{
		auto retval = PED::_GET_LAST_MOUNT(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_0xED1C764997A86D5A_(Ped ped1, Ped ped2)
	{
		PED::_0xED1C764997A86D5A(ped1, ped2);
	}

	static void LUA_NATIVE_PED_0xB8AB265426CFE6DD_(Ped ped, bool p1)
	{
		PED::_0xB8AB265426CFE6DD(ped, p1);
	}

	static int LUA_NATIVE_PED_0xE8D1CCB9375C101B_(Ped mount, Player player)
	{
		auto retval = PED::_0xE8D1CCB9375C101B(mount, player);
		return retval;
	}

	static void LUA_NATIVE_PED_0xA691C10054275290_(Ped mount, Player player, int dismountedTimestamp)
	{
		PED::_0xA691C10054275290(mount, player, dismountedTimestamp);
	}

	static void LUA_NATIVE_PED_0x6734F0A6A52C371C_(Player player, int horseSlot)
	{
		PED::_0x6734F0A6A52C371C(player, horseSlot);
	}

	static void LUA_NATIVE_PED_0x024EC9B649111915_(Ped ped, bool p1)
	{
		PED::_0x024EC9B649111915(ped, p1);
	}

	static void LUA_NATIVE_PED_SET_PED_OWNS_ANIMAL(Ped ped, Ped animal, bool p2)
	{
		PED::SET_PED_OWNS_ANIMAL(ped, animal, p2);
	}

	static Ped LUA_NATIVE_PED_GET_ACTIVE_ANIMAL_OWNER_(Ped animal)
	{
		auto retval = PED::_GET_ACTIVE_ANIMAL_OWNER(animal);
		return retval;
	}

	static void LUA_NATIVE_PED_CLEAR_ACTIVE_ANIMAL_OWNER_(Ped horse, bool clear)
	{
		PED::_CLEAR_ACTIVE_ANIMAL_OWNER(horse, clear);
	}

	static int LUA_NATIVE_PED_GET_HORSE_TAMING_STATE_(Ped horse)
	{
		auto retval = PED::_GET_HORSE_TAMING_STATE(horse);
		return retval;
	}

	static void LUA_NATIVE_PED_0x54D3CD482742C482_(Ped animal, float p2)
	{
		PED::_0x54D3CD482742C482(animal, p2);
	}

	static void LUA_NATIVE_PED_0x5CB2EBB467BE3ED6_(Ped animal, float p2)
	{
		PED::_0x5CB2EBB467BE3ED6(animal, p2);
	}

	static void LUA_NATIVE_PED_0x9F0F28B42C4EE80A_(Ped animal, float p2)
	{
		PED::_0x9F0F28B42C4EE80A(animal, p2);
	}

	static void LUA_NATIVE_PED_SET_MOUNT_BONDING_LEVEL_(Ped ped, int bondingLevel)
	{
		PED::_SET_MOUNT_BONDING_LEVEL(ped, bondingLevel);
	}

	static void LUA_NATIVE_PED_SET_MOUNT_SECURITY_ENABLED_(Ped ped, bool toggle)
	{
		PED::_SET_MOUNT_SECURITY_ENABLED(ped, toggle);
	}

	static void LUA_NATIVE_PED_0x9B65444C07B782BF_(Ped ped, sol::stack_object p1)
	{
		PED::_0x9B65444C07B782BF(ped, p1.is<const char*>() ? p1.as<const char*>() : nullptr);
	}

	static bool LUA_NATIVE_PED_IS_ANIMAL_INTERACTION_POSSIBLE(Ped ped, Ped animal)
	{
		auto retval = (bool)PED::IS_ANIMAL_INTERACTION_POSSIBLE(ped, animal);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_ANIMAL_INTERACTION_RUNNING_(Ped ped)
	{
		auto retval = (bool)PED::_IS_ANIMAL_INTERACTION_RUNNING(ped);
		return retval;
	}

	static Ped LUA_NATIVE_PED_0x8BE24D74D74C6E9B_(Ped ped)
	{
		auto retval = PED::_0x8BE24D74D74C6E9B(ped);
		return retval;
	}

	static bool LUA_NATIVE_PED_0x77243ED4F7CAAA55_(Ped ped)
	{
		auto retval = (bool)PED::_0x77243ED4F7CAAA55(ped);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_ON_VEHICLE(Ped PedIndex, bool p1)
	{
		auto retval = (bool)PED::IS_PED_ON_VEHICLE(PedIndex, p1);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_ON_SPECIFIC_VEHICLE(Ped PedIndex, Vehicle VehicleIndex)
	{
		auto retval = (bool)PED::IS_PED_ON_SPECIFIC_VEHICLE(PedIndex, VehicleIndex);
		return retval;
	}

	static void LUA_NATIVE_PED_WARP_PED_OUT_OF_VEHICLE_(Ped ped)
	{
		PED::_WARP_PED_OUT_OF_VEHICLE(ped);
	}

	static void LUA_NATIVE_PED_SET_PED_MONEY(Ped PedIndex, int MoneyToSet)
	{
		PED::SET_PED_MONEY(PedIndex, MoneyToSet);
	}

	static int LUA_NATIVE_PED_GET_PED_MONEY(Ped PedIndex)
	{
		auto retval = PED::GET_PED_MONEY(PedIndex);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS_FOR_AMBIENT_PEDS_THIS_FRAME(bool Block)
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS_FOR_AMBIENT_PEDS_THIS_FRAME(Block);
	}

	static void LUA_NATIVE_PED_0x34EDDD59364AD74A_(Ped ped, uintptr_t p1)
	{
		PED::_0x34EDDD59364AD74A(ped, (Any*)p1);
	}

	static void LUA_NATIVE_PED_0x2D976DBDC731DF80_(Ped ped)
	{
		PED::_0x2D976DBDC731DF80(ped);
	}

	static bool LUA_NATIVE_PED_IS_PED_SITTING_IN_VEHICLE(Ped PedIndex, Vehicle VehicleIndex)
	{
		auto retval = (bool)PED::IS_PED_SITTING_IN_VEHICLE(PedIndex, VehicleIndex);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_SITTING_IN_ANY_VEHICLE(Ped PedIndex)
	{
		auto retval = (bool)PED::IS_PED_SITTING_IN_ANY_VEHICLE(PedIndex);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_ON_FOOT(Ped PedIndex)
	{
		auto retval = (bool)PED::IS_PED_ON_FOOT(PedIndex);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_PLANTING_BOMB(Ped PedIndex)
	{
		auto retval = (bool)PED::IS_PED_PLANTING_BOMB(PedIndex);
		return retval;
	}

	static Vector3 LUA_NATIVE_PED_GET_DEAD_PED_PICKUP_COORDS(Ped PedIndex, float minDist, float maxDist)
	{
		auto retval = PED::GET_DEAD_PED_PICKUP_COORDS(PedIndex, minDist, maxDist);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_IN_ANY_BOAT(Ped PedIndex)
	{
		auto retval = (bool)PED::IS_PED_IN_ANY_BOAT(PedIndex);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_IN_ANY_HELI(Ped PedIndex)
	{
		auto retval = (bool)PED::IS_PED_IN_ANY_HELI(PedIndex);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_IN_ANY_PLANE(Ped PedIndex)
	{
		auto retval = (bool)PED::IS_PED_IN_ANY_PLANE(PedIndex);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_IN_FLYING_VEHICLE(Ped PedIndex)
	{
		auto retval = (bool)PED::IS_PED_IN_FLYING_VEHICLE(PedIndex);
		return retval;
	}

	static bool LUA_NATIVE_PED_0x256EDD55C6BE1482_(Ped ped)
	{
		auto retval = (bool)PED::_0x256EDD55C6BE1482(ped);
		return retval;
	}

	static std::tuple<bool, int> LUA_NATIVE_PED_GET_PED_LAST_DAMAGE_BONE(Ped PedIndex, int ReturnBoneTag)
	{
		std::tuple<bool, int> return_values;
		std::get<0>(return_values) = (bool)PED::GET_PED_LAST_DAMAGE_BONE(PedIndex, &ReturnBoneTag);
		std::get<1>(return_values) = ReturnBoneTag;

		return return_values;
	}

	static void LUA_NATIVE_PED_CLEAR_PED_LAST_DAMAGE_BONE(Ped PedIndex)
	{
		PED::CLEAR_PED_LAST_DAMAGE_BONE(PedIndex);
	}

	static int LUA_NATIVE_PED_GET_PED_DAMAGE_CLEANLINESS_(Ped ped)
	{
		auto retval = PED::_GET_PED_DAMAGE_CLEANLINESS(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PED_DAMAGE_CLEANLINESS_(Ped ped, int damageCleanliness)
	{
		PED::_SET_PED_DAMAGE_CLEANLINESS(ped, damageCleanliness);
	}

	static bool LUA_NATIVE_PED_GET_PED_DAMAGED_(Ped ped)
	{
		auto retval = (bool)PED::_GET_PED_DAMAGED(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PED_DAMAGED_(Ped ped, bool damaged)
	{
		PED::_SET_PED_DAMAGED(ped, damaged);
	}

	static Any LUA_NATIVE_PED_SET_PLAYER_CURRENT_ANIMAL_DAMAGE_MODIFIER_(Player player, float modifier, int p2, int p3)
	{
		auto retval = PED::_SET_PLAYER_CURRENT_ANIMAL_DAMAGE_MODIFIER(player, modifier, p2, p3);
		return retval;
	}

	static void LUA_NATIVE_PED_UPDATE_ANIMAL_DAMAGE_MODIFIER_(Player player)
	{
		PED::_UPDATE_ANIMAL_DAMAGE_MODIFIER(player);
	}

	static float LUA_NATIVE_PED_GET_PLAYER_CURRENT_ANIMAL_DAMAGE_MODIFIER_(Player player)
	{
		auto retval = PED::_GET_PLAYER_CURRENT_ANIMAL_DAMAGE_MODIFIER(player);
		return retval;
	}

	static Any LUA_NATIVE_PED_0xB29C553BA582D09E_(uintptr_t p0, Hash model, int damageCleanliness, int p3)
	{
		auto retval = PED::_0xB29C553BA582D09E((Any*)p0, model, damageCleanliness, p3);
		return retval;
	}

	static bool LUA_NATIVE_PED_0x101B45C5F56D970F_(uintptr_t p0, Ped ped, int damageCleanliness, int p3)
	{
		auto retval = (bool)PED::_0x101B45C5F56D970F((Any*)p0, ped, damageCleanliness, p3);
		return retval;
	}

	static int LUA_NATIVE_PED_COMPUTE_SATCHEL_ITEM_FOR_PED_CARCASS_(uintptr_t outInventoryItemArray, Ped ped, int damageCleanliness, int skinningQuality)
	{
		auto retval = PED::_COMPUTE_SATCHEL_ITEM_FOR_PED_CARCASS((Any*)outInventoryItemArray, ped, damageCleanliness, skinningQuality);
		return retval;
	}

	static bool LUA_NATIVE_PED_COMPUTE_SATCHEL_ITEM_FOR_PED_DAMAGE(Any p0, Ped pedAttached, int damageCleanliness)
	{
		auto retval = (bool)PED::COMPUTE_SATCHEL_ITEM_FOR_PED_DAMAGE(p0, pedAttached, damageCleanliness);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_AI_WEAPON_DAMAGE_MODIFIER(float Modifier)
	{
		PED::SET_AI_WEAPON_DAMAGE_MODIFIER(Modifier);
	}

	static void LUA_NATIVE_PED_RESET_AI_WEAPON_DAMAGE_MODIFIER()
	{
		PED::RESET_AI_WEAPON_DAMAGE_MODIFIER();
	}

	static void LUA_NATIVE_PED_SET_TOTAL_PED_DAMAGE_FROM_AI_(Ped ped, float totalDamage)
	{
		PED::_SET_TOTAL_PED_DAMAGE_FROM_AI(ped, totalDamage);
	}

	static void LUA_NATIVE_PED_0xA6D6F03095C88F59_(Ped ped)
	{
		PED::_0xA6D6F03095C88F59(ped);
	}

	static float LUA_NATIVE_PED_GET_TOTAL_PED_DAMAGE_FROM_AI_(Ped ped)
	{
		auto retval = PED::_GET_TOTAL_PED_DAMAGE_FROM_AI(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PED_TO_PLAYER_WEAPON_DAMAGE_MODIFIER(Ped ped, float damageModifier)
	{
		PED::SET_PED_TO_PLAYER_WEAPON_DAMAGE_MODIFIER(ped, damageModifier);
	}

	static float LUA_NATIVE_PED_GET_PED_TO_PLAYER_WEAPON_DAMAGE_MODIFIER(Ped ped)
	{
		auto retval = PED::GET_PED_TO_PLAYER_WEAPON_DAMAGE_MODIFIER(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_CURRENT_DEFENSE_AGAINST_PLAYERS_MODIFIER_(Ped horse, float modifier)
	{
		PED::_SET_CURRENT_DEFENSE_AGAINST_PLAYERS_MODIFIER(horse, modifier);
	}

	static float LUA_NATIVE_PED_0x763FA8A9D76EE3A7_(Ped ped)
	{
		auto retval = PED::_0x763FA8A9D76EE3A7(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_AI_MELEE_WEAPON_DAMAGE_MODIFIER(float Modifier)
	{
		PED::SET_AI_MELEE_WEAPON_DAMAGE_MODIFIER(Modifier);
	}

	static void LUA_NATIVE_PED_SET_ACCURACY_AGAINST_LOCAL_PLAYER_MODIFIER_(Ped ped, float modifier)
	{
		PED::_SET_ACCURACY_AGAINST_LOCAL_PLAYER_MODIFIER(ped, modifier);
	}

	static float LUA_NATIVE_PED_GET_ACCURACY_AGAINST_LOCAL_PLAYER_MODIFIER_(Ped ped)
	{
		auto retval = PED::_GET_ACCURACY_AGAINST_LOCAL_PLAYER_MODIFIER(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PED_HEADSHOT_DAMAGE_MULTIPLIER_(Ped ped, float multiplier)
	{
		PED::_SET_PED_HEADSHOT_DAMAGE_MULTIPLIER(ped, multiplier);
	}

	static void LUA_NATIVE_PED_0xDEE8D30AA5C2E28D_(Ped ped, Hash p1, bool p2)
	{
		PED::_0xDEE8D30AA5C2E28D(ped, p1, p2);
	}

	static void LUA_NATIVE_PED_0xE1B3BE07D3AADDED_(Ped ped, int p1, bool p2)
	{
		PED::_0xE1B3BE07D3AADDED(ped, p1, p2);
	}

	static void LUA_NATIVE_PED_0x32CEDA9A0AB4CEF7_(Ped ped, Hash p1, bool p2)
	{
		PED::_0x32CEDA9A0AB4CEF7(ped, p1, p2);
	}

	static void LUA_NATIVE_PED_0x52A24D8A1DA89658_(Ped ped, int p1, bool p2)
	{
		PED::_0x52A24D8A1DA89658(ped, p1, p2);
	}

	static void LUA_NATIVE_PED_0x34B5CEAC180A5D6E_(Ped ped, Hash p1, bool p2)
	{
		PED::_0x34B5CEAC180A5D6E(ped, p1, p2);
	}

	static void LUA_NATIVE_PED_0x4F27603E44A8E4C0_(Ped ped, int p1, bool p2)
	{
		PED::_0x4F27603E44A8E4C0(ped, p1, p2);
	}

	static void LUA_NATIVE_PED_0x3FDCC1F8C17E303E_(Ped ped, int p1, float p2)
	{
		PED::_0x3FDCC1F8C17E303E(ped, p1, p2);
	}

	static void LUA_NATIVE_PED_0xE50C9816B3F22D8B_(Ped ped, Hash p1, float p2)
	{
		PED::_0xE50C9816B3F22D8B(ped, p1, p2);
	}

	static void LUA_NATIVE_PED_SET_DEFENSE_MODIFIER_FOR_PED_(Ped ped, float modifier)
	{
		PED::_SET_DEFENSE_MODIFIER_FOR_PED(ped, modifier);
	}

	static void LUA_NATIVE_PED_SET_MIN_PED_HEALTH_THRESHOLD_(Ped ped, float healthAmount)
	{
		PED::_SET_MIN_PED_HEALTH_THRESHOLD(ped, healthAmount);
	}

	static void LUA_NATIVE_PED_0xC5B78E41DCF8227C_(Ped ped, bool p1)
	{
		PED::_0xC5B78E41DCF8227C(ped, p1);
	}

	static void LUA_NATIVE_PED_SET_PED_CAN_BE_TARGETTED(Ped PedIndex, bool bAllowTargetted)
	{
		PED::SET_PED_CAN_BE_TARGETTED(PedIndex, bAllowTargetted);
	}

	static void LUA_NATIVE_PED_SET_PED_CAN_BE_TARGETTED_BY_TEAM(Ped PedIndex, int team, bool bAllowTargetted)
	{
		PED::SET_PED_CAN_BE_TARGETTED_BY_TEAM(PedIndex, team, bAllowTargetted);
	}

	static void LUA_NATIVE_PED_SET_PED_CAN_BE_TARGETTED_BY_PLAYER(Ped PedIndex, Player PlayerIndex, bool bAllowTargetted)
	{
		PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(PedIndex, PlayerIndex, bAllowTargetted);
	}

	static void LUA_NATIVE_PED_SET_INTERACTION_LOCKON_FLAG_(Ped ped, Player player, int flag, bool enable)
	{
		PED::_SET_INTERACTION_LOCKON_FLAG(ped, player, flag, enable);
	}

	static bool LUA_NATIVE_PED_IS_PED_FALLING(Ped PedIndex)
	{
		auto retval = (bool)PED::IS_PED_FALLING(PedIndex);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_SLIDING_(Ped ped)
	{
		auto retval = (bool)PED::_IS_PED_SLIDING(ped);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_JUMPING(Ped PedIndex)
	{
		auto retval = (bool)PED::IS_PED_JUMPING(PedIndex);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_CLIMBING(Ped PedIndex)
	{
		auto retval = (bool)PED::IS_PED_CLIMBING(PedIndex);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_CLIMBING_LADDER_(Ped ped)
	{
		auto retval = (bool)PED::_IS_PED_CLIMBING_LADDER(ped);
		return retval;
	}

	static bool LUA_NATIVE_PED_0x577C60BA06D0EA64_(Ped ped)
	{
		auto retval = (bool)PED::_0x577C60BA06D0EA64(ped);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_VAULTING(Ped PedIndex)
	{
		auto retval = (bool)PED::IS_PED_VAULTING(PedIndex);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_DIVING(Ped PedIndex)
	{
		auto retval = (bool)PED::IS_PED_DIVING(PedIndex);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_OPENING_DOOR(Ped PedIndex)
	{
		auto retval = (bool)PED::IS_PED_OPENING_DOOR(PedIndex);
		return retval;
	}

	static bool LUA_NATIVE_PED_0x5C6C7C70CA302801_(Ped ped)
	{
		auto retval = (bool)PED::_0x5C6C7C70CA302801(ped);
		return retval;
	}

	static bool LUA_NATIVE_PED_0xB91AB3BE7F655D49_(Ped ped)
	{
		auto retval = (bool)PED::_0xB91AB3BE7F655D49(ped);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_IN_ANY_TAXI(Ped PedIndex)
	{
		auto retval = (bool)PED::IS_PED_IN_ANY_TAXI(PedIndex);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PED_ID_RANGE(Ped PedIndex, float IdRange)
	{
		PED::SET_PED_ID_RANGE(PedIndex, IdRange);
	}

	static float LUA_NATIVE_PED_GET_PED_ID_RANGE_(Ped ped)
	{
		auto retval = PED::_GET_PED_ID_RANGE(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PED_HIGHLY_PERCEPTIVE(Ped PedIndex, bool bHighlyPerceptive)
	{
		PED::SET_PED_HIGHLY_PERCEPTIVE(PedIndex, bHighlyPerceptive);
	}

	static void LUA_NATIVE_PED_SET_PED_INJURED_ON_GROUND_BEHAVIOUR(Ped PedIndex, float duration)
	{
		PED::SET_PED_INJURED_ON_GROUND_BEHAVIOUR(PedIndex, duration);
	}

	static void LUA_NATIVE_PED_DISABLE_PED_INJURED_ON_GROUND_BEHAVIOUR(Ped PedIndex)
	{
		PED::DISABLE_PED_INJURED_ON_GROUND_BEHAVIOUR(PedIndex);
	}

	static void LUA_NATIVE_PED_0x028E7B3BBA0BD2FC_(Ped ped)
	{
		PED::_0x028E7B3BBA0BD2FC(ped);
	}

	static bool LUA_NATIVE_PED_0xFA8C10DCE0706D43_(Ped ped)
	{
		auto retval = (bool)PED::_0xFA8C10DCE0706D43(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PED_ANIMAL_DETECTION_MODIFIER_(Ped ped, float modifier)
	{
		PED::_SET_PED_ANIMAL_DETECTION_MODIFIER(ped, modifier);
	}

	static float LUA_NATIVE_PED_0x2BA9D7BF629F920C_(Ped ped)
	{
		auto retval = PED::_0x2BA9D7BF629F920C(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PED_SEEING_RANGE(Ped PedIndex, float SeeingRange)
	{
		PED::SET_PED_SEEING_RANGE(PedIndex, SeeingRange);
	}

	static float LUA_NATIVE_PED_0x900CA00CE703E1E2_(Ped ped)
	{
		auto retval = PED::_0x900CA00CE703E1E2(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PED_HEARING_RANGE(Ped PedIndex, float HearingRange)
	{
		PED::SET_PED_HEARING_RANGE(PedIndex, HearingRange);
	}

	static void LUA_NATIVE_PED_SET_PED_VISUAL_FIELD_MIN_ANGLE(Ped PedIndex, float fAngle)
	{
		PED::SET_PED_VISUAL_FIELD_MIN_ANGLE(PedIndex, fAngle);
	}

	static void LUA_NATIVE_PED_SET_PED_VISUAL_FIELD_MAX_ANGLE(Ped PedIndex, float fAngle)
	{
		PED::SET_PED_VISUAL_FIELD_MAX_ANGLE(PedIndex, fAngle);
	}

	static void LUA_NATIVE_PED_SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(Ped PedIndex, float fDistance)
	{
		PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(PedIndex, fDistance);
	}

	static void LUA_NATIVE_PED_SET_PED_VISUAL_FIELD_CENTER_ANGLE(Ped PedIndex, float fAngle)
	{
		PED::SET_PED_VISUAL_FIELD_CENTER_ANGLE(PedIndex, fAngle);
	}

	static void LUA_NATIVE_PED_0x9AB33CB5834885B3_(Ped ped, float p1, float p2, float p3, float p4)
	{
		PED::_0x9AB33CB5834885B3(ped, p1, p2, p3, p4);
	}

	static void LUA_NATIVE_PED_0x899DFA0009AC93DE_(Ped ped, float p1)
	{
		PED::_0x899DFA0009AC93DE(ped, p1);
	}

	static void LUA_NATIVE_PED_0x3A5697B80FED5EBE_(Ped ped, float p1, float p2, float p3, float p4)
	{
		PED::_0x3A5697B80FED5EBE(ped, p1, p2, p3, p4);
	}

	static void LUA_NATIVE_PED_SET_PED_STEALTH_MOVEMENT(Ped PedIndex, bool bStealth, Any p2, Any p3)
	{
		PED::SET_PED_STEALTH_MOVEMENT(PedIndex, bStealth, p2, p3);
	}

	static bool LUA_NATIVE_PED_GET_PED_STEALTH_MOVEMENT(Ped PedIndex)
	{
		auto retval = (bool)PED::GET_PED_STEALTH_MOVEMENT(PedIndex);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PED_CROUCH_MOVEMENT_(Ped ped, bool state, int p2, bool immediately)
	{
		PED::_SET_PED_CROUCH_MOVEMENT(ped, state, p2, immediately);
	}

	static bool LUA_NATIVE_PED_GET_PED_CROUCH_MOVEMENT(Ped ped)
	{
		auto retval = (bool)PED::GET_PED_CROUCH_MOVEMENT(ped);
		return retval;
	}

	static bool LUA_NATIVE_PED_GET_PED_IS_DOING_COMBAT_ROLL(Ped ped)
	{
		auto retval = (bool)PED::GET_PED_IS_DOING_COMBAT_ROLL(ped);
		return retval;
	}

	static int LUA_NATIVE_PED_CREATE_GROUP(int DefaultTaskType)
	{
		auto retval = PED::CREATE_GROUP(DefaultTaskType);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PED_AS_GROUP_LEADER(Ped PedIndex, int GroupUniqueID, bool p2)
	{
		PED::SET_PED_AS_GROUP_LEADER(PedIndex, GroupUniqueID, p2);
	}

	static void LUA_NATIVE_PED_SET_PED_AS_GROUP_MEMBER(Ped PedIndex, int GroupUniqueID)
	{
		PED::SET_PED_AS_GROUP_MEMBER(PedIndex, GroupUniqueID);
	}

	static void LUA_NATIVE_PED_SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(Ped PedIndex, int GroupUniqueID, bool bEnabled)
	{
		PED::SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(PedIndex, GroupUniqueID, bEnabled);
	}

	static void LUA_NATIVE_PED_REMOVE_GROUP(int UniqueGroupID)
	{
		PED::REMOVE_GROUP(UniqueGroupID);
	}

	static void LUA_NATIVE_PED_REMOVE_PED_FROM_GROUP(Ped PedIndex)
	{
		PED::REMOVE_PED_FROM_GROUP(PedIndex);
	}

	static bool LUA_NATIVE_PED_IS_PED_GROUP_MEMBER(Ped PedIndex, int UniqueGroupID, bool p2)
	{
		auto retval = (bool)PED::IS_PED_GROUP_MEMBER(PedIndex, UniqueGroupID, p2);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_GROUP_LEADER_(Ped ped, int groupId)
	{
		auto retval = (bool)PED::_IS_PED_GROUP_LEADER(ped, groupId);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_HANGING_ON_TO_VEHICLE(Ped PedIndex)
	{
		auto retval = (bool)PED::IS_PED_HANGING_ON_TO_VEHICLE(PedIndex);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_GROUP_SEPARATION_RANGE(int UniqueGroupID, float SeparationRange)
	{
		PED::SET_GROUP_SEPARATION_RANGE(UniqueGroupID, SeparationRange);
	}

	static void LUA_NATIVE_PED_0x89E59DBD15E21177_(int groupId, int p1)
	{
		PED::_0x89E59DBD15E21177(groupId, p1);
	}

	static bool LUA_NATIVE_PED_IS_PED_PRONE(Ped PedIndex)
	{
		auto retval = (bool)PED::IS_PED_PRONE(PedIndex);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_INVESTIGATING_(Ped ped)
	{
		auto retval = (bool)PED::_IS_PED_INVESTIGATING(ped);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_IN_COMBAT(Ped PedIndex, Ped TargetPedIndex)
	{
		auto retval = (bool)PED::IS_PED_IN_COMBAT(PedIndex, TargetPedIndex);
		return retval;
	}

	static bool LUA_NATIVE_PED_CAN_PED_IN_COMBAT_SEE_TARGET(Ped PedIndex, Ped TargetPedIndex)
	{
		auto retval = (bool)PED::CAN_PED_IN_COMBAT_SEE_TARGET(PedIndex, TargetPedIndex);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_JACKING(Ped PedIndex)
	{
		auto retval = (bool)PED::IS_PED_JACKING(PedIndex);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_BEING_JACKED(Ped PedIndex)
	{
		auto retval = (bool)PED::IS_PED_BEING_JACKED(PedIndex);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_BEING_STUNNED(Ped PedIndex, Hash WeaponType)
	{
		auto retval = (bool)PED::IS_PED_BEING_STUNNED(PedIndex, WeaponType);
		return retval;
	}

	static Ped LUA_NATIVE_PED_GET_PEDS_JACKER(Ped PedIndex)
	{
		auto retval = PED::GET_PEDS_JACKER(PedIndex);
		return retval;
	}

	static Ped LUA_NATIVE_PED_GET_JACK_TARGET(Ped PedIndex)
	{
		auto retval = PED::GET_JACK_TARGET(PedIndex);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_FLEEING(Ped PedIndex)
	{
		auto retval = (bool)PED::IS_PED_FLEEING(PedIndex);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_IN_COVER(Ped PedIndex, bool p1, bool p2)
	{
		auto retval = (bool)PED::IS_PED_IN_COVER(PedIndex, p1, p2);
		return retval;
	}

	static bool LUA_NATIVE_PED_0x2DD4E0E26DFAD97D_(Ped ped1, Ped ped2, float p2)
	{
		auto retval = (bool)PED::_0x2DD4E0E26DFAD97D(ped1, ped2, p2);
		return retval;
	}

	static bool LUA_NATIVE_PED_PED_WAS_KILLED_BY_HEADSHOT_(Ped ped)
	{
		auto retval = (bool)PED::_PED_WAS_KILLED_BY_HEADSHOT(ped);
		return retval;
	}

	static bool LUA_NATIVE_PED_PED_DUELING_DID_PLAYER_HEADSHOT_OPPONENT_(Ped ped)
	{
		auto retval = (bool)PED::_PED_DUELING_DID_PLAYER_HEADSHOT_OPPONENT(ped);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_IN_COVER_FACING_LEFT(Ped PedIndex)
	{
		auto retval = (bool)PED::IS_PED_IN_COVER_FACING_LEFT(PedIndex);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_GOING_INTO_COVER(Ped PedIndex)
	{
		auto retval = (bool)PED::IS_PED_GOING_INTO_COVER(PedIndex);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_RESPONDING_TO_THREAT(Ped ped)
	{
		auto retval = (bool)PED::IS_PED_RESPONDING_TO_THREAT(ped);
		return retval;
	}

	static Hash LUA_NATIVE_PED_GET_ACTIVE_DYNAMIC_SCENARIO_2_(Ped ped)
	{
		auto retval = PED::_GET_ACTIVE_DYNAMIC_SCENARIO_2(ped);
		return retval;
	}

	static Hash LUA_NATIVE_PED_GET_ACTIVE_DYNAMIC_SCENARIO_(Ped ped)
	{
		auto retval = PED::_GET_ACTIVE_DYNAMIC_SCENARIO(ped);
		return retval;
	}

	static bool LUA_NATIVE_PED_GIVE_PED_SCENARIO_PROP_(Ped ped, Object object, sol::stack_object conditionalAnim, sol::stack_object p3, sol::stack_object p4, bool p5)
	{
		auto retval = (bool)PED::_GIVE_PED_SCENARIO_PROP(ped, object, conditionalAnim.is<const char*>() ? conditionalAnim.as<const char*>() : nullptr, p3.is<const char*>() ? p3.as<const char*>() : nullptr, p4.is<const char*>() ? p4.as<const char*>() : nullptr, p5);
		return retval;
	}

	static bool LUA_NATIVE_PED_GIVE_PED_HASH_SCENARIO_PROP(Ped ped, Object object, sol::stack_object conditionalAnim, Hash scenarioType, Hash p4, bool p5)
	{
		auto retval = (bool)PED::GIVE_PED_HASH_SCENARIO_PROP(ped, object, conditionalAnim.is<const char*>() ? conditionalAnim.as<const char*>() : nullptr, scenarioType, p4, p5);
		return retval;
	}

	static bool LUA_NATIVE_PED_GIVE_PED_SCENARIO_PROP_DYNAMIC_(Ped ped, Object object, sol::stack_object p2, sol::stack_object p3, bool p4)
	{
		auto retval = (bool)PED::_GIVE_PED_SCENARIO_PROP_DYNAMIC(ped, object, p2.is<const char*>() ? p2.as<const char*>() : nullptr, p3.is<const char*>() ? p3.as<const char*>() : nullptr, p4);
		return retval;
	}

	static Any LUA_NATIVE_PED_REQUEST_PROP_SCENARIO_PED_(Ped ped, Object object, sol::stack_object p2, sol::stack_object p3, sol::stack_object p4, bool p5)
	{
		auto retval = PED::_REQUEST_PROP_SCENARIO_PED(ped, object, p2.is<const char*>() ? p2.as<const char*>() : nullptr, p3.is<const char*>() ? p3.as<const char*>() : nullptr, p4.is<const char*>() ? p4.as<const char*>() : nullptr, p5);
		return retval;
	}

	static Any LUA_NATIVE_PED_REQUEST_PED_FOR_SCENARIO_TYPE_(Ped ped, Object object, sol::stack_object p2, Hash scenarioType, sol::stack_object p4, bool p5)
	{
		auto retval = PED::_REQUEST_PED_FOR_SCENARIO_TYPE(ped, object, p2.is<const char*>() ? p2.as<const char*>() : nullptr, scenarioType, p4.is<const char*>() ? p4.as<const char*>() : nullptr, p5);
		return retval;
	}

	static Entity LUA_NATIVE_PED_GET_PED_REGISTER_PROP_(Ped ped, sol::stack_object propName, bool detachProp)
	{
		auto retval = PED::_GET_PED_REGISTER_PROP(ped, propName.is<const char*>() ? propName.as<const char*>() : nullptr, detachProp);
		return retval;
	}

	static int LUA_NATIVE_PED_GET_SEAT_PED_IS_TRYING_TO_ENTER(Ped PedIndex)
	{
		auto retval = PED::GET_SEAT_PED_IS_TRYING_TO_ENTER(PedIndex);
		return retval;
	}

	static Entity LUA_NATIVE_PED_GET_PED_SOURCE_OF_DEATH(Ped PedIndex)
	{
		auto retval = PED::GET_PED_SOURCE_OF_DEATH(PedIndex);
		return retval;
	}

	static Hash LUA_NATIVE_PED_GET_PED_CAUSE_OF_DEATH(Ped PedIndex)
	{
		auto retval = PED::GET_PED_CAUSE_OF_DEATH(PedIndex);
		return retval;
	}

	static int LUA_NATIVE_PED_GET_PED_TIME_OF_DEATH(Ped PedIndex)
	{
		auto retval = PED::GET_PED_TIME_OF_DEATH(PedIndex);
		return retval;
	}

	static int LUA_NATIVE_PED_COUNT_PEDS_IN_COMBAT_WITH_TARGET(Ped TargetIndex, int flag)
	{
		auto retval = PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(TargetIndex, flag);
		return retval;
	}

	static int LUA_NATIVE_PED_GET_PEDS_IN_COMBAT_WITH_TARGET_(Ped ped, ItemSet itemset, int flag)
	{
		auto retval = PED::_GET_PEDS_IN_COMBAT_WITH_TARGET(ped, itemset, flag);
		return retval;
	}

	static int LUA_NATIVE_PED_COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(Ped TargetIndex, float vecSearchCenterX, float vecSearchCenterY, float vecSearchCenterZ, float fSearchRadius, int flag)
	{
		auto retval = PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(TargetIndex, vecSearchCenterX, vecSearchCenterY, vecSearchCenterZ, fSearchRadius, flag);
		return retval;
	}

	static Entity LUA_NATIVE_PED_GET_CURRENT_TARGET_FOR_PED(Ped ped)
	{
		auto retval = PED::GET_CURRENT_TARGET_FOR_PED(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Ped PedIndex, Hash relGroup)
	{
		PED::SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(PedIndex, relGroup);
	}

	static Hash LUA_NATIVE_PED_GET_DEFAULT_RELATIONSHIP_GROUP_HASH_(Hash modelHash)
	{
		auto retval = PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(modelHash);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PED_RELATIONSHIP_GROUP_HASH(Ped PedIndex, Hash relGroup)
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(PedIndex, relGroup);
	}

	static void LUA_NATIVE_PED_SET_RELATIONSHIP_BETWEEN_GROUPS(int RelationshipType, Hash relGroup, Hash otherRelGroup)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(RelationshipType, relGroup, otherRelGroup);
	}

	static void LUA_NATIVE_PED_CLEAR_RELATIONSHIP_BETWEEN_GROUPS(int RelationshipType, Hash relGroup, Hash otherRelGroup)
	{
		PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(RelationshipType, relGroup, otherRelGroup);
	}

	static std::tuple<bool, Hash> LUA_NATIVE_PED_ADD_RELATIONSHIP_GROUP(sol::stack_object sName, Hash group)
	{
		std::tuple<bool, Hash> return_values;
		std::get<0>(return_values) = (bool)PED::ADD_RELATIONSHIP_GROUP(sName.is<const char*>() ? sName.as<const char*>() : nullptr, &group);
		std::get<1>(return_values) = group;

		return return_values;
	}

	static void LUA_NATIVE_PED_REMOVE_RELATIONSHIP_GROUP(Hash group)
	{
		PED::REMOVE_RELATIONSHIP_GROUP(group);
	}

	static int LUA_NATIVE_PED_GET_RELATIONSHIP_BETWEEN_PEDS(Ped PedIndex, Ped SecondPedIndex)
	{
		auto retval = PED::GET_RELATIONSHIP_BETWEEN_PEDS(PedIndex, SecondPedIndex);
		return retval;
	}

	static Hash LUA_NATIVE_PED_GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Ped PedIndex)
	{
		auto retval = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(PedIndex);
		return retval;
	}

	static Hash LUA_NATIVE_PED_GET_PED_RELATIONSHIP_GROUP_HASH(Ped PedIndex)
	{
		auto retval = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PedIndex);
		return retval;
	}

	static int LUA_NATIVE_PED_GET_RELATIONSHIP_BETWEEN_GROUPS(Hash relGroupA, Hash relGroupB)
	{
		auto retval = PED::GET_RELATIONSHIP_BETWEEN_GROUPS(relGroupA, relGroupB);
		return retval;
	}

	static void LUA_NATIVE_PED_0xDC91F22F09BC6C2F_(Hash group, bool p1)
	{
		PED::_0xDC91F22F09BC6C2F(group, p1);
	}

	static void LUA_NATIVE_PED_0x9629FAF6460D35CB_(Hash group, bool p1)
	{
		PED::_0x9629FAF6460D35CB(group, p1);
	}

	static void LUA_NATIVE_PED_0x4E68C7EF706DF35D_(Ped ped, float x, float y, float z, float p4, Hash relationshipGroup)
	{
		PED::_0x4E68C7EF706DF35D(ped, x, y, z, p4, relationshipGroup);
	}

	static int LUA_NATIVE_PED_0x3ACCE14DFA6BA8C2_(Ped ped, int p1, float x, float y, float z, float p5, ItemSet itemset)
	{
		auto retval = PED::_0x3ACCE14DFA6BA8C2(ped, p1, x, y, z, p5, itemset);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PED_TO_INFORM_RESPECTED_FRIENDS(Ped PedIndex, float Distance, int MaximumNumber)
	{
		PED::SET_PED_TO_INFORM_RESPECTED_FRIENDS(PedIndex, Distance, MaximumNumber);
	}

	static bool LUA_NATIVE_PED_0x40C9155AF8BC13F3_(Ped ped)
	{
		auto retval = (bool)PED::_0x40C9155AF8BC13F3(ped);
		return retval;
	}

	static std::tuple<int, int> LUA_NATIVE_PED_0xF4860514AD354226_(ScrHandle shockingEvent, float x, float y, float z, float p4, int p5)
	{
		std::tuple<int, int> return_values;
		std::get<0>(return_values) = PED::_0xF4860514AD354226(shockingEvent, x, y, z, p4, &p5);
		std::get<1>(return_values) = p5;

		return return_values;
	}

	static bool LUA_NATIVE_PED_IS_PED_RESPONDING_TO_EVENT(Ped PedIndex, Hash EventType)
	{
		auto retval = (bool)PED::IS_PED_RESPONDING_TO_EVENT(PedIndex, EventType);
		return retval;
	}

	static Entity LUA_NATIVE_PED_0x5E9FAF6C513347B4_(Ped ped, Hash eventType)
	{
		auto retval = PED::_0x5E9FAF6C513347B4(ped, eventType);
		return retval;
	}

	static Any LUA_NATIVE_PED_0x326F7951EF0D7F75_(Ped ped, Hash eventType)
	{
		auto retval = PED::_0x326F7951EF0D7F75(ped, eventType);
		return retval;
	}

	static Entity LUA_NATIVE_PED_0xE76687023D8C8505_(Hash perscharModel, int p1)
	{
		auto retval = PED::_0xE76687023D8C8505(perscharModel, p1);
		return retval;
	}

	static std::tuple<bool, Vector3> LUA_NATIVE_PED_0xCB8F4C9343EBE240_(Ped ped, Hash eventType, Vector3 coords)
	{
		std::tuple<bool, Vector3> return_values;
		std::get<0>(return_values) = (bool)PED::_0xCB8F4C9343EBE240(ped, eventType, &coords);
		std::get<1>(return_values) = coords;

		return return_values;
	}

	static void LUA_NATIVE_PED_SET_PED_FIRING_PATTERN(Ped PedIndex, Hash FiringPatternHash)
	{
		PED::SET_PED_FIRING_PATTERN(PedIndex, FiringPatternHash);
	}

	static void LUA_NATIVE_PED_SET_PED_FIRING_PATTERN_2_(Ped ped, Hash patternHash)
	{
		PED::_SET_PED_FIRING_PATTERN_2(ped, patternHash);
	}

	static void LUA_NATIVE_PED_SET_PED_FIRING_PATTERN_3_(Ped ped, Hash patternHash)
	{
		PED::_SET_PED_FIRING_PATTERN_3(ped, patternHash);
	}

	static void LUA_NATIVE_PED_SET_PED_SHOOT_RATE(Ped PedIndex, int ShootRate)
	{
		PED::SET_PED_SHOOT_RATE(PedIndex, ShootRate);
	}

	static void LUA_NATIVE_PED_0x3C529A827998F9B3_(Ped ped, int p1, int p2)
	{
		PED::_0x3C529A827998F9B3(ped, p1, p2);
	}

	static void LUA_NATIVE_PED_0x1F44B7E283C09EDE_(Ped ped, float p1, int p2)
	{
		PED::_0x1F44B7E283C09EDE(ped, p1, p2);
	}

	static void LUA_NATIVE_PED_SET_COMBAT_FLOAT(Ped PedIndex, int combatAttribute, float fNewValue)
	{
		PED::SET_COMBAT_FLOAT(PedIndex, combatAttribute, fNewValue);
	}

	static float LUA_NATIVE_PED_GET_COMBAT_FLOAT(Ped PedIndex, int combatAttribute)
	{
		auto retval = PED::GET_COMBAT_FLOAT(PedIndex, combatAttribute);
		return retval;
	}

	static std::tuple<int, int> LUA_NATIVE_PED_GET_GROUP_SIZE(int UniqueGroupID, int ReturnHasLeader, int ReturnNumberOfFollowers)
	{
		std::tuple<int, int> return_values;
		PED::GET_GROUP_SIZE(UniqueGroupID, &ReturnHasLeader, &ReturnNumberOfFollowers);
		std::get<0>(return_values) = ReturnHasLeader;
		std::get<1>(return_values) = ReturnNumberOfFollowers;

		return return_values;
	}

	static bool LUA_NATIVE_PED_DOES_GROUP_EXIST(int UniqueGroupID)
	{
		auto retval = (bool)PED::DOES_GROUP_EXIST(UniqueGroupID);
		return retval;
	}

	static bool LUA_NATIVE_PED_0x0455546F23FF08E4_(int groupId)
	{
		auto retval = (bool)PED::_0x0455546F23FF08E4(groupId);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_GROUP_LOCALLY_CONTROLLED(int groupId)
	{
		auto retval = (bool)PED::IS_GROUP_LOCALLY_CONTROLLED(groupId);
		return retval;
	}

	static int LUA_NATIVE_PED_GET_PED_GROUP_INDEX(Ped PedIndex)
	{
		auto retval = PED::GET_PED_GROUP_INDEX(PedIndex);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_IN_GROUP(Ped PedIndex)
	{
		auto retval = (bool)PED::IS_PED_IN_GROUP(PedIndex);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_LEADING_ANY_GROUP_(Ped ped)
	{
		auto retval = (bool)PED::_IS_PED_LEADING_ANY_GROUP(ped);
		return retval;
	}

	static Player LUA_NATIVE_PED_GET_PLAYER_PED_IS_FOLLOWING(Ped PedIndex)
	{
		auto retval = PED::GET_PLAYER_PED_IS_FOLLOWING(PedIndex);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_GROUP_FORMATION(int UniqueGroupID, int GroupFormation)
	{
		PED::SET_GROUP_FORMATION(UniqueGroupID, GroupFormation);
	}

	static int LUA_NATIVE_PED_GET_GROUP_FORMATION_(int groupId)
	{
		auto retval = PED::_GET_GROUP_FORMATION(groupId);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_GROUP_FORMATION_SPACING(int UniqueGroupID, float Spacing, float AdjustSpeedMinDist, float AdjustSpeedMaxDist)
	{
		PED::SET_GROUP_FORMATION_SPACING(UniqueGroupID, Spacing, AdjustSpeedMinDist, AdjustSpeedMaxDist);
	}

	static void LUA_NATIVE_PED_RESET_GROUP_FORMATION_DEFAULT_SPACING(int UniqueGroupID)
	{
		PED::RESET_GROUP_FORMATION_DEFAULT_SPACING(UniqueGroupID);
	}

	static bool LUA_NATIVE_PED_0xB05CC690CDE8A4A9_(int groupId, float p1)
	{
		auto retval = (bool)PED::_0xB05CC690CDE8A4A9(groupId, p1);
		return retval;
	}

	static void LUA_NATIVE_PED_ADD_CUSTOM_FORMATION_LOCATION(int groupId, float x, float y, float z, int position)
	{
		PED::ADD_CUSTOM_FORMATION_LOCATION(groupId, x, y, z, position);
	}

	static bool LUA_NATIVE_PED_ADD_FORMATION_LOCATION(int groupId, float p1, float p2, float p3)
	{
		auto retval = (bool)PED::ADD_FORMATION_LOCATION(groupId, p1, p2, p3);
		return retval;
	}

	static bool LUA_NATIVE_PED_SET_FORMATION_POSITIONS_TARGET_RADIUS(int groupId, float radius)
	{
		auto retval = (bool)PED::SET_FORMATION_POSITIONS_TARGET_RADIUS(groupId, radius);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_FORMATION_AUTO_ASSIGN_POSITION_(int groupId, bool toggle)
	{
		PED::_SET_FORMATION_AUTO_ASSIGN_POSITION(groupId, toggle);
	}

	static void LUA_NATIVE_PED_SET_PED_FORMATION_POSITION_(Ped ped, int position, bool toggle)
	{
		PED::_SET_PED_FORMATION_POSITION(ped, position, toggle);
	}

	static int LUA_NATIVE_PED_0x8AF8E647D6B2A649_(int groupId, Ped ped)
	{
		auto retval = PED::_0x8AF8E647D6B2A649(groupId, ped);
		return retval;
	}

	static void LUA_NATIVE_PED_0x87C2724A56F66020_(Ped ped)
	{
		PED::_0x87C2724A56F66020(ped);
	}

	static void LUA_NATIVE_PED_0xD5BD1B5318A81994_(int groupId, bool p1)
	{
		PED::_0xD5BD1B5318A81994(groupId, p1);
	}

	static void LUA_NATIVE_PED_0x9BBEAF8B0C007F1E_(Ped ped, bool p1)
	{
		PED::_0x9BBEAF8B0C007F1E(ped, p1);
	}

	static void LUA_NATIVE_PED_0xC99F104BDF8C7F5A_(Ped ped, bool p1)
	{
		PED::_0xC99F104BDF8C7F5A(ped, p1);
	}

	static void LUA_NATIVE_PED_0x02E741E19E39628C_(Ped ped, float p1)
	{
		PED::_0x02E741E19E39628C(ped, p1);
	}

	static void LUA_NATIVE_PED_0x97C475212B327666_(int groupId, bool p1)
	{
		PED::_0x97C475212B327666(groupId, p1);
	}

	static void LUA_NATIVE_PED_0x154B7E841AC7412F_(int groupId, bool p1)
	{
		PED::_0x154B7E841AC7412F(groupId, p1);
	}

	static void LUA_NATIVE_PED_0x8AFCCC0F18D70018_(int groupId, bool p1)
	{
		PED::_0x8AFCCC0F18D70018(groupId, p1);
	}

	static void LUA_NATIVE_PED_0xE1103300F3456DE7_(int groupId, float p1, float p2)
	{
		PED::_0xE1103300F3456DE7(groupId, p1, p2);
	}

	static void LUA_NATIVE_PED_0xA8A95CECB1906EA2_(int groupId, bool p1)
	{
		PED::_0xA8A95CECB1906EA2(groupId, p1);
	}

	static void LUA_NATIVE_PED_0xDDFAD4DEAA7FA362_(int groupId, float p1, float p2, float p3, float p4)
	{
		PED::_0xDDFAD4DEAA7FA362(groupId, p1, p2, p3, p4);
	}

	static void LUA_NATIVE_PED_0x966DE09688A1DE39_(int groupId, float p1, float p2, float p3, float p4)
	{
		PED::_0x966DE09688A1DE39(groupId, p1, p2, p3, p4);
	}

	static void LUA_NATIVE_PED_0x7E5185B979706210_(int groupId, int p1)
	{
		PED::_0x7E5185B979706210(groupId, p1);
	}

	static void LUA_NATIVE_PED_0x40C3524D4ED83554_(int groupId, bool p1)
	{
		PED::_0x40C3524D4ED83554(groupId, p1);
	}

	static void LUA_NATIVE_PED_0x86FAFC18E3D4380C_(int groupId, bool p1)
	{
		PED::_0x86FAFC18E3D4380C(groupId, p1);
	}

	static void LUA_NATIVE_PED_0x07EA5B053FA60AC7_(int groupId, bool p1)
	{
		PED::_0x07EA5B053FA60AC7(groupId, p1);
	}

	static void LUA_NATIVE_PED_0xF9CBD46433E36713_(Ped ped, Entity targetEntity, float p2, float p3, float p4, float p5, float p6, float p7, float p8, sol::stack_object p9)
	{
		PED::_0xF9CBD46433E36713(ped, targetEntity, p2, p3, p4, p5, p6, p7, p8, p9.is<const char*>() ? p9.as<const char*>() : nullptr);
	}

	static Vehicle LUA_NATIVE_PED_GET_VEHICLE_PED_IS_USING(Ped PedIndex)
	{
		auto retval = PED::GET_VEHICLE_PED_IS_USING(PedIndex);
		return retval;
	}

	static Vehicle LUA_NATIVE_PED_GET_VEHICLE_PED_IS_ENTERING(Ped PedIndex)
	{
		auto retval = PED::GET_VEHICLE_PED_IS_ENTERING(PedIndex);
		return retval;
	}

	static Vehicle LUA_NATIVE_PED_GET_VEHICLE_DRAFT_HORSE_IS_ATTACHED_TO_(Ped horse)
	{
		auto retval = PED::_GET_VEHICLE_DRAFT_HORSE_IS_ATTACHED_TO(horse);
		return retval;
	}

	static Vehicle LUA_NATIVE_PED_GET_LAST_VEHICLE_DRAFT_HORSE_WAS_ATTACHED_TO_(Ped horse)
	{
		auto retval = PED::_GET_LAST_VEHICLE_DRAFT_HORSE_WAS_ATTACHED_TO(horse);
		return retval;
	}

	static int LUA_NATIVE_PED_GET_SEAT_PED_IS_USING(Ped ped)
	{
		auto retval = PED::GET_SEAT_PED_IS_USING(ped);
		return retval;
	}

	static Entity LUA_NATIVE_PED_GET_TRANSPORT_PED_IS_SEATED_ON_(Ped ped)
	{
		auto retval = PED::_GET_TRANSPORT_PED_IS_SEATED_ON(ped);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_ENTERING_ANY_TRANSPORT(Ped ped)
	{
		auto retval = (bool)PED::IS_PED_ENTERING_ANY_TRANSPORT(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PED_GRAVITY(Ped PedIndex, bool isAffectedByGravity)
	{
		PED::SET_PED_GRAVITY(PedIndex, isAffectedByGravity);
	}

	static void LUA_NATIVE_PED_0x96595B36D6A2279B_(Ped animal, bool toggle)
	{
		PED::_0x96595B36D6A2279B(animal, toggle);
	}

	static void LUA_NATIVE_PED_SET_PED_IMMERSION_FLAG_(Ped ped, bool toggle)
	{
		PED::_SET_PED_IMMERSION_FLAG(ped, toggle);
	}

	static void LUA_NATIVE_PED_0xA90684ED185CCB4B_(Ped animal, bool p1, float p2, float p3)
	{
		PED::_0xA90684ED185CCB4B(animal, p1, p2, p3);
	}

	static void LUA_NATIVE_PED_FAKE_SET_PED_LOCO_INJURED_(Ped ped, bool enabled)
	{
		PED::_FAKE_SET_PED_LOCO_INJURED(ped, enabled);
	}

	static void LUA_NATIVE_PED_FORCE_PED_DEATH_(Ped ped, Ped pedKiller, Hash weapon)
	{
		PED::_FORCE_PED_DEATH(ped, pedKiller, weapon);
	}

	static void LUA_NATIVE_PED_APPLY_DAMAGE_TO_PED(Ped PedIndex, int Damage, bool DamageArmourFlag, int boneId, Entity InstigatorIndex)
	{
		PED::APPLY_DAMAGE_TO_PED(PedIndex, Damage, DamageArmourFlag, boneId, InstigatorIndex);
	}

	static void LUA_NATIVE_PED_0xBAD2A311667A50D7_(Ped ped, bool p1)
	{
		PED::_0xBAD2A311667A50D7(ped, p1);
	}

	static int LUA_NATIVE_PED_GET_PED_TYPE(Ped PedIndex)
	{
		auto retval = PED::GET_PED_TYPE(PedIndex);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PED_AS_COP(Ped PedIndex, bool bSetRelationshipGroup)
	{
		PED::SET_PED_AS_COP(PedIndex, bSetRelationshipGroup);
	}

	static void LUA_NATIVE_PED_0x405180B14DA5A935_(Ped ped, bool p1)
	{
		PED::_0x405180B14DA5A935(ped, p1);
	}

	static void LUA_NATIVE_PED_SET_PED_INTERACTION_PERSONALITY_(Ped ped, Hash personality)
	{
		PED::_SET_PED_INTERACTION_PERSONALITY(ped, personality);
	}

	static Hash LUA_NATIVE_PED_GET_PED_INTERACTION_PERSONALITY_(Ped ped)
	{
		auto retval = PED::_GET_PED_INTERACTION_PERSONALITY(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PED_PERSONALITY_(Ped ped, Hash personality)
	{
		PED::_SET_PED_PERSONALITY(ped, personality);
	}

	static void LUA_NATIVE_PED_0x329772C47DBB2FBC_(Ped ped)
	{
		PED::_0x329772C47DBB2FBC(ped);
	}

	static bool LUA_NATIVE_PED_GET_IS_PED_IN_DISPUTE_WITH_PED_(Ped ped, Ped pedInDisputeWith)
	{
		auto retval = (bool)PED::_GET_IS_PED_IN_DISPUTE_WITH_PED(ped, pedInDisputeWith);
		return retval;
	}

	static bool LUA_NATIVE_PED_0x94132D7C8D3575C4_(Ped ped)
	{
		auto retval = (bool)PED::_0x94132D7C8D3575C4(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_0x8AF46E5159A5B620_(Ped ped, Hash speechParams)
	{
		PED::_0x8AF46E5159A5B620(ped, speechParams);
	}

	static void LUA_NATIVE_PED_0x45FEA6D5539BD474_(Ped ped, sol::stack_object p1)
	{
		PED::_0x45FEA6D5539BD474(ped, p1.is<const char*>() ? p1.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_PED_SET_PED_INTERACTION_POSITIVE_RESPONSE_(Ped ped, sol::stack_object speech)
	{
		PED::_SET_PED_INTERACTION_POSITIVE_RESPONSE(ped, speech.is<const char*>() ? speech.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_PED_0xE37ACEE15AC50C7E_(Ped ped, sol::stack_object p1)
	{
		PED::_0xE37ACEE15AC50C7E(ped, p1.is<const char*>() ? p1.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_PED_SET_PED_INTERACTION_NEGATIVE_RESPONSE_(Ped ped, sol::stack_object speech)
	{
		PED::_SET_PED_INTERACTION_NEGATIVE_RESPONSE(ped, speech.is<const char*>() ? speech.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_PED_0x41C23A8E6B344867_(Ped ped, sol::stack_object p1)
	{
		PED::_0x41C23A8E6B344867(ped, p1.is<const char*>() ? p1.as<const char*>() : nullptr);
	}

	static bool LUA_NATIVE_PED_GET_IS_PED_RESPONDING_TO_POSITIVE_INTERACTION(Ped ped, Player player)
	{
		auto retval = (bool)PED::GET_IS_PED_RESPONDING_TO_POSITIVE_INTERACTION(ped, player);
		return retval;
	}

	static bool LUA_NATIVE_PED_GET_IS_PED_RESPONDING_TO_NEGATIVE_INTERACTION(Ped ped, Player player)
	{
		auto retval = (bool)PED::GET_IS_PED_RESPONDING_TO_NEGATIVE_INTERACTION(ped, player);
		return retval;
	}

	static void LUA_NATIVE_PED_0xA7DC9266ED6A4E51_(Ped ped)
	{
		PED::_0xA7DC9266ED6A4E51(ped);
	}

	static Any LUA_NATIVE_PED_0x89816B58C3466262_(Ped ped)
	{
		auto retval = PED::_0x89816B58C3466262(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_0x97B06669AC569003_(Ped ped1, Ped ped2)
	{
		PED::_0x97B06669AC569003(ped1, ped2);
	}

	static void LUA_NATIVE_PED_0x85F500F4E24CA43E_(Ped ped, float p1)
	{
		PED::_0x85F500F4E24CA43E(ped, p1);
	}

	static void LUA_NATIVE_PED_0x9B9B9FA0EA283E3D_(Ped ped, float p1)
	{
		PED::_0x9B9B9FA0EA283E3D(ped, p1);
	}

	static void LUA_NATIVE_PED_0xEC60D1D225BC50AA_(Ped ped, float p1)
	{
		PED::_0xEC60D1D225BC50AA(ped, p1);
	}

	static void LUA_NATIVE_PED_0x12F2D161BF4031FC_(Ped ped, float p1)
	{
		PED::_0x12F2D161BF4031FC(ped, p1);
	}

	static void LUA_NATIVE_PED_0x0ADA3EC589E1736E_()
	{
		PED::_0x0ADA3EC589E1736E();
	}

	static bool LUA_NATIVE_PED_GET_IS_PED_BEING_ROBBED_(Ped ped, Player player, bool trueUntilPlayerPocketsItem)
	{
		auto retval = (bool)PED::_GET_IS_PED_BEING_ROBBED(ped, player, trueUntilPlayerPocketsItem);
		return retval;
	}

	static bool LUA_NATIVE_PED_0xD55DB4466D00A258_(Ped legendaryAnimal)
	{
		auto retval = (bool)PED::_0xD55DB4466D00A258(legendaryAnimal);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PED_MAX_HEALTH(Ped PedIndex, int MaxHealth)
	{
		PED::SET_PED_MAX_HEALTH(PedIndex, MaxHealth);
	}

	static int LUA_NATIVE_PED_GET_PED_MAX_HEALTH(Ped PedIndex)
	{
		auto retval = PED::GET_PED_MAX_HEALTH(PedIndex);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PED_HEALTH_CONFIG_(Ped ped, Hash configHash)
	{
		PED::_SET_PED_HEALTH_CONFIG(ped, configHash);
	}

	static void LUA_NATIVE_PED_INIT_PED_DEFAULT_HEALTH(Ped ped)
	{
		PED::INIT_PED_DEFAULT_HEALTH(ped);
	}

	static void LUA_NATIVE_PED_SET_PED_MAX_TIME_IN_WATER(Ped PedIndex, float fMaxTime)
	{
		PED::SET_PED_MAX_TIME_IN_WATER(PedIndex, fMaxTime);
	}

	static void LUA_NATIVE_PED_SET_PED_MAX_TIME_UNDERWATER(Ped PedIndex, float fMaxTime)
	{
		PED::SET_PED_MAX_TIME_UNDERWATER(PedIndex, fMaxTime);
	}

	static void LUA_NATIVE_PED_0xAF041C10756C30FB_(Ped ped, bool p1, bool p2, bool p3)
	{
		PED::_0xAF041C10756C30FB(ped, p1, p2, p3);
	}

	static void LUA_NATIVE_PED_0x5AF24CA9C974E51A_(Ped ped1, Ped ped2)
	{
		PED::_0x5AF24CA9C974E51A(ped1, ped2);
	}

	static void LUA_NATIVE_PED_SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Ped PedIndex, int CanBeKnockedOffFlag)
	{
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PedIndex, CanBeKnockedOffFlag);
	}

	static bool LUA_NATIVE_PED_CAN_KNOCK_PED_OFF_VEHICLE(Ped PedIndex)
	{
		auto retval = (bool)PED::CAN_KNOCK_PED_OFF_VEHICLE(PedIndex);
		return retval;
	}

	static void LUA_NATIVE_PED_KNOCK_PED_OFF_VEHICLE(Ped PedIndex)
	{
		PED::KNOCK_PED_OFF_VEHICLE(PedIndex);
	}

	static Ped LUA_NATIVE_PED_GET_PED_AS_GROUP_MEMBER(int UniqueGroupID, int MemberNumber)
	{
		auto retval = PED::GET_PED_AS_GROUP_MEMBER(UniqueGroupID, MemberNumber);
		return retval;
	}

	static Ped LUA_NATIVE_PED_GET_PED_AS_GROUP_LEADER(int UniqueGroupID)
	{
		auto retval = PED::GET_PED_AS_GROUP_LEADER(UniqueGroupID);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PED_KEEP_TASK(Ped PedIndex, bool KeepTasksFlag)
	{
		PED::SET_PED_KEEP_TASK(PedIndex, KeepTasksFlag);
	}

	static bool LUA_NATIVE_PED_IS_PED_SWIMMING(Ped PedIndex)
	{
		auto retval = (bool)PED::IS_PED_SWIMMING(PedIndex);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_SWIMMING_UNDER_WATER(Ped PedIndex)
	{
		auto retval = (bool)PED::IS_PED_SWIMMING_UNDER_WATER(PedIndex);
		return retval;
	}

	static bool LUA_NATIVE_PED_0xDC88D06719070C39_(Ped ped)
	{
		auto retval = (bool)PED::_0xDC88D06719070C39(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_CREATE_RANDOM_COPS(bool CreateRandomCopsFlag)
	{
		PED::SET_CREATE_RANDOM_COPS(CreateRandomCopsFlag);
	}

	static bool LUA_NATIVE_PED_IS_PED_IN_ANY_TRAIN(Ped PedIndex)
	{
		auto retval = (bool)PED::IS_PED_IN_ANY_TRAIN(PedIndex);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_GETTING_INTO_A_VEHICLE(Ped PedIndex)
	{
		auto retval = (bool)PED::IS_PED_GETTING_INTO_A_VEHICLE(PedIndex);
		return retval;
	}

	static bool LUA_NATIVE_PED_0x550CB89DD7F4FA3D_(Ped ped1, Ped ped2)
	{
		auto retval = (bool)PED::_0x550CB89DD7F4FA3D(ped1, ped2);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_ENABLE_HANDCUFFS(Ped PedIndex, bool bEnable, bool p2)
	{
		PED::SET_ENABLE_HANDCUFFS(PedIndex, bEnable, p2);
	}

	static void LUA_NATIVE_PED_SET_ENABLE_BOUND_ANKLES(Ped PedIndex, bool bEnable)
	{
		PED::SET_ENABLE_BOUND_ANKLES(PedIndex, bEnable);
	}

	static bool LUA_NATIVE_PED_0x8822F139408B8D0A_(Ped ped)
	{
		auto retval = (bool)PED::_0x8822F139408B8D0A(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_0x8822F124788B8D0A_(Ped ped, bool p1)
	{
		PED::_0x8822F124788B8D0A(ped, p1);
	}

	static void LUA_NATIVE_PED_RESET_PED_WEAPON_MOVEMENT_CLIPSET(Ped PedIndex)
	{
		PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(PedIndex);
	}

	static void LUA_NATIVE_PED_SET_PED_GETUP_ANIMATION_(Ped ped, sol::stack_object animName, bool p2)
	{
		PED::_SET_PED_GETUP_ANIMATION(ped, animName.is<const char*>() ? animName.as<const char*>() : nullptr, p2);
	}

	static void LUA_NATIVE_PED_0x88A95BB640FC186F_(Ped ped)
	{
		PED::_0x88A95BB640FC186F(ped);
	}

	static void LUA_NATIVE_PED_RESET_PED_IN_VEHICLE_CONTEXT(Ped PedIndex)
	{
		PED::RESET_PED_IN_VEHICLE_CONTEXT(PedIndex);
	}

	static void LUA_NATIVE_PED_0x878E8104FA27CDAE_(Vehicle vehicle, Hash p1)
	{
		PED::_0x878E8104FA27CDAE(vehicle, p1);
	}

	static void LUA_NATIVE_PED_SET_PED_GESTURE_GROUP(Ped PedIndex, sol::stack_object GestureGroup, int p2)
	{
		PED::SET_PED_GESTURE_GROUP(PedIndex, GestureGroup.is<const char*>() ? GestureGroup.as<const char*>() : nullptr, p2);
	}

	static void LUA_NATIVE_PED_SET_PED_DESIRED_LOCO_FOR_MODEL_(Ped ped, sol::stack_object locomotionArchetype)
	{
		PED::_SET_PED_DESIRED_LOCO_FOR_MODEL(ped, locomotionArchetype.is<const char*>() ? locomotionArchetype.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_PED_CLEAR_PED_DESIRED_LOCO_FOR_MODEL_(Ped ped)
	{
		PED::_CLEAR_PED_DESIRED_LOCO_FOR_MODEL(ped);
	}

	static void LUA_NATIVE_PED_SET_PED_DESIRED_LOCO_MOTION_TYPE_(Ped ped, sol::stack_object locoMotionType)
	{
		PED::_SET_PED_DESIRED_LOCO_MOTION_TYPE(ped, locoMotionType.is<const char*>() ? locoMotionType.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_PED_CLEAR_PED_DESIRED_LOCO_MOTION_TYPE_(Ped ped)
	{
		PED::_CLEAR_PED_DESIRED_LOCO_MOTION_TYPE(ped);
	}

	static void LUA_NATIVE_PED_0x2371C39D4F91C288_(Ped ped)
	{
		PED::_0x2371C39D4F91C288(ped);
	}

	static void LUA_NATIVE_PED_REQUEST_PED_GETUP_ANIMATION_(Ped ped, sol::stack_object getUpType)
	{
		PED::_REQUEST_PED_GETUP_ANIMATION(ped, getUpType.is<const char*>() ? getUpType.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_PED_PED_COWER_IN_PLACE(Ped ped, Ped ped2)
	{
		PED::PED_COWER_IN_PLACE(ped, ped2);
	}

	static void LUA_NATIVE_PED_PED_COWER_MOVE_TO_POINT(Ped ped, float p1, float p2, float p3, Ped ped2, float p5)
	{
		PED::PED_COWER_MOVE_TO_POINT(ped, p1, p2, p3, ped2, p5);
	}

	static void LUA_NATIVE_PED_0x16F798A05BB9E3B5_(Ped ped)
	{
		PED::_0x16F798A05BB9E3B5(ped);
	}

	static void LUA_NATIVE_PED_PED_EMOTIONAL_PRESET_LOCO_MOTION_(Ped ped, sol::stack_object presetName, Ped targetPed, int duration, int flag)
	{
		PED::_PED_EMOTIONAL_PRESET_LOCO_MOTION(ped, presetName.is<const char*>() ? presetName.as<const char*>() : nullptr, targetPed, duration, flag);
	}

	static void LUA_NATIVE_PED_PED_CLEAR_LOCO_MOTION_(Ped ped)
	{
		PED::_PED_CLEAR_LOCO_MOTION(ped);
	}

	static void LUA_NATIVE_PED_0x32CCAD8A981B53D3_(Ped ped)
	{
		PED::_0x32CCAD8A981B53D3(ped);
	}

	static void LUA_NATIVE_PED_SET_PED_DRUNKNESS_(Ped ped, bool enabled, float drunknessLevel)
	{
		PED::_SET_PED_DRUNKNESS(ped, enabled, drunknessLevel);
	}

	static bool LUA_NATIVE_PED_IS_PED_DRUNK_(Ped ped)
	{
		auto retval = (bool)PED::_IS_PED_DRUNK(ped);
		return retval;
	}

	static float LUA_NATIVE_PED_GET_PED_DRUNKNESS_(Ped ped)
	{
		auto retval = PED::_GET_PED_DRUNKNESS(ped);
		return retval;
	}

	static Vector3 LUA_NATIVE_PED_GET_ANIM_INITIAL_OFFSET_POSITION(sol::stack_object pAnimDictName, sol::stack_object pAnimName, float scenePositionX, float scenePositionY, float scenePositionZ, float sceneOrientationX, float sceneOrientationY, float sceneOrientationZ, float phase, int RotOrder)
	{
		auto retval = PED::GET_ANIM_INITIAL_OFFSET_POSITION(pAnimDictName.is<const char*>() ? pAnimDictName.as<const char*>() : nullptr, pAnimName.is<const char*>() ? pAnimName.as<const char*>() : nullptr, scenePositionX, scenePositionY, scenePositionZ, sceneOrientationX, sceneOrientationY, sceneOrientationZ, phase, RotOrder);
		return retval;
	}

	static Vector3 LUA_NATIVE_PED_GET_ANIM_INITIAL_OFFSET_ROTATION(sol::stack_object pAnimDictName, sol::stack_object pAnimName, float scenePositionX, float scenePositionY, float scenePositionZ, float sceneOrientationX, float sceneOrientationY, float sceneOrientationZ, float phase, int RotOrder)
	{
		auto retval = PED::GET_ANIM_INITIAL_OFFSET_ROTATION(pAnimDictName.is<const char*>() ? pAnimDictName.as<const char*>() : nullptr, pAnimName.is<const char*>() ? pAnimName.as<const char*>() : nullptr, scenePositionX, scenePositionY, scenePositionZ, sceneOrientationX, sceneOrientationY, sceneOrientationZ, phase, RotOrder);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PED_RANDOM_COMPONENT_VARIATION(Ped PedIndex, int race)
	{
		PED::SET_PED_RANDOM_COMPONENT_VARIATION(PedIndex, race);
	}

	static void LUA_NATIVE_PED_KNOCK_OFF_PED_PROP(Ped PedIndex, bool bDamaged, bool bHats, bool bGlasses, bool bHelmets)
	{
		PED::KNOCK_OFF_PED_PROP(PedIndex, bDamaged, bHats, bGlasses, bHelmets);
	}

	static void LUA_NATIVE_PED_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Ped PedIndex, bool bBlockEvents)
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PedIndex, bBlockEvents);
	}

	static bool LUA_NATIVE_PED_GET_BLOCKING_OF_NON_TEMPORARY_EVENTS_(Ped ped)
	{
		auto retval = (bool)PED::_GET_BLOCKING_OF_NON_TEMPORARY_EVENTS(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_0xC17A94CC8FC3C61A_(Entity entity, int boneId, float p2, float p3, float p4)
	{
		PED::_0xC17A94CC8FC3C61A(entity, boneId, p2, p3, p4);
	}

	static void LUA_NATIVE_PED_SET_PED_SCALE_(Ped ped, float scale)
	{
		PED::_SET_PED_SCALE(ped, scale);
	}

	static float LUA_NATIVE_PED_0x134775B093AD5C38_(Ped ped)
	{
		auto retval = PED::_0x134775B093AD5C38(ped);
		return retval;
	}

	static float LUA_NATIVE_PED_GET_PED_HEIGHT_(Ped ped)
	{
		auto retval = PED::_GET_PED_HEIGHT(ped);
		return retval;
	}

	static int LUA_NATIVE_PED_GET_PED_MODEL_SIZE_FROM_HASH_(Hash modelHash)
	{
		auto retval = PED::_GET_PED_MODEL_SIZE_FROM_HASH(modelHash);
		return retval;
	}

	static void LUA_NATIVE_PED_REGISTER_TARGET(Ped PedIndex, Ped TargetPedIndex, bool p2)
	{
		PED::REGISTER_TARGET(PedIndex, TargetPedIndex, p2);
	}

	static void LUA_NATIVE_PED_REGISTER_HATED_TARGETS_IN_AREA_(Ped ped, float x, float y, float z, float radius)
	{
		PED::_REGISTER_HATED_TARGETS_IN_AREA(ped, x, y, z, radius);
	}

	static void LUA_NATIVE_PED_REGISTER_HATED_TARGETS_AROUND_PED(Ped PedIndex, float Radius)
	{
		PED::REGISTER_HATED_TARGETS_AROUND_PED(PedIndex, Radius);
	}

	static bool LUA_NATIVE_PED_IS_TARGET_(Ped ped, Ped targetPed)
	{
		auto retval = (bool)PED::_IS_TARGET(ped, targetPed);
		return retval;
	}

	static void LUA_NATIVE_PED_REMOVE_TARGET_(Ped ped, Ped targetPed)
	{
		PED::_REMOVE_TARGET(ped, targetPed);
	}

	static std::tuple<bool, Ped> LUA_NATIVE_PED_GET_CLOSEST_PED(float VecCentreCoorsX, float VecCentreCoorsY, float VecCentreCoorsZ, float Range, bool bScanRandomPeds, bool bScanMissionPeds, Ped ClosestPedIndex, bool p7, bool p8, bool p9, int ExclusionPedType)
	{
		std::tuple<bool, Ped> return_values;
		std::get<0>(return_values) = (bool)PED::GET_CLOSEST_PED(VecCentreCoorsX, VecCentreCoorsY, VecCentreCoorsZ, Range, bScanRandomPeds, bScanMissionPeds, &ClosestPedIndex, p7, p8, p9, ExclusionPedType);
		std::get<1>(return_values) = ClosestPedIndex;

		return return_values;
	}

	static bool LUA_NATIVE_PED_CAN_PED_RAGDOLL(Ped PedIndex)
	{
		auto retval = (bool)PED::CAN_PED_RAGDOLL(PedIndex);
		return retval;
	}

	static bool LUA_NATIVE_PED_SET_PED_TO_RAGDOLL(Ped PedIndex, int MinTime, int MaxTime, int StartTask, bool bAbortIfInjured, bool bAbortIfDead, sol::stack_object nmTaskMessageParameterName)
	{
		auto retval = (bool)PED::SET_PED_TO_RAGDOLL(PedIndex, MinTime, MaxTime, StartTask, bAbortIfInjured, bAbortIfDead, nmTaskMessageParameterName.is<const char*>() ? nmTaskMessageParameterName.as<const char*>() : nullptr);
		return retval;
	}

	static bool LUA_NATIVE_PED_SET_PED_TO_RAGDOLL_WITH_FALL(Ped PedIndex, int MinTime, int MaxTime, int nFallType, float vecDirectionX, float vecDirectionY, float vecDirectionZ, float fGroundHeight, float vecGrab1X, float vecGrab1Y, float vecGrab1Z, float vecGrab2X, float vecGrab2Y, float vecGrab2Z)
	{
		auto retval = (bool)PED::SET_PED_TO_RAGDOLL_WITH_FALL(PedIndex, MinTime, MaxTime, nFallType, vecDirectionX, vecDirectionY, vecDirectionZ, fGroundHeight, vecGrab1X, vecGrab1Y, vecGrab1Z, vecGrab2X, vecGrab2Y, vecGrab2Z);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PED_RAGDOLL_ON_COLLISION(Ped PedIndex, bool RagdollOnCollision, bool p2)
	{
		PED::SET_PED_RAGDOLL_ON_COLLISION(PedIndex, RagdollOnCollision, p2);
	}

	static void LUA_NATIVE_PED_SET_PED_TO_DISABLE_RAGDOLL_(Ped ped, bool toggle)
	{
		PED::_SET_PED_TO_DISABLE_RAGDOLL(ped, toggle);
	}

	static bool LUA_NATIVE_PED_IS_PED_RAGDOLL(Ped PedIndex)
	{
		auto retval = (bool)PED::IS_PED_RAGDOLL(PedIndex);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_RUNNING_RAGDOLL_TASK(Ped PedIndex)
	{
		auto retval = (bool)PED::IS_PED_RUNNING_RAGDOLL_TASK(PedIndex);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PED_RAGDOLL_FORCE_FALL(Ped PedIndex)
	{
		PED::SET_PED_RAGDOLL_FORCE_FALL(PedIndex);
	}

	static void LUA_NATIVE_PED_0x8CB2553C559102C1_(Ped ped, int p1, bool p2)
	{
		PED::_0x8CB2553C559102C1(ped, p1, p2);
	}

	static void LUA_NATIVE_PED_0xFD3C31A2E45671E7_(Ped ped, int p1)
	{
		PED::_0xFD3C31A2E45671E7(ped, p1);
	}

	static void LUA_NATIVE_PED_RESET_PED_RAGDOLL_TIMER(Ped PedIndex)
	{
		PED::RESET_PED_RAGDOLL_TIMER(PedIndex);
	}

	static void LUA_NATIVE_PED_SET_PED_CAN_RAGDOLL(Ped PedIndex, bool bUnlock)
	{
		PED::SET_PED_CAN_RAGDOLL(PedIndex, bUnlock);
	}

	static bool LUA_NATIVE_PED_0x3AEC4A410ECAF30D_(Ped ped)
	{
		auto retval = (bool)PED::_0x3AEC4A410ECAF30D(ped);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_RUNNING_MOBILE_PHONE_TASK(Ped PedIndex)
	{
		auto retval = (bool)PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(PedIndex);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_RAGDOLL_BLOCKING_FLAGS(Ped PedIndex, int flags)
	{
		PED::SET_RAGDOLL_BLOCKING_FLAGS(PedIndex, flags);
	}

	static void LUA_NATIVE_PED_CLEAR_RAGDOLL_BLOCKING_FLAGS(Ped PedIndex, int flags)
	{
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(PedIndex, flags);
	}

	static void LUA_NATIVE_PED_0x9F933E0985E12C51_(Ped ped, float p1, float p2, float p3)
	{
		PED::_0x9F933E0985E12C51(ped, p1, p2, p3);
	}

	static void LUA_NATIVE_PED_0x88B2026A3B0BE33D_(Ped ped, float p1)
	{
		PED::_0x88B2026A3B0BE33D(ped, p1);
	}

	static void LUA_NATIVE_PED_SET_PED_DEFENSIVE_AREA_VOLUME(Ped ped, Volume volume, bool p2, bool p3, bool p4)
	{
		PED::SET_PED_DEFENSIVE_AREA_VOLUME(ped, volume, p2, p3, p4);
	}

	static void LUA_NATIVE_PED_SET_PED_SPHERE_DEFENSIVE_AREA(Ped PedIndex, float vCentreX, float vCentreY, float vCentreZ, float fRadius, bool p5, bool p6, bool p7)
	{
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(PedIndex, vCentreX, vCentreY, vCentreZ, fRadius, p5, p6, p7);
	}

	static void LUA_NATIVE_PED_SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_ENTITY_(Ped ped, Entity entity, float x, float y, float z, float radius, int p6, bool p7)
	{
		PED::_SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_ENTITY(ped, entity, x, y, z, radius, p6, p7);
	}

	static void LUA_NATIVE_PED_SET_PED_DEFENSIVE_AREA_TO_ANGLED_AREA_(Ped ped, float x1, float y1, float z1, float x2, float y2, float z2, Any p7, bool p8, bool p9, Entity entity, bool p11)
	{
		PED::_SET_PED_DEFENSIVE_AREA_TO_ANGLED_AREA(ped, x1, y1, z1, x2, y2, z2, p7, p8, p9, entity, p11);
	}

	static void LUA_NATIVE_PED_SET_PED_DEFENSIVE_AREA_DIRECTION(Ped PedIndex, float vDefendFromPosX, float vDefendFromPosY, float vDefendFromPosZ, bool bApplyToSecondaryDefensiveArea)
	{
		PED::SET_PED_DEFENSIVE_AREA_DIRECTION(PedIndex, vDefendFromPosX, vDefendFromPosY, vDefendFromPosZ, bApplyToSecondaryDefensiveArea);
	}

	static void LUA_NATIVE_PED_REMOVE_PED_DEFENSIVE_AREA(Ped PedIndex, bool bRemoveSecondaryDefensiveArea)
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(PedIndex, bRemoveSecondaryDefensiveArea);
	}

	static Vector3 LUA_NATIVE_PED_GET_PED_DEFENSIVE_AREA_POSITION(Ped PedIndex, bool bApplyToSecondaryDefensiveArea)
	{
		auto retval = PED::GET_PED_DEFENSIVE_AREA_POSITION(PedIndex, bApplyToSecondaryDefensiveArea);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_DEFENSIVE_AREA_ACTIVE(Ped PedIndex, bool bCheckSecondaryDefensiveArea)
	{
		auto retval = (bool)PED::IS_PED_DEFENSIVE_AREA_ACTIVE(PedIndex, bCheckSecondaryDefensiveArea);
		return retval;
	}

	static Volume LUA_NATIVE_PED_GET_PED_DEFENSIVE_VOLUME_(Ped ped, Any p1)
	{
		auto retval = PED::_GET_PED_DEFENSIVE_VOLUME(ped, p1);
		return retval;
	}

	static void LUA_NATIVE_PED_0x4EC4EA2F72B36358_(Ped ped, bool p1)
	{
		PED::_0x4EC4EA2F72B36358(ped, p1);
	}

	static void LUA_NATIVE_PED_0xCF0B19806473D324_(Ped ped, float x, float y, float z)
	{
		PED::_0xCF0B19806473D324(ped, x, y, z);
	}

	static void LUA_NATIVE_PED_0xB4B7C92FCE7347B7_(Ped ped)
	{
		PED::_0xB4B7C92FCE7347B7(ped);
	}

	static void LUA_NATIVE_PED_REVIVE_INJURED_PED(Ped PedIndex)
	{
		PED::REVIVE_INJURED_PED(PedIndex);
	}

	static void LUA_NATIVE_PED_RESURRECT_PED(Ped PedIndex)
	{
		PED::RESURRECT_PED(PedIndex);
	}

	static void LUA_NATIVE_PED_SET_PED_NAME_DEBUG(Ped PedIndex, sol::stack_object debugName)
	{
		PED::SET_PED_NAME_DEBUG(PedIndex, debugName.is<const char*>() ? debugName.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_PED_SPECIAL_FUNCTION_DO_NOT_USE(Ped PedIndex, bool bNoCollisionUntilClear)
	{
		PED::SPECIAL_FUNCTION_DO_NOT_USE(PedIndex, bNoCollisionUntilClear);
	}

	static bool LUA_NATIVE_PED_0x7020839C7302D8AC_(Ped ped)
	{
		auto retval = (bool)PED::_0x7020839C7302D8AC(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_0xE1AADD0055D76603_(Ped ped, Entity entity, int boneIndex1, int boneIndex2, float x, float y, float z, float p7, bool p8, bool p9, int p10)
	{
		PED::_0xE1AADD0055D76603(ped, entity, boneIndex1, boneIndex2, x, y, z, p7, p8, p9, p10);
	}

	static void LUA_NATIVE_PED_0x5A1A929C8B729B4A_(Ped ped)
	{
		PED::_0x5A1A929C8B729B4A(ped);
	}

	static void LUA_NATIVE_PED_0x97A38B65EBDA3D50_(Ped ped, bool p1)
	{
		PED::_0x97A38B65EBDA3D50(ped, p1);
	}

	static bool LUA_NATIVE_PED_0x06A10B4D7F50B0C3_(Ped ped)
	{
		auto retval = (bool)PED::_0x06A10B4D7F50B0C3(ped);
		return retval;
	}

	static bool LUA_NATIVE_PED_0x88A5564B19C15391_(Ped ped)
	{
		auto retval = (bool)PED::_0x88A5564B19C15391(ped);
		return retval;
	}

	static int LUA_NATIVE_PED_0x354CA4DDDEEC397A_(Ped ped)
	{
		auto retval = PED::_0x354CA4DDDEEC397A(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_0xFEA6126C34DF2532_(Ped ped, bool p1)
	{
		PED::_0xFEA6126C34DF2532(ped, p1);
	}

	static void LUA_NATIVE_PED_0xA967D6A8ED2D713B_(Ped ped, bool p1)
	{
		PED::_0xA967D6A8ED2D713B(ped, p1);
	}

	static void LUA_NATIVE_PED_APPLY_PED_BLOOD_SPECIFIC(Ped pedIndex, int component, float u, float v, float rotation, float scale, int forcedFrame, float preAge, sol::stack_object bloodName)
	{
		PED::APPLY_PED_BLOOD_SPECIFIC(pedIndex, component, u, v, rotation, scale, forcedFrame, preAge, bloodName.is<const char*>() ? bloodName.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_PED_0x58D32261AE0F0843_(Ped ped, int boneId, float p2, float p3, float p4, float p5, float p6, float p7, sol::stack_object p8)
	{
		PED::_0x58D32261AE0F0843(ped, boneId, p2, p3, p4, p5, p6, p7, p8.is<const char*>() ? p8.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_PED_0x735662994E60A710_(Ped ped, bool p1)
	{
		PED::_0x735662994E60A710(ped, p1);
	}

	static void LUA_NATIVE_PED_0x91BAB9E064F036CD_(Any p0, Any p1)
	{
		PED::_0x91BAB9E064F036CD(p0, p1);
	}

	static void LUA_NATIVE_PED_0x897934E868EDDD6C_(Ped ped, int p1, float p2, float p3, float p4)
	{
		PED::_0x897934E868EDDD6C(ped, p1, p2, p3, p4);
	}

	static void LUA_NATIVE_PED_SET_PED_ACTIVATE_WOUND_EFFECT_(Ped ped, int p1, int boneId, float moveWoundLeftRight, float bloodFountainPressure, float yaw, float bloodFountainDirection, float bloodFountainPulse, float p8, float p9)
	{
		PED::_SET_PED_ACTIVATE_WOUND_EFFECT(ped, p1, boneId, moveWoundLeftRight, bloodFountainPressure, yaw, bloodFountainDirection, bloodFountainPulse, p8, p9);
	}

	static void LUA_NATIVE_PED_UPDATE_PED_WOUND_EFFECT_(Ped ped, float value)
	{
		PED::_UPDATE_PED_WOUND_EFFECT(ped, value);
	}

	static void LUA_NATIVE_PED_APPLY_PED_DAMAGE_PACK(Ped PedIndex, sol::stack_object packName, float preAge, float alpha_param)
	{
		PED::APPLY_PED_DAMAGE_PACK(PedIndex, packName.is<const char*>() ? packName.as<const char*>() : nullptr, preAge, alpha_param);
	}

	static void LUA_NATIVE_PED_CLEAR_PED_BLOOD_DAMAGE(Ped pedIndex)
	{
		PED::CLEAR_PED_BLOOD_DAMAGE(pedIndex);
	}

	static void LUA_NATIVE_PED_CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Ped PedIndex, int zone)
	{
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(PedIndex, zone);
	}

	static void LUA_NATIVE_PED_CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Ped PedIndex, int zone, sol::stack_object damageDecalName)
	{
		PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(PedIndex, zone, damageDecalName.is<const char*>() ? damageDecalName.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_PED_CLEAR_PED_BLOOD_DAMAGE_FACIAL_(Ped ped, int p1)
	{
		PED::_CLEAR_PED_BLOOD_DAMAGE_FACIAL(ped, p1);
	}

	static void LUA_NATIVE_PED_0x34C11114887150FD_(Any p0, Any p1)
	{
		PED::_0x34C11114887150FD(p0, p1);
	}

	static void LUA_NATIVE_PED_0xD8544F6260F5F01E_(Ped ped, int p1)
	{
		PED::_0xD8544F6260F5F01E(ped, p1);
	}

	static void LUA_NATIVE_PED_0xEB8886E1065654CD_(Ped ped, int p1, sol::stack_object p2, float p3)
	{
		PED::_0xEB8886E1065654CD(ped, p1, p2.is<const char*>() ? p2.as<const char*>() : nullptr, p3);
	}

	static Ped LUA_NATIVE_PED_FADE_AND_DESTROY_PED(Ped ped)
	{
		PED::FADE_AND_DESTROY_PED(&ped);
		return ped;
	}

	static bool LUA_NATIVE_PED_IS_PED_QUEUED_FOR_DELETION_(Ped ped)
	{
		auto retval = (bool)PED::_IS_PED_QUEUED_FOR_DELETION(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_CLEAR_PED_WETNESS(Ped pedIndex)
	{
		PED::CLEAR_PED_WETNESS(pedIndex);
	}

	static void LUA_NATIVE_PED_SET_PED_WETNESS_HEIGHT(Ped pedIndex, float height)
	{
		PED::SET_PED_WETNESS_HEIGHT(pedIndex, height);
	}

	static void LUA_NATIVE_PED_0xF9CFF5BB70E8A2CB_(Ped ped, float p1)
	{
		PED::_0xF9CFF5BB70E8A2CB(ped, p1);
	}

	static void LUA_NATIVE_PED_SET_PED_WETNESS_ENABLED_THIS_FRAME(Ped pedIndex)
	{
		PED::SET_PED_WETNESS_ENABLED_THIS_FRAME(pedIndex);
	}

	static void LUA_NATIVE_PED_0xA7A806677F8DE138_(Ped ped)
	{
		PED::_0xA7A806677F8DE138(ped);
	}

	static void LUA_NATIVE_PED_0xA064BBABB064446F_(Any p0)
	{
		PED::_0xA064BBABB064446F(p0);
	}

	static void LUA_NATIVE_PED_CLEAR_PED_ENV_DIRT(Ped pedIndex)
	{
		PED::CLEAR_PED_ENV_DIRT(pedIndex);
	}

	static void LUA_NATIVE_PED_SET_PED_SWEAT(Ped pedIndex, float amount)
	{
		PED::SET_PED_SWEAT(pedIndex, amount);
	}

	static void LUA_NATIVE_PED_CLEAR_PED_DECORATIONS(Ped PedIndex)
	{
		PED::CLEAR_PED_DECORATIONS(PedIndex);
	}

	static bool LUA_NATIVE_PED_WAS_PED_SKELETON_UPDATED(Ped PedIndex)
	{
		auto retval = (bool)PED::WAS_PED_SKELETON_UPDATED(PedIndex);
		return retval;
	}

	static Vector3 LUA_NATIVE_PED_GET_PED_BONE_COORDS(Ped PedIndex, int bone, float vecOffsetX, float vecOffsetY, float vecOffsetZ)
	{
		auto retval = PED::GET_PED_BONE_COORDS(PedIndex, bone, vecOffsetX, vecOffsetY, vecOffsetZ);
		return retval;
	}

	static int LUA_NATIVE_PED_ADD_SCENARIO_BLOCKING_AREA(float vMinX, float vMinY, float vMinZ, float vMaxX, float vMaxY, float vMaxZ, bool bNetwork, int blockingFlags)
	{
		auto retval = PED::ADD_SCENARIO_BLOCKING_AREA(vMinX, vMinY, vMinZ, vMaxX, vMaxY, vMaxZ, bNetwork, blockingFlags);
		return retval;
	}

	static void LUA_NATIVE_PED_REMOVE_SCENARIO_BLOCKING_AREAS()
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	}

	static void LUA_NATIVE_PED_REMOVE_SCENARIO_BLOCKING_AREA(int ScenarioBlockingIndex, bool bNetwork)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(ScenarioBlockingIndex, bNetwork);
	}

	static Any LUA_NATIVE_PED_ADD_SCENARIO_BLOCKING_VOLUME_(Volume volume, bool p1, int flag)
	{
		auto retval = PED::_ADD_SCENARIO_BLOCKING_VOLUME(volume, p1, flag);
		return retval;
	}

	static Any LUA_NATIVE_PED_0x6F46F8ACB44C4FC1_(Any p0)
	{
		auto retval = PED::_0x6F46F8ACB44C4FC1(p0);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_SCENARIO_BLOCKING_AREA_VALID_(Any p0)
	{
		auto retval = (bool)PED::_IS_SCENARIO_BLOCKING_AREA_VALID(p0);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_USING_SCENARIO_HASH(Ped ped, Hash scenarioHash)
	{
		auto retval = (bool)PED::IS_PED_USING_SCENARIO_HASH(ped, scenarioHash);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_USING_ANY_SCENARIO(Ped PedIndex)
	{
		auto retval = (bool)PED::IS_PED_USING_ANY_SCENARIO(PedIndex);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_USING_THIS_SCENARIO(Ped ped, int scenario)
	{
		auto retval = (bool)PED::IS_PED_USING_THIS_SCENARIO(ped, scenario);
		return retval;
	}

	static bool LUA_NATIVE_PED_CAN_PED_USE_SCENARIO_POINT_(Ped ped, int scenario, Any p2, Any p3, Any p4)
	{
		auto retval = (bool)PED::_CAN_PED_USE_SCENARIO_POINT(ped, scenario, p2, p3, p4);
		return retval;
	}

	static bool LUA_NATIVE_PED_0x1148F706CF4EBDDA_(Ped ped, Hash p1, int p2)
	{
		auto retval = (bool)PED::_0x1148F706CF4EBDDA(ped, p1, p2);
		return retval;
	}

	static bool LUA_NATIVE_PED_SET_PED_PANIC_EXIT_SCENARIO(Ped PedIndex, float vDangerPositionX, float vDangerPositionY, float vDangerPositionZ)
	{
		auto retval = (bool)PED::SET_PED_PANIC_EXIT_SCENARIO(PedIndex, vDangerPositionX, vDangerPositionY, vDangerPositionZ);
		return retval;
	}

	static void LUA_NATIVE_PED_TOGGLE_SCENARIO_PED_COWER_IN_PLACE(Ped PedIndex, bool bStart)
	{
		PED::TOGGLE_SCENARIO_PED_COWER_IN_PLACE(PedIndex, bStart);
	}

	static void LUA_NATIVE_PED_0xD8CEEED54C672B5D_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		PED::_0xD8CEEED54C672B5D(p0, p1, p2, p3, p4, p5, p6);
	}

	static bool LUA_NATIVE_PED_SET_PED_SHOULD_PLAY_DIRECTED_NORMAL_SCENARIO_EXIT(Ped PedIndex, float vReactPositionX, float vReactPositionY, float vReactPositionZ)
	{
		auto retval = (bool)PED::SET_PED_SHOULD_PLAY_DIRECTED_NORMAL_SCENARIO_EXIT(PedIndex, vReactPositionX, vReactPositionY, vReactPositionZ);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(Ped PedIndex)
	{
		PED::SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(PedIndex);
	}

	static void LUA_NATIVE_PED_SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Ped PedIndex)
	{
		PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(PedIndex);
	}

	static bool LUA_NATIVE_PED_SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT(Ped PedIndex, float vDangerPositionX, float vDangerPositionY, float vDangerPositionZ, int lookIntensity)
	{
		auto retval = (bool)PED::SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT(PedIndex, vDangerPositionX, vDangerPositionY, vDangerPositionZ, lookIntensity);
		return retval;
	}

	static bool LUA_NATIVE_PED_SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT(Ped ped, float x, float y, float z, int lookIntensity)
	{
		auto retval = (bool)PED::SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT(ped, x, y, z, lookIntensity);
		return retval;
	}

	static bool LUA_NATIVE_PED_SET_PED_SHOULD_PLAY_EMOTIONAL_SCENARIO_EXIT(Ped ped, float x, float y, float z, int lookIntensity, bool p5)
	{
		auto retval = (bool)PED::SET_PED_SHOULD_PLAY_EMOTIONAL_SCENARIO_EXIT(ped, x, y, z, lookIntensity, p5);
		return retval;
	}

	static bool LUA_NATIVE_PED_SET_PED_SHOULD_PLAY_QUICK_SCENARIO_EXIT(Ped ped, float x, float y, float z, int lookIntensity, bool p5)
	{
		auto retval = (bool)PED::SET_PED_SHOULD_PLAY_QUICK_SCENARIO_EXIT(ped, x, y, z, lookIntensity, p5);
		return retval;
	}

	static bool LUA_NATIVE_PED_0xF9331B3A314EB49D_(Ped ped)
	{
		auto retval = (bool)PED::_0xF9331B3A314EB49D(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_0xE735A7DA22E88359_(Any p0)
	{
		PED::_0xE735A7DA22E88359(p0);
	}

	static Any LUA_NATIVE_PED_0x82CB0F3F0C7785E5_(Any p0)
	{
		auto retval = PED::_0x82CB0F3F0C7785E5(p0);
		return retval;
	}

	static void LUA_NATIVE_PED_0xCA95C156C14B2054_(Any p0, Any p1)
	{
		PED::_0xCA95C156C14B2054(p0, p1);
	}

	static void LUA_NATIVE_PED_SET_FACIAL_IDLE_ANIM_OVERRIDE(Ped PedIndex, sol::stack_object pOverrideIdleClipName, sol::stack_object pOverrideIdleClipDictName)
	{
		PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PedIndex, pOverrideIdleClipName.is<const char*>() ? pOverrideIdleClipName.as<const char*>() : nullptr, pOverrideIdleClipDictName.is<const char*>() ? pOverrideIdleClipDictName.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_PED_CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Ped PedIndex)
	{
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PedIndex);
	}

	static void LUA_NATIVE_PED_REQUEST_PED_FACIAL_MOOD_THIS_FRAME_(Ped ped, Hash mood, int p2)
	{
		PED::_REQUEST_PED_FACIAL_MOOD_THIS_FRAME(ped, mood, p2);
	}

	static void LUA_NATIVE_PED_0xD2F0FE8805D91647_(Any p0, Any p1)
	{
		PED::_0xD2F0FE8805D91647(p0, p1);
	}

	static void LUA_NATIVE_PED_SET_PED_CAN_PLAY_GESTURE_ANIMS(Ped PedIndex, bool p1, Any p2)
	{
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(PedIndex, p1, p2);
	}

	static void LUA_NATIVE_PED_0x7EDB3C766B0D073F_(Ped ped)
	{
		PED::_0x7EDB3C766B0D073F(ped);
	}

	static void LUA_NATIVE_PED_SET_PED_CAN_PLAY_AMBIENT_ANIMS(Ped PedIndex, bool bAlllowAmbientAnims)
	{
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PedIndex, bAlllowAmbientAnims);
	}

	static void LUA_NATIVE_PED_SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(Ped PedIndex, bool bAlllowAmbientAnims)
	{
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(PedIndex, bAlllowAmbientAnims);
	}

	static void LUA_NATIVE_PED_0x4F63433CE3C08230_(Ped ped, bool p1)
	{
		PED::_0x4F63433CE3C08230(ped, p1);
	}

	static void LUA_NATIVE_PED_SET_PED_CAN_ARM_IK(Ped PedIndex, bool bEnableIK)
	{
		PED::SET_PED_CAN_ARM_IK(PedIndex, bEnableIK);
	}

	static void LUA_NATIVE_PED_SET_PED_CAN_UNK_BODYPART_IK_(Ped ped, bool toggle)
	{
		PED::_SET_PED_CAN_UNK_BODYPART_IK(ped, toggle);
	}

	static void LUA_NATIVE_PED_SET_PED_CAN_HEAD_IK(Ped PedIndex, bool bEnableIK)
	{
		PED::SET_PED_CAN_HEAD_IK(PedIndex, bEnableIK);
	}

	static void LUA_NATIVE_PED_SET_PED_CAN_LEG_IK(Ped PedIndex, bool bEnableIK)
	{
		PED::SET_PED_CAN_LEG_IK(PedIndex, bEnableIK);
	}

	static void LUA_NATIVE_PED_SET_PED_CAN_TORSO_IK(Ped PedIndex, bool bEnableIK)
	{
		PED::SET_PED_CAN_TORSO_IK(PedIndex, bEnableIK);
	}

	static void LUA_NATIVE_PED_SET_PED_CAN_TORSO_REACT_IK(Ped PedIndex, bool bEnableIK)
	{
		PED::SET_PED_CAN_TORSO_REACT_IK(PedIndex, bEnableIK);
	}

	static void LUA_NATIVE_PED_SET_PED_CAN_TORSO_VEHICLE_IK(Ped PedIndex, bool bEnableIK)
	{
		PED::SET_PED_CAN_TORSO_VEHICLE_IK(PedIndex, bEnableIK);
	}

	static void LUA_NATIVE_PED_SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Ped PedIndex, bool bAllowAutoConversationLookAts)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(PedIndex, bAllowAutoConversationLookAts);
	}

	static bool LUA_NATIVE_PED_IS_PED_HEADTRACKING_PED(Ped FirstPedIndex, Ped SecondPedIndex)
	{
		auto retval = (bool)PED::IS_PED_HEADTRACKING_PED(FirstPedIndex, SecondPedIndex);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_HEADTRACKING_ENTITY(Ped PedIndex, Entity EntityIndex)
	{
		auto retval = (bool)PED::IS_PED_HEADTRACKING_ENTITY(PedIndex, EntityIndex);
		return retval;
	}

	static void LUA_NATIVE_PED_DISABLE_AMBIENT_LOOK_AT_REQUESTS_(Any p0, Any p1)
	{
		PED::_DISABLE_AMBIENT_LOOK_AT_REQUESTS(p0, p1);
	}

	static void LUA_NATIVE_PED_DISABLE_ALL_LOOK_AT_REQUESTS_(Ped ped, int p1)
	{
		PED::_DISABLE_ALL_LOOK_AT_REQUESTS(ped, p1);
	}

	static void LUA_NATIVE_PED_0xCD9E5F94A2F38683_(Ped ped, bool p1)
	{
		PED::_0xCD9E5F94A2F38683(ped, p1);
	}

	static void LUA_NATIVE_PED_SET_PED_CLOTH_PIN_FRAMES(Ped PedIndex, int pinFrames)
	{
		PED::SET_PED_CLOTH_PIN_FRAMES(PedIndex, pinFrames);
	}

	static void LUA_NATIVE_PED_0x1D4636C90BBEFACB_(Ped ped, int p1)
	{
		PED::_0x1D4636C90BBEFACB(ped, p1);
	}

	static void LUA_NATIVE_PED_0xEF371232BC6053E1_(Ped ped)
	{
		PED::_0xEF371232BC6053E1(ped);
	}

	static void LUA_NATIVE_PED_0x86F0B6730C32AC14_(Ped ped, bool p1)
	{
		PED::_0x86F0B6730C32AC14(ped, p1);
	}

	static void LUA_NATIVE_PED_0x8101BA1C0B462412_(Ped ped, int ropeId)
	{
		PED::_0x8101BA1C0B462412(ped, ropeId);
	}

	static void LUA_NATIVE_PED_SET_PED_CONFIG_FLAG(Ped PedIndex, int ConfigFlag, bool bTrue)
	{
		PED::SET_PED_CONFIG_FLAG(PedIndex, ConfigFlag, bTrue);
	}

	static void LUA_NATIVE_PED_SET_PED_RESET_FLAG(Ped PedIndex, int ResetFlag, bool bTrue)
	{
		PED::SET_PED_RESET_FLAG(PedIndex, ResetFlag, bTrue);
	}

	static bool LUA_NATIVE_PED_GET_PED_CONFIG_FLAG(Ped PedIndex, int ConfigFlag, bool DoDeadCheck)
	{
		auto retval = (bool)PED::GET_PED_CONFIG_FLAG(PedIndex, ConfigFlag, DoDeadCheck);
		return retval;
	}

	static bool LUA_NATIVE_PED_GET_PED_RESET_FLAG(Ped PedIndex, int ResetFlag)
	{
		auto retval = (bool)PED::GET_PED_RESET_FLAG(PedIndex, ResetFlag);
		return retval;
	}

	static void LUA_NATIVE_PED_0xC6981AFF6D2A71C2_(Any p0)
	{
		PED::_0xC6981AFF6D2A71C2(p0);
	}

	static void LUA_NATIVE_PED_0xE0FE107AB174D64A_(Any p0, Any p1)
	{
		PED::_0xE0FE107AB174D64A(p0, p1);
	}

	static void LUA_NATIVE_PED_SET_PED_GROUP_MEMBER_PASSENGER_INDEX(Ped PedIndex, int seat)
	{
		PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(PedIndex, seat);
	}

	static std::tuple<bool, Entity> LUA_NATIVE_PED_IS_PED_EVASIVE_DIVING(Ped PedIndex, Entity EntityDivingFromIndex)
	{
		std::tuple<bool, Entity> return_values;
		std::get<0>(return_values) = (bool)PED::IS_PED_EVASIVE_DIVING(PedIndex, &EntityDivingFromIndex);
		std::get<1>(return_values) = EntityDivingFromIndex;

		return return_values;
	}

	static Any LUA_NATIVE_PED_SHOOT_TRIGGER_AT_COORDS_(Ped ped, float x, float y, float z, int p4, float p5, int p6, float p7)
	{
		auto retval = PED::_SHOOT_TRIGGER_AT_COORDS(ped, x, y, z, p4, p5, p6, p7);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_THIS_MODEL_A_HORSE_(Hash model)
	{
		auto retval = (bool)PED::_IS_THIS_MODEL_A_HORSE(model);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PED_MODEL_IS_SUPPRESSED(Hash PedModelHashKey, bool bSurpressModel)
	{
		PED::SET_PED_MODEL_IS_SUPPRESSED(PedModelHashKey, bSurpressModel);
	}

	static bool LUA_NATIVE_PED_IS_PED_MODEL_SUPPRESSED_(Hash model)
	{
		auto retval = (bool)PED::_IS_PED_MODEL_SUPPRESSED(model);
		return retval;
	}

	static void LUA_NATIVE_PED_0x7ABBD9E449E0DB00_(Ped ped, bool p1)
	{
		PED::_0x7ABBD9E449E0DB00(ped, p1);
	}

	static void LUA_NATIVE_PED_SET_PED_DISABLE_KICK_MOVE_(Ped ped, bool disable)
	{
		PED::_SET_PED_DISABLE_KICK_MOVE(ped, disable);
	}

	static void LUA_NATIVE_PED_SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Ped PedIndex, bool bAllow)
	{
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(PedIndex, bAllow);
	}

	static void LUA_NATIVE_PED_0xE6CB36F43A95D75F_(Any p0)
	{
		PED::_0xE6CB36F43A95D75F(p0);
	}

	static void LUA_NATIVE_PED_SET_PED_LEG_IK_MODE(Ped PedIndex, int nLegIkMode)
	{
		PED::SET_PED_LEG_IK_MODE(PedIndex, nLegIkMode);
	}

	static bool LUA_NATIVE_PED_IS_PED_IN_POINT_(Ped ped, float x, float y, float z, float radius, bool p5)
	{
		auto retval = (bool)PED::_IS_PED_IN_POINT(ped, x, y, z, radius, p5);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PED_CAN_BE_LASSOED_(Ped ped, bool toggle)
	{
		PED::_SET_PED_CAN_BE_LASSOED(ped, toggle);
	}

	static void LUA_NATIVE_PED_SET_PED_COMBAT_MOVEMENT(Ped PedIndex, int PedCombatMoveType)
	{
		PED::SET_PED_COMBAT_MOVEMENT(PedIndex, PedCombatMoveType);
	}

	static int LUA_NATIVE_PED_GET_PED_COMBAT_MOVEMENT(Ped PedIndex)
	{
		auto retval = PED::GET_PED_COMBAT_MOVEMENT(PedIndex);
		return retval;
	}

	static void LUA_NATIVE_PED_0x815C0074A1BC0D93_(Ped ped, int p1)
	{
		PED::_0x815C0074A1BC0D93(ped, p1);
	}

	static int LUA_NATIVE_PED_0xFFDE295662405B25_(Ped ped)
	{
		auto retval = PED::_0xFFDE295662405B25(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PED_COMBAT_ABILITY(Ped PedIndex, int PedCombatAbilityType)
	{
		PED::SET_PED_COMBAT_ABILITY(PedIndex, PedCombatAbilityType);
	}

	static void LUA_NATIVE_PED_SET_PED_COMBAT_RANGE(Ped PedIndex, int CombatRange)
	{
		PED::SET_PED_COMBAT_RANGE(PedIndex, CombatRange);
	}

	static void LUA_NATIVE_PED_SET_PED_COMBAT_ATTRIBUTES(Ped PedIndex, int CombatAttribute, bool bActiveSkill)
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(PedIndex, CombatAttribute, bActiveSkill);
	}

	static bool LUA_NATIVE_PED_GET_PED_COMBAT_ATTRIBUTE_(Ped ped, int attributeIndex)
	{
		auto retval = (bool)PED::_GET_PED_COMBAT_ATTRIBUTE(ped, attributeIndex);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PED_COMBAT_ATTRIBUTE_HASH_(Ped ped, Hash p1)
	{
		PED::_SET_PED_COMBAT_ATTRIBUTE_HASH(ped, p1);
	}

	static void LUA_NATIVE_PED_SET_PED_TARGET_LOSS_RESPONSE(Ped PedIndex, int TargetLossResponse)
	{
		PED::SET_PED_TARGET_LOSS_RESPONSE(PedIndex, TargetLossResponse);
	}

	static void LUA_NATIVE_PED_0x0A4618FFD517E24D_(Any p0, Any p1)
	{
		PED::_0x0A4618FFD517E24D(p0, p1);
	}

	static void LUA_NATIVE_PED_0x712B2C2B2471B493_(Ped ped, Hash p1)
	{
		PED::_0x712B2C2B2471B493(ped, p1);
	}

	static void LUA_NATIVE_PED_0x00B380FF2DF6AB7A_(Any p0, Any p1)
	{
		PED::_0x00B380FF2DF6AB7A(p0, p1);
	}

	static void LUA_NATIVE_PED_SET_PED_COMBAT_STYLE_(Ped ped, Hash combatStyleHash, int p2, float duration)
	{
		PED::_SET_PED_COMBAT_STYLE(ped, combatStyleHash, p2, duration);
	}

	static void LUA_NATIVE_PED_CLEAR_PED_COMBAT_STYLE_(Ped ped, int p1)
	{
		PED::_CLEAR_PED_COMBAT_STYLE(ped, p1);
	}

	static void LUA_NATIVE_PED_SET_PED_COMBAT_STYLE_MOD_(Ped ped, Hash combatStyleModHash, float duration)
	{
		PED::_SET_PED_COMBAT_STYLE_MOD(ped, combatStyleModHash, duration);
	}

	static void LUA_NATIVE_PED_CLEAR_PED_COMBAT_STYLE_MOD_(Ped ped, Hash combatStyleModHash)
	{
		PED::_CLEAR_PED_COMBAT_STYLE_MOD(ped, combatStyleModHash);
	}

	static bool LUA_NATIVE_PED_0x5BF0B9D9A8E227A0_(Ped ped)
	{
		auto retval = (bool)PED::_0x5BF0B9D9A8E227A0(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_0x642720D8D69328B6_(Ped ped, Hash p1)
	{
		PED::_0x642720D8D69328B6(ped, p1);
	}

	static bool LUA_NATIVE_PED_IS_PED_PERFORMING_MELEE_ACTION(Ped PedIndex, int p1, Hash p2)
	{
		auto retval = (bool)PED::IS_PED_PERFORMING_MELEE_ACTION(PedIndex, p1, p2);
		return retval;
	}

	static bool LUA_NATIVE_PED_0x99DF2639DA76C1DC_(Ped ped1, Ped ped2, int p2)
	{
		auto retval = (bool)PED::_0x99DF2639DA76C1DC(ped1, ped2, p2);
		return retval;
	}

	static float LUA_NATIVE_PED_GET_PED_MELEE_ACTION_PHASE_(Ped ped)
	{
		auto retval = PED::_GET_PED_MELEE_ACTION_PHASE(ped);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_BEING_STEALTH_KILLED(Ped PedIndex)
	{
		auto retval = (bool)PED::IS_PED_BEING_STEALTH_KILLED(PedIndex);
		return retval;
	}

	static Ped LUA_NATIVE_PED_GET_MELEE_TARGET_FOR_PED(Ped PedIndex)
	{
		auto retval = PED::GET_MELEE_TARGET_FOR_PED(PedIndex);
		return retval;
	}

	static void LUA_NATIVE_PED_0xDEDBED3020DA49DC_(Any p0)
	{
		PED::_0xDEDBED3020DA49DC(p0);
	}

	static void LUA_NATIVE_PED_0xA405BF9F01960C16_(Any p0)
	{
		PED::_0xA405BF9F01960C16(p0);
	}

	static Hash LUA_NATIVE_PED_GET_PED_BRAWLING_STYLE_(Ped ped)
	{
		auto retval = PED::_GET_PED_BRAWLING_STYLE(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PED_BRAWLING_STYLE_(Ped ped, Hash brawlingStyle)
	{
		PED::_SET_PED_BRAWLING_STYLE(ped, brawlingStyle);
	}

	static void LUA_NATIVE_PED_0x9D8DFE2DE9CB4DFC_(Ped ped)
	{
		PED::_0x9D8DFE2DE9CB4DFC(ped);
	}

	static Any LUA_NATIVE_PED_0xC48AF420371C7407_(Ped ped, Hash grapple)
	{
		auto retval = PED::_0xC48AF420371C7407(ped, grapple);
		return retval;
	}

	static Any LUA_NATIVE_PED_0x5EFA8A3D8A60D662_(Any p0, Any p1)
	{
		auto retval = PED::_0x5EFA8A3D8A60D662(p0, p1);
		return retval;
	}

	static Any LUA_NATIVE_PED_0x242EDF85D4E87B65_(Any p0)
	{
		auto retval = PED::_0x242EDF85D4E87B65(p0);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PED_COMBAT_BEHAVIOUR_(Ped ped, Hash behaviour)
	{
		PED::_SET_PED_COMBAT_BEHAVIOUR(ped, behaviour);
	}

	static void LUA_NATIVE_PED_0x9A4AC116CC1EEE14_(Any p0)
	{
		PED::_0x9A4AC116CC1EEE14(p0);
	}

	static void LUA_NATIVE_PED_0xE20027B414BFE6C7_(Any p0, Any p1)
	{
		PED::_0xE20027B414BFE6C7(p0, p1);
	}

	static void LUA_NATIVE_PED_SET_PED_BEAT_MULTIPLIER_(Ped ped, float p1)
	{
		PED::_SET_PED_BEAT_MULTIPLIER(ped, p1);
	}

	static void LUA_NATIVE_PED_SET_PED_ACTION_DISABLE_FLAG_(Ped ped, int actionDisableFlag)
	{
		PED::_SET_PED_ACTION_DISABLE_FLAG(ped, actionDisableFlag);
	}

	static void LUA_NATIVE_PED_CLEAR_PED_ACTION_DISABLE_FLAG_(Ped ped, int actionDisableFlag)
	{
		PED::_CLEAR_PED_ACTION_DISABLE_FLAG(ped, actionDisableFlag);
	}

	static bool LUA_NATIVE_PED_IS_PED_ACTION_DISABLE_FLAG_ENABLED_(Ped ped, int actionDisableFlag)
	{
		auto retval = (bool)PED::_IS_PED_ACTION_DISABLE_FLAG_ENABLED(ped, actionDisableFlag);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PED_TARGET_ACTION_DISABLE_FLAG_(Ped ped, int actionDisableFlag)
	{
		PED::_SET_PED_TARGET_ACTION_DISABLE_FLAG(ped, actionDisableFlag);
	}

	static void LUA_NATIVE_PED_CLEAR_PED_TARGET_ACTION_DISABLE_FLAG_(Ped ped, int actionDisableFlag)
	{
		PED::_CLEAR_PED_TARGET_ACTION_DISABLE_FLAG(ped, actionDisableFlag);
	}

	static bool LUA_NATIVE_PED_IS_PED_TARGET_ACTION_DISABLE_FLAG_ENABLED_(Ped ped, int actionDisableFlag)
	{
		auto retval = (bool)PED::_IS_PED_TARGET_ACTION_DISABLE_FLAG_ENABLED(ped, actionDisableFlag);
		return retval;
	}

	static void LUA_NATIVE_PED_0x57F35552E771BE9D_(Ped ped, int p1)
	{
		PED::_0x57F35552E771BE9D(ped, p1);
	}

	static void LUA_NATIVE_PED_0x7C10221CE718AA72_(Ped ped, int p1)
	{
		PED::_0x7C10221CE718AA72(ped, p1);
	}

	static bool LUA_NATIVE_PED_0x0D3B1568917EBDA0_(Ped ped, int p1)
	{
		auto retval = (bool)PED::_0x0D3B1568917EBDA0(ped, p1);
		return retval;
	}

	static void LUA_NATIVE_PED_0x29F3539189D3E277_(Any p0, Any p1)
	{
		PED::_0x29F3539189D3E277(p0, p1);
	}

	static void LUA_NATIVE_PED_0xE9E06EA514A69061_(Any p0, Any p1)
	{
		PED::_0xE9E06EA514A69061(p0, p1);
	}

	static void LUA_NATIVE_PED_SET_PED_WRITHING_DURATION_(Ped ped, float writhingDuration1, float writhingDuration2, int p3)
	{
		PED::_SET_PED_WRITHING_DURATION(ped, writhingDuration1, writhingDuration2, p3);
	}

	static float LUA_NATIVE_PED_GET_PED_REMAINING_REVIVAL_TIME_(Ped ped, bool normalized)
	{
		auto retval = PED::_GET_PED_REMAINING_REVIVAL_TIME(ped, normalized);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PAUSE_PED_WRITHE_BLEEDOUT(Ped ped, bool toggle)
	{
		PED::SET_PAUSE_PED_WRITHE_BLEEDOUT(ped, toggle);
	}

	static bool LUA_NATIVE_PED_0x12EB4E31F092C9B3_(Ped ped)
	{
		auto retval = (bool)PED::_0x12EB4E31F092C9B3(ped);
		return retval;
	}

	static bool LUA_NATIVE_PED_GET_PED_IS_GRAPPLING(Ped ped)
	{
		auto retval = (bool)PED::GET_PED_IS_GRAPPLING(ped);
		return retval;
	}

	static bool LUA_NATIVE_PED_GET_PED_IS_BEING_GRAPPLED(Ped ped)
	{
		auto retval = (bool)PED::GET_PED_IS_BEING_GRAPPLED(ped);
		return retval;
	}

	static Ped LUA_NATIVE_PED_GET_PED_GRAPPLER_(Ped ped)
	{
		auto retval = PED::_GET_PED_GRAPPLER(ped);
		return retval;
	}

	static int LUA_NATIVE_PED_GET_PED_GRAPPLE_STATE(Ped ped)
	{
		auto retval = PED::GET_PED_GRAPPLE_STATE(ped);
		return retval;
	}

	static Hash LUA_NATIVE_PED_GET_PED_GRAPPLE_STYLE_(Ped ped)
	{
		auto retval = PED::_GET_PED_GRAPPLE_STYLE(ped);
		return retval;
	}

	static Any LUA_NATIVE_PED_SET_PED_GRAPPLE_STYLE_(Ped ped, Hash style)
	{
		auto retval = PED::_SET_PED_GRAPPLE_STYLE(ped, style);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PED_GRAPPLE_SEQUENCE_(Ped ped, sol::stack_object grappleSequence)
	{
		PED::_SET_PED_GRAPPLE_SEQUENCE(ped, grappleSequence.is<const char*>() ? grappleSequence.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_PED_SET_PED_GRAPPLE_FLAG_(Ped ped, int flag, bool enable)
	{
		PED::_SET_PED_GRAPPLE_FLAG(ped, flag, enable);
	}

	static void LUA_NATIVE_PED_CLEAR_PED_GRAPPLE_FLAG_(Ped ped, int flag)
	{
		PED::_CLEAR_PED_GRAPPLE_FLAG(ped, flag);
	}

	static int LUA_NATIVE_PED_GET_PED_GRAPPLE_FLAG_(Ped ped)
	{
		auto retval = PED::_GET_PED_GRAPPLE_FLAG(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PED_GRAPPLE_ACTION_(Ped ped, Hash grappleAction)
	{
		PED::_SET_PED_GRAPPLE_ACTION(ped, grappleAction);
	}

	static Any LUA_NATIVE_PED_SET_PED_GRAPPLE_EFFECT_MULTIPLIER_(Ped ped, float multiplier)
	{
		auto retval = PED::_SET_PED_GRAPPLE_EFFECT_MULTIPLIER(ped, multiplier);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PED_GRAPPLE_ANIMATION_(Ped ped, Hash grappleAnim)
	{
		PED::_SET_PED_GRAPPLE_ANIMATION(ped, grappleAnim);
	}

	static void LUA_NATIVE_PED_SET_PED_FLEE_ATTRIBUTES(Ped PedIndex, int FleeAttribute, bool bActiveSkill)
	{
		PED::SET_PED_FLEE_ATTRIBUTES(PedIndex, FleeAttribute, bActiveSkill);
	}

	static bool LUA_NATIVE_PED_IS_PED_COWERING_(Ped ped)
	{
		auto retval = (bool)PED::_IS_PED_COWERING(ped);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_ANY_PED_NEAR_POINT(float pointX, float pointY, float pointZ, float radius)
	{
		auto retval = (bool)PED::IS_ANY_PED_NEAR_POINT(pointX, pointY, pointZ, radius);
		return retval;
	}

	static void LUA_NATIVE_PED_FORCE_PED_AI_AND_ANIMATION_UPDATE(Ped PedIndex, bool ForceAIPreCameraUpdate, bool ForceZeroTimestep)
	{
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PedIndex, ForceAIPreCameraUpdate, ForceZeroTimestep);
	}

	static void LUA_NATIVE_PED_0xC2722B252C79E641_(Ped ped, Any p1, Any p2, bool p3)
	{
		PED::_0xC2722B252C79E641(ped, p1, p2, p3);
	}

	static bool LUA_NATIVE_PED_IS_PED_DOING_SCENARIO_TRANSITION_(Ped ped)
	{
		auto retval = (bool)PED::_IS_PED_DOING_SCENARIO_TRANSITION(ped);
		return retval;
	}

	static bool LUA_NATIVE_PED_0x2DC0E8DCBD3546E9_(Ped ped)
	{
		auto retval = (bool)PED::_0x2DC0E8DCBD3546E9(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_ADD_SCENARIO_TRANSITION_(Ped ped)
	{
		PED::_ADD_SCENARIO_TRANSITION(ped);
	}

	static void LUA_NATIVE_PED_GIVE_PED_HASH_COMMAND_(Ped ped, Hash commandHash, float activationDuration)
	{
		PED::_GIVE_PED_HASH_COMMAND(ped, commandHash, activationDuration);
	}

	static bool LUA_NATIVE_PED_GET_IS_PED_COMMAND_HASH_PRESENT_(Ped ped, Hash commandHash)
	{
		auto retval = (bool)PED::_GET_IS_PED_COMMAND_HASH_PRESENT(ped, commandHash);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_HEADING_TOWARDS_POSITION(Ped iPedIndex, float vPointX, float vPointY, float vPointZ, float fDegreesDelta)
	{
		auto retval = (bool)PED::IS_PED_HEADING_TOWARDS_POSITION(iPedIndex, vPointX, vPointY, vPointZ, fDegreesDelta);
		return retval;
	}

	static void LUA_NATIVE_PED_0x600BBDD29820370C_(Ped ped)
	{
		PED::_0x600BBDD29820370C(ped);
	}

	static void LUA_NATIVE_PED_REQUEST_PED_VISIBILITY_TRACKING(Ped ped)
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(ped);
	}

	static void LUA_NATIVE_PED_RELEASE_PED_VISIBILITY_TRACKING(Ped ped)
	{
		PED::RELEASE_PED_VISIBILITY_TRACKING(ped);
	}

	static void LUA_NATIVE_PED_REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(Ped ped, bool trackvehicle)
	{
		PED::REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(ped, trackvehicle);
	}

	static void LUA_NATIVE_PED_REQUEST_PED_USE_SMALL_BBOX_VISIBILITY_TRACKING(Ped ped, bool useSmallBox)
	{
		PED::REQUEST_PED_USE_SMALL_BBOX_VISIBILITY_TRACKING(ped, useSmallBox);
	}

	static int LUA_NATIVE_PED_GET_TRACKED_PED_PIXELCOUNT(Ped ped)
	{
		auto retval = PED::GET_TRACKED_PED_PIXELCOUNT(ped);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_TRACKED_PED_VISIBLE(Ped ped)
	{
		auto retval = (bool)PED::IS_TRACKED_PED_VISIBLE(ped);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_TRACKED_PED_VISIBILITY_PERCENTAGE_NOT_LESS_THAN_(Ped ped, float percent)
	{
		auto retval = (bool)PED::_IS_TRACKED_PED_VISIBILITY_PERCENTAGE_NOT_LESS_THAN(ped, percent);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_VISIBILITY_TRACKED_(Ped ped)
	{
		auto retval = (bool)PED::_IS_PED_VISIBILITY_TRACKED(ped);
		return retval;
	}

	static bool LUA_NATIVE_PED_CAN_PED_BE_MOUNTED(Ped ped)
	{
		auto retval = (bool)PED::CAN_PED_BE_MOUNTED(ped);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_META_PED_FISH_(Ped ped)
	{
		auto retval = (bool)PED::_IS_META_PED_FISH(ped);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_EVENT_IN_QUEUE(Ped ped, Hash eventType)
	{
		auto retval = (bool)PED::IS_EVENT_IN_QUEUE(ped, eventType);
		return retval;
	}

	static int LUA_NATIVE_PED_CAN_PED_SEE_ENTITY(Ped ped, Entity targetEntity, bool p2, bool p3)
	{
		auto retval = PED::CAN_PED_SEE_ENTITY(ped, targetEntity, p2, p3);
		return retval;
	}

	static int LUA_NATIVE_PED_CAN_PED_SEE_PED_CACHED(Ped ped, Ped targetPed, bool p2)
	{
		auto retval = PED::CAN_PED_SEE_PED_CACHED(ped, targetPed, p2);
		return retval;
	}

	static float LUA_NATIVE_PED_0x0EA9EACBA3B01601_(Ped ped1, Ped ped2, bool p2)
	{
		auto retval = PED::_0x0EA9EACBA3B01601(ped1, ped2, p2);
		return retval;
	}

	static int LUA_NATIVE_PED_GET_PED_BONE_INDEX(Ped iPedIndex, int boneTag)
	{
		auto retval = PED::GET_PED_BONE_INDEX(iPedIndex, boneTag);
		return retval;
	}

	static int LUA_NATIVE_PED_0xC5303F460A40D21D_(Ped ped, int p1)
	{
		auto retval = PED::_0xC5303F460A40D21D(ped, p1);
		return retval;
	}

	static void LUA_NATIVE_PED_0xE29D8CD66553DBAA_(Ped horse)
	{
		PED::_0xE29D8CD66553DBAA(horse);
	}

	static void LUA_NATIVE_PED_0xB06F5F1DEF417216_(Any p0, Any p1, Any p2, Any p3)
	{
		PED::_0xB06F5F1DEF417216(p0, p1, p2, p3);
	}

	static void LUA_NATIVE_PED_0xFC23348F0F4E245F_(Any p0, Any p1, Any p2, Any p3)
	{
		PED::_0xFC23348F0F4E245F(p0, p1, p2, p3);
	}

	static void LUA_NATIVE_PED_0x9184788BFF1EDAD7_(Any p0, Any p1)
	{
		PED::_0x9184788BFF1EDAD7(p0, p1);
	}

	static void LUA_NATIVE_PED_SET_PED_DIRT_CLEANED_(Ped ped, float p1, int p2, bool p3, bool p4)
	{
		PED::_SET_PED_DIRT_CLEANED(ped, p1, p2, p3, p4);
	}

	static Any LUA_NATIVE_PED_0x0105FEE8F9091255_(Any p0, Any p1)
	{
		auto retval = PED::_0x0105FEE8F9091255(p0, p1);
		return retval;
	}

	static void LUA_NATIVE_PED_0xD049920CD29F6CC8_(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		PED::_0xD049920CD29F6CC8(p0, p1, p2, p3, p4);
	}

	static Any LUA_NATIVE_PED_0xBB3E5370EBB6BE28_(Any p0, Any p1)
	{
		auto retval = PED::_0xBB3E5370EBB6BE28(p0, p1);
		return retval;
	}

	static void LUA_NATIVE_PED_0x2FA568BFA725F8D6_(Any p0, Any p1, Any p2, Any p3)
	{
		PED::_0x2FA568BFA725F8D6(p0, p1, p2, p3);
	}

	static Any LUA_NATIVE_PED_0x56E4BAD93D33453C_(Any p0, Any p1)
	{
		auto retval = PED::_0x56E4BAD93D33453C(p0, p1);
		return retval;
	}

	static void LUA_NATIVE_PED_0x75A082563B4452E5_(Any p0, Any p1, Any p2, Any p3)
	{
		PED::_0x75A082563B4452E5(p0, p1, p2, p3);
	}

	static void LUA_NATIVE_PED_0x16802C32B2FCA06B_(Any p0, Any p1, Any p2, Any p3)
	{
		PED::_0x16802C32B2FCA06B(p0, p1, p2, p3);
	}

	static void LUA_NATIVE_PED_0x8BA0C65AC15A7D33_(Any p0, Any p1, Any p2, Any p3)
	{
		PED::_0x8BA0C65AC15A7D33(p0, p1, p2, p3);
	}

	static void LUA_NATIVE_PED_0x0FFDF937E5C11382_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		PED::_0x0FFDF937E5C11382(p0, p1, p2, p3, p4, p5);
	}

	static void LUA_NATIVE_PED_0x5FCF25D584065BFD_(Any p0, Any p1, Any p2, Any p3)
	{
		PED::_0x5FCF25D584065BFD(p0, p1, p2, p3);
	}

	static void LUA_NATIVE_PED_0xA2116C1E4ED85C24_(Ped ped, bool inverted)
	{
		PED::_0xA2116C1E4ED85C24(ped, inverted);
	}

	static bool LUA_NATIVE_PED_FORCE_PED_MOTION_STATE(Ped PedIndex, Hash state, bool shouldRestart, int exitstate, bool ForceAIPreCameraUpdate)
	{
		auto retval = (bool)PED::FORCE_PED_MOTION_STATE(PedIndex, state, shouldRestart, exitstate, ForceAIPreCameraUpdate);
		return retval;
	}

	static void LUA_NATIVE_PED_0x75D3333409CD33CE_(Any p0, Any p1, Any p2)
	{
		PED::_0x75D3333409CD33CE(p0, p1, p2);
	}

	static std::tuple<bool, float, float> LUA_NATIVE_PED_GET_PED_CURRENT_MOVE_BLEND_RATIO(Ped PedIndex, float MbrXOut, float MbrYOut)
	{
		std::tuple<bool, float, float> return_values;
		std::get<0>(return_values) = (bool)PED::GET_PED_CURRENT_MOVE_BLEND_RATIO(PedIndex, &MbrXOut, &MbrYOut);
		std::get<1>(return_values) = MbrXOut;
		std::get<2>(return_values) = MbrYOut;

		return return_values;
	}

	static void LUA_NATIVE_PED_SET_PED_MAX_MOVE_BLEND_RATIO(Ped PedIndex, float MoveBlendRatio)
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PedIndex, MoveBlendRatio);
	}

	static void LUA_NATIVE_PED_SET_PED_MIN_MOVE_BLEND_RATIO(Ped PedIndex, float MoveBlendRatio)
	{
		PED::SET_PED_MIN_MOVE_BLEND_RATIO(PedIndex, MoveBlendRatio);
	}

	static void LUA_NATIVE_PED_0xBC1DC48270468444_(Any p0)
	{
		PED::_0xBC1DC48270468444(p0);
	}

	static float LUA_NATIVE_PED_0x46BF2A810679D6E6_(Ped ped, float maxMoveBlendRatio)
	{
		auto retval = PED::_0x46BF2A810679D6E6(ped, maxMoveBlendRatio);
		return retval;
	}

	static float LUA_NATIVE_PED_0xCA95924C893A0C91_(Ped ped, float p1)
	{
		auto retval = PED::_0xCA95924C893A0C91(ped, p1);
		return retval;
	}

	static void LUA_NATIVE_PED_HORSE_AGITATE_(Ped mount, bool kickOffRider)
	{
		PED::_HORSE_AGITATE(mount, kickOffRider);
	}

	static void LUA_NATIVE_PED_0x413697EC260AABBF_(Any p0, Any p1, Any p2)
	{
		PED::_0x413697EC260AABBF(p0, p1, p2);
	}

	static void LUA_NATIVE_PED_0xCAC43D060099EA72_(Ped ped)
	{
		PED::_0xCAC43D060099EA72(ped);
	}

	static void LUA_NATIVE_PED_0xC9151483CC06A414_(Ped ped)
	{
		PED::_0xC9151483CC06A414(ped);
	}

	static void LUA_NATIVE_PED_0xAD3330E3C3E98007_(Any p0, Any p1)
	{
		PED::_0xAD3330E3C3E98007(p0, p1);
	}

	static Any LUA_NATIVE_PED_0xB8E2D655E1D5BD39_(Any p0)
	{
		auto retval = PED::_0xB8E2D655E1D5BD39(p0);
		return retval;
	}

	static Any LUA_NATIVE_PED_0x7BB810E8B343AC7B_(Any p0)
	{
		auto retval = PED::_0x7BB810E8B343AC7B(p0);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PED_MOVE_RATE_OVERRIDE(Ped PedIndex, float DesiredRate)
	{
		PED::SET_PED_MOVE_RATE_OVERRIDE(PedIndex, DesiredRate);
	}

	static std::tuple<int, Vehicle> LUA_NATIVE_PED_GET_PED_NEARBY_VEHICLES(Ped PedIndex, Vehicle array)
	{
		std::tuple<int, Vehicle> return_values;
		std::get<0>(return_values) = PED::GET_PED_NEARBY_VEHICLES(PedIndex, &array);
		std::get<1>(return_values) = array;

		return return_values;
	}

	static int LUA_NATIVE_PED_GET_PED_NEARBY_PEDS(Ped PedIndex, uintptr_t array, int ExclusionPedType, int p3)
	{
		auto retval = PED::GET_PED_NEARBY_PEDS(PedIndex, (Any*)array, ExclusionPedType, p3);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_READY_TO_RENDER(Ped ped)
	{
		auto retval = (bool)PED::IS_PED_READY_TO_RENDER(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_0x6A489892E813951A_(Any p0)
	{
		PED::_0x6A489892E813951A(p0);
	}

	static bool LUA_NATIVE_PED_IS_PED_USING_ACTION_MODE(Ped PedIndex)
	{
		auto retval = (bool)PED::IS_PED_USING_ACTION_MODE(PedIndex);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_USING_ACTION_MODE_2_(Ped ped)
	{
		auto retval = (bool)PED::_IS_PED_USING_ACTION_MODE_2(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PED_USING_ACTION_MODE(Ped PedIndex, bool UsingActionMode, int ActionModeTime, sol::stack_object ActionModeName)
	{
		PED::SET_PED_USING_ACTION_MODE(PedIndex, UsingActionMode, ActionModeTime, ActionModeName.is<const char*>() ? ActionModeName.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_PED_SET_PED_CAPSULE(Ped PedIndex, float Radius)
	{
		PED::SET_PED_CAPSULE(PedIndex, Radius);
	}

	static Ped LUA_NATIVE_PED_GET_RIDER_OF_MOUNT_(Ped mount, bool p1)
	{
		auto retval = PED::_GET_RIDER_OF_MOUNT(mount, p1);
		return retval;
	}

	static void LUA_NATIVE_PED_SPAWNPOINTS_START_SEARCH(float vSearchOriginX, float vSearchOriginY, float vSearchOriginZ, float fSearchRadius, float fMaxDistZ, int iFlags, float fMinimumSpacing, int iMaxSearchDurationMS, float p8)
	{
		PED::SPAWNPOINTS_START_SEARCH(vSearchOriginX, vSearchOriginY, vSearchOriginZ, fSearchRadius, fMaxDistZ, iFlags, fMinimumSpacing, iMaxSearchDurationMS, p8);
	}

	static void LUA_NATIVE_PED_SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(float vPoint1X, float vPoint1Y, float vPoint1Z, float vPoint2X, float vPoint2Y, float vPoint2Z, float fWidth, int iFlags, float fMinimumSpacing, int iMaxSearchDurationMS, float p10)
	{
		PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(vPoint1X, vPoint1Y, vPoint1Z, vPoint2X, vPoint2Y, vPoint2Z, fWidth, iFlags, fMinimumSpacing, iMaxSearchDurationMS, p10);
	}

	static void LUA_NATIVE_PED_SPAWNPOINTS_START_SEARCH_WITH_VOLUME_(Volume volume, int spawnpointsFlag, float p2, int duration, float p4)
	{
		PED::_SPAWNPOINTS_START_SEARCH_WITH_VOLUME(volume, spawnpointsFlag, p2, duration, p4);
	}

	static void LUA_NATIVE_PED_SPAWNPOINTS_CANCEL_SEARCH()
	{
		PED::SPAWNPOINTS_CANCEL_SEARCH();
	}

	static bool LUA_NATIVE_PED_SPAWNPOINTS_IS_SEARCH_ACTIVE()
	{
		auto retval = (bool)PED::SPAWNPOINTS_IS_SEARCH_ACTIVE();
		return retval;
	}

	static bool LUA_NATIVE_PED_SPAWNPOINTS_IS_SEARCH_COMPLETE()
	{
		auto retval = (bool)PED::SPAWNPOINTS_IS_SEARCH_COMPLETE();
		return retval;
	}

	static bool LUA_NATIVE_PED_SPAWNPOINTS_IS_SEARCH_FAILED()
	{
		auto retval = (bool)PED::SPAWNPOINTS_IS_SEARCH_FAILED();
		return retval;
	}

	static int LUA_NATIVE_PED_SPAWNPOINTS_GET_NUM_SEARCH_RESULTS()
	{
		auto retval = PED::SPAWNPOINTS_GET_NUM_SEARCH_RESULTS();
		return retval;
	}

	static std::tuple<float, float, float> LUA_NATIVE_PED_SPAWNPOINTS_GET_SEARCH_RESULT(int iResultIndex, float fOut_X, float fOut_Y, float fOut_Z)
	{
		std::tuple<float, float, float> return_values;
		PED::SPAWNPOINTS_GET_SEARCH_RESULT(iResultIndex, &fOut_X, &fOut_Y, &fOut_Z);
		std::get<0>(return_values) = fOut_X;
		std::get<1>(return_values) = fOut_Y;
		std::get<2>(return_values) = fOut_Z;

		return return_values;
	}

	static int LUA_NATIVE_PED_SPAWNPOINTS_GET_SEARCH_RESULT_FLAGS(int iResultIndex, int iOut_Flags)
	{
		PED::SPAWNPOINTS_GET_SEARCH_RESULT_FLAGS(iResultIndex, &iOut_Flags);
		return iOut_Flags;
	}

	static void LUA_NATIVE_PED_SET_IK_TARGET(Ped PedIndex, int IKPart, Entity TargetEntityIndex, int TargetBone, float TargetOffsetX, float TargetOffsetY, float TargetOffsetZ, int Flags, int BlendInTimeMS, int BlendOutTimeMS)
	{
		PED::SET_IK_TARGET(PedIndex, IKPart, TargetEntityIndex, TargetBone, TargetOffsetX, TargetOffsetY, TargetOffsetZ, Flags, BlendInTimeMS, BlendOutTimeMS);
	}

	static void LUA_NATIVE_PED_REQUEST_PED_EMOTIONAL_PRESET_(Ped ped, sol::stack_object name)
	{
		PED::_REQUEST_PED_EMOTIONAL_PRESET(ped, name.is<const char*>() ? name.as<const char*>() : nullptr);
	}

	static bool LUA_NATIVE_PED_HAS_PED_EMOTIONAL_PRESET_LOADED_(Ped ped, sol::stack_object name)
	{
		auto retval = (bool)PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(ped, name.is<const char*>() ? name.as<const char*>() : nullptr);
		return retval;
	}

	static void LUA_NATIVE_PED_REMOVE_PED_EMOTIONAL_PRESET_(Ped ped, sol::stack_object name)
	{
		PED::_REMOVE_PED_EMOTIONAL_PRESET(ped, name.is<const char*>() ? name.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_PED_REQUEST_MOTION_TYPE_ASSET_(Hash nameHash, Ped ped)
	{
		PED::_REQUEST_MOTION_TYPE_ASSET(nameHash, ped);
	}

	static bool LUA_NATIVE_PED_HAS_MOTION_TYPE_ASSET_LOADED(Hash nameHash, Ped ped)
	{
		auto retval = (bool)PED::HAS_MOTION_TYPE_ASSET_LOADED(nameHash, ped);
		return retval;
	}

	static void LUA_NATIVE_PED_REMOVE_MOTION_TYPE_ASSET_(Hash nameHash, Ped ped)
	{
		PED::_REMOVE_MOTION_TYPE_ASSET(nameHash, ped);
	}

	static bool LUA_NATIVE_PED_0x290B2E6CCDE532E1_(Ped ped)
	{
		auto retval = (bool)PED::_0x290B2E6CCDE532E1(ped);
		return retval;
	}

	static bool LUA_NATIVE_PED_0x0EEF7A81C17679DB_(Ped ped)
	{
		auto retval = (bool)PED::_0x0EEF7A81C17679DB(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PED_LOD_MULTIPLIER(Ped PedIndex, float multiplier)
	{
		PED::SET_PED_LOD_MULTIPLIER(PedIndex, multiplier);
	}

	static float LUA_NATIVE_PED_GET_PED_LOD_MULTIPLIER_(Ped ped)
	{
		auto retval = PED::_GET_PED_LOD_MULTIPLIER(ped);
		return retval;
	}

	static Any LUA_NATIVE_PED_0xA218D2BBCAA7388C_(Any p0, Any p1)
	{
		auto retval = PED::_0xA218D2BBCAA7388C(p0, p1);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_ANY_HOSTILE_PED_NEAR_POINT(Ped iPedIndex, float pointX, float pointY, float pointZ, float radius)
	{
		auto retval = (bool)PED::IS_ANY_HOSTILE_PED_NEAR_POINT(iPedIndex, pointX, pointY, pointZ, radius);
		return retval;
	}

	static void LUA_NATIVE_PED_0xCBDE59C48F2B06F5_(Any p0, Any p1, Any p2)
	{
		PED::_0xCBDE59C48F2B06F5(p0, p1, p2);
	}

	static void LUA_NATIVE_PED_0x6A190B94C2541A99_(Any p0)
	{
		PED::_0x6A190B94C2541A99(p0);
	}

	static bool LUA_NATIVE_PED_IS_TARGET_PED_IN_PERCEPTION_AREA(Ped PedIndex, Ped TargetPedIndex, float fFocusAngle, float fFocusDistance, float fPeripheralAngle, float fPeripheralDistance)
	{
		auto retval = (bool)PED::IS_TARGET_PED_IN_PERCEPTION_AREA(PedIndex, TargetPedIndex, fFocusAngle, fFocusDistance, fPeripheralAngle, fPeripheralDistance);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_POP_CONTROL_SPHERE_THIS_FRAME(float centerX, float centerY, float centerZ, float pedRadius, float vehRadius)
	{
		PED::SET_POP_CONTROL_SPHERE_THIS_FRAME(centerX, centerY, centerZ, pedRadius, vehRadius);
	}

	static bool LUA_NATIVE_PED_IS_PED_HOGTIED(Ped ped)
	{
		auto retval = (bool)PED::IS_PED_HOGTIED(ped);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_BEING_HOGTIED(Ped ped)
	{
		auto retval = (bool)PED::IS_PED_BEING_HOGTIED(ped);
		return retval;
	}

	static Ped LUA_NATIVE_PED_0x3D9F958834AB9C30_(Ped ped)
	{
		auto retval = PED::_0x3D9F958834AB9C30(ped);
		return retval;
	}

	static bool LUA_NATIVE_PED_0x913D04A5176F84C9_(Ped ped)
	{
		auto retval = (bool)PED::_0x913D04A5176F84C9(ped);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_HOGTYING(Ped ped)
	{
		auto retval = (bool)PED::IS_PED_HOGTYING(ped);
		return retval;
	}

	static bool LUA_NATIVE_PED_GET_PED_LASSO_HOGTIE_FLAG_(Ped ped, int flagId)
	{
		auto retval = (bool)PED::_GET_PED_LASSO_HOGTIE_FLAG(ped, flagId);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PED_LASSO_HOGTIE_FLAG(Ped ped, int flagId, bool value)
	{
		PED::SET_PED_LASSO_HOGTIE_FLAG(ped, flagId, value);
	}

	static int LUA_NATIVE_PED_0x4642182A298187D0_(Ped ped, int p1, uintptr_t p2, int p3, int p4)
	{
		auto retval = PED::_0x4642182A298187D0(ped, p1, (Any*)p2, p3, p4);
		return retval;
	}

	static void LUA_NATIVE_PED_0x6B67320E0D57856A_(Ped ped, uintptr_t p1, int p2, bool p3)
	{
		PED::_0x6B67320E0D57856A(ped, (Any*)p1, p2, p3);
	}

	static Entity LUA_NATIVE_PED_GET_FIRST_ENTITY_PED_IS_CARRYING_(Ped ped)
	{
		auto retval = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_0xAA6C49AE90A32299_(Ped ped, Hash p1)
	{
		PED::_0xAA6C49AE90A32299(ped, p1);
	}

	static Ped LUA_NATIVE_PED_GET_CARRIER_AS_PED_(Entity entity)
	{
		auto retval = PED::_GET_CARRIER_AS_PED(entity);
		return retval;
	}

	static Ped LUA_NATIVE_PED_GET_CARRIER_AS_MOUNT_(Entity entity)
	{
		auto retval = PED::_GET_CARRIER_AS_MOUNT(entity);
		return retval;
	}

	static Ped LUA_NATIVE_PED_GET_CARRIER_AS_HUMAN_(Entity entity)
	{
		auto retval = PED::_GET_CARRIER_AS_HUMAN(entity);
		return retval;
	}

	static Any LUA_NATIVE_PED_GET_CARRIED_ATTACHED_INFO_FOR_SLOT(Any p0, Any p1, Any p2, Any p3)
	{
		auto retval = PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(p0, p1, p2, p3);
		return retval;
	}

	static void LUA_NATIVE_PED_DETACH_CARRIABLE_ENTITY(Entity entity, bool p1, bool p2)
	{
		PED::DETACH_CARRIABLE_ENTITY(entity, p1, p2);
	}

	static void LUA_NATIVE_PED_FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Ped ped, ItemSet itemset)
	{
		PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(ped, itemset);
	}

	static bool LUA_NATIVE_PED_IS_PED_CARRYING_SOMETHING(Ped ped)
	{
		auto retval = (bool)PED::IS_PED_CARRYING_SOMETHING(ped);
		return retval;
	}

	static bool LUA_NATIVE_PED_0xB65927F861E7AE39_(Ped ped, int p1)
	{
		auto retval = (bool)PED::_0xB65927F861E7AE39(ped, p1);
		return retval;
	}

	static bool LUA_NATIVE_PED_0xA1FBAC56D38563E2_(Volume volume)
	{
		auto retval = (bool)PED::_0xA1FBAC56D38563E2(volume);
		return retval;
	}

	static Any LUA_NATIVE_PED_0x6F43C351A5D51E2F_(Ped ped, uintptr_t p1)
	{
		auto retval = PED::_0x6F43C351A5D51E2F(ped, (Any*)p1);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_LASSOED(Ped ped)
	{
		auto retval = (bool)PED::IS_PED_LASSOED(ped);
		return retval;
	}

	static Entity LUA_NATIVE_PED_GET_LASSOER_OF_PED_(Ped ped)
	{
		auto retval = PED::_GET_LASSOER_OF_PED(ped);
		return retval;
	}

	static Entity LUA_NATIVE_PED_GET_LASSO_TARGET_(Ped ped)
	{
		auto retval = PED::_GET_LASSO_TARGET(ped);
		return retval;
	}

	static Ped LUA_NATIVE_PED_GET_LASSOED_LASSOER_(Ped ped)
	{
		auto retval = PED::_GET_LASSOED_LASSOER(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_LOOTING_FLAG(Ped ped, int lootFlag, bool enabled)
	{
		PED::SET_LOOTING_FLAG(ped, lootFlag, enabled);
	}

	static bool LUA_NATIVE_PED_GET_LOOTING_FLAG_(Ped ped, int lootFlag)
	{
		auto retval = (bool)PED::_GET_LOOTING_FLAG(ped, lootFlag);
		return retval;
	}

	static std::tuple<int, Ped> LUA_NATIVE_PED_REFRESH_LOOT_STATE_FOR_PED_(Ped ped, int p1, Ped lootTarget, int p3, int p4)
	{
		std::tuple<int, Ped> return_values;
		std::get<0>(return_values) = PED::_REFRESH_LOOT_STATE_FOR_PED(ped, p1, &lootTarget, p3, p4);
		std::get<1>(return_values) = lootTarget;

		return return_values;
	}

	static int LUA_NATIVE_PED_GET_PED_LOOT_STATUS_MP(Ped ped)
	{
		auto retval = PED::GET_PED_LOOT_STATUS_MP(ped);
		return retval;
	}

	static Ped LUA_NATIVE_PED_0x4B19F171450E0D4F_(Ped ped)
	{
		auto retval = PED::_0x4B19F171450E0D4F(ped);
		return retval;
	}

	static bool LUA_NATIVE_PED_0x758F081DB204DDDE_(Ped ped)
	{
		auto retval = (bool)PED::_0x758F081DB204DDDE(ped);
		return retval;
	}

	static Entity LUA_NATIVE_PED_GET_LOOTING_PICKUP_TARGET_ENTITY(Ped ped)
	{
		auto retval = PED::GET_LOOTING_PICKUP_TARGET_ENTITY(ped);
		return retval;
	}

	static Any LUA_NATIVE_PED_0x7B5C293238EE4F20_(Any p0)
	{
		auto retval = PED::_0x7B5C293238EE4F20(p0);
		return retval;
	}

	static void LUA_NATIVE_PED_0xAE6B68A83ABBE7C0_(Any p0)
	{
		PED::_0xAE6B68A83ABBE7C0(p0);
	}

	static bool LUA_NATIVE_PED_0xA4B6432E3880F2F9_(Ped ped)
	{
		auto retval = (bool)PED::_0xA4B6432E3880F2F9(ped);
		return retval;
	}

	static bool LUA_NATIVE_PED_ADD_PED_SUBSCRIBE_TO_LEGENDARY_BLIPS_(Ped ped)
	{
		auto retval = (bool)PED::_ADD_PED_SUBSCRIBE_TO_LEGENDARY_BLIPS(ped);
		return retval;
	}

	static bool LUA_NATIVE_PED_REMOVE_PED_SUBSCRIBE_TO_LEGENDARY_BLIPS_(Ped ped)
	{
		auto retval = (bool)PED::_REMOVE_PED_SUBSCRIBE_TO_LEGENDARY_BLIPS(ped);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_INCAPACITATED(Ped ped)
	{
		auto retval = (bool)PED::IS_PED_INCAPACITATED(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PED_INCAPACITATION_MODIFIERS_(Ped ped, bool canBeIncapacitated, int threshold, int bleedoutTime, int p4)
	{
		PED::_SET_PED_INCAPACITATION_MODIFIERS(ped, canBeIncapacitated, threshold, bleedoutTime, p4);
	}

	static bool LUA_NATIVE_PED_GET_PED_CAN_BE_INCAPACITATED_THIS_FRAME_(Ped ped)
	{
		auto retval = (bool)PED::_GET_PED_CAN_BE_INCAPACITATED_THIS_FRAME(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PED_CAN_BE_INCAPACITATED(Ped ped, bool toggle)
	{
		PED::SET_PED_CAN_BE_INCAPACITATED(ped, toggle);
	}

	static int LUA_NATIVE_PED_GET_PED_INCAPACITATION_HEALTH_(Ped ped)
	{
		auto retval = PED::_GET_PED_INCAPACITATION_HEALTH(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PED_INCAPACITATION_TOTAL_BLEED_OUT_DURATION_(Ped ped, float duration)
	{
		PED::_SET_PED_INCAPACITATION_TOTAL_BLEED_OUT_DURATION(ped, duration);
	}

	static void LUA_NATIVE_PED_RESET_PED_INCAPACITATION_BLEED_OUT_DURATION_(Ped ped)
	{
		PED::_RESET_PED_INCAPACITATION_BLEED_OUT_DURATION(ped);
	}

	static void LUA_NATIVE_PED_SET_PED_INCAPACITATION_FLAGS_(Ped ped, int flags)
	{
		PED::_SET_PED_INCAPACITATION_FLAGS(ped, flags);
	}

	static void LUA_NATIVE_PED_0x92A1B55A59720395_(Any p0, Any p1)
	{
		PED::_0x92A1B55A59720395(p0, p1);
	}

	static void LUA_NATIVE_PED_INCAPACITATED_REVIVE_(Ped ped, Ped ped2)
	{
		PED::_INCAPACITATED_REVIVE(ped, ped2);
	}

	static int LUA_NATIVE_PED_GET_INCAPACITATION_TIME_REMAINING_(Ped ped)
	{
		auto retval = PED::_GET_INCAPACITATION_TIME_REMAINING(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PED_KNOCKED_BY_ONE_HIT_(Ped ped, float p1)
	{
		PED::_SET_PED_KNOCKED_BY_ONE_HIT(ped, p1);
	}

	static void LUA_NATIVE_PED_0x2E5B5D1F1453E08E_(Ped ped, int p1)
	{
		PED::_0x2E5B5D1F1453E08E(ped, p1);
	}

	static void LUA_NATIVE_PED_0x29924EB8EE9DB926_(Ped ped, float p1)
	{
		PED::_0x29924EB8EE9DB926(ped, p1);
	}

	static void LUA_NATIVE_PED_SET_PED_ACTIVE_PLAYER_TYPE_(Ped ped, Hash playerType)
	{
		PED::_SET_PED_ACTIVE_PLAYER_TYPE(ped, playerType);
	}

	static Any LUA_NATIVE_PED_0xCB86D3E3E3708901_(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		auto retval = PED::_0xCB86D3E3E3708901(p0, p1, p2, p3, p4);
		return retval;
	}

	static void LUA_NATIVE_PED_0x633F83B301C87994_(Any p0, Any p1)
	{
		PED::_0x633F83B301C87994(p0, p1);
	}

	static bool LUA_NATIVE_PED_0x5203038FF8BAE577_(Ped ped, int p1, int p2)
	{
		auto retval = (bool)PED::_0x5203038FF8BAE577(ped, p1, p2);
		return retval;
	}

	static bool LUA_NATIVE_PED_0x7F090958AE95B61B_(Ped ped, int p1)
	{
		auto retval = (bool)PED::_0x7F090958AE95B61B(ped, p1);
		return retval;
	}

	static void LUA_NATIVE_PED_0xC494C76A34266E82_(Ped ped, int p1)
	{
		PED::_0xC494C76A34266E82(ped, p1);
	}

	static bool LUA_NATIVE_PED_0xC3995D396F1D97B6_(Ped ped, int p1, int p2)
	{
		auto retval = (bool)PED::_0xC3995D396F1D97B6(ped, p1, p2);
		return retval;
	}

	static void LUA_NATIVE_PED_0x15F4732C357B1D6D_(Any p0, Any p1, Any p2)
	{
		PED::_0x15F4732C357B1D6D(p0, p1, p2);
	}

	static bool LUA_NATIVE_PED_0x947E43F544B6AB34_(Ped ped, Player player, int flag, int ms)
	{
		auto retval = (bool)PED::_0x947E43F544B6AB34(ped, player, flag, ms);
		return retval;
	}

	static Any LUA_NATIVE_PED_0x32417CB860A3BDC4_(Any p0, Any p1)
	{
		auto retval = PED::_0x32417CB860A3BDC4(p0, p1);
		return retval;
	}

	static void LUA_NATIVE_PED_0xE737D5F14304A2EC_(Ped ped, Player player, int p2)
	{
		PED::_0xE737D5F14304A2EC(ped, player, p2);
	}

	static void LUA_NATIVE_PED_0xEBD49472BCCF7642_(Any p0, Any p1)
	{
		PED::_0xEBD49472BCCF7642(p0, p1);
	}

	static void LUA_NATIVE_PED_SET_PLAYER_GREET_DISABLED_FOR_PED_(Ped ped, Player player, int duration)
	{
		PED::_SET_PLAYER_GREET_DISABLED_FOR_PED(ped, player, duration);
	}

	static void LUA_NATIVE_PED_SET_PLAYER_ANTAGONIZE_DISABLED_FOR_PED_(Ped ped, Player player, int duration)
	{
		PED::_SET_PLAYER_ANTAGONIZE_DISABLED_FOR_PED(ped, player, duration);
	}

	static void LUA_NATIVE_PED_0xB9BDFAE609DFB7C5_(Any p0, Any p1, Any p2)
	{
		PED::_0xB9BDFAE609DFB7C5(p0, p1, p2);
	}

	static Any LUA_NATIVE_PED_0xF7327ACC7A89AEF1_(Any p0, Any p1, Any p2)
	{
		auto retval = PED::_0xF7327ACC7A89AEF1(p0, p1, p2);
		return retval;
	}

	static int LUA_NATIVE_PED_GET_PED_ATTITUDE_(Ped ped, Player player)
	{
		auto retval = PED::_GET_PED_ATTITUDE(ped, player);
		return retval;
	}

	static bool LUA_NATIVE_PED_0x1E017404784AA6A3_(Ped ped, Hash p1)
	{
		auto retval = (bool)PED::_0x1E017404784AA6A3(ped, p1);
		return retval;
	}

	static void LUA_NATIVE_PED_0x2B4CE170DE09F346_(Ped ped, Hash p1)
	{
		PED::_0x2B4CE170DE09F346(ped, p1);
	}

	static Any LUA_NATIVE_PED_0x7C8AA850617651D9_(Any p0, Any p1)
	{
		auto retval = PED::_0x7C8AA850617651D9(p0, p1);
		return retval;
	}

	static float LUA_NATIVE_PED_GET_PED_MOTIVATION_(Ped ped, int motivationState, Ped targetPed)
	{
		auto retval = PED::_GET_PED_MOTIVATION(ped, motivationState, targetPed);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PED_MOTIVATION_(Ped ped, int motivationState, float threshold, Ped targetPed)
	{
		PED::_SET_PED_MOTIVATION(ped, motivationState, threshold, targetPed);
	}

	static void LUA_NATIVE_PED_0x23BDE06596A22CEC_(Ped ped, int p1, float p2, Any p3)
	{
		PED::_0x23BDE06596A22CEC(ped, p1, p2, p3);
	}

	static void LUA_NATIVE_PED_0xCDFB8C04D4C95D9B_(Any p0, Any p1, Any p2, Any p3)
	{
		PED::_0xCDFB8C04D4C95D9B(p0, p1, p2, p3);
	}

	static bool LUA_NATIVE_PED_GET_IS_PED_MOTIVATION_STATE_ENABLED_(Ped ped, int motivationState)
	{
		auto retval = (bool)PED::_GET_IS_PED_MOTIVATION_STATE_ENABLED(ped, motivationState);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PED_MOTIVATION_STATE_OVERRIDE_(Ped ped, int motivationState, bool enabled)
	{
		PED::_SET_PED_MOTIVATION_STATE_OVERRIDE(ped, motivationState, enabled);
	}

	static void LUA_NATIVE_PED_SET_PED_MOTIVATION_MODIFIER_(Ped ped, int motivationState, float modifier)
	{
		PED::_SET_PED_MOTIVATION_MODIFIER(ped, motivationState, modifier);
	}

	static void LUA_NATIVE_PED_0xFD8E853F0BC2E942_(Any p0, Any p1)
	{
		PED::_0xFD8E853F0BC2E942(p0, p1);
	}

	static void LUA_NATIVE_PED_SET_PED_SCENT_(Ped ped, float scent)
	{
		PED::_SET_PED_SCENT(ped, scent);
	}

	static void LUA_NATIVE_PED_SET_PED_LADDER_MOVEMENT_SPEED_MODIFIER_(Ped ped, float p1)
	{
		PED::_SET_PED_LADDER_MOVEMENT_SPEED_MODIFIER(ped, p1);
	}

	static void LUA_NATIVE_PED_RESET_PED_LADDER_MOVEMENT_SPEED_MODIFIER_(Ped ped)
	{
		PED::_RESET_PED_LADDER_MOVEMENT_SPEED_MODIFIER(ped);
	}

	static void LUA_NATIVE_PED_0xC6C4E15CF7D52FEA_(Any p0, Any p1)
	{
		PED::_0xC6C4E15CF7D52FEA(p0, p1);
	}

	static void LUA_NATIVE_PED_SET_PED_VOICE_VOLUME_(Ped ped, float volume)
	{
		PED::_SET_PED_VOICE_VOLUME(ped, volume);
	}

	static void LUA_NATIVE_PED_0x0F967019CC853BCC_(Any p0, Any p1)
	{
		PED::_0x0F967019CC853BCC(p0, p1);
	}

	static bool LUA_NATIVE_PED_IS_PED_DRAGGING_(Ped ped)
	{
		auto retval = (bool)PED::_IS_PED_DRAGGING(ped);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_BEING_DRAGGED(Ped ped)
	{
		auto retval = (bool)PED::IS_PED_BEING_DRAGGED(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_0x070A3841406C43D5_(Any p0, Any p1)
	{
		PED::_0x070A3841406C43D5(p0, p1);
	}

	static bool LUA_NATIVE_PED_ADD_PED_STAY_OUT_VOLUME_(Ped ped, Volume volume)
	{
		auto retval = (bool)PED::_ADD_PED_STAY_OUT_VOLUME(ped, volume);
		return retval;
	}

	static bool LUA_NATIVE_PED_REMOVE_PED_STAY_OUT_VOLUME_(Ped ped, Volume volume)
	{
		auto retval = (bool)PED::_REMOVE_PED_STAY_OUT_VOLUME(ped, volume);
		return retval;
	}

	static void LUA_NATIVE_PED_0x9E66708B2B41F14A_(Any p0, Any p1)
	{
		PED::_0x9E66708B2B41F14A(p0, p1);
	}

	static void LUA_NATIVE_PED_0xF634E2892220EF34_(Ped ped, Any p1)
	{
		PED::_0xF634E2892220EF34(ped, p1);
	}

	static void LUA_NATIVE_PED_0xAAC0EE3B4999ABB5_(Ped ped, Ped targetPed)
	{
		PED::_0xAAC0EE3B4999ABB5(ped, targetPed);
	}

	static Entity LUA_NATIVE_PED_GET_PED_MOTION_FOCUS_ENTITY(Ped ped)
	{
		auto retval = PED::GET_PED_MOTION_FOCUS_ENTITY(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_CHAR_EXPRESSION_(Ped ped, int index, float value)
	{
		PED::_SET_CHAR_EXPRESSION(ped, index, value);
	}

	static float LUA_NATIVE_PED_GET_CHAR_EXPRESSION_(Ped ped, int index)
	{
		auto retval = PED::_GET_CHAR_EXPRESSION(ped, index);
		return retval;
	}

	static void LUA_NATIVE_PED_0x5BB04BC74A474B47_(Any p0, Any p1)
	{
		PED::_0x5BB04BC74A474B47(p0, p1);
	}

	static void LUA_NATIVE_PED_0x9078FB0557364099_(Any p0)
	{
		PED::_0x9078FB0557364099(p0);
	}

	static bool LUA_NATIVE_PED_IS_PED_FALLING_OVER(Ped ped)
	{
		auto retval = (bool)PED::IS_PED_FALLING_OVER(ped);
		return retval;
	}

	static bool LUA_NATIVE_PED_HAS_PED_BEEN_SHOVED_RECENTLY_(Ped ped, int ms)
	{
		auto retval = (bool)PED::_HAS_PED_BEEN_SHOVED_RECENTLY(ped, ms);
		return retval;
	}

	static Ped LUA_NATIVE_PED_GET_PED_TRANQUILIZER_(Ped ped)
	{
		auto retval = PED::_GET_PED_TRANQUILIZER(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_0x0D497AA69059FE40_(Any p0, Any p1)
	{
		PED::_0x0D497AA69059FE40(p0, p1);
	}

	static void LUA_NATIVE_PED_0xD7D2F45C56A4F4DF_(Any p0, Any p1, Any p2)
	{
		PED::_0xD7D2F45C56A4F4DF(p0, p1, p2);
	}

	static void LUA_NATIVE_PED_SET_PED_CULL_RANGE_(Ped ped, float p1, float p2)
	{
		PED::_SET_PED_CULL_RANGE(ped, p1, p2);
	}

	static void LUA_NATIVE_PED_0x1D23D3F70606D788_(Any p0, Any p1)
	{
		PED::_0x1D23D3F70606D788(p0, p1);
	}

	static int LUA_NATIVE_PED_GET_META_PED_TYPE_(Ped ped)
	{
		auto retval = PED::_GET_META_PED_TYPE(ped);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_META_PED_USING_COMPONENT_(Ped ped, Hash component)
	{
		auto retval = (bool)PED::_IS_META_PED_USING_COMPONENT(ped, component);
		return retval;
	}

	static bool LUA_NATIVE_PED_0xBD0E4F52F6D95242_(Ped ped)
	{
		auto retval = (bool)PED::_0xBD0E4F52F6D95242(ped);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_PED_CHILD_(Ped ped)
	{
		auto retval = (bool)PED::_IS_PED_CHILD(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_0xFFA1594703ED27CA_(Ped ped, int p1)
	{
		PED::_0xFFA1594703ED27CA(ped, p1);
	}

	static void LUA_NATIVE_PED_SET_META_PED_TAG_(Ped ped, Hash drawable, Hash albedo, Hash normal, Hash material, Hash palette, int tint0, int tint1, int tint2)
	{
		PED::_SET_META_PED_TAG(ped, drawable, albedo, normal, material, palette, tint0, tint1, tint2);
	}

	static void LUA_NATIVE_PED_REMOVE_TAG_FROM_META_PED(Ped ped, Hash component, int p2)
	{
		PED::REMOVE_TAG_FROM_META_PED(ped, component, p2);
	}

	static void LUA_NATIVE_PED_0xA2B8E47442C76CEC_(Any p0, Any p1)
	{
		PED::_0xA2B8E47442C76CEC(p0, p1);
	}

	static int LUA_NATIVE_PED_GET_NUM_COMPONENT_CATEGORIES_IN_PED_(Ped ped)
	{
		auto retval = PED::_GET_NUM_COMPONENT_CATEGORIES_IN_PED(ped);
		return retval;
	}

	static Hash LUA_NATIVE_PED_GET_PED_COMPONENT_CATEGORY_BY_INDEX_(Ped ped, int index)
	{
		auto retval = PED::_GET_PED_COMPONENT_CATEGORY_BY_INDEX(ped, index);
		return retval;
	}

	static int LUA_NATIVE_PED_GET_NUM_COMPONENTS_IN_PED_(Ped ped)
	{
		auto retval = PED::_GET_NUM_COMPONENTS_IN_PED(ped);
		return retval;
	}

	static Any LUA_NATIVE_PED_0x9B90842304C938A7_(Any p0, Any p1, Any p2)
	{
		auto retval = PED::_0x9B90842304C938A7(p0, p1, p2);
		return retval;
	}

	static void LUA_NATIVE_PED_UPDATE_PED_VARIATION_(Ped ped, bool p1, bool p2, bool p3, bool p4, bool p5)
	{
		PED::_UPDATE_PED_VARIATION(ped, p1, p2, p3, p4, p5);
	}

	static void LUA_NATIVE_PED_0xCB1A3864C524F784_(Any p0, Any p1)
	{
		PED::_0xCB1A3864C524F784(p0, p1);
	}

	static void LUA_NATIVE_PED_0xFA0D206B489A6846_(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		PED::_0xFA0D206B489A6846(p0, p1, p2, p3, p4);
	}

	static Any LUA_NATIVE_PED_0xA4AC05B1A364EBC5_(Any p0, Any p1, Any p2)
	{
		auto retval = PED::_0xA4AC05B1A364EBC5(p0, p1, p2);
		return retval;
	}

	static void LUA_NATIVE_PED_0x1298B3D8E4C2409F_(Any p0)
	{
		PED::_0x1298B3D8E4C2409F(p0);
	}

	static Any LUA_NATIVE_PED_0xA274F51EF7E34B95_(Any p0, Any p1)
	{
		auto retval = PED::_0xA274F51EF7E34B95(p0, p1);
		return retval;
	}

	static Any LUA_NATIVE_PED_0xC2EF407645BEECDC_(Any p0)
	{
		auto retval = PED::_0xC2EF407645BEECDC(p0);
		return retval;
	}

	static void LUA_NATIVE_PED_EQUIP_META_PED_OUTFIT_(Ped ped, Hash hash)
	{
		PED::_EQUIP_META_PED_OUTFIT(ped, hash);
	}

	static void LUA_NATIVE_PED_0xFA742B82D093D848_(Any p0, Any p1, Any p2)
	{
		PED::_0xFA742B82D093D848(p0, p1, p2);
	}

	static Hash LUA_NATIVE_PED_GET_PED_META_OUTFIT_HASH_(Ped ped)
	{
		auto retval = PED::_GET_PED_META_OUTFIT_HASH(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_0xA2F8B3B5FEDFC100_(Any p0, Any p1)
	{
		PED::_0xA2F8B3B5FEDFC100(p0, p1);
	}

	static void LUA_NATIVE_PED_EQUIP_META_PED_SUBOUTFIT_(Ped ped, Hash suboutfit, int p2)
	{
		PED::_EQUIP_META_PED_SUBOUTFIT(ped, suboutfit, p2);
	}

	static bool LUA_NATIVE_PED_DOES_META_PED_OUTFIT_EXIST_FOR_PED_MODEL_(Hash outfit, Hash model)
	{
		auto retval = (bool)PED::_DOES_META_PED_OUTFIT_EXIST_FOR_PED_MODEL(outfit, model);
		return retval;
	}

	static bool LUA_NATIVE_PED_DOES_META_PED_SUBOUTFIT_EXIST_FOR_PED_MODEL_(Hash outfit, Hash suboutfit, Hash model)
	{
		auto retval = (bool)PED::_DOES_META_PED_SUBOUTFIT_EXIST_FOR_PED_MODEL(outfit, suboutfit, model);
		return retval;
	}

	static Any LUA_NATIVE_PED_0x62FDF4E678E40CC6_(Entity entity, Any p1)
	{
		auto retval = PED::_0x62FDF4E678E40CC6(entity, p1);
		return retval;
	}

	static void LUA_NATIVE_PED_RESET_PED_COMPONENTS_(Ped ped)
	{
		PED::_RESET_PED_COMPONENTS(ped);
	}

	static void LUA_NATIVE_PED_0x370A973252741AC4_(Ped ped, bool p1)
	{
		PED::_0x370A973252741AC4(ped, p1);
	}

	static void LUA_NATIVE_PED_SET_RANDOM_OUTFIT_VARIATION_(Ped ped, bool p1)
	{
		PED::_SET_RANDOM_OUTFIT_VARIATION(ped, p1);
	}

	static int LUA_NATIVE_PED_GET_NUM_META_PED_OUTFITS(Ped ped)
	{
		auto retval = PED::GET_NUM_META_PED_OUTFITS(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_EQUIP_META_PED_OUTFIT_PRESET_(Ped ped, int presetId, bool p2)
	{
		PED::_EQUIP_META_PED_OUTFIT_PRESET(ped, presetId, p2);
	}

	static void LUA_NATIVE_PED_EQUIP_META_PED_OUTFIT_EXTRA_(Ped ped, int component, Any p2, Any p3)
	{
		PED::_EQUIP_META_PED_OUTFIT_EXTRA(ped, component, p2, p3);
	}

	static bool LUA_NATIVE_PED_IS_META_PED_OUTFIT_EQUIPPED_(Ped ped, Hash outfit)
	{
		auto retval = (bool)PED::_IS_META_PED_OUTFIT_EQUIPPED(ped, outfit);
		return retval;
	}

	static void LUA_NATIVE_PED_0x851966E1E35AF491_(Any p0, Any p1)
	{
		PED::_0x851966E1E35AF491(p0, p1);
	}

	static void LUA_NATIVE_PED_SET_TEXTURE_OUTFIT_TINTS_(Ped ped, Hash componentCategory, Hash palette, int tint0, int tint1, int tint2)
	{
		PED::_SET_TEXTURE_OUTFIT_TINTS(ped, componentCategory, palette, tint0, tint1, tint2);
	}

	static int LUA_NATIVE_PED_REQUEST_META_PED_(Hash model, int p1)
	{
		auto retval = PED::_REQUEST_META_PED(model, p1);
		return retval;
	}

	static bool LUA_NATIVE_PED_HAS_META_PED_REQUEST_LOADED_(int requestId)
	{
		auto retval = (bool)PED::_HAS_META_PED_REQUEST_LOADED(requestId);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_META_PED_REQUEST_VALID_(int requestId)
	{
		auto retval = (bool)PED::_IS_META_PED_REQUEST_VALID(requestId);
		return retval;
	}

	static Ped LUA_NATIVE_PED_CREATE_META_PED_(int requestId, float x, float y, float z, float heading, bool p5, bool p6, bool p7, bool p8, bool p9)
	{
		auto retval = PED::_CREATE_META_PED(requestId, x, y, z, heading, p5, p6, p7, p8, p9);
		return retval;
	}

	static void LUA_NATIVE_PED_RELEASE_META_PED_REQUEST_(int requestId)
	{
		PED::_RELEASE_META_PED_REQUEST(requestId);
	}

	static int LUA_NATIVE_PED_REQUEST_META_PED_OUTFIT_(Hash model, Hash outfit)
	{
		auto retval = PED::_REQUEST_META_PED_OUTFIT(model, outfit);
		return retval;
	}

	static Any LUA_NATIVE_PED_0x27E8A84C12B0B7D1_(Any p0, Any p1, Any p2)
	{
		auto retval = PED::_0x27E8A84C12B0B7D1(p0, p1, p2);
		return retval;
	}

	static Any LUA_NATIVE_PED_0x273915CE30780986_(Any p0, Any p1)
	{
		auto retval = PED::_0x273915CE30780986(p0, p1);
		return retval;
	}

	static void LUA_NATIVE_PED_RELEASE_META_PED_OUTFIT_REQUEST_(int requestId)
	{
		PED::_RELEASE_META_PED_OUTFIT_REQUEST(requestId);
	}

	static int LUA_NATIVE_PED_0x3FCBB5FCFD968698_(Hash drawable, Hash albedo, Hash normal, Hash material, Any p4)
	{
		auto retval = PED::_0x3FCBB5FCFD968698(drawable, albedo, normal, material, p4);
		return retval;
	}

	static int LUA_NATIVE_PED_REQUEST_META_PED_ASSET_BUNDLE_(Hash asset, int p1)
	{
		auto retval = PED::_REQUEST_META_PED_ASSET_BUNDLE(asset, p1);
		return retval;
	}

	static Any LUA_NATIVE_PED_REQUEST_META_PED_COMPONENT_(int metaPedType, Any p1, int p2, int p3, int p4)
	{
		auto retval = PED::_REQUEST_META_PED_COMPONENT(metaPedType, p1, p2, p3, p4);
		return retval;
	}

	static void LUA_NATIVE_PED_RELEASE_META_PED_ASSET_REQUEST_(int requestId)
	{
		PED::_RELEASE_META_PED_ASSET_REQUEST(requestId);
	}

	static bool LUA_NATIVE_PED_HAS_META_PED_ASSET_LOADED_(int requestId)
	{
		auto retval = (bool)PED::_HAS_META_PED_ASSET_LOADED(requestId);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_META_PED_ASSET_VALID_(int requestId)
	{
		auto retval = (bool)PED::_IS_META_PED_ASSET_VALID(requestId);
		return retval;
	}

	static Entity LUA_NATIVE_PED_CREATE_META_PED_ASSET_(Hash asset, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, bool p7, bool p8, bool p9)
	{
		auto retval = PED::_CREATE_META_PED_ASSET(asset, posX, posY, posZ, rotX, rotY, rotZ, p7, p8, p9);
		return retval;
	}

	static bool LUA_NATIVE_PED_HAS_META_PED_OUTFIT_LOADED_(int requestId)
	{
		auto retval = (bool)PED::_HAS_META_PED_OUTFIT_LOADED(requestId);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_META_PED_OUTFIT_REQUEST_VALID_(int requestId)
	{
		auto retval = (bool)PED::_IS_META_PED_OUTFIT_REQUEST_VALID(requestId);
		return retval;
	}

	static Ped LUA_NATIVE_PED_CREATE_META_PED_OUTFIT_PED_(int requestId, float x, float y, float z, float heading, bool p5, bool p6, bool p7, bool p8)
	{
		auto retval = PED::_CREATE_META_PED_OUTFIT_PED(requestId, x, y, z, heading, p5, p6, p7, p8);
		return retval;
	}

	static bool LUA_NATIVE_PED_APPLY_PED_META_PED_OUTFIT_(int requestId, Ped ped, bool p2, bool p3)
	{
		auto retval = (bool)PED::_APPLY_PED_META_PED_OUTFIT(requestId, ped, p2, p3);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_META_PED_WEARINESS_(Ped ped, float weariness)
	{
		PED::_SET_META_PED_WEARINESS(ped, weariness);
	}

	static void LUA_NATIVE_PED_0xF47D54B986F0A346_(Ped ped, int danceIntensity)
	{
		PED::_0xF47D54B986F0A346(ped, danceIntensity);
	}

	static void LUA_NATIVE_PED_0x3EFED081B4834BA1_(Any p0)
	{
		PED::_0x3EFED081B4834BA1(p0);
	}

	static void LUA_NATIVE_PED_0x0FB1BA7FF73B41E1_(Any p0, Any p1, Any p2)
	{
		PED::_0x0FB1BA7FF73B41E1(p0, p1, p2);
	}

	static Any LUA_NATIVE_PED_0xB292203008EBBAAC_(Any p0)
	{
		auto retval = PED::_0xB292203008EBBAAC(p0);
		return retval;
	}

	static bool LUA_NATIVE_PED_0xD4D403EA031F351C_(Ped ped)
	{
		auto retval = (bool)PED::_0xD4D403EA031F351C(ped);
		return retval;
	}

	static int LUA_NATIVE_PED_GET_PELT_FROM_HORSE_(Ped horse, int index)
	{
		auto retval = PED::_GET_PELT_FROM_HORSE(horse, index);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PELT_FOR_HORSE_(Ped horse, int peltId)
	{
		PED::_SET_PELT_FOR_HORSE(horse, peltId);
	}

	static void LUA_NATIVE_PED_0xC412AA1C73111FE0_(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		PED::_0xC412AA1C73111FE0(p0, p1, p2, p3, p4);
	}

	static void LUA_NATIVE_PED_CLEAR_PELT_FROM_HORSE_(Ped horse, int peltId)
	{
		PED::_CLEAR_PELT_FROM_HORSE(horse, peltId);
	}

	static void LUA_NATIVE_PED_SET_PED_LIGHTS_(Ped ped, bool toggle)
	{
		PED::_SET_PED_LIGHTS(ped, toggle);
	}

	static void LUA_NATIVE_PED_0xD049FDAF089FDDB0_(Ped ped, Hash p1, float p2)
	{
		PED::_0xD049FDAF089FDDB0(ped, p1, p2);
	}

	static void LUA_NATIVE_PED_0xDD9540E7B1C9714F_(Ped ped, Hash p1, float r, float g, float b)
	{
		PED::_0xDD9540E7B1C9714F(ped, p1, r, g, b);
	}

	static void LUA_NATIVE_PED_0x55546004A244302A_(Any p0, Any p1)
	{
		PED::_0x55546004A244302A(p0, p1);
	}

	static void LUA_NATIVE_PED_SET_HEALTH_RECHARGE_MULTIPLIER_(Ped ped, int multiplier)
	{
		PED::_SET_HEALTH_RECHARGE_MULTIPLIER(ped, multiplier);
	}

	static float LUA_NATIVE_PED_GET_HEALTH_RECHARGE_MULTIPLIER_(Ped ped)
	{
		auto retval = PED::_GET_HEALTH_RECHARGE_MULTIPLIER(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_STAMINA_DEPLETION_MULTIPLIER_(Ped ped, int multiplier)
	{
		PED::_SET_STAMINA_DEPLETION_MULTIPLIER(ped, multiplier);
	}

	static float LUA_NATIVE_PED_GET_STAMINA_DEPLETION_MULTIPLIER_(Ped ped)
	{
		auto retval = PED::_GET_STAMINA_DEPLETION_MULTIPLIER(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_STAMINA_RECHARGE_MULTIPLIER_(Ped ped, int multiplier)
	{
		PED::_SET_STAMINA_RECHARGE_MULTIPLIER(ped, multiplier);
	}

	static float LUA_NATIVE_PED_GET_STAMINA_RECHARGE_MULTIPLIER_(Ped ped)
	{
		auto retval = PED::_GET_STAMINA_RECHARGE_MULTIPLIER(ped);
		return retval;
	}

	static bool LUA_NATIVE_PED_CHANGE_PED_STAMINA_(Ped ped, float amount)
	{
		auto retval = (bool)PED::_CHANGE_PED_STAMINA(ped, amount);
		return retval;
	}

	static float LUA_NATIVE_PED_GET_PED_STAMINA_(Ped ped)
	{
		auto retval = PED::_GET_PED_STAMINA(ped);
		return retval;
	}

	static float LUA_NATIVE_PED_GET_PED_STAMINA_NORMALIZED_(Ped ped)
	{
		auto retval = PED::_GET_PED_STAMINA_NORMALIZED(ped);
		return retval;
	}

	static float LUA_NATIVE_PED_GET_PED_MAX_STAMINA_(Ped ped)
	{
		auto retval = PED::_GET_PED_MAX_STAMINA(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_0x36513AFFC703C60D_(Any p0)
	{
		PED::_0x36513AFFC703C60D(p0);
	}

	static void LUA_NATIVE_PED_RESTORE_PED_STAMINA_(Ped ped, float stamina)
	{
		PED::_RESTORE_PED_STAMINA(ped, stamina);
	}

	static int LUA_NATIVE_PED_0xFC3B580C4380B5B7_(Ped ped)
	{
		auto retval = PED::_0xFC3B580C4380B5B7(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_0xEA8763E505AFD49A_(Any p0, Any p1, Any p2)
	{
		PED::_0xEA8763E505AFD49A(p0, p1, p2);
	}

	static void LUA_NATIVE_PED_0xE4EF4382E22C780C_(Any p0)
	{
		PED::_0xE4EF4382E22C780C(p0);
	}

	static void LUA_NATIVE_PED_0xD61FCF9FCFD515B7_(Any p0, Any p1, Any p2)
	{
		PED::_0xD61FCF9FCFD515B7(p0, p1, p2);
	}

	static void LUA_NATIVE_PED_0x8D9DB115FBA8E23D_(Any p0)
	{
		PED::_0x8D9DB115FBA8E23D(p0);
	}

	static Any LUA_NATIVE_PED_GET_NUM_RESERVED_HEALTH_(Ped ped)
	{
		auto retval = PED::_GET_NUM_RESERVED_HEALTH(ped);
		return retval;
	}

	static Any LUA_NATIVE_PED_0xD97BC27AC039F681_(Any p0, Any p1, Any p2, Any p3)
	{
		auto retval = PED::_0xD97BC27AC039F681(p0, p1, p2, p3);
		return retval;
	}

	static Any LUA_NATIVE_PED_0xF6A8C4B4A11AE89C_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		auto retval = PED::_0xF6A8C4B4A11AE89C(p0, p1, p2, p3, p4, p5);
		return retval;
	}

	static void LUA_NATIVE_PED_0xE4C95E0AE31C6512_(Ped ped, Any p1)
	{
		PED::_0xE4C95E0AE31C6512(ped, p1);
	}

	static Object LUA_NATIVE_PED_GET_PED_LAST_DROPPED_HAT_(Ped ped)
	{
		auto retval = PED::_GET_PED_LAST_DROPPED_HAT(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_0x5D4CD22A8C82A81A_(Ped ped, bool p1)
	{
		PED::_0x5D4CD22A8C82A81A(ped, p1);
	}

	static void LUA_NATIVE_PED_0xBF567DF2BEF211A6_(Any p0, Any p1)
	{
		PED::_0xBF567DF2BEF211A6(p0, p1);
	}

	static int LUA_NATIVE_PED_CREATE_GRAVITY_WELL_(float xPos, float yPos, float zPos, float heading, float radius, float p5, float p6, float p7, bool stopAtDestination)
	{
		auto retval = PED::_CREATE_GRAVITY_WELL(xPos, yPos, zPos, heading, radius, p5, p6, p7, stopAtDestination);
		return retval;
	}

	static void LUA_NATIVE_PED_REMOVE_GRAVITY_WELL_(int handle)
	{
		PED::_REMOVE_GRAVITY_WELL(handle);
	}

	static bool LUA_NATIVE_PED_IS_PED_INTIMIDATED_(Ped ped)
	{
		auto retval = (bool)PED::_IS_PED_INTIMIDATED(ped);
		return retval;
	}

	static bool LUA_NATIVE_PED_0x7EE3A8660F38797E_(Ped ped)
	{
		auto retval = (bool)PED::_0x7EE3A8660F38797E(ped);
		return retval;
	}

	static Any LUA_NATIVE_PED_0xA180FBD502A03125_(Any p0, Any p1, Any p2)
	{
		auto retval = PED::_0xA180FBD502A03125(p0, p1, p2);
		return retval;
	}

	static int LUA_NATIVE_PED_REQUEST_TEXTURE_(Hash albedoHash, Hash normalHash, Hash materialHash)
	{
		auto retval = PED::_REQUEST_TEXTURE(albedoHash, normalHash, materialHash);
		return retval;
	}

	static void LUA_NATIVE_PED_APPLY_TEXTURE_ON_PED_(Ped ped, Hash componentHash, int textureId)
	{
		PED::_APPLY_TEXTURE_ON_PED(ped, componentHash, textureId);
	}

	static void LUA_NATIVE_PED_RELEASE_TEXTURE_(int textureId)
	{
		PED::_RELEASE_TEXTURE(textureId);
	}

	static void LUA_NATIVE_PED_UPDATE_PED_TEXTURE_(int textureId)
	{
		PED::_UPDATE_PED_TEXTURE(textureId);
	}

	static void LUA_NATIVE_PED_RESET_PED_TEXTURE_(int textureId)
	{
		PED::_RESET_PED_TEXTURE(textureId);
	}

	static bool LUA_NATIVE_PED_IS_TEXTURE_VALID_(int textureId)
	{
		auto retval = (bool)PED::_IS_TEXTURE_VALID(textureId);
		return retval;
	}

	static int LUA_NATIVE_PED_ADD_TEXTURE_LAYER_(int textureId, Hash albedoHash, Hash normalHash, Hash materialHash, int blendType, float texAlpha, int sheetGridIndex)
	{
		auto retval = PED::_ADD_TEXTURE_LAYER(textureId, albedoHash, normalHash, materialHash, blendType, texAlpha, sheetGridIndex);
		return retval;
	}

	static void LUA_NATIVE_PED_REMOVE_PED_OVERLAY_(int textureId, int overlayId)
	{
		PED::_REMOVE_PED_OVERLAY(textureId, overlayId);
	}

	static void LUA_NATIVE_PED_SET_TEXTURE_LAYER_SHEET_GRID_INDEX_(int textureId, int layerId, int sheetGridIndex)
	{
		PED::_SET_TEXTURE_LAYER_SHEET_GRID_INDEX(textureId, layerId, sheetGridIndex);
	}

	static void LUA_NATIVE_PED_SET_TEXTURE_LAYER_ALPHA_(int textureId, int layerId, float texAlpha)
	{
		PED::_SET_TEXTURE_LAYER_ALPHA(textureId, layerId, texAlpha);
	}

	static void LUA_NATIVE_PED_SET_TEXTURE_LAYER_ROUGHNESS_(int textureId, int layerId, float texRough)
	{
		PED::_SET_TEXTURE_LAYER_ROUGHNESS(textureId, layerId, texRough);
	}

	static void LUA_NATIVE_PED_SET_TEXTURE_LAYER_PALLETE_(int textureId, int layerId, Hash paletteHash)
	{
		PED::_SET_TEXTURE_LAYER_PALLETE(textureId, layerId, paletteHash);
	}

	static void LUA_NATIVE_PED_SET_TEXTURE_LAYER_TINT_(int textureId, int layerId, int tint0, int tint1, int tint2)
	{
		PED::_SET_TEXTURE_LAYER_TINT(textureId, layerId, tint0, tint1, tint2);
	}

	static void LUA_NATIVE_PED_SET_TEXTURE_LAYER_MOD_(int textureId, int layerId, Hash modTextureHash, float modAlpha, int modChannel)
	{
		PED::_SET_TEXTURE_LAYER_MOD(textureId, layerId, modTextureHash, modAlpha, modChannel);
	}

	static void LUA_NATIVE_PED_SET_TEXTURE_LAYER_TEXTURE_MAP_(int textureId, int layerId, Hash albedoHash, Hash normalHash, Hash materialHash)
	{
		PED::_SET_TEXTURE_LAYER_TEXTURE_MAP(textureId, layerId, albedoHash, normalHash, materialHash);
	}

	static void LUA_NATIVE_PED_CLEAR_PED_TEXTURE_(int textureId)
	{
		PED::_CLEAR_PED_TEXTURE(textureId);
	}

	static void LUA_NATIVE_PED_0xC991EF46FE323867_(Ped ped, Any p1)
	{
		PED::_0xC991EF46FE323867(ped, p1);
	}

	static void LUA_NATIVE_PED_0x1F8215D0E446F593_(Any p0, Any p1, Any p2)
	{
		PED::_0x1F8215D0E446F593(p0, p1, p2);
	}

	static bool LUA_NATIVE_PED_IS_LOCATION_SPAWN_SAFE(Ped ped, float p1)
	{
		auto retval = (bool)PED::IS_LOCATION_SPAWN_SAFE(ped, p1);
		return retval;
	}

	static void LUA_NATIVE_PED_0x53BA7D96B9A421D9_(Any p0, Any p1)
	{
		PED::_0x53BA7D96B9A421D9(p0, p1);
	}

	static void LUA_NATIVE_PED_0x96C7B659854DE629_(Any p0, Any p1)
	{
		PED::_0x96C7B659854DE629(p0, p1);
	}

	static void LUA_NATIVE_PED_SET_HORSE_AVOIDANCE_LEVEL(Ped horse, int avoidanceLevel)
	{
		PED::SET_HORSE_AVOIDANCE_LEVEL(horse, avoidanceLevel);
	}

	static void LUA_NATIVE_PED_RESET_HORSE_AVOIDANCE_LEVEL_TO_DEFAULT(Ped horse)
	{
		PED::RESET_HORSE_AVOIDANCE_LEVEL_TO_DEFAULT(horse);
	}

	static Any LUA_NATIVE_PED_SET_PED_USE_HORSE_MAP_COLLISION_(Ped ped, bool toggle)
	{
		auto retval = PED::_SET_PED_USE_HORSE_MAP_COLLISION(ped, toggle);
		return retval;
	}

	static void LUA_NATIVE_PED_0x5B73975B4F12F7F3_(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		PED::_0x5B73975B4F12F7F3(p0, p1, p2, p3, p4);
	}

	static std::tuple<bool, Hash, Hash, Hash, Hash> LUA_NATIVE_PED_GET_META_PED_ASSET_GUIDS(Ped ped, int index, Hash drawable, Hash albedo, Hash normal, Hash material)
	{
		std::tuple<bool, Hash, Hash, Hash, Hash> return_values;
		std::get<0>(return_values) = (bool)PED::GET_META_PED_ASSET_GUIDS(ped, index, &drawable, &albedo, &normal, &material);
		std::get<1>(return_values) = drawable;
		std::get<2>(return_values) = albedo;
		std::get<3>(return_values) = normal;
		std::get<4>(return_values) = material;

		return return_values;
	}

	static std::tuple<bool, Hash, int, int, int> LUA_NATIVE_PED_GET_META_PED_ASSET_TINT(Ped ped, int index, Hash pallete, int tint0, int tint1, int tint2)
	{
		std::tuple<bool, Hash, int, int, int> return_values;
		std::get<0>(return_values) = (bool)PED::GET_META_PED_ASSET_TINT(ped, index, &pallete, &tint0, &tint1, &tint2);
		std::get<1>(return_values) = pallete;
		std::get<2>(return_values) = tint0;
		std::get<3>(return_values) = tint1;
		std::get<4>(return_values) = tint2;

		return return_values;
	}

	static void LUA_NATIVE_PED_SET_PED_BLACKBOARD_INT_(Ped ped, sol::stack_object variableName, int value, int removeTimer)
	{
		PED::_SET_PED_BLACKBOARD_INT(ped, variableName.is<const char*>() ? variableName.as<const char*>() : nullptr, value, removeTimer);
	}

	static void LUA_NATIVE_PED_SET_PED_BLACKBOARD_BOOL_(Ped ped, sol::stack_object variableName, bool value, int removeTimer)
	{
		PED::_SET_PED_BLACKBOARD_BOOL(ped, variableName.is<const char*>() ? variableName.as<const char*>() : nullptr, value, removeTimer);
	}

	static void LUA_NATIVE_PED_SET_PED_BLACKBOARD_FLOAT_(Ped ped, sol::stack_object variableName, float value, int removeTimer)
	{
		PED::_SET_PED_BLACKBOARD_FLOAT(ped, variableName.is<const char*>() ? variableName.as<const char*>() : nullptr, value, removeTimer);
	}

	static void LUA_NATIVE_PED_SET_PED_BLACKBOARD_HASH_(Ped ped, sol::stack_object variableName, sol::stack_object value, int removeTimer)
	{
		PED::_SET_PED_BLACKBOARD_HASH(ped, variableName.is<const char*>() ? variableName.as<const char*>() : nullptr, value.is<const char*>() ? value.as<const char*>() : nullptr, removeTimer);
	}

	static void LUA_NATIVE_PED_REMOVE_PED_BLACKBOARD_INT_(Ped ped, sol::stack_object variableName)
	{
		PED::_REMOVE_PED_BLACKBOARD_INT(ped, variableName.is<const char*>() ? variableName.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_PED_REMOVE_PED_BLACKBOARD_BOOL_(Ped ped, sol::stack_object variableName)
	{
		PED::_REMOVE_PED_BLACKBOARD_BOOL(ped, variableName.is<const char*>() ? variableName.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_PED_REMOVE_PED_BLACKBOARD_FLOAT_(Ped ped, sol::stack_object variableName)
	{
		PED::_REMOVE_PED_BLACKBOARD_FLOAT(ped, variableName.is<const char*>() ? variableName.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_PED_REMOVE_PED_BLACKBOARD_HASH_(Ped ped, sol::stack_object variableName)
	{
		PED::_REMOVE_PED_BLACKBOARD_HASH(ped, variableName.is<const char*>() ? variableName.as<const char*>() : nullptr);
	}

	static bool LUA_NATIVE_PED_GET_PED_BLACKBOARD_BOOL_(Ped ped, sol::stack_object variableName)
	{
		auto retval = (bool)PED::_GET_PED_BLACKBOARD_BOOL(ped, variableName.is<const char*>() ? variableName.as<const char*>() : nullptr);
		return retval;
	}

	static float LUA_NATIVE_PED_GET_PED_BLACKBOARD_FLOAT_(Ped ped, sol::stack_object variableName)
	{
		auto retval = PED::_GET_PED_BLACKBOARD_FLOAT(ped, variableName.is<const char*>() ? variableName.as<const char*>() : nullptr);
		return retval;
	}

	static Hash LUA_NATIVE_PED_GET_PED_BLACKBOARD_HASH_(Ped ped, sol::stack_object variableName)
	{
		auto retval = PED::_GET_PED_BLACKBOARD_HASH(ped, variableName.is<const char*>() ? variableName.as<const char*>() : nullptr);
		return retval;
	}

	static int LUA_NATIVE_PED_GET_PED_BLACKBOARD_SCRIPT_INT(Ped ped, sol::stack_object variableName)
	{
		auto retval = PED::GET_PED_BLACKBOARD_SCRIPT_INT(ped, variableName.is<const char*>() ? variableName.as<const char*>() : nullptr);
		return retval;
	}

	static bool LUA_NATIVE_PED_GET_PED_BLACKBOARD_SCRIPT_BOOL(Ped ped, sol::stack_object variableName)
	{
		auto retval = (bool)PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(ped, variableName.is<const char*>() ? variableName.as<const char*>() : nullptr);
		return retval;
	}

	static float LUA_NATIVE_PED_GET_PED_BLACKBOARD_SCRIPT_FLOAT(Ped ped, sol::stack_object variableName)
	{
		auto retval = PED::GET_PED_BLACKBOARD_SCRIPT_FLOAT(ped, variableName.is<const char*>() ? variableName.as<const char*>() : nullptr);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_TANK_ATTRIBUTE_SIZE_(Ped ped, int attributeIndex, float size)
	{
		PED::_SET_TANK_ATTRIBUTE_SIZE(ped, attributeIndex, size);
	}

	static Any LUA_NATIVE_PED_0xA31D350D66FA1855_(Any p0)
	{
		auto retval = PED::_0xA31D350D66FA1855(p0);
		return retval;
	}

	static bool LUA_NATIVE_PED_IS_USING_SLIPSTREAM_(Ped ped)
	{
		auto retval = (bool)PED::_IS_USING_SLIPSTREAM(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_0xEEDC9B29314B2733_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		PED::_0xEEDC9B29314B2733(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}

	static void LUA_NATIVE_PED_0x5C90E20C25E6D83C_(Any p0)
	{
		PED::_0x5C90E20C25E6D83C(p0);
	}

	static void LUA_NATIVE_PED_0x10F96086123B939F_(Ped legendaryPed, Ped preyPed, float p2)
	{
		PED::_0x10F96086123B939F(legendaryPed, preyPed, p2);
	}

	static void LUA_NATIVE_PED_0x3FDBB99EFD8CE4AF_(Any p0, Any p1, Any p2)
	{
		PED::_0x3FDBB99EFD8CE4AF(p0, p1, p2);
	}

	static void LUA_NATIVE_PED_0x7E8F9949B7AABBF0_(Any p0, Any p1, Any p2)
	{
		PED::_0x7E8F9949B7AABBF0(p0, p1, p2);
	}

	static Any LUA_NATIVE_PED_0x5DA36CCCB63C0895_(Any p0, Any p1, Any p2)
	{
		auto retval = PED::_0x5DA36CCCB63C0895(p0, p1, p2);
		return retval;
	}

	static void LUA_NATIVE_PED_0x56076667E7C2DCD6_(Any p0, Any p1)
	{
		PED::_0x56076667E7C2DCD6(p0, p1);
	}

	static void LUA_NATIVE_PED_APPLY_SHOP_ITEM_TO_PED_(Ped ped, Hash componentHash, bool immediately, bool isMp, bool p4)
	{
		PED::_APPLY_SHOP_ITEM_TO_PED(ped, componentHash, immediately, isMp, p4);
	}

	static void LUA_NATIVE_PED_REMOVE_SHOP_ITEM_FROM_PED_(Ped ped, Hash componentHash, int p2, bool p3)
	{
		PED::_REMOVE_SHOP_ITEM_FROM_PED(ped, componentHash, p2, p3);
	}

	static void LUA_NATIVE_PED_REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(Ped ped, Hash componentCategory, int p2, bool p3)
	{
		PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(ped, componentCategory, p2, p3);
	}

	static void LUA_NATIVE_PED_UPDATE_SHOP_ITEM_WEARABLE_STATE_(Ped ped, Hash componentHash, Hash wearableState, int p3, bool p4, int p5)
	{
		PED::_UPDATE_SHOP_ITEM_WEARABLE_STATE(ped, componentHash, wearableState, p3, p4, p5);
	}

	static Hash LUA_NATIVE_PED_GET_SHOP_ITEM_COMPONENT_AT_INDEX_(Ped ped, int index, bool p2, uintptr_t argStruct, uintptr_t argStruct2)
	{
		auto retval = PED::_GET_SHOP_ITEM_COMPONENT_AT_INDEX(ped, index, p2, (Any*)argStruct, (Any*)argStruct2);
		return retval;
	}

	static int LUA_NATIVE_PED_GET_SHOP_ITEM_NUM_WEARABLE_STATES_(Hash componentHash, bool isMpFemale, bool p2)
	{
		auto retval = PED::_GET_SHOP_ITEM_NUM_WEARABLE_STATES(componentHash, isMpFemale, p2);
		return retval;
	}

	static Hash LUA_NATIVE_PED_GET_SHOP_ITEM_WEARABLE_STATE_BY_INDEX_(Hash componentHash, int wearableStateIndex, bool isMpFemale, bool p3)
	{
		auto retval = PED::_GET_SHOP_ITEM_WEARABLE_STATE_BY_INDEX(componentHash, wearableStateIndex, isMpFemale, p3);
		return retval;
	}

	static Hash LUA_NATIVE_PED_GET_SHOP_ITEM_COMPONENT_CATEGORY_(Hash componentHash, int metapedType, bool isMP)
	{
		auto retval = PED::_GET_SHOP_ITEM_COMPONENT_CATEGORY(componentHash, metapedType, isMP);
		return retval;
	}

	static Any LUA_NATIVE_PED_0x31B2E7F2E3C58B89_(Any p0, Any p1, Any p2, Any p3)
	{
		auto retval = PED::_0x31B2E7F2E3C58B89(p0, p1, p2, p3);
		return retval;
	}

	static std::tuple<bool, Hash, Hash, Hash, Hash, Hash, Hash, Hash, Hash> LUA_NATIVE_PED_GET_SHOP_ITEM_BASE_LAYERS_(Hash shopItem, Any p1, Ped ped, int metapedType, bool p4, Hash drawable, Hash albedo, Hash normal, Hash material, Hash p9, Hash p10, Hash p11, Hash p12)
	{
		std::tuple<bool, Hash, Hash, Hash, Hash, Hash, Hash, Hash, Hash> return_values;
		std::get<0>(return_values) = (bool)PED::_GET_SHOP_ITEM_BASE_LAYERS(shopItem, p1, ped, metapedType, p4, &drawable, &albedo, &normal, &material, &p9, &p10, &p11, &p12);
		std::get<1>(return_values) = drawable;
		std::get<2>(return_values) = albedo;
		std::get<3>(return_values) = normal;
		std::get<4>(return_values) = material;
		std::get<5>(return_values) = p9;
		std::get<6>(return_values) = p10;
		std::get<7>(return_values) = p11;
		std::get<8>(return_values) = p12;

		return return_values;
	}

	static Any LUA_NATIVE_PED_0xAAB86462966168CE_(Ped ped, bool isMP)
	{
		auto retval = PED::_0xAAB86462966168CE(ped, isMP);
		return retval;
	}

	static Any LUA_NATIVE_PED_GET_SHOP_ITEM_HAT_COMPONENT_(Ped ped, int metapedType, bool p2)
	{
		auto retval = PED::_GET_SHOP_ITEM_HAT_COMPONENT(ped, metapedType, p2);
		return retval;
	}

	static void LUA_NATIVE_PED_REFRESH_META_PED_SHOP_ITEMS_(Ped ped, int p1)
	{
		PED::_REFRESH_META_PED_SHOP_ITEMS(ped, p1);
	}

	static void LUA_NATIVE_PED_0xD103F6DBB5442BE8_(Ped ped, int p1)
	{
		PED::_0xD103F6DBB5442BE8(ped, p1);
	}

	static void LUA_NATIVE_PED_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY_(Ped ped, Hash gxtEntryHash)
	{
		PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(ped, gxtEntryHash);
	}

	static void LUA_NATIVE_PED_SET_PED_PROMPT_NAME_(Ped ped, sol::stack_object name)
	{
		PED::_SET_PED_PROMPT_NAME(ped, name.is<const char*>() ? name.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_PED_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY_2_(Ped ped, Hash gxtEntryHash)
	{
		PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY_2(ped, gxtEntryHash);
	}

	static void LUA_NATIVE_PED_SET_PED_PROMPT_NAME_2_(Ped ped, sol::stack_object name)
	{
		PED::_SET_PED_PROMPT_NAME_2(ped, name.is<const char*>() ? name.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_PED_0xF917F92BF22ECBAB_(Any p0)
	{
		PED::_0xF917F92BF22ECBAB(p0);
	}

	static void LUA_NATIVE_PED_0x49DADFC4CD808B0A_(Any p0, Any p1, Any p2)
	{
		PED::_0x49DADFC4CD808B0A(p0, p1, p2);
	}

	static bool LUA_NATIVE_PED_HAS_PED_TAKEN_GORE_DAMAGE_(Ped ped, int limb)
	{
		auto retval = (bool)PED::_HAS_PED_TAKEN_GORE_DAMAGE(ped, limb);
		return retval;
	}

	static void LUA_NATIVE_PED_0x704C908E9C405136_(Ped ped)
	{
		PED::_0x704C908E9C405136(ped);
	}

	static void LUA_NATIVE_PED_0x7406C71F4AC2FFCC_(Any p0)
	{
		PED::_0x7406C71F4AC2FFCC(p0);
	}

	static void LUA_NATIVE_PED_0x28508173C6A7CC18_(Any p0)
	{
		PED::_0x28508173C6A7CC18(p0);
	}

	static Any LUA_NATIVE_PED_0x52250B92EA70BE3D_(Any p0)
	{
		auto retval = PED::_0x52250B92EA70BE3D(p0);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PED_QUALITY_(Ped ped, int quality)
	{
		PED::_SET_PED_QUALITY(ped, quality);
	}

	static int LUA_NATIVE_PED_GET_PED_QUALITY_(Ped ped)
	{
		auto retval = PED::_GET_PED_QUALITY(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_0xCE7A6C1D5CDE1F9D_(Ped ped, Object object, sol::stack_object propName, sol::stack_object animName)
	{
		PED::_0xCE7A6C1D5CDE1F9D(ped, object, propName.is<const char*>() ? propName.as<const char*>() : nullptr, animName.is<const char*>() ? animName.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_PED_0x604E1010E3162E86_(Any p0, Any p1, Any p2)
	{
		PED::_0x604E1010E3162E86(p0, p1, p2);
	}

	static void LUA_NATIVE_PED_0xE8ABE3B73FC7FE17_(Any p0, Any p1, Any p2, Any p3)
	{
		PED::_0xE8ABE3B73FC7FE17(p0, p1, p2, p3);
	}

	static void LUA_NATIVE_PED_REMOVE_PED_PROP_(Ped ped, sol::stack_object propName)
	{
		PED::_REMOVE_PED_PROP(ped, propName.is<const char*>() ? propName.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_PED_SET_TOTAL_PED_DAMAGE_FALLOFF_BONUS_(Ped ped, float bonus)
	{
		PED::_SET_TOTAL_PED_DAMAGE_FALLOFF_BONUS(ped, bonus);
	}

	static Any LUA_NATIVE_PED_0x095C2277FED731DB_(Any p0)
	{
		auto retval = PED::_0x095C2277FED731DB(p0);
		return retval;
	}

	static void LUA_NATIVE_PED_0x09171A6F8FDE5DC1_(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		PED::_0x09171A6F8FDE5DC1(p0, p1, p2, p3, p4);
	}

	static void LUA_NATIVE_PED_0x09E378C52B1433B5_(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		PED::_0x09E378C52B1433B5(p0, p1, p2, p3, p4);
	}

	static bool LUA_NATIVE_PED_0x6507AC3BD7C99009_(float x, float y, float z, float p3)
	{
		auto retval = (bool)PED::_0x6507AC3BD7C99009(x, y, z, p3);
		return retval;
	}

	static float LUA_NATIVE_PED_GET_PLAYER_PED_WATER_DEPTH_(Ped ped)
	{
		auto retval = PED::_GET_PLAYER_PED_WATER_DEPTH(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_SET_PED_TRAIL_EFFECT_(Ped ped, bool p1, float duration)
	{
		PED::_SET_PED_TRAIL_EFFECT(ped, p1, duration);
	}

	static bool LUA_NATIVE_PED_0xEBAAC9A750E7563B_(Ped ped)
	{
		auto retval = (bool)PED::_0xEBAAC9A750E7563B(ped);
		return retval;
	}

	static void LUA_NATIVE_PED_0x992187D975635DF5_(Any p0, Any p1)
	{
		PED::_0x992187D975635DF5(p0, p1);
	}

	static void LUA_NATIVE_PED_0x0B787A37EEDD226F_(Any p0, Any p1)
	{
		PED::_0x0B787A37EEDD226F(p0, p1);
	}

	void init_native_binding_PED(sol::state& L)
	{
		auto PED = L["PED"].get_or_create<sol::table>();
		PED.set_function("CREATE_PED", LUA_NATIVE_PED_CREATE_PED);
		PED.set_function("DELETE_PED", LUA_NATIVE_PED_DELETE_PED);
		PED.set_function("SET_REMOVE_PED_NETWORKED_", LUA_NATIVE_PED_SET_REMOVE_PED_NETWORKED_);
		PED.set_function("0x7C08E7CB8D951B70_", LUA_NATIVE_PED_0x7C08E7CB8D951B70_);
		PED.set_function("SET_PED_TO_BE_REMOVED_", LUA_NATIVE_PED_SET_PED_TO_BE_REMOVED_);
		PED.set_function("CLONE_PED", LUA_NATIVE_PED_CLONE_PED);
		PED.set_function("CLONE_PED_TO_TARGET", LUA_NATIVE_PED_CLONE_PED_TO_TARGET);
		PED.set_function("IS_PED_IN_VEHICLE", LUA_NATIVE_PED_IS_PED_IN_VEHICLE);
		PED.set_function("IS_PED_IN_MODEL", LUA_NATIVE_PED_IS_PED_IN_MODEL);
		PED.set_function("IS_PED_IN_ANY_VEHICLE", LUA_NATIVE_PED_IS_PED_IN_ANY_VEHICLE);
		PED.set_function("0x9851DE7AEC10B4E1_", LUA_NATIVE_PED_0x9851DE7AEC10B4E1_);
		PED.set_function("IS_PED_INJURED", LUA_NATIVE_PED_IS_PED_INJURED);
		PED.set_function("IS_PED_FATALLY_INJURED", LUA_NATIVE_PED_IS_PED_FATALLY_INJURED);
		PED.set_function("IS_PED_DEAD_OR_DYING", LUA_NATIVE_PED_IS_PED_DEAD_OR_DYING);
		PED.set_function("SET_PED_BLEEDOUT_PROFILE_", LUA_NATIVE_PED_SET_PED_BLEEDOUT_PROFILE_);
		PED.set_function("IS_PED_AIMING_FROM_COVER", LUA_NATIVE_PED_IS_PED_AIMING_FROM_COVER);
		PED.set_function("IS_PED_RELOADING", LUA_NATIVE_PED_IS_PED_RELOADING);
		PED.set_function("IS_PED_A_PLAYER", LUA_NATIVE_PED_IS_PED_A_PLAYER);
		PED.set_function("IS_ANIMAL_CONTROLLED_BY_A_PLAYER_", LUA_NATIVE_PED_IS_ANIMAL_CONTROLLED_BY_A_PLAYER_);
		PED.set_function("CREATE_PED_INSIDE_VEHICLE", LUA_NATIVE_PED_CREATE_PED_INSIDE_VEHICLE);
		PED.set_function("SET_PED_DESIRED_HEADING", LUA_NATIVE_PED_SET_PED_DESIRED_HEADING);
		PED.set_function("FORCE_ALL_HEADING_VALUES_TO_ALIGN", LUA_NATIVE_PED_FORCE_ALL_HEADING_VALUES_TO_ALIGN);
		PED.set_function("IS_PED_FACING_PED", LUA_NATIVE_PED_IS_PED_FACING_PED);
		PED.set_function("IS_PED_IN_MELEE_COMBAT", LUA_NATIVE_PED_IS_PED_IN_MELEE_COMBAT);
		PED.set_function("0x6DB875AFC584FA32_", LUA_NATIVE_PED_0x6DB875AFC584FA32_);
		PED.set_function("IS_PED_STOPPED", LUA_NATIVE_PED_IS_PED_STOPPED);
		PED.set_function("IS_PED_SITTING", LUA_NATIVE_PED_IS_PED_SITTING);
		PED.set_function("0x09D7AFD3716DA8E1_", LUA_NATIVE_PED_0x09D7AFD3716DA8E1_);
		PED.set_function("0x9C81338B2E62CE0A_", LUA_NATIVE_PED_0x9C81338B2E62CE0A_);
		PED.set_function("0xB7DBB2986B87E230_", LUA_NATIVE_PED_0xB7DBB2986B87E230_);
		PED.set_function("0xD355E2F1BB41087E_", LUA_NATIVE_PED_0xD355E2F1BB41087E_);
		PED.set_function("IS_ANY_PED_SHOOTING_IN_AREA", LUA_NATIVE_PED_IS_ANY_PED_SHOOTING_IN_AREA);
		PED.set_function("IS_PED_SHOOTING", LUA_NATIVE_PED_IS_PED_SHOOTING);
		PED.set_function("TIME_SINCE_PED_LAST_SHOT", LUA_NATIVE_PED_TIME_SINCE_PED_LAST_SHOT);
		PED.set_function("SET_PED_ACCURACY", LUA_NATIVE_PED_SET_PED_ACCURACY);
		PED.set_function("GET_PED_ACCURACY", LUA_NATIVE_PED_GET_PED_ACCURACY);
		PED.set_function("IS_PED_MODEL", LUA_NATIVE_PED_IS_PED_MODEL);
		PED.set_function("EXPLODE_PED_HEAD", LUA_NATIVE_PED_EXPLODE_PED_HEAD);
		PED.set_function("ADD_ARMOUR_TO_PED", LUA_NATIVE_PED_ADD_ARMOUR_TO_PED);
		PED.set_function("0x5CA20FBE49891BBD_", LUA_NATIVE_PED_0x5CA20FBE49891BBD_);
		PED.set_function("SET_PED_INTO_VEHICLE", LUA_NATIVE_PED_SET_PED_INTO_VEHICLE);
		PED.set_function("SET_PED_MOVE_ANIMS_BLEND_OUT", LUA_NATIVE_PED_SET_PED_MOVE_ANIMS_BLEND_OUT);
		PED.set_function("0x606D529DADA3C940_", LUA_NATIVE_PED_0x606D529DADA3C940_);
		PED.set_function("IS_PED_MALE", LUA_NATIVE_PED_IS_PED_MALE);
		PED.set_function("IS_PED_HUMAN", LUA_NATIVE_PED_IS_PED_HUMAN);
		PED.set_function("GET_VEHICLE_PED_IS_IN", LUA_NATIVE_PED_GET_VEHICLE_PED_IS_IN);
		PED.set_function("RESET_PED_LAST_VEHICLE", LUA_NATIVE_PED_RESET_PED_LAST_VEHICLE);
		PED.set_function("0xC6136B40FFFB778B_", LUA_NATIVE_PED_0xC6136B40FFFB778B_);
		PED.set_function("0x6E8B87139854022D_", LUA_NATIVE_PED_0x6E8B87139854022D_);
		PED.set_function("GET_NUM_FREE_SLOTS_IN_PED_POOL_", LUA_NATIVE_PED_GET_NUM_FREE_SLOTS_IN_PED_POOL_);
		PED.set_function("RESERVE_AMBIENT_PEDS_", LUA_NATIVE_PED_RESERVE_AMBIENT_PEDS_);
		PED.set_function("RESERVE_AMBIENT_PEDS_TOTAL_", LUA_NATIVE_PED_RESERVE_AMBIENT_PEDS_TOTAL_);
		PED.set_function("UNRESERVE_AMBIENT_PEDS_", LUA_NATIVE_PED_UNRESERVE_AMBIENT_PEDS_);
		PED.set_function("GET_NUM_RESERVED_AMBIENT_PEDS_DESIRED_", LUA_NATIVE_PED_GET_NUM_RESERVED_AMBIENT_PEDS_DESIRED_);
		PED.set_function("GET_NUM_RESERVED_AMBIENT_PEDS_READY_", LUA_NATIVE_PED_GET_NUM_RESERVED_AMBIENT_PEDS_READY_);
		PED.set_function("ARE_ALL_AMBIENT_PED_RESERVATIONS_READY_", LUA_NATIVE_PED_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY_);
		PED.set_function("SET_SCENARIO_PED_RANGE_MULTIPLIER_THIS_FRAME_", LUA_NATIVE_PED_SET_SCENARIO_PED_RANGE_MULTIPLIER_THIS_FRAME_);
		PED.set_function("0x9E3842E5DAD69F80_", LUA_NATIVE_PED_0x9E3842E5DAD69F80_);
		PED.set_function("SET_AMBIENT_PED_DENSITY_MULTIPLIER_THIS_FRAME_", LUA_NATIVE_PED_SET_AMBIENT_PED_DENSITY_MULTIPLIER_THIS_FRAME_);
		PED.set_function("SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME", LUA_NATIVE_PED_SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME);
		PED.set_function("SET_AMBIENT_ANIMAL_DENSITY_MULTIPLIER_THIS_FRAME_", LUA_NATIVE_PED_SET_AMBIENT_ANIMAL_DENSITY_MULTIPLIER_THIS_FRAME_);
		PED.set_function("SET_AMBIENT_HUMAN_DENSITY_MULTIPLIER_THIS_FRAME_", LUA_NATIVE_PED_SET_AMBIENT_HUMAN_DENSITY_MULTIPLIER_THIS_FRAME_);
		PED.set_function("SET_SCENARIO_ANIMAL_DENSITY_MULTIPLIER_THIS_FRAME_", LUA_NATIVE_PED_SET_SCENARIO_ANIMAL_DENSITY_MULTIPLIER_THIS_FRAME_);
		PED.set_function("SET_SCENARIO_HUMAN_DENSITY_MULTIPLIER_THIS_FRAME_", LUA_NATIVE_PED_SET_SCENARIO_HUMAN_DENSITY_MULTIPLIER_THIS_FRAME_);
		PED.set_function("SET_SCENARIO_PED_DENSITY_THIS_FRAME_", LUA_NATIVE_PED_SET_SCENARIO_PED_DENSITY_THIS_FRAME_);
		PED.set_function("INSTANTLY_FILL_PED_POPULATION", LUA_NATIVE_PED_INSTANTLY_FILL_PED_POPULATION);
		PED.set_function("0xBFA6B7731C3BAF02_", LUA_NATIVE_PED_0xBFA6B7731C3BAF02_);
		PED.set_function("IS_INSTANTLY_FILL_PED_POPULATION_FINISHED", LUA_NATIVE_PED_IS_INSTANTLY_FILL_PED_POPULATION_FINISHED);
		PED.set_function("SET_PED_NON_CREATION_AREA", LUA_NATIVE_PED_SET_PED_NON_CREATION_AREA);
		PED.set_function("CLEAR_PED_NON_CREATION_AREA", LUA_NATIVE_PED_CLEAR_PED_NON_CREATION_AREA);
		PED.set_function("ATTACH_VOLUME_TO_ENTITY_", LUA_NATIVE_PED_ATTACH_VOLUME_TO_ENTITY_);
		PED.set_function("DETACH_VOLUME_FROM_ENTITY_", LUA_NATIVE_PED_DETACH_VOLUME_FROM_ENTITY_);
		PED.set_function("SET_PED_ONTO_MOUNT", LUA_NATIVE_PED_SET_PED_ONTO_MOUNT);
		PED.set_function("REMOVE_PED_FROM_MOUNT_", LUA_NATIVE_PED_REMOVE_PED_FROM_MOUNT_);
		PED.set_function("CREATE_PED_ON_MOUNT", LUA_NATIVE_PED_CREATE_PED_ON_MOUNT);
		PED.set_function("IS_MOUNT_SEAT_FREE_", LUA_NATIVE_PED_IS_MOUNT_SEAT_FREE_);
		PED.set_function("IS_PED_ON_MOUNT", LUA_NATIVE_PED_IS_PED_ON_MOUNT);
		PED.set_function("IS_PED_FULLY_ON_MOUNT", LUA_NATIVE_PED_IS_PED_FULLY_ON_MOUNT);
		PED.set_function("GET_MOUNT", LUA_NATIVE_PED_GET_MOUNT);
		PED.set_function("GET_LAST_LED_MOUNT_", LUA_NATIVE_PED_GET_LAST_LED_MOUNT_);
		PED.set_function("GET_LAST_MOUNT_", LUA_NATIVE_PED_GET_LAST_MOUNT_);
		PED.set_function("0xED1C764997A86D5A_", LUA_NATIVE_PED_0xED1C764997A86D5A_);
		PED.set_function("0xB8AB265426CFE6DD_", LUA_NATIVE_PED_0xB8AB265426CFE6DD_);
		PED.set_function("0xE8D1CCB9375C101B_", LUA_NATIVE_PED_0xE8D1CCB9375C101B_);
		PED.set_function("0xA691C10054275290_", LUA_NATIVE_PED_0xA691C10054275290_);
		PED.set_function("0x6734F0A6A52C371C_", LUA_NATIVE_PED_0x6734F0A6A52C371C_);
		PED.set_function("0x024EC9B649111915_", LUA_NATIVE_PED_0x024EC9B649111915_);
		PED.set_function("SET_PED_OWNS_ANIMAL", LUA_NATIVE_PED_SET_PED_OWNS_ANIMAL);
		PED.set_function("GET_ACTIVE_ANIMAL_OWNER_", LUA_NATIVE_PED_GET_ACTIVE_ANIMAL_OWNER_);
		PED.set_function("CLEAR_ACTIVE_ANIMAL_OWNER_", LUA_NATIVE_PED_CLEAR_ACTIVE_ANIMAL_OWNER_);
		PED.set_function("GET_HORSE_TAMING_STATE_", LUA_NATIVE_PED_GET_HORSE_TAMING_STATE_);
		PED.set_function("0x54D3CD482742C482_", LUA_NATIVE_PED_0x54D3CD482742C482_);
		PED.set_function("0x5CB2EBB467BE3ED6_", LUA_NATIVE_PED_0x5CB2EBB467BE3ED6_);
		PED.set_function("0x9F0F28B42C4EE80A_", LUA_NATIVE_PED_0x9F0F28B42C4EE80A_);
		PED.set_function("SET_MOUNT_BONDING_LEVEL_", LUA_NATIVE_PED_SET_MOUNT_BONDING_LEVEL_);
		PED.set_function("SET_MOUNT_SECURITY_ENABLED_", LUA_NATIVE_PED_SET_MOUNT_SECURITY_ENABLED_);
		PED.set_function("0x9B65444C07B782BF_", LUA_NATIVE_PED_0x9B65444C07B782BF_);
		PED.set_function("IS_ANIMAL_INTERACTION_POSSIBLE", LUA_NATIVE_PED_IS_ANIMAL_INTERACTION_POSSIBLE);
		PED.set_function("IS_ANIMAL_INTERACTION_RUNNING_", LUA_NATIVE_PED_IS_ANIMAL_INTERACTION_RUNNING_);
		PED.set_function("0x8BE24D74D74C6E9B_", LUA_NATIVE_PED_0x8BE24D74D74C6E9B_);
		PED.set_function("0x77243ED4F7CAAA55_", LUA_NATIVE_PED_0x77243ED4F7CAAA55_);
		PED.set_function("IS_PED_ON_VEHICLE", LUA_NATIVE_PED_IS_PED_ON_VEHICLE);
		PED.set_function("IS_PED_ON_SPECIFIC_VEHICLE", LUA_NATIVE_PED_IS_PED_ON_SPECIFIC_VEHICLE);
		PED.set_function("WARP_PED_OUT_OF_VEHICLE_", LUA_NATIVE_PED_WARP_PED_OUT_OF_VEHICLE_);
		PED.set_function("SET_PED_MONEY", LUA_NATIVE_PED_SET_PED_MONEY);
		PED.set_function("GET_PED_MONEY", LUA_NATIVE_PED_GET_PED_MONEY);
		PED.set_function("SET_BLOCKING_OF_NON_TEMPORARY_EVENTS_FOR_AMBIENT_PEDS_THIS_FRAME", LUA_NATIVE_PED_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS_FOR_AMBIENT_PEDS_THIS_FRAME);
		PED.set_function("0x34EDDD59364AD74A_", LUA_NATIVE_PED_0x34EDDD59364AD74A_);
		PED.set_function("0x2D976DBDC731DF80_", LUA_NATIVE_PED_0x2D976DBDC731DF80_);
		PED.set_function("IS_PED_SITTING_IN_VEHICLE", LUA_NATIVE_PED_IS_PED_SITTING_IN_VEHICLE);
		PED.set_function("IS_PED_SITTING_IN_ANY_VEHICLE", LUA_NATIVE_PED_IS_PED_SITTING_IN_ANY_VEHICLE);
		PED.set_function("IS_PED_ON_FOOT", LUA_NATIVE_PED_IS_PED_ON_FOOT);
		PED.set_function("IS_PED_PLANTING_BOMB", LUA_NATIVE_PED_IS_PED_PLANTING_BOMB);
		PED.set_function("GET_DEAD_PED_PICKUP_COORDS", LUA_NATIVE_PED_GET_DEAD_PED_PICKUP_COORDS);
		PED.set_function("IS_PED_IN_ANY_BOAT", LUA_NATIVE_PED_IS_PED_IN_ANY_BOAT);
		PED.set_function("IS_PED_IN_ANY_HELI", LUA_NATIVE_PED_IS_PED_IN_ANY_HELI);
		PED.set_function("IS_PED_IN_ANY_PLANE", LUA_NATIVE_PED_IS_PED_IN_ANY_PLANE);
		PED.set_function("IS_PED_IN_FLYING_VEHICLE", LUA_NATIVE_PED_IS_PED_IN_FLYING_VEHICLE);
		PED.set_function("0x256EDD55C6BE1482_", LUA_NATIVE_PED_0x256EDD55C6BE1482_);
		PED.set_function("GET_PED_LAST_DAMAGE_BONE", LUA_NATIVE_PED_GET_PED_LAST_DAMAGE_BONE);
		PED.set_function("CLEAR_PED_LAST_DAMAGE_BONE", LUA_NATIVE_PED_CLEAR_PED_LAST_DAMAGE_BONE);
		PED.set_function("GET_PED_DAMAGE_CLEANLINESS_", LUA_NATIVE_PED_GET_PED_DAMAGE_CLEANLINESS_);
		PED.set_function("SET_PED_DAMAGE_CLEANLINESS_", LUA_NATIVE_PED_SET_PED_DAMAGE_CLEANLINESS_);
		PED.set_function("GET_PED_DAMAGED_", LUA_NATIVE_PED_GET_PED_DAMAGED_);
		PED.set_function("SET_PED_DAMAGED_", LUA_NATIVE_PED_SET_PED_DAMAGED_);
		PED.set_function("SET_PLAYER_CURRENT_ANIMAL_DAMAGE_MODIFIER_", LUA_NATIVE_PED_SET_PLAYER_CURRENT_ANIMAL_DAMAGE_MODIFIER_);
		PED.set_function("UPDATE_ANIMAL_DAMAGE_MODIFIER_", LUA_NATIVE_PED_UPDATE_ANIMAL_DAMAGE_MODIFIER_);
		PED.set_function("GET_PLAYER_CURRENT_ANIMAL_DAMAGE_MODIFIER_", LUA_NATIVE_PED_GET_PLAYER_CURRENT_ANIMAL_DAMAGE_MODIFIER_);
		PED.set_function("0xB29C553BA582D09E_", LUA_NATIVE_PED_0xB29C553BA582D09E_);
		PED.set_function("0x101B45C5F56D970F_", LUA_NATIVE_PED_0x101B45C5F56D970F_);
		PED.set_function("COMPUTE_SATCHEL_ITEM_FOR_PED_CARCASS_", LUA_NATIVE_PED_COMPUTE_SATCHEL_ITEM_FOR_PED_CARCASS_);
		PED.set_function("COMPUTE_SATCHEL_ITEM_FOR_PED_DAMAGE", LUA_NATIVE_PED_COMPUTE_SATCHEL_ITEM_FOR_PED_DAMAGE);
		PED.set_function("SET_AI_WEAPON_DAMAGE_MODIFIER", LUA_NATIVE_PED_SET_AI_WEAPON_DAMAGE_MODIFIER);
		PED.set_function("RESET_AI_WEAPON_DAMAGE_MODIFIER", LUA_NATIVE_PED_RESET_AI_WEAPON_DAMAGE_MODIFIER);
		PED.set_function("SET_TOTAL_PED_DAMAGE_FROM_AI_", LUA_NATIVE_PED_SET_TOTAL_PED_DAMAGE_FROM_AI_);
		PED.set_function("0xA6D6F03095C88F59_", LUA_NATIVE_PED_0xA6D6F03095C88F59_);
		PED.set_function("GET_TOTAL_PED_DAMAGE_FROM_AI_", LUA_NATIVE_PED_GET_TOTAL_PED_DAMAGE_FROM_AI_);
		PED.set_function("SET_PED_TO_PLAYER_WEAPON_DAMAGE_MODIFIER", LUA_NATIVE_PED_SET_PED_TO_PLAYER_WEAPON_DAMAGE_MODIFIER);
		PED.set_function("GET_PED_TO_PLAYER_WEAPON_DAMAGE_MODIFIER", LUA_NATIVE_PED_GET_PED_TO_PLAYER_WEAPON_DAMAGE_MODIFIER);
		PED.set_function("SET_CURRENT_DEFENSE_AGAINST_PLAYERS_MODIFIER_", LUA_NATIVE_PED_SET_CURRENT_DEFENSE_AGAINST_PLAYERS_MODIFIER_);
		PED.set_function("0x763FA8A9D76EE3A7_", LUA_NATIVE_PED_0x763FA8A9D76EE3A7_);
		PED.set_function("SET_AI_MELEE_WEAPON_DAMAGE_MODIFIER", LUA_NATIVE_PED_SET_AI_MELEE_WEAPON_DAMAGE_MODIFIER);
		PED.set_function("SET_ACCURACY_AGAINST_LOCAL_PLAYER_MODIFIER_", LUA_NATIVE_PED_SET_ACCURACY_AGAINST_LOCAL_PLAYER_MODIFIER_);
		PED.set_function("GET_ACCURACY_AGAINST_LOCAL_PLAYER_MODIFIER_", LUA_NATIVE_PED_GET_ACCURACY_AGAINST_LOCAL_PLAYER_MODIFIER_);
		PED.set_function("SET_PED_HEADSHOT_DAMAGE_MULTIPLIER_", LUA_NATIVE_PED_SET_PED_HEADSHOT_DAMAGE_MULTIPLIER_);
		PED.set_function("0xDEE8D30AA5C2E28D_", LUA_NATIVE_PED_0xDEE8D30AA5C2E28D_);
		PED.set_function("0xE1B3BE07D3AADDED_", LUA_NATIVE_PED_0xE1B3BE07D3AADDED_);
		PED.set_function("0x32CEDA9A0AB4CEF7_", LUA_NATIVE_PED_0x32CEDA9A0AB4CEF7_);
		PED.set_function("0x52A24D8A1DA89658_", LUA_NATIVE_PED_0x52A24D8A1DA89658_);
		PED.set_function("0x34B5CEAC180A5D6E_", LUA_NATIVE_PED_0x34B5CEAC180A5D6E_);
		PED.set_function("0x4F27603E44A8E4C0_", LUA_NATIVE_PED_0x4F27603E44A8E4C0_);
		PED.set_function("0x3FDCC1F8C17E303E_", LUA_NATIVE_PED_0x3FDCC1F8C17E303E_);
		PED.set_function("0xE50C9816B3F22D8B_", LUA_NATIVE_PED_0xE50C9816B3F22D8B_);
		PED.set_function("SET_DEFENSE_MODIFIER_FOR_PED_", LUA_NATIVE_PED_SET_DEFENSE_MODIFIER_FOR_PED_);
		PED.set_function("SET_MIN_PED_HEALTH_THRESHOLD_", LUA_NATIVE_PED_SET_MIN_PED_HEALTH_THRESHOLD_);
		PED.set_function("0xC5B78E41DCF8227C_", LUA_NATIVE_PED_0xC5B78E41DCF8227C_);
		PED.set_function("SET_PED_CAN_BE_TARGETTED", LUA_NATIVE_PED_SET_PED_CAN_BE_TARGETTED);
		PED.set_function("SET_PED_CAN_BE_TARGETTED_BY_TEAM", LUA_NATIVE_PED_SET_PED_CAN_BE_TARGETTED_BY_TEAM);
		PED.set_function("SET_PED_CAN_BE_TARGETTED_BY_PLAYER", LUA_NATIVE_PED_SET_PED_CAN_BE_TARGETTED_BY_PLAYER);
		PED.set_function("SET_INTERACTION_LOCKON_FLAG_", LUA_NATIVE_PED_SET_INTERACTION_LOCKON_FLAG_);
		PED.set_function("IS_PED_FALLING", LUA_NATIVE_PED_IS_PED_FALLING);
		PED.set_function("IS_PED_SLIDING_", LUA_NATIVE_PED_IS_PED_SLIDING_);
		PED.set_function("IS_PED_JUMPING", LUA_NATIVE_PED_IS_PED_JUMPING);
		PED.set_function("IS_PED_CLIMBING", LUA_NATIVE_PED_IS_PED_CLIMBING);
		PED.set_function("IS_PED_CLIMBING_LADDER_", LUA_NATIVE_PED_IS_PED_CLIMBING_LADDER_);
		PED.set_function("0x577C60BA06D0EA64_", LUA_NATIVE_PED_0x577C60BA06D0EA64_);
		PED.set_function("IS_PED_VAULTING", LUA_NATIVE_PED_IS_PED_VAULTING);
		PED.set_function("IS_PED_DIVING", LUA_NATIVE_PED_IS_PED_DIVING);
		PED.set_function("IS_PED_OPENING_DOOR", LUA_NATIVE_PED_IS_PED_OPENING_DOOR);
		PED.set_function("0x5C6C7C70CA302801_", LUA_NATIVE_PED_0x5C6C7C70CA302801_);
		PED.set_function("0xB91AB3BE7F655D49_", LUA_NATIVE_PED_0xB91AB3BE7F655D49_);
		PED.set_function("IS_PED_IN_ANY_TAXI", LUA_NATIVE_PED_IS_PED_IN_ANY_TAXI);
		PED.set_function("SET_PED_ID_RANGE", LUA_NATIVE_PED_SET_PED_ID_RANGE);
		PED.set_function("GET_PED_ID_RANGE_", LUA_NATIVE_PED_GET_PED_ID_RANGE_);
		PED.set_function("SET_PED_HIGHLY_PERCEPTIVE", LUA_NATIVE_PED_SET_PED_HIGHLY_PERCEPTIVE);
		PED.set_function("SET_PED_INJURED_ON_GROUND_BEHAVIOUR", LUA_NATIVE_PED_SET_PED_INJURED_ON_GROUND_BEHAVIOUR);
		PED.set_function("DISABLE_PED_INJURED_ON_GROUND_BEHAVIOUR", LUA_NATIVE_PED_DISABLE_PED_INJURED_ON_GROUND_BEHAVIOUR);
		PED.set_function("0x028E7B3BBA0BD2FC_", LUA_NATIVE_PED_0x028E7B3BBA0BD2FC_);
		PED.set_function("0xFA8C10DCE0706D43_", LUA_NATIVE_PED_0xFA8C10DCE0706D43_);
		PED.set_function("SET_PED_ANIMAL_DETECTION_MODIFIER_", LUA_NATIVE_PED_SET_PED_ANIMAL_DETECTION_MODIFIER_);
		PED.set_function("0x2BA9D7BF629F920C_", LUA_NATIVE_PED_0x2BA9D7BF629F920C_);
		PED.set_function("SET_PED_SEEING_RANGE", LUA_NATIVE_PED_SET_PED_SEEING_RANGE);
		PED.set_function("0x900CA00CE703E1E2_", LUA_NATIVE_PED_0x900CA00CE703E1E2_);
		PED.set_function("SET_PED_HEARING_RANGE", LUA_NATIVE_PED_SET_PED_HEARING_RANGE);
		PED.set_function("SET_PED_VISUAL_FIELD_MIN_ANGLE", LUA_NATIVE_PED_SET_PED_VISUAL_FIELD_MIN_ANGLE);
		PED.set_function("SET_PED_VISUAL_FIELD_MAX_ANGLE", LUA_NATIVE_PED_SET_PED_VISUAL_FIELD_MAX_ANGLE);
		PED.set_function("SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE", LUA_NATIVE_PED_SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE);
		PED.set_function("SET_PED_VISUAL_FIELD_CENTER_ANGLE", LUA_NATIVE_PED_SET_PED_VISUAL_FIELD_CENTER_ANGLE);
		PED.set_function("0x9AB33CB5834885B3_", LUA_NATIVE_PED_0x9AB33CB5834885B3_);
		PED.set_function("0x899DFA0009AC93DE_", LUA_NATIVE_PED_0x899DFA0009AC93DE_);
		PED.set_function("0x3A5697B80FED5EBE_", LUA_NATIVE_PED_0x3A5697B80FED5EBE_);
		PED.set_function("SET_PED_STEALTH_MOVEMENT", LUA_NATIVE_PED_SET_PED_STEALTH_MOVEMENT);
		PED.set_function("GET_PED_STEALTH_MOVEMENT", LUA_NATIVE_PED_GET_PED_STEALTH_MOVEMENT);
		PED.set_function("SET_PED_CROUCH_MOVEMENT_", LUA_NATIVE_PED_SET_PED_CROUCH_MOVEMENT_);
		PED.set_function("GET_PED_CROUCH_MOVEMENT", LUA_NATIVE_PED_GET_PED_CROUCH_MOVEMENT);
		PED.set_function("GET_PED_IS_DOING_COMBAT_ROLL", LUA_NATIVE_PED_GET_PED_IS_DOING_COMBAT_ROLL);
		PED.set_function("CREATE_GROUP", LUA_NATIVE_PED_CREATE_GROUP);
		PED.set_function("SET_PED_AS_GROUP_LEADER", LUA_NATIVE_PED_SET_PED_AS_GROUP_LEADER);
		PED.set_function("SET_PED_AS_GROUP_MEMBER", LUA_NATIVE_PED_SET_PED_AS_GROUP_MEMBER);
		PED.set_function("SET_PED_CAN_TELEPORT_TO_GROUP_LEADER", LUA_NATIVE_PED_SET_PED_CAN_TELEPORT_TO_GROUP_LEADER);
		PED.set_function("REMOVE_GROUP", LUA_NATIVE_PED_REMOVE_GROUP);
		PED.set_function("REMOVE_PED_FROM_GROUP", LUA_NATIVE_PED_REMOVE_PED_FROM_GROUP);
		PED.set_function("IS_PED_GROUP_MEMBER", LUA_NATIVE_PED_IS_PED_GROUP_MEMBER);
		PED.set_function("IS_PED_GROUP_LEADER_", LUA_NATIVE_PED_IS_PED_GROUP_LEADER_);
		PED.set_function("IS_PED_HANGING_ON_TO_VEHICLE", LUA_NATIVE_PED_IS_PED_HANGING_ON_TO_VEHICLE);
		PED.set_function("SET_GROUP_SEPARATION_RANGE", LUA_NATIVE_PED_SET_GROUP_SEPARATION_RANGE);
		PED.set_function("0x89E59DBD15E21177_", LUA_NATIVE_PED_0x89E59DBD15E21177_);
		PED.set_function("IS_PED_PRONE", LUA_NATIVE_PED_IS_PED_PRONE);
		PED.set_function("IS_PED_INVESTIGATING_", LUA_NATIVE_PED_IS_PED_INVESTIGATING_);
		PED.set_function("IS_PED_IN_COMBAT", LUA_NATIVE_PED_IS_PED_IN_COMBAT);
		PED.set_function("CAN_PED_IN_COMBAT_SEE_TARGET", LUA_NATIVE_PED_CAN_PED_IN_COMBAT_SEE_TARGET);
		PED.set_function("IS_PED_JACKING", LUA_NATIVE_PED_IS_PED_JACKING);
		PED.set_function("IS_PED_BEING_JACKED", LUA_NATIVE_PED_IS_PED_BEING_JACKED);
		PED.set_function("IS_PED_BEING_STUNNED", LUA_NATIVE_PED_IS_PED_BEING_STUNNED);
		PED.set_function("GET_PEDS_JACKER", LUA_NATIVE_PED_GET_PEDS_JACKER);
		PED.set_function("GET_JACK_TARGET", LUA_NATIVE_PED_GET_JACK_TARGET);
		PED.set_function("IS_PED_FLEEING", LUA_NATIVE_PED_IS_PED_FLEEING);
		PED.set_function("IS_PED_IN_COVER", LUA_NATIVE_PED_IS_PED_IN_COVER);
		PED.set_function("0x2DD4E0E26DFAD97D_", LUA_NATIVE_PED_0x2DD4E0E26DFAD97D_);
		PED.set_function("PED_WAS_KILLED_BY_HEADSHOT_", LUA_NATIVE_PED_PED_WAS_KILLED_BY_HEADSHOT_);
		PED.set_function("PED_DUELING_DID_PLAYER_HEADSHOT_OPPONENT_", LUA_NATIVE_PED_PED_DUELING_DID_PLAYER_HEADSHOT_OPPONENT_);
		PED.set_function("IS_PED_IN_COVER_FACING_LEFT", LUA_NATIVE_PED_IS_PED_IN_COVER_FACING_LEFT);
		PED.set_function("IS_PED_GOING_INTO_COVER", LUA_NATIVE_PED_IS_PED_GOING_INTO_COVER);
		PED.set_function("IS_PED_RESPONDING_TO_THREAT", LUA_NATIVE_PED_IS_PED_RESPONDING_TO_THREAT);
		PED.set_function("GET_ACTIVE_DYNAMIC_SCENARIO_2_", LUA_NATIVE_PED_GET_ACTIVE_DYNAMIC_SCENARIO_2_);
		PED.set_function("GET_ACTIVE_DYNAMIC_SCENARIO_", LUA_NATIVE_PED_GET_ACTIVE_DYNAMIC_SCENARIO_);
		PED.set_function("GIVE_PED_SCENARIO_PROP_", LUA_NATIVE_PED_GIVE_PED_SCENARIO_PROP_);
		PED.set_function("GIVE_PED_HASH_SCENARIO_PROP", LUA_NATIVE_PED_GIVE_PED_HASH_SCENARIO_PROP);
		PED.set_function("GIVE_PED_SCENARIO_PROP_DYNAMIC_", LUA_NATIVE_PED_GIVE_PED_SCENARIO_PROP_DYNAMIC_);
		PED.set_function("REQUEST_PROP_SCENARIO_PED_", LUA_NATIVE_PED_REQUEST_PROP_SCENARIO_PED_);
		PED.set_function("REQUEST_PED_FOR_SCENARIO_TYPE_", LUA_NATIVE_PED_REQUEST_PED_FOR_SCENARIO_TYPE_);
		PED.set_function("GET_PED_REGISTER_PROP_", LUA_NATIVE_PED_GET_PED_REGISTER_PROP_);
		PED.set_function("GET_SEAT_PED_IS_TRYING_TO_ENTER", LUA_NATIVE_PED_GET_SEAT_PED_IS_TRYING_TO_ENTER);
		PED.set_function("GET_PED_SOURCE_OF_DEATH", LUA_NATIVE_PED_GET_PED_SOURCE_OF_DEATH);
		PED.set_function("GET_PED_CAUSE_OF_DEATH", LUA_NATIVE_PED_GET_PED_CAUSE_OF_DEATH);
		PED.set_function("GET_PED_TIME_OF_DEATH", LUA_NATIVE_PED_GET_PED_TIME_OF_DEATH);
		PED.set_function("COUNT_PEDS_IN_COMBAT_WITH_TARGET", LUA_NATIVE_PED_COUNT_PEDS_IN_COMBAT_WITH_TARGET);
		PED.set_function("GET_PEDS_IN_COMBAT_WITH_TARGET_", LUA_NATIVE_PED_GET_PEDS_IN_COMBAT_WITH_TARGET_);
		PED.set_function("COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS", LUA_NATIVE_PED_COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS);
		PED.set_function("GET_CURRENT_TARGET_FOR_PED", LUA_NATIVE_PED_GET_CURRENT_TARGET_FOR_PED);
		PED.set_function("SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH", LUA_NATIVE_PED_SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH);
		PED.set_function("GET_DEFAULT_RELATIONSHIP_GROUP_HASH_", LUA_NATIVE_PED_GET_DEFAULT_RELATIONSHIP_GROUP_HASH_);
		PED.set_function("SET_PED_RELATIONSHIP_GROUP_HASH", LUA_NATIVE_PED_SET_PED_RELATIONSHIP_GROUP_HASH);
		PED.set_function("SET_RELATIONSHIP_BETWEEN_GROUPS", LUA_NATIVE_PED_SET_RELATIONSHIP_BETWEEN_GROUPS);
		PED.set_function("CLEAR_RELATIONSHIP_BETWEEN_GROUPS", LUA_NATIVE_PED_CLEAR_RELATIONSHIP_BETWEEN_GROUPS);
		PED.set_function("ADD_RELATIONSHIP_GROUP", LUA_NATIVE_PED_ADD_RELATIONSHIP_GROUP);
		PED.set_function("REMOVE_RELATIONSHIP_GROUP", LUA_NATIVE_PED_REMOVE_RELATIONSHIP_GROUP);
		PED.set_function("GET_RELATIONSHIP_BETWEEN_PEDS", LUA_NATIVE_PED_GET_RELATIONSHIP_BETWEEN_PEDS);
		PED.set_function("GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH", LUA_NATIVE_PED_GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH);
		PED.set_function("GET_PED_RELATIONSHIP_GROUP_HASH", LUA_NATIVE_PED_GET_PED_RELATIONSHIP_GROUP_HASH);
		PED.set_function("GET_RELATIONSHIP_BETWEEN_GROUPS", LUA_NATIVE_PED_GET_RELATIONSHIP_BETWEEN_GROUPS);
		PED.set_function("0xDC91F22F09BC6C2F_", LUA_NATIVE_PED_0xDC91F22F09BC6C2F_);
		PED.set_function("0x9629FAF6460D35CB_", LUA_NATIVE_PED_0x9629FAF6460D35CB_);
		PED.set_function("0x4E68C7EF706DF35D_", LUA_NATIVE_PED_0x4E68C7EF706DF35D_);
		PED.set_function("0x3ACCE14DFA6BA8C2_", LUA_NATIVE_PED_0x3ACCE14DFA6BA8C2_);
		PED.set_function("SET_PED_TO_INFORM_RESPECTED_FRIENDS", LUA_NATIVE_PED_SET_PED_TO_INFORM_RESPECTED_FRIENDS);
		PED.set_function("0x40C9155AF8BC13F3_", LUA_NATIVE_PED_0x40C9155AF8BC13F3_);
		PED.set_function("0xF4860514AD354226_", LUA_NATIVE_PED_0xF4860514AD354226_);
		PED.set_function("IS_PED_RESPONDING_TO_EVENT", LUA_NATIVE_PED_IS_PED_RESPONDING_TO_EVENT);
		PED.set_function("0x5E9FAF6C513347B4_", LUA_NATIVE_PED_0x5E9FAF6C513347B4_);
		PED.set_function("0x326F7951EF0D7F75_", LUA_NATIVE_PED_0x326F7951EF0D7F75_);
		PED.set_function("0xE76687023D8C8505_", LUA_NATIVE_PED_0xE76687023D8C8505_);
		PED.set_function("0xCB8F4C9343EBE240_", LUA_NATIVE_PED_0xCB8F4C9343EBE240_);
		PED.set_function("SET_PED_FIRING_PATTERN", LUA_NATIVE_PED_SET_PED_FIRING_PATTERN);
		PED.set_function("SET_PED_FIRING_PATTERN_2_", LUA_NATIVE_PED_SET_PED_FIRING_PATTERN_2_);
		PED.set_function("SET_PED_FIRING_PATTERN_3_", LUA_NATIVE_PED_SET_PED_FIRING_PATTERN_3_);
		PED.set_function("SET_PED_SHOOT_RATE", LUA_NATIVE_PED_SET_PED_SHOOT_RATE);
		PED.set_function("0x3C529A827998F9B3_", LUA_NATIVE_PED_0x3C529A827998F9B3_);
		PED.set_function("0x1F44B7E283C09EDE_", LUA_NATIVE_PED_0x1F44B7E283C09EDE_);
		PED.set_function("SET_COMBAT_FLOAT", LUA_NATIVE_PED_SET_COMBAT_FLOAT);
		PED.set_function("GET_COMBAT_FLOAT", LUA_NATIVE_PED_GET_COMBAT_FLOAT);
		PED.set_function("GET_GROUP_SIZE", LUA_NATIVE_PED_GET_GROUP_SIZE);
		PED.set_function("DOES_GROUP_EXIST", LUA_NATIVE_PED_DOES_GROUP_EXIST);
		PED.set_function("0x0455546F23FF08E4_", LUA_NATIVE_PED_0x0455546F23FF08E4_);
		PED.set_function("IS_GROUP_LOCALLY_CONTROLLED", LUA_NATIVE_PED_IS_GROUP_LOCALLY_CONTROLLED);
		PED.set_function("GET_PED_GROUP_INDEX", LUA_NATIVE_PED_GET_PED_GROUP_INDEX);
		PED.set_function("IS_PED_IN_GROUP", LUA_NATIVE_PED_IS_PED_IN_GROUP);
		PED.set_function("IS_PED_LEADING_ANY_GROUP_", LUA_NATIVE_PED_IS_PED_LEADING_ANY_GROUP_);
		PED.set_function("GET_PLAYER_PED_IS_FOLLOWING", LUA_NATIVE_PED_GET_PLAYER_PED_IS_FOLLOWING);
		PED.set_function("SET_GROUP_FORMATION", LUA_NATIVE_PED_SET_GROUP_FORMATION);
		PED.set_function("GET_GROUP_FORMATION_", LUA_NATIVE_PED_GET_GROUP_FORMATION_);
		PED.set_function("SET_GROUP_FORMATION_SPACING", LUA_NATIVE_PED_SET_GROUP_FORMATION_SPACING);
		PED.set_function("RESET_GROUP_FORMATION_DEFAULT_SPACING", LUA_NATIVE_PED_RESET_GROUP_FORMATION_DEFAULT_SPACING);
		PED.set_function("0xB05CC690CDE8A4A9_", LUA_NATIVE_PED_0xB05CC690CDE8A4A9_);
		PED.set_function("ADD_CUSTOM_FORMATION_LOCATION", LUA_NATIVE_PED_ADD_CUSTOM_FORMATION_LOCATION);
		PED.set_function("ADD_FORMATION_LOCATION", LUA_NATIVE_PED_ADD_FORMATION_LOCATION);
		PED.set_function("SET_FORMATION_POSITIONS_TARGET_RADIUS", LUA_NATIVE_PED_SET_FORMATION_POSITIONS_TARGET_RADIUS);
		PED.set_function("SET_FORMATION_AUTO_ASSIGN_POSITION_", LUA_NATIVE_PED_SET_FORMATION_AUTO_ASSIGN_POSITION_);
		PED.set_function("SET_PED_FORMATION_POSITION_", LUA_NATIVE_PED_SET_PED_FORMATION_POSITION_);
		PED.set_function("0x8AF8E647D6B2A649_", LUA_NATIVE_PED_0x8AF8E647D6B2A649_);
		PED.set_function("0x87C2724A56F66020_", LUA_NATIVE_PED_0x87C2724A56F66020_);
		PED.set_function("0xD5BD1B5318A81994_", LUA_NATIVE_PED_0xD5BD1B5318A81994_);
		PED.set_function("0x9BBEAF8B0C007F1E_", LUA_NATIVE_PED_0x9BBEAF8B0C007F1E_);
		PED.set_function("0xC99F104BDF8C7F5A_", LUA_NATIVE_PED_0xC99F104BDF8C7F5A_);
		PED.set_function("0x02E741E19E39628C_", LUA_NATIVE_PED_0x02E741E19E39628C_);
		PED.set_function("0x97C475212B327666_", LUA_NATIVE_PED_0x97C475212B327666_);
		PED.set_function("0x154B7E841AC7412F_", LUA_NATIVE_PED_0x154B7E841AC7412F_);
		PED.set_function("0x8AFCCC0F18D70018_", LUA_NATIVE_PED_0x8AFCCC0F18D70018_);
		PED.set_function("0xE1103300F3456DE7_", LUA_NATIVE_PED_0xE1103300F3456DE7_);
		PED.set_function("0xA8A95CECB1906EA2_", LUA_NATIVE_PED_0xA8A95CECB1906EA2_);
		PED.set_function("0xDDFAD4DEAA7FA362_", LUA_NATIVE_PED_0xDDFAD4DEAA7FA362_);
		PED.set_function("0x966DE09688A1DE39_", LUA_NATIVE_PED_0x966DE09688A1DE39_);
		PED.set_function("0x7E5185B979706210_", LUA_NATIVE_PED_0x7E5185B979706210_);
		PED.set_function("0x40C3524D4ED83554_", LUA_NATIVE_PED_0x40C3524D4ED83554_);
		PED.set_function("0x86FAFC18E3D4380C_", LUA_NATIVE_PED_0x86FAFC18E3D4380C_);
		PED.set_function("0x07EA5B053FA60AC7_", LUA_NATIVE_PED_0x07EA5B053FA60AC7_);
		PED.set_function("0xF9CBD46433E36713_", LUA_NATIVE_PED_0xF9CBD46433E36713_);
		PED.set_function("GET_VEHICLE_PED_IS_USING", LUA_NATIVE_PED_GET_VEHICLE_PED_IS_USING);
		PED.set_function("GET_VEHICLE_PED_IS_ENTERING", LUA_NATIVE_PED_GET_VEHICLE_PED_IS_ENTERING);
		PED.set_function("GET_VEHICLE_DRAFT_HORSE_IS_ATTACHED_TO_", LUA_NATIVE_PED_GET_VEHICLE_DRAFT_HORSE_IS_ATTACHED_TO_);
		PED.set_function("GET_LAST_VEHICLE_DRAFT_HORSE_WAS_ATTACHED_TO_", LUA_NATIVE_PED_GET_LAST_VEHICLE_DRAFT_HORSE_WAS_ATTACHED_TO_);
		PED.set_function("GET_SEAT_PED_IS_USING", LUA_NATIVE_PED_GET_SEAT_PED_IS_USING);
		PED.set_function("GET_TRANSPORT_PED_IS_SEATED_ON_", LUA_NATIVE_PED_GET_TRANSPORT_PED_IS_SEATED_ON_);
		PED.set_function("IS_PED_ENTERING_ANY_TRANSPORT", LUA_NATIVE_PED_IS_PED_ENTERING_ANY_TRANSPORT);
		PED.set_function("SET_PED_GRAVITY", LUA_NATIVE_PED_SET_PED_GRAVITY);
		PED.set_function("0x96595B36D6A2279B_", LUA_NATIVE_PED_0x96595B36D6A2279B_);
		PED.set_function("SET_PED_IMMERSION_FLAG_", LUA_NATIVE_PED_SET_PED_IMMERSION_FLAG_);
		PED.set_function("0xA90684ED185CCB4B_", LUA_NATIVE_PED_0xA90684ED185CCB4B_);
		PED.set_function("FAKE_SET_PED_LOCO_INJURED_", LUA_NATIVE_PED_FAKE_SET_PED_LOCO_INJURED_);
		PED.set_function("FORCE_PED_DEATH_", LUA_NATIVE_PED_FORCE_PED_DEATH_);
		PED.set_function("APPLY_DAMAGE_TO_PED", LUA_NATIVE_PED_APPLY_DAMAGE_TO_PED);
		PED.set_function("0xBAD2A311667A50D7_", LUA_NATIVE_PED_0xBAD2A311667A50D7_);
		PED.set_function("GET_PED_TYPE", LUA_NATIVE_PED_GET_PED_TYPE);
		PED.set_function("SET_PED_AS_COP", LUA_NATIVE_PED_SET_PED_AS_COP);
		PED.set_function("0x405180B14DA5A935_", LUA_NATIVE_PED_0x405180B14DA5A935_);
		PED.set_function("SET_PED_INTERACTION_PERSONALITY_", LUA_NATIVE_PED_SET_PED_INTERACTION_PERSONALITY_);
		PED.set_function("GET_PED_INTERACTION_PERSONALITY_", LUA_NATIVE_PED_GET_PED_INTERACTION_PERSONALITY_);
		PED.set_function("SET_PED_PERSONALITY_", LUA_NATIVE_PED_SET_PED_PERSONALITY_);
		PED.set_function("0x329772C47DBB2FBC_", LUA_NATIVE_PED_0x329772C47DBB2FBC_);
		PED.set_function("GET_IS_PED_IN_DISPUTE_WITH_PED_", LUA_NATIVE_PED_GET_IS_PED_IN_DISPUTE_WITH_PED_);
		PED.set_function("0x94132D7C8D3575C4_", LUA_NATIVE_PED_0x94132D7C8D3575C4_);
		PED.set_function("0x8AF46E5159A5B620_", LUA_NATIVE_PED_0x8AF46E5159A5B620_);
		PED.set_function("0x45FEA6D5539BD474_", LUA_NATIVE_PED_0x45FEA6D5539BD474_);
		PED.set_function("SET_PED_INTERACTION_POSITIVE_RESPONSE_", LUA_NATIVE_PED_SET_PED_INTERACTION_POSITIVE_RESPONSE_);
		PED.set_function("0xE37ACEE15AC50C7E_", LUA_NATIVE_PED_0xE37ACEE15AC50C7E_);
		PED.set_function("SET_PED_INTERACTION_NEGATIVE_RESPONSE_", LUA_NATIVE_PED_SET_PED_INTERACTION_NEGATIVE_RESPONSE_);
		PED.set_function("0x41C23A8E6B344867_", LUA_NATIVE_PED_0x41C23A8E6B344867_);
		PED.set_function("GET_IS_PED_RESPONDING_TO_POSITIVE_INTERACTION", LUA_NATIVE_PED_GET_IS_PED_RESPONDING_TO_POSITIVE_INTERACTION);
		PED.set_function("GET_IS_PED_RESPONDING_TO_NEGATIVE_INTERACTION", LUA_NATIVE_PED_GET_IS_PED_RESPONDING_TO_NEGATIVE_INTERACTION);
		PED.set_function("0xA7DC9266ED6A4E51_", LUA_NATIVE_PED_0xA7DC9266ED6A4E51_);
		PED.set_function("0x89816B58C3466262_", LUA_NATIVE_PED_0x89816B58C3466262_);
		PED.set_function("0x97B06669AC569003_", LUA_NATIVE_PED_0x97B06669AC569003_);
		PED.set_function("0x85F500F4E24CA43E_", LUA_NATIVE_PED_0x85F500F4E24CA43E_);
		PED.set_function("0x9B9B9FA0EA283E3D_", LUA_NATIVE_PED_0x9B9B9FA0EA283E3D_);
		PED.set_function("0xEC60D1D225BC50AA_", LUA_NATIVE_PED_0xEC60D1D225BC50AA_);
		PED.set_function("0x12F2D161BF4031FC_", LUA_NATIVE_PED_0x12F2D161BF4031FC_);
		PED.set_function("0x0ADA3EC589E1736E_", LUA_NATIVE_PED_0x0ADA3EC589E1736E_);
		PED.set_function("GET_IS_PED_BEING_ROBBED_", LUA_NATIVE_PED_GET_IS_PED_BEING_ROBBED_);
		PED.set_function("0xD55DB4466D00A258_", LUA_NATIVE_PED_0xD55DB4466D00A258_);
		PED.set_function("SET_PED_MAX_HEALTH", LUA_NATIVE_PED_SET_PED_MAX_HEALTH);
		PED.set_function("GET_PED_MAX_HEALTH", LUA_NATIVE_PED_GET_PED_MAX_HEALTH);
		PED.set_function("SET_PED_HEALTH_CONFIG_", LUA_NATIVE_PED_SET_PED_HEALTH_CONFIG_);
		PED.set_function("INIT_PED_DEFAULT_HEALTH", LUA_NATIVE_PED_INIT_PED_DEFAULT_HEALTH);
		PED.set_function("SET_PED_MAX_TIME_IN_WATER", LUA_NATIVE_PED_SET_PED_MAX_TIME_IN_WATER);
		PED.set_function("SET_PED_MAX_TIME_UNDERWATER", LUA_NATIVE_PED_SET_PED_MAX_TIME_UNDERWATER);
		PED.set_function("0xAF041C10756C30FB_", LUA_NATIVE_PED_0xAF041C10756C30FB_);
		PED.set_function("0x5AF24CA9C974E51A_", LUA_NATIVE_PED_0x5AF24CA9C974E51A_);
		PED.set_function("SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE", LUA_NATIVE_PED_SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE);
		PED.set_function("CAN_KNOCK_PED_OFF_VEHICLE", LUA_NATIVE_PED_CAN_KNOCK_PED_OFF_VEHICLE);
		PED.set_function("KNOCK_PED_OFF_VEHICLE", LUA_NATIVE_PED_KNOCK_PED_OFF_VEHICLE);
		PED.set_function("GET_PED_AS_GROUP_MEMBER", LUA_NATIVE_PED_GET_PED_AS_GROUP_MEMBER);
		PED.set_function("GET_PED_AS_GROUP_LEADER", LUA_NATIVE_PED_GET_PED_AS_GROUP_LEADER);
		PED.set_function("SET_PED_KEEP_TASK", LUA_NATIVE_PED_SET_PED_KEEP_TASK);
		PED.set_function("IS_PED_SWIMMING", LUA_NATIVE_PED_IS_PED_SWIMMING);
		PED.set_function("IS_PED_SWIMMING_UNDER_WATER", LUA_NATIVE_PED_IS_PED_SWIMMING_UNDER_WATER);
		PED.set_function("0xDC88D06719070C39_", LUA_NATIVE_PED_0xDC88D06719070C39_);
		PED.set_function("SET_CREATE_RANDOM_COPS", LUA_NATIVE_PED_SET_CREATE_RANDOM_COPS);
		PED.set_function("IS_PED_IN_ANY_TRAIN", LUA_NATIVE_PED_IS_PED_IN_ANY_TRAIN);
		PED.set_function("IS_PED_GETTING_INTO_A_VEHICLE", LUA_NATIVE_PED_IS_PED_GETTING_INTO_A_VEHICLE);
		PED.set_function("0x550CB89DD7F4FA3D_", LUA_NATIVE_PED_0x550CB89DD7F4FA3D_);
		PED.set_function("SET_ENABLE_HANDCUFFS", LUA_NATIVE_PED_SET_ENABLE_HANDCUFFS);
		PED.set_function("SET_ENABLE_BOUND_ANKLES", LUA_NATIVE_PED_SET_ENABLE_BOUND_ANKLES);
		PED.set_function("0x8822F139408B8D0A_", LUA_NATIVE_PED_0x8822F139408B8D0A_);
		PED.set_function("0x8822F124788B8D0A_", LUA_NATIVE_PED_0x8822F124788B8D0A_);
		PED.set_function("RESET_PED_WEAPON_MOVEMENT_CLIPSET", LUA_NATIVE_PED_RESET_PED_WEAPON_MOVEMENT_CLIPSET);
		PED.set_function("SET_PED_GETUP_ANIMATION_", LUA_NATIVE_PED_SET_PED_GETUP_ANIMATION_);
		PED.set_function("0x88A95BB640FC186F_", LUA_NATIVE_PED_0x88A95BB640FC186F_);
		PED.set_function("RESET_PED_IN_VEHICLE_CONTEXT", LUA_NATIVE_PED_RESET_PED_IN_VEHICLE_CONTEXT);
		PED.set_function("0x878E8104FA27CDAE_", LUA_NATIVE_PED_0x878E8104FA27CDAE_);
		PED.set_function("SET_PED_GESTURE_GROUP", LUA_NATIVE_PED_SET_PED_GESTURE_GROUP);
		PED.set_function("SET_PED_DESIRED_LOCO_FOR_MODEL_", LUA_NATIVE_PED_SET_PED_DESIRED_LOCO_FOR_MODEL_);
		PED.set_function("CLEAR_PED_DESIRED_LOCO_FOR_MODEL_", LUA_NATIVE_PED_CLEAR_PED_DESIRED_LOCO_FOR_MODEL_);
		PED.set_function("SET_PED_DESIRED_LOCO_MOTION_TYPE_", LUA_NATIVE_PED_SET_PED_DESIRED_LOCO_MOTION_TYPE_);
		PED.set_function("CLEAR_PED_DESIRED_LOCO_MOTION_TYPE_", LUA_NATIVE_PED_CLEAR_PED_DESIRED_LOCO_MOTION_TYPE_);
		PED.set_function("0x2371C39D4F91C288_", LUA_NATIVE_PED_0x2371C39D4F91C288_);
		PED.set_function("REQUEST_PED_GETUP_ANIMATION_", LUA_NATIVE_PED_REQUEST_PED_GETUP_ANIMATION_);
		PED.set_function("PED_COWER_IN_PLACE", LUA_NATIVE_PED_PED_COWER_IN_PLACE);
		PED.set_function("PED_COWER_MOVE_TO_POINT", LUA_NATIVE_PED_PED_COWER_MOVE_TO_POINT);
		PED.set_function("0x16F798A05BB9E3B5_", LUA_NATIVE_PED_0x16F798A05BB9E3B5_);
		PED.set_function("PED_EMOTIONAL_PRESET_LOCO_MOTION_", LUA_NATIVE_PED_PED_EMOTIONAL_PRESET_LOCO_MOTION_);
		PED.set_function("PED_CLEAR_LOCO_MOTION_", LUA_NATIVE_PED_PED_CLEAR_LOCO_MOTION_);
		PED.set_function("0x32CCAD8A981B53D3_", LUA_NATIVE_PED_0x32CCAD8A981B53D3_);
		PED.set_function("SET_PED_DRUNKNESS_", LUA_NATIVE_PED_SET_PED_DRUNKNESS_);
		PED.set_function("IS_PED_DRUNK_", LUA_NATIVE_PED_IS_PED_DRUNK_);
		PED.set_function("GET_PED_DRUNKNESS_", LUA_NATIVE_PED_GET_PED_DRUNKNESS_);
		PED.set_function("GET_ANIM_INITIAL_OFFSET_POSITION", LUA_NATIVE_PED_GET_ANIM_INITIAL_OFFSET_POSITION);
		PED.set_function("GET_ANIM_INITIAL_OFFSET_ROTATION", LUA_NATIVE_PED_GET_ANIM_INITIAL_OFFSET_ROTATION);
		PED.set_function("SET_PED_RANDOM_COMPONENT_VARIATION", LUA_NATIVE_PED_SET_PED_RANDOM_COMPONENT_VARIATION);
		PED.set_function("KNOCK_OFF_PED_PROP", LUA_NATIVE_PED_KNOCK_OFF_PED_PROP);
		PED.set_function("SET_BLOCKING_OF_NON_TEMPORARY_EVENTS", LUA_NATIVE_PED_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS);
		PED.set_function("GET_BLOCKING_OF_NON_TEMPORARY_EVENTS_", LUA_NATIVE_PED_GET_BLOCKING_OF_NON_TEMPORARY_EVENTS_);
		PED.set_function("0xC17A94CC8FC3C61A_", LUA_NATIVE_PED_0xC17A94CC8FC3C61A_);
		PED.set_function("SET_PED_SCALE_", LUA_NATIVE_PED_SET_PED_SCALE_);
		PED.set_function("0x134775B093AD5C38_", LUA_NATIVE_PED_0x134775B093AD5C38_);
		PED.set_function("GET_PED_HEIGHT_", LUA_NATIVE_PED_GET_PED_HEIGHT_);
		PED.set_function("GET_PED_MODEL_SIZE_FROM_HASH_", LUA_NATIVE_PED_GET_PED_MODEL_SIZE_FROM_HASH_);
		PED.set_function("REGISTER_TARGET", LUA_NATIVE_PED_REGISTER_TARGET);
		PED.set_function("REGISTER_HATED_TARGETS_IN_AREA_", LUA_NATIVE_PED_REGISTER_HATED_TARGETS_IN_AREA_);
		PED.set_function("REGISTER_HATED_TARGETS_AROUND_PED", LUA_NATIVE_PED_REGISTER_HATED_TARGETS_AROUND_PED);
		PED.set_function("IS_TARGET_", LUA_NATIVE_PED_IS_TARGET_);
		PED.set_function("REMOVE_TARGET_", LUA_NATIVE_PED_REMOVE_TARGET_);
		PED.set_function("GET_CLOSEST_PED", LUA_NATIVE_PED_GET_CLOSEST_PED);
		PED.set_function("CAN_PED_RAGDOLL", LUA_NATIVE_PED_CAN_PED_RAGDOLL);
		PED.set_function("SET_PED_TO_RAGDOLL", LUA_NATIVE_PED_SET_PED_TO_RAGDOLL);
		PED.set_function("SET_PED_TO_RAGDOLL_WITH_FALL", LUA_NATIVE_PED_SET_PED_TO_RAGDOLL_WITH_FALL);
		PED.set_function("SET_PED_RAGDOLL_ON_COLLISION", LUA_NATIVE_PED_SET_PED_RAGDOLL_ON_COLLISION);
		PED.set_function("SET_PED_TO_DISABLE_RAGDOLL_", LUA_NATIVE_PED_SET_PED_TO_DISABLE_RAGDOLL_);
		PED.set_function("IS_PED_RAGDOLL", LUA_NATIVE_PED_IS_PED_RAGDOLL);
		PED.set_function("IS_PED_RUNNING_RAGDOLL_TASK", LUA_NATIVE_PED_IS_PED_RUNNING_RAGDOLL_TASK);
		PED.set_function("SET_PED_RAGDOLL_FORCE_FALL", LUA_NATIVE_PED_SET_PED_RAGDOLL_FORCE_FALL);
		PED.set_function("0x8CB2553C559102C1_", LUA_NATIVE_PED_0x8CB2553C559102C1_);
		PED.set_function("0xFD3C31A2E45671E7_", LUA_NATIVE_PED_0xFD3C31A2E45671E7_);
		PED.set_function("RESET_PED_RAGDOLL_TIMER", LUA_NATIVE_PED_RESET_PED_RAGDOLL_TIMER);
		PED.set_function("SET_PED_CAN_RAGDOLL", LUA_NATIVE_PED_SET_PED_CAN_RAGDOLL);
		PED.set_function("0x3AEC4A410ECAF30D_", LUA_NATIVE_PED_0x3AEC4A410ECAF30D_);
		PED.set_function("IS_PED_RUNNING_MOBILE_PHONE_TASK", LUA_NATIVE_PED_IS_PED_RUNNING_MOBILE_PHONE_TASK);
		PED.set_function("SET_RAGDOLL_BLOCKING_FLAGS", LUA_NATIVE_PED_SET_RAGDOLL_BLOCKING_FLAGS);
		PED.set_function("CLEAR_RAGDOLL_BLOCKING_FLAGS", LUA_NATIVE_PED_CLEAR_RAGDOLL_BLOCKING_FLAGS);
		PED.set_function("0x9F933E0985E12C51_", LUA_NATIVE_PED_0x9F933E0985E12C51_);
		PED.set_function("0x88B2026A3B0BE33D_", LUA_NATIVE_PED_0x88B2026A3B0BE33D_);
		PED.set_function("SET_PED_DEFENSIVE_AREA_VOLUME", LUA_NATIVE_PED_SET_PED_DEFENSIVE_AREA_VOLUME);
		PED.set_function("SET_PED_SPHERE_DEFENSIVE_AREA", LUA_NATIVE_PED_SET_PED_SPHERE_DEFENSIVE_AREA);
		PED.set_function("SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_ENTITY_", LUA_NATIVE_PED_SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_ENTITY_);
		PED.set_function("SET_PED_DEFENSIVE_AREA_TO_ANGLED_AREA_", LUA_NATIVE_PED_SET_PED_DEFENSIVE_AREA_TO_ANGLED_AREA_);
		PED.set_function("SET_PED_DEFENSIVE_AREA_DIRECTION", LUA_NATIVE_PED_SET_PED_DEFENSIVE_AREA_DIRECTION);
		PED.set_function("REMOVE_PED_DEFENSIVE_AREA", LUA_NATIVE_PED_REMOVE_PED_DEFENSIVE_AREA);
		PED.set_function("GET_PED_DEFENSIVE_AREA_POSITION", LUA_NATIVE_PED_GET_PED_DEFENSIVE_AREA_POSITION);
		PED.set_function("IS_PED_DEFENSIVE_AREA_ACTIVE", LUA_NATIVE_PED_IS_PED_DEFENSIVE_AREA_ACTIVE);
		PED.set_function("GET_PED_DEFENSIVE_VOLUME_", LUA_NATIVE_PED_GET_PED_DEFENSIVE_VOLUME_);
		PED.set_function("0x4EC4EA2F72B36358_", LUA_NATIVE_PED_0x4EC4EA2F72B36358_);
		PED.set_function("0xCF0B19806473D324_", LUA_NATIVE_PED_0xCF0B19806473D324_);
		PED.set_function("0xB4B7C92FCE7347B7_", LUA_NATIVE_PED_0xB4B7C92FCE7347B7_);
		PED.set_function("REVIVE_INJURED_PED", LUA_NATIVE_PED_REVIVE_INJURED_PED);
		PED.set_function("RESURRECT_PED", LUA_NATIVE_PED_RESURRECT_PED);
		PED.set_function("SET_PED_NAME_DEBUG", LUA_NATIVE_PED_SET_PED_NAME_DEBUG);
		PED.set_function("SPECIAL_FUNCTION_DO_NOT_USE", LUA_NATIVE_PED_SPECIAL_FUNCTION_DO_NOT_USE);
		PED.set_function("0x7020839C7302D8AC_", LUA_NATIVE_PED_0x7020839C7302D8AC_);
		PED.set_function("0xE1AADD0055D76603_", LUA_NATIVE_PED_0xE1AADD0055D76603_);
		PED.set_function("0x5A1A929C8B729B4A_", LUA_NATIVE_PED_0x5A1A929C8B729B4A_);
		PED.set_function("0x97A38B65EBDA3D50_", LUA_NATIVE_PED_0x97A38B65EBDA3D50_);
		PED.set_function("0x06A10B4D7F50B0C3_", LUA_NATIVE_PED_0x06A10B4D7F50B0C3_);
		PED.set_function("0x88A5564B19C15391_", LUA_NATIVE_PED_0x88A5564B19C15391_);
		PED.set_function("0x354CA4DDDEEC397A_", LUA_NATIVE_PED_0x354CA4DDDEEC397A_);
		PED.set_function("0xFEA6126C34DF2532_", LUA_NATIVE_PED_0xFEA6126C34DF2532_);
		PED.set_function("0xA967D6A8ED2D713B_", LUA_NATIVE_PED_0xA967D6A8ED2D713B_);
		PED.set_function("APPLY_PED_BLOOD_SPECIFIC", LUA_NATIVE_PED_APPLY_PED_BLOOD_SPECIFIC);
		PED.set_function("0x58D32261AE0F0843_", LUA_NATIVE_PED_0x58D32261AE0F0843_);
		PED.set_function("0x735662994E60A710_", LUA_NATIVE_PED_0x735662994E60A710_);
		PED.set_function("0x91BAB9E064F036CD_", LUA_NATIVE_PED_0x91BAB9E064F036CD_);
		PED.set_function("0x897934E868EDDD6C_", LUA_NATIVE_PED_0x897934E868EDDD6C_);
		PED.set_function("SET_PED_ACTIVATE_WOUND_EFFECT_", LUA_NATIVE_PED_SET_PED_ACTIVATE_WOUND_EFFECT_);
		PED.set_function("UPDATE_PED_WOUND_EFFECT_", LUA_NATIVE_PED_UPDATE_PED_WOUND_EFFECT_);
		PED.set_function("APPLY_PED_DAMAGE_PACK", LUA_NATIVE_PED_APPLY_PED_DAMAGE_PACK);
		PED.set_function("CLEAR_PED_BLOOD_DAMAGE", LUA_NATIVE_PED_CLEAR_PED_BLOOD_DAMAGE);
		PED.set_function("CLEAR_PED_BLOOD_DAMAGE_BY_ZONE", LUA_NATIVE_PED_CLEAR_PED_BLOOD_DAMAGE_BY_ZONE);
		PED.set_function("CLEAR_PED_DAMAGE_DECAL_BY_ZONE", LUA_NATIVE_PED_CLEAR_PED_DAMAGE_DECAL_BY_ZONE);
		PED.set_function("CLEAR_PED_BLOOD_DAMAGE_FACIAL_", LUA_NATIVE_PED_CLEAR_PED_BLOOD_DAMAGE_FACIAL_);
		PED.set_function("0x34C11114887150FD_", LUA_NATIVE_PED_0x34C11114887150FD_);
		PED.set_function("0xD8544F6260F5F01E_", LUA_NATIVE_PED_0xD8544F6260F5F01E_);
		PED.set_function("0xEB8886E1065654CD_", LUA_NATIVE_PED_0xEB8886E1065654CD_);
		PED.set_function("FADE_AND_DESTROY_PED", LUA_NATIVE_PED_FADE_AND_DESTROY_PED);
		PED.set_function("IS_PED_QUEUED_FOR_DELETION_", LUA_NATIVE_PED_IS_PED_QUEUED_FOR_DELETION_);
		PED.set_function("CLEAR_PED_WETNESS", LUA_NATIVE_PED_CLEAR_PED_WETNESS);
		PED.set_function("SET_PED_WETNESS_HEIGHT", LUA_NATIVE_PED_SET_PED_WETNESS_HEIGHT);
		PED.set_function("0xF9CFF5BB70E8A2CB_", LUA_NATIVE_PED_0xF9CFF5BB70E8A2CB_);
		PED.set_function("SET_PED_WETNESS_ENABLED_THIS_FRAME", LUA_NATIVE_PED_SET_PED_WETNESS_ENABLED_THIS_FRAME);
		PED.set_function("0xA7A806677F8DE138_", LUA_NATIVE_PED_0xA7A806677F8DE138_);
		PED.set_function("0xA064BBABB064446F_", LUA_NATIVE_PED_0xA064BBABB064446F_);
		PED.set_function("CLEAR_PED_ENV_DIRT", LUA_NATIVE_PED_CLEAR_PED_ENV_DIRT);
		PED.set_function("SET_PED_SWEAT", LUA_NATIVE_PED_SET_PED_SWEAT);
		PED.set_function("CLEAR_PED_DECORATIONS", LUA_NATIVE_PED_CLEAR_PED_DECORATIONS);
		PED.set_function("WAS_PED_SKELETON_UPDATED", LUA_NATIVE_PED_WAS_PED_SKELETON_UPDATED);
		PED.set_function("GET_PED_BONE_COORDS", LUA_NATIVE_PED_GET_PED_BONE_COORDS);
		PED.set_function("ADD_SCENARIO_BLOCKING_AREA", LUA_NATIVE_PED_ADD_SCENARIO_BLOCKING_AREA);
		PED.set_function("REMOVE_SCENARIO_BLOCKING_AREAS", LUA_NATIVE_PED_REMOVE_SCENARIO_BLOCKING_AREAS);
		PED.set_function("REMOVE_SCENARIO_BLOCKING_AREA", LUA_NATIVE_PED_REMOVE_SCENARIO_BLOCKING_AREA);
		PED.set_function("ADD_SCENARIO_BLOCKING_VOLUME_", LUA_NATIVE_PED_ADD_SCENARIO_BLOCKING_VOLUME_);
		PED.set_function("0x6F46F8ACB44C4FC1_", LUA_NATIVE_PED_0x6F46F8ACB44C4FC1_);
		PED.set_function("IS_SCENARIO_BLOCKING_AREA_VALID_", LUA_NATIVE_PED_IS_SCENARIO_BLOCKING_AREA_VALID_);
		PED.set_function("IS_PED_USING_SCENARIO_HASH", LUA_NATIVE_PED_IS_PED_USING_SCENARIO_HASH);
		PED.set_function("IS_PED_USING_ANY_SCENARIO", LUA_NATIVE_PED_IS_PED_USING_ANY_SCENARIO);
		PED.set_function("IS_PED_USING_THIS_SCENARIO", LUA_NATIVE_PED_IS_PED_USING_THIS_SCENARIO);
		PED.set_function("CAN_PED_USE_SCENARIO_POINT_", LUA_NATIVE_PED_CAN_PED_USE_SCENARIO_POINT_);
		PED.set_function("0x1148F706CF4EBDDA_", LUA_NATIVE_PED_0x1148F706CF4EBDDA_);
		PED.set_function("SET_PED_PANIC_EXIT_SCENARIO", LUA_NATIVE_PED_SET_PED_PANIC_EXIT_SCENARIO);
		PED.set_function("TOGGLE_SCENARIO_PED_COWER_IN_PLACE", LUA_NATIVE_PED_TOGGLE_SCENARIO_PED_COWER_IN_PLACE);
		PED.set_function("0xD8CEEED54C672B5D_", LUA_NATIVE_PED_0xD8CEEED54C672B5D_);
		PED.set_function("SET_PED_SHOULD_PLAY_DIRECTED_NORMAL_SCENARIO_EXIT", LUA_NATIVE_PED_SET_PED_SHOULD_PLAY_DIRECTED_NORMAL_SCENARIO_EXIT);
		PED.set_function("SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT", LUA_NATIVE_PED_SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT);
		PED.set_function("SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT", LUA_NATIVE_PED_SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT);
		PED.set_function("SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT", LUA_NATIVE_PED_SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT);
		PED.set_function("SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT", LUA_NATIVE_PED_SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT);
		PED.set_function("SET_PED_SHOULD_PLAY_EMOTIONAL_SCENARIO_EXIT", LUA_NATIVE_PED_SET_PED_SHOULD_PLAY_EMOTIONAL_SCENARIO_EXIT);
		PED.set_function("SET_PED_SHOULD_PLAY_QUICK_SCENARIO_EXIT", LUA_NATIVE_PED_SET_PED_SHOULD_PLAY_QUICK_SCENARIO_EXIT);
		PED.set_function("0xF9331B3A314EB49D_", LUA_NATIVE_PED_0xF9331B3A314EB49D_);
		PED.set_function("0xE735A7DA22E88359_", LUA_NATIVE_PED_0xE735A7DA22E88359_);
		PED.set_function("0x82CB0F3F0C7785E5_", LUA_NATIVE_PED_0x82CB0F3F0C7785E5_);
		PED.set_function("0xCA95C156C14B2054_", LUA_NATIVE_PED_0xCA95C156C14B2054_);
		PED.set_function("SET_FACIAL_IDLE_ANIM_OVERRIDE", LUA_NATIVE_PED_SET_FACIAL_IDLE_ANIM_OVERRIDE);
		PED.set_function("CLEAR_FACIAL_IDLE_ANIM_OVERRIDE", LUA_NATIVE_PED_CLEAR_FACIAL_IDLE_ANIM_OVERRIDE);
		PED.set_function("REQUEST_PED_FACIAL_MOOD_THIS_FRAME_", LUA_NATIVE_PED_REQUEST_PED_FACIAL_MOOD_THIS_FRAME_);
		PED.set_function("0xD2F0FE8805D91647_", LUA_NATIVE_PED_0xD2F0FE8805D91647_);
		PED.set_function("SET_PED_CAN_PLAY_GESTURE_ANIMS", LUA_NATIVE_PED_SET_PED_CAN_PLAY_GESTURE_ANIMS);
		PED.set_function("0x7EDB3C766B0D073F_", LUA_NATIVE_PED_0x7EDB3C766B0D073F_);
		PED.set_function("SET_PED_CAN_PLAY_AMBIENT_ANIMS", LUA_NATIVE_PED_SET_PED_CAN_PLAY_AMBIENT_ANIMS);
		PED.set_function("SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS", LUA_NATIVE_PED_SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS);
		PED.set_function("0x4F63433CE3C08230_", LUA_NATIVE_PED_0x4F63433CE3C08230_);
		PED.set_function("SET_PED_CAN_ARM_IK", LUA_NATIVE_PED_SET_PED_CAN_ARM_IK);
		PED.set_function("SET_PED_CAN_UNK_BODYPART_IK_", LUA_NATIVE_PED_SET_PED_CAN_UNK_BODYPART_IK_);
		PED.set_function("SET_PED_CAN_HEAD_IK", LUA_NATIVE_PED_SET_PED_CAN_HEAD_IK);
		PED.set_function("SET_PED_CAN_LEG_IK", LUA_NATIVE_PED_SET_PED_CAN_LEG_IK);
		PED.set_function("SET_PED_CAN_TORSO_IK", LUA_NATIVE_PED_SET_PED_CAN_TORSO_IK);
		PED.set_function("SET_PED_CAN_TORSO_REACT_IK", LUA_NATIVE_PED_SET_PED_CAN_TORSO_REACT_IK);
		PED.set_function("SET_PED_CAN_TORSO_VEHICLE_IK", LUA_NATIVE_PED_SET_PED_CAN_TORSO_VEHICLE_IK);
		PED.set_function("SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT", LUA_NATIVE_PED_SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT);
		PED.set_function("IS_PED_HEADTRACKING_PED", LUA_NATIVE_PED_IS_PED_HEADTRACKING_PED);
		PED.set_function("IS_PED_HEADTRACKING_ENTITY", LUA_NATIVE_PED_IS_PED_HEADTRACKING_ENTITY);
		PED.set_function("DISABLE_AMBIENT_LOOK_AT_REQUESTS_", LUA_NATIVE_PED_DISABLE_AMBIENT_LOOK_AT_REQUESTS_);
		PED.set_function("DISABLE_ALL_LOOK_AT_REQUESTS_", LUA_NATIVE_PED_DISABLE_ALL_LOOK_AT_REQUESTS_);
		PED.set_function("0xCD9E5F94A2F38683_", LUA_NATIVE_PED_0xCD9E5F94A2F38683_);
		PED.set_function("SET_PED_CLOTH_PIN_FRAMES", LUA_NATIVE_PED_SET_PED_CLOTH_PIN_FRAMES);
		PED.set_function("0x1D4636C90BBEFACB_", LUA_NATIVE_PED_0x1D4636C90BBEFACB_);
		PED.set_function("0xEF371232BC6053E1_", LUA_NATIVE_PED_0xEF371232BC6053E1_);
		PED.set_function("0x86F0B6730C32AC14_", LUA_NATIVE_PED_0x86F0B6730C32AC14_);
		PED.set_function("0x8101BA1C0B462412_", LUA_NATIVE_PED_0x8101BA1C0B462412_);
		PED.set_function("SET_PED_CONFIG_FLAG", LUA_NATIVE_PED_SET_PED_CONFIG_FLAG);
		PED.set_function("SET_PED_RESET_FLAG", LUA_NATIVE_PED_SET_PED_RESET_FLAG);
		PED.set_function("GET_PED_CONFIG_FLAG", LUA_NATIVE_PED_GET_PED_CONFIG_FLAG);
		PED.set_function("GET_PED_RESET_FLAG", LUA_NATIVE_PED_GET_PED_RESET_FLAG);
		PED.set_function("0xC6981AFF6D2A71C2_", LUA_NATIVE_PED_0xC6981AFF6D2A71C2_);
		PED.set_function("0xE0FE107AB174D64A_", LUA_NATIVE_PED_0xE0FE107AB174D64A_);
		PED.set_function("SET_PED_GROUP_MEMBER_PASSENGER_INDEX", LUA_NATIVE_PED_SET_PED_GROUP_MEMBER_PASSENGER_INDEX);
		PED.set_function("IS_PED_EVASIVE_DIVING", LUA_NATIVE_PED_IS_PED_EVASIVE_DIVING);
		PED.set_function("SHOOT_TRIGGER_AT_COORDS_", LUA_NATIVE_PED_SHOOT_TRIGGER_AT_COORDS_);
		PED.set_function("IS_THIS_MODEL_A_HORSE_", LUA_NATIVE_PED_IS_THIS_MODEL_A_HORSE_);
		PED.set_function("SET_PED_MODEL_IS_SUPPRESSED", LUA_NATIVE_PED_SET_PED_MODEL_IS_SUPPRESSED);
		PED.set_function("IS_PED_MODEL_SUPPRESSED_", LUA_NATIVE_PED_IS_PED_MODEL_SUPPRESSED_);
		PED.set_function("0x7ABBD9E449E0DB00_", LUA_NATIVE_PED_0x7ABBD9E449E0DB00_);
		PED.set_function("SET_PED_DISABLE_KICK_MOVE_", LUA_NATIVE_PED_SET_PED_DISABLE_KICK_MOVE_);
		PED.set_function("SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT", LUA_NATIVE_PED_SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT);
		PED.set_function("0xE6CB36F43A95D75F_", LUA_NATIVE_PED_0xE6CB36F43A95D75F_);
		PED.set_function("SET_PED_LEG_IK_MODE", LUA_NATIVE_PED_SET_PED_LEG_IK_MODE);
		PED.set_function("IS_PED_IN_POINT_", LUA_NATIVE_PED_IS_PED_IN_POINT_);
		PED.set_function("SET_PED_CAN_BE_LASSOED_", LUA_NATIVE_PED_SET_PED_CAN_BE_LASSOED_);
		PED.set_function("SET_PED_COMBAT_MOVEMENT", LUA_NATIVE_PED_SET_PED_COMBAT_MOVEMENT);
		PED.set_function("GET_PED_COMBAT_MOVEMENT", LUA_NATIVE_PED_GET_PED_COMBAT_MOVEMENT);
		PED.set_function("0x815C0074A1BC0D93_", LUA_NATIVE_PED_0x815C0074A1BC0D93_);
		PED.set_function("0xFFDE295662405B25_", LUA_NATIVE_PED_0xFFDE295662405B25_);
		PED.set_function("SET_PED_COMBAT_ABILITY", LUA_NATIVE_PED_SET_PED_COMBAT_ABILITY);
		PED.set_function("SET_PED_COMBAT_RANGE", LUA_NATIVE_PED_SET_PED_COMBAT_RANGE);
		PED.set_function("SET_PED_COMBAT_ATTRIBUTES", LUA_NATIVE_PED_SET_PED_COMBAT_ATTRIBUTES);
		PED.set_function("GET_PED_COMBAT_ATTRIBUTE_", LUA_NATIVE_PED_GET_PED_COMBAT_ATTRIBUTE_);
		PED.set_function("SET_PED_COMBAT_ATTRIBUTE_HASH_", LUA_NATIVE_PED_SET_PED_COMBAT_ATTRIBUTE_HASH_);
		PED.set_function("SET_PED_TARGET_LOSS_RESPONSE", LUA_NATIVE_PED_SET_PED_TARGET_LOSS_RESPONSE);
		PED.set_function("0x0A4618FFD517E24D_", LUA_NATIVE_PED_0x0A4618FFD517E24D_);
		PED.set_function("0x712B2C2B2471B493_", LUA_NATIVE_PED_0x712B2C2B2471B493_);
		PED.set_function("0x00B380FF2DF6AB7A_", LUA_NATIVE_PED_0x00B380FF2DF6AB7A_);
		PED.set_function("SET_PED_COMBAT_STYLE_", LUA_NATIVE_PED_SET_PED_COMBAT_STYLE_);
		PED.set_function("CLEAR_PED_COMBAT_STYLE_", LUA_NATIVE_PED_CLEAR_PED_COMBAT_STYLE_);
		PED.set_function("SET_PED_COMBAT_STYLE_MOD_", LUA_NATIVE_PED_SET_PED_COMBAT_STYLE_MOD_);
		PED.set_function("CLEAR_PED_COMBAT_STYLE_MOD_", LUA_NATIVE_PED_CLEAR_PED_COMBAT_STYLE_MOD_);
		PED.set_function("0x5BF0B9D9A8E227A0_", LUA_NATIVE_PED_0x5BF0B9D9A8E227A0_);
		PED.set_function("0x642720D8D69328B6_", LUA_NATIVE_PED_0x642720D8D69328B6_);
		PED.set_function("IS_PED_PERFORMING_MELEE_ACTION", LUA_NATIVE_PED_IS_PED_PERFORMING_MELEE_ACTION);
		PED.set_function("0x99DF2639DA76C1DC_", LUA_NATIVE_PED_0x99DF2639DA76C1DC_);
		PED.set_function("GET_PED_MELEE_ACTION_PHASE_", LUA_NATIVE_PED_GET_PED_MELEE_ACTION_PHASE_);
		PED.set_function("IS_PED_BEING_STEALTH_KILLED", LUA_NATIVE_PED_IS_PED_BEING_STEALTH_KILLED);
		PED.set_function("GET_MELEE_TARGET_FOR_PED", LUA_NATIVE_PED_GET_MELEE_TARGET_FOR_PED);
		PED.set_function("0xDEDBED3020DA49DC_", LUA_NATIVE_PED_0xDEDBED3020DA49DC_);
		PED.set_function("0xA405BF9F01960C16_", LUA_NATIVE_PED_0xA405BF9F01960C16_);
		PED.set_function("GET_PED_BRAWLING_STYLE_", LUA_NATIVE_PED_GET_PED_BRAWLING_STYLE_);
		PED.set_function("SET_PED_BRAWLING_STYLE_", LUA_NATIVE_PED_SET_PED_BRAWLING_STYLE_);
		PED.set_function("0x9D8DFE2DE9CB4DFC_", LUA_NATIVE_PED_0x9D8DFE2DE9CB4DFC_);
		PED.set_function("0xC48AF420371C7407_", LUA_NATIVE_PED_0xC48AF420371C7407_);
		PED.set_function("0x5EFA8A3D8A60D662_", LUA_NATIVE_PED_0x5EFA8A3D8A60D662_);
		PED.set_function("0x242EDF85D4E87B65_", LUA_NATIVE_PED_0x242EDF85D4E87B65_);
		PED.set_function("SET_PED_COMBAT_BEHAVIOUR_", LUA_NATIVE_PED_SET_PED_COMBAT_BEHAVIOUR_);
		PED.set_function("0x9A4AC116CC1EEE14_", LUA_NATIVE_PED_0x9A4AC116CC1EEE14_);
		PED.set_function("0xE20027B414BFE6C7_", LUA_NATIVE_PED_0xE20027B414BFE6C7_);
		PED.set_function("SET_PED_BEAT_MULTIPLIER_", LUA_NATIVE_PED_SET_PED_BEAT_MULTIPLIER_);
		PED.set_function("SET_PED_ACTION_DISABLE_FLAG_", LUA_NATIVE_PED_SET_PED_ACTION_DISABLE_FLAG_);
		PED.set_function("CLEAR_PED_ACTION_DISABLE_FLAG_", LUA_NATIVE_PED_CLEAR_PED_ACTION_DISABLE_FLAG_);
		PED.set_function("IS_PED_ACTION_DISABLE_FLAG_ENABLED_", LUA_NATIVE_PED_IS_PED_ACTION_DISABLE_FLAG_ENABLED_);
		PED.set_function("SET_PED_TARGET_ACTION_DISABLE_FLAG_", LUA_NATIVE_PED_SET_PED_TARGET_ACTION_DISABLE_FLAG_);
		PED.set_function("CLEAR_PED_TARGET_ACTION_DISABLE_FLAG_", LUA_NATIVE_PED_CLEAR_PED_TARGET_ACTION_DISABLE_FLAG_);
		PED.set_function("IS_PED_TARGET_ACTION_DISABLE_FLAG_ENABLED_", LUA_NATIVE_PED_IS_PED_TARGET_ACTION_DISABLE_FLAG_ENABLED_);
		PED.set_function("0x57F35552E771BE9D_", LUA_NATIVE_PED_0x57F35552E771BE9D_);
		PED.set_function("0x7C10221CE718AA72_", LUA_NATIVE_PED_0x7C10221CE718AA72_);
		PED.set_function("0x0D3B1568917EBDA0_", LUA_NATIVE_PED_0x0D3B1568917EBDA0_);
		PED.set_function("0x29F3539189D3E277_", LUA_NATIVE_PED_0x29F3539189D3E277_);
		PED.set_function("0xE9E06EA514A69061_", LUA_NATIVE_PED_0xE9E06EA514A69061_);
		PED.set_function("SET_PED_WRITHING_DURATION_", LUA_NATIVE_PED_SET_PED_WRITHING_DURATION_);
		PED.set_function("GET_PED_REMAINING_REVIVAL_TIME_", LUA_NATIVE_PED_GET_PED_REMAINING_REVIVAL_TIME_);
		PED.set_function("SET_PAUSE_PED_WRITHE_BLEEDOUT", LUA_NATIVE_PED_SET_PAUSE_PED_WRITHE_BLEEDOUT);
		PED.set_function("0x12EB4E31F092C9B3_", LUA_NATIVE_PED_0x12EB4E31F092C9B3_);
		PED.set_function("GET_PED_IS_GRAPPLING", LUA_NATIVE_PED_GET_PED_IS_GRAPPLING);
		PED.set_function("GET_PED_IS_BEING_GRAPPLED", LUA_NATIVE_PED_GET_PED_IS_BEING_GRAPPLED);
		PED.set_function("GET_PED_GRAPPLER_", LUA_NATIVE_PED_GET_PED_GRAPPLER_);
		PED.set_function("GET_PED_GRAPPLE_STATE", LUA_NATIVE_PED_GET_PED_GRAPPLE_STATE);
		PED.set_function("GET_PED_GRAPPLE_STYLE_", LUA_NATIVE_PED_GET_PED_GRAPPLE_STYLE_);
		PED.set_function("SET_PED_GRAPPLE_STYLE_", LUA_NATIVE_PED_SET_PED_GRAPPLE_STYLE_);
		PED.set_function("SET_PED_GRAPPLE_SEQUENCE_", LUA_NATIVE_PED_SET_PED_GRAPPLE_SEQUENCE_);
		PED.set_function("SET_PED_GRAPPLE_FLAG_", LUA_NATIVE_PED_SET_PED_GRAPPLE_FLAG_);
		PED.set_function("CLEAR_PED_GRAPPLE_FLAG_", LUA_NATIVE_PED_CLEAR_PED_GRAPPLE_FLAG_);
		PED.set_function("GET_PED_GRAPPLE_FLAG_", LUA_NATIVE_PED_GET_PED_GRAPPLE_FLAG_);
		PED.set_function("SET_PED_GRAPPLE_ACTION_", LUA_NATIVE_PED_SET_PED_GRAPPLE_ACTION_);
		PED.set_function("SET_PED_GRAPPLE_EFFECT_MULTIPLIER_", LUA_NATIVE_PED_SET_PED_GRAPPLE_EFFECT_MULTIPLIER_);
		PED.set_function("SET_PED_GRAPPLE_ANIMATION_", LUA_NATIVE_PED_SET_PED_GRAPPLE_ANIMATION_);
		PED.set_function("SET_PED_FLEE_ATTRIBUTES", LUA_NATIVE_PED_SET_PED_FLEE_ATTRIBUTES);
		PED.set_function("IS_PED_COWERING_", LUA_NATIVE_PED_IS_PED_COWERING_);
		PED.set_function("IS_ANY_PED_NEAR_POINT", LUA_NATIVE_PED_IS_ANY_PED_NEAR_POINT);
		PED.set_function("FORCE_PED_AI_AND_ANIMATION_UPDATE", LUA_NATIVE_PED_FORCE_PED_AI_AND_ANIMATION_UPDATE);
		PED.set_function("0xC2722B252C79E641_", LUA_NATIVE_PED_0xC2722B252C79E641_);
		PED.set_function("IS_PED_DOING_SCENARIO_TRANSITION_", LUA_NATIVE_PED_IS_PED_DOING_SCENARIO_TRANSITION_);
		PED.set_function("0x2DC0E8DCBD3546E9_", LUA_NATIVE_PED_0x2DC0E8DCBD3546E9_);
		PED.set_function("ADD_SCENARIO_TRANSITION_", LUA_NATIVE_PED_ADD_SCENARIO_TRANSITION_);
		PED.set_function("GIVE_PED_HASH_COMMAND_", LUA_NATIVE_PED_GIVE_PED_HASH_COMMAND_);
		PED.set_function("GET_IS_PED_COMMAND_HASH_PRESENT_", LUA_NATIVE_PED_GET_IS_PED_COMMAND_HASH_PRESENT_);
		PED.set_function("IS_PED_HEADING_TOWARDS_POSITION", LUA_NATIVE_PED_IS_PED_HEADING_TOWARDS_POSITION);
		PED.set_function("0x600BBDD29820370C_", LUA_NATIVE_PED_0x600BBDD29820370C_);
		PED.set_function("REQUEST_PED_VISIBILITY_TRACKING", LUA_NATIVE_PED_REQUEST_PED_VISIBILITY_TRACKING);
		PED.set_function("RELEASE_PED_VISIBILITY_TRACKING", LUA_NATIVE_PED_RELEASE_PED_VISIBILITY_TRACKING);
		PED.set_function("REQUEST_PED_VEHICLE_VISIBILITY_TRACKING", LUA_NATIVE_PED_REQUEST_PED_VEHICLE_VISIBILITY_TRACKING);
		PED.set_function("REQUEST_PED_USE_SMALL_BBOX_VISIBILITY_TRACKING", LUA_NATIVE_PED_REQUEST_PED_USE_SMALL_BBOX_VISIBILITY_TRACKING);
		PED.set_function("GET_TRACKED_PED_PIXELCOUNT", LUA_NATIVE_PED_GET_TRACKED_PED_PIXELCOUNT);
		PED.set_function("IS_TRACKED_PED_VISIBLE", LUA_NATIVE_PED_IS_TRACKED_PED_VISIBLE);
		PED.set_function("IS_TRACKED_PED_VISIBILITY_PERCENTAGE_NOT_LESS_THAN_", LUA_NATIVE_PED_IS_TRACKED_PED_VISIBILITY_PERCENTAGE_NOT_LESS_THAN_);
		PED.set_function("IS_PED_VISIBILITY_TRACKED_", LUA_NATIVE_PED_IS_PED_VISIBILITY_TRACKED_);
		PED.set_function("CAN_PED_BE_MOUNTED", LUA_NATIVE_PED_CAN_PED_BE_MOUNTED);
		PED.set_function("IS_META_PED_FISH_", LUA_NATIVE_PED_IS_META_PED_FISH_);
		PED.set_function("IS_EVENT_IN_QUEUE", LUA_NATIVE_PED_IS_EVENT_IN_QUEUE);
		PED.set_function("CAN_PED_SEE_ENTITY", LUA_NATIVE_PED_CAN_PED_SEE_ENTITY);
		PED.set_function("CAN_PED_SEE_PED_CACHED", LUA_NATIVE_PED_CAN_PED_SEE_PED_CACHED);
		PED.set_function("0x0EA9EACBA3B01601_", LUA_NATIVE_PED_0x0EA9EACBA3B01601_);
		PED.set_function("GET_PED_BONE_INDEX", LUA_NATIVE_PED_GET_PED_BONE_INDEX);
		PED.set_function("0xC5303F460A40D21D_", LUA_NATIVE_PED_0xC5303F460A40D21D_);
		PED.set_function("0xE29D8CD66553DBAA_", LUA_NATIVE_PED_0xE29D8CD66553DBAA_);
		PED.set_function("0xB06F5F1DEF417216_", LUA_NATIVE_PED_0xB06F5F1DEF417216_);
		PED.set_function("0xFC23348F0F4E245F_", LUA_NATIVE_PED_0xFC23348F0F4E245F_);
		PED.set_function("0x9184788BFF1EDAD7_", LUA_NATIVE_PED_0x9184788BFF1EDAD7_);
		PED.set_function("SET_PED_DIRT_CLEANED_", LUA_NATIVE_PED_SET_PED_DIRT_CLEANED_);
		PED.set_function("0x0105FEE8F9091255_", LUA_NATIVE_PED_0x0105FEE8F9091255_);
		PED.set_function("0xD049920CD29F6CC8_", LUA_NATIVE_PED_0xD049920CD29F6CC8_);
		PED.set_function("0xBB3E5370EBB6BE28_", LUA_NATIVE_PED_0xBB3E5370EBB6BE28_);
		PED.set_function("0x2FA568BFA725F8D6_", LUA_NATIVE_PED_0x2FA568BFA725F8D6_);
		PED.set_function("0x56E4BAD93D33453C_", LUA_NATIVE_PED_0x56E4BAD93D33453C_);
		PED.set_function("0x75A082563B4452E5_", LUA_NATIVE_PED_0x75A082563B4452E5_);
		PED.set_function("0x16802C32B2FCA06B_", LUA_NATIVE_PED_0x16802C32B2FCA06B_);
		PED.set_function("0x8BA0C65AC15A7D33_", LUA_NATIVE_PED_0x8BA0C65AC15A7D33_);
		PED.set_function("0x0FFDF937E5C11382_", LUA_NATIVE_PED_0x0FFDF937E5C11382_);
		PED.set_function("0x5FCF25D584065BFD_", LUA_NATIVE_PED_0x5FCF25D584065BFD_);
		PED.set_function("0xA2116C1E4ED85C24_", LUA_NATIVE_PED_0xA2116C1E4ED85C24_);
		PED.set_function("FORCE_PED_MOTION_STATE", LUA_NATIVE_PED_FORCE_PED_MOTION_STATE);
		PED.set_function("0x75D3333409CD33CE_", LUA_NATIVE_PED_0x75D3333409CD33CE_);
		PED.set_function("GET_PED_CURRENT_MOVE_BLEND_RATIO", LUA_NATIVE_PED_GET_PED_CURRENT_MOVE_BLEND_RATIO);
		PED.set_function("SET_PED_MAX_MOVE_BLEND_RATIO", LUA_NATIVE_PED_SET_PED_MAX_MOVE_BLEND_RATIO);
		PED.set_function("SET_PED_MIN_MOVE_BLEND_RATIO", LUA_NATIVE_PED_SET_PED_MIN_MOVE_BLEND_RATIO);
		PED.set_function("0xBC1DC48270468444_", LUA_NATIVE_PED_0xBC1DC48270468444_);
		PED.set_function("0x46BF2A810679D6E6_", LUA_NATIVE_PED_0x46BF2A810679D6E6_);
		PED.set_function("0xCA95924C893A0C91_", LUA_NATIVE_PED_0xCA95924C893A0C91_);
		PED.set_function("HORSE_AGITATE_", LUA_NATIVE_PED_HORSE_AGITATE_);
		PED.set_function("0x413697EC260AABBF_", LUA_NATIVE_PED_0x413697EC260AABBF_);
		PED.set_function("0xCAC43D060099EA72_", LUA_NATIVE_PED_0xCAC43D060099EA72_);
		PED.set_function("0xC9151483CC06A414_", LUA_NATIVE_PED_0xC9151483CC06A414_);
		PED.set_function("0xAD3330E3C3E98007_", LUA_NATIVE_PED_0xAD3330E3C3E98007_);
		PED.set_function("0xB8E2D655E1D5BD39_", LUA_NATIVE_PED_0xB8E2D655E1D5BD39_);
		PED.set_function("0x7BB810E8B343AC7B_", LUA_NATIVE_PED_0x7BB810E8B343AC7B_);
		PED.set_function("SET_PED_MOVE_RATE_OVERRIDE", LUA_NATIVE_PED_SET_PED_MOVE_RATE_OVERRIDE);
		PED.set_function("GET_PED_NEARBY_VEHICLES", LUA_NATIVE_PED_GET_PED_NEARBY_VEHICLES);
		PED.set_function("GET_PED_NEARBY_PEDS", LUA_NATIVE_PED_GET_PED_NEARBY_PEDS);
		PED.set_function("IS_PED_READY_TO_RENDER", LUA_NATIVE_PED_IS_PED_READY_TO_RENDER);
		PED.set_function("0x6A489892E813951A_", LUA_NATIVE_PED_0x6A489892E813951A_);
		PED.set_function("IS_PED_USING_ACTION_MODE", LUA_NATIVE_PED_IS_PED_USING_ACTION_MODE);
		PED.set_function("IS_PED_USING_ACTION_MODE_2_", LUA_NATIVE_PED_IS_PED_USING_ACTION_MODE_2_);
		PED.set_function("SET_PED_USING_ACTION_MODE", LUA_NATIVE_PED_SET_PED_USING_ACTION_MODE);
		PED.set_function("SET_PED_CAPSULE", LUA_NATIVE_PED_SET_PED_CAPSULE);
		PED.set_function("GET_RIDER_OF_MOUNT_", LUA_NATIVE_PED_GET_RIDER_OF_MOUNT_);
		PED.set_function("SPAWNPOINTS_START_SEARCH", LUA_NATIVE_PED_SPAWNPOINTS_START_SEARCH);
		PED.set_function("SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA", LUA_NATIVE_PED_SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA);
		PED.set_function("SPAWNPOINTS_START_SEARCH_WITH_VOLUME_", LUA_NATIVE_PED_SPAWNPOINTS_START_SEARCH_WITH_VOLUME_);
		PED.set_function("SPAWNPOINTS_CANCEL_SEARCH", LUA_NATIVE_PED_SPAWNPOINTS_CANCEL_SEARCH);
		PED.set_function("SPAWNPOINTS_IS_SEARCH_ACTIVE", LUA_NATIVE_PED_SPAWNPOINTS_IS_SEARCH_ACTIVE);
		PED.set_function("SPAWNPOINTS_IS_SEARCH_COMPLETE", LUA_NATIVE_PED_SPAWNPOINTS_IS_SEARCH_COMPLETE);
		PED.set_function("SPAWNPOINTS_IS_SEARCH_FAILED", LUA_NATIVE_PED_SPAWNPOINTS_IS_SEARCH_FAILED);
		PED.set_function("SPAWNPOINTS_GET_NUM_SEARCH_RESULTS", LUA_NATIVE_PED_SPAWNPOINTS_GET_NUM_SEARCH_RESULTS);
		PED.set_function("SPAWNPOINTS_GET_SEARCH_RESULT", LUA_NATIVE_PED_SPAWNPOINTS_GET_SEARCH_RESULT);
		PED.set_function("SPAWNPOINTS_GET_SEARCH_RESULT_FLAGS", LUA_NATIVE_PED_SPAWNPOINTS_GET_SEARCH_RESULT_FLAGS);
		PED.set_function("SET_IK_TARGET", LUA_NATIVE_PED_SET_IK_TARGET);
		PED.set_function("REQUEST_PED_EMOTIONAL_PRESET_", LUA_NATIVE_PED_REQUEST_PED_EMOTIONAL_PRESET_);
		PED.set_function("HAS_PED_EMOTIONAL_PRESET_LOADED_", LUA_NATIVE_PED_HAS_PED_EMOTIONAL_PRESET_LOADED_);
		PED.set_function("REMOVE_PED_EMOTIONAL_PRESET_", LUA_NATIVE_PED_REMOVE_PED_EMOTIONAL_PRESET_);
		PED.set_function("REQUEST_MOTION_TYPE_ASSET_", LUA_NATIVE_PED_REQUEST_MOTION_TYPE_ASSET_);
		PED.set_function("HAS_MOTION_TYPE_ASSET_LOADED", LUA_NATIVE_PED_HAS_MOTION_TYPE_ASSET_LOADED);
		PED.set_function("REMOVE_MOTION_TYPE_ASSET_", LUA_NATIVE_PED_REMOVE_MOTION_TYPE_ASSET_);
		PED.set_function("0x290B2E6CCDE532E1_", LUA_NATIVE_PED_0x290B2E6CCDE532E1_);
		PED.set_function("0x0EEF7A81C17679DB_", LUA_NATIVE_PED_0x0EEF7A81C17679DB_);
		PED.set_function("SET_PED_LOD_MULTIPLIER", LUA_NATIVE_PED_SET_PED_LOD_MULTIPLIER);
		PED.set_function("GET_PED_LOD_MULTIPLIER_", LUA_NATIVE_PED_GET_PED_LOD_MULTIPLIER_);
		PED.set_function("0xA218D2BBCAA7388C_", LUA_NATIVE_PED_0xA218D2BBCAA7388C_);
		PED.set_function("IS_ANY_HOSTILE_PED_NEAR_POINT", LUA_NATIVE_PED_IS_ANY_HOSTILE_PED_NEAR_POINT);
		PED.set_function("0xCBDE59C48F2B06F5_", LUA_NATIVE_PED_0xCBDE59C48F2B06F5_);
		PED.set_function("0x6A190B94C2541A99_", LUA_NATIVE_PED_0x6A190B94C2541A99_);
		PED.set_function("IS_TARGET_PED_IN_PERCEPTION_AREA", LUA_NATIVE_PED_IS_TARGET_PED_IN_PERCEPTION_AREA);
		PED.set_function("SET_POP_CONTROL_SPHERE_THIS_FRAME", LUA_NATIVE_PED_SET_POP_CONTROL_SPHERE_THIS_FRAME);
		PED.set_function("IS_PED_HOGTIED", LUA_NATIVE_PED_IS_PED_HOGTIED);
		PED.set_function("IS_PED_BEING_HOGTIED", LUA_NATIVE_PED_IS_PED_BEING_HOGTIED);
		PED.set_function("0x3D9F958834AB9C30_", LUA_NATIVE_PED_0x3D9F958834AB9C30_);
		PED.set_function("0x913D04A5176F84C9_", LUA_NATIVE_PED_0x913D04A5176F84C9_);
		PED.set_function("IS_PED_HOGTYING", LUA_NATIVE_PED_IS_PED_HOGTYING);
		PED.set_function("GET_PED_LASSO_HOGTIE_FLAG_", LUA_NATIVE_PED_GET_PED_LASSO_HOGTIE_FLAG_);
		PED.set_function("SET_PED_LASSO_HOGTIE_FLAG", LUA_NATIVE_PED_SET_PED_LASSO_HOGTIE_FLAG);
		PED.set_function("0x4642182A298187D0_", LUA_NATIVE_PED_0x4642182A298187D0_);
		PED.set_function("0x6B67320E0D57856A_", LUA_NATIVE_PED_0x6B67320E0D57856A_);
		PED.set_function("GET_FIRST_ENTITY_PED_IS_CARRYING_", LUA_NATIVE_PED_GET_FIRST_ENTITY_PED_IS_CARRYING_);
		PED.set_function("0xAA6C49AE90A32299_", LUA_NATIVE_PED_0xAA6C49AE90A32299_);
		PED.set_function("GET_CARRIER_AS_PED_", LUA_NATIVE_PED_GET_CARRIER_AS_PED_);
		PED.set_function("GET_CARRIER_AS_MOUNT_", LUA_NATIVE_PED_GET_CARRIER_AS_MOUNT_);
		PED.set_function("GET_CARRIER_AS_HUMAN_", LUA_NATIVE_PED_GET_CARRIER_AS_HUMAN_);
		PED.set_function("GET_CARRIED_ATTACHED_INFO_FOR_SLOT", LUA_NATIVE_PED_GET_CARRIED_ATTACHED_INFO_FOR_SLOT);
		PED.set_function("DETACH_CARRIABLE_ENTITY", LUA_NATIVE_PED_DETACH_CARRIABLE_ENTITY);
		PED.set_function("FIND_ALL_ATTACHED_CARRIABLE_ENTITIES", LUA_NATIVE_PED_FIND_ALL_ATTACHED_CARRIABLE_ENTITIES);
		PED.set_function("IS_PED_CARRYING_SOMETHING", LUA_NATIVE_PED_IS_PED_CARRYING_SOMETHING);
		PED.set_function("0xB65927F861E7AE39_", LUA_NATIVE_PED_0xB65927F861E7AE39_);
		PED.set_function("0xA1FBAC56D38563E2_", LUA_NATIVE_PED_0xA1FBAC56D38563E2_);
		PED.set_function("0x6F43C351A5D51E2F_", LUA_NATIVE_PED_0x6F43C351A5D51E2F_);
		PED.set_function("IS_PED_LASSOED", LUA_NATIVE_PED_IS_PED_LASSOED);
		PED.set_function("GET_LASSOER_OF_PED_", LUA_NATIVE_PED_GET_LASSOER_OF_PED_);
		PED.set_function("GET_LASSO_TARGET_", LUA_NATIVE_PED_GET_LASSO_TARGET_);
		PED.set_function("GET_LASSOED_LASSOER_", LUA_NATIVE_PED_GET_LASSOED_LASSOER_);
		PED.set_function("SET_LOOTING_FLAG", LUA_NATIVE_PED_SET_LOOTING_FLAG);
		PED.set_function("GET_LOOTING_FLAG_", LUA_NATIVE_PED_GET_LOOTING_FLAG_);
		PED.set_function("REFRESH_LOOT_STATE_FOR_PED_", LUA_NATIVE_PED_REFRESH_LOOT_STATE_FOR_PED_);
		PED.set_function("GET_PED_LOOT_STATUS_MP", LUA_NATIVE_PED_GET_PED_LOOT_STATUS_MP);
		PED.set_function("0x4B19F171450E0D4F_", LUA_NATIVE_PED_0x4B19F171450E0D4F_);
		PED.set_function("0x758F081DB204DDDE_", LUA_NATIVE_PED_0x758F081DB204DDDE_);
		PED.set_function("GET_LOOTING_PICKUP_TARGET_ENTITY", LUA_NATIVE_PED_GET_LOOTING_PICKUP_TARGET_ENTITY);
		PED.set_function("0x7B5C293238EE4F20_", LUA_NATIVE_PED_0x7B5C293238EE4F20_);
		PED.set_function("0xAE6B68A83ABBE7C0_", LUA_NATIVE_PED_0xAE6B68A83ABBE7C0_);
		PED.set_function("0xA4B6432E3880F2F9_", LUA_NATIVE_PED_0xA4B6432E3880F2F9_);
		PED.set_function("ADD_PED_SUBSCRIBE_TO_LEGENDARY_BLIPS_", LUA_NATIVE_PED_ADD_PED_SUBSCRIBE_TO_LEGENDARY_BLIPS_);
		PED.set_function("REMOVE_PED_SUBSCRIBE_TO_LEGENDARY_BLIPS_", LUA_NATIVE_PED_REMOVE_PED_SUBSCRIBE_TO_LEGENDARY_BLIPS_);
		PED.set_function("IS_PED_INCAPACITATED", LUA_NATIVE_PED_IS_PED_INCAPACITATED);
		PED.set_function("SET_PED_INCAPACITATION_MODIFIERS_", LUA_NATIVE_PED_SET_PED_INCAPACITATION_MODIFIERS_);
		PED.set_function("GET_PED_CAN_BE_INCAPACITATED_THIS_FRAME_", LUA_NATIVE_PED_GET_PED_CAN_BE_INCAPACITATED_THIS_FRAME_);
		PED.set_function("SET_PED_CAN_BE_INCAPACITATED", LUA_NATIVE_PED_SET_PED_CAN_BE_INCAPACITATED);
		PED.set_function("GET_PED_INCAPACITATION_HEALTH_", LUA_NATIVE_PED_GET_PED_INCAPACITATION_HEALTH_);
		PED.set_function("SET_PED_INCAPACITATION_TOTAL_BLEED_OUT_DURATION_", LUA_NATIVE_PED_SET_PED_INCAPACITATION_TOTAL_BLEED_OUT_DURATION_);
		PED.set_function("RESET_PED_INCAPACITATION_BLEED_OUT_DURATION_", LUA_NATIVE_PED_RESET_PED_INCAPACITATION_BLEED_OUT_DURATION_);
		PED.set_function("SET_PED_INCAPACITATION_FLAGS_", LUA_NATIVE_PED_SET_PED_INCAPACITATION_FLAGS_);
		PED.set_function("0x92A1B55A59720395_", LUA_NATIVE_PED_0x92A1B55A59720395_);
		PED.set_function("INCAPACITATED_REVIVE_", LUA_NATIVE_PED_INCAPACITATED_REVIVE_);
		PED.set_function("GET_INCAPACITATION_TIME_REMAINING_", LUA_NATIVE_PED_GET_INCAPACITATION_TIME_REMAINING_);
		PED.set_function("SET_PED_KNOCKED_BY_ONE_HIT_", LUA_NATIVE_PED_SET_PED_KNOCKED_BY_ONE_HIT_);
		PED.set_function("0x2E5B5D1F1453E08E_", LUA_NATIVE_PED_0x2E5B5D1F1453E08E_);
		PED.set_function("0x29924EB8EE9DB926_", LUA_NATIVE_PED_0x29924EB8EE9DB926_);
		PED.set_function("SET_PED_ACTIVE_PLAYER_TYPE_", LUA_NATIVE_PED_SET_PED_ACTIVE_PLAYER_TYPE_);
		PED.set_function("0xCB86D3E3E3708901_", LUA_NATIVE_PED_0xCB86D3E3E3708901_);
		PED.set_function("0x633F83B301C87994_", LUA_NATIVE_PED_0x633F83B301C87994_);
		PED.set_function("0x5203038FF8BAE577_", LUA_NATIVE_PED_0x5203038FF8BAE577_);
		PED.set_function("0x7F090958AE95B61B_", LUA_NATIVE_PED_0x7F090958AE95B61B_);
		PED.set_function("0xC494C76A34266E82_", LUA_NATIVE_PED_0xC494C76A34266E82_);
		PED.set_function("0xC3995D396F1D97B6_", LUA_NATIVE_PED_0xC3995D396F1D97B6_);
		PED.set_function("0x15F4732C357B1D6D_", LUA_NATIVE_PED_0x15F4732C357B1D6D_);
		PED.set_function("0x947E43F544B6AB34_", LUA_NATIVE_PED_0x947E43F544B6AB34_);
		PED.set_function("0x32417CB860A3BDC4_", LUA_NATIVE_PED_0x32417CB860A3BDC4_);
		PED.set_function("0xE737D5F14304A2EC_", LUA_NATIVE_PED_0xE737D5F14304A2EC_);
		PED.set_function("0xEBD49472BCCF7642_", LUA_NATIVE_PED_0xEBD49472BCCF7642_);
		PED.set_function("SET_PLAYER_GREET_DISABLED_FOR_PED_", LUA_NATIVE_PED_SET_PLAYER_GREET_DISABLED_FOR_PED_);
		PED.set_function("SET_PLAYER_ANTAGONIZE_DISABLED_FOR_PED_", LUA_NATIVE_PED_SET_PLAYER_ANTAGONIZE_DISABLED_FOR_PED_);
		PED.set_function("0xB9BDFAE609DFB7C5_", LUA_NATIVE_PED_0xB9BDFAE609DFB7C5_);
		PED.set_function("0xF7327ACC7A89AEF1_", LUA_NATIVE_PED_0xF7327ACC7A89AEF1_);
		PED.set_function("GET_PED_ATTITUDE_", LUA_NATIVE_PED_GET_PED_ATTITUDE_);
		PED.set_function("0x1E017404784AA6A3_", LUA_NATIVE_PED_0x1E017404784AA6A3_);
		PED.set_function("0x2B4CE170DE09F346_", LUA_NATIVE_PED_0x2B4CE170DE09F346_);
		PED.set_function("0x7C8AA850617651D9_", LUA_NATIVE_PED_0x7C8AA850617651D9_);
		PED.set_function("GET_PED_MOTIVATION_", LUA_NATIVE_PED_GET_PED_MOTIVATION_);
		PED.set_function("SET_PED_MOTIVATION_", LUA_NATIVE_PED_SET_PED_MOTIVATION_);
		PED.set_function("0x23BDE06596A22CEC_", LUA_NATIVE_PED_0x23BDE06596A22CEC_);
		PED.set_function("0xCDFB8C04D4C95D9B_", LUA_NATIVE_PED_0xCDFB8C04D4C95D9B_);
		PED.set_function("GET_IS_PED_MOTIVATION_STATE_ENABLED_", LUA_NATIVE_PED_GET_IS_PED_MOTIVATION_STATE_ENABLED_);
		PED.set_function("SET_PED_MOTIVATION_STATE_OVERRIDE_", LUA_NATIVE_PED_SET_PED_MOTIVATION_STATE_OVERRIDE_);
		PED.set_function("SET_PED_MOTIVATION_MODIFIER_", LUA_NATIVE_PED_SET_PED_MOTIVATION_MODIFIER_);
		PED.set_function("0xFD8E853F0BC2E942_", LUA_NATIVE_PED_0xFD8E853F0BC2E942_);
		PED.set_function("SET_PED_SCENT_", LUA_NATIVE_PED_SET_PED_SCENT_);
		PED.set_function("SET_PED_LADDER_MOVEMENT_SPEED_MODIFIER_", LUA_NATIVE_PED_SET_PED_LADDER_MOVEMENT_SPEED_MODIFIER_);
		PED.set_function("RESET_PED_LADDER_MOVEMENT_SPEED_MODIFIER_", LUA_NATIVE_PED_RESET_PED_LADDER_MOVEMENT_SPEED_MODIFIER_);
		PED.set_function("0xC6C4E15CF7D52FEA_", LUA_NATIVE_PED_0xC6C4E15CF7D52FEA_);
		PED.set_function("SET_PED_VOICE_VOLUME_", LUA_NATIVE_PED_SET_PED_VOICE_VOLUME_);
		PED.set_function("0x0F967019CC853BCC_", LUA_NATIVE_PED_0x0F967019CC853BCC_);
		PED.set_function("IS_PED_DRAGGING_", LUA_NATIVE_PED_IS_PED_DRAGGING_);
		PED.set_function("IS_PED_BEING_DRAGGED", LUA_NATIVE_PED_IS_PED_BEING_DRAGGED);
		PED.set_function("0x070A3841406C43D5_", LUA_NATIVE_PED_0x070A3841406C43D5_);
		PED.set_function("ADD_PED_STAY_OUT_VOLUME_", LUA_NATIVE_PED_ADD_PED_STAY_OUT_VOLUME_);
		PED.set_function("REMOVE_PED_STAY_OUT_VOLUME_", LUA_NATIVE_PED_REMOVE_PED_STAY_OUT_VOLUME_);
		PED.set_function("0x9E66708B2B41F14A_", LUA_NATIVE_PED_0x9E66708B2B41F14A_);
		PED.set_function("0xF634E2892220EF34_", LUA_NATIVE_PED_0xF634E2892220EF34_);
		PED.set_function("0xAAC0EE3B4999ABB5_", LUA_NATIVE_PED_0xAAC0EE3B4999ABB5_);
		PED.set_function("GET_PED_MOTION_FOCUS_ENTITY", LUA_NATIVE_PED_GET_PED_MOTION_FOCUS_ENTITY);
		PED.set_function("SET_CHAR_EXPRESSION_", LUA_NATIVE_PED_SET_CHAR_EXPRESSION_);
		PED.set_function("GET_CHAR_EXPRESSION_", LUA_NATIVE_PED_GET_CHAR_EXPRESSION_);
		PED.set_function("0x5BB04BC74A474B47_", LUA_NATIVE_PED_0x5BB04BC74A474B47_);
		PED.set_function("0x9078FB0557364099_", LUA_NATIVE_PED_0x9078FB0557364099_);
		PED.set_function("IS_PED_FALLING_OVER", LUA_NATIVE_PED_IS_PED_FALLING_OVER);
		PED.set_function("HAS_PED_BEEN_SHOVED_RECENTLY_", LUA_NATIVE_PED_HAS_PED_BEEN_SHOVED_RECENTLY_);
		PED.set_function("GET_PED_TRANQUILIZER_", LUA_NATIVE_PED_GET_PED_TRANQUILIZER_);
		PED.set_function("0x0D497AA69059FE40_", LUA_NATIVE_PED_0x0D497AA69059FE40_);
		PED.set_function("0xD7D2F45C56A4F4DF_", LUA_NATIVE_PED_0xD7D2F45C56A4F4DF_);
		PED.set_function("SET_PED_CULL_RANGE_", LUA_NATIVE_PED_SET_PED_CULL_RANGE_);
		PED.set_function("0x1D23D3F70606D788_", LUA_NATIVE_PED_0x1D23D3F70606D788_);
		PED.set_function("GET_META_PED_TYPE_", LUA_NATIVE_PED_GET_META_PED_TYPE_);
		PED.set_function("IS_META_PED_USING_COMPONENT_", LUA_NATIVE_PED_IS_META_PED_USING_COMPONENT_);
		PED.set_function("0xBD0E4F52F6D95242_", LUA_NATIVE_PED_0xBD0E4F52F6D95242_);
		PED.set_function("IS_PED_CHILD_", LUA_NATIVE_PED_IS_PED_CHILD_);
		PED.set_function("0xFFA1594703ED27CA_", LUA_NATIVE_PED_0xFFA1594703ED27CA_);
		PED.set_function("SET_META_PED_TAG_", LUA_NATIVE_PED_SET_META_PED_TAG_);
		PED.set_function("REMOVE_TAG_FROM_META_PED", LUA_NATIVE_PED_REMOVE_TAG_FROM_META_PED);
		PED.set_function("0xA2B8E47442C76CEC_", LUA_NATIVE_PED_0xA2B8E47442C76CEC_);
		PED.set_function("GET_NUM_COMPONENT_CATEGORIES_IN_PED_", LUA_NATIVE_PED_GET_NUM_COMPONENT_CATEGORIES_IN_PED_);
		PED.set_function("GET_PED_COMPONENT_CATEGORY_BY_INDEX_", LUA_NATIVE_PED_GET_PED_COMPONENT_CATEGORY_BY_INDEX_);
		PED.set_function("GET_NUM_COMPONENTS_IN_PED_", LUA_NATIVE_PED_GET_NUM_COMPONENTS_IN_PED_);
		PED.set_function("0x9B90842304C938A7_", LUA_NATIVE_PED_0x9B90842304C938A7_);
		PED.set_function("UPDATE_PED_VARIATION_", LUA_NATIVE_PED_UPDATE_PED_VARIATION_);
		PED.set_function("0xCB1A3864C524F784_", LUA_NATIVE_PED_0xCB1A3864C524F784_);
		PED.set_function("0xFA0D206B489A6846_", LUA_NATIVE_PED_0xFA0D206B489A6846_);
		PED.set_function("0xA4AC05B1A364EBC5_", LUA_NATIVE_PED_0xA4AC05B1A364EBC5_);
		PED.set_function("0x1298B3D8E4C2409F_", LUA_NATIVE_PED_0x1298B3D8E4C2409F_);
		PED.set_function("0xA274F51EF7E34B95_", LUA_NATIVE_PED_0xA274F51EF7E34B95_);
		PED.set_function("0xC2EF407645BEECDC_", LUA_NATIVE_PED_0xC2EF407645BEECDC_);
		PED.set_function("EQUIP_META_PED_OUTFIT_", LUA_NATIVE_PED_EQUIP_META_PED_OUTFIT_);
		PED.set_function("0xFA742B82D093D848_", LUA_NATIVE_PED_0xFA742B82D093D848_);
		PED.set_function("GET_PED_META_OUTFIT_HASH_", LUA_NATIVE_PED_GET_PED_META_OUTFIT_HASH_);
		PED.set_function("0xA2F8B3B5FEDFC100_", LUA_NATIVE_PED_0xA2F8B3B5FEDFC100_);
		PED.set_function("EQUIP_META_PED_SUBOUTFIT_", LUA_NATIVE_PED_EQUIP_META_PED_SUBOUTFIT_);
		PED.set_function("DOES_META_PED_OUTFIT_EXIST_FOR_PED_MODEL_", LUA_NATIVE_PED_DOES_META_PED_OUTFIT_EXIST_FOR_PED_MODEL_);
		PED.set_function("DOES_META_PED_SUBOUTFIT_EXIST_FOR_PED_MODEL_", LUA_NATIVE_PED_DOES_META_PED_SUBOUTFIT_EXIST_FOR_PED_MODEL_);
		PED.set_function("0x62FDF4E678E40CC6_", LUA_NATIVE_PED_0x62FDF4E678E40CC6_);
		PED.set_function("RESET_PED_COMPONENTS_", LUA_NATIVE_PED_RESET_PED_COMPONENTS_);
		PED.set_function("0x370A973252741AC4_", LUA_NATIVE_PED_0x370A973252741AC4_);
		PED.set_function("SET_RANDOM_OUTFIT_VARIATION_", LUA_NATIVE_PED_SET_RANDOM_OUTFIT_VARIATION_);
		PED.set_function("GET_NUM_META_PED_OUTFITS", LUA_NATIVE_PED_GET_NUM_META_PED_OUTFITS);
		PED.set_function("EQUIP_META_PED_OUTFIT_PRESET_", LUA_NATIVE_PED_EQUIP_META_PED_OUTFIT_PRESET_);
		PED.set_function("EQUIP_META_PED_OUTFIT_EXTRA_", LUA_NATIVE_PED_EQUIP_META_PED_OUTFIT_EXTRA_);
		PED.set_function("IS_META_PED_OUTFIT_EQUIPPED_", LUA_NATIVE_PED_IS_META_PED_OUTFIT_EQUIPPED_);
		PED.set_function("0x851966E1E35AF491_", LUA_NATIVE_PED_0x851966E1E35AF491_);
		PED.set_function("SET_TEXTURE_OUTFIT_TINTS_", LUA_NATIVE_PED_SET_TEXTURE_OUTFIT_TINTS_);
		PED.set_function("REQUEST_META_PED_", LUA_NATIVE_PED_REQUEST_META_PED_);
		PED.set_function("HAS_META_PED_REQUEST_LOADED_", LUA_NATIVE_PED_HAS_META_PED_REQUEST_LOADED_);
		PED.set_function("IS_META_PED_REQUEST_VALID_", LUA_NATIVE_PED_IS_META_PED_REQUEST_VALID_);
		PED.set_function("CREATE_META_PED_", LUA_NATIVE_PED_CREATE_META_PED_);
		PED.set_function("RELEASE_META_PED_REQUEST_", LUA_NATIVE_PED_RELEASE_META_PED_REQUEST_);
		PED.set_function("REQUEST_META_PED_OUTFIT_", LUA_NATIVE_PED_REQUEST_META_PED_OUTFIT_);
		PED.set_function("0x27E8A84C12B0B7D1_", LUA_NATIVE_PED_0x27E8A84C12B0B7D1_);
		PED.set_function("0x273915CE30780986_", LUA_NATIVE_PED_0x273915CE30780986_);
		PED.set_function("RELEASE_META_PED_OUTFIT_REQUEST_", LUA_NATIVE_PED_RELEASE_META_PED_OUTFIT_REQUEST_);
		PED.set_function("0x3FCBB5FCFD968698_", LUA_NATIVE_PED_0x3FCBB5FCFD968698_);
		PED.set_function("REQUEST_META_PED_ASSET_BUNDLE_", LUA_NATIVE_PED_REQUEST_META_PED_ASSET_BUNDLE_);
		PED.set_function("REQUEST_META_PED_COMPONENT_", LUA_NATIVE_PED_REQUEST_META_PED_COMPONENT_);
		PED.set_function("RELEASE_META_PED_ASSET_REQUEST_", LUA_NATIVE_PED_RELEASE_META_PED_ASSET_REQUEST_);
		PED.set_function("HAS_META_PED_ASSET_LOADED_", LUA_NATIVE_PED_HAS_META_PED_ASSET_LOADED_);
		PED.set_function("IS_META_PED_ASSET_VALID_", LUA_NATIVE_PED_IS_META_PED_ASSET_VALID_);
		PED.set_function("CREATE_META_PED_ASSET_", LUA_NATIVE_PED_CREATE_META_PED_ASSET_);
		PED.set_function("HAS_META_PED_OUTFIT_LOADED_", LUA_NATIVE_PED_HAS_META_PED_OUTFIT_LOADED_);
		PED.set_function("IS_META_PED_OUTFIT_REQUEST_VALID_", LUA_NATIVE_PED_IS_META_PED_OUTFIT_REQUEST_VALID_);
		PED.set_function("CREATE_META_PED_OUTFIT_PED_", LUA_NATIVE_PED_CREATE_META_PED_OUTFIT_PED_);
		PED.set_function("APPLY_PED_META_PED_OUTFIT_", LUA_NATIVE_PED_APPLY_PED_META_PED_OUTFIT_);
		PED.set_function("SET_META_PED_WEARINESS_", LUA_NATIVE_PED_SET_META_PED_WEARINESS_);
		PED.set_function("0xF47D54B986F0A346_", LUA_NATIVE_PED_0xF47D54B986F0A346_);
		PED.set_function("0x3EFED081B4834BA1_", LUA_NATIVE_PED_0x3EFED081B4834BA1_);
		PED.set_function("0x0FB1BA7FF73B41E1_", LUA_NATIVE_PED_0x0FB1BA7FF73B41E1_);
		PED.set_function("0xB292203008EBBAAC_", LUA_NATIVE_PED_0xB292203008EBBAAC_);
		PED.set_function("0xD4D403EA031F351C_", LUA_NATIVE_PED_0xD4D403EA031F351C_);
		PED.set_function("GET_PELT_FROM_HORSE_", LUA_NATIVE_PED_GET_PELT_FROM_HORSE_);
		PED.set_function("SET_PELT_FOR_HORSE_", LUA_NATIVE_PED_SET_PELT_FOR_HORSE_);
		PED.set_function("0xC412AA1C73111FE0_", LUA_NATIVE_PED_0xC412AA1C73111FE0_);
		PED.set_function("CLEAR_PELT_FROM_HORSE_", LUA_NATIVE_PED_CLEAR_PELT_FROM_HORSE_);
		PED.set_function("SET_PED_LIGHTS_", LUA_NATIVE_PED_SET_PED_LIGHTS_);
		PED.set_function("0xD049FDAF089FDDB0_", LUA_NATIVE_PED_0xD049FDAF089FDDB0_);
		PED.set_function("0xDD9540E7B1C9714F_", LUA_NATIVE_PED_0xDD9540E7B1C9714F_);
		PED.set_function("0x55546004A244302A_", LUA_NATIVE_PED_0x55546004A244302A_);
		PED.set_function("SET_HEALTH_RECHARGE_MULTIPLIER_", LUA_NATIVE_PED_SET_HEALTH_RECHARGE_MULTIPLIER_);
		PED.set_function("GET_HEALTH_RECHARGE_MULTIPLIER_", LUA_NATIVE_PED_GET_HEALTH_RECHARGE_MULTIPLIER_);
		PED.set_function("SET_STAMINA_DEPLETION_MULTIPLIER_", LUA_NATIVE_PED_SET_STAMINA_DEPLETION_MULTIPLIER_);
		PED.set_function("GET_STAMINA_DEPLETION_MULTIPLIER_", LUA_NATIVE_PED_GET_STAMINA_DEPLETION_MULTIPLIER_);
		PED.set_function("SET_STAMINA_RECHARGE_MULTIPLIER_", LUA_NATIVE_PED_SET_STAMINA_RECHARGE_MULTIPLIER_);
		PED.set_function("GET_STAMINA_RECHARGE_MULTIPLIER_", LUA_NATIVE_PED_GET_STAMINA_RECHARGE_MULTIPLIER_);
		PED.set_function("CHANGE_PED_STAMINA_", LUA_NATIVE_PED_CHANGE_PED_STAMINA_);
		PED.set_function("GET_PED_STAMINA_", LUA_NATIVE_PED_GET_PED_STAMINA_);
		PED.set_function("GET_PED_STAMINA_NORMALIZED_", LUA_NATIVE_PED_GET_PED_STAMINA_NORMALIZED_);
		PED.set_function("GET_PED_MAX_STAMINA_", LUA_NATIVE_PED_GET_PED_MAX_STAMINA_);
		PED.set_function("0x36513AFFC703C60D_", LUA_NATIVE_PED_0x36513AFFC703C60D_);
		PED.set_function("RESTORE_PED_STAMINA_", LUA_NATIVE_PED_RESTORE_PED_STAMINA_);
		PED.set_function("0xFC3B580C4380B5B7_", LUA_NATIVE_PED_0xFC3B580C4380B5B7_);
		PED.set_function("0xEA8763E505AFD49A_", LUA_NATIVE_PED_0xEA8763E505AFD49A_);
		PED.set_function("0xE4EF4382E22C780C_", LUA_NATIVE_PED_0xE4EF4382E22C780C_);
		PED.set_function("0xD61FCF9FCFD515B7_", LUA_NATIVE_PED_0xD61FCF9FCFD515B7_);
		PED.set_function("0x8D9DB115FBA8E23D_", LUA_NATIVE_PED_0x8D9DB115FBA8E23D_);
		PED.set_function("GET_NUM_RESERVED_HEALTH_", LUA_NATIVE_PED_GET_NUM_RESERVED_HEALTH_);
		PED.set_function("0xD97BC27AC039F681_", LUA_NATIVE_PED_0xD97BC27AC039F681_);
		PED.set_function("0xF6A8C4B4A11AE89C_", LUA_NATIVE_PED_0xF6A8C4B4A11AE89C_);
		PED.set_function("0xE4C95E0AE31C6512_", LUA_NATIVE_PED_0xE4C95E0AE31C6512_);
		PED.set_function("GET_PED_LAST_DROPPED_HAT_", LUA_NATIVE_PED_GET_PED_LAST_DROPPED_HAT_);
		PED.set_function("0x5D4CD22A8C82A81A_", LUA_NATIVE_PED_0x5D4CD22A8C82A81A_);
		PED.set_function("0xBF567DF2BEF211A6_", LUA_NATIVE_PED_0xBF567DF2BEF211A6_);
		PED.set_function("CREATE_GRAVITY_WELL_", LUA_NATIVE_PED_CREATE_GRAVITY_WELL_);
		PED.set_function("REMOVE_GRAVITY_WELL_", LUA_NATIVE_PED_REMOVE_GRAVITY_WELL_);
		PED.set_function("IS_PED_INTIMIDATED_", LUA_NATIVE_PED_IS_PED_INTIMIDATED_);
		PED.set_function("0x7EE3A8660F38797E_", LUA_NATIVE_PED_0x7EE3A8660F38797E_);
		PED.set_function("0xA180FBD502A03125_", LUA_NATIVE_PED_0xA180FBD502A03125_);
		PED.set_function("REQUEST_TEXTURE_", LUA_NATIVE_PED_REQUEST_TEXTURE_);
		PED.set_function("APPLY_TEXTURE_ON_PED_", LUA_NATIVE_PED_APPLY_TEXTURE_ON_PED_);
		PED.set_function("RELEASE_TEXTURE_", LUA_NATIVE_PED_RELEASE_TEXTURE_);
		PED.set_function("UPDATE_PED_TEXTURE_", LUA_NATIVE_PED_UPDATE_PED_TEXTURE_);
		PED.set_function("RESET_PED_TEXTURE_", LUA_NATIVE_PED_RESET_PED_TEXTURE_);
		PED.set_function("IS_TEXTURE_VALID_", LUA_NATIVE_PED_IS_TEXTURE_VALID_);
		PED.set_function("ADD_TEXTURE_LAYER_", LUA_NATIVE_PED_ADD_TEXTURE_LAYER_);
		PED.set_function("REMOVE_PED_OVERLAY_", LUA_NATIVE_PED_REMOVE_PED_OVERLAY_);
		PED.set_function("SET_TEXTURE_LAYER_SHEET_GRID_INDEX_", LUA_NATIVE_PED_SET_TEXTURE_LAYER_SHEET_GRID_INDEX_);
		PED.set_function("SET_TEXTURE_LAYER_ALPHA_", LUA_NATIVE_PED_SET_TEXTURE_LAYER_ALPHA_);
		PED.set_function("SET_TEXTURE_LAYER_ROUGHNESS_", LUA_NATIVE_PED_SET_TEXTURE_LAYER_ROUGHNESS_);
		PED.set_function("SET_TEXTURE_LAYER_PALLETE_", LUA_NATIVE_PED_SET_TEXTURE_LAYER_PALLETE_);
		PED.set_function("SET_TEXTURE_LAYER_TINT_", LUA_NATIVE_PED_SET_TEXTURE_LAYER_TINT_);
		PED.set_function("SET_TEXTURE_LAYER_MOD_", LUA_NATIVE_PED_SET_TEXTURE_LAYER_MOD_);
		PED.set_function("SET_TEXTURE_LAYER_TEXTURE_MAP_", LUA_NATIVE_PED_SET_TEXTURE_LAYER_TEXTURE_MAP_);
		PED.set_function("CLEAR_PED_TEXTURE_", LUA_NATIVE_PED_CLEAR_PED_TEXTURE_);
		PED.set_function("0xC991EF46FE323867_", LUA_NATIVE_PED_0xC991EF46FE323867_);
		PED.set_function("0x1F8215D0E446F593_", LUA_NATIVE_PED_0x1F8215D0E446F593_);
		PED.set_function("IS_LOCATION_SPAWN_SAFE", LUA_NATIVE_PED_IS_LOCATION_SPAWN_SAFE);
		PED.set_function("0x53BA7D96B9A421D9_", LUA_NATIVE_PED_0x53BA7D96B9A421D9_);
		PED.set_function("0x96C7B659854DE629_", LUA_NATIVE_PED_0x96C7B659854DE629_);
		PED.set_function("SET_HORSE_AVOIDANCE_LEVEL", LUA_NATIVE_PED_SET_HORSE_AVOIDANCE_LEVEL);
		PED.set_function("RESET_HORSE_AVOIDANCE_LEVEL_TO_DEFAULT", LUA_NATIVE_PED_RESET_HORSE_AVOIDANCE_LEVEL_TO_DEFAULT);
		PED.set_function("SET_PED_USE_HORSE_MAP_COLLISION_", LUA_NATIVE_PED_SET_PED_USE_HORSE_MAP_COLLISION_);
		PED.set_function("0x5B73975B4F12F7F3_", LUA_NATIVE_PED_0x5B73975B4F12F7F3_);
		PED.set_function("GET_META_PED_ASSET_GUIDS", LUA_NATIVE_PED_GET_META_PED_ASSET_GUIDS);
		PED.set_function("GET_META_PED_ASSET_TINT", LUA_NATIVE_PED_GET_META_PED_ASSET_TINT);
		PED.set_function("SET_PED_BLACKBOARD_INT_", LUA_NATIVE_PED_SET_PED_BLACKBOARD_INT_);
		PED.set_function("SET_PED_BLACKBOARD_BOOL_", LUA_NATIVE_PED_SET_PED_BLACKBOARD_BOOL_);
		PED.set_function("SET_PED_BLACKBOARD_FLOAT_", LUA_NATIVE_PED_SET_PED_BLACKBOARD_FLOAT_);
		PED.set_function("SET_PED_BLACKBOARD_HASH_", LUA_NATIVE_PED_SET_PED_BLACKBOARD_HASH_);
		PED.set_function("REMOVE_PED_BLACKBOARD_INT_", LUA_NATIVE_PED_REMOVE_PED_BLACKBOARD_INT_);
		PED.set_function("REMOVE_PED_BLACKBOARD_BOOL_", LUA_NATIVE_PED_REMOVE_PED_BLACKBOARD_BOOL_);
		PED.set_function("REMOVE_PED_BLACKBOARD_FLOAT_", LUA_NATIVE_PED_REMOVE_PED_BLACKBOARD_FLOAT_);
		PED.set_function("REMOVE_PED_BLACKBOARD_HASH_", LUA_NATIVE_PED_REMOVE_PED_BLACKBOARD_HASH_);
		PED.set_function("GET_PED_BLACKBOARD_BOOL_", LUA_NATIVE_PED_GET_PED_BLACKBOARD_BOOL_);
		PED.set_function("GET_PED_BLACKBOARD_FLOAT_", LUA_NATIVE_PED_GET_PED_BLACKBOARD_FLOAT_);
		PED.set_function("GET_PED_BLACKBOARD_HASH_", LUA_NATIVE_PED_GET_PED_BLACKBOARD_HASH_);
		PED.set_function("GET_PED_BLACKBOARD_SCRIPT_INT", LUA_NATIVE_PED_GET_PED_BLACKBOARD_SCRIPT_INT);
		PED.set_function("GET_PED_BLACKBOARD_SCRIPT_BOOL", LUA_NATIVE_PED_GET_PED_BLACKBOARD_SCRIPT_BOOL);
		PED.set_function("GET_PED_BLACKBOARD_SCRIPT_FLOAT", LUA_NATIVE_PED_GET_PED_BLACKBOARD_SCRIPT_FLOAT);
		PED.set_function("SET_TANK_ATTRIBUTE_SIZE_", LUA_NATIVE_PED_SET_TANK_ATTRIBUTE_SIZE_);
		PED.set_function("0xA31D350D66FA1855_", LUA_NATIVE_PED_0xA31D350D66FA1855_);
		PED.set_function("IS_USING_SLIPSTREAM_", LUA_NATIVE_PED_IS_USING_SLIPSTREAM_);
		PED.set_function("0xEEDC9B29314B2733_", LUA_NATIVE_PED_0xEEDC9B29314B2733_);
		PED.set_function("0x5C90E20C25E6D83C_", LUA_NATIVE_PED_0x5C90E20C25E6D83C_);
		PED.set_function("0x10F96086123B939F_", LUA_NATIVE_PED_0x10F96086123B939F_);
		PED.set_function("0x3FDBB99EFD8CE4AF_", LUA_NATIVE_PED_0x3FDBB99EFD8CE4AF_);
		PED.set_function("0x7E8F9949B7AABBF0_", LUA_NATIVE_PED_0x7E8F9949B7AABBF0_);
		PED.set_function("0x5DA36CCCB63C0895_", LUA_NATIVE_PED_0x5DA36CCCB63C0895_);
		PED.set_function("0x56076667E7C2DCD6_", LUA_NATIVE_PED_0x56076667E7C2DCD6_);
		PED.set_function("APPLY_SHOP_ITEM_TO_PED_", LUA_NATIVE_PED_APPLY_SHOP_ITEM_TO_PED_);
		PED.set_function("REMOVE_SHOP_ITEM_FROM_PED_", LUA_NATIVE_PED_REMOVE_SHOP_ITEM_FROM_PED_);
		PED.set_function("REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY", LUA_NATIVE_PED_REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY);
		PED.set_function("UPDATE_SHOP_ITEM_WEARABLE_STATE_", LUA_NATIVE_PED_UPDATE_SHOP_ITEM_WEARABLE_STATE_);
		PED.set_function("GET_SHOP_ITEM_COMPONENT_AT_INDEX_", LUA_NATIVE_PED_GET_SHOP_ITEM_COMPONENT_AT_INDEX_);
		PED.set_function("GET_SHOP_ITEM_NUM_WEARABLE_STATES_", LUA_NATIVE_PED_GET_SHOP_ITEM_NUM_WEARABLE_STATES_);
		PED.set_function("GET_SHOP_ITEM_WEARABLE_STATE_BY_INDEX_", LUA_NATIVE_PED_GET_SHOP_ITEM_WEARABLE_STATE_BY_INDEX_);
		PED.set_function("GET_SHOP_ITEM_COMPONENT_CATEGORY_", LUA_NATIVE_PED_GET_SHOP_ITEM_COMPONENT_CATEGORY_);
		PED.set_function("0x31B2E7F2E3C58B89_", LUA_NATIVE_PED_0x31B2E7F2E3C58B89_);
		PED.set_function("GET_SHOP_ITEM_BASE_LAYERS_", LUA_NATIVE_PED_GET_SHOP_ITEM_BASE_LAYERS_);
		PED.set_function("0xAAB86462966168CE_", LUA_NATIVE_PED_0xAAB86462966168CE_);
		PED.set_function("GET_SHOP_ITEM_HAT_COMPONENT_", LUA_NATIVE_PED_GET_SHOP_ITEM_HAT_COMPONENT_);
		PED.set_function("REFRESH_META_PED_SHOP_ITEMS_", LUA_NATIVE_PED_REFRESH_META_PED_SHOP_ITEMS_);
		PED.set_function("0xD103F6DBB5442BE8_", LUA_NATIVE_PED_0xD103F6DBB5442BE8_);
		PED.set_function("SET_PED_PROMPT_NAME_FROM_GXT_ENTRY_", LUA_NATIVE_PED_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY_);
		PED.set_function("SET_PED_PROMPT_NAME_", LUA_NATIVE_PED_SET_PED_PROMPT_NAME_);
		PED.set_function("SET_PED_PROMPT_NAME_FROM_GXT_ENTRY_2_", LUA_NATIVE_PED_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY_2_);
		PED.set_function("SET_PED_PROMPT_NAME_2_", LUA_NATIVE_PED_SET_PED_PROMPT_NAME_2_);
		PED.set_function("0xF917F92BF22ECBAB_", LUA_NATIVE_PED_0xF917F92BF22ECBAB_);
		PED.set_function("0x49DADFC4CD808B0A_", LUA_NATIVE_PED_0x49DADFC4CD808B0A_);
		PED.set_function("HAS_PED_TAKEN_GORE_DAMAGE_", LUA_NATIVE_PED_HAS_PED_TAKEN_GORE_DAMAGE_);
		PED.set_function("0x704C908E9C405136_", LUA_NATIVE_PED_0x704C908E9C405136_);
		PED.set_function("0x7406C71F4AC2FFCC_", LUA_NATIVE_PED_0x7406C71F4AC2FFCC_);
		PED.set_function("0x28508173C6A7CC18_", LUA_NATIVE_PED_0x28508173C6A7CC18_);
		PED.set_function("0x52250B92EA70BE3D_", LUA_NATIVE_PED_0x52250B92EA70BE3D_);
		PED.set_function("SET_PED_QUALITY_", LUA_NATIVE_PED_SET_PED_QUALITY_);
		PED.set_function("GET_PED_QUALITY_", LUA_NATIVE_PED_GET_PED_QUALITY_);
		PED.set_function("0xCE7A6C1D5CDE1F9D_", LUA_NATIVE_PED_0xCE7A6C1D5CDE1F9D_);
		PED.set_function("0x604E1010E3162E86_", LUA_NATIVE_PED_0x604E1010E3162E86_);
		PED.set_function("0xE8ABE3B73FC7FE17_", LUA_NATIVE_PED_0xE8ABE3B73FC7FE17_);
		PED.set_function("REMOVE_PED_PROP_", LUA_NATIVE_PED_REMOVE_PED_PROP_);
		PED.set_function("SET_TOTAL_PED_DAMAGE_FALLOFF_BONUS_", LUA_NATIVE_PED_SET_TOTAL_PED_DAMAGE_FALLOFF_BONUS_);
		PED.set_function("0x095C2277FED731DB_", LUA_NATIVE_PED_0x095C2277FED731DB_);
		PED.set_function("0x09171A6F8FDE5DC1_", LUA_NATIVE_PED_0x09171A6F8FDE5DC1_);
		PED.set_function("0x09E378C52B1433B5_", LUA_NATIVE_PED_0x09E378C52B1433B5_);
		PED.set_function("0x6507AC3BD7C99009_", LUA_NATIVE_PED_0x6507AC3BD7C99009_);
		PED.set_function("GET_PLAYER_PED_WATER_DEPTH_", LUA_NATIVE_PED_GET_PLAYER_PED_WATER_DEPTH_);
		PED.set_function("SET_PED_TRAIL_EFFECT_", LUA_NATIVE_PED_SET_PED_TRAIL_EFFECT_);
		PED.set_function("0xEBAAC9A750E7563B_", LUA_NATIVE_PED_0xEBAAC9A750E7563B_);
		PED.set_function("0x992187D975635DF5_", LUA_NATIVE_PED_0x992187D975635DF5_);
		PED.set_function("0x0B787A37EEDD226F_", LUA_NATIVE_PED_0x0B787A37EEDD226F_);
	}
}
