#include "lua_native_binding.hpp"
#include "game/rdr/Natives.hpp"

namespace Lua::native
{
	static void LUA_NATIVE_PATHFIND_SET_ROADS_IN_AREA(float VecMinCoorsX, float VecMinCoorsY, float VecMinCoorsZ, float VecMaxCoorsX, float VecMaxCoorsY, float VecMaxCoorsZ, Any p6, bool bNetwork, Any p8)
	{
		PATHFIND::SET_ROADS_IN_AREA(VecMinCoorsX, VecMinCoorsY, VecMinCoorsZ, VecMaxCoorsX, VecMaxCoorsY, VecMaxCoorsZ, p6, bNetwork, p8);
	}

	static void LUA_NATIVE_PATHFIND_SET_ROADS_IN_ANGLED_AREA(float vVec1X, float vVec1Y, float vVec1Z, float vVec2X, float vVec2Y, float vVec2Z, float fAreaWidth, Any p7, Any p8, bool bNetwork, Any p10)
	{
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(vVec1X, vVec1Y, vVec1Z, vVec2X, vVec2Y, vVec2Z, fAreaWidth, p7, p8, bNetwork, p10);
	}

	static void LUA_NATIVE_PATHFIND_SET_ROADS_IN_VOLUME(Volume volume, bool p1, bool p2, bool p3)
	{
		PATHFIND::SET_ROADS_IN_VOLUME(volume, p1, p2, p3);
	}

	static void LUA_NATIVE_PATHFIND_RESET_ROADS_IN_VOLUME(Volume volume, bool p1)
	{
		PATHFIND::RESET_ROADS_IN_VOLUME(volume, p1);
	}

