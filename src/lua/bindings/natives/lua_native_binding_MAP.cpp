#include "lua_native_binding.hpp"
#include "game/rdr/Natives.hpp"

namespace Lua::native
{
	static Blip LUA_NATIVE_MAP_GET_BLIP_FROM_ENTITY(Entity entityIndex)
	{
		auto retval = MAP::GET_BLIP_FROM_ENTITY(entityIndex);
		return retval;
	}

	static Blip LUA_NATIVE_MAP_GET_MAIN_PLAYER_BLIP_ID()
	{
		auto retval = MAP::GET_MAIN_PLAYER_BLIP_ID();
		return retval;
	}

	static Blip LUA_NATIVE_MAP_BLIP_ADD_FOR_STYLE_(Hash styleHash)
	{
		auto retval = MAP::_BLIP_ADD_FOR_STYLE(styleHash);
		return retval;
	}

	static Blip LUA_NATIVE_MAP_BLIP_ADD_FOR_COORDS(Hash blipHash, float x, float y, float z)
	{
		auto retval = MAP::BLIP_ADD_FOR_COORDS(blipHash, x, y, z);
		return retval;
	}

	static Blip LUA_NATIVE_MAP_BLIP_ADD_FOR_ENTITY(Hash blipHash, Entity entity)
	{
		auto retval = MAP::BLIP_ADD_FOR_ENTITY(blipHash, entity);
		return retval;
	}

	static Blip LUA_NATIVE_MAP_BLIP_ADD_FOR_PICKUP_PLACEMENT(Hash blipHash, Pickup pickup)
	{
		auto retval = MAP::BLIP_ADD_FOR_PICKUP_PLACEMENT(blipHash, pickup);
		return retval;
	}

	static Blip LUA_NATIVE_MAP_BLIP_ADD_FOR_RADIUS(Hash blipHash, float x, float y, float z, float radius)
	{
		auto retval = MAP::BLIP_ADD_FOR_RADIUS(blipHash, x, y, z, radius);
		return retval;
	}

	static Blip LUA_NATIVE_MAP_BLIP_ADD_FOR_AREA_(Hash blipHash, float x, float y, float z, float scaleX, float scaleY, float scaleZ, int p7)
	{
		auto retval = MAP::_BLIP_ADD_FOR_AREA(blipHash, x, y, z, scaleX, scaleY, scaleZ, p7);
		return retval;
	}

	static Blip LUA_NATIVE_MAP_BLIP_ADD_FOR_VOLUME_(Hash blipHash, Volume volume)
	{
		auto retval = MAP::_BLIP_ADD_FOR_VOLUME(blipHash, volume);
		return retval;
	}

	static bool LUA_NATIVE_MAP_BLIP_SET_STYLE_(Blip blip, Hash styleHash)
	{
		auto retval = (bool)MAP::_BLIP_SET_STYLE(blip, styleHash);
		return retval;
	}

	static bool LUA_NATIVE_MAP_BLIP_ADD_STYLE_(Blip blip, Hash styleHash)
	{
		auto retval = (bool)MAP::_BLIP_ADD_STYLE(blip, styleHash);
		return retval;
	}

	static bool LUA_NATIVE_MAP_BLIP_ADD_MODIFIER(Blip blip, Hash modifierHash)
	{
		auto retval = (bool)MAP::BLIP_ADD_MODIFIER(blip, modifierHash);
		return retval;
	}

	static bool LUA_NATIVE_MAP_BLIP_REMOVE_MODIFIER(Blip blip, Hash modifierHash)
	{
		auto retval = (bool)MAP::BLIP_REMOVE_MODIFIER(blip, modifierHash);
		return retval;
	}

	static void LUA_NATIVE_MAP_0x250C75EB1728CC0D_(Blip blip)
	{
		MAP::_0x250C75EB1728CC0D(blip);
	}

	static void LUA_NATIVE_MAP_SET_BLIP_FLASH_TIMER(Blip blip, int blipType, Hash blipHash)
	{
		MAP::SET_BLIP_FLASH_TIMER(blip, blipType, blipHash);
	}

