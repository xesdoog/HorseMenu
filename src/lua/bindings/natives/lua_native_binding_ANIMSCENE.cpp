#include "lua_native_binding.hpp"
#include "game/rdr/Natives.hpp"

namespace Lua::native
{
	static AnimScene LUA_NATIVE_ANIMSCENE_CREATE_ANIM_SCENE_(sol::stack_object animDict, int flags, sol::stack_object playbackListName, bool p3, bool p4)
	{
		auto retval = ANIMSCENE::_CREATE_ANIM_SCENE(animDict.is<const char*>() ? animDict.as<const char*>() : nullptr, flags, playbackListName.is<const char*>() ? playbackListName.as<const char*>() : nullptr, p3, p4);
		return retval;
	}

	static void LUA_NATIVE_ANIMSCENE_DELETE_ANIM_SCENE_(AnimScene animScene)
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(animScene);
	}

	static void LUA_NATIVE_ANIMSCENE_TRIGGER_ANIM_SCENE_SKIP(AnimScene animScene)
	{
		ANIMSCENE::TRIGGER_ANIM_SCENE_SKIP(animScene);
	}

	static bool LUA_NATIVE_ANIMSCENE_0x4B85B3CF91972222_(AnimScene animScene)
	{
		auto retval = (bool)ANIMSCENE::_0x4B85B3CF91972222(animScene);
		return retval;
	}

	static void LUA_NATIVE_ANIMSCENE_CLEAR_ANIM_SCENE_WAS_SKIPPED_(AnimScene animScene)
	{
		ANIMSCENE::_CLEAR_ANIM_SCENE_WAS_SKIPPED(animScene);
	}

	static bool LUA_NATIVE_ANIMSCENE_DOES_ANIM_SCENE_EXIST(AnimScene animScene)
	{
		auto retval = (bool)ANIMSCENE::DOES_ANIM_SCENE_EXIST(animScene);
		return retval;
	}

	static bool LUA_NATIVE_ANIMSCENE_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE_(AnimScene animScene, sol::stack_object entityId)
	{
		auto retval = (bool)ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(animScene, entityId.is<const char*>() ? entityId.as<const char*>() : nullptr);
		return retval;
	}

	static bool LUA_NATIVE_ANIMSCENE_DOES_ANIM_SCENE_OWNERSHIP_OF_ENTITY_EXIST_(AnimScene animScene, sol::stack_object entityName)
	{
		auto retval = (bool)ANIMSCENE::_DOES_ANIM_SCENE_OWNERSHIP_OF_ENTITY_EXIST(animScene, entityName.is<const char*>() ? entityName.as<const char*>() : nullptr);
		return retval;
	}

	static void LUA_NATIVE_ANIMSCENE_LOAD_ANIM_SCENE(AnimScene animScene)
	{
		ANIMSCENE::LOAD_ANIM_SCENE(animScene);
	}

	static bool LUA_NATIVE_ANIMSCENE_IS_ANIM_SCENE_LOADED(AnimScene animScene, bool p1, bool p2)
	{
		auto retval = (bool)ANIMSCENE::IS_ANIM_SCENE_LOADED(animScene, p1, p2);
		return retval;
	}

	static bool LUA_NATIVE_ANIMSCENE_IS_ANIM_SCENE_LOADING_(AnimScene animScene, bool p1)
	{
		auto retval = (bool)ANIMSCENE::_IS_ANIM_SCENE_LOADING(animScene, p1);
		return retval;
	}

	static bool LUA_NATIVE_ANIMSCENE_IS_ANIM_SCENE_METADATA_ASSET_IN_RANGE_LOADING_(AnimScene animScene, bool p1)
	{
		auto retval = (bool)ANIMSCENE::_IS_ANIM_SCENE_METADATA_ASSET_IN_RANGE_LOADING(animScene, p1);
		return retval;
	}

	static bool LUA_NATIVE_ANIMSCENE_IS_ANIM_SCENE_METADATA_LOADED(AnimScene animScene, bool p1)
	{
		auto retval = (bool)ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(animScene, p1);
		return retval;
	}

	static int LUA_NATIVE_ANIMSCENE_GET_ANIM_SCENE_PLAYBACK_LIST_PHASE_AUDIO_LOAD_STRESS_(AnimScene animScene, sol::stack_object phaseName)
	{
		auto retval = ANIMSCENE::_GET_ANIM_SCENE_PLAYBACK_LIST_PHASE_AUDIO_LOAD_STRESS(animScene, phaseName.is<const char*>() ? phaseName.as<const char*>() : nullptr);
		return retval;
	}

	static void LUA_NATIVE_ANIMSCENE_START_ANIM_SCENE(AnimScene animScene)
	{
		ANIMSCENE::START_ANIM_SCENE(animScene);
	}

	static void LUA_NATIVE_ANIMSCENE_RESET_ANIM_SCENE(AnimScene animScene, sol::stack_object playbackListName)
	{
		ANIMSCENE::RESET_ANIM_SCENE(animScene, playbackListName.is<const char*>() ? playbackListName.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_ANIMSCENE_ABORT_ANIM_SCENE(AnimScene animScene, bool p1)
	{
		ANIMSCENE::ABORT_ANIM_SCENE(animScene, p1);
	}

	static void LUA_NATIVE_ANIMSCENE_RESUME_ANIM_SCENE_FROM_LAST_CHECKPOINT(AnimScene animScene)
	{
		ANIMSCENE::RESUME_ANIM_SCENE_FROM_LAST_CHECKPOINT(animScene);
	}

	static bool LUA_NATIVE_ANIMSCENE_IS_ANIM_SCENE_RUNNING(AnimScene animScene, bool p1)
	{
		auto retval = (bool)ANIMSCENE::IS_ANIM_SCENE_RUNNING(animScene, p1);
		return retval;
	}

	static bool LUA_NATIVE_ANIMSCENE_IS_ANIM_SCENE_FINISHED(AnimScene animScene, bool p1)
	{
		auto retval = (bool)ANIMSCENE::IS_ANIM_SCENE_FINISHED(animScene, p1);
		return retval;
	}

	static bool LUA_NATIVE_ANIMSCENE_IS_ANIM_SCENE_EXITING_THIS_FRAME(AnimScene animScene)
	{
		auto retval = (bool)ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(animScene);
		return retval;
	}

	static bool LUA_NATIVE_ANIMSCENE_HAS_ANIM_SCENE_EXITED(AnimScene animScene, bool p1)
	{
		auto retval = (bool)ANIMSCENE::HAS_ANIM_SCENE_EXITED(animScene, p1);
		return retval;
	}

	static bool LUA_NATIVE_ANIMSCENE_0x73616E64696C132E_(AnimScene animScene, bool p1)
	{
		auto retval = (bool)ANIMSCENE::_0x73616E64696C132E(animScene, p1);
		return retval;
	}

	static bool LUA_NATIVE_ANIMSCENE_IS_ANIM_SCENE_IN_SECTION(AnimScene animScene, sol::stack_object sectionName, bool p2)
	{
		auto retval = (bool)ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(animScene, sectionName.is<const char*>() ? sectionName.as<const char*>() : nullptr, p2);
		return retval;
	}

	static bool LUA_NATIVE_ANIMSCENE_IS_ANIM_SCENE_SKIPPABLE_(AnimScene animScene)
	{
		auto retval = (bool)ANIMSCENE::_IS_ANIM_SCENE_SKIPPABLE(animScene);
		return retval;
	}

	static bool LUA_NATIVE_ANIMSCENE_IS_ANIM_SCENE_ABORTED_(AnimScene animScene)
	{
		auto retval = (bool)ANIMSCENE::_IS_ANIM_SCENE_ABORTED(animScene);
		return retval;
	}

	static bool LUA_NATIVE_ANIMSCENE_0xD70C7A30412F8FA0_(AnimScene animScene)
	{
		auto retval = (bool)ANIMSCENE::_0xD70C7A30412F8FA0(animScene);
		return retval;
	}

	static bool LUA_NATIVE_ANIMSCENE_0x9AAE3C1148A09BCA_(AnimScene animScene)
	{
		auto retval = (bool)ANIMSCENE::_0x9AAE3C1148A09BCA(animScene);
		return retval;
	}

	static bool LUA_NATIVE_ANIMSCENE_0xA96619FE85159ED2_(AnimScene animScene)
	{
		auto retval = (bool)ANIMSCENE::_0xA96619FE85159ED2(animScene);
		return retval;
	}

	static void LUA_NATIVE_ANIMSCENE_FADE_ANIM_SCENE_AUDIO_IN(AnimScene animScene, float p1)
	{
		ANIMSCENE::FADE_ANIM_SCENE_AUDIO_IN(animScene, p1);
	}

	static void LUA_NATIVE_ANIMSCENE_FADE_ANIM_SCENE_AUDIO_OUT(AnimScene animScene, float p1)
	{
		ANIMSCENE::FADE_ANIM_SCENE_AUDIO_OUT(animScene, p1);
	}

	static void LUA_NATIVE_ANIMSCENE_BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(bool p0, bool p1)
	{
		ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(p0, p1);
	}

	static void LUA_NATIVE_ANIMSCENE_SET_ANIM_SCENE_ORIGIN(AnimScene animScene, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, int order)
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(animScene, posX, posY, posZ, rotX, rotY, rotZ, order);
	}

	static std::tuple<Vector3, Vector3> LUA_NATIVE_ANIMSCENE_GET_ANIM_SCENE_ORIGIN(AnimScene animScene, Vector3 position, Vector3 rotation, int order)
	{
		std::tuple<Vector3, Vector3> return_values;
		ANIMSCENE::GET_ANIM_SCENE_ORIGIN(animScene, &position, &rotation, order);
		std::get<0>(return_values) = position;
		std::get<1>(return_values) = rotation;

		return return_values;
	}

	static void LUA_NATIVE_ANIMSCENE_SET_ANIM_SCENE_PAUSED(AnimScene animScene, bool toggle)
	{
		ANIMSCENE::SET_ANIM_SCENE_PAUSED(animScene, toggle);
	}

	static bool LUA_NATIVE_ANIMSCENE_IS_ANIM_SCENE_PAUSED_(AnimScene animScene)
	{
		auto retval = (bool)ANIMSCENE::_IS_ANIM_SCENE_PAUSED(animScene);
		return retval;
	}

	static void LUA_NATIVE_ANIMSCENE_SET_ANIM_SCENE_RATE(AnimScene animScene, float rate)
	{
		ANIMSCENE::SET_ANIM_SCENE_RATE(animScene, rate);
	}

	static float LUA_NATIVE_ANIMSCENE_GET_ANIM_SCENE_RATE_(AnimScene animScene)
	{
		auto retval = ANIMSCENE::_GET_ANIM_SCENE_RATE(animScene);
		return retval;
	}

	static float LUA_NATIVE_ANIMSCENE_GET_ANIM_SCENE_PHASE(AnimScene animScene)
	{
		auto retval = ANIMSCENE::GET_ANIM_SCENE_PHASE(animScene);
		return retval;
	}

	static float LUA_NATIVE_ANIMSCENE_GET_ANIM_SCENE_TIME_(AnimScene animScene)
	{
		auto retval = ANIMSCENE::_GET_ANIM_SCENE_TIME(animScene);
		return retval;
	}

	static float LUA_NATIVE_ANIMSCENE_GET_ANIM_SCENE_DURATION_(AnimScene animScene)
	{
		auto retval = ANIMSCENE::_GET_ANIM_SCENE_DURATION(animScene);
		return retval;
	}

	static void LUA_NATIVE_ANIMSCENE_SET_ANIM_SCENE_ENTITY(AnimScene animScene, sol::stack_object entityName, Entity entity, int flags)
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(animScene, entityName.is<const char*>() ? entityName.as<const char*>() : nullptr, entity, flags);
	}

	static void LUA_NATIVE_ANIMSCENE_REMOVE_ANIM_SCENE_ENTITY(AnimScene animScene, sol::stack_object entityName, Entity entity)
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(animScene, entityName.is<const char*>() ? entityName.as<const char*>() : nullptr, entity);
	}

	static bool LUA_NATIVE_ANIMSCENE_IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(AnimScene animScene, sol::stack_object entityName)
	{
		auto retval = (bool)ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(animScene, entityName.is<const char*>() ? entityName.as<const char*>() : nullptr);
		return retval;
	}

	static bool LUA_NATIVE_ANIMSCENE_COULD_ANIM_SCENE_ENTITY_REACH_EXIT_NEXT_FRAME(AnimScene animScene, sol::stack_object entityName, Any p2, Any p3)
	{
		auto retval = (bool)ANIMSCENE::COULD_ANIM_SCENE_ENTITY_REACH_EXIT_NEXT_FRAME(animScene, entityName.is<const char*>() ? entityName.as<const char*>() : nullptr, p2, p3);
		return retval;
	}

	static bool LUA_NATIVE_ANIMSCENE_HAS_ENTITY_EXITED_ANIM_SCENE(AnimScene animScene, sol::stack_object entityName)
	{
		auto retval = (bool)ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(animScene, entityName.is<const char*>() ? entityName.as<const char*>() : nullptr);
		return retval;
	}

	static bool LUA_NATIVE_ANIMSCENE_HAS_ENTITY_ENTERED_ANIM_SCENE_(AnimScene animScene, sol::stack_object entityName)
	{
		auto retval = (bool)ANIMSCENE::_HAS_ENTITY_ENTERED_ANIM_SCENE(animScene, entityName.is<const char*>() ? entityName.as<const char*>() : nullptr);
		return retval;
	}

	static Ped LUA_NATIVE_ANIMSCENE_GET_ANIM_SCENE_PED_(AnimScene animScene, sol::stack_object name, bool isNetwork)
	{
		auto retval = ANIMSCENE::_GET_ANIM_SCENE_PED(animScene, name.is<const char*>() ? name.as<const char*>() : nullptr, isNetwork);
		return retval;
	}

	static Object LUA_NATIVE_ANIMSCENE_GET_ANIM_SCENE_OBJECT_(AnimScene animScene, sol::stack_object name, bool isNetwork)
	{
		auto retval = ANIMSCENE::_GET_ANIM_SCENE_OBJECT(animScene, name.is<const char*>() ? name.as<const char*>() : nullptr, isNetwork);
		return retval;
	}

	static Vehicle LUA_NATIVE_ANIMSCENE_GET_ANIM_SCENE_VEHICLE_(AnimScene animScene, sol::stack_object name, bool isNetwork)
	{
		auto retval = ANIMSCENE::_GET_ANIM_SCENE_VEHICLE(animScene, name.is<const char*>() ? name.as<const char*>() : nullptr, isNetwork);
		return retval;
	}

	static void LUA_NATIVE_ANIMSCENE_SET_ANIM_SCENE_BOOL(AnimScene animScene, sol::stack_object name, bool value, bool p3)
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(animScene, name.is<const char*>() ? name.as<const char*>() : nullptr, value, p3);
	}

	static bool LUA_NATIVE_ANIMSCENE_GET_ANIM_SCENE_BOOL(AnimScene animScene, sol::stack_object name)
	{
		auto retval = (bool)ANIMSCENE::GET_ANIM_SCENE_BOOL(animScene, name.is<const char*>() ? name.as<const char*>() : nullptr);
		return retval;
	}

	static void LUA_NATIVE_ANIMSCENE_SET_ANIM_SCENE_FLOAT(AnimScene animScene, sol::stack_object name, float value, bool p3, bool p4)
	{
		ANIMSCENE::SET_ANIM_SCENE_FLOAT(animScene, name.is<const char*>() ? name.as<const char*>() : nullptr, value, p3, p4);
	}

	static float LUA_NATIVE_ANIMSCENE_GET_ANIM_SCENE_FLOAT(AnimScene animScene, sol::stack_object name)
	{
		auto retval = ANIMSCENE::GET_ANIM_SCENE_FLOAT(animScene, name.is<const char*>() ? name.as<const char*>() : nullptr);
		return retval;
	}

	static void LUA_NATIVE_ANIMSCENE_SET_ANIM_SCENE_INT(AnimScene animScene, sol::stack_object name, int value, bool p3)
	{
		ANIMSCENE::SET_ANIM_SCENE_INT(animScene, name.is<const char*>() ? name.as<const char*>() : nullptr, value, p3);
	}

	static int LUA_NATIVE_ANIMSCENE_GET_ANIM_SCENE_INT(AnimScene animScene, sol::stack_object name)
	{
		auto retval = ANIMSCENE::GET_ANIM_SCENE_INT(animScene, name.is<const char*>() ? name.as<const char*>() : nullptr);
		return retval;
	}

	static std::tuple<bool, Vector3> LUA_NATIVE_ANIMSCENE_GET_ANIM_SCENE_ENTITY_LOCATION_DATA(AnimScene animScene, sol::stack_object entityName, Vector3 matrix, bool p3, sol::stack_object playbackListName, int p5)
	{
		std::tuple<bool, Vector3> return_values;
		std::get<0>(return_values) = (bool)ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(animScene, entityName.is<const char*>() ? entityName.as<const char*>() : nullptr, &matrix, p3, playbackListName.is<const char*>() ? playbackListName.as<const char*>() : nullptr, p5);
		std::get<1>(return_values) = matrix;

		return return_values;
	}

	static bool LUA_NATIVE_ANIMSCENE_IS_ENTITY_PLAYING_ANIM_SCENE(Entity entity, AnimScene animScene)
	{
		auto retval = (bool)ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(entity, animScene);
		return retval;
	}

	static void LUA_NATIVE_ANIMSCENE_ATTACH_ANIM_SCENE_TO_ENTITY(AnimScene animScene, Entity entity, int p2)
	{
		ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(animScene, entity, p2);
	}

	static void LUA_NATIVE_ANIMSCENE_ATTACH_ANIM_SCENE_TO_ENTITY_PRESERVING_LOCATION(AnimScene animScene, Entity entity, int p2)
	{
		ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY_PRESERVING_LOCATION(animScene, entity, p2);
	}

	static void LUA_NATIVE_ANIMSCENE_DETACH_ANIM_SCENE(AnimScene animScene)
	{
		ANIMSCENE::DETACH_ANIM_SCENE(animScene);
	}

	static void LUA_NATIVE_ANIMSCENE_DETACH_ANIM_SCENE_PRESERVING_LOCATION(AnimScene animScene)
	{
		ANIMSCENE::DETACH_ANIM_SCENE_PRESERVING_LOCATION(animScene);
	}

	static void LUA_NATIVE_ANIMSCENE_TAKE_OWNERSHIP_OF_ANIM_SCENE(AnimScene animScene)
	{
		ANIMSCENE::TAKE_OWNERSHIP_OF_ANIM_SCENE(animScene);
	}

	static bool LUA_NATIVE_ANIMSCENE_CHECK_OWNERSHIP_OF_ANIM_SCENE(AnimScene animScene)
	{
		auto retval = (bool)ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(animScene);
		return retval;
	}

	static void LUA_NATIVE_ANIMSCENE_SET_ANIM_SCENE_PLAYBACK_LIST(AnimScene animScene, sol::stack_object playbackListName)
	{
		ANIMSCENE::SET_ANIM_SCENE_PLAYBACK_LIST(animScene, playbackListName.is<const char*>() ? playbackListName.as<const char*>() : nullptr);
	}

	static bool LUA_NATIVE_ANIMSCENE_0x1C5D33A4293E6DDE_(AnimScene animScene, sol::stack_object phaseName)
	{
		auto retval = (bool)ANIMSCENE::_0x1C5D33A4293E6DDE(animScene, phaseName.is<const char*>() ? phaseName.as<const char*>() : nullptr);
		return retval;
	}

	static bool LUA_NATIVE_ANIMSCENE_DOES_ANIM_SCENE_PLAY_LIST_EXIST_(AnimScene animScene, sol::stack_object playbackListName)
	{
		auto retval = (bool)ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(animScene, playbackListName.is<const char*>() ? playbackListName.as<const char*>() : nullptr);
		return retval;
	}

	static void LUA_NATIVE_ANIMSCENE_SET_ANIM_SCENE_PLAY_LIST(AnimScene animScene, sol::stack_object playlistName, bool p2)
	{
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(animScene, playlistName.is<const char*>() ? playlistName.as<const char*>() : nullptr, p2);
	}

	static bool LUA_NATIVE_ANIMSCENE_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE_(AnimScene animScene, sol::stack_object phaseName)
	{
		auto retval = (bool)ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(animScene, phaseName.is<const char*>() ? phaseName.as<const char*>() : nullptr);
		return retval;
	}

	static bool LUA_NATIVE_ANIMSCENE_REQUEST_ANIM_SCENE_PLAY_LIST(AnimScene animScene, sol::stack_object playlistName)
	{
		auto retval = (bool)ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(animScene, playlistName.is<const char*>() ? playlistName.as<const char*>() : nullptr);
		return retval;
	}

	static bool LUA_NATIVE_ANIMSCENE_RELEASE_ANIM_SCENE_PLAY_LIST_(AnimScene animScene, sol::stack_object playlistName)
	{
		auto retval = (bool)ANIMSCENE::_RELEASE_ANIM_SCENE_PLAY_LIST(animScene, playlistName.is<const char*>() ? playlistName.as<const char*>() : nullptr);
		return retval;
	}

	static Hash LUA_NATIVE_ANIMSCENE_GET_ANIM_SCENE_DICT_(AnimScene animScene)
	{
		auto retval = ANIMSCENE::_GET_ANIM_SCENE_DICT(animScene);
		return retval;
	}

	static bool LUA_NATIVE_ANIMSCENE_0x1407F5115FB9583E_(AnimScene animScene, sol::stack_object p1)
	{
		auto retval = (bool)ANIMSCENE::_0x1407F5115FB9583E(animScene, p1.is<const char*>() ? p1.as<const char*>() : nullptr);
		return retval;
	}

	static bool LUA_NATIVE_ANIMSCENE_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED_(AnimScene animScene, sol::stack_object phaseName)
	{
		auto retval = (bool)ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(animScene, phaseName.is<const char*>() ? phaseName.as<const char*>() : nullptr);
		return retval;
	}

	static bool LUA_NATIVE_ANIMSCENE_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING_(AnimScene animScene, sol::stack_object phaseName)
	{
		auto retval = (bool)ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(animScene, phaseName.is<const char*>() ? phaseName.as<const char*>() : nullptr);
		return retval;
	}

	static void LUA_NATIVE_ANIMSCENE_0x1AD896BF43619551_()
	{
		ANIMSCENE::_0x1AD896BF43619551();
	}

	static int LUA_NATIVE_ANIMSCENE_GET_ANIM_SCENE_CURRENT_ACTIVE_CAMERA_COUNT(AnimScene animScene)
	{
		auto retval = ANIMSCENE::GET_ANIM_SCENE_CURRENT_ACTIVE_CAMERA_COUNT(animScene);
		return retval;
	}

	static bool LUA_NATIVE_ANIMSCENE_0x5D7BFDA2290B4E39_(sol::stack_object p0)
	{
		auto retval = (bool)ANIMSCENE::_0x5D7BFDA2290B4E39(p0.is<const char*>() ? p0.as<const char*>() : nullptr);
		return retval;
	}

	static bool LUA_NATIVE_ANIMSCENE_IS_MGM_SYSTEM_LOADED_(sol::stack_object mgmFilename)
	{
		auto retval = (bool)ANIMSCENE::_IS_MGM_SYSTEM_LOADED(mgmFilename.is<const char*>() ? mgmFilename.as<const char*>() : nullptr);
		return retval;
	}

	static bool LUA_NATIVE_ANIMSCENE_LOAD_MGM_ASSETS_(sol::stack_object mgmFilename)
	{
		auto retval = (bool)ANIMSCENE::_LOAD_MGM_ASSETS(mgmFilename.is<const char*>() ? mgmFilename.as<const char*>() : nullptr);
		return retval;
	}

	static int LUA_NATIVE_ANIMSCENE_CREATE_MGM_SYSTEM_(sol::stack_object mgmFilename)
	{
		auto retval = ANIMSCENE::_CREATE_MGM_SYSTEM(mgmFilename.is<const char*>() ? mgmFilename.as<const char*>() : nullptr);
		return retval;
	}

	static void LUA_NATIVE_ANIMSCENE_DELETE_MGM_SYSTEM_(int mgmHandle)
	{
		ANIMSCENE::_DELETE_MGM_SYSTEM(mgmHandle);
	}

	static void LUA_NATIVE_ANIMSCENE_0xB1A196BAFE650402_(int mgmHandle, Ped ped)
	{
		ANIMSCENE::_0xB1A196BAFE650402(mgmHandle, ped);
	}

	static void LUA_NATIVE_ANIMSCENE_0xAE6DE22DE0ED4554_(int mgmHandle, Ped ped)
	{
		ANIMSCENE::_0xAE6DE22DE0ED4554(mgmHandle, ped);
	}

	static bool LUA_NATIVE_ANIMSCENE_0x61B2AAEF645DDAF0_(int mgmEventHandle, sol::stack_object p1, int seatId, int p3, bool p4)
	{
		auto retval = (bool)ANIMSCENE::_0x61B2AAEF645DDAF0(mgmEventHandle, p1.is<const char*>() ? p1.as<const char*>() : nullptr, seatId, p3, p4);
		return retval;
	}

	static void LUA_NATIVE_ANIMSCENE_SET_MGM_EVENT_(int mgmEventHandle, sol::stack_object p1, Any seatId, int p3, float p4)
	{
		ANIMSCENE::_SET_MGM_EVENT(mgmEventHandle, p1.is<const char*>() ? p1.as<const char*>() : nullptr, seatId, p3, p4);
	}

	static void LUA_NATIVE_ANIMSCENE_0x3641FCD53E59B335_(int mgmHandle, Ped ped, sol::stack_object secondaryVoiceString)
	{
		ANIMSCENE::_0x3641FCD53E59B335(mgmHandle, ped, secondaryVoiceString.is<const char*>() ? secondaryVoiceString.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_ANIMSCENE_SET_BREAKOUT_ARCHETYPE_(Ped ped, sol::stack_object archetype)
	{
		ANIMSCENE::_SET_BREAKOUT_ARCHETYPE(ped, archetype.is<const char*>() ? archetype.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_ANIMSCENE_CLEAR_BREAKOUT_ARCHETYPE_(Ped ped)
	{
		ANIMSCENE::_CLEAR_BREAKOUT_ARCHETYPE(ped);
	}

	static bool LUA_NATIVE_ANIMSCENE_0x3B393716C3FD8237_(Ped ped)
	{
		auto retval = (bool)ANIMSCENE::_0x3B393716C3FD8237(ped);
		return retval;
	}

	static void LUA_NATIVE_ANIMSCENE_0xE12D7B4B959644CD_()
	{
		ANIMSCENE::_0xE12D7B4B959644CD();
	}

	static void LUA_NATIVE_ANIMSCENE_0xC1193521E3B9FADD_(Entity entity, bool p1)
	{
		ANIMSCENE::_0xC1193521E3B9FADD(entity, p1);
	}

	static void LUA_NATIVE_ANIMSCENE_REQUEST_PHOTO_MODE_FREEZE_()
	{
		ANIMSCENE::_REQUEST_PHOTO_MODE_FREEZE();
	}

	static void LUA_NATIVE_ANIMSCENE_REQUEST_PHOTO_MODE_DEFREEZE_()
	{
		ANIMSCENE::_REQUEST_PHOTO_MODE_DEFREEZE();
	}

	static bool LUA_NATIVE_ANIMSCENE_0x2DB524750DC41ED4_()
	{
		auto retval = (bool)ANIMSCENE::_0x2DB524750DC41ED4();
		return retval;
	}

	static bool LUA_NATIVE_ANIMSCENE_0xEA41D44A8D42057B_()
	{
		auto retval = (bool)ANIMSCENE::_0xEA41D44A8D42057B();
		return retval;
	}

	static void LUA_NATIVE_ANIMSCENE_PAUSE_SCRIPT_THREADS_(bool toggle)
	{
		ANIMSCENE::_PAUSE_SCRIPT_THREADS(toggle);
	}

	static void LUA_NATIVE_ANIMSCENE_0xCDCD7B2D49AEE73A_(bool p0)
	{
		ANIMSCENE::_0xCDCD7B2D49AEE73A(p0);
	}

	static bool LUA_NATIVE_ANIMSCENE_WAS_ANIM_SCENE_SKIPPED(AnimScene animScene)
	{
		auto retval = (bool)ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(animScene);
		return retval;
	}

	void init_native_binding_ANIMSCENE(sol::state& L)
	{
		auto ANIMSCENE = L["ANIMSCENE"].get_or_create<sol::table>();
		ANIMSCENE.set_function("CREATE_ANIM_SCENE_", LUA_NATIVE_ANIMSCENE_CREATE_ANIM_SCENE_);
		ANIMSCENE.set_function("DELETE_ANIM_SCENE_", LUA_NATIVE_ANIMSCENE_DELETE_ANIM_SCENE_);
		ANIMSCENE.set_function("TRIGGER_ANIM_SCENE_SKIP", LUA_NATIVE_ANIMSCENE_TRIGGER_ANIM_SCENE_SKIP);
		ANIMSCENE.set_function("0x4B85B3CF91972222_", LUA_NATIVE_ANIMSCENE_0x4B85B3CF91972222_);
		ANIMSCENE.set_function("CLEAR_ANIM_SCENE_WAS_SKIPPED_", LUA_NATIVE_ANIMSCENE_CLEAR_ANIM_SCENE_WAS_SKIPPED_);
		ANIMSCENE.set_function("DOES_ANIM_SCENE_EXIST", LUA_NATIVE_ANIMSCENE_DOES_ANIM_SCENE_EXIST);
		ANIMSCENE.set_function("DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE_", LUA_NATIVE_ANIMSCENE_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE_);
		ANIMSCENE.set_function("DOES_ANIM_SCENE_OWNERSHIP_OF_ENTITY_EXIST_", LUA_NATIVE_ANIMSCENE_DOES_ANIM_SCENE_OWNERSHIP_OF_ENTITY_EXIST_);
		ANIMSCENE.set_function("LOAD_ANIM_SCENE", LUA_NATIVE_ANIMSCENE_LOAD_ANIM_SCENE);
		ANIMSCENE.set_function("IS_ANIM_SCENE_LOADED", LUA_NATIVE_ANIMSCENE_IS_ANIM_SCENE_LOADED);
		ANIMSCENE.set_function("IS_ANIM_SCENE_LOADING_", LUA_NATIVE_ANIMSCENE_IS_ANIM_SCENE_LOADING_);
		ANIMSCENE.set_function("IS_ANIM_SCENE_METADATA_ASSET_IN_RANGE_LOADING_", LUA_NATIVE_ANIMSCENE_IS_ANIM_SCENE_METADATA_ASSET_IN_RANGE_LOADING_);
		ANIMSCENE.set_function("IS_ANIM_SCENE_METADATA_LOADED", LUA_NATIVE_ANIMSCENE_IS_ANIM_SCENE_METADATA_LOADED);
		ANIMSCENE.set_function("GET_ANIM_SCENE_PLAYBACK_LIST_PHASE_AUDIO_LOAD_STRESS_", LUA_NATIVE_ANIMSCENE_GET_ANIM_SCENE_PLAYBACK_LIST_PHASE_AUDIO_LOAD_STRESS_);
		ANIMSCENE.set_function("START_ANIM_SCENE", LUA_NATIVE_ANIMSCENE_START_ANIM_SCENE);
		ANIMSCENE.set_function("RESET_ANIM_SCENE", LUA_NATIVE_ANIMSCENE_RESET_ANIM_SCENE);
		ANIMSCENE.set_function("ABORT_ANIM_SCENE", LUA_NATIVE_ANIMSCENE_ABORT_ANIM_SCENE);
		ANIMSCENE.set_function("RESUME_ANIM_SCENE_FROM_LAST_CHECKPOINT", LUA_NATIVE_ANIMSCENE_RESUME_ANIM_SCENE_FROM_LAST_CHECKPOINT);
		ANIMSCENE.set_function("IS_ANIM_SCENE_RUNNING", LUA_NATIVE_ANIMSCENE_IS_ANIM_SCENE_RUNNING);
		ANIMSCENE.set_function("IS_ANIM_SCENE_FINISHED", LUA_NATIVE_ANIMSCENE_IS_ANIM_SCENE_FINISHED);
		ANIMSCENE.set_function("IS_ANIM_SCENE_EXITING_THIS_FRAME", LUA_NATIVE_ANIMSCENE_IS_ANIM_SCENE_EXITING_THIS_FRAME);
		ANIMSCENE.set_function("HAS_ANIM_SCENE_EXITED", LUA_NATIVE_ANIMSCENE_HAS_ANIM_SCENE_EXITED);
		ANIMSCENE.set_function("0x73616E64696C132E_", LUA_NATIVE_ANIMSCENE_0x73616E64696C132E_);
		ANIMSCENE.set_function("IS_ANIM_SCENE_IN_SECTION", LUA_NATIVE_ANIMSCENE_IS_ANIM_SCENE_IN_SECTION);
		ANIMSCENE.set_function("IS_ANIM_SCENE_SKIPPABLE_", LUA_NATIVE_ANIMSCENE_IS_ANIM_SCENE_SKIPPABLE_);
		ANIMSCENE.set_function("IS_ANIM_SCENE_ABORTED_", LUA_NATIVE_ANIMSCENE_IS_ANIM_SCENE_ABORTED_);
		ANIMSCENE.set_function("0xD70C7A30412F8FA0_", LUA_NATIVE_ANIMSCENE_0xD70C7A30412F8FA0_);
		ANIMSCENE.set_function("0x9AAE3C1148A09BCA_", LUA_NATIVE_ANIMSCENE_0x9AAE3C1148A09BCA_);
		ANIMSCENE.set_function("0xA96619FE85159ED2_", LUA_NATIVE_ANIMSCENE_0xA96619FE85159ED2_);
		ANIMSCENE.set_function("FADE_ANIM_SCENE_AUDIO_IN", LUA_NATIVE_ANIMSCENE_FADE_ANIM_SCENE_AUDIO_IN);
		ANIMSCENE.set_function("FADE_ANIM_SCENE_AUDIO_OUT", LUA_NATIVE_ANIMSCENE_FADE_ANIM_SCENE_AUDIO_OUT);
		ANIMSCENE.set_function("BLOCK_ANIM_SCENE_FADING_NEXT_FRAME", LUA_NATIVE_ANIMSCENE_BLOCK_ANIM_SCENE_FADING_NEXT_FRAME);
		ANIMSCENE.set_function("SET_ANIM_SCENE_ORIGIN", LUA_NATIVE_ANIMSCENE_SET_ANIM_SCENE_ORIGIN);
		ANIMSCENE.set_function("GET_ANIM_SCENE_ORIGIN", LUA_NATIVE_ANIMSCENE_GET_ANIM_SCENE_ORIGIN);
		ANIMSCENE.set_function("SET_ANIM_SCENE_PAUSED", LUA_NATIVE_ANIMSCENE_SET_ANIM_SCENE_PAUSED);
		ANIMSCENE.set_function("IS_ANIM_SCENE_PAUSED_", LUA_NATIVE_ANIMSCENE_IS_ANIM_SCENE_PAUSED_);
		ANIMSCENE.set_function("SET_ANIM_SCENE_RATE", LUA_NATIVE_ANIMSCENE_SET_ANIM_SCENE_RATE);
		ANIMSCENE.set_function("GET_ANIM_SCENE_RATE_", LUA_NATIVE_ANIMSCENE_GET_ANIM_SCENE_RATE_);
		ANIMSCENE.set_function("GET_ANIM_SCENE_PHASE", LUA_NATIVE_ANIMSCENE_GET_ANIM_SCENE_PHASE);
		ANIMSCENE.set_function("GET_ANIM_SCENE_TIME_", LUA_NATIVE_ANIMSCENE_GET_ANIM_SCENE_TIME_);
		ANIMSCENE.set_function("GET_ANIM_SCENE_DURATION_", LUA_NATIVE_ANIMSCENE_GET_ANIM_SCENE_DURATION_);
		ANIMSCENE.set_function("SET_ANIM_SCENE_ENTITY", LUA_NATIVE_ANIMSCENE_SET_ANIM_SCENE_ENTITY);
		ANIMSCENE.set_function("REMOVE_ANIM_SCENE_ENTITY", LUA_NATIVE_ANIMSCENE_REMOVE_ANIM_SCENE_ENTITY);
		ANIMSCENE.set_function("IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME", LUA_NATIVE_ANIMSCENE_IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME);
		ANIMSCENE.set_function("COULD_ANIM_SCENE_ENTITY_REACH_EXIT_NEXT_FRAME", LUA_NATIVE_ANIMSCENE_COULD_ANIM_SCENE_ENTITY_REACH_EXIT_NEXT_FRAME);
		ANIMSCENE.set_function("HAS_ENTITY_EXITED_ANIM_SCENE", LUA_NATIVE_ANIMSCENE_HAS_ENTITY_EXITED_ANIM_SCENE);
		ANIMSCENE.set_function("HAS_ENTITY_ENTERED_ANIM_SCENE_", LUA_NATIVE_ANIMSCENE_HAS_ENTITY_ENTERED_ANIM_SCENE_);
		ANIMSCENE.set_function("GET_ANIM_SCENE_PED_", LUA_NATIVE_ANIMSCENE_GET_ANIM_SCENE_PED_);
		ANIMSCENE.set_function("GET_ANIM_SCENE_OBJECT_", LUA_NATIVE_ANIMSCENE_GET_ANIM_SCENE_OBJECT_);
		ANIMSCENE.set_function("GET_ANIM_SCENE_VEHICLE_", LUA_NATIVE_ANIMSCENE_GET_ANIM_SCENE_VEHICLE_);
		ANIMSCENE.set_function("SET_ANIM_SCENE_BOOL", LUA_NATIVE_ANIMSCENE_SET_ANIM_SCENE_BOOL);
		ANIMSCENE.set_function("GET_ANIM_SCENE_BOOL", LUA_NATIVE_ANIMSCENE_GET_ANIM_SCENE_BOOL);
		ANIMSCENE.set_function("SET_ANIM_SCENE_FLOAT", LUA_NATIVE_ANIMSCENE_SET_ANIM_SCENE_FLOAT);
		ANIMSCENE.set_function("GET_ANIM_SCENE_FLOAT", LUA_NATIVE_ANIMSCENE_GET_ANIM_SCENE_FLOAT);
		ANIMSCENE.set_function("SET_ANIM_SCENE_INT", LUA_NATIVE_ANIMSCENE_SET_ANIM_SCENE_INT);
		ANIMSCENE.set_function("GET_ANIM_SCENE_INT", LUA_NATIVE_ANIMSCENE_GET_ANIM_SCENE_INT);
		ANIMSCENE.set_function("GET_ANIM_SCENE_ENTITY_LOCATION_DATA", LUA_NATIVE_ANIMSCENE_GET_ANIM_SCENE_ENTITY_LOCATION_DATA);
		ANIMSCENE.set_function("IS_ENTITY_PLAYING_ANIM_SCENE", LUA_NATIVE_ANIMSCENE_IS_ENTITY_PLAYING_ANIM_SCENE);
		ANIMSCENE.set_function("ATTACH_ANIM_SCENE_TO_ENTITY", LUA_NATIVE_ANIMSCENE_ATTACH_ANIM_SCENE_TO_ENTITY);
		ANIMSCENE.set_function("ATTACH_ANIM_SCENE_TO_ENTITY_PRESERVING_LOCATION", LUA_NATIVE_ANIMSCENE_ATTACH_ANIM_SCENE_TO_ENTITY_PRESERVING_LOCATION);
		ANIMSCENE.set_function("DETACH_ANIM_SCENE", LUA_NATIVE_ANIMSCENE_DETACH_ANIM_SCENE);
		ANIMSCENE.set_function("DETACH_ANIM_SCENE_PRESERVING_LOCATION", LUA_NATIVE_ANIMSCENE_DETACH_ANIM_SCENE_PRESERVING_LOCATION);
		ANIMSCENE.set_function("TAKE_OWNERSHIP_OF_ANIM_SCENE", LUA_NATIVE_ANIMSCENE_TAKE_OWNERSHIP_OF_ANIM_SCENE);
		ANIMSCENE.set_function("CHECK_OWNERSHIP_OF_ANIM_SCENE", LUA_NATIVE_ANIMSCENE_CHECK_OWNERSHIP_OF_ANIM_SCENE);
		ANIMSCENE.set_function("SET_ANIM_SCENE_PLAYBACK_LIST", LUA_NATIVE_ANIMSCENE_SET_ANIM_SCENE_PLAYBACK_LIST);
		ANIMSCENE.set_function("0x1C5D33A4293E6DDE_", LUA_NATIVE_ANIMSCENE_0x1C5D33A4293E6DDE_);
		ANIMSCENE.set_function("DOES_ANIM_SCENE_PLAY_LIST_EXIST_", LUA_NATIVE_ANIMSCENE_DOES_ANIM_SCENE_PLAY_LIST_EXIST_);
		ANIMSCENE.set_function("SET_ANIM_SCENE_PLAY_LIST", LUA_NATIVE_ANIMSCENE_SET_ANIM_SCENE_PLAY_LIST);
		ANIMSCENE.set_function("IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE_", LUA_NATIVE_ANIMSCENE_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE_);
		ANIMSCENE.set_function("REQUEST_ANIM_SCENE_PLAY_LIST", LUA_NATIVE_ANIMSCENE_REQUEST_ANIM_SCENE_PLAY_LIST);
		ANIMSCENE.set_function("RELEASE_ANIM_SCENE_PLAY_LIST_", LUA_NATIVE_ANIMSCENE_RELEASE_ANIM_SCENE_PLAY_LIST_);
		ANIMSCENE.set_function("GET_ANIM_SCENE_DICT_", LUA_NATIVE_ANIMSCENE_GET_ANIM_SCENE_DICT_);
		ANIMSCENE.set_function("0x1407F5115FB9583E_", LUA_NATIVE_ANIMSCENE_0x1407F5115FB9583E_);
		ANIMSCENE.set_function("IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED_", LUA_NATIVE_ANIMSCENE_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED_);
		ANIMSCENE.set_function("IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING_", LUA_NATIVE_ANIMSCENE_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING_);
		ANIMSCENE.set_function("0x1AD896BF43619551_", LUA_NATIVE_ANIMSCENE_0x1AD896BF43619551_);
		ANIMSCENE.set_function("GET_ANIM_SCENE_CURRENT_ACTIVE_CAMERA_COUNT", LUA_NATIVE_ANIMSCENE_GET_ANIM_SCENE_CURRENT_ACTIVE_CAMERA_COUNT);
		ANIMSCENE.set_function("0x5D7BFDA2290B4E39_", LUA_NATIVE_ANIMSCENE_0x5D7BFDA2290B4E39_);
		ANIMSCENE.set_function("IS_MGM_SYSTEM_LOADED_", LUA_NATIVE_ANIMSCENE_IS_MGM_SYSTEM_LOADED_);
		ANIMSCENE.set_function("LOAD_MGM_ASSETS_", LUA_NATIVE_ANIMSCENE_LOAD_MGM_ASSETS_);
		ANIMSCENE.set_function("CREATE_MGM_SYSTEM_", LUA_NATIVE_ANIMSCENE_CREATE_MGM_SYSTEM_);
		ANIMSCENE.set_function("DELETE_MGM_SYSTEM_", LUA_NATIVE_ANIMSCENE_DELETE_MGM_SYSTEM_);
		ANIMSCENE.set_function("0xB1A196BAFE650402_", LUA_NATIVE_ANIMSCENE_0xB1A196BAFE650402_);
		ANIMSCENE.set_function("0xAE6DE22DE0ED4554_", LUA_NATIVE_ANIMSCENE_0xAE6DE22DE0ED4554_);
		ANIMSCENE.set_function("0x61B2AAEF645DDAF0_", LUA_NATIVE_ANIMSCENE_0x61B2AAEF645DDAF0_);
		ANIMSCENE.set_function("SET_MGM_EVENT_", LUA_NATIVE_ANIMSCENE_SET_MGM_EVENT_);
		ANIMSCENE.set_function("0x3641FCD53E59B335_", LUA_NATIVE_ANIMSCENE_0x3641FCD53E59B335_);
		ANIMSCENE.set_function("SET_BREAKOUT_ARCHETYPE_", LUA_NATIVE_ANIMSCENE_SET_BREAKOUT_ARCHETYPE_);
		ANIMSCENE.set_function("CLEAR_BREAKOUT_ARCHETYPE_", LUA_NATIVE_ANIMSCENE_CLEAR_BREAKOUT_ARCHETYPE_);
		ANIMSCENE.set_function("0x3B393716C3FD8237_", LUA_NATIVE_ANIMSCENE_0x3B393716C3FD8237_);
		ANIMSCENE.set_function("0xE12D7B4B959644CD_", LUA_NATIVE_ANIMSCENE_0xE12D7B4B959644CD_);
		ANIMSCENE.set_function("0xC1193521E3B9FADD_", LUA_NATIVE_ANIMSCENE_0xC1193521E3B9FADD_);
		ANIMSCENE.set_function("REQUEST_PHOTO_MODE_FREEZE_", LUA_NATIVE_ANIMSCENE_REQUEST_PHOTO_MODE_FREEZE_);
		ANIMSCENE.set_function("REQUEST_PHOTO_MODE_DEFREEZE_", LUA_NATIVE_ANIMSCENE_REQUEST_PHOTO_MODE_DEFREEZE_);
		ANIMSCENE.set_function("0x2DB524750DC41ED4_", LUA_NATIVE_ANIMSCENE_0x2DB524750DC41ED4_);
		ANIMSCENE.set_function("0xEA41D44A8D42057B_", LUA_NATIVE_ANIMSCENE_0xEA41D44A8D42057B_);
		ANIMSCENE.set_function("PAUSE_SCRIPT_THREADS_", LUA_NATIVE_ANIMSCENE_PAUSE_SCRIPT_THREADS_);
		ANIMSCENE.set_function("0xCDCD7B2D49AEE73A_", LUA_NATIVE_ANIMSCENE_0xCDCD7B2D49AEE73A_);
		ANIMSCENE.set_function("WAS_ANIM_SCENE_SKIPPED", LUA_NATIVE_ANIMSCENE_WAS_ANIM_SCENE_SKIPPED);
	}
}
