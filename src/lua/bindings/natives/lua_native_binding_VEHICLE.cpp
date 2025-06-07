#include "lua_native_binding.hpp"
#include "game/rdr/Natives.hpp"

namespace Lua::native
{
	static void LUA_NATIVE_VEHICLE_0x6355602C02EDC6DF_(Entity entity, Any p1)
	{
		VEHICLE::_0x6355602C02EDC6DF(entity, p1);
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_IS_IN_HURRY_(Vehicle vehicle, bool enabled)
	{
		VEHICLE::_SET_VEHICLE_IS_IN_HURRY(vehicle, enabled);
	}

	static Vehicle LUA_NATIVE_VEHICLE_CREATE_VEHICLE(Hash ModelHashKey, float VecCoorsX, float VecCoorsY, float VecCoorsZ, float fVehicleHeading, bool RegisterAsNetworkObject, bool ScriptHostObject, bool bDontAutoCreateDraftAnimals, bool p8)
	{
		auto retval = VEHICLE::CREATE_VEHICLE(ModelHashKey, VecCoorsX, VecCoorsY, VecCoorsZ, fVehicleHeading, RegisterAsNetworkObject, ScriptHostObject, bDontAutoCreateDraftAnimals, p8);
		return retval;
	}

	static Vehicle LUA_NATIVE_VEHICLE_CREATE_DRAFT_VEHICLE_(Hash modelHash, float x, float y, float z, float heading, bool isNetwork, bool bScriptHostVeh, bool bDontAutoCreateDraftAnimals, Hash draftAnimalPopGroup, bool p9)
	{
		auto retval = VEHICLE::_CREATE_DRAFT_VEHICLE(modelHash, x, y, z, heading, isNetwork, bScriptHostVeh, bDontAutoCreateDraftAnimals, draftAnimalPopGroup, p9);
		return retval;
	}

	static Vehicle LUA_NATIVE_VEHICLE_DELETE_VEHICLE(Vehicle VehicleIndex)
	{
		VEHICLE::DELETE_VEHICLE(&VehicleIndex);
		return VehicleIndex;
	}

	static Vehicle LUA_NATIVE_VEHICLE_FADE_AND_DESTROY_VEHICLE_(Vehicle vehicle)
	{
		VEHICLE::_FADE_AND_DESTROY_VEHICLE(&vehicle);
		return vehicle;
	}

	static bool LUA_NATIVE_VEHICLE_IS_VEHICLE_FADING_OUT_(Vehicle vehicle)
	{
		auto retval = (bool)VEHICLE::_IS_VEHICLE_FADING_OUT(vehicle);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON(Vehicle VehicleIndex, bool bAllowHomingMissileLockon)
	{
		VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON(VehicleIndex, bAllowHomingMissileLockon);
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_ALLOW_NO_PASSENGERS_LOCKON(Vehicle VehicleIndex, bool bAllowLockon)
	{
		VEHICLE::SET_VEHICLE_ALLOW_NO_PASSENGERS_LOCKON(VehicleIndex, bAllowLockon);
	}

	static bool LUA_NATIVE_VEHICLE_IS_VEHICLE_MODEL(Vehicle VehicleIndex, Hash ModelHashKey)
	{
		auto retval = (bool)VEHICLE::IS_VEHICLE_MODEL(VehicleIndex, ModelHashKey);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_SET_ALL_VEHICLE_GENERATORS_DISABLED_FOR_VOLUME_(Volume volume, bool toggle)
	{
		VEHICLE::_SET_ALL_VEHICLE_GENERATORS_DISABLED_FOR_VOLUME(volume, toggle);
	}

	static void LUA_NATIVE_VEHICLE_SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(float VecMinCoorsX, float VecMinCoorsY, float VecMinCoorsZ, float VecMaxCoorsX, float VecMaxCoorsY, float VecMaxCoorsZ, bool bActive, bool bSyncOverNetwork)
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(VecMinCoorsX, VecMinCoorsY, VecMinCoorsZ, VecMaxCoorsX, VecMaxCoorsY, VecMaxCoorsZ, bActive, bSyncOverNetwork);
	}

	static void LUA_NATIVE_VEHICLE_SET_ALL_VEHICLE_GENERATORS_ACTIVE()
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
	}

	static bool LUA_NATIVE_VEHICLE_SET_VEHICLE_ON_GROUND_PROPERLY(Vehicle VehicleIndex, float hightSampleRangeUp)
	{
		auto retval = (bool)VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(VehicleIndex, hightSampleRangeUp);
		return retval;
	}

	static bool LUA_NATIVE_VEHICLE_IS_VEHICLE_STOPPED(Vehicle VehicleIndex)
	{
		auto retval = (bool)VEHICLE::IS_VEHICLE_STOPPED(VehicleIndex);
		return retval;
	}

	static int LUA_NATIVE_VEHICLE_GET_VEHICLE_NUMBER_OF_PASSENGERS(Vehicle vehicle)
	{
		auto retval = VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(vehicle);
		return retval;
	}

	static int LUA_NATIVE_VEHICLE_GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(Vehicle VehicleIndex)
	{
		auto retval = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(VehicleIndex);
		return retval;
	}

	static int LUA_NATIVE_VEHICLE_GET_VEHICLE_MODEL_NUMBER_OF_SEATS(Hash VehicleModelHashKey)
	{
		auto retval = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(VehicleModelHashKey);
		return retval;
	}

	static bool LUA_NATIVE_VEHICLE_IS_SEAT_WARP_ONLY(Vehicle VehicleIndex, int seat)
	{
		auto retval = (bool)VEHICLE::IS_SEAT_WARP_ONLY(VehicleIndex, seat);
		return retval;
	}

	static std::tuple<bool, int> LUA_NATIVE_VEHICLE_GET_VEHICLE_TURRET_SEAT_(Vehicle vehicle, int seatIndex)
	{
		std::tuple<bool, int> return_values;
		std::get<0>(return_values) = (bool)VEHICLE::_GET_VEHICLE_TURRET_SEAT(vehicle, &seatIndex);
		std::get<1>(return_values) = seatIndex;

		return return_values;
	}

	static Any LUA_NATIVE_VEHICLE_0xA9E185D498B9AC67_(Any p0, Any p1)
	{
		auto retval = VEHICLE::_0xA9E185D498B9AC67(p0, p1);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float DensityMultiplier)
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(DensityMultiplier);
	}

	static void LUA_NATIVE_VEHICLE_SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float DensityMultiplier)
	{
		VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(DensityMultiplier);
	}