	static std::tuple<bool, int, Hash> LUA_NATIVE_MAP_SET_BLIP_FLASHES(Blip blip, int p1, Hash p2)
	{
		std::tuple<bool, int, Hash> return_values;
		std::get<0>(return_values) = (bool)MAP::SET_BLIP_FLASHES(blip, &p1, &p2);
		std::get<1>(return_values) = p1;
		std::get<2>(return_values) = p2;

		return return_values;
	}

	static void LUA_NATIVE_MAP_TRIGGER_SONAR_BLIP(Hash typeHash, float VecCoorsX, float VecCoorsY, float VecCoorsZ)
	{
		MAP::TRIGGER_SONAR_BLIP(typeHash, VecCoorsX, VecCoorsY, VecCoorsZ);
	}

	static void LUA_NATIVE_MAP_TRIGGER_SONAR_BLIP_ON_ENTITY_(Hash typeHash, Entity entity)
	{
		MAP::_TRIGGER_SONAR_BLIP_ON_ENTITY(typeHash, entity);
	}

	static void LUA_NATIVE_MAP_ALLOW_SONAR_BLIPS(bool bSet)
	{
		MAP::ALLOW_SONAR_BLIPS(bSet);
	}

	static void LUA_NATIVE_MAP_SET_BLIP_COORDS(Blip BlipIndex, float VecCoorsX, float VecCoorsY, float VecCoorsZ)
	{
		MAP::SET_BLIP_COORDS(BlipIndex, VecCoorsX, VecCoorsY, VecCoorsZ);
	}

	static Vector3 LUA_NATIVE_MAP_GET_BLIP_COORDS(Blip BlipIndex)
	{
		auto retval = MAP::GET_BLIP_COORDS(BlipIndex);
		return retval;
	}

	static void LUA_NATIVE_MAP_SET_BLIP_SPRITE(Blip blip, Hash hash, bool p2)
	{
		MAP::SET_BLIP_SPRITE(blip, hash, p2);
	}

	static Any LUA_NATIVE_MAP_0x01B928CA2E198B01_(Any p0)
	{
		auto retval = MAP::_0x01B928CA2E198B01(p0);
		return retval;
	}

