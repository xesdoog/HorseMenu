#include "lua_native_binding.hpp"
#include "game/rdr/Natives.hpp"

namespace Lua::native
{
	static int LUA_NATIVE_MISC_GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(int stackSize)
	{
		auto retval = MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(stackSize);
		return retval;
	}

	static int LUA_NATIVE_MISC_GET_NUMBER_OF_INSTRUCTIONS_()
	{
		auto retval = MISC::_GET_NUMBER_OF_INSTRUCTIONS();
		return retval;
	}

	static int LUA_NATIVE_MISC_GET_MAX_NUM_INSTRUCTIONS_()
	{
		auto retval = MISC::_GET_MAX_NUM_INSTRUCTIONS();
		return retval;
	}

	static bool LUA_NATIVE_MISC_IS_MAG_DEMO_1_ACTIVE()
	{
		auto retval = (bool)MISC::IS_MAG_DEMO_1_ACTIVE();
		return retval;
	}

	static void LUA_NATIVE_MISC_SET_RANDOM_SEED(int NewSeed)
	{
		MISC::SET_RANDOM_SEED(NewSeed);
	}

	static void LUA_NATIVE_MISC_SET_TIME_SCALE(float fNewTimeScale)
	{
		MISC::SET_TIME_SCALE(fNewTimeScale);
	}

	static void LUA_NATIVE_MISC_SET_MISSION_FLAG(bool MissionFlagValue)
	{
		MISC::SET_MISSION_FLAG(MissionFlagValue);
	}

	static bool LUA_NATIVE_MISC_GET_MISSION_FLAG()
	{
		auto retval = (bool)MISC::GET_MISSION_FLAG();
		return retval;
	}

	static void LUA_NATIVE_MISC_0x5801BE2DF2AF07EC_(Any p0)
	{
		MISC::_0x5801BE2DF2AF07EC(p0);
	}

	static void LUA_NATIVE_MISC_SET_RANDOM_EVENT_FLAG(bool bThisScriptIsARandomEvent)
	{
		MISC::SET_RANDOM_EVENT_FLAG(bThisScriptIsARandomEvent);
	}

	static bool LUA_NATIVE_MISC_GET_RANDOM_EVENT_FLAG()
	{
		auto retval = (bool)MISC::GET_RANDOM_EVENT_FLAG();
		return retval;
	}

	static void LUA_NATIVE_MISC_0x9BF2C0C568C61641_(Any p0)
	{
		MISC::_0x9BF2C0C568C61641(p0);
	}