	static void LUA_NATIVE_PATHFIND_SET_ROADS_BACK_TO_ORIGINAL(float VecCoorsMinX, float VecCoorsMinY, float VecCoorsMinZ, float VecCoorsMaxX, float VecCoorsMaxY, float VecCoorsMaxZ, Any p6, bool bNetwork)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(VecCoorsMinX, VecCoorsMinY, VecCoorsMinZ, VecCoorsMaxX, VecCoorsMaxY, VecCoorsMaxZ, p6, bNetwork);
	}

	static void LUA_NATIVE_PATHFIND_SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(float vVec1X, float vVec1Y, float vVec1Z, float vVec2X, float vVec2Y, float vVec2Z, float fAreaWidth, Any p7, bool bNetwork)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(vVec1X, vVec1Y, vVec1Z, vVec2X, vVec2Y, vVec2Z, fAreaWidth, p7, bNetwork);
	}

	static void LUA_NATIVE_PATHFIND_0xAFE2AE66F6251C66_(float xMin, float yMin, float zMin, float xMax, float yMax, float zMax, int p6, Any p7)
	{
		PATHFIND::_0xAFE2AE66F6251C66(xMin, yMin, zMin, xMax, yMax, zMax, p6, p7);
	}

	static void LUA_NATIVE_PATHFIND_0x4358BCF14C91761C_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		PATHFIND::_0x4358BCF14C91761C(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}

	static void LUA_NATIVE_PATHFIND_0xB03944057FD735BA_(Any p0, Any p1, Any p2)
	{
		PATHFIND::_0xB03944057FD735BA(p0, p1, p2);
	}

	static void LUA_NATIVE_PATHFIND_0x6C3F12ECEB6D2E2A_(float xMin, float yMin, float zMin, float xMax, float yMax, float zMax, Any p6, Any p7)
	{
		PATHFIND::_0x6C3F12ECEB6D2E2A(xMin, yMin, zMin, xMax, yMax, zMax, p6, p7);
	}

	static void LUA_NATIVE_PATHFIND_0x5A4E1A41E3A02AD0_(Any p0, Any p1, Any p2)
	{
		PATHFIND::_0x5A4E1A41E3A02AD0(p0, p1, p2);
	}

	static std::tuple<bool, Vector3> LUA_NATIVE_PATHFIND_GET_CLOSEST_VEHICLE_NODE(float VecCoorsX, float VecCoorsY, float VecCoorsZ, Vector3 VecReturnNearestNodeCoors, int nodeFlags, float zMeasureMult, float zTolerance)
	{
		std::tuple<bool, Vector3> return_values;
		std::get<0>(return_values) = (bool)PATHFIND::GET_CLOSEST_VEHICLE_NODE(VecCoorsX, VecCoorsY, VecCoorsZ, &VecReturnNearestNodeCoors, nodeFlags, zMeasureMult, zTolerance);
		std::get<1>(return_values) = VecReturnNearestNodeCoors;

		return return_values;
	}

	static Any LUA_NATIVE_PATHFIND_0xCA27A86CAA4E98ED_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		auto retval = PATHFIND::_0xCA27A86CAA4E98ED(p0, p1, p2, p3, p4, p5, p6);
		return retval;
	}

	static std::tuple<bool, Vector3, float> LUA_NATIVE_PATHFIND_GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(float VecCoorsX, float VecCoorsY, float VecCoorsZ, Vector3 VecReturnNearestNodeCoors, float ReturnHeading, int nodeFlags, float zMeasureMult, float zTolerance)
	{
		std::tuple<bool, Vector3, float> return_values;
		std::get<0>(return_values) = (bool)PATHFIND::GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(VecCoorsX, VecCoorsY, VecCoorsZ, &VecReturnNearestNodeCoors, &ReturnHeading, nodeFlags, zMeasureMult, zTolerance);
		std::get<1>(return_values) = VecReturnNearestNodeCoors;
		std::get<2>(return_values) = ReturnHeading;

		return return_values;
	}

	static std::tuple<bool, Vector3> LUA_NATIVE_PATHFIND_GET_NTH_CLOSEST_VEHICLE_NODE(float VecCoorsX, float VecCoorsY, float VecCoorsZ, int NodeNumber, Vector3 VecReturnNearestNodeCoors, int nodeFlags, float zMeasureMult, float zTolerance)
	{
		std::tuple<bool, Vector3> return_values;
		std::get<0>(return_values) = (bool)PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(VecCoorsX, VecCoorsY, VecCoorsZ, NodeNumber, &VecReturnNearestNodeCoors, nodeFlags, zMeasureMult, zTolerance);
		std::get<1>(return_values) = VecReturnNearestNodeCoors;

		return return_values;
	}

	static int LUA_NATIVE_PATHFIND_GET_NTH_CLOSEST_VEHICLE_NODE_ID(float VecCoorsX, float VecCoorsY, float VecCoorsZ, int NodeNumber, int nodeFlags, float zMeasureMult, float zTolerance)
	{
		auto retval = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(VecCoorsX, VecCoorsY, VecCoorsZ, NodeNumber, nodeFlags, zMeasureMult, zTolerance);
		return retval;
	}

	static std::tuple<bool, Vector3, float, int> LUA_NATIVE_PATHFIND_GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(float VecCoorsX, float VecCoorsY, float VecCoorsZ, int NodeNumber, Vector3 VecReturnNearestNodeCoors, float ReturnHeading, int ReturnNumLanes, int nodeFlags, float zMeasureMult, float zTolerance)
	{
		std::tuple<bool, Vector3, float, int> return_values;
		std::get<0>(return_values) = (bool)PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(VecCoorsX, VecCoorsY, VecCoorsZ, NodeNumber, &VecReturnNearestNodeCoors, &ReturnHeading, &ReturnNumLanes, nodeFlags, zMeasureMult, zTolerance);
		std::get<1>(return_values) = VecReturnNearestNodeCoors;
		std::get<2>(return_values) = ReturnHeading;
		std::get<3>(return_values) = ReturnNumLanes;

		return return_values;
	}

	static std::tuple<int, float, int> LUA_NATIVE_PATHFIND_GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(float VecCoorsX, float VecCoorsY, float VecCoorsZ, int NodeNumber, float ReturnHeading, int ReturnNumLanes, int nodeFlags, float zMeasureMult, float zTolerance)
	{
		std::tuple<int, float, int> return_values;
		std::get<0>(return_values) = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(VecCoorsX, VecCoorsY, VecCoorsZ, NodeNumber, &ReturnHeading, &ReturnNumLanes, nodeFlags, zMeasureMult, zTolerance);
		std::get<1>(return_values) = ReturnHeading;
		std::get<2>(return_values) = ReturnNumLanes;

		return return_values;
	}

	static std::tuple<bool, Vector3, float> LUA_NATIVE_PATHFIND_GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(float VecCoorsX, float VecCoorsY, float VecCoorsZ, float FaceCoorsX, float FaceCoorsY, float FaceCoorsZ, int NodeNumber, Vector3 VecReturnNearestNodeCoors, float ReturnHeading, int nodeFlags, float zMeasureMult, float zTolerance)
	{
		std::tuple<bool, Vector3, float> return_values;
		std::get<0>(return_values) = (bool)PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(VecCoorsX, VecCoorsY, VecCoorsZ, FaceCoorsX, FaceCoorsY, FaceCoorsZ, NodeNumber, &VecReturnNearestNodeCoors, &ReturnHeading, nodeFlags, zMeasureMult, zTolerance);
		std::get<1>(return_values) = VecReturnNearestNodeCoors;
		std::get<2>(return_values) = ReturnHeading;

		return return_values;
	}

	static bool LUA_NATIVE_PATHFIND_IS_VEHICLE_NODE_ID_VALID(int NodeId)
	{
		auto retval = (bool)PATHFIND::IS_VEHICLE_NODE_ID_VALID(NodeId);
		return retval;
	}

	static Vector3 LUA_NATIVE_PATHFIND_GET_VEHICLE_NODE_POSITION(int nodeId, Vector3 VecNodePosition)
	{
		PATHFIND::GET_VEHICLE_NODE_POSITION(nodeId, &VecNodePosition);
		return VecNodePosition;
	}

	static bool LUA_NATIVE_PATHFIND_GET_VEHICLE_NODE_IS_SWITCHED_OFF(int nodeId)
	{
		auto retval = (bool)PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(nodeId);
		return retval;
	}

	static std::tuple<bool, Vector3, Vector3, int, int, float> LUA_NATIVE_PATHFIND_GET_CLOSEST_ROAD(float TestCoorsX, float TestCoorsY, float TestCoorsZ, float MinLength, int MinLanes, Vector3 SouthEndNode, Vector3 NorthEndNode, int LanesGoingSouth, int LanesGoingNorth, float CentralReservationWidth, bool bIgnoreSwitchedOffNodes)
	{
		std::tuple<bool, Vector3, Vector3, int, int, float> return_values;
		std::get<0>(return_values) = (bool)PATHFIND::GET_CLOSEST_ROAD(TestCoorsX, TestCoorsY, TestCoorsZ, MinLength, MinLanes, &SouthEndNode, &NorthEndNode, &LanesGoingSouth, &LanesGoingNorth, &CentralReservationWidth, bIgnoreSwitchedOffNodes);
		std::get<1>(return_values) = SouthEndNode;
		std::get<2>(return_values) = NorthEndNode;
		std::get<3>(return_values) = LanesGoingSouth;
		std::get<4>(return_values) = LanesGoingNorth;
		std::get<5>(return_values) = CentralReservationWidth;

		return return_values;
	}

	static bool LUA_NATIVE_PATHFIND_ARE_NODES_LOADED_FOR_AREA(float MinX, float MinY, float MaxX, float MaxY)
	{
		auto retval = (bool)PATHFIND::ARE_NODES_LOADED_FOR_AREA(MinX, MinY, MaxX, MaxY);
		return retval;
	}

	static bool LUA_NATIVE_PATHFIND_REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(float MinX, float MinY, float MaxX, float MaxY)
	{
		auto retval = (bool)PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(MinX, MinY, MaxX, MaxY);
		return retval;
	}

	static std::tuple<bool, Vector3, int> LUA_NATIVE_PATHFIND_GET_RANDOM_VEHICLE_NODE(float centrePointX, float centrePointY, float centrePointZ, float radius, int MinLanes, bool bAvoidDeadEnds, bool bAvoidHighways, Vector3 vecReturn, int NodeAddress)
	{
		std::tuple<bool, Vector3, int> return_values;
		std::get<0>(return_values) = (bool)PATHFIND::GET_RANDOM_VEHICLE_NODE(centrePointX, centrePointY, centrePointZ, radius, MinLanes, bAvoidDeadEnds, bAvoidHighways, &vecReturn, &NodeAddress);
		std::get<1>(return_values) = vecReturn;
		std::get<2>(return_values) = NodeAddress;

		return return_values;
	}

	static std::tuple<Vector3, float> LUA_NATIVE_PATHFIND_GET_SPAWN_DATA_FOR_ROAD_NODE_(int nodeId, float x, float y, float z, Vector3 outCoords, float heading)
	{
		std::tuple<Vector3, float> return_values;
		PATHFIND::_GET_SPAWN_DATA_FOR_ROAD_NODE(nodeId, x, y, z, &outCoords, &heading);
		std::get<0>(return_values) = outCoords;
		std::get<1>(return_values) = heading;

		return return_values;
	}

	static bool LUA_NATIVE_PATHFIND_IS_POINT_ON_ROAD(float vPosX, float vPosY, float vPosZ, Vehicle VehicleIndex)
	{
		auto retval = (bool)PATHFIND::IS_POINT_ON_ROAD(vPosX, vPosY, vPosZ, VehicleIndex);
		return retval;
	}

	static void LUA_NATIVE_PATHFIND_SET_PED_PATHS_IN_AREA(float VecMinCoorsX, float VecMinCoorsY, float VecMinCoorsZ, float VecMaxCoorsX, float VecMaxCoorsY, float VecMaxCoorsZ, bool bActive, bool bForceAbortCurrentPath)
	{
		PATHFIND::SET_PED_PATHS_IN_AREA(VecMinCoorsX, VecMinCoorsY, VecMinCoorsZ, VecMaxCoorsX, VecMaxCoorsY, VecMaxCoorsZ, bActive, bForceAbortCurrentPath);
	}

	static void LUA_NATIVE_PATHFIND_0xE5EF9DE716FF737E_(Any p0, Any p1, Any p2)
	{
		PATHFIND::_0xE5EF9DE716FF737E(p0, p1, p2);
	}

	static std::tuple<bool, Vector3> LUA_NATIVE_PATHFIND_GET_SAFE_COORD_FOR_PED(float VecCoorsX, float VecCoorsY, float VecCoorsZ, bool bOnlyOnPavement, Vector3 VecReturnSafeCoors, int iFlags)
	{
		std::tuple<bool, Vector3> return_values;
		std::get<0>(return_values) = (bool)PATHFIND::GET_SAFE_COORD_FOR_PED(VecCoorsX, VecCoorsY, VecCoorsZ, bOnlyOnPavement, &VecReturnSafeCoors, iFlags);
		std::get<1>(return_values) = VecReturnSafeCoors;

		return return_values;
	}

	static void LUA_NATIVE_PATHFIND_SET_PED_PATHS_BACK_TO_ORIGINAL(float VecCoorsMinX, float VecCoorsMinY, float VecCoorsMinZ, float VecCoorsMaxX, float VecCoorsMaxY, float VecCoorsMaxZ, bool bForceAbortCurrentPath)
	{
		PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(VecCoorsMinX, VecCoorsMinY, VecCoorsMinZ, VecCoorsMaxX, VecCoorsMaxY, VecCoorsMaxZ, bForceAbortCurrentPath);
	}

	static void LUA_NATIVE_PATHFIND_0xCF213A5FC3ABFC08_(Any p0, Any p1, Any p2)
	{
		PATHFIND::_0xCF213A5FC3ABFC08(p0, p1, p2);
	}

	static void LUA_NATIVE_PATHFIND_ADD_NAVMESH_REQUIRED_REGION(float x, float y, float radius)
	{
		PATHFIND::ADD_NAVMESH_REQUIRED_REGION(x, y, radius);
	}

	static bool LUA_NATIVE_PATHFIND_IS_NAVMESH_LOADED_IN_AREA(float vMinX, float vMinY, float vMinZ, float vMaxX, float vMaxY, float vMaxZ)
	{
		auto retval = (bool)PATHFIND::IS_NAVMESH_LOADED_IN_AREA(vMinX, vMinY, vMinZ, vMaxX, vMaxY, vMaxZ);
		return retval;
	}

	static int LUA_NATIVE_PATHFIND_GET_NUM_NAVMESHES_EXISTING_IN_AREA(float vMinX, float vMinY, float vMinZ, float vMaxX, float vMaxY, float vMaxZ)
	{
		auto retval = PATHFIND::GET_NUM_NAVMESHES_EXISTING_IN_AREA(vMinX, vMinY, vMinZ, vMaxX, vMaxY, vMaxZ);
		return retval;
	}

	static bool LUA_NATIVE_PATHFIND_NAVMESH_ACTIVATE_SWAP_(sol::stack_object name)
	{
		auto retval = (bool)PATHFIND::_NAVMESH_ACTIVATE_SWAP(name.is<const char*>() ? name.as<const char*>() : nullptr);
		return retval;
	}

	static bool LUA_NATIVE_PATHFIND_NAVMESH_DEACTIVATE_SWAP_(sol::stack_object name)
	{
		auto retval = (bool)PATHFIND::_NAVMESH_DEACTIVATE_SWAP(name.is<const char*>() ? name.as<const char*>() : nullptr);
		return retval;
	}

	static bool LUA_NATIVE_PATHFIND_NAVMESH_IS_SWAP_ACTIVE_(sol::stack_object name)
	{
		auto retval = (bool)PATHFIND::_NAVMESH_IS_SWAP_ACTIVE(name.is<const char*>() ? name.as<const char*>() : nullptr);
		return retval;
	}

	static bool LUA_NATIVE_PATHFIND_NAVMESH_DOES_SWAP_EXIST_(sol::stack_object name)
	{
		auto retval = (bool)PATHFIND::_NAVMESH_DOES_SWAP_EXIST(name.is<const char*>() ? name.as<const char*>() : nullptr);
		return retval;
	}

	static int LUA_NATIVE_PATHFIND_0x5A3B54ADDF5472A3_(sol::stack_object p0)
	{
		auto retval = PATHFIND::_0x5A3B54ADDF5472A3(p0.is<const char*>() ? p0.as<const char*>() : nullptr);
		return retval;
	}

	static void* LUA_NATIVE_PATHFIND_0xA33914B00CA55756_(sol::stack_object p0, int p1)
	{
		auto retval = PATHFIND::_0xA33914B00CA55756(p0.is<const char*>() ? p0.as<const char*>() : nullptr, p1);
		return retval;
	}

	static bool LUA_NATIVE_PATHFIND_NAVMESH_ASSIGN_NAVMESH_TO_VEHICLE_(Vehicle vehicle, sol::stack_object navMeshName)
	{
		auto retval = (bool)PATHFIND::_NAVMESH_ASSIGN_NAVMESH_TO_VEHICLE(vehicle, navMeshName.is<const char*>() ? navMeshName.as<const char*>() : nullptr);
		return retval;
	}

	static int LUA_NATIVE_PATHFIND_ADD_NAVMESH_BLOCKING_OBJECT(float vPositionX, float vPositionY, float vPositionZ, float vSizeXYZX, float vSizeXYZY, float vSizeXYZZ, float fHeading, bool bPermanent, int iFlags)
	{
		auto retval = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(vPositionX, vPositionY, vPositionZ, vSizeXYZX, vSizeXYZY, vSizeXYZZ, fHeading, bPermanent, iFlags);
		return retval;
	}

	static void LUA_NATIVE_PATHFIND_REMOVE_NAVMESH_BLOCKING_OBJECT(int iObjectId)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iObjectId);
	}

	static bool LUA_NATIVE_PATHFIND_DOES_NAVMESH_BLOCKING_OBJECT_EXIST(int iObjectId)
	{
		auto retval = (bool)PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iObjectId);
		return retval;
	}

	static bool LUA_NATIVE_PATHFIND_ADD_NAVMESH_BLOCKING_VOLUME_(Volume volume, int flags)
	{
		auto retval = (bool)PATHFIND::_ADD_NAVMESH_BLOCKING_VOLUME(volume, flags);
		return retval;
	}

	static void LUA_NATIVE_PATHFIND_REMOVE_NAVMESH_BLOCKING_VOLUME_(Volume volume)
	{
		PATHFIND::_REMOVE_NAVMESH_BLOCKING_VOLUME(volume);
	}

	static bool LUA_NATIVE_PATHFIND_DOES_NAVMESH_BLOCKING_VOLUME_EXIST_(Volume volume)
	{
		auto retval = (bool)PATHFIND::_DOES_NAVMESH_BLOCKING_VOLUME_EXIST(volume);
		return retval;
	}

	static void LUA_NATIVE_PATHFIND_0x6DAD6630AE4A74CB_(Any p0, Any p1)
	{
		PATHFIND::_0x6DAD6630AE4A74CB(p0, p1);
	}

	static int LUA_NATIVE_PATHFIND_NAVMESH_REQUEST_PATH(Ped ped, float x1, float y1, float z1, float x2, float y2, float z2, int bitFlag)
	{
		auto retval = PATHFIND::NAVMESH_REQUEST_PATH(ped, x1, y1, z1, x2, y2, z2, bitFlag);
		return retval;
	}

	static bool LUA_NATIVE_PATHFIND_NAVMESH_CLEAR_REQUESTED_PATH_(int path)
	{
		auto retval = (bool)PATHFIND::_NAVMESH_CLEAR_REQUESTED_PATH(path);
		return retval;
	}

	static int LUA_NATIVE_PATHFIND_NAVMESH_REQUESTED_QUERY_STATUS_(int path)
	{
		auto retval = PATHFIND::_NAVMESH_REQUESTED_QUERY_STATUS(path);
		return retval;
	}

	static bool LUA_NATIVE_PATHFIND_NAVMESH_REQUESTED_PATH_WAYPOINTS_FOUND_(int path)
	{
		auto retval = (bool)PATHFIND::_NAVMESH_REQUESTED_PATH_WAYPOINTS_FOUND(path);
		return retval;
	}

	static int LUA_NATIVE_PATHFIND_NAVMESH_REQUESTED_PATH_WAYPOINTS_TERRAIN_(int path)
	{
		auto retval = PATHFIND::_NAVMESH_REQUESTED_PATH_WAYPOINTS_TERRAIN(path);
		return retval;
	}

	static int LUA_NATIVE_PATHFIND_NAVMESH_REQUESTED_PATH_NUM_WAYPOINTS_(int path)
	{
		auto retval = PATHFIND::_NAVMESH_REQUESTED_PATH_NUM_WAYPOINTS(path);
		return retval;
	}

	static Vector3 LUA_NATIVE_PATHFIND_NAVMESH_REQUESTED_PATH_WAYPOINT_BY_INDEX_(int path, int waypointIndex)
	{
		auto retval = PATHFIND::_NAVMESH_REQUESTED_PATH_WAYPOINT_BY_INDEX(path, waypointIndex);
		return retval;
	}

	static float LUA_NATIVE_PATHFIND_GET_APPROX_FLOOR_FOR_POINT(float x, float y)
	{
		auto retval = PATHFIND::GET_APPROX_FLOOR_FOR_POINT(x, y);
		return retval;
	}

	static void LUA_NATIVE_PATHFIND_SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(float fMultiplier)
	{
		PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(fMultiplier);
	}

	static void LUA_NATIVE_PATHFIND_SET_IGNORE_NO_GPS_FLAG(bool bIgnore)
	{
		PATHFIND::SET_IGNORE_NO_GPS_FLAG(bIgnore);
	}

	static int LUA_NATIVE_PATHFIND_GET_GPS_BLIP_ROUTE_LENGTH()
	{
		auto retval = PATHFIND::GET_GPS_BLIP_ROUTE_LENGTH();
		return retval;
	}

	static Any LUA_NATIVE_PATHFIND_0xEFC535C9FAF563B3_(Any p0)
	{
		auto retval = PATHFIND::_0xEFC535C9FAF563B3(p0);
		return retval;
	}

	static Any LUA_NATIVE_PATHFIND_0x665B21666351CB37_(Any p0, Any p1, Any p2)
	{
		auto retval = PATHFIND::_0x665B21666351CB37(p0, p1, p2);
		return retval;
	}

	static bool LUA_NATIVE_PATHFIND_GET_GPS_BLIP_ROUTE_FOUND()
	{
		auto retval = (bool)PATHFIND::GET_GPS_BLIP_ROUTE_FOUND();
		return retval;
	}

	static Any LUA_NATIVE_PATHFIND_0x54F4D7B6670FBB5A_(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		auto retval = PATHFIND::_0x54F4D7B6670FBB5A(p0, p1, p2, p3, p4);
		return retval;
	}

	static void LUA_NATIVE_PATHFIND_0x34C9AF25649172D0_(Any p0)
	{
		PATHFIND::_0x34C9AF25649172D0(p0);
	}

	static void LUA_NATIVE_PATHFIND_0xF2A2177AC848B3A8_(Volume volume, int p1, int p2)
	{
		PATHFIND::_0xF2A2177AC848B3A8(volume, p1, p2);
	}

	static void LUA_NATIVE_PATHFIND_0x4BDEBEA5702B97A9_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		PATHFIND::_0x4BDEBEA5702B97A9(p0, p1, p2, p3, p4, p5);
	}

	static void LUA_NATIVE_PATHFIND_0x264E9A5CD78C338F_(Any p0)
	{
		PATHFIND::_0x264E9A5CD78C338F(p0);
	}

	static void LUA_NATIVE_PATHFIND_0x869A7015BD4606E9_(Any p0)
	{
		PATHFIND::_0x869A7015BD4606E9(p0);
	}

	static Any LUA_NATIVE_PATHFIND_SIMULATED_ROUTE_CREATE_(float x1, float y1, float z1, float x2, float y2, float z2, int p6)
	{
		auto retval = PATHFIND::_SIMULATED_ROUTE_CREATE(x1, y1, z1, x2, y2, z2, p6);
		return retval;
	}

	static void LUA_NATIVE_PATHFIND_SIMULATED_ROUTE_DELETE_(Any p0)
	{
		PATHFIND::_SIMULATED_ROUTE_DELETE(p0);
	}

	static bool LUA_NATIVE_PATHFIND_SIMULATED_ROUTE_EXISTS_(Any p0)
	{
		auto retval = (bool)PATHFIND::_SIMULATED_ROUTE_EXISTS(p0);
		return retval;
	}

	static bool LUA_NATIVE_PATHFIND_SIMULATED_ROUTE_IS_LOADED(Any p0)
	{
		auto retval = (bool)PATHFIND::SIMULATED_ROUTE_IS_LOADED(p0);
		return retval;
	}

	static void LUA_NATIVE_PATHFIND_SIMULATED_ROUTE_TRAVEL_TO_POINT(Any p0, float p1, float p2)
	{
		PATHFIND::SIMULATED_ROUTE_TRAVEL_TO_POINT(p0, p1, p2);
	}

	static float LUA_NATIVE_PATHFIND_SIMULATED_ROUTE_GET_ETA(Any p0)
	{
		auto retval = PATHFIND::SIMULATED_ROUTE_GET_ETA(p0);
		return retval;
	}

	void init_native_binding_PATHFIND(sol::state& L)
	{
		auto PATHFIND = L["PATHFIND"].get_or_create<sol::table>();
		PATHFIND.set_function("SET_ROADS_IN_AREA", LUA_NATIVE_PATHFIND_SET_ROADS_IN_AREA);
		PATHFIND.set_function("SET_ROADS_IN_ANGLED_AREA", LUA_NATIVE_PATHFIND_SET_ROADS_IN_ANGLED_AREA);
		PATHFIND.set_function("SET_ROADS_IN_VOLUME", LUA_NATIVE_PATHFIND_SET_ROADS_IN_VOLUME);
		PATHFIND.set_function("RESET_ROADS_IN_VOLUME", LUA_NATIVE_PATHFIND_RESET_ROADS_IN_VOLUME);
		PATHFIND.set_function("SET_ROADS_BACK_TO_ORIGINAL", LUA_NATIVE_PATHFIND_SET_ROADS_BACK_TO_ORIGINAL);
		PATHFIND.set_function("SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA", LUA_NATIVE_PATHFIND_SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA);
		PATHFIND.set_function("0xAFE2AE66F6251C66_", LUA_NATIVE_PATHFIND_0xAFE2AE66F6251C66_);
		PATHFIND.set_function("0x4358BCF14C91761C_", LUA_NATIVE_PATHFIND_0x4358BCF14C91761C_);
		PATHFIND.set_function("0xB03944057FD735BA_", LUA_NATIVE_PATHFIND_0xB03944057FD735BA_);
		PATHFIND.set_function("0x6C3F12ECEB6D2E2A_", LUA_NATIVE_PATHFIND_0x6C3F12ECEB6D2E2A_);
		PATHFIND.set_function("0x5A4E1A41E3A02AD0_", LUA_NATIVE_PATHFIND_0x5A4E1A41E3A02AD0_);
		PATHFIND.set_function("GET_CLOSEST_VEHICLE_NODE", LUA_NATIVE_PATHFIND_GET_CLOSEST_VEHICLE_NODE);
		PATHFIND.set_function("0xCA27A86CAA4E98ED_", LUA_NATIVE_PATHFIND_0xCA27A86CAA4E98ED_);
		PATHFIND.set_function("GET_CLOSEST_VEHICLE_NODE_WITH_HEADING", LUA_NATIVE_PATHFIND_GET_CLOSEST_VEHICLE_NODE_WITH_HEADING);
		PATHFIND.set_function("GET_NTH_CLOSEST_VEHICLE_NODE", LUA_NATIVE_PATHFIND_GET_NTH_CLOSEST_VEHICLE_NODE);
		PATHFIND.set_function("GET_NTH_CLOSEST_VEHICLE_NODE_ID", LUA_NATIVE_PATHFIND_GET_NTH_CLOSEST_VEHICLE_NODE_ID);
		PATHFIND.set_function("GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING", LUA_NATIVE_PATHFIND_GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING);
		PATHFIND.set_function("GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING", LUA_NATIVE_PATHFIND_GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING);
		PATHFIND.set_function("GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION", LUA_NATIVE_PATHFIND_GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION);
		PATHFIND.set_function("IS_VEHICLE_NODE_ID_VALID", LUA_NATIVE_PATHFIND_IS_VEHICLE_NODE_ID_VALID);
		PATHFIND.set_function("GET_VEHICLE_NODE_POSITION", LUA_NATIVE_PATHFIND_GET_VEHICLE_NODE_POSITION);
		PATHFIND.set_function("GET_VEHICLE_NODE_IS_SWITCHED_OFF", LUA_NATIVE_PATHFIND_GET_VEHICLE_NODE_IS_SWITCHED_OFF);
		PATHFIND.set_function("GET_CLOSEST_ROAD", LUA_NATIVE_PATHFIND_GET_CLOSEST_ROAD);
		PATHFIND.set_function("ARE_NODES_LOADED_FOR_AREA", LUA_NATIVE_PATHFIND_ARE_NODES_LOADED_FOR_AREA);
		PATHFIND.set_function("REQUEST_PATH_NODES_IN_AREA_THIS_FRAME", LUA_NATIVE_PATHFIND_REQUEST_PATH_NODES_IN_AREA_THIS_FRAME);
		PATHFIND.set_function("GET_RANDOM_VEHICLE_NODE", LUA_NATIVE_PATHFIND_GET_RANDOM_VEHICLE_NODE);
		PATHFIND.set_function("GET_SPAWN_DATA_FOR_ROAD_NODE_", LUA_NATIVE_PATHFIND_GET_SPAWN_DATA_FOR_ROAD_NODE_);
		PATHFIND.set_function("IS_POINT_ON_ROAD", LUA_NATIVE_PATHFIND_IS_POINT_ON_ROAD);
		PATHFIND.set_function("SET_PED_PATHS_IN_AREA", LUA_NATIVE_PATHFIND_SET_PED_PATHS_IN_AREA);
		PATHFIND.set_function("0xE5EF9DE716FF737E_", LUA_NATIVE_PATHFIND_0xE5EF9DE716FF737E_);
		PATHFIND.set_function("GET_SAFE_COORD_FOR_PED", LUA_NATIVE_PATHFIND_GET_SAFE_COORD_FOR_PED);
		PATHFIND.set_function("SET_PED_PATHS_BACK_TO_ORIGINAL", LUA_NATIVE_PATHFIND_SET_PED_PATHS_BACK_TO_ORIGINAL);
		PATHFIND.set_function("0xCF213A5FC3ABFC08_", LUA_NATIVE_PATHFIND_0xCF213A5FC3ABFC08_);
		PATHFIND.set_function("ADD_NAVMESH_REQUIRED_REGION", LUA_NATIVE_PATHFIND_ADD_NAVMESH_REQUIRED_REGION);
		PATHFIND.set_function("IS_NAVMESH_LOADED_IN_AREA", LUA_NATIVE_PATHFIND_IS_NAVMESH_LOADED_IN_AREA);
		PATHFIND.set_function("GET_NUM_NAVMESHES_EXISTING_IN_AREA", LUA_NATIVE_PATHFIND_GET_NUM_NAVMESHES_EXISTING_IN_AREA);
		PATHFIND.set_function("NAVMESH_ACTIVATE_SWAP_", LUA_NATIVE_PATHFIND_NAVMESH_ACTIVATE_SWAP_);
		PATHFIND.set_function("NAVMESH_DEACTIVATE_SWAP_", LUA_NATIVE_PATHFIND_NAVMESH_DEACTIVATE_SWAP_);
		PATHFIND.set_function("NAVMESH_IS_SWAP_ACTIVE_", LUA_NATIVE_PATHFIND_NAVMESH_IS_SWAP_ACTIVE_);
		PATHFIND.set_function("NAVMESH_DOES_SWAP_EXIST_", LUA_NATIVE_PATHFIND_NAVMESH_DOES_SWAP_EXIST_);
		PATHFIND.set_function("0x5A3B54ADDF5472A3_", LUA_NATIVE_PATHFIND_0x5A3B54ADDF5472A3_);
		PATHFIND.set_function("0xA33914B00CA55756_", LUA_NATIVE_PATHFIND_0xA33914B00CA55756_);
		PATHFIND.set_function("NAVMESH_ASSIGN_NAVMESH_TO_VEHICLE_", LUA_NATIVE_PATHFIND_NAVMESH_ASSIGN_NAVMESH_TO_VEHICLE_);
		PATHFIND.set_function("ADD_NAVMESH_BLOCKING_OBJECT", LUA_NATIVE_PATHFIND_ADD_NAVMESH_BLOCKING_OBJECT);
		PATHFIND.set_function("REMOVE_NAVMESH_BLOCKING_OBJECT", LUA_NATIVE_PATHFIND_REMOVE_NAVMESH_BLOCKING_OBJECT);
		PATHFIND.set_function("DOES_NAVMESH_BLOCKING_OBJECT_EXIST", LUA_NATIVE_PATHFIND_DOES_NAVMESH_BLOCKING_OBJECT_EXIST);
		PATHFIND.set_function("ADD_NAVMESH_BLOCKING_VOLUME_", LUA_NATIVE_PATHFIND_ADD_NAVMESH_BLOCKING_VOLUME_);
		PATHFIND.set_function("REMOVE_NAVMESH_BLOCKING_VOLUME_", LUA_NATIVE_PATHFIND_REMOVE_NAVMESH_BLOCKING_VOLUME_);
		PATHFIND.set_function("DOES_NAVMESH_BLOCKING_VOLUME_EXIST_", LUA_NATIVE_PATHFIND_DOES_NAVMESH_BLOCKING_VOLUME_EXIST_);
		PATHFIND.set_function("0x6DAD6630AE4A74CB_", LUA_NATIVE_PATHFIND_0x6DAD6630AE4A74CB_);
		PATHFIND.set_function("NAVMESH_REQUEST_PATH", LUA_NATIVE_PATHFIND_NAVMESH_REQUEST_PATH);
		PATHFIND.set_function("NAVMESH_CLEAR_REQUESTED_PATH_", LUA_NATIVE_PATHFIND_NAVMESH_CLEAR_REQUESTED_PATH_);
		PATHFIND.set_function("NAVMESH_REQUESTED_QUERY_STATUS_", LUA_NATIVE_PATHFIND_NAVMESH_REQUESTED_QUERY_STATUS_);
		PATHFIND.set_function("NAVMESH_REQUESTED_PATH_WAYPOINTS_FOUND_", LUA_NATIVE_PATHFIND_NAVMESH_REQUESTED_PATH_WAYPOINTS_FOUND_);
		PATHFIND.set_function("NAVMESH_REQUESTED_PATH_WAYPOINTS_TERRAIN_", LUA_NATIVE_PATHFIND_NAVMESH_REQUESTED_PATH_WAYPOINTS_TERRAIN_);
		PATHFIND.set_function("NAVMESH_REQUESTED_PATH_NUM_WAYPOINTS_", LUA_NATIVE_PATHFIND_NAVMESH_REQUESTED_PATH_NUM_WAYPOINTS_);
		PATHFIND.set_function("NAVMESH_REQUESTED_PATH_WAYPOINT_BY_INDEX_", LUA_NATIVE_PATHFIND_NAVMESH_REQUESTED_PATH_WAYPOINT_BY_INDEX_);
		PATHFIND.set_function("GET_APPROX_FLOOR_FOR_POINT", LUA_NATIVE_PATHFIND_GET_APPROX_FLOOR_FOR_POINT);
		PATHFIND.set_function("SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME", LUA_NATIVE_PATHFIND_SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME);
		PATHFIND.set_function("SET_IGNORE_NO_GPS_FLAG", LUA_NATIVE_PATHFIND_SET_IGNORE_NO_GPS_FLAG);
		PATHFIND.set_function("GET_GPS_BLIP_ROUTE_LENGTH", LUA_NATIVE_PATHFIND_GET_GPS_BLIP_ROUTE_LENGTH);
		PATHFIND.set_function("0xEFC535C9FAF563B3_", LUA_NATIVE_PATHFIND_0xEFC535C9FAF563B3_);
		PATHFIND.set_function("0x665B21666351CB37_", LUA_NATIVE_PATHFIND_0x665B21666351CB37_);
		PATHFIND.set_function("GET_GPS_BLIP_ROUTE_FOUND", LUA_NATIVE_PATHFIND_GET_GPS_BLIP_ROUTE_FOUND);
		PATHFIND.set_function("0x54F4D7B6670FBB5A_", LUA_NATIVE_PATHFIND_0x54F4D7B6670FBB5A_);
		PATHFIND.set_function("0x34C9AF25649172D0_", LUA_NATIVE_PATHFIND_0x34C9AF25649172D0_);
		PATHFIND.set_function("0xF2A2177AC848B3A8_", LUA_NATIVE_PATHFIND_0xF2A2177AC848B3A8_);
		PATHFIND.set_function("0x4BDEBEA5702B97A9_", LUA_NATIVE_PATHFIND_0x4BDEBEA5702B97A9_);
		PATHFIND.set_function("0x264E9A5CD78C338F_", LUA_NATIVE_PATHFIND_0x264E9A5CD78C338F_);
		PATHFIND.set_function("0x869A7015BD4606E9_", LUA_NATIVE_PATHFIND_0x869A7015BD4606E9_);
		PATHFIND.set_function("SIMULATED_ROUTE_CREATE_", LUA_NATIVE_PATHFIND_SIMULATED_ROUTE_CREATE_);
		PATHFIND.set_function("SIMULATED_ROUTE_DELETE_", LUA_NATIVE_PATHFIND_SIMULATED_ROUTE_DELETE_);
		PATHFIND.set_function("SIMULATED_ROUTE_EXISTS_", LUA_NATIVE_PATHFIND_SIMULATED_ROUTE_EXISTS_);
		PATHFIND.set_function("SIMULATED_ROUTE_IS_LOADED", LUA_NATIVE_PATHFIND_SIMULATED_ROUTE_IS_LOADED);
		PATHFIND.set_function("SIMULATED_ROUTE_TRAVEL_TO_POINT", LUA_NATIVE_PATHFIND_SIMULATED_ROUTE_TRAVEL_TO_POINT);
		PATHFIND.set_function("SIMULATED_ROUTE_GET_ETA", LUA_NATIVE_PATHFIND_SIMULATED_ROUTE_GET_ETA);
	}
}