	static void LUA_NATIVE_VEHICLE_SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float DensityMultiplier)
	{
		VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(DensityMultiplier);
	}

	static void LUA_NATIVE_VEHICLE_SET_DISABLE_RANDOM_TRAINS_THIS_FRAME(bool bVal)
	{
		VEHICLE::SET_DISABLE_RANDOM_TRAINS_THIS_FRAME(bVal);
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_DOORS_LOCKED(Vehicle VehicleIndex, int NewLockState)
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(VehicleIndex, NewLockState);
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED(Vehicle VehicleIndex, int DoorIndex, int NewLockState)
	{
		VEHICLE::SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED(VehicleIndex, DoorIndex, NewLockState);
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(Vehicle VehicleIndex, Player PlayerIndex, bool Locked)
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(VehicleIndex, PlayerIndex, Locked);
	}

	static bool LUA_NATIVE_VEHICLE_GET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(Vehicle VehicleIndex, Player PlayerIndex)
	{
		auto retval = (bool)VEHICLE::GET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(VehicleIndex, PlayerIndex);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(Vehicle VehicleIndex, bool Locked)
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(VehicleIndex, Locked);
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_DOORS_LOCKED_FOR_TEAM(Vehicle VehicleIndex, int TeamIndex, bool Locked)
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_TEAM(VehicleIndex, TeamIndex, Locked);
	}

	static bool LUA_NATIVE_VEHICLE_GET_VEHICLE_DOORS_LOCKED_FOR_TEAM_(Vehicle vehicle, int team)
	{
		auto retval = (bool)VEHICLE::_GET_VEHICLE_DOORS_LOCKED_FOR_TEAM(vehicle, team);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_EXPLODE_VEHICLE(Vehicle VehicleIndex, bool isAudible, bool isInvisible, Any p3, Any p4)
	{
		VEHICLE::EXPLODE_VEHICLE(VehicleIndex, isAudible, isInvisible, p3, p4);
	}

	static void LUA_NATIVE_VEHICLE_0x750D42C013F64AE7_(Any p0, Any p1)
	{
		VEHICLE::_0x750D42C013F64AE7(p0, p1);
	}

	static void LUA_NATIVE_VEHICLE_0xE78993FF9022C064_(Any p0)
	{
		VEHICLE::_0xE78993FF9022C064(p0);
	}

	static void LUA_NATIVE_VEHICLE_0x9868C0D0134855F7_(Any p0)
	{
		VEHICLE::_0x9868C0D0134855F7(p0);
	}

	static void LUA_NATIVE_VEHICLE_HIDE_HORSE_REINS_(Vehicle vehicle)
	{
		VEHICLE::_HIDE_HORSE_REINS(vehicle);
	}

	static void LUA_NATIVE_VEHICLE_SHOW_HORSE_REINS_(Vehicle vehicle)
	{
		VEHICLE::_SHOW_HORSE_REINS(vehicle);
	}

	static void LUA_NATIVE_VEHICLE_0xD21A3D421E7F09F7_(Any p0, Any p1)
	{
		VEHICLE::_0xD21A3D421E7F09F7(p0, p1);
	}

	static void LUA_NATIVE_VEHICLE_0xA13028E22564A1BD_(Any p0, Any p1)
	{
		VEHICLE::_0xA13028E22564A1BD(p0, p1);
	}

	static void LUA_NATIVE_VEHICLE_0x485B05EF05B9AEE9_(Any p0, Any p1)
	{
		VEHICLE::_0x485B05EF05B9AEE9(p0, p1);
	}

	static void LUA_NATIVE_VEHICLE_SET_BOAT_ANCHOR(Vehicle VehicleIndex, bool AnchoredFlag)
	{
		VEHICLE::SET_BOAT_ANCHOR(VehicleIndex, AnchoredFlag);
	}

	static void LUA_NATIVE_VEHICLE_0x6B53F4B811E583D2_(Vehicle vehicle, bool toggle)
	{
		VEHICLE::_0x6B53F4B811E583D2(vehicle, toggle);
	}

	static bool LUA_NATIVE_VEHICLE_CAN_ANCHOR_BOAT_HERE(Vehicle VehicleIndex)
	{
		auto retval = (bool)VEHICLE::CAN_ANCHOR_BOAT_HERE(VehicleIndex);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_SET_BOAT_REMAINS_ANCHORED_WHILE_PLAYER_IS_DRIVER(Vehicle VehicleIndex, bool ForcePlayerBoatAnchorFlag, bool p2)
	{
		VEHICLE::SET_BOAT_REMAINS_ANCHORED_WHILE_PLAYER_IS_DRIVER(VehicleIndex, ForcePlayerBoatAnchorFlag, p2);
	}

	static void LUA_NATIVE_VEHICLE_SET_FORCE_LOW_LOD_ANCHOR_MODE(Vehicle VehicleIndex, bool ForcePlayerLowLodAnchorFlag)
	{
		VEHICLE::SET_FORCE_LOW_LOD_ANCHOR_MODE(VehicleIndex, ForcePlayerLowLodAnchorFlag);
	}

	static void LUA_NATIVE_VEHICLE_SET_BOAT_LOW_LOD_ANCHOR_DISTANCE(Vehicle VehicleIndex, float LodDistance)
	{
		VEHICLE::SET_BOAT_LOW_LOD_ANCHOR_DISTANCE(VehicleIndex, LodDistance);
	}

	static void LUA_NATIVE_VEHICLE_SET_BOAT_SINKS_WHEN_WRECKED(Vehicle VehicleIndex, bool ShouldSink)
	{
		VEHICLE::SET_BOAT_SINKS_WHEN_WRECKED(VehicleIndex, ShouldSink);
	}

	static void LUA_NATIVE_VEHICLE_SET_FORCE_HIGH_LOD_VEHICLE_(Vehicle vehicle, bool p1)
	{
		VEHICLE::_SET_FORCE_HIGH_LOD_VEHICLE(vehicle, p1);
	}

	static void LUA_NATIVE_VEHICLE_0x98A7598C579EE871_(Any p0, Any p1, Any p2)
	{
		VEHICLE::_0x98A7598C579EE871(p0, p1, p2);
	}

	static void LUA_NATIVE_VEHICLE_0x9E8711C81AA17876_(Vehicle vehicle, bool p1)
	{
		VEHICLE::_0x9E8711C81AA17876(vehicle, p1);
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_STRONG(Vehicle VehicleIndex, bool StrongFlag)
	{
		VEHICLE::SET_VEHICLE_STRONG(VehicleIndex, StrongFlag);
	}

	static bool LUA_NATIVE_VEHICLE_IS_VEHICLE_SEAT_FREE(Vehicle VehicleIndex, int seat)
	{
		auto retval = (bool)VEHICLE::IS_VEHICLE_SEAT_FREE(VehicleIndex, seat);
		return retval;
	}

	static Ped LUA_NATIVE_VEHICLE_GET_PED_IN_VEHICLE_SEAT(Vehicle VehicleIndex, int seat)
	{
		auto retval = VEHICLE::GET_PED_IN_VEHICLE_SEAT(VehicleIndex, seat);
		return retval;
	}

	static Ped LUA_NATIVE_VEHICLE_GET_LAST_PED_IN_VEHICLE_SEAT(Vehicle VehicleIndex, int seat)
	{
		auto retval = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(VehicleIndex, seat);
		return retval;
	}

	static bool LUA_NATIVE_VEHICLE_IS_DRAFT_VEHICLE(Vehicle vehicle)
	{
		auto retval = (bool)VEHICLE::IS_DRAFT_VEHICLE(vehicle);
		return retval;
	}

	static Ped LUA_NATIVE_VEHICLE_GET_PED_IN_DRAFT_HARNESS_(Vehicle vehicle, int harnessId)
	{
		auto retval = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(vehicle, harnessId);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_FORWARD_SPEED(Vehicle VehicleIndex, float CarSpeed)
	{
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(VehicleIndex, CarSpeed);
	}

	static void LUA_NATIVE_VEHICLE_BRING_VEHICLE_TO_HALT(Vehicle VehicleIndex, float StoppingDistance, int nTimeToStopFor, bool ControlVerticalVelocity)
	{
		VEHICLE::BRING_VEHICLE_TO_HALT(VehicleIndex, StoppingDistance, nTimeToStopFor, ControlVerticalVelocity);
	}

	static bool LUA_NATIVE_VEHICLE_IS_VEHICLE_BROUGHT_TO_HALT_(Vehicle vehicle)
	{
		auto retval = (bool)VEHICLE::_IS_VEHICLE_BROUGHT_TO_HALT(vehicle);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_STOP_BRINGING_VEHICLE_TO_HALT(Vehicle VehicleIndex)
	{
		VEHICLE::STOP_BRINGING_VEHICLE_TO_HALT(VehicleIndex);
	}

	static void LUA_NATIVE_VEHICLE_0xE12F5ED49F44D40D_(Any p0)
	{
		VEHICLE::_0xE12F5ED49F44D40D(p0);
	}

	static void LUA_NATIVE_VEHICLE_0xF6E3D38869D0F7AD_(Any p0)
	{
		VEHICLE::_0xF6E3D38869D0F7AD(p0);
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_DOORS_SHUT(Vehicle VehicleIndex, bool bShutInstantly)
	{
		VEHICLE::SET_VEHICLE_DOORS_SHUT(VehicleIndex, bShutInstantly);
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_TYRES_CAN_BURST(Vehicle VehicleIndex, bool CanBurstTyresFlag)
	{
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(VehicleIndex, CanBurstTyresFlag);
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_WHEELS_CAN_BREAK(Vehicle VehicleIndex, bool CanBreakWheelsFlag)
	{
		VEHICLE::SET_VEHICLE_WHEELS_CAN_BREAK(VehicleIndex, CanBreakWheelsFlag);
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_DOORS_TO_OPEN_AT_ANY_DISTANCE(Vehicle vehicle, bool toggle)
	{
		VEHICLE::SET_VEHICLE_DOORS_TO_OPEN_AT_ANY_DISTANCE(vehicle, toggle);
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_DOOR_OPEN(Vehicle VehicleIndex, int DoorNumber, bool SwingFree, bool Instant)
	{
		VEHICLE::SET_VEHICLE_DOOR_OPEN(VehicleIndex, DoorNumber, SwingFree, Instant);
	}

	static void LUA_NATIVE_VEHICLE_REMOVE_VEHICLE_WINDOW(Vehicle VehicleIndex, int WindowNumber)
	{
		VEHICLE::REMOVE_VEHICLE_WINDOW(VehicleIndex, WindowNumber);
	}

	static void LUA_NATIVE_VEHICLE_0x8878FF3EEE2868A9_(Any p0, Any p1)
	{
		VEHICLE::_0x8878FF3EEE2868A9(p0, p1);
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_DIRT_LEVEL_2_(Vehicle vehicle, float dirtLevel)
	{
		VEHICLE::_SET_VEHICLE_DIRT_LEVEL_2(vehicle, dirtLevel);
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_MUD_LEVEL_(Vehicle vehicle, float mudLevel)
	{
		VEHICLE::_SET_VEHICLE_MUD_LEVEL(vehicle, mudLevel);
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_LIGHTS(Vehicle VehicleIndex, int CarLightSetting)
	{
		VEHICLE::SET_VEHICLE_LIGHTS(VehicleIndex, CarLightSetting);
	}

	static void LUA_NATIVE_VEHICLE_SET_RANDOM_TRAINS(bool RandomTrainsFlag)
	{
		VEHICLE::SET_RANDOM_TRAINS(RandomTrainsFlag);
	}

	static int LUA_NATIVE_VEHICLE_0x331CBD247FC5DAA8_(Hash configHash, float x, float y, float z, bool direction, bool p5)
	{
		auto retval = VEHICLE::_0x331CBD247FC5DAA8(configHash, x, y, z, direction, p5);
		return retval;
	}

	static bool LUA_NATIVE_VEHICLE_0x0516FAE561276EFC_(int trackIndex)
	{
		auto retval = (bool)VEHICLE::_0x0516FAE561276EFC(trackIndex);
		return retval;
	}

	static int LUA_NATIVE_VEHICLE_GET_TRAIN_TRACK_FROM_TRAIN_VEHICLE_(Vehicle train)
	{
		auto retval = VEHICLE::_GET_TRAIN_TRACK_FROM_TRAIN_VEHICLE(train);
		return retval;
	}

	static Vehicle LUA_NATIVE_VEHICLE_GET_TRAIN_VEHICLE_FROM_TRACK_INDEX_(int trackIndex)
	{
		auto retval = VEHICLE::_GET_TRAIN_VEHICLE_FROM_TRACK_INDEX(trackIndex);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_0x15206E88FF7617DF_(int trackIndex, float p1)
	{
		VEHICLE::_0x15206E88FF7617DF(trackIndex, p1);
	}

	static void LUA_NATIVE_VEHICLE_0xA7966807953A18EE_(int trackIndex, float p1)
	{
		VEHICLE::_0xA7966807953A18EE(trackIndex, p1);
	}

	static void LUA_NATIVE_VEHICLE_0x6B34BE961F639E21_(int trackIndex, int p1)
	{
		VEHICLE::_0x6B34BE961F639E21(trackIndex, p1);
	}

	static void LUA_NATIVE_VEHICLE_0xE6BD7DD3FD474415_(Vehicle train, bool p1)
	{
		VEHICLE::_0xE6BD7DD3FD474415(train, p1);
	}

	static void LUA_NATIVE_VEHICLE_0x615B3B8E73634509_(int trackIndex, float p1)
	{
		VEHICLE::_0x615B3B8E73634509(trackIndex, p1);
	}

	static void LUA_NATIVE_VEHICLE_0x38E7DD70A242D5CB_(int trackIndex, int p1)
	{
		VEHICLE::_0x38E7DD70A242D5CB(trackIndex, p1);
	}

	static void LUA_NATIVE_VEHICLE_0x63509DDF102E08E8_(int trackIndex, int p1)
	{
		VEHICLE::_0x63509DDF102E08E8(trackIndex, p1);
	}

	static void LUA_NATIVE_VEHICLE_0x7408B5C66BA31ADB_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10)
	{
		VEHICLE::_0x7408B5C66BA31ADB(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);
	}

	static void LUA_NATIVE_VEHICLE_0x41365DB586CD9E8E_(int trackIndex, float p1)
	{
		VEHICLE::_0x41365DB586CD9E8E(trackIndex, p1);
	}

	static void LUA_NATIVE_VEHICLE_0xD0AABE5B9F8FA589_(int trackIndex, float p1)
	{
		VEHICLE::_0xD0AABE5B9F8FA589(trackIndex, p1);
	}

	static void LUA_NATIVE_VEHICLE_0x427C919E9809E370_(int trackIndex, int p1)
	{
		VEHICLE::_0x427C919E9809E370(trackIndex, p1);
	}

	static bool LUA_NATIVE_VEHICLE_DOES_TRAIN_EXIST_ON_TRACK_(int trackIndex)
	{
		auto retval = (bool)VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(trackIndex);
		return retval;
	}

	static Vector3 LUA_NATIVE_VEHICLE_GET_TRAIN_POSITION_ON_TRACK_(int trackIndex)
	{
		auto retval = VEHICLE::_GET_TRAIN_POSITION_ON_TRACK(trackIndex);
		return retval;
	}

	static bool LUA_NATIVE_VEHICLE_0xB4241AD8F5AEE9ED_(int trackIndex)
	{
		auto retval = (bool)VEHICLE::_0xB4241AD8F5AEE9ED(trackIndex);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_0xA230A5DDE12ED374_(Any p0)
	{
		VEHICLE::_0xA230A5DDE12ED374(p0);
	}

	static void LUA_NATIVE_VEHICLE_0x0D5FDF0D36FA10CD_(int trackIndex)
	{
		VEHICLE::_0x0D5FDF0D36FA10CD(trackIndex);
	}

	static void LUA_NATIVE_VEHICLE_0xE682002DB1F30669_(Any p0)
	{
		VEHICLE::_0xE682002DB1F30669(p0);
	}

	static void LUA_NATIVE_VEHICLE_0x718EB706B6E998A0_(int trackIndex)
	{
		VEHICLE::_0x718EB706B6E998A0(trackIndex);
	}

	static bool LUA_NATIVE_VEHICLE_0xF05DFAF1ADFEF2CD_(Hash trainConfig, float x, float y, float z, bool direction, bool p5)
	{
		auto retval = (bool)VEHICLE::_0xF05DFAF1ADFEF2CD(trainConfig, x, y, z, direction, p5);
		return retval;
	}

	static Any LUA_NATIVE_VEHICLE_0xD1DF5E54F4ACBE1A_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		auto retval = VEHICLE::_0xD1DF5E54F4ACBE1A(p0, p1, p2, p3, p4, p5, p6);
		return retval;
	}

	static Any LUA_NATIVE_VEHICLE_0x0FDDEE66E3465726_(Any p0)
	{
		auto retval = VEHICLE::_0x0FDDEE66E3465726(p0);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_0x4C05B42A8D937796_()
	{
		VEHICLE::_0x4C05B42A8D937796();
	}

	static void LUA_NATIVE_VEHICLE_0xB961DD799A837BD7_()
	{
		VEHICLE::_0xB961DD799A837BD7();
	}

	static void LUA_NATIVE_VEHICLE_0x16B86A49E072AA85_()
	{
		VEHICLE::_0x16B86A49E072AA85();
	}

	static void LUA_NATIVE_VEHICLE_0x2A7413168F6CD5A8_()
	{
		VEHICLE::_0x2A7413168F6CD5A8();
	}

	static void LUA_NATIVE_VEHICLE_0xFFFE15B433300B8C_(Any p0, Any p1, Any p2)
	{
		VEHICLE::_0xFFFE15B433300B8C(p0, p1, p2);
	}

	static void LUA_NATIVE_VEHICLE_0x6EA1273D525427F4_(Any p0, Any p1, Any p2)
	{
		VEHICLE::_0x6EA1273D525427F4(p0, p1, p2);
	}

	static Any LUA_NATIVE_VEHICLE_0x7BE0746539DEF0C8_(Any p0, Any p1)
	{
		auto retval = VEHICLE::_0x7BE0746539DEF0C8(p0, p1);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_0x3137EDC899E6DAE4_(Any p0, Any p1)
	{
		VEHICLE::_0x3137EDC899E6DAE4(p0, p1);
	}

	static int LUA_NATIVE_VEHICLE_0x6C87F49BFA181DB5_(float x, float y, float z)
	{
		auto retval = VEHICLE::_0x6C87F49BFA181DB5(x, y, z);
		return retval;
	}

	static int LUA_NATIVE_VEHICLE_GET_TRACK_INDEX_FROM_COORDS_(float x, float y, float z)
	{
		auto retval = VEHICLE::_GET_TRACK_INDEX_FROM_COORDS(x, y, z);
		return retval;
	}

	static Vector3 LUA_NATIVE_VEHICLE_GET_NEAREST_TRAIN_TRACK_POSITION_(float x, float y, float z)
	{
		auto retval = VEHICLE::_GET_NEAREST_TRAIN_TRACK_POSITION(x, y, z);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_DELETE_ALL_TRAINS()
	{
		VEHICLE::DELETE_ALL_TRAINS();
	}

	static Any LUA_NATIVE_VEHICLE_0x0E558D3A49D759D6_(Any p0, Any p1)
	{
		auto retval = VEHICLE::_0x0E558D3A49D759D6(p0, p1);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_0xD4907EF4334C7602_(Any p0, Any p1)
	{
		VEHICLE::_0xD4907EF4334C7602(p0, p1);
	}

	static void LUA_NATIVE_VEHICLE_0x68830738A6BFB370_(Any p0, Any p1)
	{
		VEHICLE::_0x68830738A6BFB370(p0, p1);
	}

	static void LUA_NATIVE_VEHICLE_SET_TRAIN_SPEED(Vehicle VehicleIndex, float NewTrainSpeed)
	{
		VEHICLE::SET_TRAIN_SPEED(VehicleIndex, NewTrainSpeed);
	}

	static void LUA_NATIVE_VEHICLE_SET_TRAIN_MAX_SPEED_(Vehicle train, float speed)
	{
		VEHICLE::_SET_TRAIN_MAX_SPEED(train, speed);
	}

	static void LUA_NATIVE_VEHICLE_SET_TRAIN_CRUISE_SPEED(Vehicle VehicleIndex, float NewTrainCruiseSpeed)
	{
		VEHICLE::SET_TRAIN_CRUISE_SPEED(VehicleIndex, NewTrainCruiseSpeed);
	}

	static int LUA_NATIVE_VEHICLE_GET_TRAIN_CARRIAGE_TRAILER_NUMBER_(Vehicle train)
	{
		auto retval = VEHICLE::_GET_TRAIN_CARRIAGE_TRAILER_NUMBER(train);
		return retval;
	}

	static Hash LUA_NATIVE_VEHICLE_GET_TRAIN_MODEL_FROM_TRAIN_CONFIG_BY_CAR_INDEX_(Hash trainConfig, int trainCarIndex)
	{
		auto retval = VEHICLE::_GET_TRAIN_MODEL_FROM_TRAIN_CONFIG_BY_CAR_INDEX(trainConfig, trainCarIndex);
		return retval;
	}

	static int LUA_NATIVE_VEHICLE_GET_NUM_CARS_FROM_TRAIN_CONFIG_(Hash trainConfig)
	{
		auto retval = VEHICLE::_GET_NUM_CARS_FROM_TRAIN_CONFIG(trainConfig);
		return retval;
	}

	static Entity LUA_NATIVE_VEHICLE_GET_TRAIN_CAR_(Vehicle train)
	{
		auto retval = VEHICLE::_GET_TRAIN_CAR(train);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_SET_TRAIN_STOPS_FOR_STATIONS_(Vehicle train, bool toggle)
	{
		VEHICLE::_SET_TRAIN_STOPS_FOR_STATIONS(train, toggle);
	}

	static void LUA_NATIVE_VEHICLE_0xDD100CE1EBBF37E3_(Any p0, Any p1)
	{
		VEHICLE::_0xDD100CE1EBBF37E3(p0, p1);
	}

	static void LUA_NATIVE_VEHICLE_0x160C1B5AB48AB87C_(Vehicle train, float p1)
	{
		VEHICLE::_0x160C1B5AB48AB87C(train, p1);
	}

	static bool LUA_NATIVE_VEHICLE_IS_TRAIN_WAITING_AT_STATION(Vehicle train)
	{
		auto retval = (bool)VEHICLE::IS_TRAIN_WAITING_AT_STATION(train);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_SET_TRAIN_HALT_(Vehicle train)
	{
		VEHICLE::_SET_TRAIN_HALT(train);
	}

	static void LUA_NATIVE_VEHICLE_SET_TRAIN_LEAVE_STATION_(Vehicle train)
	{
		VEHICLE::_SET_TRAIN_LEAVE_STATION(train);
	}

	static void LUA_NATIVE_VEHICLE_SET_RANDOM_BOATS(bool RandomBoatsFlag)
	{
		VEHICLE::SET_RANDOM_BOATS(RandomBoatsFlag);
	}

	static void LUA_NATIVE_VEHICLE_REQUEST_VEHICLE_RECORDING(int FileNumber, sol::stack_object pRecordingName)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(FileNumber, pRecordingName.is<const char*>() ? pRecordingName.as<const char*>() : nullptr);
	}

	static bool LUA_NATIVE_VEHICLE_HAS_VEHICLE_RECORDING_BEEN_LOADED(int FileNumber, sol::stack_object pRecordingName)
	{
		auto retval = (bool)VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(FileNumber, pRecordingName.is<const char*>() ? pRecordingName.as<const char*>() : nullptr);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_REMOVE_VEHICLE_RECORDING(int FileNumber, sol::stack_object pRecordingName)
	{
		VEHICLE::REMOVE_VEHICLE_RECORDING(FileNumber, pRecordingName.is<const char*>() ? pRecordingName.as<const char*>() : nullptr);
	}

	static Vector3 LUA_NATIVE_VEHICLE_GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(int iRecordingNumber, float fTime, sol::stack_object pRecordingName)
	{
		auto retval = VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iRecordingNumber, fTime, pRecordingName.is<const char*>() ? pRecordingName.as<const char*>() : nullptr);
		return retval;
	}

	static Vector3 LUA_NATIVE_VEHICLE_GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(int iRecordingNumber, float fTime, sol::stack_object pRecordingName)
	{
		auto retval = VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(iRecordingNumber, fTime, pRecordingName.is<const char*>() ? pRecordingName.as<const char*>() : nullptr);
		return retval;
	}

	static float LUA_NATIVE_VEHICLE_GET_TIME_POSITION_IN_RECORDING(Vehicle VehicleIndex)
	{
		auto retval = VEHICLE::GET_TIME_POSITION_IN_RECORDING(VehicleIndex);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_START_PLAYBACK_RECORDED_VEHICLE(Vehicle VehicleIndex, int FileNumber, sol::stack_object pRecordingName, bool DoPlaceOnRoadAdjustment)
	{
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(VehicleIndex, FileNumber, pRecordingName.is<const char*>() ? pRecordingName.as<const char*>() : nullptr, DoPlaceOnRoadAdjustment);
	}

	static void LUA_NATIVE_VEHICLE_FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Vehicle VehicleIndex, bool DoPlaceOnRoadAdjustment)
	{
		VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(VehicleIndex, DoPlaceOnRoadAdjustment);
	}

	static void LUA_NATIVE_VEHICLE_STOP_PLAYBACK_RECORDED_VEHICLE(Vehicle VehicleIndex)
	{
		VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(VehicleIndex);
	}

	static bool LUA_NATIVE_VEHICLE_IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Vehicle VehicleIndex)
	{
		auto retval = (bool)VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(VehicleIndex);
		return retval;
	}

	static bool LUA_NATIVE_VEHICLE_IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(Vehicle VehicleIndex)
	{
		auto retval = (bool)VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(VehicleIndex);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_SET_PLAYBACK_SPEED(Vehicle VehicleIndex, float PlaybackSpeed)
	{
		VEHICLE::SET_PLAYBACK_SPEED(VehicleIndex, PlaybackSpeed);
	}

	static void LUA_NATIVE_VEHICLE_SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Vehicle VehicleIndex, float TimeSkip)
	{
		VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(VehicleIndex, TimeSkip);
	}

	static Vehicle LUA_NATIVE_VEHICLE_GET_CLOSEST_VEHICLE(float CentreX, float CentreY, float CentreZ, float Radius, Hash VehicleModelHashKey, int SearchFlags)
	{
		auto retval = VEHICLE::GET_CLOSEST_VEHICLE(CentreX, CentreY, CentreZ, Radius, VehicleModelHashKey, SearchFlags);
		return retval;
	}

	static Vehicle LUA_NATIVE_VEHICLE_GET_TRAIN_CARRIAGE(Vehicle TrainEngineIndex, int CarriageNumber)
	{
		auto retval = VEHICLE::GET_TRAIN_CARRIAGE(TrainEngineIndex, CarriageNumber);
		return retval;
	}

	static Vehicle LUA_NATIVE_VEHICLE_DELETE_MISSION_TRAIN(Vehicle TrainIndex)
	{
		VEHICLE::DELETE_MISSION_TRAIN(&TrainIndex);
		return TrainIndex;
	}

	static Vehicle LUA_NATIVE_VEHICLE_SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(Vehicle TrainIndex, int iFlags)
	{
		VEHICLE::SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(&TrainIndex, iFlags);
		return TrainIndex;
	}

	static void LUA_NATIVE_VEHICLE_SET_MISSION_TRAIN_COORDS(Vehicle TrainIndex, float VecNewCoorsX, float VecNewCoorsY, float VecNewCoorsZ)
	{
		VEHICLE::SET_MISSION_TRAIN_COORDS(TrainIndex, VecNewCoorsX, VecNewCoorsY, VecNewCoorsZ);
	}

	static void LUA_NATIVE_VEHICLE_SET_MISSION_TRAIN_WARP_TO_COORDS_(Vehicle train, float x, float y, float z, bool direction)
	{
		VEHICLE::_SET_MISSION_TRAIN_WARP_TO_COORDS(train, x, y, z, direction);
	}

	static void LUA_NATIVE_VEHICLE_0xA72B1BF3857B94D7_(Vehicle train, bool p1)
	{
		VEHICLE::_0xA72B1BF3857B94D7(train, p1);
	}

	static bool LUA_NATIVE_VEHICLE_IS_THIS_MODEL_A_DRAFT_VEHICLE_(Hash model)
	{
		auto retval = (bool)VEHICLE::_IS_THIS_MODEL_A_DRAFT_VEHICLE(model);
		return retval;
	}

	static bool LUA_NATIVE_VEHICLE_IS_THIS_MODEL_A_BOAT(Hash VehicleModelHashKey)
	{
		auto retval = (bool)VEHICLE::IS_THIS_MODEL_A_BOAT(VehicleModelHashKey);
		return retval;
	}

	static bool LUA_NATIVE_VEHICLE_IS_THIS_MODEL_A_TRAIN(Hash VehicleModelHashKey)
	{
		auto retval = (bool)VEHICLE::IS_THIS_MODEL_A_TRAIN(VehicleModelHashKey);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_CAN_BE_TARGETTED(Vehicle VehicleIndex, bool CanBeTargettedFlag)
	{
		VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(VehicleIndex, CanBeTargettedFlag);
	}

	static void LUA_NATIVE_VEHICLE_SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(Vehicle VehicleIndex, bool DontAllowPlayerToEnter)
	{
		VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(VehicleIndex, DontAllowPlayerToEnter);
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Vehicle VehicleIndex, bool VisibleDamageFlag)
	{
		VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(VehicleIndex, VisibleDamageFlag);
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_HAS_UNBREAKABLE_LIGHTS(Vehicle VehicleIndex, bool UnbreakableLightFlag)
	{
		VEHICLE::SET_VEHICLE_HAS_UNBREAKABLE_LIGHTS(VehicleIndex, UnbreakableLightFlag);
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(Vehicle VehicleIndex, bool RespectLocks)
	{
		VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(VehicleIndex, RespectLocks);
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_CAN_EJECT_PASSENGERS_IF_LOCKED(Vehicle VehicleIndex, bool RespectLocks)
	{
		VEHICLE::SET_VEHICLE_CAN_EJECT_PASSENGERS_IF_LOCKED(VehicleIndex, RespectLocks);
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_DIRT_LEVEL(Vehicle VehicleIndex, float DirtLevel)
	{
		VEHICLE::SET_VEHICLE_DIRT_LEVEL(VehicleIndex, DirtLevel);
	}

	static bool LUA_NATIVE_VEHICLE_IS_VEHICLE_DOOR_FULLY_OPEN(Vehicle VehicleIndex, int DoorNumber)
	{
		auto retval = (bool)VEHICLE::IS_VEHICLE_DOOR_FULLY_OPEN(VehicleIndex, DoorNumber);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_ENGINE_ON(Vehicle VehicleIndex, bool EngineOnFlag, bool bNoDelay)
	{
		VEHICLE::SET_VEHICLE_ENGINE_ON(VehicleIndex, EngineOnFlag, bNoDelay);
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_UNDRIVEABLE(Vehicle VehicleIndex, bool UnDriveableFlag)
	{
		VEHICLE::SET_VEHICLE_UNDRIVEABLE(VehicleIndex, UnDriveableFlag);
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_PROVIDES_COVER(Vehicle VehicleIndex, bool ProvidesCoverFlag)
	{
		VEHICLE::SET_VEHICLE_PROVIDES_COVER(VehicleIndex, ProvidesCoverFlag);
	}

	static void LUA_NATIVE_VEHICLE_0x3053064F909B5F42_(Any p0, Any p1)
	{
		VEHICLE::_0x3053064F909B5F42(p0, p1);
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_DOOR_CONTROL(Vehicle VehicleIndex, int DoorNumber, int DoorStatus, float AngleRatio)
	{
		VEHICLE::SET_VEHICLE_DOOR_CONTROL(VehicleIndex, DoorNumber, DoorStatus, AngleRatio);
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_DOOR_LATCHED(Vehicle VehicleIndex, int DoorNumber, bool SetLatched, bool WillAutoLatch, bool bApplyForceForDoorClosed)
	{
		VEHICLE::SET_VEHICLE_DOOR_LATCHED(VehicleIndex, DoorNumber, SetLatched, WillAutoLatch, bApplyForceForDoorClosed);
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_DOOR_SHUT(Vehicle VehicleIndex, int DoorNumber, bool bShutInstantly)
	{
		VEHICLE::SET_VEHICLE_DOOR_SHUT(VehicleIndex, DoorNumber, bShutInstantly);
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_DOOR_BROKEN(Vehicle VehicleIndex, int DoorNumber, bool bDissapear)
	{
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(VehicleIndex, DoorNumber, bDissapear);
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_CAN_BREAK(Vehicle VehicleIndex, bool bAllowBreaking)
	{
		VEHICLE::SET_VEHICLE_CAN_BREAK(VehicleIndex, bAllowBreaking);
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Vehicle VehicleIndex, bool ConsideredByPlayerFlag)
	{
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(VehicleIndex, ConsideredByPlayerFlag);
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_MAY_BE_USED_BY_GOTO_POINT_ANY_MEANS(Vehicle VehicleIndex, bool bState)
	{
		VEHICLE::SET_VEHICLE_MAY_BE_USED_BY_GOTO_POINT_ANY_MEANS(VehicleIndex, bState);
	}

	static int LUA_NATIVE_VEHICLE_GET_VEHICLE_DOOR_LOCK_STATUS(Vehicle VehicleIndex)
	{
		auto retval = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(VehicleIndex);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(Vehicle VehicleIndex, int DoorNumber, bool bDoorBreakageAllowed)
	{
		VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(VehicleIndex, DoorNumber, bDoorBreakageAllowed);
	}

	static bool LUA_NATIVE_VEHICLE_IS_VEHICLE_ON_ALL_WHEELS(Vehicle VehicleIndex)
	{
		auto retval = (bool)VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(VehicleIndex);
		return retval;
	}

	static bool LUA_NATIVE_VEHICLE_GET_TRAIN_DIRECTION_(Vehicle train)
	{
		auto retval = (bool)VEHICLE::_GET_TRAIN_DIRECTION(train);
		return retval;
	}

	static bool LUA_NATIVE_VEHICLE_GET_TRAIN_DIRECTION_FROM_INDEX_(int trackIndex)
	{
		auto retval = (bool)VEHICLE::_GET_TRAIN_DIRECTION_FROM_INDEX(trackIndex);
		return retval;
	}

	static std::tuple<Any, Hash, int> LUA_NATIVE_VEHICLE_0x09034479E6E3E269_(Vehicle train, Hash trainTrack, int junctionIndex)
	{
		std::tuple<Any, Hash, int> return_values;
		std::get<0>(return_values) = VEHICLE::_0x09034479E6E3E269(train, &trainTrack, &junctionIndex);
		std::get<1>(return_values) = trainTrack;
		std::get<2>(return_values) = junctionIndex;

		return return_values;
	}

	static std::tuple<bool, int> LUA_NATIVE_VEHICLE_GET_TRAIN_TRACK_JUNCTION_AT_COORDS_(Hash trainTrack, float x, float y, float z, int junctionIndex)
	{
		std::tuple<bool, int> return_values;
		std::get<0>(return_values) = (bool)VEHICLE::_GET_TRAIN_TRACK_JUNCTION_AT_COORDS(trainTrack, x, y, z, &junctionIndex);
		std::get<1>(return_values) = junctionIndex;

		return return_values;
	}

	static Any LUA_NATIVE_VEHICLE_0xD9BF3ED8EFB67EA3_(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		auto retval = VEHICLE::_0xD9BF3ED8EFB67EA3(p0, p1, p2, p3, p4);
		return retval;
	}

	static Vector3 LUA_NATIVE_VEHICLE_0x785639D89F8451AB_(Any p0, Any p1)
	{
		auto retval = VEHICLE::_0x785639D89F8451AB(p0, p1);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_SET_TRAIN_TRACK_JUNCTION_SWITCH_(Hash trainTrack, int junctionIndex, bool enabled)
	{
		VEHICLE::_SET_TRAIN_TRACK_JUNCTION_SWITCH(trainTrack, junctionIndex, enabled);
	}

	static void LUA_NATIVE_VEHICLE_0x3ABFA128F5BF5A70_(Hash trainTrack, int junctionIndex, bool enabled)
	{
		VEHICLE::_0x3ABFA128F5BF5A70(trainTrack, junctionIndex, enabled);
	}

	static Any LUA_NATIVE_VEHICLE_0x2C46D2A591D8C322_(Any p0, Any p1, Any p2)
	{
		auto retval = VEHICLE::_0x2C46D2A591D8C322(p0, p1, p2);
		return retval;
	}

	static Any LUA_NATIVE_VEHICLE_0xCAFF2C9747103C02_(Any p0, Any p1, Any p2)
	{
		auto retval = VEHICLE::_0xCAFF2C9747103C02(p0, p1, p2);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_SET_ALL_JUNCTIONS_CLEARED_()
	{
		VEHICLE::_SET_ALL_JUNCTIONS_CLEARED();
	}

	static void LUA_NATIVE_VEHICLE_0x34BCF6209B9668A7_(int trackIndex, Any p1)
	{
		VEHICLE::_0x34BCF6209B9668A7(trackIndex, p1);
	}

	static void LUA_NATIVE_VEHICLE_0xD0BA1853D76683C8_(int trackIndex, float x, float y, float z, Any p4)
	{
		VEHICLE::_0xD0BA1853D76683C8(trackIndex, x, y, z, p4);
	}

	static void LUA_NATIVE_VEHICLE_SET_TRAIN_OFFSET_FROM_STATION(Vehicle train, float offset)
	{
		VEHICLE::SET_TRAIN_OFFSET_FROM_STATION(train, offset);
	}

	static void LUA_NATIVE_VEHICLE_0xDC69F6913CCA0B99_(Any p0, Any p1)
	{
		VEHICLE::_0xDC69F6913CCA0B99(p0, p1);
	}

	static void LUA_NATIVE_VEHICLE_0x7840576C50A13DBA_(Vehicle train, bool p1)
	{
		VEHICLE::_0x7840576C50A13DBA(train, p1);
	}

	static Any LUA_NATIVE_VEHICLE_0xD0116DF21E6C7B36_(Any p0, Any p1)
	{
		auto retval = VEHICLE::_0xD0116DF21E6C7B36(p0, p1);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_DETACH_WAGON_ENTITY_FROM_TRAIN_(Entity entity)
	{
		VEHICLE::_DETACH_WAGON_ENTITY_FROM_TRAIN(entity);
	}

	static int LUA_NATIVE_VEHICLE_0x1180A2974D251B7B_(Vehicle train)
	{
		auto retval = VEHICLE::_0x1180A2974D251B7B(train);
		return retval;
	}

	static int LUA_NATIVE_VEHICLE_GET_CURRENT_STATION_FOR_TRAIN(Vehicle train)
	{
		auto retval = VEHICLE::GET_CURRENT_STATION_FOR_TRAIN(train);
		return retval;
	}

	static Hash LUA_NATIVE_VEHICLE_0x9CC94A948EAF5372_(int trackIndex, int stationIndex)
	{
		auto retval = VEHICLE::_0x9CC94A948EAF5372(trackIndex, stationIndex);
		return retval;
	}

	static Any LUA_NATIVE_VEHICLE_0xDE8C5B9F65017FA1_(Vehicle train)
	{
		auto retval = VEHICLE::_0xDE8C5B9F65017FA1(train);
		return retval;
	}

	static int LUA_NATIVE_VEHICLE_GET_CURRENT_TRACK_FOR_TRAIN_(Vehicle train)
	{
		auto retval = VEHICLE::_GET_CURRENT_TRACK_FOR_TRAIN(train);
		return retval;
	}

	static Vector3 LUA_NATIVE_VEHICLE_GET_STATION_COORDS_FROM_TRAIN_STATION_DATA_(int trackIndex, int stationIndex)
	{
		auto retval = VEHICLE::_GET_STATION_COORDS_FROM_TRAIN_STATION_DATA(trackIndex, stationIndex);
		return retval;
	}

	static int LUA_NATIVE_VEHICLE_GET_TRACK_INDEX_OF_TRAIN(Vehicle train)
	{
		auto retval = VEHICLE::GET_TRACK_INDEX_OF_TRAIN(train);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_0x1A861F899EBBE17C_(Vehicle train, bool p1)
	{
		VEHICLE::_0x1A861F899EBBE17C(train, p1);
	}

	static void LUA_NATIVE_VEHICLE_0xF8F7DA13CFBD4532_(int trackIndex, bool p1)
	{
		VEHICLE::_0xF8F7DA13CFBD4532(trackIndex, p1);
	}

	static void LUA_NATIVE_VEHICLE_TRIGGER_TRAIN_WHISTLE_(Vehicle train, sol::stack_object whistleSequence, bool p2, bool p3)
	{
		VEHICLE::_TRIGGER_TRAIN_WHISTLE(train, whistleSequence.is<const char*>() ? whistleSequence.as<const char*>() : nullptr, p2, p3);
	}

	static void LUA_NATIVE_VEHICLE_0x2BB2B5BCF0DF8008_(Any p0, Any p1)
	{
		VEHICLE::_0x2BB2B5BCF0DF8008(p0, p1);
	}

	static void LUA_NATIVE_VEHICLE_0x6703872EC09BC158_(Any p0, Any p1)
	{
		VEHICLE::_0x6703872EC09BC158(p0, p1);
	}

	static void LUA_NATIVE_VEHICLE_0x1BFBAFCC6760FF02_(Vehicle train, bool p1)
	{
		VEHICLE::_0x1BFBAFCC6760FF02(train, p1);
	}

	static Any LUA_NATIVE_VEHICLE_0xF5EA41C1408695FB_(Any p0, Any p1, Any p2, Any p3)
	{
		auto retval = VEHICLE::_0xF5EA41C1408695FB(p0, p1, p2, p3);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_FIXED(Vehicle VehicleIndex)
	{
		VEHICLE::SET_VEHICLE_FIXED(VehicleIndex);
	}

	static void LUA_NATIVE_VEHICLE_SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(Vehicle VehicleIndex, bool bVal)
	{
		VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(VehicleIndex, bVal);
	}

	static void LUA_NATIVE_VEHICLE_SET_DISABLE_VEHICLE_PETROL_TANK_DAMAGE(Vehicle VehicleIndex, bool bVal)
	{
		VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_DAMAGE(VehicleIndex, bVal);
	}

	static void LUA_NATIVE_VEHICLE_SET_DISABLE_VEHICLE_ENGINE_FIRES(Vehicle VehicleIndex, bool bVal)
	{
		VEHICLE::SET_DISABLE_VEHICLE_ENGINE_FIRES(VehicleIndex, bVal);
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_LIMIT_SPEED_WHEN_PLAYER_INACTIVE(Vehicle VehicleIndex, bool bVal)
	{
		VEHICLE::SET_VEHICLE_LIMIT_SPEED_WHEN_PLAYER_INACTIVE(VehicleIndex, bVal);
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_STOP_INSTANTLY_WHEN_PLAYER_INACTIVE(Vehicle VehicleIndex, bool bVal)
	{
		VEHICLE::SET_VEHICLE_STOP_INSTANTLY_WHEN_PLAYER_INACTIVE(VehicleIndex, bVal);
	}

	static void LUA_NATIVE_VEHICLE_REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(float VecMinCoorsX, float VecMinCoorsY, float VecMinCoorsZ, float VecMaxCoorsX, float VecMaxCoorsY, float VecMaxCoorsZ)
	{
		VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(VecMinCoorsX, VecMinCoorsY, VecMinCoorsZ, VecMaxCoorsX, VecMaxCoorsY, VecMaxCoorsZ);
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_STEER_BIAS(Vehicle VehicleIndex, float Bias)
	{
		VEHICLE::SET_VEHICLE_STEER_BIAS(VehicleIndex, Bias);
	}

	static bool LUA_NATIVE_VEHICLE_IS_VEHICLE_EXTRA_TURNED_ON(Vehicle VehicleIndex, int Extra)
	{
		auto retval = (bool)VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(VehicleIndex, Extra);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_EXTRA(Vehicle VehicleIndex, int Extra, bool TurnOff)
	{
		VEHICLE::SET_VEHICLE_EXTRA(VehicleIndex, Extra, TurnOff);
	}

	static bool LUA_NATIVE_VEHICLE_DOES_EXTRA_EXIST(Vehicle VehicleIndex, int Extra)
	{
		auto retval = (bool)VEHICLE::DOES_EXTRA_EXIST(VehicleIndex, Extra);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_DAMAGE(Vehicle TrainIndex, float VecDamageCoorsX, float VecDamageCoorsY, float VecDamageCoorsZ, float Damage, float Deformation, bool localDamage)
	{
		VEHICLE::SET_VEHICLE_DAMAGE(TrainIndex, VecDamageCoorsX, VecDamageCoorsY, VecDamageCoorsZ, Damage, Deformation, localDamage);
	}

	static float LUA_NATIVE_VEHICLE_GET_VEHICLE_ENGINE_HEALTH(Vehicle VehicleIndex)
	{
		auto retval = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(VehicleIndex);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_ENGINE_HEALTH(Vehicle VehicleIndex, float health)
	{
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(VehicleIndex, health);
	}

	static float LUA_NATIVE_VEHICLE_GET_VEHICLE_PETROL_TANK_HEALTH(Vehicle VehicleIndex)
	{
		auto retval = VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(VehicleIndex);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_PETROL_TANK_HEALTH(Vehicle VehicleIndex, float health)
	{
		VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(VehicleIndex, health);
	}

	static bool LUA_NATIVE_VEHICLE_IS_VEHICLE_STUCK_TIMER_UP(Vehicle VehicleIndex, int StuckType, int RequiredTime)
	{
		auto retval = (bool)VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(VehicleIndex, StuckType, RequiredTime);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_RESET_VEHICLE_STUCK_TIMER(Vehicle VehicleIndex, int StuckType)
	{
		VEHICLE::RESET_VEHICLE_STUCK_TIMER(VehicleIndex, StuckType);
	}

	static bool LUA_NATIVE_VEHICLE_IS_VEHICLE_DRIVEABLE(Vehicle VehicleIndex, bool bCheckFire, bool p2)
	{
		auto retval = (bool)VEHICLE::IS_VEHICLE_DRIVEABLE(VehicleIndex, bCheckFire, p2);
		return retval;
	}

	static bool LUA_NATIVE_VEHICLE_IS_VEHICLE_WRECKED(Vehicle vehicle)
	{
		auto retval = (bool)VEHICLE::IS_VEHICLE_WRECKED(vehicle);
		return retval;
	}

	static bool LUA_NATIVE_VEHICLE_IS_VEHICLE_ON_FIRE_(Vehicle vehicle)
	{
		auto retval = (bool)VEHICLE::_IS_VEHICLE_ON_FIRE(vehicle);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(Vehicle VehicleIndex, bool bNewVal)
	{
		VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(VehicleIndex, bNewVal);
	}

	static void LUA_NATIVE_VEHICLE_START_VEHICLE_HORN(Vehicle VehicleIndex, int TimeToSoundHorn, Hash HornTypeHash, bool isMusicalHorn)
	{
		VEHICLE::START_VEHICLE_HORN(VehicleIndex, TimeToSoundHorn, HornTypeHash, isMusicalHorn);
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_HAS_STRONG_AXLES(Vehicle VehicleIndex, bool bSet)
	{
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(VehicleIndex, bSet);
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_SNOW_LEVEL_(Vehicle vehicle, float snowLevel)
	{
		VEHICLE::_SET_VEHICLE_SNOW_LEVEL(vehicle, snowLevel);
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_WET_LEVEL_(Vehicle vehicle, float wetLevel)
	{
		VEHICLE::_SET_VEHICLE_WET_LEVEL(vehicle, wetLevel);
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_TINT_(Vehicle vehicle, int tintId)
	{
		VEHICLE::_SET_VEHICLE_TINT(vehicle, tintId);
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_LIVERY_(Vehicle vehicle, int liveryIndex)
	{
		VEHICLE::_SET_VEHICLE_LIVERY(vehicle, liveryIndex);
	}

	static int LUA_NATIVE_VEHICLE_GET_VEHICLE_TINT_(Vehicle vehicle)
	{
		auto retval = VEHICLE::_GET_VEHICLE_TINT(vehicle);
		return retval;
	}

	static int LUA_NATIVE_VEHICLE_GET_VEHICLE_LIVERY_(Vehicle vehicle)
	{
		auto retval = VEHICLE::_GET_VEHICLE_LIVERY(vehicle);
		return retval;
	}

	static bool LUA_NATIVE_VEHICLE_IS_VEHICLE_WINDOW_INTACT(Vehicle VehicleIndex, int WindowNumber)
	{
		auto retval = (bool)VEHICLE::IS_VEHICLE_WINDOW_INTACT(VehicleIndex, WindowNumber);
		return retval;
	}

	static bool LUA_NATIVE_VEHICLE_ARE_ANY_VEHICLE_SEATS_FREE(Vehicle VehicleIndex)
	{
		auto retval = (bool)VEHICLE::ARE_ANY_VEHICLE_SEATS_FREE(VehicleIndex);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(Vehicle VehicleIndex, bool bSet)
	{
		VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(VehicleIndex, bSet);
	}

	static void LUA_NATIVE_VEHICLE_SET_ALLOW_VEHICLE_EXPLODES_ON_CONTACT(Vehicle VehicleIndex, bool bSet)
	{
		VEHICLE::SET_ALLOW_VEHICLE_EXPLODES_ON_CONTACT(VehicleIndex, bSet);
	}

	static bool LUA_NATIVE_VEHICLE_IS_ANY_VEHICLE_NEAR_POINT(float pointX, float pointY, float pointZ, float radius)
	{
		auto retval = (bool)VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(pointX, pointY, pointZ, radius);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_REQUEST_VEHICLE_HIGH_DETAIL_MODEL(Vehicle Vehicle)
	{
		VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(Vehicle);
	}

	static void LUA_NATIVE_VEHICLE_REQUEST_VEHICLE_ASSET(Hash VehicleModelHashKey, int iVehicleRequestFlags)
	{
		VEHICLE::REQUEST_VEHICLE_ASSET(VehicleModelHashKey, iVehicleRequestFlags);
	}

	static void LUA_NATIVE_VEHICLE_0xCF9DA72002FC16BF_(Any p0, Any p1, Any p2)
	{
		VEHICLE::_0xCF9DA72002FC16BF(p0, p1, p2);
	}

	static bool LUA_NATIVE_VEHICLE_HAS_VEHICLE_ASSET_LOADED(Hash VehicleModelHashKey)
	{
		auto retval = (bool)VEHICLE::HAS_VEHICLE_ASSET_LOADED(VehicleModelHashKey);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_REMOVE_VEHICLE_ASSET(Hash VehicleModelHashKey)
	{
		VEHICLE::REMOVE_VEHICLE_ASSET(VehicleModelHashKey);
	}

	static Any LUA_NATIVE_VEHICLE_SET_VEHICLE_AUTOMATICALLY_ATTACHES(Entity TowTruckVehicleIndex, bool AutomaticallyAttach, bool ScanWithNonPlayerDriver)
	{
		auto retval = VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(TowTruckVehicleIndex, AutomaticallyAttach, ScanWithNonPlayerDriver);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_0x104D9A7B1C0D0783_(Vehicle vehicle, float p1)
	{
		VEHICLE::_0x104D9A7B1C0D0783(vehicle, p1);
	}

	static bool LUA_NATIVE_VEHICLE_IS_VEHICLE_IN_BURNOUT(Vehicle VehicleIndex)
	{
		auto retval = (bool)VEHICLE::IS_VEHICLE_IN_BURNOUT(VehicleIndex);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_HANDBRAKE(Vehicle VehicleIndex, bool bOn)
	{
		VEHICLE::SET_VEHICLE_HANDBRAKE(VehicleIndex, bOn);
	}

	static void LUA_NATIVE_VEHICLE_INSTANTLY_FILL_VEHICLE_POPULATION()
	{
		VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
	}

	static bool LUA_NATIVE_VEHICLE_HAS_INSTANT_FILL_VEHICLE_POPULATION_FINISHED()
	{
		auto retval = (bool)VEHICLE::HAS_INSTANT_FILL_VEHICLE_POPULATION_FINISHED();
		return retval;
	}

	static std::tuple<bool, Vehicle> LUA_NATIVE_VEHICLE_GET_VEHICLE_TRAILER_VEHICLE(Vehicle vehicle, Vehicle trailer)
	{
		std::tuple<bool, Vehicle> return_values;
		std::get<0>(return_values) = (bool)VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(vehicle, &trailer);
		std::get<1>(return_values) = trailer;

		return return_values;
	}

	static float LUA_NATIVE_VEHICLE_GET_VEHICLE_ESTIMATED_MAX_SPEED(Vehicle VehicleIndex)
	{
		auto retval = VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(VehicleIndex);
		return retval;
	}

	static int LUA_NATIVE_VEHICLE_ADD_ROAD_NODE_SPEED_ZONE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10)
	{
		auto retval = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);
		return retval;
	}

	static bool LUA_NATIVE_VEHICLE_REMOVE_ROAD_NODE_SPEED_ZONE(int index)
	{
		auto retval = (bool)VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(index);
		return retval;
	}

	static bool LUA_NATIVE_VEHICLE_IS_ENTRY_POINT_FOR_SEAT_CLEAR(Ped PedIndex, Vehicle VehicleIndex, int Seat, bool CheckSide, bool LeftSide)
	{
		auto retval = (bool)VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(PedIndex, VehicleIndex, Seat, CheckSide, LeftSide);
		return retval;
	}

	static bool LUA_NATIVE_VEHICLE_CAN_SHUFFLE_SEAT(Vehicle VehicleIndex, int Seat)
	{
		auto retval = (bool)VEHICLE::CAN_SHUFFLE_SEAT(VehicleIndex, Seat);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_MODIFY_VEHICLE_TOP_SPEED(Vehicle vehicle, float PercentChange)
	{
		VEHICLE::MODIFY_VEHICLE_TOP_SPEED(vehicle, PercentChange);
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_STAYS_FROZEN_WHEN_CLEANED_UP(Vehicle VehicleIndex, bool bStaysFrozen)
	{
		VEHICLE::SET_VEHICLE_STAYS_FROZEN_WHEN_CLEANED_UP(VehicleIndex, bStaysFrozen);
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_INFLUENCES_WANTED_LEVEL(Vehicle VehicleIndex, bool bInfluenceWantedLevel)
	{
		VEHICLE::SET_VEHICLE_INFLUENCES_WANTED_LEVEL(VehicleIndex, bInfluenceWantedLevel);
	}

	static bool LUA_NATIVE_VEHICLE_IS_BOAT_GROUNDED_(Vehicle vehicle)
	{
		auto retval = (bool)VEHICLE::_IS_BOAT_GROUNDED(vehicle);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(Vehicle vehicle, bool bStealable)
	{
		VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(vehicle, bStealable);
	}

	static void LUA_NATIVE_VEHICLE_LOCK_DOORS_WHEN_NO_LONGER_NEEDED(Vehicle vehicle)
	{
		VEHICLE::LOCK_DOORS_WHEN_NO_LONGER_NEEDED(vehicle);
	}

	static Vehicle LUA_NATIVE_VEHICLE_GET_LAST_DRIVEN_VEHICLE()
	{
		auto retval = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_CLEAR_LAST_DRIVEN_VEHICLE()
	{
		VEHICLE::CLEAR_LAST_DRIVEN_VEHICLE();
	}

	static void LUA_NATIVE_VEHICLE_SET_PED_OWNS_VEHICLE(Ped ped, Vehicle vehicle)
	{
		VEHICLE::SET_PED_OWNS_VEHICLE(ped, vehicle);
	}

	static Entity LUA_NATIVE_VEHICLE_GET_VEHICLE_OWNER_(Vehicle vehicle)
	{
		auto retval = VEHICLE::_GET_VEHICLE_OWNER(vehicle);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_LOD_MULTIPLIER(Vehicle vehicle, float multiplier)
	{
		VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(vehicle, multiplier);
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_LOD_LEVEL_(Vehicle vehicle, int lodLevel)
	{
		VEHICLE::_SET_VEHICLE_LOD_LEVEL(vehicle, lodLevel);
	}

	static void LUA_NATIVE_VEHICLE_SET_FORCE_VEHICLE_ENGINE_DAMAGE_BY_BULLET(Vehicle vehicle, bool forceEngineDamage)
	{
		VEHICLE::SET_FORCE_VEHICLE_ENGINE_DAMAGE_BY_BULLET(vehicle, forceEngineDamage);
	}

	static void LUA_NATIVE_VEHICLE_COPY_VEHICLE_DAMAGES(Vehicle srcVehicle, Vehicle dstVehicle)
	{
		VEHICLE::COPY_VEHICLE_DAMAGES(srcVehicle, dstVehicle);
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_SHOOT_AT_TARGET(Ped pedIndex, Entity targetEntity, float vecTargetCoorsX, float vecTargetCoorsY, float vecTargetCoorsZ, Any p5)
	{
		VEHICLE::SET_VEHICLE_SHOOT_AT_TARGET(pedIndex, targetEntity, vecTargetCoorsX, vecTargetCoorsY, vecTargetCoorsZ, p5);
	}

	static void LUA_NATIVE_VEHICLE_SET_FORCE_HD_VEHICLE(Vehicle vehicleIndex, bool forceHd)
	{
		VEHICLE::SET_FORCE_HD_VEHICLE(vehicleIndex, forceHd);
	}

	static void LUA_NATIVE_VEHICLE_TRACK_VEHICLE_VISIBILITY(Vehicle vehicleIndex)
	{
		VEHICLE::TRACK_VEHICLE_VISIBILITY(vehicleIndex);
	}

	static bool LUA_NATIVE_VEHICLE_IS_VEHICLE_VISIBLE(Vehicle vehicleIndex)
	{
		auto retval = (bool)VEHICLE::IS_VEHICLE_VISIBLE(vehicleIndex);
		return retval;
	}

	static Any LUA_NATIVE_VEHICLE_0x13C190302369308B_(Any p0)
	{
		auto retval = VEHICLE::_0x13C190302369308B(p0);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_SET_ENABLE_VEHICLE_SLIPSTREAMING(bool EnableSlipstreaming)
	{
		VEHICLE::SET_ENABLE_VEHICLE_SLIPSTREAMING(EnableSlipstreaming);
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_INACTIVE_DURING_PLAYBACK(Vehicle vehicleIndex, bool bForceInactive)
	{
		VEHICLE::SET_VEHICLE_INACTIVE_DURING_PLAYBACK(vehicleIndex, bForceInactive);
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_ENGINE_CAN_DEGRADE(Vehicle vehicleIndex, bool bEnableDegrading)
	{
		VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(vehicleIndex, bEnableDegrading);
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_IS_STOLEN(Vehicle vehicleIndex, bool bIsStolen)
	{
		VEHICLE::SET_VEHICLE_IS_STOLEN(vehicleIndex, bIsStolen);
	}

	static void LUA_NATIVE_VEHICLE_0xCBF88256E44D5D39_(Vehicle vehicle, bool p1)
	{
		VEHICLE::_0xCBF88256E44D5D39(vehicle, p1);
	}

	static void LUA_NATIVE_VEHICLE_0xC325A6BAA62CF8A2_(Vehicle vehicle, bool p1)
	{
		VEHICLE::_0xC325A6BAA62CF8A2(vehicle, p1);
	}

	static void LUA_NATIVE_VEHICLE_0x0CD7914D17A970AB_(Any p0, Any p1)
	{
		VEHICLE::_0x0CD7914D17A970AB(p0, p1);
	}

	static void LUA_NATIVE_VEHICLE_0x23F66C36F8E5EAAB_(Any p0, Any p1)
	{
		VEHICLE::_0x23F66C36F8E5EAAB(p0, p1);
	}

	static void LUA_NATIVE_VEHICLE_0x697DF68F3A761A50_(Any p0)
	{
		VEHICLE::_0x697DF68F3A761A50(p0);
	}

	static void LUA_NATIVE_VEHICLE_0x27E3F2B57209FA54_(Any p0, Any p1)
	{
		VEHICLE::_0x27E3F2B57209FA54(p0, p1);
	}

	static void LUA_NATIVE_VEHICLE_DISABLE_VEHICLE_WEAPON(bool disable, Hash TypeOfWeapon, Vehicle vehicleIndex, Ped PedIndex)
	{
		VEHICLE::DISABLE_VEHICLE_WEAPON(disable, TypeOfWeapon, vehicleIndex, PedIndex);
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(Vehicle vehicle, bool canBeUsed)
	{
		VEHICLE::SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(vehicle, canBeUsed);
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_KEEP_ENGINE_ON_WHEN_ABANDONED(Vehicle vehicle, bool keepEngineOn)
	{
		VEHICLE::SET_VEHICLE_KEEP_ENGINE_ON_WHEN_ABANDONED(vehicle, keepEngineOn);
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_WHEELS_CAN_BREAK_OFF_WHEN_BLOW_UP(Vehicle vehicle, bool bCanWheelsBreakoff)
	{
		VEHICLE::SET_VEHICLE_WHEELS_CAN_BREAK_OFF_WHEN_BLOW_UP(vehicle, bCanWheelsBreakoff);
	}

	static void LUA_NATIVE_VEHICLE_0x15CC8C33D7FFCC4A_(Vehicle vehicle, int p1)
	{
		VEHICLE::_0x15CC8C33D7FFCC4A(vehicle, p1);
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_AI_CAN_USE_EXCLUSIVE_SEATS(Vehicle vehicle, bool canUse)
	{
		VEHICLE::SET_VEHICLE_AI_CAN_USE_EXCLUSIVE_SEATS(vehicle, canUse);
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_EXCLUSIVE_DRIVER(Vehicle vehicle, Ped PedIndex, int driverIndex)
	{
		VEHICLE::SET_VEHICLE_EXCLUSIVE_DRIVER(vehicle, PedIndex, driverIndex);
	}

	static std::tuple<bool, int> LUA_NATIVE_VEHICLE_IS_PED_EXCLUSIVE_DRIVER_OF_VEHICLE_(Ped ped, Vehicle vehicle, int outIndex)
	{
		std::tuple<bool, int> return_values;
		std::get<0>(return_values) = (bool)VEHICLE::_IS_PED_EXCLUSIVE_DRIVER_OF_VEHICLE(ped, vehicle, &outIndex);
		std::get<1>(return_values) = outIndex;

		return return_values;
	}

	static void LUA_NATIVE_VEHICLE_0xDC0556D0F484ECAA_(Any p0)
	{
		VEHICLE::_0xDC0556D0F484ECAA(p0);
	}

	static void LUA_NATIVE_VEHICLE_SET_DISABLE_SUPERDUMMY(Vehicle vehicle, bool disabled)
	{
		VEHICLE::SET_DISABLE_SUPERDUMMY(vehicle, disabled);
	}

	static float LUA_NATIVE_VEHICLE_GET_VEHICLE_BODY_HEALTH(Vehicle VehicleIndex)
	{
		auto retval = VEHICLE::GET_VEHICLE_BODY_HEALTH(VehicleIndex);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_BODY_HEALTH(Vehicle VehicleIndex, float health)
	{
		VEHICLE::SET_VEHICLE_BODY_HEALTH(VehicleIndex, health);
	}

	static Any LUA_NATIVE_VEHICLE_0xE777DDF3E78397E8_(Any p0)
	{
		auto retval = VEHICLE::_0xE777DDF3E78397E8(p0);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_BROKEN_PARTS_DONT_AFFECT_AI_HANDLING(Vehicle vehicle, bool bIgnoreBrokenParts)
	{
		VEHICLE::SET_VEHICLE_BROKEN_PARTS_DONT_AFFECT_AI_HANDLING(vehicle, bIgnoreBrokenParts);
	}

	static void LUA_NATIVE_VEHICLE_0x012701ED938B85DE_(float p0, float p1)
	{
		VEHICLE::_0x012701ED938B85DE(p0, p1);
	}

	static void LUA_NATIVE_VEHICLE_0x8379E05871AD24E0_()
	{
		VEHICLE::_0x8379E05871AD24E0();
	}

	static void LUA_NATIVE_VEHICLE_SET_HORSE_TRAFFIC_GROUPING_DISTRIBUTION_(Any p0, Any p1, Any p2, Any p3)
	{
		VEHICLE::_SET_HORSE_TRAFFIC_GROUPING_DISTRIBUTION(p0, p1, p2, p3);
	}

	static bool LUA_NATIVE_VEHICLE_ATTACH_DRAFT_VEHICLE_HARNESS_PED_(Ped mount, Vehicle draft, int harnessId)
	{
		auto retval = (bool)VEHICLE::_ATTACH_DRAFT_VEHICLE_HARNESS_PED(mount, draft, harnessId);
		return retval;
	}

	static bool LUA_NATIVE_VEHICLE_DETACH_DRAFT_VEHICLE_HARNESS_FROM_INDEX_(Vehicle draft, int harnessId)
	{
		auto retval = (bool)VEHICLE::_DETACH_DRAFT_VEHICLE_HARNESS_FROM_INDEX(draft, harnessId);
		return retval;
	}

	static bool LUA_NATIVE_VEHICLE_DETACH_DRAFT_VEHICLE_HARNESS_PED_(Vehicle draft, Ped ped)
	{
		auto retval = (bool)VEHICLE::_DETACH_DRAFT_VEHICLE_HARNESS_PED(draft, ped);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_0x0F7F603BDE08C4D3_(Any p0)
	{
		VEHICLE::_0x0F7F603BDE08C4D3(p0);
	}

	static int LUA_NATIVE_VEHICLE_GET_NUM_DRAFT_VEHICLE_HARNESS_PED_(Hash modelHash)
	{
		auto retval = VEHICLE::_GET_NUM_DRAFT_VEHICLE_HARNESS_PED(modelHash);
		return retval;
	}

	static Vector3 LUA_NATIVE_VEHICLE_GET_CHECKPOINT_TRAIN_SPAWN_LOCATION_(int trackIndex, float x, float y, float z, float distance, bool direction)
	{
		auto retval = VEHICLE::_GET_CHECKPOINT_TRAIN_SPAWN_LOCATION(trackIndex, x, y, z, distance, direction);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_0xC399CC89FBA05DA0_(Vehicle vehicle, bool p1)
	{
		VEHICLE::_0xC399CC89FBA05DA0(vehicle, p1);
	}

	static std::tuple<Entity, Entity> LUA_NATIVE_VEHICLE_GET_ROWING_OARS_(Vehicle vehicle, Entity left, Entity right)
	{
		std::tuple<Entity, Entity> return_values;
		VEHICLE::_GET_ROWING_OARS(vehicle, &left, &right);
		std::get<0>(return_values) = left;
		std::get<1>(return_values) = right;

		return return_values;
	}

	static Ped LUA_NATIVE_VEHICLE_GET_DRIVER_OF_VEHICLE(Vehicle vehicle)
	{
		auto retval = VEHICLE::GET_DRIVER_OF_VEHICLE(vehicle);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_SET_FORCE_COACH_ROBBERY_LOOT_(Vehicle vehicle, Hash coachrobberyLoot)
	{
		VEHICLE::_SET_FORCE_COACH_ROBBERY_LOOT(vehicle, coachrobberyLoot);
	}

	static Any LUA_NATIVE_VEHICLE_0x0BA4250D20007C2E_(Any p0)
	{
		auto retval = VEHICLE::_0x0BA4250D20007C2E(p0);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_0x2200AB13CBD10F4E_(Vehicle vehicle, float x, float y, float z, bool p4, float p5)
	{
		VEHICLE::_0x2200AB13CBD10F4E(vehicle, x, y, z, p4, p5);
	}

	static void LUA_NATIVE_VEHICLE_0xB42C87521D1BDD2F_(Vehicle vehicle, float x, float y, float z)
	{
		VEHICLE::_0xB42C87521D1BDD2F(vehicle, x, y, z);
	}

	static void LUA_NATIVE_VEHICLE_0xC351394B932A6A50_(Any p0)
	{
		VEHICLE::_0xC351394B932A6A50(p0);
	}

	static void LUA_NATIVE_VEHICLE_0x172E9DD35858DCD7_(Any p0)
	{
		VEHICLE::_0x172E9DD35858DCD7(p0);
	}

	static int LUA_NATIVE_VEHICLE_GET_BREAKABLE_VEHICLE_LOCKS_STATE_(Vehicle vehicle)
	{
		auto retval = VEHICLE::_GET_BREAKABLE_VEHICLE_LOCKS_STATE(vehicle);
		return retval;
	}

	static Any LUA_NATIVE_VEHICLE_0x877EA24EB1614495_(Any p0, Any p1, Any p2)
	{
		auto retval = VEHICLE::_0x877EA24EB1614495(p0, p1, p2);
		return retval;
	}

	static Object LUA_NATIVE_VEHICLE_GET_BREAKABLE_VEHICLE_LOCK_OBJECT_(Vehicle vehicle, int index)
	{
		auto retval = VEHICLE::_GET_BREAKABLE_VEHICLE_LOCK_OBJECT(vehicle, index);
		return retval;
	}

	static int LUA_NATIVE_VEHICLE_GET_NUM_BREAKABLE_VEHICLE_LOCK_OBJECTS_(Vehicle vehicle)
	{
		auto retval = VEHICLE::_GET_NUM_BREAKABLE_VEHICLE_LOCK_OBJECTS(vehicle);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_SET_BREAKABLE_VEHICLE_LOCKS_UNBREAKABLE(Vehicle vehicle, bool toggle)
	{
		VEHICLE::SET_BREAKABLE_VEHICLE_LOCKS_UNBREAKABLE(vehicle, toggle);
	}

	static void LUA_NATIVE_VEHICLE_0x9D12796EF4BF9EA9_(Any p0)
	{
		VEHICLE::_0x9D12796EF4BF9EA9(p0);
	}

	static void LUA_NATIVE_VEHICLE_0x850CE59DEC2028F3_(Vehicle vehicle, Any p1)
	{
		VEHICLE::_0x850CE59DEC2028F3(vehicle, p1);
	}

	static void LUA_NATIVE_VEHICLE_0x0355FE37240E2C77_(Any p0, Any p1)
	{
		VEHICLE::_0x0355FE37240E2C77(p0, p1);
	}

	static void LUA_NATIVE_VEHICLE_0x3D86997A86FEEF0D_(Any p0, Any p1)
	{
		VEHICLE::_0x3D86997A86FEEF0D(p0, p1);
	}

	static void LUA_NATIVE_VEHICLE_0xD826690B5CF3BEFF_(Vehicle vehicle, Any p1)
	{
		VEHICLE::_0xD826690B5CF3BEFF(vehicle, p1);
	}

	static void LUA_NATIVE_VEHICLE_BREAK_OFF_DRAFT_WHEEL_(Vehicle vehicle, int wheelIndex, float destroyingForce)
	{
		VEHICLE::_BREAK_OFF_DRAFT_WHEEL(vehicle, wheelIndex, destroyingForce);
	}

	static std::tuple<bool, int, int> LUA_NATIVE_VEHICLE_GET_DRAFT_ANIMAL_COUNT(Vehicle vehicle, int expected, int actual)
	{
		std::tuple<bool, int, int> return_values;
		std::get<0>(return_values) = (bool)VEHICLE::GET_DRAFT_ANIMAL_COUNT(vehicle, &expected, &actual);
		std::get<1>(return_values) = expected;
		std::get<2>(return_values) = actual;

		return return_values;
	}

	static void LUA_NATIVE_VEHICLE_0x165BE2001E5E4B75_(Any p0)
	{
		VEHICLE::_0x165BE2001E5E4B75(p0);
	}

	static void LUA_NATIVE_VEHICLE_SET_DRAFT_VEHICLE_ANIMALS_CAN_DETACH_(Vehicle draft, bool canDetach)
	{
		VEHICLE::_SET_DRAFT_VEHICLE_ANIMALS_CAN_DETACH(draft, canDetach);
	}

	static void LUA_NATIVE_VEHICLE_SET_DRAFT_VEHICLE_YOKE_CAN_BREAK_(Vehicle draft, bool canBreak)
	{
		VEHICLE::_SET_DRAFT_VEHICLE_YOKE_CAN_BREAK(draft, canBreak);
	}

	static void LUA_NATIVE_VEHICLE_ADD_TRAIN_TEMPORARY_STOP_(Vehicle train, int trackIndex, float x, float y, float z)
	{
		VEHICLE::_ADD_TRAIN_TEMPORARY_STOP(train, trackIndex, x, y, z);
	}

	static void LUA_NATIVE_VEHICLE_0x0794199B25E499E1_(Vehicle wagon, bool p1)
	{
		VEHICLE::_0x0794199B25E499E1(wagon, p1);
	}

	static void LUA_NATIVE_VEHICLE_0x73118A3EE9C9B6DB_(Vehicle wagon, int p1, bool p2)
	{
		VEHICLE::_0x73118A3EE9C9B6DB(wagon, p1, p2);
	}

	static bool LUA_NATIVE_VEHICLE_0xE1C0F8781BF130C2_(Vehicle wagon, int p1)
	{
		auto retval = (bool)VEHICLE::_0xE1C0F8781BF130C2(wagon, p1);
		return retval;
	}

	static bool LUA_NATIVE_VEHICLE_IS_VEHICLE_WHEEL_DESTROYED_(Vehicle vehicle, int wheel)
	{
		auto retval = (bool)VEHICLE::_IS_VEHICLE_WHEEL_DESTROYED(vehicle, wheel);
		return retval;
	}

	static bool LUA_NATIVE_VEHICLE_0x18714953CCED17D3_(Vehicle vehicle)
	{
		auto retval = (bool)VEHICLE::_0x18714953CCED17D3(vehicle);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_0x41F0B254DDF71473_(Vehicle wagon)
	{
		VEHICLE::_0x41F0B254DDF71473(wagon);
	}

	static void LUA_NATIVE_VEHICLE_SET_VEHICLE_DETERIORATION_(Vehicle vehicle, float amount, int p2, bool p3)
	{
		VEHICLE::_SET_VEHICLE_DETERIORATION(vehicle, amount, p2, p3);
	}

	static bool LUA_NATIVE_VEHICLE_IS_VEHICLE_DOOR_BROKEN_(Vehicle vehicle, int doorId)
	{
		auto retval = (bool)VEHICLE::_IS_VEHICLE_DOOR_BROKEN(vehicle, doorId);
		return retval;
	}

	static Entity LUA_NATIVE_VEHICLE_BREAK_OFF_VEHICLE_WHEEL_(Vehicle vehicle, int wheelIndex)
	{
		auto retval = VEHICLE::_BREAK_OFF_VEHICLE_WHEEL(vehicle, wheelIndex);
		return retval;
	}

	static bool LUA_NATIVE_VEHICLE_DELETE_VEHICLE_LANTERNS_(Vehicle vehicle)
	{
		auto retval = (bool)VEHICLE::_DELETE_VEHICLE_LANTERNS(vehicle);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_0x6DE072AC8A95FFC1_(Vehicle vehicle, bool p1)
	{
		VEHICLE::_0x6DE072AC8A95FFC1(vehicle, p1);
	}

	static void LUA_NATIVE_VEHICLE_SET_DRAFT_VEHICLE_DESIRED_SPEED_(Vehicle vehicle, float speed)
	{
		VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(vehicle, speed);
	}

	static float LUA_NATIVE_VEHICLE_GET_DRAFT_VEHICLE_DESIRED_SPEED_(Vehicle vehicle)
	{
		auto retval = VEHICLE::_GET_DRAFT_VEHICLE_DESIRED_SPEED(vehicle);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_0xC4A2C11FC0D41916_(Vehicle vehicle, bool p1)
	{
		VEHICLE::_0xC4A2C11FC0D41916(vehicle, p1);
	}

	static void LUA_NATIVE_VEHICLE_0xFC4F15A7DDDC47B1_(Vehicle vehicle, bool p1)
	{
		VEHICLE::_0xFC4F15A7DDDC47B1(vehicle, p1);
	}

	static void LUA_NATIVE_VEHICLE_0x4C60C333F9CCA2B6_(Vehicle vehicle, bool p1)
	{
		VEHICLE::_0x4C60C333F9CCA2B6(vehicle, p1);
	}

	static void LUA_NATIVE_VEHICLE_0xCF342503CA4C8DF1_(Vehicle vehicle, float p1)
	{
		VEHICLE::_0xCF342503CA4C8DF1(vehicle, p1);
	}

	static void LUA_NATIVE_VEHICLE_0x06A09A6E0C6D2A84_(Vehicle train, bool p1)
	{
		VEHICLE::_0x06A09A6E0C6D2A84(train, p1);
	}

	static void LUA_NATIVE_VEHICLE_0xAE7E66A61E7C17A5_(Vehicle train, bool p1)
	{
		VEHICLE::_0xAE7E66A61E7C17A5(train, p1);
	}

	static void LUA_NATIVE_VEHICLE_0xEF28A614B4B264B8_(Vehicle train, bool p1)
	{
		VEHICLE::_0xEF28A614B4B264B8(train, p1);
	}

	static void LUA_NATIVE_VEHICLE_0x04F0579DBDD32F34_(Vehicle vehicle)
	{
		VEHICLE::_0x04F0579DBDD32F34(vehicle);
	}

	static void LUA_NATIVE_VEHICLE_0x12F6C6ED3EFF42DE_(Vehicle vehicle, float x, float y, float z)
	{
		VEHICLE::_0x12F6C6ED3EFF42DE(vehicle, x, y, z);
	}

	static void LUA_NATIVE_VEHICLE_0x87B974E54C71BA7B_(Vehicle vehicle, bool p1)
	{
		VEHICLE::_0x87B974E54C71BA7B(vehicle, p1);
	}

	static bool LUA_NATIVE_VEHICLE_HAS_TRAIN_LOADED_(Vehicle train)
	{
		auto retval = (bool)VEHICLE::_HAS_TRAIN_LOADED(train);
		return retval;
	}

	static Vehicle LUA_NATIVE_VEHICLE_CREATE_MISSION_TRAIN_(Hash configHash, float x, float y, float z, bool direction, bool passengers, bool p6, bool conductor)
	{
		auto retval = VEHICLE::_CREATE_MISSION_TRAIN(configHash, x, y, z, direction, passengers, p6, conductor);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_0xD1EFA8D68BF5D63D_(Any p0, Any p1, Any p2, Any p3)
	{
		VEHICLE::_0xD1EFA8D68BF5D63D(p0, p1, p2, p3);
	}

	static Any LUA_NATIVE_VEHICLE_0x1121B07088ED3013_(Any p0)
	{
		auto retval = VEHICLE::_0x1121B07088ED3013(p0);
		return retval;
	}

	static Any LUA_NATIVE_VEHICLE_0x42404D57D621601A_(Any p0)
	{
		auto retval = VEHICLE::_0x42404D57D621601A(p0);
		return retval;
	}

	static Any LUA_NATIVE_VEHICLE_0x288CBB414C3C2FBB_(Any p0)
	{
		auto retval = VEHICLE::_0x288CBB414C3C2FBB(p0);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_0x6FD7BDF10304363A_(Any p0, Any p1)
	{
		VEHICLE::_0x6FD7BDF10304363A(p0, p1);
	}

	static void LUA_NATIVE_VEHICLE_0xCEB1F1EED484A5B4_(Any p0, Any p1)
	{
		VEHICLE::_0xCEB1F1EED484A5B4(p0, p1);
	}

	static Any LUA_NATIVE_VEHICLE_0xF57DB8E83DCD8349_(Any p0)
	{
		auto retval = VEHICLE::_0xF57DB8E83DCD8349(p0);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_SET_BALLOON_HOVER_STATE_(Vehicle balloon, float p1)
	{
		VEHICLE::_SET_BALLOON_HOVER_STATE(balloon, p1);
	}

	static void LUA_NATIVE_VEHICLE_SET_DRAFT_VEHICLE_ALLOW_DRAFT_ANIMAL_AUTO_CREATION_(Vehicle vehicle, bool allow)
	{
		VEHICLE::_SET_DRAFT_VEHICLE_ALLOW_DRAFT_ANIMAL_AUTO_CREATION(vehicle, allow);
	}

	static void LUA_NATIVE_VEHICLE_0x6835AFEA10E186F4_(Any p0, Any p1)
	{
		VEHICLE::_0x6835AFEA10E186F4(p0, p1);
	}

	static void LUA_NATIVE_VEHICLE_SET_DRAFT_ANIMAL_RANDOM_SEED_(Vehicle vehicle, int seed)
	{
		VEHICLE::_SET_DRAFT_ANIMAL_RANDOM_SEED(vehicle, seed);
	}

	static Any LUA_NATIVE_VEHICLE_0x14DA8C4BC2CCD90A_(Any p0)
	{
		auto retval = VEHICLE::_0x14DA8C4BC2CCD90A(p0);
		return retval;
	}

	static Any LUA_NATIVE_VEHICLE_0xCACAB2B123BBDBD6_(Any p0, Any p1, Any p2)
	{
		auto retval = VEHICLE::_0xCACAB2B123BBDBD6(p0, p1, p2);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_0xFF2B1F59FB892F14_(Any p0)
	{
		VEHICLE::_0xFF2B1F59FB892F14(p0);
	}

	static void LUA_NATIVE_VEHICLE_0x5AADC7BBBB1BCEEB_(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		VEHICLE::_0x5AADC7BBBB1BCEEB(p0, p1, p2, p3, p4);
	}

	static bool LUA_NATIVE_VEHICLE_GET_VEHICLE_IS_PROP_SET_APPLIED_(Vehicle vehicle)
	{
		auto retval = (bool)VEHICLE::_GET_VEHICLE_IS_PROP_SET_APPLIED(vehicle);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_SET_BATCH_TARP_HEIGHT_(Vehicle vehicle, float height, bool immediately)
	{
		VEHICLE::_SET_BATCH_TARP_HEIGHT(vehicle, height, immediately);
	}

	static void LUA_NATIVE_VEHICLE_0x07E2E21E799080A0_(Any p0, Any p1)
	{
		VEHICLE::_0x07E2E21E799080A0(p0, p1);
	}

	static void LUA_NATIVE_VEHICLE_0xC2E62678D602853C_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		VEHICLE::_0xC2E62678D602853C(p0, p1, p2, p3, p4, p5, p6);
	}

	static void LUA_NATIVE_VEHICLE_0x873AAF600CC36DAC_(Any p0)
	{
		VEHICLE::_0x873AAF600CC36DAC(p0);
	}

	static Any LUA_NATIVE_VEHICLE_0x51C7694E140FAE43_(Any p0)
	{
		auto retval = VEHICLE::_0x51C7694E140FAE43(p0);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_0x8DECD262602548B9_(Any p0, Any p1)
	{
		VEHICLE::_0x8DECD262602548B9(p0, p1);
	}

	static void LUA_NATIVE_VEHICLE_0xCBC7B6F9A56B79F6_(Any p0, Any p1)
	{
		VEHICLE::_0xCBC7B6F9A56B79F6(p0, p1);
	}

	static bool LUA_NATIVE_VEHICLE_0x37D238BE69F7378A_(int trackIndex)
	{
		auto retval = (bool)VEHICLE::_0x37D238BE69F7378A(trackIndex);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_0x703D4FB366DA4452_(Any p0, Any p1)
	{
		VEHICLE::_0x703D4FB366DA4452(p0, p1);
	}

	static void LUA_NATIVE_VEHICLE_0x762FDC4C19E5A981_(Entity trainCarriage, bool p1)
	{
		VEHICLE::_0x762FDC4C19E5A981(trainCarriage, p1);
	}

	static Any LUA_NATIVE_VEHICLE_0x2045429505158D1A_(Any p0)
	{
		auto retval = VEHICLE::_0x2045429505158D1A(p0);
		return retval;
	}

	static void LUA_NATIVE_VEHICLE_0x13EB275BF81636D1_(Any p0, Any p1)
	{
		VEHICLE::_0x13EB275BF81636D1(p0, p1);
	}

	void init_native_binding_VEHICLE(sol::state& L)
	{
		auto VEHICLE = L["VEHICLE"].get_or_create<sol::table>();
		VEHICLE.set_function("0x6355602C02EDC6DF_", LUA_NATIVE_VEHICLE_0x6355602C02EDC6DF_);
		VEHICLE.set_function("SET_VEHICLE_IS_IN_HURRY_", LUA_NATIVE_VEHICLE_SET_VEHICLE_IS_IN_HURRY_);
		VEHICLE.set_function("CREATE_VEHICLE", LUA_NATIVE_VEHICLE_CREATE_VEHICLE);
		VEHICLE.set_function("CREATE_DRAFT_VEHICLE_", LUA_NATIVE_VEHICLE_CREATE_DRAFT_VEHICLE_);
		VEHICLE.set_function("DELETE_VEHICLE", LUA_NATIVE_VEHICLE_DELETE_VEHICLE);
		VEHICLE.set_function("FADE_AND_DESTROY_VEHICLE_", LUA_NATIVE_VEHICLE_FADE_AND_DESTROY_VEHICLE_);
		VEHICLE.set_function("IS_VEHICLE_FADING_OUT_", LUA_NATIVE_VEHICLE_IS_VEHICLE_FADING_OUT_);
		VEHICLE.set_function("SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON", LUA_NATIVE_VEHICLE_SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON);
		VEHICLE.set_function("SET_VEHICLE_ALLOW_NO_PASSENGERS_LOCKON", LUA_NATIVE_VEHICLE_SET_VEHICLE_ALLOW_NO_PASSENGERS_LOCKON);
		VEHICLE.set_function("IS_VEHICLE_MODEL", LUA_NATIVE_VEHICLE_IS_VEHICLE_MODEL);
		VEHICLE.set_function("SET_ALL_VEHICLE_GENERATORS_DISABLED_FOR_VOLUME_", LUA_NATIVE_VEHICLE_SET_ALL_VEHICLE_GENERATORS_DISABLED_FOR_VOLUME_);
		VEHICLE.set_function("SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA", LUA_NATIVE_VEHICLE_SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA);
		VEHICLE.set_function("SET_ALL_VEHICLE_GENERATORS_ACTIVE", LUA_NATIVE_VEHICLE_SET_ALL_VEHICLE_GENERATORS_ACTIVE);
		VEHICLE.set_function("SET_VEHICLE_ON_GROUND_PROPERLY", LUA_NATIVE_VEHICLE_SET_VEHICLE_ON_GROUND_PROPERLY);
		VEHICLE.set_function("IS_VEHICLE_STOPPED", LUA_NATIVE_VEHICLE_IS_VEHICLE_STOPPED);
		VEHICLE.set_function("GET_VEHICLE_NUMBER_OF_PASSENGERS", LUA_NATIVE_VEHICLE_GET_VEHICLE_NUMBER_OF_PASSENGERS);
		VEHICLE.set_function("GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS", LUA_NATIVE_VEHICLE_GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS);
		VEHICLE.set_function("GET_VEHICLE_MODEL_NUMBER_OF_SEATS", LUA_NATIVE_VEHICLE_GET_VEHICLE_MODEL_NUMBER_OF_SEATS);
		VEHICLE.set_function("IS_SEAT_WARP_ONLY", LUA_NATIVE_VEHICLE_IS_SEAT_WARP_ONLY);
		VEHICLE.set_function("GET_VEHICLE_TURRET_SEAT_", LUA_NATIVE_VEHICLE_GET_VEHICLE_TURRET_SEAT_);
		VEHICLE.set_function("0xA9E185D498B9AC67_", LUA_NATIVE_VEHICLE_0xA9E185D498B9AC67_);
		VEHICLE.set_function("SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME", LUA_NATIVE_VEHICLE_SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME);
		VEHICLE.set_function("SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME", LUA_NATIVE_VEHICLE_SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME);
		VEHICLE.set_function("SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME", LUA_NATIVE_VEHICLE_SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME);
		VEHICLE.set_function("SET_DISABLE_RANDOM_TRAINS_THIS_FRAME", LUA_NATIVE_VEHICLE_SET_DISABLE_RANDOM_TRAINS_THIS_FRAME);
		VEHICLE.set_function("SET_VEHICLE_DOORS_LOCKED", LUA_NATIVE_VEHICLE_SET_VEHICLE_DOORS_LOCKED);
		VEHICLE.set_function("SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED", LUA_NATIVE_VEHICLE_SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED);
		VEHICLE.set_function("SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER", LUA_NATIVE_VEHICLE_SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER);
		VEHICLE.set_function("GET_VEHICLE_DOORS_LOCKED_FOR_PLAYER", LUA_NATIVE_VEHICLE_GET_VEHICLE_DOORS_LOCKED_FOR_PLAYER);
		VEHICLE.set_function("SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS", LUA_NATIVE_VEHICLE_SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS);
		VEHICLE.set_function("SET_VEHICLE_DOORS_LOCKED_FOR_TEAM", LUA_NATIVE_VEHICLE_SET_VEHICLE_DOORS_LOCKED_FOR_TEAM);
		VEHICLE.set_function("GET_VEHICLE_DOORS_LOCKED_FOR_TEAM_", LUA_NATIVE_VEHICLE_GET_VEHICLE_DOORS_LOCKED_FOR_TEAM_);
		VEHICLE.set_function("EXPLODE_VEHICLE", LUA_NATIVE_VEHICLE_EXPLODE_VEHICLE);
		VEHICLE.set_function("0x750D42C013F64AE7_", LUA_NATIVE_VEHICLE_0x750D42C013F64AE7_);
		VEHICLE.set_function("0xE78993FF9022C064_", LUA_NATIVE_VEHICLE_0xE78993FF9022C064_);
		VEHICLE.set_function("0x9868C0D0134855F7_", LUA_NATIVE_VEHICLE_0x9868C0D0134855F7_);
		VEHICLE.set_function("HIDE_HORSE_REINS_", LUA_NATIVE_VEHICLE_HIDE_HORSE_REINS_);
		VEHICLE.set_function("SHOW_HORSE_REINS_", LUA_NATIVE_VEHICLE_SHOW_HORSE_REINS_);
		VEHICLE.set_function("0xD21A3D421E7F09F7_", LUA_NATIVE_VEHICLE_0xD21A3D421E7F09F7_);
		VEHICLE.set_function("0xA13028E22564A1BD_", LUA_NATIVE_VEHICLE_0xA13028E22564A1BD_);
		VEHICLE.set_function("0x485B05EF05B9AEE9_", LUA_NATIVE_VEHICLE_0x485B05EF05B9AEE9_);
		VEHICLE.set_function("SET_BOAT_ANCHOR", LUA_NATIVE_VEHICLE_SET_BOAT_ANCHOR);
		VEHICLE.set_function("0x6B53F4B811E583D2_", LUA_NATIVE_VEHICLE_0x6B53F4B811E583D2_);
		VEHICLE.set_function("CAN_ANCHOR_BOAT_HERE", LUA_NATIVE_VEHICLE_CAN_ANCHOR_BOAT_HERE);
		VEHICLE.set_function("SET_BOAT_REMAINS_ANCHORED_WHILE_PLAYER_IS_DRIVER", LUA_NATIVE_VEHICLE_SET_BOAT_REMAINS_ANCHORED_WHILE_PLAYER_IS_DRIVER);
		VEHICLE.set_function("SET_FORCE_LOW_LOD_ANCHOR_MODE", LUA_NATIVE_VEHICLE_SET_FORCE_LOW_LOD_ANCHOR_MODE);
		VEHICLE.set_function("SET_BOAT_LOW_LOD_ANCHOR_DISTANCE", LUA_NATIVE_VEHICLE_SET_BOAT_LOW_LOD_ANCHOR_DISTANCE);
		VEHICLE.set_function("SET_BOAT_SINKS_WHEN_WRECKED", LUA_NATIVE_VEHICLE_SET_BOAT_SINKS_WHEN_WRECKED);
		VEHICLE.set_function("SET_FORCE_HIGH_LOD_VEHICLE_", LUA_NATIVE_VEHICLE_SET_FORCE_HIGH_LOD_VEHICLE_);
		VEHICLE.set_function("0x98A7598C579EE871_", LUA_NATIVE_VEHICLE_0x98A7598C579EE871_);
		VEHICLE.set_function("0x9E8711C81AA17876_", LUA_NATIVE_VEHICLE_0x9E8711C81AA17876_);
		VEHICLE.set_function("SET_VEHICLE_STRONG", LUA_NATIVE_VEHICLE_SET_VEHICLE_STRONG);
		VEHICLE.set_function("IS_VEHICLE_SEAT_FREE", LUA_NATIVE_VEHICLE_IS_VEHICLE_SEAT_FREE);
		VEHICLE.set_function("GET_PED_IN_VEHICLE_SEAT", LUA_NATIVE_VEHICLE_GET_PED_IN_VEHICLE_SEAT);
		VEHICLE.set_function("GET_LAST_PED_IN_VEHICLE_SEAT", LUA_NATIVE_VEHICLE_GET_LAST_PED_IN_VEHICLE_SEAT);
		VEHICLE.set_function("IS_DRAFT_VEHICLE", LUA_NATIVE_VEHICLE_IS_DRAFT_VEHICLE);
		VEHICLE.set_function("GET_PED_IN_DRAFT_HARNESS_", LUA_NATIVE_VEHICLE_GET_PED_IN_DRAFT_HARNESS_);
		VEHICLE.set_function("SET_VEHICLE_FORWARD_SPEED", LUA_NATIVE_VEHICLE_SET_VEHICLE_FORWARD_SPEED);
		VEHICLE.set_function("BRING_VEHICLE_TO_HALT", LUA_NATIVE_VEHICLE_BRING_VEHICLE_TO_HALT);
		VEHICLE.set_function("IS_VEHICLE_BROUGHT_TO_HALT_", LUA_NATIVE_VEHICLE_IS_VEHICLE_BROUGHT_TO_HALT_);
		VEHICLE.set_function("STOP_BRINGING_VEHICLE_TO_HALT", LUA_NATIVE_VEHICLE_STOP_BRINGING_VEHICLE_TO_HALT);
		VEHICLE.set_function("0xE12F5ED49F44D40D_", LUA_NATIVE_VEHICLE_0xE12F5ED49F44D40D_);
		VEHICLE.set_function("0xF6E3D38869D0F7AD_", LUA_NATIVE_VEHICLE_0xF6E3D38869D0F7AD_);
		VEHICLE.set_function("SET_VEHICLE_DOORS_SHUT", LUA_NATIVE_VEHICLE_SET_VEHICLE_DOORS_SHUT);
		VEHICLE.set_function("SET_VEHICLE_TYRES_CAN_BURST", LUA_NATIVE_VEHICLE_SET_VEHICLE_TYRES_CAN_BURST);
		VEHICLE.set_function("SET_VEHICLE_WHEELS_CAN_BREAK", LUA_NATIVE_VEHICLE_SET_VEHICLE_WHEELS_CAN_BREAK);
		VEHICLE.set_function("SET_VEHICLE_DOORS_TO_OPEN_AT_ANY_DISTANCE", LUA_NATIVE_VEHICLE_SET_VEHICLE_DOORS_TO_OPEN_AT_ANY_DISTANCE);
		VEHICLE.set_function("SET_VEHICLE_DOOR_OPEN", LUA_NATIVE_VEHICLE_SET_VEHICLE_DOOR_OPEN);
		VEHICLE.set_function("REMOVE_VEHICLE_WINDOW", LUA_NATIVE_VEHICLE_REMOVE_VEHICLE_WINDOW);
		VEHICLE.set_function("0x8878FF3EEE2868A9_", LUA_NATIVE_VEHICLE_0x8878FF3EEE2868A9_);
		VEHICLE.set_function("SET_VEHICLE_DIRT_LEVEL_2_", LUA_NATIVE_VEHICLE_SET_VEHICLE_DIRT_LEVEL_2_);
		VEHICLE.set_function("SET_VEHICLE_MUD_LEVEL_", LUA_NATIVE_VEHICLE_SET_VEHICLE_MUD_LEVEL_);
		VEHICLE.set_function("SET_VEHICLE_LIGHTS", LUA_NATIVE_VEHICLE_SET_VEHICLE_LIGHTS);
		VEHICLE.set_function("SET_RANDOM_TRAINS", LUA_NATIVE_VEHICLE_SET_RANDOM_TRAINS);
		VEHICLE.set_function("0x331CBD247FC5DAA8_", LUA_NATIVE_VEHICLE_0x331CBD247FC5DAA8_);
		VEHICLE.set_function("0x0516FAE561276EFC_", LUA_NATIVE_VEHICLE_0x0516FAE561276EFC_);
		VEHICLE.set_function("GET_TRAIN_TRACK_FROM_TRAIN_VEHICLE_", LUA_NATIVE_VEHICLE_GET_TRAIN_TRACK_FROM_TRAIN_VEHICLE_);
		VEHICLE.set_function("GET_TRAIN_VEHICLE_FROM_TRACK_INDEX_", LUA_NATIVE_VEHICLE_GET_TRAIN_VEHICLE_FROM_TRACK_INDEX_);
		VEHICLE.set_function("0x15206E88FF7617DF_", LUA_NATIVE_VEHICLE_0x15206E88FF7617DF_);
		VEHICLE.set_function("0xA7966807953A18EE_", LUA_NATIVE_VEHICLE_0xA7966807953A18EE_);
		VEHICLE.set_function("0x6B34BE961F639E21_", LUA_NATIVE_VEHICLE_0x6B34BE961F639E21_);
		VEHICLE.set_function("0xE6BD7DD3FD474415_", LUA_NATIVE_VEHICLE_0xE6BD7DD3FD474415_);
		VEHICLE.set_function("0x615B3B8E73634509_", LUA_NATIVE_VEHICLE_0x615B3B8E73634509_);
		VEHICLE.set_function("0x38E7DD70A242D5CB_", LUA_NATIVE_VEHICLE_0x38E7DD70A242D5CB_);
		VEHICLE.set_function("0x63509DDF102E08E8_", LUA_NATIVE_VEHICLE_0x63509DDF102E08E8_);
		VEHICLE.set_function("0x7408B5C66BA31ADB_", LUA_NATIVE_VEHICLE_0x7408B5C66BA31ADB_);
		VEHICLE.set_function("0x41365DB586CD9E8E_", LUA_NATIVE_VEHICLE_0x41365DB586CD9E8E_);
		VEHICLE.set_function("0xD0AABE5B9F8FA589_", LUA_NATIVE_VEHICLE_0xD0AABE5B9F8FA589_);
		VEHICLE.set_function("0x427C919E9809E370_", LUA_NATIVE_VEHICLE_0x427C919E9809E370_);
		VEHICLE.set_function("DOES_TRAIN_EXIST_ON_TRACK_", LUA_NATIVE_VEHICLE_DOES_TRAIN_EXIST_ON_TRACK_);
		VEHICLE.set_function("GET_TRAIN_POSITION_ON_TRACK_", LUA_NATIVE_VEHICLE_GET_TRAIN_POSITION_ON_TRACK_);
		VEHICLE.set_function("0xB4241AD8F5AEE9ED_", LUA_NATIVE_VEHICLE_0xB4241AD8F5AEE9ED_);
		VEHICLE.set_function("0xA230A5DDE12ED374_", LUA_NATIVE_VEHICLE_0xA230A5DDE12ED374_);
		VEHICLE.set_function("0x0D5FDF0D36FA10CD_", LUA_NATIVE_VEHICLE_0x0D5FDF0D36FA10CD_);
		VEHICLE.set_function("0xE682002DB1F30669_", LUA_NATIVE_VEHICLE_0xE682002DB1F30669_);
		VEHICLE.set_function("0x718EB706B6E998A0_", LUA_NATIVE_VEHICLE_0x718EB706B6E998A0_);
		VEHICLE.set_function("0xF05DFAF1ADFEF2CD_", LUA_NATIVE_VEHICLE_0xF05DFAF1ADFEF2CD_);
		VEHICLE.set_function("0xD1DF5E54F4ACBE1A_", LUA_NATIVE_VEHICLE_0xD1DF5E54F4ACBE1A_);
		VEHICLE.set_function("0x0FDDEE66E3465726_", LUA_NATIVE_VEHICLE_0x0FDDEE66E3465726_);
		VEHICLE.set_function("0x4C05B42A8D937796_", LUA_NATIVE_VEHICLE_0x4C05B42A8D937796_);
		VEHICLE.set_function("0xB961DD799A837BD7_", LUA_NATIVE_VEHICLE_0xB961DD799A837BD7_);
		VEHICLE.set_function("0x16B86A49E072AA85_", LUA_NATIVE_VEHICLE_0x16B86A49E072AA85_);
		VEHICLE.set_function("0x2A7413168F6CD5A8_", LUA_NATIVE_VEHICLE_0x2A7413168F6CD5A8_);
		VEHICLE.set_function("0xFFFE15B433300B8C_", LUA_NATIVE_VEHICLE_0xFFFE15B433300B8C_);
		VEHICLE.set_function("0x6EA1273D525427F4_", LUA_NATIVE_VEHICLE_0x6EA1273D525427F4_);
		VEHICLE.set_function("0x7BE0746539DEF0C8_", LUA_NATIVE_VEHICLE_0x7BE0746539DEF0C8_);
		VEHICLE.set_function("0x3137EDC899E6DAE4_", LUA_NATIVE_VEHICLE_0x3137EDC899E6DAE4_);
		VEHICLE.set_function("0x6C87F49BFA181DB5_", LUA_NATIVE_VEHICLE_0x6C87F49BFA181DB5_);
		VEHICLE.set_function("GET_TRACK_INDEX_FROM_COORDS_", LUA_NATIVE_VEHICLE_GET_TRACK_INDEX_FROM_COORDS_);
		VEHICLE.set_function("GET_NEAREST_TRAIN_TRACK_POSITION_", LUA_NATIVE_VEHICLE_GET_NEAREST_TRAIN_TRACK_POSITION_);
		VEHICLE.set_function("DELETE_ALL_TRAINS", LUA_NATIVE_VEHICLE_DELETE_ALL_TRAINS);
		VEHICLE.set_function("0x0E558D3A49D759D6_", LUA_NATIVE_VEHICLE_0x0E558D3A49D759D6_);
		VEHICLE.set_function("0xD4907EF4334C7602_", LUA_NATIVE_VEHICLE_0xD4907EF4334C7602_);
		VEHICLE.set_function("0x68830738A6BFB370_", LUA_NATIVE_VEHICLE_0x68830738A6BFB370_);
		VEHICLE.set_function("SET_TRAIN_SPEED", LUA_NATIVE_VEHICLE_SET_TRAIN_SPEED);
		VEHICLE.set_function("SET_TRAIN_MAX_SPEED_", LUA_NATIVE_VEHICLE_SET_TRAIN_MAX_SPEED_);
		VEHICLE.set_function("SET_TRAIN_CRUISE_SPEED", LUA_NATIVE_VEHICLE_SET_TRAIN_CRUISE_SPEED);
		VEHICLE.set_function("GET_TRAIN_CARRIAGE_TRAILER_NUMBER_", LUA_NATIVE_VEHICLE_GET_TRAIN_CARRIAGE_TRAILER_NUMBER_);
		VEHICLE.set_function("GET_TRAIN_MODEL_FROM_TRAIN_CONFIG_BY_CAR_INDEX_", LUA_NATIVE_VEHICLE_GET_TRAIN_MODEL_FROM_TRAIN_CONFIG_BY_CAR_INDEX_);
		VEHICLE.set_function("GET_NUM_CARS_FROM_TRAIN_CONFIG_", LUA_NATIVE_VEHICLE_GET_NUM_CARS_FROM_TRAIN_CONFIG_);
		VEHICLE.set_function("GET_TRAIN_CAR_", LUA_NATIVE_VEHICLE_GET_TRAIN_CAR_);
		VEHICLE.set_function("SET_TRAIN_STOPS_FOR_STATIONS_", LUA_NATIVE_VEHICLE_SET_TRAIN_STOPS_FOR_STATIONS_);
		VEHICLE.set_function("0xDD100CE1EBBF37E3_", LUA_NATIVE_VEHICLE_0xDD100CE1EBBF37E3_);
		VEHICLE.set_function("0x160C1B5AB48AB87C_", LUA_NATIVE_VEHICLE_0x160C1B5AB48AB87C_);
		VEHICLE.set_function("IS_TRAIN_WAITING_AT_STATION", LUA_NATIVE_VEHICLE_IS_TRAIN_WAITING_AT_STATION);
		VEHICLE.set_function("SET_TRAIN_HALT_", LUA_NATIVE_VEHICLE_SET_TRAIN_HALT_);
		VEHICLE.set_function("SET_TRAIN_LEAVE_STATION_", LUA_NATIVE_VEHICLE_SET_TRAIN_LEAVE_STATION_);
		VEHICLE.set_function("SET_RANDOM_BOATS", LUA_NATIVE_VEHICLE_SET_RANDOM_BOATS);
		VEHICLE.set_function("REQUEST_VEHICLE_RECORDING", LUA_NATIVE_VEHICLE_REQUEST_VEHICLE_RECORDING);
		VEHICLE.set_function("HAS_VEHICLE_RECORDING_BEEN_LOADED", LUA_NATIVE_VEHICLE_HAS_VEHICLE_RECORDING_BEEN_LOADED);
		VEHICLE.set_function("REMOVE_VEHICLE_RECORDING", LUA_NATIVE_VEHICLE_REMOVE_VEHICLE_RECORDING);
		VEHICLE.set_function("GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME", LUA_NATIVE_VEHICLE_GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME);
		VEHICLE.set_function("GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME", LUA_NATIVE_VEHICLE_GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME);
		VEHICLE.set_function("GET_TIME_POSITION_IN_RECORDING", LUA_NATIVE_VEHICLE_GET_TIME_POSITION_IN_RECORDING);
		VEHICLE.set_function("START_PLAYBACK_RECORDED_VEHICLE", LUA_NATIVE_VEHICLE_START_PLAYBACK_RECORDED_VEHICLE);
		VEHICLE.set_function("FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE", LUA_NATIVE_VEHICLE_FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE);
		VEHICLE.set_function("STOP_PLAYBACK_RECORDED_VEHICLE", LUA_NATIVE_VEHICLE_STOP_PLAYBACK_RECORDED_VEHICLE);
		VEHICLE.set_function("IS_PLAYBACK_GOING_ON_FOR_VEHICLE", LUA_NATIVE_VEHICLE_IS_PLAYBACK_GOING_ON_FOR_VEHICLE);
		VEHICLE.set_function("IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE", LUA_NATIVE_VEHICLE_IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE);
		VEHICLE.set_function("SET_PLAYBACK_SPEED", LUA_NATIVE_VEHICLE_SET_PLAYBACK_SPEED);
		VEHICLE.set_function("SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE", LUA_NATIVE_VEHICLE_SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE);
		VEHICLE.set_function("GET_CLOSEST_VEHICLE", LUA_NATIVE_VEHICLE_GET_CLOSEST_VEHICLE);
		VEHICLE.set_function("GET_TRAIN_CARRIAGE", LUA_NATIVE_VEHICLE_GET_TRAIN_CARRIAGE);
		VEHICLE.set_function("DELETE_MISSION_TRAIN", LUA_NATIVE_VEHICLE_DELETE_MISSION_TRAIN);
		VEHICLE.set_function("SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED", LUA_NATIVE_VEHICLE_SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED);
		VEHICLE.set_function("SET_MISSION_TRAIN_COORDS", LUA_NATIVE_VEHICLE_SET_MISSION_TRAIN_COORDS);
		VEHICLE.set_function("SET_MISSION_TRAIN_WARP_TO_COORDS_", LUA_NATIVE_VEHICLE_SET_MISSION_TRAIN_WARP_TO_COORDS_);
		VEHICLE.set_function("0xA72B1BF3857B94D7_", LUA_NATIVE_VEHICLE_0xA72B1BF3857B94D7_);
		VEHICLE.set_function("IS_THIS_MODEL_A_DRAFT_VEHICLE_", LUA_NATIVE_VEHICLE_IS_THIS_MODEL_A_DRAFT_VEHICLE_);
		VEHICLE.set_function("IS_THIS_MODEL_A_BOAT", LUA_NATIVE_VEHICLE_IS_THIS_MODEL_A_BOAT);
		VEHICLE.set_function("IS_THIS_MODEL_A_TRAIN", LUA_NATIVE_VEHICLE_IS_THIS_MODEL_A_TRAIN);
		VEHICLE.set_function("SET_VEHICLE_CAN_BE_TARGETTED", LUA_NATIVE_VEHICLE_SET_VEHICLE_CAN_BE_TARGETTED);
		VEHICLE.set_function("SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER", LUA_NATIVE_VEHICLE_SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER);
		VEHICLE.set_function("SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED", LUA_NATIVE_VEHICLE_SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED);
		VEHICLE.set_function("SET_VEHICLE_HAS_UNBREAKABLE_LIGHTS", LUA_NATIVE_VEHICLE_SET_VEHICLE_HAS_UNBREAKABLE_LIGHTS);
		VEHICLE.set_function("SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER", LUA_NATIVE_VEHICLE_SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER);
		VEHICLE.set_function("SET_VEHICLE_CAN_EJECT_PASSENGERS_IF_LOCKED", LUA_NATIVE_VEHICLE_SET_VEHICLE_CAN_EJECT_PASSENGERS_IF_LOCKED);
		VEHICLE.set_function("SET_VEHICLE_DIRT_LEVEL", LUA_NATIVE_VEHICLE_SET_VEHICLE_DIRT_LEVEL);
		VEHICLE.set_function("IS_VEHICLE_DOOR_FULLY_OPEN", LUA_NATIVE_VEHICLE_IS_VEHICLE_DOOR_FULLY_OPEN);
		VEHICLE.set_function("SET_VEHICLE_ENGINE_ON", LUA_NATIVE_VEHICLE_SET_VEHICLE_ENGINE_ON);
		VEHICLE.set_function("SET_VEHICLE_UNDRIVEABLE", LUA_NATIVE_VEHICLE_SET_VEHICLE_UNDRIVEABLE);
		VEHICLE.set_function("SET_VEHICLE_PROVIDES_COVER", LUA_NATIVE_VEHICLE_SET_VEHICLE_PROVIDES_COVER);
		VEHICLE.set_function("0x3053064F909B5F42_", LUA_NATIVE_VEHICLE_0x3053064F909B5F42_);
		VEHICLE.set_function("SET_VEHICLE_DOOR_CONTROL", LUA_NATIVE_VEHICLE_SET_VEHICLE_DOOR_CONTROL);
		VEHICLE.set_function("SET_VEHICLE_DOOR_LATCHED", LUA_NATIVE_VEHICLE_SET_VEHICLE_DOOR_LATCHED);
		VEHICLE.set_function("SET_VEHICLE_DOOR_SHUT", LUA_NATIVE_VEHICLE_SET_VEHICLE_DOOR_SHUT);
		VEHICLE.set_function("SET_VEHICLE_DOOR_BROKEN", LUA_NATIVE_VEHICLE_SET_VEHICLE_DOOR_BROKEN);
		VEHICLE.set_function("SET_VEHICLE_CAN_BREAK", LUA_NATIVE_VEHICLE_SET_VEHICLE_CAN_BREAK);
		VEHICLE.set_function("SET_VEHICLE_IS_CONSIDERED_BY_PLAYER", LUA_NATIVE_VEHICLE_SET_VEHICLE_IS_CONSIDERED_BY_PLAYER);
		VEHICLE.set_function("SET_VEHICLE_MAY_BE_USED_BY_GOTO_POINT_ANY_MEANS", LUA_NATIVE_VEHICLE_SET_VEHICLE_MAY_BE_USED_BY_GOTO_POINT_ANY_MEANS);
		VEHICLE.set_function("GET_VEHICLE_DOOR_LOCK_STATUS", LUA_NATIVE_VEHICLE_GET_VEHICLE_DOOR_LOCK_STATUS);
		VEHICLE.set_function("SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF", LUA_NATIVE_VEHICLE_SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF);
		VEHICLE.set_function("IS_VEHICLE_ON_ALL_WHEELS", LUA_NATIVE_VEHICLE_IS_VEHICLE_ON_ALL_WHEELS);
		VEHICLE.set_function("GET_TRAIN_DIRECTION_", LUA_NATIVE_VEHICLE_GET_TRAIN_DIRECTION_);
		VEHICLE.set_function("GET_TRAIN_DIRECTION_FROM_INDEX_", LUA_NATIVE_VEHICLE_GET_TRAIN_DIRECTION_FROM_INDEX_);
		VEHICLE.set_function("0x09034479E6E3E269_", LUA_NATIVE_VEHICLE_0x09034479E6E3E269_);
		VEHICLE.set_function("GET_TRAIN_TRACK_JUNCTION_AT_COORDS_", LUA_NATIVE_VEHICLE_GET_TRAIN_TRACK_JUNCTION_AT_COORDS_);
		VEHICLE.set_function("0xD9BF3ED8EFB67EA3_", LUA_NATIVE_VEHICLE_0xD9BF3ED8EFB67EA3_);
		VEHICLE.set_function("0x785639D89F8451AB_", LUA_NATIVE_VEHICLE_0x785639D89F8451AB_);
		VEHICLE.set_function("SET_TRAIN_TRACK_JUNCTION_SWITCH_", LUA_NATIVE_VEHICLE_SET_TRAIN_TRACK_JUNCTION_SWITCH_);
		VEHICLE.set_function("0x3ABFA128F5BF5A70_", LUA_NATIVE_VEHICLE_0x3ABFA128F5BF5A70_);
		VEHICLE.set_function("0x2C46D2A591D8C322_", LUA_NATIVE_VEHICLE_0x2C46D2A591D8C322_);
		VEHICLE.set_function("0xCAFF2C9747103C02_", LUA_NATIVE_VEHICLE_0xCAFF2C9747103C02_);
		VEHICLE.set_function("SET_ALL_JUNCTIONS_CLEARED_", LUA_NATIVE_VEHICLE_SET_ALL_JUNCTIONS_CLEARED_);
		VEHICLE.set_function("0x34BCF6209B9668A7_", LUA_NATIVE_VEHICLE_0x34BCF6209B9668A7_);
		VEHICLE.set_function("0xD0BA1853D76683C8_", LUA_NATIVE_VEHICLE_0xD0BA1853D76683C8_);
		VEHICLE.set_function("SET_TRAIN_OFFSET_FROM_STATION", LUA_NATIVE_VEHICLE_SET_TRAIN_OFFSET_FROM_STATION);
		VEHICLE.set_function("0xDC69F6913CCA0B99_", LUA_NATIVE_VEHICLE_0xDC69F6913CCA0B99_);
		VEHICLE.set_function("0x7840576C50A13DBA_", LUA_NATIVE_VEHICLE_0x7840576C50A13DBA_);
		VEHICLE.set_function("0xD0116DF21E6C7B36_", LUA_NATIVE_VEHICLE_0xD0116DF21E6C7B36_);
		VEHICLE.set_function("DETACH_WAGON_ENTITY_FROM_TRAIN_", LUA_NATIVE_VEHICLE_DETACH_WAGON_ENTITY_FROM_TRAIN_);
		VEHICLE.set_function("0x1180A2974D251B7B_", LUA_NATIVE_VEHICLE_0x1180A2974D251B7B_);
		VEHICLE.set_function("GET_CURRENT_STATION_FOR_TRAIN", LUA_NATIVE_VEHICLE_GET_CURRENT_STATION_FOR_TRAIN);
		VEHICLE.set_function("0x9CC94A948EAF5372_", LUA_NATIVE_VEHICLE_0x9CC94A948EAF5372_);
		VEHICLE.set_function("0xDE8C5B9F65017FA1_", LUA_NATIVE_VEHICLE_0xDE8C5B9F65017FA1_);
		VEHICLE.set_function("GET_CURRENT_TRACK_FOR_TRAIN_", LUA_NATIVE_VEHICLE_GET_CURRENT_TRACK_FOR_TRAIN_);
		VEHICLE.set_function("GET_STATION_COORDS_FROM_TRAIN_STATION_DATA_", LUA_NATIVE_VEHICLE_GET_STATION_COORDS_FROM_TRAIN_STATION_DATA_);
		VEHICLE.set_function("GET_TRACK_INDEX_OF_TRAIN", LUA_NATIVE_VEHICLE_GET_TRACK_INDEX_OF_TRAIN);
		VEHICLE.set_function("0x1A861F899EBBE17C_", LUA_NATIVE_VEHICLE_0x1A861F899EBBE17C_);
		VEHICLE.set_function("0xF8F7DA13CFBD4532_", LUA_NATIVE_VEHICLE_0xF8F7DA13CFBD4532_);
		VEHICLE.set_function("TRIGGER_TRAIN_WHISTLE_", LUA_NATIVE_VEHICLE_TRIGGER_TRAIN_WHISTLE_);
		VEHICLE.set_function("0x2BB2B5BCF0DF8008_", LUA_NATIVE_VEHICLE_0x2BB2B5BCF0DF8008_);
		VEHICLE.set_function("0x6703872EC09BC158_", LUA_NATIVE_VEHICLE_0x6703872EC09BC158_);
		VEHICLE.set_function("0x1BFBAFCC6760FF02_", LUA_NATIVE_VEHICLE_0x1BFBAFCC6760FF02_);
		VEHICLE.set_function("0xF5EA41C1408695FB_", LUA_NATIVE_VEHICLE_0xF5EA41C1408695FB_);
		VEHICLE.set_function("SET_VEHICLE_FIXED", LUA_NATIVE_VEHICLE_SET_VEHICLE_FIXED);
		VEHICLE.set_function("SET_DISABLE_VEHICLE_PETROL_TANK_FIRES", LUA_NATIVE_VEHICLE_SET_DISABLE_VEHICLE_PETROL_TANK_FIRES);
		VEHICLE.set_function("SET_DISABLE_VEHICLE_PETROL_TANK_DAMAGE", LUA_NATIVE_VEHICLE_SET_DISABLE_VEHICLE_PETROL_TANK_DAMAGE);
		VEHICLE.set_function("SET_DISABLE_VEHICLE_ENGINE_FIRES", LUA_NATIVE_VEHICLE_SET_DISABLE_VEHICLE_ENGINE_FIRES);
		VEHICLE.set_function("SET_VEHICLE_LIMIT_SPEED_WHEN_PLAYER_INACTIVE", LUA_NATIVE_VEHICLE_SET_VEHICLE_LIMIT_SPEED_WHEN_PLAYER_INACTIVE);
		VEHICLE.set_function("SET_VEHICLE_STOP_INSTANTLY_WHEN_PLAYER_INACTIVE", LUA_NATIVE_VEHICLE_SET_VEHICLE_STOP_INSTANTLY_WHEN_PLAYER_INACTIVE);
		VEHICLE.set_function("REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA", LUA_NATIVE_VEHICLE_REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA);
		VEHICLE.set_function("SET_VEHICLE_STEER_BIAS", LUA_NATIVE_VEHICLE_SET_VEHICLE_STEER_BIAS);
		VEHICLE.set_function("IS_VEHICLE_EXTRA_TURNED_ON", LUA_NATIVE_VEHICLE_IS_VEHICLE_EXTRA_TURNED_ON);
		VEHICLE.set_function("SET_VEHICLE_EXTRA", LUA_NATIVE_VEHICLE_SET_VEHICLE_EXTRA);
		VEHICLE.set_function("DOES_EXTRA_EXIST", LUA_NATIVE_VEHICLE_DOES_EXTRA_EXIST);
		VEHICLE.set_function("SET_VEHICLE_DAMAGE", LUA_NATIVE_VEHICLE_SET_VEHICLE_DAMAGE);
		VEHICLE.set_function("GET_VEHICLE_ENGINE_HEALTH", LUA_NATIVE_VEHICLE_GET_VEHICLE_ENGINE_HEALTH);
		VEHICLE.set_function("SET_VEHICLE_ENGINE_HEALTH", LUA_NATIVE_VEHICLE_SET_VEHICLE_ENGINE_HEALTH);
		VEHICLE.set_function("GET_VEHICLE_PETROL_TANK_HEALTH", LUA_NATIVE_VEHICLE_GET_VEHICLE_PETROL_TANK_HEALTH);
		VEHICLE.set_function("SET_VEHICLE_PETROL_TANK_HEALTH", LUA_NATIVE_VEHICLE_SET_VEHICLE_PETROL_TANK_HEALTH);
		VEHICLE.set_function("IS_VEHICLE_STUCK_TIMER_UP", LUA_NATIVE_VEHICLE_IS_VEHICLE_STUCK_TIMER_UP);
		VEHICLE.set_function("RESET_VEHICLE_STUCK_TIMER", LUA_NATIVE_VEHICLE_RESET_VEHICLE_STUCK_TIMER);
		VEHICLE.set_function("IS_VEHICLE_DRIVEABLE", LUA_NATIVE_VEHICLE_IS_VEHICLE_DRIVEABLE);
		VEHICLE.set_function("IS_VEHICLE_WRECKED", LUA_NATIVE_VEHICLE_IS_VEHICLE_WRECKED);
		VEHICLE.set_function("IS_VEHICLE_ON_FIRE_", LUA_NATIVE_VEHICLE_IS_VEHICLE_ON_FIRE_);
		VEHICLE.set_function("SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER", LUA_NATIVE_VEHICLE_SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER);
		VEHICLE.set_function("START_VEHICLE_HORN", LUA_NATIVE_VEHICLE_START_VEHICLE_HORN);
		VEHICLE.set_function("SET_VEHICLE_HAS_STRONG_AXLES", LUA_NATIVE_VEHICLE_SET_VEHICLE_HAS_STRONG_AXLES);
		VEHICLE.set_function("SET_VEHICLE_SNOW_LEVEL_", LUA_NATIVE_VEHICLE_SET_VEHICLE_SNOW_LEVEL_);
		VEHICLE.set_function("SET_VEHICLE_WET_LEVEL_", LUA_NATIVE_VEHICLE_SET_VEHICLE_WET_LEVEL_);
		VEHICLE.set_function("SET_VEHICLE_TINT_", LUA_NATIVE_VEHICLE_SET_VEHICLE_TINT_);
		VEHICLE.set_function("SET_VEHICLE_LIVERY_", LUA_NATIVE_VEHICLE_SET_VEHICLE_LIVERY_);
		VEHICLE.set_function("GET_VEHICLE_TINT_", LUA_NATIVE_VEHICLE_GET_VEHICLE_TINT_);
		VEHICLE.set_function("GET_VEHICLE_LIVERY_", LUA_NATIVE_VEHICLE_GET_VEHICLE_LIVERY_);
		VEHICLE.set_function("IS_VEHICLE_WINDOW_INTACT", LUA_NATIVE_VEHICLE_IS_VEHICLE_WINDOW_INTACT);
		VEHICLE.set_function("ARE_ANY_VEHICLE_SEATS_FREE", LUA_NATIVE_VEHICLE_ARE_ANY_VEHICLE_SEATS_FREE);
		VEHICLE.set_function("SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE", LUA_NATIVE_VEHICLE_SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE);
		VEHICLE.set_function("SET_ALLOW_VEHICLE_EXPLODES_ON_CONTACT", LUA_NATIVE_VEHICLE_SET_ALLOW_VEHICLE_EXPLODES_ON_CONTACT);
		VEHICLE.set_function("IS_ANY_VEHICLE_NEAR_POINT", LUA_NATIVE_VEHICLE_IS_ANY_VEHICLE_NEAR_POINT);
		VEHICLE.set_function("REQUEST_VEHICLE_HIGH_DETAIL_MODEL", LUA_NATIVE_VEHICLE_REQUEST_VEHICLE_HIGH_DETAIL_MODEL);
		VEHICLE.set_function("REQUEST_VEHICLE_ASSET", LUA_NATIVE_VEHICLE_REQUEST_VEHICLE_ASSET);
		VEHICLE.set_function("0xCF9DA72002FC16BF_", LUA_NATIVE_VEHICLE_0xCF9DA72002FC16BF_);
		VEHICLE.set_function("HAS_VEHICLE_ASSET_LOADED", LUA_NATIVE_VEHICLE_HAS_VEHICLE_ASSET_LOADED);
		VEHICLE.set_function("REMOVE_VEHICLE_ASSET", LUA_NATIVE_VEHICLE_REMOVE_VEHICLE_ASSET);
		VEHICLE.set_function("SET_VEHICLE_AUTOMATICALLY_ATTACHES", LUA_NATIVE_VEHICLE_SET_VEHICLE_AUTOMATICALLY_ATTACHES);
		VEHICLE.set_function("0x104D9A7B1C0D0783_", LUA_NATIVE_VEHICLE_0x104D9A7B1C0D0783_);
		VEHICLE.set_function("IS_VEHICLE_IN_BURNOUT", LUA_NATIVE_VEHICLE_IS_VEHICLE_IN_BURNOUT);
		VEHICLE.set_function("SET_VEHICLE_HANDBRAKE", LUA_NATIVE_VEHICLE_SET_VEHICLE_HANDBRAKE);
		VEHICLE.set_function("INSTANTLY_FILL_VEHICLE_POPULATION", LUA_NATIVE_VEHICLE_INSTANTLY_FILL_VEHICLE_POPULATION);
		VEHICLE.set_function("HAS_INSTANT_FILL_VEHICLE_POPULATION_FINISHED", LUA_NATIVE_VEHICLE_HAS_INSTANT_FILL_VEHICLE_POPULATION_FINISHED);
		VEHICLE.set_function("GET_VEHICLE_TRAILER_VEHICLE", LUA_NATIVE_VEHICLE_GET_VEHICLE_TRAILER_VEHICLE);
		VEHICLE.set_function("GET_VEHICLE_ESTIMATED_MAX_SPEED", LUA_NATIVE_VEHICLE_GET_VEHICLE_ESTIMATED_MAX_SPEED);
		VEHICLE.set_function("ADD_ROAD_NODE_SPEED_ZONE", LUA_NATIVE_VEHICLE_ADD_ROAD_NODE_SPEED_ZONE);
		VEHICLE.set_function("REMOVE_ROAD_NODE_SPEED_ZONE", LUA_NATIVE_VEHICLE_REMOVE_ROAD_NODE_SPEED_ZONE);
		VEHICLE.set_function("IS_ENTRY_POINT_FOR_SEAT_CLEAR", LUA_NATIVE_VEHICLE_IS_ENTRY_POINT_FOR_SEAT_CLEAR);
		VEHICLE.set_function("CAN_SHUFFLE_SEAT", LUA_NATIVE_VEHICLE_CAN_SHUFFLE_SEAT);
		VEHICLE.set_function("MODIFY_VEHICLE_TOP_SPEED", LUA_NATIVE_VEHICLE_MODIFY_VEHICLE_TOP_SPEED);
		VEHICLE.set_function("SET_VEHICLE_STAYS_FROZEN_WHEN_CLEANED_UP", LUA_NATIVE_VEHICLE_SET_VEHICLE_STAYS_FROZEN_WHEN_CLEANED_UP);
		VEHICLE.set_function("SET_VEHICLE_INFLUENCES_WANTED_LEVEL", LUA_NATIVE_VEHICLE_SET_VEHICLE_INFLUENCES_WANTED_LEVEL);
		VEHICLE.set_function("IS_BOAT_GROUNDED_", LUA_NATIVE_VEHICLE_IS_BOAT_GROUNDED_);
		VEHICLE.set_function("SET_VEHICLE_NOT_STEALABLE_AMBIENTLY", LUA_NATIVE_VEHICLE_SET_VEHICLE_NOT_STEALABLE_AMBIENTLY);
		VEHICLE.set_function("LOCK_DOORS_WHEN_NO_LONGER_NEEDED", LUA_NATIVE_VEHICLE_LOCK_DOORS_WHEN_NO_LONGER_NEEDED);
		VEHICLE.set_function("GET_LAST_DRIVEN_VEHICLE", LUA_NATIVE_VEHICLE_GET_LAST_DRIVEN_VEHICLE);
		VEHICLE.set_function("CLEAR_LAST_DRIVEN_VEHICLE", LUA_NATIVE_VEHICLE_CLEAR_LAST_DRIVEN_VEHICLE);
		VEHICLE.set_function("SET_PED_OWNS_VEHICLE", LUA_NATIVE_VEHICLE_SET_PED_OWNS_VEHICLE);
		VEHICLE.set_function("GET_VEHICLE_OWNER_", LUA_NATIVE_VEHICLE_GET_VEHICLE_OWNER_);
		VEHICLE.set_function("SET_VEHICLE_LOD_MULTIPLIER", LUA_NATIVE_VEHICLE_SET_VEHICLE_LOD_MULTIPLIER);
		VEHICLE.set_function("SET_VEHICLE_LOD_LEVEL_", LUA_NATIVE_VEHICLE_SET_VEHICLE_LOD_LEVEL_);
		VEHICLE.set_function("SET_FORCE_VEHICLE_ENGINE_DAMAGE_BY_BULLET", LUA_NATIVE_VEHICLE_SET_FORCE_VEHICLE_ENGINE_DAMAGE_BY_BULLET);
		VEHICLE.set_function("COPY_VEHICLE_DAMAGES", LUA_NATIVE_VEHICLE_COPY_VEHICLE_DAMAGES);
		VEHICLE.set_function("SET_VEHICLE_SHOOT_AT_TARGET", LUA_NATIVE_VEHICLE_SET_VEHICLE_SHOOT_AT_TARGET);
		VEHICLE.set_function("SET_FORCE_HD_VEHICLE", LUA_NATIVE_VEHICLE_SET_FORCE_HD_VEHICLE);
		VEHICLE.set_function("TRACK_VEHICLE_VISIBILITY", LUA_NATIVE_VEHICLE_TRACK_VEHICLE_VISIBILITY);
		VEHICLE.set_function("IS_VEHICLE_VISIBLE", LUA_NATIVE_VEHICLE_IS_VEHICLE_VISIBLE);
		VEHICLE.set_function("0x13C190302369308B_", LUA_NATIVE_VEHICLE_0x13C190302369308B_);
		VEHICLE.set_function("SET_ENABLE_VEHICLE_SLIPSTREAMING", LUA_NATIVE_VEHICLE_SET_ENABLE_VEHICLE_SLIPSTREAMING);
		VEHICLE.set_function("SET_VEHICLE_INACTIVE_DURING_PLAYBACK", LUA_NATIVE_VEHICLE_SET_VEHICLE_INACTIVE_DURING_PLAYBACK);
		VEHICLE.set_function("SET_VEHICLE_ENGINE_CAN_DEGRADE", LUA_NATIVE_VEHICLE_SET_VEHICLE_ENGINE_CAN_DEGRADE);
		VEHICLE.set_function("SET_VEHICLE_IS_STOLEN", LUA_NATIVE_VEHICLE_SET_VEHICLE_IS_STOLEN);
		VEHICLE.set_function("0xCBF88256E44D5D39_", LUA_NATIVE_VEHICLE_0xCBF88256E44D5D39_);
		VEHICLE.set_function("0xC325A6BAA62CF8A2_", LUA_NATIVE_VEHICLE_0xC325A6BAA62CF8A2_);
		VEHICLE.set_function("0x0CD7914D17A970AB_", LUA_NATIVE_VEHICLE_0x0CD7914D17A970AB_);
		VEHICLE.set_function("0x23F66C36F8E5EAAB_", LUA_NATIVE_VEHICLE_0x23F66C36F8E5EAAB_);
		VEHICLE.set_function("0x697DF68F3A761A50_", LUA_NATIVE_VEHICLE_0x697DF68F3A761A50_);
		VEHICLE.set_function("0x27E3F2B57209FA54_", LUA_NATIVE_VEHICLE_0x27E3F2B57209FA54_);
		VEHICLE.set_function("DISABLE_VEHICLE_WEAPON", LUA_NATIVE_VEHICLE_DISABLE_VEHICLE_WEAPON);
		VEHICLE.set_function("SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS", LUA_NATIVE_VEHICLE_SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS);
		VEHICLE.set_function("SET_VEHICLE_KEEP_ENGINE_ON_WHEN_ABANDONED", LUA_NATIVE_VEHICLE_SET_VEHICLE_KEEP_ENGINE_ON_WHEN_ABANDONED);
		VEHICLE.set_function("SET_VEHICLE_WHEELS_CAN_BREAK_OFF_WHEN_BLOW_UP", LUA_NATIVE_VEHICLE_SET_VEHICLE_WHEELS_CAN_BREAK_OFF_WHEN_BLOW_UP);
		VEHICLE.set_function("0x15CC8C33D7FFCC4A_", LUA_NATIVE_VEHICLE_0x15CC8C33D7FFCC4A_);
		VEHICLE.set_function("SET_VEHICLE_AI_CAN_USE_EXCLUSIVE_SEATS", LUA_NATIVE_VEHICLE_SET_VEHICLE_AI_CAN_USE_EXCLUSIVE_SEATS);
		VEHICLE.set_function("SET_VEHICLE_EXCLUSIVE_DRIVER", LUA_NATIVE_VEHICLE_SET_VEHICLE_EXCLUSIVE_DRIVER);
		VEHICLE.set_function("IS_PED_EXCLUSIVE_DRIVER_OF_VEHICLE_", LUA_NATIVE_VEHICLE_IS_PED_EXCLUSIVE_DRIVER_OF_VEHICLE_);
		VEHICLE.set_function("0xDC0556D0F484ECAA_", LUA_NATIVE_VEHICLE_0xDC0556D0F484ECAA_);
		VEHICLE.set_function("SET_DISABLE_SUPERDUMMY", LUA_NATIVE_VEHICLE_SET_DISABLE_SUPERDUMMY);
		VEHICLE.set_function("GET_VEHICLE_BODY_HEALTH", LUA_NATIVE_VEHICLE_GET_VEHICLE_BODY_HEALTH);
		VEHICLE.set_function("SET_VEHICLE_BODY_HEALTH", LUA_NATIVE_VEHICLE_SET_VEHICLE_BODY_HEALTH);
		VEHICLE.set_function("0xE777DDF3E78397E8_", LUA_NATIVE_VEHICLE_0xE777DDF3E78397E8_);
		VEHICLE.set_function("SET_VEHICLE_BROKEN_PARTS_DONT_AFFECT_AI_HANDLING", LUA_NATIVE_VEHICLE_SET_VEHICLE_BROKEN_PARTS_DONT_AFFECT_AI_HANDLING);
		VEHICLE.set_function("0x012701ED938B85DE_", LUA_NATIVE_VEHICLE_0x012701ED938B85DE_);
		VEHICLE.set_function("0x8379E05871AD24E0_", LUA_NATIVE_VEHICLE_0x8379E05871AD24E0_);
		VEHICLE.set_function("SET_HORSE_TRAFFIC_GROUPING_DISTRIBUTION_", LUA_NATIVE_VEHICLE_SET_HORSE_TRAFFIC_GROUPING_DISTRIBUTION_);
		VEHICLE.set_function("ATTACH_DRAFT_VEHICLE_HARNESS_PED_", LUA_NATIVE_VEHICLE_ATTACH_DRAFT_VEHICLE_HARNESS_PED_);
		VEHICLE.set_function("DETACH_DRAFT_VEHICLE_HARNESS_FROM_INDEX_", LUA_NATIVE_VEHICLE_DETACH_DRAFT_VEHICLE_HARNESS_FROM_INDEX_);
		VEHICLE.set_function("DETACH_DRAFT_VEHICLE_HARNESS_PED_", LUA_NATIVE_VEHICLE_DETACH_DRAFT_VEHICLE_HARNESS_PED_);
		VEHICLE.set_function("0x0F7F603BDE08C4D3_", LUA_NATIVE_VEHICLE_0x0F7F603BDE08C4D3_);
		VEHICLE.set_function("GET_NUM_DRAFT_VEHICLE_HARNESS_PED_", LUA_NATIVE_VEHICLE_GET_NUM_DRAFT_VEHICLE_HARNESS_PED_);
		VEHICLE.set_function("GET_CHECKPOINT_TRAIN_SPAWN_LOCATION_", LUA_NATIVE_VEHICLE_GET_CHECKPOINT_TRAIN_SPAWN_LOCATION_);
		VEHICLE.set_function("0xC399CC89FBA05DA0_", LUA_NATIVE_VEHICLE_0xC399CC89FBA05DA0_);
		VEHICLE.set_function("GET_ROWING_OARS_", LUA_NATIVE_VEHICLE_GET_ROWING_OARS_);
		VEHICLE.set_function("GET_DRIVER_OF_VEHICLE", LUA_NATIVE_VEHICLE_GET_DRIVER_OF_VEHICLE);
		VEHICLE.set_function("SET_FORCE_COACH_ROBBERY_LOOT_", LUA_NATIVE_VEHICLE_SET_FORCE_COACH_ROBBERY_LOOT_);
		VEHICLE.set_function("0x0BA4250D20007C2E_", LUA_NATIVE_VEHICLE_0x0BA4250D20007C2E_);
		VEHICLE.set_function("0x2200AB13CBD10F4E_", LUA_NATIVE_VEHICLE_0x2200AB13CBD10F4E_);
		VEHICLE.set_function("0xB42C87521D1BDD2F_", LUA_NATIVE_VEHICLE_0xB42C87521D1BDD2F_);
		VEHICLE.set_function("0xC351394B932A6A50_", LUA_NATIVE_VEHICLE_0xC351394B932A6A50_);
		VEHICLE.set_function("0x172E9DD35858DCD7_", LUA_NATIVE_VEHICLE_0x172E9DD35858DCD7_);
		VEHICLE.set_function("GET_BREAKABLE_VEHICLE_LOCKS_STATE_", LUA_NATIVE_VEHICLE_GET_BREAKABLE_VEHICLE_LOCKS_STATE_);
		VEHICLE.set_function("0x877EA24EB1614495_", LUA_NATIVE_VEHICLE_0x877EA24EB1614495_);
		VEHICLE.set_function("GET_BREAKABLE_VEHICLE_LOCK_OBJECT_", LUA_NATIVE_VEHICLE_GET_BREAKABLE_VEHICLE_LOCK_OBJECT_);
		VEHICLE.set_function("GET_NUM_BREAKABLE_VEHICLE_LOCK_OBJECTS_", LUA_NATIVE_VEHICLE_GET_NUM_BREAKABLE_VEHICLE_LOCK_OBJECTS_);
		VEHICLE.set_function("SET_BREAKABLE_VEHICLE_LOCKS_UNBREAKABLE", LUA_NATIVE_VEHICLE_SET_BREAKABLE_VEHICLE_LOCKS_UNBREAKABLE);
		VEHICLE.set_function("0x9D12796EF4BF9EA9_", LUA_NATIVE_VEHICLE_0x9D12796EF4BF9EA9_);
		VEHICLE.set_function("0x850CE59DEC2028F3_", LUA_NATIVE_VEHICLE_0x850CE59DEC2028F3_);
		VEHICLE.set_function("0x0355FE37240E2C77_", LUA_NATIVE_VEHICLE_0x0355FE37240E2C77_);
		VEHICLE.set_function("0x3D86997A86FEEF0D_", LUA_NATIVE_VEHICLE_0x3D86997A86FEEF0D_);
		VEHICLE.set_function("0xD826690B5CF3BEFF_", LUA_NATIVE_VEHICLE_0xD826690B5CF3BEFF_);
		VEHICLE.set_function("BREAK_OFF_DRAFT_WHEEL_", LUA_NATIVE_VEHICLE_BREAK_OFF_DRAFT_WHEEL_);
		VEHICLE.set_function("GET_DRAFT_ANIMAL_COUNT", LUA_NATIVE_VEHICLE_GET_DRAFT_ANIMAL_COUNT);
		VEHICLE.set_function("0x165BE2001E5E4B75_", LUA_NATIVE_VEHICLE_0x165BE2001E5E4B75_);
		VEHICLE.set_function("SET_DRAFT_VEHICLE_ANIMALS_CAN_DETACH_", LUA_NATIVE_VEHICLE_SET_DRAFT_VEHICLE_ANIMALS_CAN_DETACH_);
		VEHICLE.set_function("SET_DRAFT_VEHICLE_YOKE_CAN_BREAK_", LUA_NATIVE_VEHICLE_SET_DRAFT_VEHICLE_YOKE_CAN_BREAK_);
		VEHICLE.set_function("ADD_TRAIN_TEMPORARY_STOP_", LUA_NATIVE_VEHICLE_ADD_TRAIN_TEMPORARY_STOP_);
		VEHICLE.set_function("0x0794199B25E499E1_", LUA_NATIVE_VEHICLE_0x0794199B25E499E1_);
		VEHICLE.set_function("0x73118A3EE9C9B6DB_", LUA_NATIVE_VEHICLE_0x73118A3EE9C9B6DB_);
		VEHICLE.set_function("0xE1C0F8781BF130C2_", LUA_NATIVE_VEHICLE_0xE1C0F8781BF130C2_);
		VEHICLE.set_function("IS_VEHICLE_WHEEL_DESTROYED_", LUA_NATIVE_VEHICLE_IS_VEHICLE_WHEEL_DESTROYED_);
		VEHICLE.set_function("0x18714953CCED17D3_", LUA_NATIVE_VEHICLE_0x18714953CCED17D3_);
		VEHICLE.set_function("0x41F0B254DDF71473_", LUA_NATIVE_VEHICLE_0x41F0B254DDF71473_);
		VEHICLE.set_function("SET_VEHICLE_DETERIORATION_", LUA_NATIVE_VEHICLE_SET_VEHICLE_DETERIORATION_);
		VEHICLE.set_function("IS_VEHICLE_DOOR_BROKEN_", LUA_NATIVE_VEHICLE_IS_VEHICLE_DOOR_BROKEN_);
		VEHICLE.set_function("BREAK_OFF_VEHICLE_WHEEL_", LUA_NATIVE_VEHICLE_BREAK_OFF_VEHICLE_WHEEL_);
		VEHICLE.set_function("DELETE_VEHICLE_LANTERNS_", LUA_NATIVE_VEHICLE_DELETE_VEHICLE_LANTERNS_);
		VEHICLE.set_function("0x6DE072AC8A95FFC1_", LUA_NATIVE_VEHICLE_0x6DE072AC8A95FFC1_);
		VEHICLE.set_function("SET_DRAFT_VEHICLE_DESIRED_SPEED_", LUA_NATIVE_VEHICLE_SET_DRAFT_VEHICLE_DESIRED_SPEED_);
		VEHICLE.set_function("GET_DRAFT_VEHICLE_DESIRED_SPEED_", LUA_NATIVE_VEHICLE_GET_DRAFT_VEHICLE_DESIRED_SPEED_);
		VEHICLE.set_function("0xC4A2C11FC0D41916_", LUA_NATIVE_VEHICLE_0xC4A2C11FC0D41916_);
		VEHICLE.set_function("0xFC4F15A7DDDC47B1_", LUA_NATIVE_VEHICLE_0xFC4F15A7DDDC47B1_);
		VEHICLE.set_function("0x4C60C333F9CCA2B6_", LUA_NATIVE_VEHICLE_0x4C60C333F9CCA2B6_);
		VEHICLE.set_function("0xCF342503CA4C8DF1_", LUA_NATIVE_VEHICLE_0xCF342503CA4C8DF1_);
		VEHICLE.set_function("0x06A09A6E0C6D2A84_", LUA_NATIVE_VEHICLE_0x06A09A6E0C6D2A84_);
		VEHICLE.set_function("0xAE7E66A61E7C17A5_", LUA_NATIVE_VEHICLE_0xAE7E66A61E7C17A5_);
		VEHICLE.set_function("0xEF28A614B4B264B8_", LUA_NATIVE_VEHICLE_0xEF28A614B4B264B8_);
		VEHICLE.set_function("0x04F0579DBDD32F34_", LUA_NATIVE_VEHICLE_0x04F0579DBDD32F34_);
		VEHICLE.set_function("0x12F6C6ED3EFF42DE_", LUA_NATIVE_VEHICLE_0x12F6C6ED3EFF42DE_);
		VEHICLE.set_function("0x87B974E54C71BA7B_", LUA_NATIVE_VEHICLE_0x87B974E54C71BA7B_);
		VEHICLE.set_function("HAS_TRAIN_LOADED_", LUA_NATIVE_VEHICLE_HAS_TRAIN_LOADED_);
		VEHICLE.set_function("CREATE_MISSION_TRAIN_", LUA_NATIVE_VEHICLE_CREATE_MISSION_TRAIN_);
		VEHICLE.set_function("0xD1EFA8D68BF5D63D_", LUA_NATIVE_VEHICLE_0xD1EFA8D68BF5D63D_);
		VEHICLE.set_function("0x1121B07088ED3013_", LUA_NATIVE_VEHICLE_0x1121B07088ED3013_);
		VEHICLE.set_function("0x42404D57D621601A_", LUA_NATIVE_VEHICLE_0x42404D57D621601A_);
		VEHICLE.set_function("0x288CBB414C3C2FBB_", LUA_NATIVE_VEHICLE_0x288CBB414C3C2FBB_);
		VEHICLE.set_function("0x6FD7BDF10304363A_", LUA_NATIVE_VEHICLE_0x6FD7BDF10304363A_);
		VEHICLE.set_function("0xCEB1F1EED484A5B4_", LUA_NATIVE_VEHICLE_0xCEB1F1EED484A5B4_);
		VEHICLE.set_function("0xF57DB8E83DCD8349_", LUA_NATIVE_VEHICLE_0xF57DB8E83DCD8349_);
		VEHICLE.set_function("SET_BALLOON_HOVER_STATE_", LUA_NATIVE_VEHICLE_SET_BALLOON_HOVER_STATE_);
		VEHICLE.set_function("SET_DRAFT_VEHICLE_ALLOW_DRAFT_ANIMAL_AUTO_CREATION_", LUA_NATIVE_VEHICLE_SET_DRAFT_VEHICLE_ALLOW_DRAFT_ANIMAL_AUTO_CREATION_);
		VEHICLE.set_function("0x6835AFEA10E186F4_", LUA_NATIVE_VEHICLE_0x6835AFEA10E186F4_);
		VEHICLE.set_function("SET_DRAFT_ANIMAL_RANDOM_SEED_", LUA_NATIVE_VEHICLE_SET_DRAFT_ANIMAL_RANDOM_SEED_);
		VEHICLE.set_function("0x14DA8C4BC2CCD90A_", LUA_NATIVE_VEHICLE_0x14DA8C4BC2CCD90A_);
		VEHICLE.set_function("0xCACAB2B123BBDBD6_", LUA_NATIVE_VEHICLE_0xCACAB2B123BBDBD6_);
		VEHICLE.set_function("0xFF2B1F59FB892F14_", LUA_NATIVE_VEHICLE_0xFF2B1F59FB892F14_);
		VEHICLE.set_function("0x5AADC7BBBB1BCEEB_", LUA_NATIVE_VEHICLE_0x5AADC7BBBB1BCEEB_);
		VEHICLE.set_function("GET_VEHICLE_IS_PROP_SET_APPLIED_", LUA_NATIVE_VEHICLE_GET_VEHICLE_IS_PROP_SET_APPLIED_);
		VEHICLE.set_function("SET_BATCH_TARP_HEIGHT_", LUA_NATIVE_VEHICLE_SET_BATCH_TARP_HEIGHT_);
		VEHICLE.set_function("0x07E2E21E799080A0_", LUA_NATIVE_VEHICLE_0x07E2E21E799080A0_);
		VEHICLE.set_function("0xC2E62678D602853C_", LUA_NATIVE_VEHICLE_0xC2E62678D602853C_);
		VEHICLE.set_function("0x873AAF600CC36DAC_", LUA_NATIVE_VEHICLE_0x873AAF600CC36DAC_);
		VEHICLE.set_function("0x51C7694E140FAE43_", LUA_NATIVE_VEHICLE_0x51C7694E140FAE43_);
		VEHICLE.set_function("0x8DECD262602548B9_", LUA_NATIVE_VEHICLE_0x8DECD262602548B9_);
		VEHICLE.set_function("0xCBC7B6F9A56B79F6_", LUA_NATIVE_VEHICLE_0xCBC7B6F9A56B79F6_);
		VEHICLE.set_function("0x37D238BE69F7378A_", LUA_NATIVE_VEHICLE_0x37D238BE69F7378A_);
		VEHICLE.set_function("0x703D4FB366DA4452_", LUA_NATIVE_VEHICLE_0x703D4FB366DA4452_);
		VEHICLE.set_function("0x762FDC4C19E5A981_", LUA_NATIVE_VEHICLE_0x762FDC4C19E5A981_);
		VEHICLE.set_function("0x2045429505158D1A_", LUA_NATIVE_VEHICLE_0x2045429505158D1A_);
		VEHICLE.set_function("0x13EB275BF81636D1_", LUA_NATIVE_VEHICLE_0x13EB275BF81636D1_);
	}
}