	static void LUA_NATIVE_MAP_SET_BLIP_NAME_FROM_TEXT_FILE(Blip blip, sol::stack_object pTextLabel)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(blip, pTextLabel.is<const char*>() ? pTextLabel.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_MAP_SET_BLIP_NAME_(Blip blip, sol::stack_object name)
	{
		MAP::_SET_BLIP_NAME(blip, name.is<const char*>() ? name.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_MAP_SET_BLIP_NAME_TO_PLAYER_NAME(Blip blip, Player PlayerIndex)
	{
		MAP::SET_BLIP_NAME_TO_PLAYER_NAME(blip, PlayerIndex);
	}

	static void LUA_NATIVE_MAP_SET_BLIP_ROTATION(Blip blipIndex, int iDegrees)
	{
		MAP::SET_BLIP_ROTATION(blipIndex, iDegrees);
	}

	static void LUA_NATIVE_MAP_SET_BLIP_SCALE(Blip blip, float scale)
	{
		MAP::SET_BLIP_SCALE(blip, scale);
	}

	static Blip LUA_NATIVE_MAP_REMOVE_BLIP(Blip BlipId)
	{
		MAP::REMOVE_BLIP(&BlipId);
		return BlipId;
	}

	static bool LUA_NATIVE_MAP_DOES_BLIP_EXIST(Blip blipIndex)
	{
		auto retval = (bool)MAP::DOES_BLIP_EXIST(blipIndex);
		return retval;
	}

	static bool LUA_NATIVE_MAP_DOES_ENTITY_HAVE_BLIP_(Entity entity)
	{
		auto retval = (bool)MAP::_DOES_ENTITY_HAVE_BLIP(entity);
		return retval;
	}

	static void LUA_NATIVE_MAP_SET_RADAR_ZOOM(int ZoomValue)
	{
		MAP::SET_RADAR_ZOOM(ZoomValue);
	}

	static void LUA_NATIVE_MAP_ABANDON_BLIP_(Blip blip)
	{
		MAP::_ABANDON_BLIP(blip);
	}

	static bool LUA_NATIVE_MAP_IS_BLIP_ATTACHED_TO_ANY_ENTITY_(Blip blip)
	{
		auto retval = (bool)MAP::_IS_BLIP_ATTACHED_TO_ANY_ENTITY(blip);
		return retval;
	}

	static bool LUA_NATIVE_MAP_IS_BLIP_ON_MINIMAP(Blip BlipIndex)
	{
		auto retval = (bool)MAP::IS_BLIP_ON_MINIMAP(BlipIndex);
		return retval;
	}

	static Any LUA_NATIVE_MAP_FORCE_SONAR_BLIPS_THIS_FRAME()
	{
		auto retval = MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
		return retval;
	}

	static void LUA_NATIVE_MAP_SET_GPS_FLAGS(int iFlags, float fBlippedRouteDisplayDistance)
	{
		MAP::SET_GPS_FLAGS(iFlags, fBlippedRouteDisplayDistance);
	}

	static void LUA_NATIVE_MAP_CLEAR_GPS_FLAGS()
	{
		MAP::CLEAR_GPS_FLAGS();
	}

	static void LUA_NATIVE_MAP_SET_GPS_CUSTOM_ROUTE_RENDER(bool bOn, int iRouteWidthMiniMap, int iRouteWidthPauseMap)
	{
		MAP::SET_GPS_CUSTOM_ROUTE_RENDER(bOn, iRouteWidthMiniMap, iRouteWidthPauseMap);
	}

	static void LUA_NATIVE_MAP_CLEAR_GPS_CUSTOM_ROUTE()
	{
		MAP::CLEAR_GPS_CUSTOM_ROUTE();
	}

	static void LUA_NATIVE_MAP_START_GPS_MULTI_ROUTE(Hash colorNameHash, bool bOnFoot, bool inVehicle)
	{
		MAP::START_GPS_MULTI_ROUTE(colorNameHash, bOnFoot, inVehicle);
	}

	static void LUA_NATIVE_MAP_ADD_POINT_TO_GPS_MULTI_ROUTE(float VecCoorsX, float VecCoorsY, float VecCoorsZ, bool p3)
	{
		MAP::ADD_POINT_TO_GPS_MULTI_ROUTE(VecCoorsX, VecCoorsY, VecCoorsZ, p3);
	}

	static void LUA_NATIVE_MAP_SET_GPS_MULTI_ROUTE_RENDER(bool bOn)
	{
		MAP::SET_GPS_MULTI_ROUTE_RENDER(bOn);
	}

	static void LUA_NATIVE_MAP_CLEAR_GPS_MULTI_ROUTE()
	{
		MAP::CLEAR_GPS_MULTI_ROUTE();
	}

	static void LUA_NATIVE_MAP_START_GPS_CUSTOM_ROUTE_FROM_WAYPOINT_RECORDING_ROUTE_(sol::stack_object waypointRecording, int point, int numPoints, Hash colorNameHash, bool p4, bool p5)
	{
		MAP::_START_GPS_CUSTOM_ROUTE_FROM_WAYPOINT_RECORDING_ROUTE(waypointRecording.is<const char*>() ? waypointRecording.as<const char*>() : nullptr, point, numPoints, colorNameHash, p4, p5);
	}

	static void LUA_NATIVE_MAP_CLEAR_GPS_PLAYER_WAYPOINT()
	{
		MAP::CLEAR_GPS_PLAYER_WAYPOINT();
	}

	static void LUA_NATIVE_MAP_0xD3F58E9316B7FC2A_(Any p0)
	{
		MAP::_0xD3F58E9316B7FC2A(p0);
	}

	static void LUA_NATIVE_MAP_SET_WAYPOINT_OFF()
	{
		MAP::SET_WAYPOINT_OFF();
	}

	static bool LUA_NATIVE_MAP_IS_WAYPOINT_ACTIVE()
	{
		auto retval = (bool)MAP::IS_WAYPOINT_ACTIVE();
		return retval;
	}

	static Vector3 LUA_NATIVE_MAP_GET_WAYPOINT_COORDS_()
	{
		auto retval = MAP::_GET_WAYPOINT_COORDS();
		return retval;
	}

	static bool LUA_NATIVE_MAP_0xF08E42BFA46BDFF8_(Any p0, Any p1)
	{
		auto retval = (bool)MAP::_0xF08E42BFA46BDFF8(p0, p1);
		return retval;
	}

	static void LUA_NATIVE_MAP_HIDE_ACTIVE_POINTS_OF_INTEREST_()
	{
		MAP::_HIDE_ACTIVE_POINTS_OF_INTEREST();
	}

	static void LUA_NATIVE_MAP_SHOW_ACTIVE_POINTS_OF_INTEREST_()
	{
		MAP::_SHOW_ACTIVE_POINTS_OF_INTEREST();
	}

	static Any LUA_NATIVE_MAP_0xF47A1EB2A538A3A3_()
	{
		auto retval = MAP::_0xF47A1EB2A538A3A3();
		return retval;
	}

	static std::tuple<bool, Vector3> LUA_NATIVE_MAP_FIND_CLOSEST_GPS_POSITION_(float x, float y, float z, Vector3 outPosition)
	{
		std::tuple<bool, Vector3> return_values;
		std::get<0>(return_values) = (bool)MAP::_FIND_CLOSEST_GPS_POSITION(x, y, z, &outPosition);
		std::get<1>(return_values) = outPosition;

		return return_values;
	}

	static void LUA_NATIVE_MAP_DISPLAY_RADAR(bool bDisplayRadarFlag)
	{
		MAP::DISPLAY_RADAR(bDisplayRadarFlag);
	}

	static void LUA_NATIVE_MAP_SET_RADAR_CONFIG_TYPE_(Hash configHash, Hash p1)
	{
		MAP::_SET_RADAR_CONFIG_TYPE(configHash, p1);
	}

	static void LUA_NATIVE_MAP_ADD_PROP_TO_MINIMAP_(Hash minimapProp, float x, float y, float rotation, int p4)
	{
		MAP::_ADD_PROP_TO_MINIMAP(minimapProp, x, y, rotation, p4);
	}

	static void LUA_NATIVE_MAP_REMOVE_PROP_FROM_MINIMAP_(Hash minimapProp)
	{
		MAP::_REMOVE_PROP_FROM_MINIMAP(minimapProp);
	}

	static void LUA_NATIVE_MAP_SET_RADAR_AS_EXTERIOR_THIS_FRAME()
	{
		MAP::SET_RADAR_AS_EXTERIOR_THIS_FRAME();
	}

	static void LUA_NATIVE_MAP_SET_MINIMAP_HIDE_FOW(bool bHideFow)
	{
		MAP::SET_MINIMAP_HIDE_FOW(bHideFow);
	}

	static void LUA_NATIVE_MAP_SET_FOW_UPDATE_PLAYER_OVERRIDE_(bool toggle, Hash p1)
	{
		MAP::_SET_FOW_UPDATE_PLAYER_OVERRIDE(toggle, p1);
	}

	static void LUA_NATIVE_MAP_SET_MINIMAP_FOW_OVERRIDE_REVEAL_SCALE_(float scale, Hash p1)
	{
		MAP::_SET_MINIMAP_FOW_OVERRIDE_REVEAL_SCALE(scale, p1);
	}

	static void LUA_NATIVE_MAP_SET_MINIMAP_FOW_SHOULD_UPDATE_(bool toggle, Hash p1)
	{
		MAP::_SET_MINIMAP_FOW_SHOULD_UPDATE(toggle, p1);
	}

	static void LUA_NATIVE_MAP_SET_MINIMAP_FOW_REVEAL_COORDINATE(float worldPOSX, float worldPOSY, float worldPOSZ, Hash p3)
	{
		MAP::SET_MINIMAP_FOW_REVEAL_COORDINATE(worldPOSX, worldPOSY, worldPOSZ, p3);
	}

	static void LUA_NATIVE_MAP_SET_MINIMAP_FOW_REVEAL_VOLUME(Volume volume, Hash p1)
	{
		MAP::SET_MINIMAP_FOW_REVEAL_VOLUME(volume, p1);
	}

	static void LUA_NATIVE_MAP_RESET_MINIMAP_FOW(Hash hash)
	{
		MAP::RESET_MINIMAP_FOW(hash);
	}

	static void LUA_NATIVE_MAP_REVEAL_MINIMAP_FOW_(Hash hash)
	{
		MAP::_REVEAL_MINIMAP_FOW(hash);
	}

	static void LUA_NATIVE_MAP_SET_MINIMAP_ZONE_(Hash zone)
	{
		MAP::_SET_MINIMAP_ZONE(zone);
	}

	static void LUA_NATIVE_MAP_LOCK_MINIMAP_ANGLE(int iAngle)
	{
		MAP::LOCK_MINIMAP_ANGLE(iAngle);
	}

	static void LUA_NATIVE_MAP_UNLOCK_MINIMAP_ANGLE()
	{
		MAP::UNLOCK_MINIMAP_ANGLE();
	}

	static void LUA_NATIVE_MAP_MAP_ENABLE_REGION_BLIP_(Hash regionHash, Hash styleHash)
	{
		MAP::_MAP_ENABLE_REGION_BLIP(regionHash, styleHash);
	}

	static void LUA_NATIVE_MAP_MAP_DISABLE_REGION_BLIP_(Hash regionHash)
	{
		MAP::_MAP_DISABLE_REGION_BLIP(regionHash);
	}

	static bool LUA_NATIVE_MAP_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE_(Hash regionHash, Hash styleHash)
	{
		auto retval = (bool)MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(regionHash, styleHash);
		return retval;
	}

	static void LUA_NATIVE_MAP_MAP_DISCOVER_REGION_(Hash discoveryHash)
	{
		MAP::_MAP_DISCOVER_REGION(discoveryHash);
	}

	static void LUA_NATIVE_MAP_MAP_DISCOVERY_SET_ENABLED_(Hash discoveryHash)
	{
		MAP::_MAP_DISCOVERY_SET_ENABLED(discoveryHash);
	}

	static bool LUA_NATIVE_MAP_MAP_IS_DISCOVERY_ACTIVE_(Hash discoveryHash)
	{
		auto retval = (bool)MAP::_MAP_IS_DISCOVERY_ACTIVE(discoveryHash);
		return retval;
	}

	static void LUA_NATIVE_MAP_SET_PAUSEMAP_COORDS_WITH_RADIUS_(float x, float y, float z, float radius)
	{
		MAP::_SET_PAUSEMAP_COORDS_WITH_RADIUS(x, y, z, radius);
	}

	static void LUA_NATIVE_MAP_0x7C9F4CDF402CA82A_()
	{
		MAP::_0x7C9F4CDF402CA82A();
	}

	static void LUA_NATIVE_MAP_0x44813684F72B563C_(Entity entity, Any p1)
	{
		MAP::_0x44813684F72B563C(entity, p1);
	}

	static void LUA_NATIVE_MAP_0x97F6F158CC5B5CA2_(Entity entity, Any p1)
	{
		MAP::_0x97F6F158CC5B5CA2(entity, p1);
	}

	static void LUA_NATIVE_MAP_0xBB68D4D3CA3DE402_(Any p0, Any p1)
	{
		MAP::_0xBB68D4D3CA3DE402(p0, p1);
	}

	static Any LUA_NATIVE_MAP_0x3CB8859F04763C78_(Any p0, Any p1)
	{
		auto retval = MAP::_0x3CB8859F04763C78(p0, p1);
		return retval;
	}

	static void LUA_NATIVE_MAP_0x7563CBCA99253D1A_(Entity entity, Hash blip)
	{
		MAP::_0x7563CBCA99253D1A(entity, blip);
	}

	static void LUA_NATIVE_MAP_0x1726963E6049DB53_(Any p0)
	{
		MAP::_0x1726963E6049DB53(p0);
	}

	void init_native_binding_MAP(sol::state& L)
	{
		auto MAP = L["MAP"].get_or_create<sol::table>();
		MAP.set_function("GET_BLIP_FROM_ENTITY", LUA_NATIVE_MAP_GET_BLIP_FROM_ENTITY);
		MAP.set_function("GET_MAIN_PLAYER_BLIP_ID", LUA_NATIVE_MAP_GET_MAIN_PLAYER_BLIP_ID);
		MAP.set_function("BLIP_ADD_FOR_STYLE_", LUA_NATIVE_MAP_BLIP_ADD_FOR_STYLE_);
		MAP.set_function("BLIP_ADD_FOR_COORDS", LUA_NATIVE_MAP_BLIP_ADD_FOR_COORDS);
		MAP.set_function("BLIP_ADD_FOR_ENTITY", LUA_NATIVE_MAP_BLIP_ADD_FOR_ENTITY);
		MAP.set_function("BLIP_ADD_FOR_PICKUP_PLACEMENT", LUA_NATIVE_MAP_BLIP_ADD_FOR_PICKUP_PLACEMENT);
		MAP.set_function("BLIP_ADD_FOR_RADIUS", LUA_NATIVE_MAP_BLIP_ADD_FOR_RADIUS);
		MAP.set_function("BLIP_ADD_FOR_AREA_", LUA_NATIVE_MAP_BLIP_ADD_FOR_AREA_);
		MAP.set_function("BLIP_ADD_FOR_VOLUME_", LUA_NATIVE_MAP_BLIP_ADD_FOR_VOLUME_);
		MAP.set_function("BLIP_SET_STYLE_", LUA_NATIVE_MAP_BLIP_SET_STYLE_);
		MAP.set_function("BLIP_ADD_STYLE_", LUA_NATIVE_MAP_BLIP_ADD_STYLE_);
		MAP.set_function("BLIP_ADD_MODIFIER", LUA_NATIVE_MAP_BLIP_ADD_MODIFIER);
		MAP.set_function("BLIP_REMOVE_MODIFIER", LUA_NATIVE_MAP_BLIP_REMOVE_MODIFIER);
		MAP.set_function("0x250C75EB1728CC0D_", LUA_NATIVE_MAP_0x250C75EB1728CC0D_);
		MAP.set_function("SET_BLIP_FLASH_TIMER", LUA_NATIVE_MAP_SET_BLIP_FLASH_TIMER);
		MAP.set_function("SET_BLIP_FLASHES", LUA_NATIVE_MAP_SET_BLIP_FLASHES);
		MAP.set_function("TRIGGER_SONAR_BLIP", LUA_NATIVE_MAP_TRIGGER_SONAR_BLIP);
		MAP.set_function("TRIGGER_SONAR_BLIP_ON_ENTITY_", LUA_NATIVE_MAP_TRIGGER_SONAR_BLIP_ON_ENTITY_);
		MAP.set_function("ALLOW_SONAR_BLIPS", LUA_NATIVE_MAP_ALLOW_SONAR_BLIPS);
		MAP.set_function("SET_BLIP_COORDS", LUA_NATIVE_MAP_SET_BLIP_COORDS);
		MAP.set_function("GET_BLIP_COORDS", LUA_NATIVE_MAP_GET_BLIP_COORDS);
		MAP.set_function("SET_BLIP_SPRITE", LUA_NATIVE_MAP_SET_BLIP_SPRITE);
		MAP.set_function("0x01B928CA2E198B01_", LUA_NATIVE_MAP_0x01B928CA2E198B01_);
		MAP.set_function("SET_BLIP_NAME_FROM_TEXT_FILE", LUA_NATIVE_MAP_SET_BLIP_NAME_FROM_TEXT_FILE);
		MAP.set_function("SET_BLIP_NAME_", LUA_NATIVE_MAP_SET_BLIP_NAME_);
		MAP.set_function("SET_BLIP_NAME_TO_PLAYER_NAME", LUA_NATIVE_MAP_SET_BLIP_NAME_TO_PLAYER_NAME);
		MAP.set_function("SET_BLIP_ROTATION", LUA_NATIVE_MAP_SET_BLIP_ROTATION);
		MAP.set_function("SET_BLIP_SCALE", LUA_NATIVE_MAP_SET_BLIP_SCALE);
		MAP.set_function("REMOVE_BLIP", LUA_NATIVE_MAP_REMOVE_BLIP);
		MAP.set_function("DOES_BLIP_EXIST", LUA_NATIVE_MAP_DOES_BLIP_EXIST);
		MAP.set_function("DOES_ENTITY_HAVE_BLIP_", LUA_NATIVE_MAP_DOES_ENTITY_HAVE_BLIP_);
		MAP.set_function("SET_RADAR_ZOOM", LUA_NATIVE_MAP_SET_RADAR_ZOOM);
		MAP.set_function("ABANDON_BLIP_", LUA_NATIVE_MAP_ABANDON_BLIP_);
		MAP.set_function("IS_BLIP_ATTACHED_TO_ANY_ENTITY_", LUA_NATIVE_MAP_IS_BLIP_ATTACHED_TO_ANY_ENTITY_);
		MAP.set_function("IS_BLIP_ON_MINIMAP", LUA_NATIVE_MAP_IS_BLIP_ON_MINIMAP);
		MAP.set_function("FORCE_SONAR_BLIPS_THIS_FRAME", LUA_NATIVE_MAP_FORCE_SONAR_BLIPS_THIS_FRAME);
		MAP.set_function("SET_GPS_FLAGS", LUA_NATIVE_MAP_SET_GPS_FLAGS);
		MAP.set_function("CLEAR_GPS_FLAGS", LUA_NATIVE_MAP_CLEAR_GPS_FLAGS);
		MAP.set_function("SET_GPS_CUSTOM_ROUTE_RENDER", LUA_NATIVE_MAP_SET_GPS_CUSTOM_ROUTE_RENDER);
		MAP.set_function("CLEAR_GPS_CUSTOM_ROUTE", LUA_NATIVE_MAP_CLEAR_GPS_CUSTOM_ROUTE);
		MAP.set_function("START_GPS_MULTI_ROUTE", LUA_NATIVE_MAP_START_GPS_MULTI_ROUTE);
		MAP.set_function("ADD_POINT_TO_GPS_MULTI_ROUTE", LUA_NATIVE_MAP_ADD_POINT_TO_GPS_MULTI_ROUTE);
		MAP.set_function("SET_GPS_MULTI_ROUTE_RENDER", LUA_NATIVE_MAP_SET_GPS_MULTI_ROUTE_RENDER);
		MAP.set_function("CLEAR_GPS_MULTI_ROUTE", LUA_NATIVE_MAP_CLEAR_GPS_MULTI_ROUTE);
		MAP.set_function("START_GPS_CUSTOM_ROUTE_FROM_WAYPOINT_RECORDING_ROUTE_", LUA_NATIVE_MAP_START_GPS_CUSTOM_ROUTE_FROM_WAYPOINT_RECORDING_ROUTE_);
		MAP.set_function("CLEAR_GPS_PLAYER_WAYPOINT", LUA_NATIVE_MAP_CLEAR_GPS_PLAYER_WAYPOINT);
		MAP.set_function("0xD3F58E9316B7FC2A_", LUA_NATIVE_MAP_0xD3F58E9316B7FC2A_);
		MAP.set_function("SET_WAYPOINT_OFF", LUA_NATIVE_MAP_SET_WAYPOINT_OFF);
		MAP.set_function("IS_WAYPOINT_ACTIVE", LUA_NATIVE_MAP_IS_WAYPOINT_ACTIVE);
		MAP.set_function("GET_WAYPOINT_COORDS_", LUA_NATIVE_MAP_GET_WAYPOINT_COORDS_);
		MAP.set_function("0xF08E42BFA46BDFF8_", LUA_NATIVE_MAP_0xF08E42BFA46BDFF8_);
		MAP.set_function("HIDE_ACTIVE_POINTS_OF_INTEREST_", LUA_NATIVE_MAP_HIDE_ACTIVE_POINTS_OF_INTEREST_);
		MAP.set_function("SHOW_ACTIVE_POINTS_OF_INTEREST_", LUA_NATIVE_MAP_SHOW_ACTIVE_POINTS_OF_INTEREST_);
		MAP.set_function("0xF47A1EB2A538A3A3_", LUA_NATIVE_MAP_0xF47A1EB2A538A3A3_);
		MAP.set_function("FIND_CLOSEST_GPS_POSITION_", LUA_NATIVE_MAP_FIND_CLOSEST_GPS_POSITION_);
		MAP.set_function("DISPLAY_RADAR", LUA_NATIVE_MAP_DISPLAY_RADAR);
		MAP.set_function("SET_RADAR_CONFIG_TYPE_", LUA_NATIVE_MAP_SET_RADAR_CONFIG_TYPE_);
		MAP.set_function("ADD_PROP_TO_MINIMAP_", LUA_NATIVE_MAP_ADD_PROP_TO_MINIMAP_);
		MAP.set_function("REMOVE_PROP_FROM_MINIMAP_", LUA_NATIVE_MAP_REMOVE_PROP_FROM_MINIMAP_);
		MAP.set_function("SET_RADAR_AS_EXTERIOR_THIS_FRAME", LUA_NATIVE_MAP_SET_RADAR_AS_EXTERIOR_THIS_FRAME);
		MAP.set_function("SET_MINIMAP_HIDE_FOW", LUA_NATIVE_MAP_SET_MINIMAP_HIDE_FOW);
		MAP.set_function("SET_FOW_UPDATE_PLAYER_OVERRIDE_", LUA_NATIVE_MAP_SET_FOW_UPDATE_PLAYER_OVERRIDE_);
		MAP.set_function("SET_MINIMAP_FOW_OVERRIDE_REVEAL_SCALE_", LUA_NATIVE_MAP_SET_MINIMAP_FOW_OVERRIDE_REVEAL_SCALE_);
		MAP.set_function("SET_MINIMAP_FOW_SHOULD_UPDATE_", LUA_NATIVE_MAP_SET_MINIMAP_FOW_SHOULD_UPDATE_);
		MAP.set_function("SET_MINIMAP_FOW_REVEAL_COORDINATE", LUA_NATIVE_MAP_SET_MINIMAP_FOW_REVEAL_COORDINATE);
		MAP.set_function("SET_MINIMAP_FOW_REVEAL_VOLUME", LUA_NATIVE_MAP_SET_MINIMAP_FOW_REVEAL_VOLUME);
		MAP.set_function("RESET_MINIMAP_FOW", LUA_NATIVE_MAP_RESET_MINIMAP_FOW);
		MAP.set_function("REVEAL_MINIMAP_FOW_", LUA_NATIVE_MAP_REVEAL_MINIMAP_FOW_);
		MAP.set_function("SET_MINIMAP_ZONE_", LUA_NATIVE_MAP_SET_MINIMAP_ZONE_);
		MAP.set_function("LOCK_MINIMAP_ANGLE", LUA_NATIVE_MAP_LOCK_MINIMAP_ANGLE);
		MAP.set_function("UNLOCK_MINIMAP_ANGLE", LUA_NATIVE_MAP_UNLOCK_MINIMAP_ANGLE);
		MAP.set_function("MAP_ENABLE_REGION_BLIP_", LUA_NATIVE_MAP_MAP_ENABLE_REGION_BLIP_);
		MAP.set_function("MAP_DISABLE_REGION_BLIP_", LUA_NATIVE_MAP_MAP_DISABLE_REGION_BLIP_);
		MAP.set_function("MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE_", LUA_NATIVE_MAP_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE_);
		MAP.set_function("MAP_DISCOVER_REGION_", LUA_NATIVE_MAP_MAP_DISCOVER_REGION_);
		MAP.set_function("MAP_DISCOVERY_SET_ENABLED_", LUA_NATIVE_MAP_MAP_DISCOVERY_SET_ENABLED_);
		MAP.set_function("MAP_IS_DISCOVERY_ACTIVE_", LUA_NATIVE_MAP_MAP_IS_DISCOVERY_ACTIVE_);
		MAP.set_function("SET_PAUSEMAP_COORDS_WITH_RADIUS_", LUA_NATIVE_MAP_SET_PAUSEMAP_COORDS_WITH_RADIUS_);
		MAP.set_function("0x7C9F4CDF402CA82A_", LUA_NATIVE_MAP_0x7C9F4CDF402CA82A_);
		MAP.set_function("0x44813684F72B563C_", LUA_NATIVE_MAP_0x44813684F72B563C_);
		MAP.set_function("0x97F6F158CC5B5CA2_", LUA_NATIVE_MAP_0x97F6F158CC5B5CA2_);
		MAP.set_function("0xBB68D4D3CA3DE402_", LUA_NATIVE_MAP_0xBB68D4D3CA3DE402_);
		MAP.set_function("0x3CB8859F04763C78_", LUA_NATIVE_MAP_0x3CB8859F04763C78_);
		MAP.set_function("0x7563CBCA99253D1A_", LUA_NATIVE_MAP_0x7563CBCA99253D1A_);
		MAP.set_function("0x1726963E6049DB53_", LUA_NATIVE_MAP_0x1726963E6049DB53_);
	}
}