	static void LUA_NATIVE_MISC_ACTIVITY_FEED_CREATE(sol::stack_object CaptionString, sol::stack_object CondensedCaptionString)
	{
		MISC::ACTIVITY_FEED_CREATE(CaptionString.is<const char*>() ? CaptionString.as<const char*>() : nullptr, CondensedCaptionString.is<const char*>() ? CondensedCaptionString.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_MISC_ACTIVITY_FEED_ADD_SUBSTRING_TO_CAPTION(sol::stack_object SubString)
	{
		MISC::ACTIVITY_FEED_ADD_SUBSTRING_TO_CAPTION(SubString.is<const char*>() ? SubString.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_MISC_0xFF252E2BAFB7330F_(Any p0)
	{
		MISC::_0xFF252E2BAFB7330F(p0);
	}

	static void LUA_NATIVE_MISC_ACTIVITY_FEED_ACTION_START_WITH_COMMAND_LINE(sol::stack_object commandLineString, sol::stack_object labelString)
	{
		MISC::ACTIVITY_FEED_ACTION_START_WITH_COMMAND_LINE(commandLineString.is<const char*>() ? commandLineString.as<const char*>() : nullptr, labelString.is<const char*>() ? labelString.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_MISC_ACTIVITY_FEED_ACTION_START_WITH_COMMAND_LINE_ADD(sol::stack_object commandLineString)
	{
		MISC::ACTIVITY_FEED_ACTION_START_WITH_COMMAND_LINE_ADD(commandLineString.is<const char*>() ? commandLineString.as<const char*>() : nullptr);
	}

	static Any LUA_NATIVE_MISC_0xAF530E56505D1BD6_(Any p0)
	{
		auto retval = MISC::_0xAF530E56505D1BD6(p0);
		return retval;
	}

	static void LUA_NATIVE_MISC_ACTIVITY_FEED_POST()
	{
		MISC::ACTIVITY_FEED_POST();
	}

	static const char* LUA_NATIVE_MISC_0xF81C53561D15F330_()
	{
		auto retval = MISC::_0xF81C53561D15F330();
		return retval;
	}

	static void LUA_NATIVE_MISC_0x1096603B519C905F_(sol::stack_object name)
	{
		MISC::_0x1096603B519C905F(name.is<const char*>() ? name.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_MISC_0xCC3EDC5614B03F61_(int p0)
	{
		MISC::_0xCC3EDC5614B03F61(p0);
	}

	static void LUA_NATIVE_MISC_INFORM_CODE_OF_CONTENT_ID_OF_CURRENT_UGC_MISSION(sol::stack_object ContentIdString)
	{
		MISC::INFORM_CODE_OF_CONTENT_ID_OF_CURRENT_UGC_MISSION(ContentIdString.is<const char*>() ? ContentIdString.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_MISC_0xDA4D8EB04E8E2928_(Any p0)
	{
		MISC::_0xDA4D8EB04E8E2928(p0);
	}

	static void LUA_NATIVE_MISC_0xB08C4FA25BC29DB9_(Any p0)
	{
		MISC::_0xB08C4FA25BC29DB9(p0);
	}

	static Hash LUA_NATIVE_MISC_GET_PREV_WEATHER_TYPE_HASH_NAME_()
	{
		auto retval = MISC::_GET_PREV_WEATHER_TYPE_HASH_NAME();
		return retval;
	}

	static Hash LUA_NATIVE_MISC_GET_NEXT_WEATHER_TYPE_HASH_NAME_()
	{
		auto retval = MISC::_GET_NEXT_WEATHER_TYPE_HASH_NAME();
		return retval;
	}

	static void LUA_NATIVE_MISC_0x0730E518486DEEC3_(Any p0)
	{
		MISC::_0x0730E518486DEEC3(p0);
	}

	static void LUA_NATIVE_MISC_SET_WEATHER_TYPE(Hash weatherType, bool p1, bool p2, bool transition, float transitionTime, bool p5)
	{
		MISC::SET_WEATHER_TYPE(weatherType, p1, p2, transition, transitionTime, p5);
	}

	static void LUA_NATIVE_MISC_SET_WEATHER_TYPE_2_(Hash weatherType, int p1, int p2, int p3, bool p4)
	{
		MISC::_SET_WEATHER_TYPE_2(weatherType, p1, p2, p3, p4);
	}

	static int LUA_NATIVE_MISC_GET_RANDOM_WEATHER_TYPE_INDEX_()
	{
		auto retval = MISC::_GET_RANDOM_WEATHER_TYPE_INDEX();
		return retval;
	}

	static Hash LUA_NATIVE_MISC_GET_RANDOM_WEATHER_TYPE_()
	{
		auto retval = MISC::_GET_RANDOM_WEATHER_TYPE();
		return retval;
	}

	static void LUA_NATIVE_MISC_SET_RANDOM_WEATHER_TYPE(bool p0, bool p1)
	{
		MISC::SET_RANDOM_WEATHER_TYPE(p0, p1);
	}

	static void LUA_NATIVE_MISC_CLEAR_WEATHER_TYPE_PERSIST()
	{
		MISC::CLEAR_WEATHER_TYPE_PERSIST();
	}

	static void LUA_NATIVE_MISC_CLEAR_WEATHER_TYPE_PERSIST_OVERTIME_(int milliseconds)
	{
		MISC::_CLEAR_WEATHER_TYPE_PERSIST_OVERTIME(milliseconds);
	}

	static std::tuple<Hash, Hash, float> LUA_NATIVE_MISC_GET_CURR_WEATHER_STATE(Hash prevTypeHashName, Hash nextTypeHashName, float interpVal)
	{
		std::tuple<Hash, Hash, float> return_values;
		MISC::GET_CURR_WEATHER_STATE(&prevTypeHashName, &nextTypeHashName, &interpVal);
		std::get<0>(return_values) = prevTypeHashName;
		std::get<1>(return_values) = nextTypeHashName;
		std::get<2>(return_values) = interpVal;

		return return_values;
	}

	static void LUA_NATIVE_MISC_SET_CURR_WEATHER_STATE(Hash prevTypeHashName, Hash nextTypeHashName, float interpVal, bool enabled)
	{
		MISC::SET_CURR_WEATHER_STATE(prevTypeHashName, nextTypeHashName, interpVal, enabled);
	}

	static void LUA_NATIVE_MISC_SET_WEATHER_TYPE_FROZEN_(bool toggle)
	{
		MISC::_SET_WEATHER_TYPE_FROZEN(toggle);
	}

	static std::tuple<Hash, Hash> LUA_NATIVE_MISC_GET_FORCED_WEATHER_(Hash weather, Hash p1)
	{
		std::tuple<Hash, Hash> return_values;
		MISC::_GET_FORCED_WEATHER(&weather, &p1);
		std::get<0>(return_values) = weather;
		std::get<1>(return_values) = p1;

		return return_values;
	}

	static void LUA_NATIVE_MISC_0x2916B30DC6C41179_(Hash weatherType)
	{
		MISC::_0x2916B30DC6C41179(weatherType);
	}

	static void LUA_NATIVE_MISC_0xD3F943B88F55376A_(Hash weatherType)
	{
		MISC::_0xD3F943B88F55376A(weatherType);
	}

	static void LUA_NATIVE_MISC_0x243CEDE8F916B994_()
	{
		MISC::_0x243CEDE8F916B994();
	}

	static void LUA_NATIVE_MISC_SET_OVERRIDE_WEATHER_(Hash weatherType)
	{
		MISC::_SET_OVERRIDE_WEATHER(weatherType);
	}

	static void LUA_NATIVE_MISC_CLEAR_OVERRIDE_WEATHER()
	{
		MISC::CLEAR_OVERRIDE_WEATHER();
	}

	static void LUA_NATIVE_MISC_SET_WEATHER_VARIATION_(sol::stack_object weatherType, sol::stack_object variation)
	{
		MISC::_SET_WEATHER_VARIATION(weatherType.is<const char*>() ? weatherType.as<const char*>() : nullptr, variation.is<const char*>() ? variation.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_MISC_CLEAR_WEATHER_VARIATION_(sol::stack_object weatherType, bool p1)
	{
		MISC::_CLEAR_WEATHER_VARIATION(weatherType.is<const char*>() ? weatherType.as<const char*>() : nullptr, p1);
	}

	static void LUA_NATIVE_MISC_WATER_OVERRIDE_SET_SHOREWAVEAMPLITUDE(float value)
	{
		MISC::WATER_OVERRIDE_SET_SHOREWAVEAMPLITUDE(value);
	}

	static void LUA_NATIVE_MISC_WATER_OVERRIDE_SET_OCEANWAVEMAXAMPLITUDE(float value)
	{
		MISC::WATER_OVERRIDE_SET_OCEANWAVEMAXAMPLITUDE(value);
	}

	static float LUA_NATIVE_MISC_GET_TEMPERATURE_AT_COORDS_(float x, float y, float z)
	{
		auto retval = MISC::_GET_TEMPERATURE_AT_COORDS(x, y, z);
		return retval;
	}

	static void LUA_NATIVE_MISC_SET_WIND_SPEED(float WindSpeed)
	{
		MISC::SET_WIND_SPEED(WindSpeed);
	}

	static float LUA_NATIVE_MISC_GET_WIND_SPEED()
	{
		auto retval = MISC::GET_WIND_SPEED();
		return retval;
	}

	static void LUA_NATIVE_MISC_SET_WIND_DIRECTION(float WindDir)
	{
		MISC::SET_WIND_DIRECTION(WindDir);
	}

	static Vector3 LUA_NATIVE_MISC_GET_WIND_DIRECTION()
	{
		auto retval = MISC::GET_WIND_DIRECTION();
		return retval;
	}

	static void LUA_NATIVE_MISC_SET_RAIN(float RainVal)
	{
		MISC::SET_RAIN(RainVal);
	}

	static float LUA_NATIVE_MISC_GET_RAIN_LEVEL()
	{
		auto retval = MISC::GET_RAIN_LEVEL();
		return retval;
	}

	static void LUA_NATIVE_MISC_0x745808BB01CEC6B9_(float p0)
	{
		MISC::_0x745808BB01CEC6B9(p0);
	}

	static void LUA_NATIVE_MISC_SET_SNOW_LEVEL_(float level)
	{
		MISC::_SET_SNOW_LEVEL(level);
	}

	static float LUA_NATIVE_MISC_GET_SNOW_LEVEL()
	{
		auto retval = MISC::GET_SNOW_LEVEL();
		return retval;
	}

	static void LUA_NATIVE_MISC_FORCE_LIGHTNING_FLASH()
	{
		MISC::FORCE_LIGHTNING_FLASH();
	}

	static void LUA_NATIVE_MISC_FORCE_LIGHTNING_FLASH_AT_COORDS_(float x, float y, float z, float p3)
	{
		MISC::_FORCE_LIGHTNING_FLASH_AT_COORDS(x, y, z, p3);
	}

	static void LUA_NATIVE_MISC_0xA9342743B634A462_(Any p0)
	{
		MISC::_0xA9342743B634A462(p0);
	}

	static int LUA_NATIVE_MISC_GET_GAME_TIMER()
	{
		auto retval = MISC::GET_GAME_TIMER();
		return retval;
	}

	static int LUA_NATIVE_MISC_GET_GAME_TIMER_NON_SCALED_CLIPPED_()
	{
		auto retval = MISC::_GET_GAME_TIMER_NON_SCALED_CLIPPED();
		return retval;
	}

	static int LUA_NATIVE_MISC_GET_SYSTEM_TIME()
	{
		auto retval = MISC::GET_SYSTEM_TIME();
		return retval;
	}

	static int LUA_NATIVE_MISC_GET_NUMBER_OF_MICROSECONDS_SINCE_LAST_CALL()
	{
		auto retval = MISC::GET_NUMBER_OF_MICROSECONDS_SINCE_LAST_CALL();
		return retval;
	}

	static int LUA_NATIVE_MISC_GET_SCRIPT_TIME_WITHIN_FRAME_IN_MICROSECONDS()
	{
		auto retval = MISC::GET_SCRIPT_TIME_WITHIN_FRAME_IN_MICROSECONDS();
		return retval;
	}

	static void LUA_NATIVE_MISC_RESET_SCRIPT_TIME_WITHIN_FRAME()
	{
		MISC::RESET_SCRIPT_TIME_WITHIN_FRAME();
	}

	static float LUA_NATIVE_MISC_GET_FRAME_TIME()
	{
		auto retval = MISC::GET_FRAME_TIME();
		return retval;
	}

	static float LUA_NATIVE_MISC_GET_SYSTEM_TIME_STEP()
	{
		auto retval = MISC::GET_SYSTEM_TIME_STEP();
		return retval;
	}

	static int LUA_NATIVE_MISC_GET_FRAME_COUNT()
	{
		auto retval = MISC::GET_FRAME_COUNT();
		return retval;
	}

	static void LUA_NATIVE_MISC_0x6BED40493A1AFDB8_(uintptr_t p0, float p1)
	{
		MISC::_0x6BED40493A1AFDB8((Any*)p0, p1);
	}

	static float LUA_NATIVE_MISC_READ_INT_AS_FLOAT_(int value)
	{
		auto retval = MISC::_READ_INT_AS_FLOAT(value);
		return retval;
	}

	static float LUA_NATIVE_MISC_GET_RANDOM_FLOAT_IN_RANGE(float MinFloat, float MaxFloat)
	{
		auto retval = MISC::GET_RANDOM_FLOAT_IN_RANGE(MinFloat, MaxFloat);
		return retval;
	}

	static int LUA_NATIVE_MISC_GET_RANDOM_INT_IN_RANGE(int MinInt, int MaxInt)
	{
		auto retval = MISC::GET_RANDOM_INT_IN_RANGE(MinInt, MaxInt);
		return retval;
	}

	static std::tuple<bool, float> LUA_NATIVE_MISC_GET_GROUND_Z_FOR_3D_COORD(float VecCoorsX, float VecCoorsY, float VecCoorsZ, float ReturnZ, bool p4)
	{
		std::tuple<bool, float> return_values;
		std::get<0>(return_values) = (bool)MISC::GET_GROUND_Z_FOR_3D_COORD(VecCoorsX, VecCoorsY, VecCoorsZ, &ReturnZ, p4);
		std::get<1>(return_values) = ReturnZ;

		return return_values;
	}

	static std::tuple<bool, float, Vector3> LUA_NATIVE_MISC_GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(float VecCoorsX, float VecCoorsY, float VecCoorsZ, float ReturnZ, Vector3 ReturnNormal)
	{
		std::tuple<bool, float, Vector3> return_values;
		std::get<0>(return_values) = (bool)MISC::GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(VecCoorsX, VecCoorsY, VecCoorsZ, &ReturnZ, &ReturnNormal);
		std::get<1>(return_values) = ReturnZ;
		std::get<2>(return_values) = ReturnNormal;

		return return_values;
	}

	static Any LUA_NATIVE_MISC_0xBBE5B63EFFB08E68_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		auto retval = MISC::_0xBBE5B63EFFB08E68(p0, p1, p2, p3, p4, p5, p6);
		return retval;
	}

	static float LUA_NATIVE_MISC_ASIN(float X)
	{
		auto retval = MISC::ASIN(X);
		return retval;
	}

	static float LUA_NATIVE_MISC_ACOS(float X)
	{
		auto retval = MISC::ACOS(X);
		return retval;
	}

	static float LUA_NATIVE_MISC_TAN(float X)
	{
		auto retval = MISC::TAN(X);
		return retval;
	}

	static float LUA_NATIVE_MISC_ATAN(float X)
	{
		auto retval = MISC::ATAN(X);
		return retval;
	}

	static float LUA_NATIVE_MISC_ATAN2(float Y, float X)
	{
		auto retval = MISC::ATAN2(Y, X);
		return retval;
	}

	static float LUA_NATIVE_MISC_GET_DISTANCE_BETWEEN_COORDS(float VecFirstCoorsX, float VecFirstCoorsY, float VecFirstCoorsZ, float VecSecondCoorsX, float VecSecondCoorsY, float VecSecondCoorsZ, bool bCheck3d)
	{
		auto retval = MISC::GET_DISTANCE_BETWEEN_COORDS(VecFirstCoorsX, VecFirstCoorsY, VecFirstCoorsZ, VecSecondCoorsX, VecSecondCoorsY, VecSecondCoorsZ, bCheck3d);
		return retval;
	}

	static float LUA_NATIVE_MISC_GET_ANGLE_BETWEEN_2D_VECTORS(float X1, float Y1, float X2, float Y2)
	{
		auto retval = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(X1, Y1, X2, Y2);
		return retval;
	}

	static float LUA_NATIVE_MISC_GET_HEADING_FROM_VECTOR_2D(float VecX, float VecY)
	{
		auto retval = MISC::GET_HEADING_FROM_VECTOR_2D(VecX, VecY);
		return retval;
	}

	static Vector3 LUA_NATIVE_MISC_GET_CLOSEST_POINT_ON_LINE(float rPointToTestX, float rPointToTestY, float rPointToTestZ, float vStartX, float vStartY, float vStartZ, float vEndX, float vEndY, float vEndZ, bool bClampToLine)
	{
		auto retval = MISC::GET_CLOSEST_POINT_ON_LINE(rPointToTestX, rPointToTestY, rPointToTestZ, vStartX, vStartY, vStartZ, vEndX, vEndY, vEndZ, bClampToLine);
		return retval;
	}

	static std::tuple<bool, float> LUA_NATIVE_MISC_GET_LINE_PLANE_INTERSECTION(float vscrPntAX, float vscrPntAY, float vscrPntAZ, float vscrPntBX, float vscrPntBY, float vscrPntBZ, float vscrPntOnPlaneX, float vscrPntOnPlaneY, float vscrPntOnPlaneZ, float vscrNormalX, float vscrNormalY, float vscrNormalZ, float fTValue)
	{
		std::tuple<bool, float> return_values;
		std::get<0>(return_values) = (bool)MISC::GET_LINE_PLANE_INTERSECTION(vscrPntAX, vscrPntAY, vscrPntAZ, vscrPntBX, vscrPntBY, vscrPntBZ, vscrPntOnPlaneX, vscrPntOnPlaneY, vscrPntOnPlaneZ, vscrNormalX, vscrNormalY, vscrNormalZ, &fTValue);
		std::get<1>(return_values) = fTValue;

		return return_values;
	}

	static int LUA_NATIVE_MISC_SET_BIT(int Variable, int BitIndex)
	{
		MISC::SET_BIT(&Variable, BitIndex);
		return Variable;
	}

	static int LUA_NATIVE_MISC_CLEAR_BIT(int Variable, int BitIndex)
	{
		MISC::CLEAR_BIT(&Variable, BitIndex);
		return Variable;
	}

	static bool LUA_NATIVE_MISC_IS_BIT_FLAG_SET_(uintptr_t bitFlags, int flag)
	{
		auto retval = (bool)MISC::_IS_BIT_FLAG_SET((Any*)bitFlags, flag);
		return retval;
	}

	static bool LUA_NATIVE_MISC_IS_ANY_BIT_FLAG_SET_(uintptr_t bitFlags)
	{
		auto retval = (bool)MISC::_IS_ANY_BIT_FLAG_SET((Any*)bitFlags);
		return retval;
	}

	static int LUA_NATIVE_MISC_COUNT_BIT_FLAGS_(uintptr_t bitFlags)
	{
		auto retval = MISC::_COUNT_BIT_FLAGS((Any*)bitFlags);
		return retval;
	}

	static void LUA_NATIVE_MISC_SET_BIT_FLAG_(uintptr_t bitFlags, int flag)
	{
		MISC::_SET_BIT_FLAG((Any*)bitFlags, flag);
	}

	static void LUA_NATIVE_MISC_CLEAR_BIT_FLAG_(uintptr_t bitFlags, int flag)
	{
		MISC::_CLEAR_BIT_FLAG((Any*)bitFlags, flag);
	}

	static void LUA_NATIVE_MISC_CLEAR_ALL_BIT_FLAGS_(uintptr_t bitFlags)
	{
		MISC::_CLEAR_ALL_BIT_FLAGS((Any*)bitFlags);
	}

	static Hash LUA_NATIVE_MISC_GET_HASH_KEY(sol::stack_object InputString)
	{
		auto retval = MISC::GET_HASH_KEY(InputString.is<const char*>() ? InputString.as<const char*>() : nullptr);
		return retval;
	}

	static float LUA_NATIVE_MISC_GET_EASING_CURVE_VALUE_(float t, float b, float d, int easingCurveType)
	{
		auto retval = MISC::_GET_EASING_CURVE_VALUE(t, b, d, easingCurveType);
		return retval;
	}

	static bool LUA_NATIVE_MISC_IS_POSITION_OCCUPIED(float VecCenterCoorsX, float VecCenterCoorsY, float VecCenterCoorsZ, float radius, bool bBuildingFlag, bool bVehicleFlag, bool bPedFlag, bool bObjectFlag, bool bDummyFlag, Entity ExcludeEntityIndex, bool bCheckAlive)
	{
		auto retval = (bool)MISC::IS_POSITION_OCCUPIED(VecCenterCoorsX, VecCenterCoorsY, VecCenterCoorsZ, radius, bBuildingFlag, bVehicleFlag, bPedFlag, bObjectFlag, bDummyFlag, ExcludeEntityIndex, bCheckAlive);
		return retval;
	}

	static void LUA_NATIVE_MISC_CLEAR_AREA(float VecCentreCoorsX, float VecCentreCoorsY, float VecCentreCoorsZ, float Radius, int iFlags)
	{
		MISC::CLEAR_AREA(VecCentreCoorsX, VecCentreCoorsY, VecCentreCoorsZ, Radius, iFlags);
	}

	static void LUA_NATIVE_MISC_CLEAR_VOLUME_AREA_(Volume volume, int flag)
	{
		MISC::_CLEAR_VOLUME_AREA(volume, flag);
	}

	static void LUA_NATIVE_MISC_CLEAR_ANGLED_AREA_OF_VEHICLES(float vecAngledAreaPoint1X, float vecAngledAreaPoint1Y, float vecAngledAreaPoint1Z, float vecAngledAreaPoint2X, float vecAngledAreaPoint2Y, float vecAngledAreaPoint2Z, float DistanceOfOppositeFace, int iFlags)
	{
		MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(vecAngledAreaPoint1X, vecAngledAreaPoint1Y, vecAngledAreaPoint1Z, vecAngledAreaPoint2X, vecAngledAreaPoint2Y, vecAngledAreaPoint2Z, DistanceOfOppositeFace, iFlags);
	}

	static void LUA_NATIVE_MISC_SET_CREDITS_ACTIVE(bool bActive)
	{
		MISC::SET_CREDITS_ACTIVE(bActive);
	}

	static void LUA_NATIVE_MISC_NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME()
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	}

	static void LUA_NATIVE_MISC_PAUSE_DEATH_ARREST_RESTART(bool bPaused)
	{
		MISC::PAUSE_DEATH_ARREST_RESTART(bPaused);
	}

	static void LUA_NATIVE_MISC_IGNORE_NEXT_RESTART(bool bIgnore)
	{
		MISC::IGNORE_NEXT_RESTART(bIgnore);
	}

	static void LUA_NATIVE_MISC_SET_FADE_IN_AFTER_DEATH_ARREST(bool bDoFade)
	{
		MISC::SET_FADE_IN_AFTER_DEATH_ARREST(bDoFade);
	}

	static void LUA_NATIVE_MISC_SET_FADE_IN_AFTER_LOAD(bool bFadeIn)
	{
		MISC::SET_FADE_IN_AFTER_LOAD(bFadeIn);
	}

	static std::tuple<bool, Vector3, float> LUA_NATIVE_MISC_OVERRIDE_SAVE_HOUSE(bool bOverride, float vecCoordsX, float vecCoordsY, float vecCoordsZ, float fHeading, bool bIsAnAutosave, Vector3 vecReturnCoords, float fReturnHeading)
	{
		std::tuple<bool, Vector3, float> return_values;
		std::get<0>(return_values) = (bool)MISC::OVERRIDE_SAVE_HOUSE(bOverride, vecCoordsX, vecCoordsY, vecCoordsZ, fHeading, bIsAnAutosave, &vecReturnCoords, &fReturnHeading);
		std::get<1>(return_values) = vecReturnCoords;
		std::get<2>(return_values) = fReturnHeading;

		return return_values;
	}

	static void LUA_NATIVE_MISC_SHOOT_SINGLE_BULLET_BETWEEN_COORDS(float VecStartCoorsX, float VecStartCoorsY, float VecStartCoorsZ, float VecEndCoorsX, float VecEndCoorsY, float VecEndCoorsZ, int DamageCaused, bool bPerfectAccuracy, Hash Weapon, Ped PedIndex, bool isAudible, bool isInvisible, float InitialVelocity, bool p13)
	{
		MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(VecStartCoorsX, VecStartCoorsY, VecStartCoorsZ, VecEndCoorsX, VecEndCoorsY, VecEndCoorsZ, DamageCaused, bPerfectAccuracy, Weapon, PedIndex, isAudible, isInvisible, InitialVelocity, p13);
	}

	static void LUA_NATIVE_MISC_FIRE_SINGLE_BULLET(uintptr_t args)
	{
		MISC::FIRE_SINGLE_BULLET((Any*)args);
	}

	static std::tuple<Vector3, Vector3> LUA_NATIVE_MISC_GET_MODEL_DIMENSIONS(Hash ModelHashKey, Vector3 returnMin, Vector3 returnMax)
	{
		std::tuple<Vector3, Vector3> return_values;
		MISC::GET_MODEL_DIMENSIONS(ModelHashKey, &returnMin, &returnMax);
		std::get<0>(return_values) = returnMin;
		std::get<1>(return_values) = returnMax;

		return return_values;
	}

	static bool LUA_NATIVE_MISC_IS_BIT_SET(int address, int offset)
	{
		auto retval = (bool)MISC::IS_BIT_SET(address, offset);
		return retval;
	}

	static void LUA_NATIVE_MISC_0x0A487CC74A517FB5_(Any p0)
	{
		MISC::_0x0A487CC74A517FB5(p0);
	}

	static bool LUA_NATIVE_MISC_IS_MINIGAME_IN_PROGRESS()
	{
		auto retval = (bool)MISC::IS_MINIGAME_IN_PROGRESS();
		return retval;
	}

	static bool LUA_NATIVE_MISC_SHOULD_USE_METRIC_MEASUREMENTS()
	{
		auto retval = (bool)MISC::SHOULD_USE_METRIC_MEASUREMENTS();
		return retval;
	}

	static bool LUA_NATIVE_MISC_SHOULD_USE_METRIC_MEASUREMENTS_2_()
	{
		auto retval = (bool)MISC::_SHOULD_USE_METRIC_MEASUREMENTS_2();
		return retval;
	}

	static bool LUA_NATIVE_MISC_SHOULD_USE_METRIC_TEMPERATURE_()
	{
		auto retval = (bool)MISC::_SHOULD_USE_METRIC_TEMPERATURE();
		return retval;
	}

	static bool LUA_NATIVE_MISC_SHOULD_USE_METRIC_WEIGHT_()
	{
		auto retval = (bool)MISC::_SHOULD_USE_METRIC_WEIGHT();
		return retval;
	}

	static bool LUA_NATIVE_MISC_SHOULD_USE_24_HOUR_CLOCK_()
	{
		auto retval = (bool)MISC::_SHOULD_USE_24_HOUR_CLOCK();
		return retval;
	}

	static int LUA_NATIVE_MISC_COMPARE_STRINGS(sol::stack_object String1, sol::stack_object String2, bool bCaseSensitive, int numberOfCharactersToCompare)
	{
		auto retval = MISC::COMPARE_STRINGS(String1.is<const char*>() ? String1.as<const char*>() : nullptr, String2.is<const char*>() ? String2.as<const char*>() : nullptr, bCaseSensitive, numberOfCharactersToCompare);
		return retval;
	}

	static int LUA_NATIVE_MISC_ABSI(int n)
	{
		auto retval = MISC::ABSI(n);
		return retval;
	}

	static float LUA_NATIVE_MISC_ABSF(float n)
	{
		auto retval = MISC::ABSF(n);
		return retval;
	}

	static bool LUA_NATIVE_MISC_IS_PROJECTILE_IN_AREA(float VecMinCoorsX, float VecMinCoorsY, float VecMinCoorsZ, float VecMaxCoorsX, float VecMaxCoorsY, float VecMaxCoorsZ, bool bIsPlayer)
	{
		auto retval = (bool)MISC::IS_PROJECTILE_IN_AREA(VecMinCoorsX, VecMinCoorsY, VecMinCoorsZ, VecMaxCoorsX, VecMaxCoorsY, VecMaxCoorsZ, bIsPlayer);
		return retval;
	}

	static bool LUA_NATIVE_MISC_IS_PROJECTILE_TYPE_IN_AREA(float VecMinCoorsX, float VecMinCoorsY, float VecMinCoorsZ, float VecMaxCoorsX, float VecMaxCoorsY, float VecMaxCoorsZ, Hash WeaponType, bool bIsPlayer)
	{
		auto retval = (bool)MISC::IS_PROJECTILE_TYPE_IN_AREA(VecMinCoorsX, VecMinCoorsY, VecMinCoorsZ, VecMaxCoorsX, VecMaxCoorsY, VecMaxCoorsZ, WeaponType, bIsPlayer);
		return retval;
	}

	static bool LUA_NATIVE_MISC_IS_PROJECTILE_TYPE_IN_ANGLED_AREA(float vecAngledAreaPoint1X, float vecAngledAreaPoint1Y, float vecAngledAreaPoint1Z, float vecAngledAreaPoint2X, float vecAngledAreaPoint2Y, float vecAngledAreaPoint2Z, float DistanceOfOppositeFace, Hash WeaponType, bool bIsPlayer)
	{
		auto retval = (bool)MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(vecAngledAreaPoint1X, vecAngledAreaPoint1Y, vecAngledAreaPoint1Z, vecAngledAreaPoint2X, vecAngledAreaPoint2Y, vecAngledAreaPoint2Z, DistanceOfOppositeFace, WeaponType, bIsPlayer);
		return retval;
	}

	static bool LUA_NATIVE_MISC_IS_PROJECTILE_TYPE_WITHIN_DISTANCE(float vecCoorsX, float vecCoorsY, float vecCoorsZ, Hash WeaponType, float distance, bool bIsPlayer)
	{
		auto retval = (bool)MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(vecCoorsX, vecCoorsY, vecCoorsZ, WeaponType, distance, bIsPlayer);
		return retval;
	}

	static std::tuple<bool, Vector3> LUA_NATIVE_MISC_GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(Ped ped, Hash WeaponType, float distance, Vector3 positionOut, bool needsToBeStationary, bool mustBeOwnedByThisPed)
	{
		std::tuple<bool, Vector3> return_values;
		std::get<0>(return_values) = (bool)MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(ped, WeaponType, distance, &positionOut, needsToBeStationary, mustBeOwnedByThisPed);
		std::get<1>(return_values) = positionOut;

		return return_values;
	}

	static std::tuple<bool, Vector3, Entity> LUA_NATIVE_MISC_GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(Ped ped, Hash WeaponType, float distance, Vector3 positionOut, Entity EntityIndex, bool needsToBeStationary, bool mustBeOwnedByThisPed)
	{
		std::tuple<bool, Vector3, Entity> return_values;
		std::get<0>(return_values) = (bool)MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(ped, WeaponType, distance, &positionOut, &EntityIndex, needsToBeStationary, mustBeOwnedByThisPed);
		std::get<1>(return_values) = positionOut;
		std::get<2>(return_values) = EntityIndex;

		return return_values;
	}

	static bool LUA_NATIVE_MISC_IS_BULLET_IN_ANGLED_AREA(float VecPos1X, float VecPos1Y, float VecPos1Z, float VecPos2X, float VecPos2Y, float VecPos2Z, float AreaWidth, bool bIsPlayer)
	{
		auto retval = (bool)MISC::IS_BULLET_IN_ANGLED_AREA(VecPos1X, VecPos1Y, VecPos1Z, VecPos2X, VecPos2Y, VecPos2Z, AreaWidth, bIsPlayer);
		return retval;
	}

	static bool LUA_NATIVE_MISC_IS_BULLET_IN_AREA(float VecCoorsX, float VecCoorsY, float VecCoorsZ, float Radius, bool bIsPlayer)
	{
		auto retval = (bool)MISC::IS_BULLET_IN_AREA(VecCoorsX, VecCoorsY, VecCoorsZ, Radius, bIsPlayer);
		return retval;
	}

	static bool LUA_NATIVE_MISC_IS_BULLET_IN_BOX(float VecMinCoorsX, float VecMinCoorsY, float VecMinCoorsZ, float VecMaxCoorsX, float VecMaxCoorsY, float VecMaxCoorsZ, bool bIsPlayer)
	{
		auto retval = (bool)MISC::IS_BULLET_IN_BOX(VecMinCoorsX, VecMinCoorsY, VecMinCoorsZ, VecMaxCoorsX, VecMaxCoorsY, VecMaxCoorsZ, bIsPlayer);
		return retval;
	}

	static bool LUA_NATIVE_MISC_HAS_BULLET_IMPACTED_IN_AREA(float VecCoorsX, float VecCoorsY, float VecCoorsZ, float Radius, bool bIsPlayer, bool bEntryOnly)
	{
		auto retval = (bool)MISC::HAS_BULLET_IMPACTED_IN_AREA(VecCoorsX, VecCoorsY, VecCoorsZ, Radius, bIsPlayer, bEntryOnly);
		return retval;
	}

	static bool LUA_NATIVE_MISC_HAS_BULLET_IMPACTED_IN_BOX(float VecMinCoorsX, float VecMinCoorsY, float VecMinCoorsZ, float VecMaxCoorsX, float VecMaxCoorsY, float VecMaxCoorsZ, bool bIsPlayer, bool bEntryOnly)
	{
		auto retval = (bool)MISC::HAS_BULLET_IMPACTED_IN_BOX(VecMinCoorsX, VecMinCoorsY, VecMinCoorsZ, VecMaxCoorsX, VecMaxCoorsY, VecMaxCoorsZ, bIsPlayer, bEntryOnly);
		return retval;
	}

	static Any LUA_NATIVE_MISC_0x7A76104CC2CC69E8_(Entity entity, int p1, int p2)
	{
		auto retval = MISC::_0x7A76104CC2CC69E8(entity, p1, p2);
		return retval;
	}

	static Any LUA_NATIVE_MISC_0xDC416CA762BC4F43_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5)
	{
		auto retval = MISC::_0xDC416CA762BC4F43(p0, p1, p2, p3, p4, p5);
		return retval;
	}

	static Any LUA_NATIVE_MISC_0x970339EFA4FDE518_(Any p0, Any p1, Any p2)
	{
		auto retval = MISC::_0x970339EFA4FDE518(p0, p1, p2);
		return retval;
	}

	static bool LUA_NATIVE_MISC_IS_ORBIS_VERSION()
	{
		auto retval = (bool)MISC::IS_ORBIS_VERSION();
		return retval;
	}

	static bool LUA_NATIVE_MISC_IS_DURANGO_VERSION()
	{
		auto retval = (bool)MISC::IS_DURANGO_VERSION();
		return retval;
	}

	static bool LUA_NATIVE_MISC_IS_PC_VERSION()
	{
		auto retval = (bool)MISC::IS_PC_VERSION();
		return retval;
	}

	static bool LUA_NATIVE_MISC_IS_STADIA_VERSION()
	{
		auto retval = (bool)MISC::IS_STADIA_VERSION();
		return retval;
	}

	static bool LUA_NATIVE_MISC_IS_STRING_NULL(sol::stack_object StringToTest)
	{
		auto retval = (bool)MISC::IS_STRING_NULL(StringToTest.is<const char*>() ? StringToTest.as<const char*>() : nullptr);
		return retval;
	}

	static bool LUA_NATIVE_MISC_IS_STRING_NULL_OR_EMPTY(sol::stack_object StringToTest)
	{
		auto retval = (bool)MISC::IS_STRING_NULL_OR_EMPTY(StringToTest.is<const char*>() ? StringToTest.as<const char*>() : nullptr);
		return retval;
	}

	static bool LUA_NATIVE_MISC_IS_STRING_NULL_OR_EMPTY_OR_SPACES(sol::stack_object string)
	{
		auto retval = (bool)MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(string.is<const char*>() ? string.as<const char*>() : nullptr);
		return retval;
	}

	static bool LUA_NATIVE_MISC_ARE_STRINGS_EQUAL(sol::stack_object String1, sol::stack_object String2)
	{
		auto retval = (bool)MISC::ARE_STRINGS_EQUAL(String1.is<const char*>() ? String1.as<const char*>() : nullptr, String2.is<const char*>() ? String2.as<const char*>() : nullptr);
		return retval;
	}

	static bool LUA_NATIVE_MISC_DOES_STRING_EXIST_IN_STRING_(sol::stack_object string1, sol::stack_object string2)
	{
		auto retval = (bool)MISC::_DOES_STRING_EXIST_IN_STRING(string1.is<const char*>() ? string1.as<const char*>() : nullptr, string2.is<const char*>() ? string2.as<const char*>() : nullptr);
		return retval;
	}

	static void LUA_NATIVE_MISC_0x3C3C7B1B5EC08764_()
	{
		MISC::_0x3C3C7B1B5EC08764();
	}

	static Any LUA_NATIVE_MISC_0x94E8CA3DEE952789_(Any p0, Any p1)
	{
		auto retval = MISC::_0x94E8CA3DEE952789(p0, p1);
		return retval;
	}

	static Any LUA_NATIVE_MISC_0x5B4A8121A47D844D_(Any p0)
	{
		auto retval = MISC::_0x5B4A8121A47D844D(p0);
		return retval;
	}

	static std::tuple<bool, int> LUA_NATIVE_MISC_STRING_TO_INT(sol::stack_object StringToConvert, int ReturnInteger)
	{
		std::tuple<bool, int> return_values;
		std::get<0>(return_values) = (bool)MISC::STRING_TO_INT(StringToConvert.is<const char*>() ? StringToConvert.as<const char*>() : nullptr, &ReturnInteger);
		std::get<1>(return_values) = ReturnInteger;

		return return_values;
	}

	static char LUA_NATIVE_MISC_INT_TO_STRING_(int value, sol::stack_object format, char buffer)
	{
		MISC::_INT_TO_STRING(value, format.is<const char*>() ? format.as<const char*>() : nullptr, &buffer);
		return buffer;
	}

	static void LUA_NATIVE_MISC_0x74ACA66484CEBAF0_(Any p0)
	{
		MISC::_0x74ACA66484CEBAF0(p0);
	}

	static void LUA_NATIVE_MISC_0x49C44FE78A135A1D_(Any p0)
	{
		MISC::_0x49C44FE78A135A1D(p0);
	}

	static void LUA_NATIVE_MISC_0xF650DCF5D6F312C1_(Any p0)
	{
		MISC::_0xF650DCF5D6F312C1(p0);
	}

	static const char* LUA_NATIVE_MISC_GET_STRING_FROM_FLOAT_(float value, int digits)
	{
		auto retval = MISC::_GET_STRING_FROM_FLOAT(value, digits);
		return retval;
	}

	static const char* LUA_NATIVE_MISC_GET_STRING_FROM_VECTOR_(float x, float y, float z)
	{
		auto retval = MISC::_GET_STRING_FROM_VECTOR(x, y, z);
		return retval;
	}

	static const char* LUA_NATIVE_MISC_GET_STRING_FROM_BOOL_(bool value)
	{
		auto retval = MISC::_GET_STRING_FROM_BOOL(value);
		return retval;
	}

	template <typename... Args>
	static const char* LUA_NATIVE_MISC_VAR_STRING(int flags, Args&&... varargs)
	{
		auto retval = MISC::VAR_STRING(flags, varargs);
		return retval;
	}

	static const char* LUA_NATIVE_MISC_CREATE_COLOR_STRING_(int rgb)
	{
		auto retval = MISC::_CREATE_COLOR_STRING(rgb);
		return retval;
	}

	static int LUA_NATIVE_MISC_SET_BITS_IN_RANGE(int VariableToChange, int StartBit, int EndBit, int NewValue)
	{
		MISC::SET_BITS_IN_RANGE(&VariableToChange, StartBit, EndBit, NewValue);
		return VariableToChange;
	}

	static int LUA_NATIVE_MISC_GET_BITS_IN_RANGE(int VariableToRead, int StartBit, int EndBit)
	{
		auto retval = MISC::GET_BITS_IN_RANGE(VariableToRead, StartBit, EndBit);
		return retval;
	}

	static void LUA_NATIVE_MISC_SET_GAME_PAUSED(bool bDoPause)
	{
		MISC::SET_GAME_PAUSED(bDoPause);
	}

	static void LUA_NATIVE_MISC_SET_THIS_SCRIPT_CAN_BE_PAUSED(bool bScriptCanBePaused)
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(bScriptCanBePaused);
	}

	static void LUA_NATIVE_MISC_SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(bool bCanRemoveBlipsCreatedByOtherScripts)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(bCanRemoveBlipsCreatedByOtherScripts);
	}

	static void LUA_NATIVE_MISC_SET_CHEAT_ACTIVE(int cheatId)
	{
		MISC::SET_CHEAT_ACTIVE(cheatId);
	}

	static void LUA_NATIVE_MISC_0xB711EB4BC8D06013_()
	{
		MISC::_0xB711EB4BC8D06013();
	}

	static void LUA_NATIVE_MISC_POPULATE_NOW()
	{
		MISC::POPULATE_NOW();
	}

	static bool LUA_NATIVE_MISC_IS_GAME_SESSION_STATE_MACHINE_IDLE()
	{
		auto retval = (bool)MISC::IS_GAME_SESSION_STATE_MACHINE_IDLE();
		return retval;
	}

	static bool LUA_NATIVE_MISC_QUEUE_SAVEGAME_OPERATION_(int p0)
	{
		auto retval = (bool)MISC::_QUEUE_SAVEGAME_OPERATION(p0);
		return retval;
	}

	static int LUA_NATIVE_MISC_GET_STATUS_OF_SAVEGAME_OPERATION_(int p0)
	{
		auto retval = MISC::_GET_STATUS_OF_SAVEGAME_OPERATION(p0);
		return retval;
	}

	static Any LUA_NATIVE_MISC_0x6C7B68D3CE60E8DE_(Any p0)
	{
		auto retval = MISC::_0x6C7B68D3CE60E8DE(p0);
		return retval;
	}

	static Any LUA_NATIVE_MISC_0x627B68D9CE6EE8DE_(Any p0)
	{
		auto retval = MISC::_0x627B68D9CE6EE8DE(p0);
		return retval;
	}

	static Any LUA_NATIVE_MISC_0x7CF96F1250EF3221_(Any p0)
	{
		auto retval = MISC::_0x7CF96F1250EF3221(p0);
		return retval;
	}

	static void LUA_NATIVE_MISC_COPY_SCRIPT_STRUCT(uintptr_t DestStruct, uintptr_t SourceStruct, int Size)
	{
		MISC::COPY_SCRIPT_STRUCT((Any*)DestStruct, (Any*)SourceStruct, Size);
	}

	static void LUA_NATIVE_MISC_ENABLE_DISPATCH_SERVICE(int dispatchType, bool bEnable)
	{
		MISC::ENABLE_DISPATCH_SERVICE(dispatchType, bEnable);
	}

	static void LUA_NATIVE_MISC_BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(int dispatchType, bool bBlock)
	{
		MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(dispatchType, bBlock);
	}

	static std::tuple<bool, int> LUA_NATIVE_MISC_CREATE_INCIDENT(int dispatchType, float vLocationX, float vLocationY, float vLocationZ, int iNumUnits, float fTime, int incidentIndex, Hash iOverrideRelGroupHash, int assassinsLevel)
	{
		std::tuple<bool, int> return_values;
		std::get<0>(return_values) = (bool)MISC::CREATE_INCIDENT(dispatchType, vLocationX, vLocationY, vLocationZ, iNumUnits, fTime, &incidentIndex, iOverrideRelGroupHash, assassinsLevel);
		std::get<1>(return_values) = incidentIndex;

		return return_values;
	}

	static std::tuple<bool, int> LUA_NATIVE_MISC_CREATE_INCIDENT_WITH_ENTITIES_(int dispatchService, float x, float y, float z, ItemSet itemSet, float radius, int outIncidentID)
	{
		std::tuple<bool, int> return_values;
		std::get<0>(return_values) = (bool)MISC::_CREATE_INCIDENT_WITH_ENTITIES(dispatchService, x, y, z, itemSet, radius, &outIncidentID);
		std::get<1>(return_values) = outIncidentID;

		return return_values;
	}

	static void LUA_NATIVE_MISC_DELETE_INCIDENT(int incidentIndex)
	{
		MISC::DELETE_INCIDENT(incidentIndex);
	}

	static bool LUA_NATIVE_MISC_IS_INCIDENT_VALID(int incidentIndex)
	{
		auto retval = (bool)MISC::IS_INCIDENT_VALID(incidentIndex);
		return retval;
	}

	static void LUA_NATIVE_MISC_SET_INCIDENT_UNK_(int incidentId)
	{
		MISC::_SET_INCIDENT_UNK(incidentId);
	}

	static int LUA_NATIVE_MISC_ADD_POP_MULTIPLIER_AREA(float minWSX, float minWSY, float minWSZ, float maxWSX, float maxWSY, float maxWSZ, float pedDensity, float trafficDensity, bool localOnly, bool bCameraGlobalMultiplier)
	{
		auto retval = MISC::ADD_POP_MULTIPLIER_AREA(minWSX, minWSY, minWSZ, maxWSX, maxWSY, maxWSZ, pedDensity, trafficDensity, localOnly, bCameraGlobalMultiplier);
		return retval;
	}

	static bool LUA_NATIVE_MISC_DOES_POP_MULTIPLIER_AREA_EXIST(int index)
	{
		auto retval = (bool)MISC::DOES_POP_MULTIPLIER_AREA_EXIST(index);
		return retval;
	}

	static void LUA_NATIVE_MISC_REMOVE_POP_MULTIPLIER_AREA(int index, bool localOnly)
	{
		MISC::REMOVE_POP_MULTIPLIER_AREA(index, localOnly);
	}

	static int LUA_NATIVE_MISC_ADD_POP_MULTIPLIER_VOLUME_(Volume volume, float pedDensity, float vehicleDensity, bool p3, bool p4)
	{
		auto retval = MISC::_ADD_POP_MULTIPLIER_VOLUME(volume, pedDensity, vehicleDensity, p3, p4);
		return retval;
	}

	static bool LUA_NATIVE_MISC_DOES_POP_MULTIPLIER_AREA_EXIST_FOR_VOLUME_(Volume volume)
	{
		auto retval = (bool)MISC::_DOES_POP_MULTIPLIER_AREA_EXIST_FOR_VOLUME(volume);
		return retval;
	}

	static void LUA_NATIVE_MISC_REMOVE_POP_MULTIPLIER_AREA_FOR_VOLUME_(Volume volume, int p1)
	{
		MISC::_REMOVE_POP_MULTIPLIER_AREA_FOR_VOLUME(volume, p1);
	}

	static void LUA_NATIVE_MISC_0xF569E33FB72ED28E_()
	{
		MISC::_0xF569E33FB72ED28E();
	}

	static void LUA_NATIVE_MISC_RESET_DISPATCH_IDEAL_SPAWN_DISTANCE()
	{
		MISC::RESET_DISPATCH_IDEAL_SPAWN_DISTANCE();
	}

	static void LUA_NATIVE_MISC_SET_DISPATCH_IDEAL_SPAWN_DISTANCE(float fIdealSpawnDistance)
	{
		MISC::SET_DISPATCH_IDEAL_SPAWN_DISTANCE(fIdealSpawnDistance);
	}

	static void LUA_NATIVE_MISC_RESET_DISPATCH_MIN_SPAWN_DISTANCE_()
	{
		MISC::_RESET_DISPATCH_MIN_SPAWN_DISTANCE();
	}

	static void LUA_NATIVE_MISC_SET_DISPATCH_MIN_SPAWN_DISTANCE_(float minSpawnDistance)
	{
		MISC::_SET_DISPATCH_MIN_SPAWN_DISTANCE(minSpawnDistance);
	}

	static void LUA_NATIVE_MISC_RESET_DISPATCH_MAX_SPAWN_DISTANCE_()
	{
		MISC::_RESET_DISPATCH_MAX_SPAWN_DISTANCE();
	}

	static void LUA_NATIVE_MISC_SET_DISPATCH_MAX_SPAWN_DISTANCE_(float maxSpawnDistance)
	{
		MISC::_SET_DISPATCH_MAX_SPAWN_DISTANCE(maxSpawnDistance);
	}

	static void LUA_NATIVE_MISC_0x4B0501A468B749F8_()
	{
		MISC::_0x4B0501A468B749F8();
	}

	static void LUA_NATIVE_MISC_0x6BCF7B5CD338281A_(Any p0, Any p1, Any p2)
	{
		MISC::_0x6BCF7B5CD338281A(p0, p1, p2);
	}

	static Any LUA_NATIVE_MISC_ADD_DISPATCH_SPAWN_BLOCKING_AREA_(Volume volume)
	{
		auto retval = MISC::_ADD_DISPATCH_SPAWN_BLOCKING_AREA(volume);
		return retval;
	}

	static void LUA_NATIVE_MISC_REMOVE_DISPATCH_SPAWN_BLOCKING_AREA(int iIndex)
	{
		MISC::REMOVE_DISPATCH_SPAWN_BLOCKING_AREA(iIndex);
	}

	static void LUA_NATIVE_MISC_RESET_WANTED_RESPONSE_NUM_PEDS_TO_SPAWN()
	{
		MISC::RESET_WANTED_RESPONSE_NUM_PEDS_TO_SPAWN();
	}

	static void LUA_NATIVE_MISC_ADD_TACTICAL_NAV_MESH_POINT(float vPositionX, float vPositionY, float vPositionZ, int p3)
	{
		MISC::ADD_TACTICAL_NAV_MESH_POINT(vPositionX, vPositionY, vPositionZ, p3);
	}

	static void LUA_NATIVE_MISC_CLEAR_TACTICAL_NAV_MESH_POINTS()
	{
		MISC::CLEAR_TACTICAL_NAV_MESH_POINTS();
	}

	static void LUA_NATIVE_MISC_DISPLAY_ONSCREEN_KEYBOARD(int keyboardTypeFlag, sol::stack_object prompt, sol::stack_object description, sol::stack_object initialValue1, sol::stack_object initialValue2, sol::stack_object initialValue3, sol::stack_object initialValue4, int maxLength)
	{
		MISC::DISPLAY_ONSCREEN_KEYBOARD(keyboardTypeFlag, prompt.is<const char*>() ? prompt.as<const char*>() : nullptr, description.is<const char*>() ? description.as<const char*>() : nullptr, initialValue1.is<const char*>() ? initialValue1.as<const char*>() : nullptr, initialValue2.is<const char*>() ? initialValue2.as<const char*>() : nullptr, initialValue3.is<const char*>() ? initialValue3.as<const char*>() : nullptr, initialValue4.is<const char*>() ? initialValue4.as<const char*>() : nullptr, maxLength);
	}

	static int LUA_NATIVE_MISC_UPDATE_ONSCREEN_KEYBOARD()
	{
		auto retval = MISC::UPDATE_ONSCREEN_KEYBOARD();
		return retval;
	}

	static const char* LUA_NATIVE_MISC_GET_ONSCREEN_KEYBOARD_RESULT()
	{
		auto retval = MISC::GET_ONSCREEN_KEYBOARD_RESULT();
		return retval;
	}

	static void LUA_NATIVE_MISC_CANCEL_ONSCREEN_KEYBOARD()
	{
		MISC::CANCEL_ONSCREEN_KEYBOARD();
	}

	static void LUA_NATIVE_MISC_NEXT_ONSCREEN_KEYBOARD_RESULT_WILL_DISPLAY_USING_THESE_FONTS(int fontBitField)
	{
		MISC::NEXT_ONSCREEN_KEYBOARD_RESULT_WILL_DISPLAY_USING_THESE_FONTS(fontBitField);
	}

	static void LUA_NATIVE_MISC_ACTION_MANAGER_ENABLE_ACTION(Hash iActionHash, bool bEnable)
	{
		MISC::ACTION_MANAGER_ENABLE_ACTION(iActionHash, bEnable);
	}

	static bool LUA_NATIVE_MISC_ACTION_MANAGER_IS_ACTION_ENABLED(Hash hash)
	{
		auto retval = (bool)MISC::ACTION_MANAGER_IS_ACTION_ENABLED(hash);
		return retval;
	}

	static int LUA_NATIVE_MISC_GET_REAL_WORLD_TIME()
	{
		auto retval = MISC::GET_REAL_WORLD_TIME();
		return retval;
	}

	static void LUA_NATIVE_MISC_SET_SUPER_JUMP_THIS_FRAME(Ped PedIndex)
	{
		MISC::SET_SUPER_JUMP_THIS_FRAME(PedIndex);
	}

	static void LUA_NATIVE_MISC_SCRIPT_RACE_INIT(int numCheckpoints, int numLaps, int numPlayers, int localPlayerIndex)
	{
		MISC::SCRIPT_RACE_INIT(numCheckpoints, numLaps, numPlayers, localPlayerIndex);
	}

	static void LUA_NATIVE_MISC_SCRIPT_RACE_SHUTDOWN()
	{
		MISC::SCRIPT_RACE_SHUTDOWN();
	}

	static void LUA_NATIVE_MISC_SCRIPT_RACE_PLAYER_HIT_CHECKPOINT(Ped pedIndex, int checkpoint, int lap, int time)
	{
		MISC::SCRIPT_RACE_PLAYER_HIT_CHECKPOINT(pedIndex, checkpoint, lap, time);
	}

	static std::tuple<bool, int, int> LUA_NATIVE_MISC_SCRIPT_RACE_GET_PLAYER_SPLIT_TIME(Ped pedIndex, int time, int position)
	{
		std::tuple<bool, int, int> return_values;
		std::get<0>(return_values) = (bool)MISC::SCRIPT_RACE_GET_PLAYER_SPLIT_TIME(pedIndex, &time, &position);
		std::get<1>(return_values) = time;
		std::get<2>(return_values) = position;

		return return_values;
	}

	static void LUA_NATIVE_MISC_START_END_USER_BENCHMARK()
	{
		MISC::START_END_USER_BENCHMARK();
	}

	static void LUA_NATIVE_MISC_STOP_END_USER_BENCHMARK()
	{
		MISC::STOP_END_USER_BENCHMARK();
	}

	static void LUA_NATIVE_MISC_RESET_END_USER_BENCHMARK()
	{
		MISC::RESET_END_USER_BENCHMARK();
	}

	static void LUA_NATIVE_MISC_SAVE_END_USER_BENCHMARK()
	{
		MISC::SAVE_END_USER_BENCHMARK();
	}

	static bool LUA_NATIVE_MISC_UI_STARTED_END_USER_BENCHMARK()
	{
		auto retval = (bool)MISC::UI_STARTED_END_USER_BENCHMARK();
		return retval;
	}

	static int LUA_NATIVE_MISC_GET_BENCHMARK_ITERATIONS()
	{
		auto retval = MISC::GET_BENCHMARK_ITERATIONS();
		return retval;
	}

	static int LUA_NATIVE_MISC_GET_BENCHMARK_PASS()
	{
		auto retval = MISC::GET_BENCHMARK_PASS();
		return retval;
	}

	static Any LUA_NATIVE_MISC_0xDC057B86FC157031_()
	{
		auto retval = MISC::_0xDC057B86FC157031();
		return retval;
	}

	static void LUA_NATIVE_MISC_0x9A252AA23D7098F2_()
	{
		MISC::_0x9A252AA23D7098F2();
	}

	static bool LUA_NATIVE_MISC_DOES_ITEM_HAVE_VALID_BASE_(ScrHandle item)
	{
		auto retval = (bool)MISC::_DOES_ITEM_HAVE_VALID_BASE(item);
		return retval;
	}

	static int LUA_NATIVE_MISC_GET_ITEM_TYPE_(ScrHandle handle)
	{
		auto retval = MISC::_GET_ITEM_TYPE(handle);
		return retval;
	}

	static bool LUA_NATIVE_MISC_IS_BASE_A_PERSISTENT_CHARACTER_(ScrHandle handle)
	{
		auto retval = (bool)MISC::_IS_BASE_A_PERSISTENT_CHARACTER(handle);
		return retval;
	}

	static bool LUA_NATIVE_MISC_IS_BASE_A_COVER_POINT_(ScrHandle handle)
	{
		auto retval = (bool)MISC::_IS_BASE_A_COVER_POINT(handle);
		return retval;
	}

	static void LUA_NATIVE_MISC_0x553D67295DDD2309_(Entity entity)
	{
		MISC::_0x553D67295DDD2309(entity);
	}

	static Volume LUA_NATIVE_MISC_GET_VOLUME_FROM_INDEXED_ITEM_(ScrHandle item)
	{
		auto retval = MISC::_GET_VOLUME_FROM_INDEXED_ITEM(item);
		return retval;
	}

	static Entity LUA_NATIVE_MISC_GET_ENTITY_FROM_ITEM_(ScrHandle item)
	{
		auto retval = MISC::_GET_ENTITY_FROM_ITEM(item);
		return retval;
	}

	static Ped LUA_NATIVE_MISC_GET_PED_FROM_INDEXED_ITEM_(ScrHandle item)
	{
		auto retval = MISC::_GET_PED_FROM_INDEXED_ITEM(item);
		return retval;
	}

	static Vehicle LUA_NATIVE_MISC_GET_VEHICLE_FROM_INDEXED_ITEM_(ScrHandle item)
	{
		auto retval = MISC::_GET_VEHICLE_FROM_INDEXED_ITEM(item);
		return retval;
	}

	static Object LUA_NATIVE_MISC_GET_OBJECT_FROM_INDEXED_ITEM_(ScrHandle item)
	{
		auto retval = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(item);
		return retval;
	}

	static Any LUA_NATIVE_MISC_0x33982467B1E349EF_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		auto retval = MISC::_0x33982467B1E349EF(p0, p1, p2, p3, p4, p5, p6);
		return retval;
	}

	static Any LUA_NATIVE_MISC_0x8314FC2013ECE2DA_(Any p0, Any p1, Any p2)
	{
		auto retval = MISC::_0x8314FC2013ECE2DA(p0, p1, p2);
		return retval;
	}

	static void LUA_NATIVE_MISC_0x4D5C9CC7E7E23E09_()
	{
		MISC::_0x4D5C9CC7E7E23E09();
	}

	static bool LUA_NATIVE_MISC_REGISTER_INTERACTION_LOCKON_PROMPT(Entity entity, sol::stack_object text, float radius, float p3, int flag, float p5, float p6, Prompt prompt, bool p8, int p9)
	{
		auto retval = (bool)MISC::REGISTER_INTERACTION_LOCKON_PROMPT(entity, text.is<const char*>() ? text.as<const char*>() : nullptr, radius, p3, flag, p5, p6, prompt, p8, p9);
		return retval;
	}

	static bool LUA_NATIVE_MISC_UNREGISTER_INTERACTION_LOCKON_PROMPT(Entity entity)
	{
		auto retval = (bool)MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(entity);
		return retval;
	}

	static void LUA_NATIVE_MISC_0xFC6ECB9170145ECE_()
	{
		MISC::_0xFC6ECB9170145ECE();
	}

	static Any LUA_NATIVE_MISC_0x35165C658077CD0B_()
	{
		auto retval = MISC::_0x35165C658077CD0B();
		return retval;
	}

	static bool LUA_NATIVE_MISC_0x4B101DBCC9482F2D_(Ped ped)
	{
		auto retval = (bool)MISC::_0x4B101DBCC9482F2D(ped);
		return retval;
	}

	static bool LUA_NATIVE_MISC_IS_MISSION_CREATOR_ACTIVE_()
	{
		auto retval = (bool)MISC::_IS_MISSION_CREATOR_ACTIVE();
		return retval;
	}

	static void LUA_NATIVE_MISC_0xA3A8926951471C82_()
	{
		MISC::_0xA3A8926951471C82();
	}

	static void LUA_NATIVE_MISC_CREATE_AI_MEMORY_(uintptr_t args, int aiMemoryType)
	{
		MISC::_CREATE_AI_MEMORY((Any*)args, aiMemoryType);
	}

	static bool LUA_NATIVE_MISC_GET_AI_PED_DOES_HAVE_EVENT_MEMORY_(uintptr_t args, int p1)
	{
		auto retval = (bool)MISC::_GET_AI_PED_DOES_HAVE_EVENT_MEMORY((Any*)args, p1);
		return retval;
	}

	static void LUA_NATIVE_MISC_0xEB946B9E579729AD_(Ped ped, Any p1)
	{
		MISC::_0xEB946B9E579729AD(ped, p1);
	}

	static void LUA_NATIVE_MISC_SET_AI_MEMORY_REACTIONS_ENABLED_(bool enabled)
	{
		MISC::_SET_AI_MEMORY_REACTIONS_ENABLED(enabled);
	}

	static Any LUA_NATIVE_MISC_0x8DB104CCEBCD58C5_(Any p0, Any p1)
	{
		auto retval = MISC::_0x8DB104CCEBCD58C5(p0, p1);
		return retval;
	}

	static void LUA_NATIVE_MISC_0x68319452C5064ABA_(Any p0, Any p1)
	{
		MISC::_0x68319452C5064ABA(p0, p1);
	}

	static void LUA_NATIVE_MISC_0xDE2C3B74D2B3705C_(Any p0, Any p1)
	{
		MISC::_0xDE2C3B74D2B3705C(p0, p1);
	}

	static void LUA_NATIVE_MISC_0x49F3241C28EBBFBC_(int p0)
	{
		MISC::_0x49F3241C28EBBFBC(p0);
	}

	static void LUA_NATIVE_MISC_0x183672FE838A661B_(uintptr_t data)
	{
		MISC::_0x183672FE838A661B((Any*)data);
	}

	static void LUA_NATIVE_MISC_0x38C0C9CAE1544500_(Hash p0)
	{
		MISC::_0x38C0C9CAE1544500(p0);
	}

	static void LUA_NATIVE_MISC_0x154340E87D8CC178_(Any p0)
	{
		MISC::_0x154340E87D8CC178(p0);
	}

	static void LUA_NATIVE_MISC_0x94FCADCF9F0C368E_(Any p0)
	{
		MISC::_0x94FCADCF9F0C368E(p0);
	}

	static bool LUA_NATIVE_MISC_0x0D0AE5081F88CFE1_(Hash p0)
	{
		auto retval = (bool)MISC::_0x0D0AE5081F88CFE1(p0);
		return retval;
	}

	static void LUA_NATIVE_MISC_0xAF3A84C7DE6A1DC5_(Any p0, Any p1)
	{
		MISC::_0xAF3A84C7DE6A1DC5(p0, p1);
	}

	static void LUA_NATIVE_MISC_LOOT_TABLES_GET_INFO_(Ped ped, bool p1, bool p2, Hash lootTableKey, uintptr_t p4, Any p5)
	{
		MISC::_LOOT_TABLES_GET_INFO(ped, p1, p2, lootTableKey, (Any*)p4, p5);
	}

	static Any LUA_NATIVE_MISC_0xB1F6665AA54DCD5C_(Any p0)
	{
		auto retval = MISC::_0xB1F6665AA54DCD5C(p0);
		return retval;
	}

	static Any LUA_NATIVE_MISC_0x8BB99B85444544D9_(Any p0, Any p1)
	{
		auto retval = MISC::_0x8BB99B85444544D9(p0, p1);
		return retval;
	}

	static Any LUA_NATIVE_MISC_0x6F02B5E50511721E_(Any p0)
	{
		auto retval = MISC::_0x6F02B5E50511721E(p0);
		return retval;
	}

	static Any LUA_NATIVE_MISC_0xCC1BAF72D571DB8D_(Any p0, Any p1, Any p2)
	{
		auto retval = MISC::_0xCC1BAF72D571DB8D(p0, p1, p2);
		return retval;
	}

	static bool LUA_NATIVE_MISC_IS_PED_DECOMPOSED_(Ped ped)
	{
		auto retval = (bool)MISC::_IS_PED_DECOMPOSED(ped);
		return retval;
	}

	static void LUA_NATIVE_MISC_SET_PED_DECOMPOSED(Ped ped, bool toggle)
	{
		MISC::SET_PED_DECOMPOSED(ped, toggle);
	}

	static void LUA_NATIVE_MISC_0xAB26DEEE120FD3FD_(Any p0, Any p1)
	{
		MISC::_0xAB26DEEE120FD3FD(p0, p1);
	}

	static void LUA_NATIVE_MISC_0x082C043C7AFC3747_(int compositeId, bool p1)
	{
		MISC::_0x082C043C7AFC3747(compositeId, p1);
	}

	static void LUA_NATIVE_MISC_DISABLE_LOOTING_COMPOSITE_LOOTABLE_THIS_FRAME(int compositeId, bool p1)
	{
		MISC::DISABLE_LOOTING_COMPOSITE_LOOTABLE_THIS_FRAME(compositeId, p1);
	}

	static void LUA_NATIVE_MISC_0xBB282CF5D2333FB8_(Any p0, Any p1)
	{
		MISC::_0xBB282CF5D2333FB8(p0, p1);
	}

	static void LUA_NATIVE_MISC_0xAD44856A1CD29635_(Any p0, Any p1, Any p2)
	{
		MISC::_0xAD44856A1CD29635(p0, p1, p2);
	}

	static Any LUA_NATIVE_MISC_0x38C2BF94D15F464D_(Any p0)
	{
		auto retval = MISC::_0x38C2BF94D15F464D(p0);
		return retval;
	}

	static void LUA_NATIVE_MISC_0x3A87FDA8F1B6CDFB_(Any p0, Any p1, Any p2)
	{
		MISC::_0x3A87FDA8F1B6CDFB(p0, p1, p2);
	}

	static void LUA_NATIVE_MISC_0x4647842FE8F31C1E_(Any p0, Any p1)
	{
		MISC::_0x4647842FE8F31C1E(p0, p1);
	}

	static bool LUA_NATIVE_MISC_GET_LOOTING_EVENT_HAS_FIRED_(Ped ped, sol::stack_object eventName)
	{
		auto retval = (bool)MISC::_GET_LOOTING_EVENT_HAS_FIRED(ped, eventName.is<const char*>() ? eventName.as<const char*>() : nullptr);
		return retval;
	}

	static void LUA_NATIVE_MISC_SET_LOOT_PELT_SATCHEL_ITEM_(Ped ped, Any item)
	{
		MISC::_SET_LOOT_PELT_SATCHEL_ITEM(ped, item);
	}

	static void LUA_NATIVE_MISC_0x96282005C5C6801F_(Any p0, Any p1)
	{
		MISC::_0x96282005C5C6801F(p0, p1);
	}

	static void LUA_NATIVE_MISC_0xF63FA29D4A9ACA86_(Any p0, Any p1)
	{
		MISC::_0xF63FA29D4A9ACA86(p0, p1);
	}

	static void LUA_NATIVE_MISC_0x8C0F6A3D7236DEEB_(Any p0, Any p1)
	{
		MISC::_0x8C0F6A3D7236DEEB(p0, p1);
	}

	static void LUA_NATIVE_MISC_0x7FA58CED69405F9A_(Any p0, Any p1)
	{
		MISC::_0x7FA58CED69405F9A(p0, p1);
	}

	static void LUA_NATIVE_MISC_0xA08111B053D84B4D_(Any p0)
	{
		MISC::_0xA08111B053D84B4D(p0);
	}

	static bool LUA_NATIVE_MISC_IS_GLOBAL_BLOCK_VALID_(int index)
	{
		auto retval = (bool)MISC::_IS_GLOBAL_BLOCK_VALID(index);
		return retval;
	}

	static void LUA_NATIVE_MISC_SET_GLOBAL_BLOCK_IS_LOADED_(int index, bool toggle)
	{
		MISC::_SET_GLOBAL_BLOCK_IS_LOADED(index, toggle);
	}

	static bool LUA_NATIVE_MISC_GAME_FRAMEWORK_MANAGER_INIT(Hash transitionMode)
	{
		auto retval = (bool)MISC::GAME_FRAMEWORK_MANAGER_INIT(transitionMode);
		return retval;
	}

	static void LUA_NATIVE_MISC_GAME_FRAMEWORK_MANAGER_SHUTDOWN_()
	{
		MISC::_GAME_FRAMEWORK_MANAGER_SHUTDOWN();
	}

	static Hash LUA_NATIVE_MISC_GAME_FRAMEWORK_MANAGER_GET_MODE_()
	{
		auto retval = MISC::_GAME_FRAMEWORK_MANAGER_GET_MODE();
		return retval;
	}

	static bool LUA_NATIVE_MISC_IS_PLAYER_OWNING_STANDALONE_SP_()
	{
		auto retval = (bool)MISC::_IS_PLAYER_OWNING_STANDALONE_SP();
		return retval;
	}

	static Any LUA_NATIVE_MISC_0x0358B8A41916C613_(Any p0, Any p1, Any p2, Any p3)
	{
		auto retval = MISC::_0x0358B8A41916C613(p0, p1, p2, p3);
		return retval;
	}

	static void LUA_NATIVE_MISC_SET_GAME_LOGIC_PAUSED_()
	{
		MISC::_SET_GAME_LOGIC_PAUSED();
	}

	static void LUA_NATIVE_MISC_STOP_CURRENT_LOADING_PROGRESS_TIMER()
	{
		MISC::STOP_CURRENT_LOADING_PROGRESS_TIMER();
	}

	static void LUA_NATIVE_MISC_0xDBDA48EC456ED908_()
	{
		MISC::_0xDBDA48EC456ED908();
	}

	void init_native_binding_MISC(sol::state& L)
	{
		auto MISC = L["MISC"].get_or_create<sol::table>();
		MISC.set_function("GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE", LUA_NATIVE_MISC_GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE);
		MISC.set_function("GET_NUMBER_OF_INSTRUCTIONS_", LUA_NATIVE_MISC_GET_NUMBER_OF_INSTRUCTIONS_);
		MISC.set_function("GET_MAX_NUM_INSTRUCTIONS_", LUA_NATIVE_MISC_GET_MAX_NUM_INSTRUCTIONS_);
		MISC.set_function("IS_MAG_DEMO_1_ACTIVE", LUA_NATIVE_MISC_IS_MAG_DEMO_1_ACTIVE);
		MISC.set_function("SET_RANDOM_SEED", LUA_NATIVE_MISC_SET_RANDOM_SEED);
		MISC.set_function("SET_TIME_SCALE", LUA_NATIVE_MISC_SET_TIME_SCALE);
		MISC.set_function("SET_MISSION_FLAG", LUA_NATIVE_MISC_SET_MISSION_FLAG);
		MISC.set_function("GET_MISSION_FLAG", LUA_NATIVE_MISC_GET_MISSION_FLAG);
		MISC.set_function("0x5801BE2DF2AF07EC_", LUA_NATIVE_MISC_0x5801BE2DF2AF07EC_);
		MISC.set_function("SET_RANDOM_EVENT_FLAG", LUA_NATIVE_MISC_SET_RANDOM_EVENT_FLAG);
		MISC.set_function("GET_RANDOM_EVENT_FLAG", LUA_NATIVE_MISC_GET_RANDOM_EVENT_FLAG);
		MISC.set_function("0x9BF2C0C568C61641_", LUA_NATIVE_MISC_0x9BF2C0C568C61641_);
		MISC.set_function("ACTIVITY_FEED_CREATE", LUA_NATIVE_MISC_ACTIVITY_FEED_CREATE);
		MISC.set_function("ACTIVITY_FEED_ADD_SUBSTRING_TO_CAPTION", LUA_NATIVE_MISC_ACTIVITY_FEED_ADD_SUBSTRING_TO_CAPTION);
		MISC.set_function("0xFF252E2BAFB7330F_", LUA_NATIVE_MISC_0xFF252E2BAFB7330F_);
		MISC.set_function("ACTIVITY_FEED_ACTION_START_WITH_COMMAND_LINE", LUA_NATIVE_MISC_ACTIVITY_FEED_ACTION_START_WITH_COMMAND_LINE);
		MISC.set_function("ACTIVITY_FEED_ACTION_START_WITH_COMMAND_LINE_ADD", LUA_NATIVE_MISC_ACTIVITY_FEED_ACTION_START_WITH_COMMAND_LINE_ADD);
		MISC.set_function("0xAF530E56505D1BD6_", LUA_NATIVE_MISC_0xAF530E56505D1BD6_);
		MISC.set_function("ACTIVITY_FEED_POST", LUA_NATIVE_MISC_ACTIVITY_FEED_POST);
		MISC.set_function("0xF81C53561D15F330_", LUA_NATIVE_MISC_0xF81C53561D15F330_);
		MISC.set_function("0x1096603B519C905F_", LUA_NATIVE_MISC_0x1096603B519C905F_);
		MISC.set_function("0xCC3EDC5614B03F61_", LUA_NATIVE_MISC_0xCC3EDC5614B03F61_);
		MISC.set_function("INFORM_CODE_OF_CONTENT_ID_OF_CURRENT_UGC_MISSION", LUA_NATIVE_MISC_INFORM_CODE_OF_CONTENT_ID_OF_CURRENT_UGC_MISSION);
		MISC.set_function("0xDA4D8EB04E8E2928_", LUA_NATIVE_MISC_0xDA4D8EB04E8E2928_);
		MISC.set_function("0xB08C4FA25BC29DB9_", LUA_NATIVE_MISC_0xB08C4FA25BC29DB9_);
		MISC.set_function("GET_PREV_WEATHER_TYPE_HASH_NAME_", LUA_NATIVE_MISC_GET_PREV_WEATHER_TYPE_HASH_NAME_);
		MISC.set_function("GET_NEXT_WEATHER_TYPE_HASH_NAME_", LUA_NATIVE_MISC_GET_NEXT_WEATHER_TYPE_HASH_NAME_);
		MISC.set_function("0x0730E518486DEEC3_", LUA_NATIVE_MISC_0x0730E518486DEEC3_);
		MISC.set_function("SET_WEATHER_TYPE", LUA_NATIVE_MISC_SET_WEATHER_TYPE);
		MISC.set_function("SET_WEATHER_TYPE_2_", LUA_NATIVE_MISC_SET_WEATHER_TYPE_2_);
		MISC.set_function("GET_RANDOM_WEATHER_TYPE_INDEX_", LUA_NATIVE_MISC_GET_RANDOM_WEATHER_TYPE_INDEX_);
		MISC.set_function("GET_RANDOM_WEATHER_TYPE_", LUA_NATIVE_MISC_GET_RANDOM_WEATHER_TYPE_);
		MISC.set_function("SET_RANDOM_WEATHER_TYPE", LUA_NATIVE_MISC_SET_RANDOM_WEATHER_TYPE);
		MISC.set_function("CLEAR_WEATHER_TYPE_PERSIST", LUA_NATIVE_MISC_CLEAR_WEATHER_TYPE_PERSIST);
		MISC.set_function("CLEAR_WEATHER_TYPE_PERSIST_OVERTIME_", LUA_NATIVE_MISC_CLEAR_WEATHER_TYPE_PERSIST_OVERTIME_);
		MISC.set_function("GET_CURR_WEATHER_STATE", LUA_NATIVE_MISC_GET_CURR_WEATHER_STATE);
		MISC.set_function("SET_CURR_WEATHER_STATE", LUA_NATIVE_MISC_SET_CURR_WEATHER_STATE);
		MISC.set_function("SET_WEATHER_TYPE_FROZEN_", LUA_NATIVE_MISC_SET_WEATHER_TYPE_FROZEN_);
		MISC.set_function("GET_FORCED_WEATHER_", LUA_NATIVE_MISC_GET_FORCED_WEATHER_);
		MISC.set_function("0x2916B30DC6C41179_", LUA_NATIVE_MISC_0x2916B30DC6C41179_);
		MISC.set_function("0xD3F943B88F55376A_", LUA_NATIVE_MISC_0xD3F943B88F55376A_);
		MISC.set_function("0x243CEDE8F916B994_", LUA_NATIVE_MISC_0x243CEDE8F916B994_);
		MISC.set_function("SET_OVERRIDE_WEATHER_", LUA_NATIVE_MISC_SET_OVERRIDE_WEATHER_);
		MISC.set_function("CLEAR_OVERRIDE_WEATHER", LUA_NATIVE_MISC_CLEAR_OVERRIDE_WEATHER);
		MISC.set_function("SET_WEATHER_VARIATION_", LUA_NATIVE_MISC_SET_WEATHER_VARIATION_);
		MISC.set_function("CLEAR_WEATHER_VARIATION_", LUA_NATIVE_MISC_CLEAR_WEATHER_VARIATION_);
		MISC.set_function("WATER_OVERRIDE_SET_SHOREWAVEAMPLITUDE", LUA_NATIVE_MISC_WATER_OVERRIDE_SET_SHOREWAVEAMPLITUDE);
		MISC.set_function("WATER_OVERRIDE_SET_OCEANWAVEMAXAMPLITUDE", LUA_NATIVE_MISC_WATER_OVERRIDE_SET_OCEANWAVEMAXAMPLITUDE);
		MISC.set_function("GET_TEMPERATURE_AT_COORDS_", LUA_NATIVE_MISC_GET_TEMPERATURE_AT_COORDS_);
		MISC.set_function("SET_WIND_SPEED", LUA_NATIVE_MISC_SET_WIND_SPEED);
		MISC.set_function("GET_WIND_SPEED", LUA_NATIVE_MISC_GET_WIND_SPEED);
		MISC.set_function("SET_WIND_DIRECTION", LUA_NATIVE_MISC_SET_WIND_DIRECTION);
		MISC.set_function("GET_WIND_DIRECTION", LUA_NATIVE_MISC_GET_WIND_DIRECTION);
		MISC.set_function("SET_RAIN", LUA_NATIVE_MISC_SET_RAIN);
		MISC.set_function("GET_RAIN_LEVEL", LUA_NATIVE_MISC_GET_RAIN_LEVEL);
		MISC.set_function("0x745808BB01CEC6B9_", LUA_NATIVE_MISC_0x745808BB01CEC6B9_);
		MISC.set_function("SET_SNOW_LEVEL_", LUA_NATIVE_MISC_SET_SNOW_LEVEL_);
		MISC.set_function("GET_SNOW_LEVEL", LUA_NATIVE_MISC_GET_SNOW_LEVEL);
		MISC.set_function("FORCE_LIGHTNING_FLASH", LUA_NATIVE_MISC_FORCE_LIGHTNING_FLASH);
		MISC.set_function("FORCE_LIGHTNING_FLASH_AT_COORDS_", LUA_NATIVE_MISC_FORCE_LIGHTNING_FLASH_AT_COORDS_);
		MISC.set_function("0xA9342743B634A462_", LUA_NATIVE_MISC_0xA9342743B634A462_);
		MISC.set_function("GET_GAME_TIMER", LUA_NATIVE_MISC_GET_GAME_TIMER);
		MISC.set_function("GET_GAME_TIMER_NON_SCALED_CLIPPED_", LUA_NATIVE_MISC_GET_GAME_TIMER_NON_SCALED_CLIPPED_);
		MISC.set_function("GET_SYSTEM_TIME", LUA_NATIVE_MISC_GET_SYSTEM_TIME);
		MISC.set_function("GET_NUMBER_OF_MICROSECONDS_SINCE_LAST_CALL", LUA_NATIVE_MISC_GET_NUMBER_OF_MICROSECONDS_SINCE_LAST_CALL);
		MISC.set_function("GET_SCRIPT_TIME_WITHIN_FRAME_IN_MICROSECONDS", LUA_NATIVE_MISC_GET_SCRIPT_TIME_WITHIN_FRAME_IN_MICROSECONDS);
		MISC.set_function("RESET_SCRIPT_TIME_WITHIN_FRAME", LUA_NATIVE_MISC_RESET_SCRIPT_TIME_WITHIN_FRAME);
		MISC.set_function("GET_FRAME_TIME", LUA_NATIVE_MISC_GET_FRAME_TIME);
		MISC.set_function("GET_SYSTEM_TIME_STEP", LUA_NATIVE_MISC_GET_SYSTEM_TIME_STEP);
		MISC.set_function("GET_FRAME_COUNT", LUA_NATIVE_MISC_GET_FRAME_COUNT);
		MISC.set_function("0x6BED40493A1AFDB8_", LUA_NATIVE_MISC_0x6BED40493A1AFDB8_);
		MISC.set_function("READ_INT_AS_FLOAT_", LUA_NATIVE_MISC_READ_INT_AS_FLOAT_);
		MISC.set_function("GET_RANDOM_FLOAT_IN_RANGE", LUA_NATIVE_MISC_GET_RANDOM_FLOAT_IN_RANGE);
		MISC.set_function("GET_RANDOM_INT_IN_RANGE", LUA_NATIVE_MISC_GET_RANDOM_INT_IN_RANGE);
		MISC.set_function("GET_GROUND_Z_FOR_3D_COORD", LUA_NATIVE_MISC_GET_GROUND_Z_FOR_3D_COORD);
		MISC.set_function("GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD", LUA_NATIVE_MISC_GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD);
		MISC.set_function("0xBBE5B63EFFB08E68_", LUA_NATIVE_MISC_0xBBE5B63EFFB08E68_);
		MISC.set_function("ASIN", LUA_NATIVE_MISC_ASIN);
		MISC.set_function("ACOS", LUA_NATIVE_MISC_ACOS);
		MISC.set_function("TAN", LUA_NATIVE_MISC_TAN);
		MISC.set_function("ATAN", LUA_NATIVE_MISC_ATAN);
		MISC.set_function("ATAN2", LUA_NATIVE_MISC_ATAN2);
		MISC.set_function("GET_DISTANCE_BETWEEN_COORDS", LUA_NATIVE_MISC_GET_DISTANCE_BETWEEN_COORDS);
		MISC.set_function("GET_ANGLE_BETWEEN_2D_VECTORS", LUA_NATIVE_MISC_GET_ANGLE_BETWEEN_2D_VECTORS);
		MISC.set_function("GET_HEADING_FROM_VECTOR_2D", LUA_NATIVE_MISC_GET_HEADING_FROM_VECTOR_2D);
		MISC.set_function("GET_CLOSEST_POINT_ON_LINE", LUA_NATIVE_MISC_GET_CLOSEST_POINT_ON_LINE);
		MISC.set_function("GET_LINE_PLANE_INTERSECTION", LUA_NATIVE_MISC_GET_LINE_PLANE_INTERSECTION);
		MISC.set_function("SET_BIT", LUA_NATIVE_MISC_SET_BIT);
		MISC.set_function("CLEAR_BIT", LUA_NATIVE_MISC_CLEAR_BIT);
		MISC.set_function("IS_BIT_FLAG_SET_", LUA_NATIVE_MISC_IS_BIT_FLAG_SET_);
		MISC.set_function("IS_ANY_BIT_FLAG_SET_", LUA_NATIVE_MISC_IS_ANY_BIT_FLAG_SET_);
		MISC.set_function("COUNT_BIT_FLAGS_", LUA_NATIVE_MISC_COUNT_BIT_FLAGS_);
		MISC.set_function("SET_BIT_FLAG_", LUA_NATIVE_MISC_SET_BIT_FLAG_);
		MISC.set_function("CLEAR_BIT_FLAG_", LUA_NATIVE_MISC_CLEAR_BIT_FLAG_);
		MISC.set_function("CLEAR_ALL_BIT_FLAGS_", LUA_NATIVE_MISC_CLEAR_ALL_BIT_FLAGS_);
		MISC.set_function("GET_HASH_KEY", LUA_NATIVE_MISC_GET_HASH_KEY);
		MISC.set_function("GET_EASING_CURVE_VALUE_", LUA_NATIVE_MISC_GET_EASING_CURVE_VALUE_);
		MISC.set_function("IS_POSITION_OCCUPIED", LUA_NATIVE_MISC_IS_POSITION_OCCUPIED);
		MISC.set_function("CLEAR_AREA", LUA_NATIVE_MISC_CLEAR_AREA);
		MISC.set_function("CLEAR_VOLUME_AREA_", LUA_NATIVE_MISC_CLEAR_VOLUME_AREA_);
		MISC.set_function("CLEAR_ANGLED_AREA_OF_VEHICLES", LUA_NATIVE_MISC_CLEAR_ANGLED_AREA_OF_VEHICLES);
		MISC.set_function("SET_CREDITS_ACTIVE", LUA_NATIVE_MISC_SET_CREDITS_ACTIVE);
		MISC.set_function("NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME", LUA_NATIVE_MISC_NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME);
		MISC.set_function("PAUSE_DEATH_ARREST_RESTART", LUA_NATIVE_MISC_PAUSE_DEATH_ARREST_RESTART);
		MISC.set_function("IGNORE_NEXT_RESTART", LUA_NATIVE_MISC_IGNORE_NEXT_RESTART);
		MISC.set_function("SET_FADE_IN_AFTER_DEATH_ARREST", LUA_NATIVE_MISC_SET_FADE_IN_AFTER_DEATH_ARREST);
		MISC.set_function("SET_FADE_IN_AFTER_LOAD", LUA_NATIVE_MISC_SET_FADE_IN_AFTER_LOAD);
		MISC.set_function("OVERRIDE_SAVE_HOUSE", LUA_NATIVE_MISC_OVERRIDE_SAVE_HOUSE);
		MISC.set_function("SHOOT_SINGLE_BULLET_BETWEEN_COORDS", LUA_NATIVE_MISC_SHOOT_SINGLE_BULLET_BETWEEN_COORDS);
		MISC.set_function("FIRE_SINGLE_BULLET", LUA_NATIVE_MISC_FIRE_SINGLE_BULLET);
		MISC.set_function("GET_MODEL_DIMENSIONS", LUA_NATIVE_MISC_GET_MODEL_DIMENSIONS);
		MISC.set_function("IS_BIT_SET", LUA_NATIVE_MISC_IS_BIT_SET);
		MISC.set_function("0x0A487CC74A517FB5_", LUA_NATIVE_MISC_0x0A487CC74A517FB5_);
		MISC.set_function("IS_MINIGAME_IN_PROGRESS", LUA_NATIVE_MISC_IS_MINIGAME_IN_PROGRESS);
		MISC.set_function("SHOULD_USE_METRIC_MEASUREMENTS", LUA_NATIVE_MISC_SHOULD_USE_METRIC_MEASUREMENTS);
		MISC.set_function("SHOULD_USE_METRIC_MEASUREMENTS_2_", LUA_NATIVE_MISC_SHOULD_USE_METRIC_MEASUREMENTS_2_);
		MISC.set_function("SHOULD_USE_METRIC_TEMPERATURE_", LUA_NATIVE_MISC_SHOULD_USE_METRIC_TEMPERATURE_);
		MISC.set_function("SHOULD_USE_METRIC_WEIGHT_", LUA_NATIVE_MISC_SHOULD_USE_METRIC_WEIGHT_);
		MISC.set_function("SHOULD_USE_24_HOUR_CLOCK_", LUA_NATIVE_MISC_SHOULD_USE_24_HOUR_CLOCK_);
		MISC.set_function("COMPARE_STRINGS", LUA_NATIVE_MISC_COMPARE_STRINGS);
		MISC.set_function("ABSI", LUA_NATIVE_MISC_ABSI);
		MISC.set_function("ABSF", LUA_NATIVE_MISC_ABSF);
		MISC.set_function("IS_PROJECTILE_IN_AREA", LUA_NATIVE_MISC_IS_PROJECTILE_IN_AREA);
		MISC.set_function("IS_PROJECTILE_TYPE_IN_AREA", LUA_NATIVE_MISC_IS_PROJECTILE_TYPE_IN_AREA);
		MISC.set_function("IS_PROJECTILE_TYPE_IN_ANGLED_AREA", LUA_NATIVE_MISC_IS_PROJECTILE_TYPE_IN_ANGLED_AREA);
		MISC.set_function("IS_PROJECTILE_TYPE_WITHIN_DISTANCE", LUA_NATIVE_MISC_IS_PROJECTILE_TYPE_WITHIN_DISTANCE);
		MISC.set_function("GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE", LUA_NATIVE_MISC_GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE);
		MISC.set_function("GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE", LUA_NATIVE_MISC_GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE);
		MISC.set_function("IS_BULLET_IN_ANGLED_AREA", LUA_NATIVE_MISC_IS_BULLET_IN_ANGLED_AREA);
		MISC.set_function("IS_BULLET_IN_AREA", LUA_NATIVE_MISC_IS_BULLET_IN_AREA);
		MISC.set_function("IS_BULLET_IN_BOX", LUA_NATIVE_MISC_IS_BULLET_IN_BOX);
		MISC.set_function("HAS_BULLET_IMPACTED_IN_AREA", LUA_NATIVE_MISC_HAS_BULLET_IMPACTED_IN_AREA);
		MISC.set_function("HAS_BULLET_IMPACTED_IN_BOX", LUA_NATIVE_MISC_HAS_BULLET_IMPACTED_IN_BOX);
		MISC.set_function("0x7A76104CC2CC69E8_", LUA_NATIVE_MISC_0x7A76104CC2CC69E8_);
		MISC.set_function("0xDC416CA762BC4F43_", LUA_NATIVE_MISC_0xDC416CA762BC4F43_);
		MISC.set_function("0x970339EFA4FDE518_", LUA_NATIVE_MISC_0x970339EFA4FDE518_);
		MISC.set_function("IS_ORBIS_VERSION", LUA_NATIVE_MISC_IS_ORBIS_VERSION);
		MISC.set_function("IS_DURANGO_VERSION", LUA_NATIVE_MISC_IS_DURANGO_VERSION);
		MISC.set_function("IS_PC_VERSION", LUA_NATIVE_MISC_IS_PC_VERSION);
		MISC.set_function("IS_STADIA_VERSION", LUA_NATIVE_MISC_IS_STADIA_VERSION);
		MISC.set_function("IS_STRING_NULL", LUA_NATIVE_MISC_IS_STRING_NULL);
		MISC.set_function("IS_STRING_NULL_OR_EMPTY", LUA_NATIVE_MISC_IS_STRING_NULL_OR_EMPTY);
		MISC.set_function("IS_STRING_NULL_OR_EMPTY_OR_SPACES", LUA_NATIVE_MISC_IS_STRING_NULL_OR_EMPTY_OR_SPACES);
		MISC.set_function("ARE_STRINGS_EQUAL", LUA_NATIVE_MISC_ARE_STRINGS_EQUAL);
		MISC.set_function("DOES_STRING_EXIST_IN_STRING_", LUA_NATIVE_MISC_DOES_STRING_EXIST_IN_STRING_);
		MISC.set_function("0x3C3C7B1B5EC08764_", LUA_NATIVE_MISC_0x3C3C7B1B5EC08764_);
		MISC.set_function("0x94E8CA3DEE952789_", LUA_NATIVE_MISC_0x94E8CA3DEE952789_);
		MISC.set_function("0x5B4A8121A47D844D_", LUA_NATIVE_MISC_0x5B4A8121A47D844D_);
		MISC.set_function("STRING_TO_INT", LUA_NATIVE_MISC_STRING_TO_INT);
		MISC.set_function("INT_TO_STRING_", LUA_NATIVE_MISC_INT_TO_STRING_);
		MISC.set_function("0x74ACA66484CEBAF0_", LUA_NATIVE_MISC_0x74ACA66484CEBAF0_);
		MISC.set_function("0x49C44FE78A135A1D_", LUA_NATIVE_MISC_0x49C44FE78A135A1D_);
		MISC.set_function("0xF650DCF5D6F312C1_", LUA_NATIVE_MISC_0xF650DCF5D6F312C1_);
		MISC.set_function("GET_STRING_FROM_FLOAT_", LUA_NATIVE_MISC_GET_STRING_FROM_FLOAT_);
		MISC.set_function("GET_STRING_FROM_VECTOR_", LUA_NATIVE_MISC_GET_STRING_FROM_VECTOR_);
		MISC.set_function("GET_STRING_FROM_BOOL_", LUA_NATIVE_MISC_GET_STRING_FROM_BOOL_);
		// MISC.set_function("VAR_STRING", LUA_NATIVE_MISC_VAR_STRING);
		MISC.set_function("CREATE_COLOR_STRING_", LUA_NATIVE_MISC_CREATE_COLOR_STRING_);
		MISC.set_function("SET_BITS_IN_RANGE", LUA_NATIVE_MISC_SET_BITS_IN_RANGE);
		MISC.set_function("GET_BITS_IN_RANGE", LUA_NATIVE_MISC_GET_BITS_IN_RANGE);
		MISC.set_function("SET_GAME_PAUSED", LUA_NATIVE_MISC_SET_GAME_PAUSED);
		MISC.set_function("SET_THIS_SCRIPT_CAN_BE_PAUSED", LUA_NATIVE_MISC_SET_THIS_SCRIPT_CAN_BE_PAUSED);
		MISC.set_function("SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT", LUA_NATIVE_MISC_SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT);
		MISC.set_function("SET_CHEAT_ACTIVE", LUA_NATIVE_MISC_SET_CHEAT_ACTIVE);
		MISC.set_function("0xB711EB4BC8D06013_", LUA_NATIVE_MISC_0xB711EB4BC8D06013_);
		MISC.set_function("POPULATE_NOW", LUA_NATIVE_MISC_POPULATE_NOW);
		MISC.set_function("IS_GAME_SESSION_STATE_MACHINE_IDLE", LUA_NATIVE_MISC_IS_GAME_SESSION_STATE_MACHINE_IDLE);
		MISC.set_function("QUEUE_SAVEGAME_OPERATION_", LUA_NATIVE_MISC_QUEUE_SAVEGAME_OPERATION_);
		MISC.set_function("GET_STATUS_OF_SAVEGAME_OPERATION_", LUA_NATIVE_MISC_GET_STATUS_OF_SAVEGAME_OPERATION_);
		MISC.set_function("0x6C7B68D3CE60E8DE_", LUA_NATIVE_MISC_0x6C7B68D3CE60E8DE_);
		MISC.set_function("0x627B68D9CE6EE8DE_", LUA_NATIVE_MISC_0x627B68D9CE6EE8DE_);
		MISC.set_function("0x7CF96F1250EF3221_", LUA_NATIVE_MISC_0x7CF96F1250EF3221_);
		MISC.set_function("COPY_SCRIPT_STRUCT", LUA_NATIVE_MISC_COPY_SCRIPT_STRUCT);
		MISC.set_function("ENABLE_DISPATCH_SERVICE", LUA_NATIVE_MISC_ENABLE_DISPATCH_SERVICE);
		MISC.set_function("BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION", LUA_NATIVE_MISC_BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION);
		MISC.set_function("CREATE_INCIDENT", LUA_NATIVE_MISC_CREATE_INCIDENT);
		MISC.set_function("CREATE_INCIDENT_WITH_ENTITIES_", LUA_NATIVE_MISC_CREATE_INCIDENT_WITH_ENTITIES_);
		MISC.set_function("DELETE_INCIDENT", LUA_NATIVE_MISC_DELETE_INCIDENT);
		MISC.set_function("IS_INCIDENT_VALID", LUA_NATIVE_MISC_IS_INCIDENT_VALID);
		MISC.set_function("SET_INCIDENT_UNK_", LUA_NATIVE_MISC_SET_INCIDENT_UNK_);
		MISC.set_function("ADD_POP_MULTIPLIER_AREA", LUA_NATIVE_MISC_ADD_POP_MULTIPLIER_AREA);
		MISC.set_function("DOES_POP_MULTIPLIER_AREA_EXIST", LUA_NATIVE_MISC_DOES_POP_MULTIPLIER_AREA_EXIST);
		MISC.set_function("REMOVE_POP_MULTIPLIER_AREA", LUA_NATIVE_MISC_REMOVE_POP_MULTIPLIER_AREA);
		MISC.set_function("ADD_POP_MULTIPLIER_VOLUME_", LUA_NATIVE_MISC_ADD_POP_MULTIPLIER_VOLUME_);
		MISC.set_function("DOES_POP_MULTIPLIER_AREA_EXIST_FOR_VOLUME_", LUA_NATIVE_MISC_DOES_POP_MULTIPLIER_AREA_EXIST_FOR_VOLUME_);
		MISC.set_function("REMOVE_POP_MULTIPLIER_AREA_FOR_VOLUME_", LUA_NATIVE_MISC_REMOVE_POP_MULTIPLIER_AREA_FOR_VOLUME_);
		MISC.set_function("0xF569E33FB72ED28E_", LUA_NATIVE_MISC_0xF569E33FB72ED28E_);
		MISC.set_function("RESET_DISPATCH_IDEAL_SPAWN_DISTANCE", LUA_NATIVE_MISC_RESET_DISPATCH_IDEAL_SPAWN_DISTANCE);
		MISC.set_function("SET_DISPATCH_IDEAL_SPAWN_DISTANCE", LUA_NATIVE_MISC_SET_DISPATCH_IDEAL_SPAWN_DISTANCE);
		MISC.set_function("RESET_DISPATCH_MIN_SPAWN_DISTANCE_", LUA_NATIVE_MISC_RESET_DISPATCH_MIN_SPAWN_DISTANCE_);
		MISC.set_function("SET_DISPATCH_MIN_SPAWN_DISTANCE_", LUA_NATIVE_MISC_SET_DISPATCH_MIN_SPAWN_DISTANCE_);
		MISC.set_function("RESET_DISPATCH_MAX_SPAWN_DISTANCE_", LUA_NATIVE_MISC_RESET_DISPATCH_MAX_SPAWN_DISTANCE_);
		MISC.set_function("SET_DISPATCH_MAX_SPAWN_DISTANCE_", LUA_NATIVE_MISC_SET_DISPATCH_MAX_SPAWN_DISTANCE_);
		MISC.set_function("0x4B0501A468B749F8_", LUA_NATIVE_MISC_0x4B0501A468B749F8_);
		MISC.set_function("0x6BCF7B5CD338281A_", LUA_NATIVE_MISC_0x6BCF7B5CD338281A_);
		MISC.set_function("ADD_DISPATCH_SPAWN_BLOCKING_AREA_", LUA_NATIVE_MISC_ADD_DISPATCH_SPAWN_BLOCKING_AREA_);
		MISC.set_function("REMOVE_DISPATCH_SPAWN_BLOCKING_AREA", LUA_NATIVE_MISC_REMOVE_DISPATCH_SPAWN_BLOCKING_AREA);
		MISC.set_function("RESET_WANTED_RESPONSE_NUM_PEDS_TO_SPAWN", LUA_NATIVE_MISC_RESET_WANTED_RESPONSE_NUM_PEDS_TO_SPAWN);
		MISC.set_function("ADD_TACTICAL_NAV_MESH_POINT", LUA_NATIVE_MISC_ADD_TACTICAL_NAV_MESH_POINT);
		MISC.set_function("CLEAR_TACTICAL_NAV_MESH_POINTS", LUA_NATIVE_MISC_CLEAR_TACTICAL_NAV_MESH_POINTS);
		MISC.set_function("DISPLAY_ONSCREEN_KEYBOARD", LUA_NATIVE_MISC_DISPLAY_ONSCREEN_KEYBOARD);
		MISC.set_function("UPDATE_ONSCREEN_KEYBOARD", LUA_NATIVE_MISC_UPDATE_ONSCREEN_KEYBOARD);
		MISC.set_function("GET_ONSCREEN_KEYBOARD_RESULT", LUA_NATIVE_MISC_GET_ONSCREEN_KEYBOARD_RESULT);
		MISC.set_function("CANCEL_ONSCREEN_KEYBOARD", LUA_NATIVE_MISC_CANCEL_ONSCREEN_KEYBOARD);
		MISC.set_function("NEXT_ONSCREEN_KEYBOARD_RESULT_WILL_DISPLAY_USING_THESE_FONTS", LUA_NATIVE_MISC_NEXT_ONSCREEN_KEYBOARD_RESULT_WILL_DISPLAY_USING_THESE_FONTS);
		MISC.set_function("ACTION_MANAGER_ENABLE_ACTION", LUA_NATIVE_MISC_ACTION_MANAGER_ENABLE_ACTION);
		MISC.set_function("ACTION_MANAGER_IS_ACTION_ENABLED", LUA_NATIVE_MISC_ACTION_MANAGER_IS_ACTION_ENABLED);
		MISC.set_function("GET_REAL_WORLD_TIME", LUA_NATIVE_MISC_GET_REAL_WORLD_TIME);
		MISC.set_function("SET_SUPER_JUMP_THIS_FRAME", LUA_NATIVE_MISC_SET_SUPER_JUMP_THIS_FRAME);
		MISC.set_function("SCRIPT_RACE_INIT", LUA_NATIVE_MISC_SCRIPT_RACE_INIT);
		MISC.set_function("SCRIPT_RACE_SHUTDOWN", LUA_NATIVE_MISC_SCRIPT_RACE_SHUTDOWN);
		MISC.set_function("SCRIPT_RACE_PLAYER_HIT_CHECKPOINT", LUA_NATIVE_MISC_SCRIPT_RACE_PLAYER_HIT_CHECKPOINT);
		MISC.set_function("SCRIPT_RACE_GET_PLAYER_SPLIT_TIME", LUA_NATIVE_MISC_SCRIPT_RACE_GET_PLAYER_SPLIT_TIME);
		MISC.set_function("START_END_USER_BENCHMARK", LUA_NATIVE_MISC_START_END_USER_BENCHMARK);
		MISC.set_function("STOP_END_USER_BENCHMARK", LUA_NATIVE_MISC_STOP_END_USER_BENCHMARK);
		MISC.set_function("RESET_END_USER_BENCHMARK", LUA_NATIVE_MISC_RESET_END_USER_BENCHMARK);
		MISC.set_function("SAVE_END_USER_BENCHMARK", LUA_NATIVE_MISC_SAVE_END_USER_BENCHMARK);
		MISC.set_function("UI_STARTED_END_USER_BENCHMARK", LUA_NATIVE_MISC_UI_STARTED_END_USER_BENCHMARK);
		MISC.set_function("GET_BENCHMARK_ITERATIONS", LUA_NATIVE_MISC_GET_BENCHMARK_ITERATIONS);
		MISC.set_function("GET_BENCHMARK_PASS", LUA_NATIVE_MISC_GET_BENCHMARK_PASS);
		MISC.set_function("0xDC057B86FC157031_", LUA_NATIVE_MISC_0xDC057B86FC157031_);
		MISC.set_function("0x9A252AA23D7098F2_", LUA_NATIVE_MISC_0x9A252AA23D7098F2_);
		MISC.set_function("DOES_ITEM_HAVE_VALID_BASE_", LUA_NATIVE_MISC_DOES_ITEM_HAVE_VALID_BASE_);
		MISC.set_function("GET_ITEM_TYPE_", LUA_NATIVE_MISC_GET_ITEM_TYPE_);
		MISC.set_function("IS_BASE_A_PERSISTENT_CHARACTER_", LUA_NATIVE_MISC_IS_BASE_A_PERSISTENT_CHARACTER_);
		MISC.set_function("IS_BASE_A_COVER_POINT_", LUA_NATIVE_MISC_IS_BASE_A_COVER_POINT_);
		MISC.set_function("0x553D67295DDD2309_", LUA_NATIVE_MISC_0x553D67295DDD2309_);
		MISC.set_function("GET_VOLUME_FROM_INDEXED_ITEM_", LUA_NATIVE_MISC_GET_VOLUME_FROM_INDEXED_ITEM_);
		MISC.set_function("GET_ENTITY_FROM_ITEM_", LUA_NATIVE_MISC_GET_ENTITY_FROM_ITEM_);
		MISC.set_function("GET_PED_FROM_INDEXED_ITEM_", LUA_NATIVE_MISC_GET_PED_FROM_INDEXED_ITEM_);
		MISC.set_function("GET_VEHICLE_FROM_INDEXED_ITEM_", LUA_NATIVE_MISC_GET_VEHICLE_FROM_INDEXED_ITEM_);
		MISC.set_function("GET_OBJECT_FROM_INDEXED_ITEM_", LUA_NATIVE_MISC_GET_OBJECT_FROM_INDEXED_ITEM_);
		MISC.set_function("0x33982467B1E349EF_", LUA_NATIVE_MISC_0x33982467B1E349EF_);
		MISC.set_function("0x8314FC2013ECE2DA_", LUA_NATIVE_MISC_0x8314FC2013ECE2DA_);
		MISC.set_function("0x4D5C9CC7E7E23E09_", LUA_NATIVE_MISC_0x4D5C9CC7E7E23E09_);
		MISC.set_function("REGISTER_INTERACTION_LOCKON_PROMPT", LUA_NATIVE_MISC_REGISTER_INTERACTION_LOCKON_PROMPT);
		MISC.set_function("UNREGISTER_INTERACTION_LOCKON_PROMPT", LUA_NATIVE_MISC_UNREGISTER_INTERACTION_LOCKON_PROMPT);
		MISC.set_function("0xFC6ECB9170145ECE_", LUA_NATIVE_MISC_0xFC6ECB9170145ECE_);
		MISC.set_function("0x35165C658077CD0B_", LUA_NATIVE_MISC_0x35165C658077CD0B_);
		MISC.set_function("0x4B101DBCC9482F2D_", LUA_NATIVE_MISC_0x4B101DBCC9482F2D_);
		MISC.set_function("IS_MISSION_CREATOR_ACTIVE_", LUA_NATIVE_MISC_IS_MISSION_CREATOR_ACTIVE_);
		MISC.set_function("0xA3A8926951471C82_", LUA_NATIVE_MISC_0xA3A8926951471C82_);
		MISC.set_function("CREATE_AI_MEMORY_", LUA_NATIVE_MISC_CREATE_AI_MEMORY_);
		MISC.set_function("GET_AI_PED_DOES_HAVE_EVENT_MEMORY_", LUA_NATIVE_MISC_GET_AI_PED_DOES_HAVE_EVENT_MEMORY_);
		MISC.set_function("0xEB946B9E579729AD_", LUA_NATIVE_MISC_0xEB946B9E579729AD_);
		MISC.set_function("SET_AI_MEMORY_REACTIONS_ENABLED_", LUA_NATIVE_MISC_SET_AI_MEMORY_REACTIONS_ENABLED_);
		MISC.set_function("0x8DB104CCEBCD58C5_", LUA_NATIVE_MISC_0x8DB104CCEBCD58C5_);
		MISC.set_function("0x68319452C5064ABA_", LUA_NATIVE_MISC_0x68319452C5064ABA_);
		MISC.set_function("0xDE2C3B74D2B3705C_", LUA_NATIVE_MISC_0xDE2C3B74D2B3705C_);
		MISC.set_function("0x49F3241C28EBBFBC_", LUA_NATIVE_MISC_0x49F3241C28EBBFBC_);
		MISC.set_function("0x183672FE838A661B_", LUA_NATIVE_MISC_0x183672FE838A661B_);
		MISC.set_function("0x38C0C9CAE1544500_", LUA_NATIVE_MISC_0x38C0C9CAE1544500_);
		MISC.set_function("0x154340E87D8CC178_", LUA_NATIVE_MISC_0x154340E87D8CC178_);
		MISC.set_function("0x94FCADCF9F0C368E_", LUA_NATIVE_MISC_0x94FCADCF9F0C368E_);
		MISC.set_function("0x0D0AE5081F88CFE1_", LUA_NATIVE_MISC_0x0D0AE5081F88CFE1_);
		MISC.set_function("0xAF3A84C7DE6A1DC5_", LUA_NATIVE_MISC_0xAF3A84C7DE6A1DC5_);
		MISC.set_function("LOOT_TABLES_GET_INFO_", LUA_NATIVE_MISC_LOOT_TABLES_GET_INFO_);
		MISC.set_function("0xB1F6665AA54DCD5C_", LUA_NATIVE_MISC_0xB1F6665AA54DCD5C_);
		MISC.set_function("0x8BB99B85444544D9_", LUA_NATIVE_MISC_0x8BB99B85444544D9_);
		MISC.set_function("0x6F02B5E50511721E_", LUA_NATIVE_MISC_0x6F02B5E50511721E_);
		MISC.set_function("0xCC1BAF72D571DB8D_", LUA_NATIVE_MISC_0xCC1BAF72D571DB8D_);
		MISC.set_function("IS_PED_DECOMPOSED_", LUA_NATIVE_MISC_IS_PED_DECOMPOSED_);
		MISC.set_function("SET_PED_DECOMPOSED", LUA_NATIVE_MISC_SET_PED_DECOMPOSED);
		MISC.set_function("0xAB26DEEE120FD3FD_", LUA_NATIVE_MISC_0xAB26DEEE120FD3FD_);
		MISC.set_function("0x082C043C7AFC3747_", LUA_NATIVE_MISC_0x082C043C7AFC3747_);
		MISC.set_function("DISABLE_LOOTING_COMPOSITE_LOOTABLE_THIS_FRAME", LUA_NATIVE_MISC_DISABLE_LOOTING_COMPOSITE_LOOTABLE_THIS_FRAME);
		MISC.set_function("0xBB282CF5D2333FB8_", LUA_NATIVE_MISC_0xBB282CF5D2333FB8_);
		MISC.set_function("0xAD44856A1CD29635_", LUA_NATIVE_MISC_0xAD44856A1CD29635_);
		MISC.set_function("0x38C2BF94D15F464D_", LUA_NATIVE_MISC_0x38C2BF94D15F464D_);
		MISC.set_function("0x3A87FDA8F1B6CDFB_", LUA_NATIVE_MISC_0x3A87FDA8F1B6CDFB_);
		MISC.set_function("0x4647842FE8F31C1E_", LUA_NATIVE_MISC_0x4647842FE8F31C1E_);
		MISC.set_function("GET_LOOTING_EVENT_HAS_FIRED_", LUA_NATIVE_MISC_GET_LOOTING_EVENT_HAS_FIRED_);
		MISC.set_function("SET_LOOT_PELT_SATCHEL_ITEM_", LUA_NATIVE_MISC_SET_LOOT_PELT_SATCHEL_ITEM_);
		MISC.set_function("0x96282005C5C6801F_", LUA_NATIVE_MISC_0x96282005C5C6801F_);
		MISC.set_function("0xF63FA29D4A9ACA86_", LUA_NATIVE_MISC_0xF63FA29D4A9ACA86_);
		MISC.set_function("0x8C0F6A3D7236DEEB_", LUA_NATIVE_MISC_0x8C0F6A3D7236DEEB_);
		MISC.set_function("0x7FA58CED69405F9A_", LUA_NATIVE_MISC_0x7FA58CED69405F9A_);
		MISC.set_function("0xA08111B053D84B4D_", LUA_NATIVE_MISC_0xA08111B053D84B4D_);
		MISC.set_function("IS_GLOBAL_BLOCK_VALID_", LUA_NATIVE_MISC_IS_GLOBAL_BLOCK_VALID_);
		MISC.set_function("SET_GLOBAL_BLOCK_IS_LOADED_", LUA_NATIVE_MISC_SET_GLOBAL_BLOCK_IS_LOADED_);
		MISC.set_function("GAME_FRAMEWORK_MANAGER_INIT", LUA_NATIVE_MISC_GAME_FRAMEWORK_MANAGER_INIT);
		MISC.set_function("GAME_FRAMEWORK_MANAGER_SHUTDOWN_", LUA_NATIVE_MISC_GAME_FRAMEWORK_MANAGER_SHUTDOWN_);
		MISC.set_function("GAME_FRAMEWORK_MANAGER_GET_MODE_", LUA_NATIVE_MISC_GAME_FRAMEWORK_MANAGER_GET_MODE_);
		MISC.set_function("IS_PLAYER_OWNING_STANDALONE_SP_", LUA_NATIVE_MISC_IS_PLAYER_OWNING_STANDALONE_SP_);
		MISC.set_function("0x0358B8A41916C613_", LUA_NATIVE_MISC_0x0358B8A41916C613_);
		MISC.set_function("SET_GAME_LOGIC_PAUSED_", LUA_NATIVE_MISC_SET_GAME_LOGIC_PAUSED_);
		MISC.set_function("STOP_CURRENT_LOADING_PROGRESS_TIMER", LUA_NATIVE_MISC_STOP_CURRENT_LOADING_PROGRESS_TIMER);
		MISC.set_function("0xDBDA48EC456ED908_", LUA_NATIVE_MISC_0xDBDA48EC456ED908_);
	}
}
