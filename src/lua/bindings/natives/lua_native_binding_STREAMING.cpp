#include "lua_native_binding.hpp"
#include "game/rdr/Natives.hpp"

namespace Lua::native
{
	static void LUA_NATIVE_STREAMING_REQUEST_MODEL(Hash ModelIndex, bool p1)
	{
		STREAMING::REQUEST_MODEL(ModelIndex, p1);
	}

	static bool LUA_NATIVE_STREAMING_HAS_MODEL_LOADED(Hash ModelIndex)
	{
		auto retval = (bool)STREAMING::HAS_MODEL_LOADED(ModelIndex);
		return retval;
	}

	static void LUA_NATIVE_STREAMING_SET_MODEL_AS_NO_LONGER_NEEDED(Hash ModelIndex)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ModelIndex);
	}

	static bool LUA_NATIVE_STREAMING_IS_MODEL_IN_CDIMAGE(Hash ModelIndex)
	{
		auto retval = (bool)STREAMING::IS_MODEL_IN_CDIMAGE(ModelIndex);
		return retval;
	}

	static bool LUA_NATIVE_STREAMING_IS_MODEL_VALID(Hash modelHash)
	{
		auto retval = (bool)STREAMING::IS_MODEL_VALID(modelHash);
		return retval;
	}

	static bool LUA_NATIVE_STREAMING_IS_MODEL_A_PED(Hash model)
	{
		auto retval = (bool)STREAMING::IS_MODEL_A_PED(model);
		return retval;
	}

	static bool LUA_NATIVE_STREAMING_IS_MODEL_A_VEHICLE(Hash ModelHashKey)
	{
		auto retval = (bool)STREAMING::IS_MODEL_A_VEHICLE(ModelHashKey);
		return retval;
	}

	static bool LUA_NATIVE_STREAMING_IS_MODEL_AN_OBJECT_(Hash model)
	{
		auto retval = (bool)STREAMING::_IS_MODEL_AN_OBJECT(model);
		return retval;
	}

	static bool LUA_NATIVE_STREAMING_HAS_COLLISION_LOADED_AT_COORD_(float x, float y, float z)
	{
		auto retval = (bool)STREAMING::_HAS_COLLISION_LOADED_AT_COORD(x, y, z);
		return retval;
	}

	static void LUA_NATIVE_STREAMING_0x80B3E0597366ADF1_()
	{
		STREAMING::_0x80B3E0597366ADF1();
	}

	static void LUA_NATIVE_STREAMING_REQUEST_COLLISION_AT_COORD(float VecCoorsX, float VecCoorsY, float VecCoorsZ)
	{
		STREAMING::REQUEST_COLLISION_AT_COORD(VecCoorsX, VecCoorsY, VecCoorsZ);
	}

	static void LUA_NATIVE_STREAMING_REQUEST_METADATA_AT_COORD_(float x, float y, float z)
	{
		STREAMING::_REQUEST_METADATA_AT_COORD(x, y, z);
	}

	static void LUA_NATIVE_STREAMING_REQUEST_COLLISION_FOR_MODEL(Hash ModelIndex)
	{
		STREAMING::REQUEST_COLLISION_FOR_MODEL(ModelIndex);
	}

	static bool LUA_NATIVE_STREAMING_HAS_COLLISION_FOR_MODEL_LOADED(Hash ModelIndex)
	{
		auto retval = (bool)STREAMING::HAS_COLLISION_FOR_MODEL_LOADED(ModelIndex);
		return retval;
	}

	static void LUA_NATIVE_STREAMING_REQUEST_ADDITIONAL_COLLISION_AT_COORD(float VecX, float VecY, float VecZ)
	{
		STREAMING::REQUEST_ADDITIONAL_COLLISION_AT_COORD(VecX, VecY, VecZ);
	}

	static bool LUA_NATIVE_STREAMING_DOES_ANIM_DICT_EXIST(sol::stack_object animSetName)
	{
		auto retval = (bool)STREAMING::DOES_ANIM_DICT_EXIST(animSetName.is<const char*>() ? animSetName.as<const char*>() : nullptr);
		return retval;
	}

	static void LUA_NATIVE_STREAMING_REQUEST_ANIM_DICT(sol::stack_object animDictionaryName)
	{
		STREAMING::REQUEST_ANIM_DICT(animDictionaryName.is<const char*>() ? animDictionaryName.as<const char*>() : nullptr);
	}

	static bool LUA_NATIVE_STREAMING_HAS_ANIM_DICT_LOADED(sol::stack_object animDictionaryName)
	{
		auto retval = (bool)STREAMING::HAS_ANIM_DICT_LOADED(animDictionaryName.is<const char*>() ? animDictionaryName.as<const char*>() : nullptr);
		return retval;
	}

	static void LUA_NATIVE_STREAMING_REMOVE_ANIM_DICT(sol::stack_object animDictionaryName)
	{
		STREAMING::REMOVE_ANIM_DICT(animDictionaryName.is<const char*>() ? animDictionaryName.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_STREAMING_REQUEST_MOVE_NETWORK_DEF(sol::stack_object name)
	{
		STREAMING::REQUEST_MOVE_NETWORK_DEF(name.is<const char*>() ? name.as<const char*>() : nullptr);
	}

	static bool LUA_NATIVE_STREAMING_HAS_MOVE_NETWORK_DEF_LOADED(sol::stack_object name)
	{
		auto retval = (bool)STREAMING::HAS_MOVE_NETWORK_DEF_LOADED(name.is<const char*>() ? name.as<const char*>() : nullptr);
		return retval;
	}

	static void LUA_NATIVE_STREAMING_REMOVE_MOVE_NETWORK_DEF(sol::stack_object name)
	{
		STREAMING::REMOVE_MOVE_NETWORK_DEF(name.is<const char*>() ? name.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_STREAMING_REQUEST_CLIP_SET(sol::stack_object animSetName)
	{
		STREAMING::REQUEST_CLIP_SET(animSetName.is<const char*>() ? animSetName.as<const char*>() : nullptr);
	}

	static bool LUA_NATIVE_STREAMING_HAS_CLIP_SET_LOADED(sol::stack_object animSetName)
	{
		auto retval = (bool)STREAMING::HAS_CLIP_SET_LOADED(animSetName.is<const char*>() ? animSetName.as<const char*>() : nullptr);
		return retval;
	}

	static void LUA_NATIVE_STREAMING_REMOVE_CLIP_SET(sol::stack_object animSetName)
	{
		STREAMING::REMOVE_CLIP_SET(animSetName.is<const char*>() ? animSetName.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_STREAMING_REQUEST_CLIP_SET_BY_HASH_(Hash clipSetHash)
	{
		STREAMING::_REQUEST_CLIP_SET_BY_HASH(clipSetHash);
	}

	static void LUA_NATIVE_STREAMING_0x03DDBF2D73799F9E_(Any p0)
	{
		STREAMING::_0x03DDBF2D73799F9E(p0);
	}

	static Any LUA_NATIVE_STREAMING_0x85B8F04555AB49B8_(Any p0)
	{
		auto retval = STREAMING::_0x85B8F04555AB49B8(p0);
		return retval;
	}

	static void LUA_NATIVE_STREAMING_0x9F348DE670423460_(Any p0)
	{
		STREAMING::_0x9F348DE670423460(p0);
	}

	static Any LUA_NATIVE_STREAMING_0x5288B7F0690F7C1F_(Any p0)
	{
		auto retval = STREAMING::_0x5288B7F0690F7C1F(p0);
		return retval;
	}

	static int LUA_NATIVE_STREAMING_REQUEST_SCENARIO_TYPE_(Hash scenarioType, int p1, Any p2, Any p3)
	{
		auto retval = STREAMING::_REQUEST_SCENARIO_TYPE(scenarioType, p1, p2, p3);
		return retval;
	}

	static bool LUA_NATIVE_STREAMING_HAS_SCENARIO_TYPE_LOADED_(Hash scenarioType, bool p1)
	{
		auto retval = (bool)STREAMING::_HAS_SCENARIO_TYPE_LOADED(scenarioType, p1);
		return retval;
	}

	static Any LUA_NATIVE_STREAMING_REMOVE_SCENARIO_ASSET_(Hash scenarioType)
	{
		auto retval = STREAMING::_REMOVE_SCENARIO_ASSET(scenarioType);
		return retval;
	}

	static Any LUA_NATIVE_STREAMING_0xB223249B7798EEED_(Any p0, Any p1, Any p2, Any p3)
	{
		auto retval = STREAMING::_0xB223249B7798EEED(p0, p1, p2, p3);
		return retval;
	}

	static Any LUA_NATIVE_STREAMING_0xA0AE7653E8181725_(Any p0)
	{
		auto retval = STREAMING::_0xA0AE7653E8181725(p0);
		return retval;
	}

	static Any LUA_NATIVE_STREAMING_0x66BC28E50E85270E_(Any p0)
	{
		auto retval = STREAMING::_0x66BC28E50E85270E(p0);
		return retval;
	}

	static std::tuple<bool, Vector3, float> LUA_NATIVE_STREAMING_GET_IPL_BOUNDING_SPHERE_(Hash iplHash, Vector3 position, float radius)
	{
		std::tuple<bool, Vector3, float> return_values;
		std::get<0>(return_values) = (bool)STREAMING::_GET_IPL_BOUNDING_SPHERE(iplHash, &position, &radius);
		std::get<1>(return_values) = position;
		std::get<2>(return_values) = radius;

		return return_values;
	}

	static void LUA_NATIVE_STREAMING_REQUEST_IPL_HASH(Hash iplHash)
	{
		STREAMING::REQUEST_IPL_HASH(iplHash);
	}

	static void LUA_NATIVE_STREAMING_REQUEST_IPL_BY_HASH(Hash iplHash)
	{
		STREAMING::REQUEST_IPL_BY_HASH(iplHash);
	}

	static void LUA_NATIVE_STREAMING_REMOVE_IPL_HASH(Hash iplHash)
	{
		STREAMING::REMOVE_IPL_HASH(iplHash);
	}

	static void LUA_NATIVE_STREAMING_REMOVE_IPL_BY_HASH(Hash iplHash)
	{
		STREAMING::REMOVE_IPL_BY_HASH(iplHash);
	}

	static bool LUA_NATIVE_STREAMING_IS_IPL_ACTIVE_HASH(Hash iplHash)
	{
		auto retval = (bool)STREAMING::IS_IPL_ACTIVE_HASH(iplHash);
		return retval;
	}

	static bool LUA_NATIVE_STREAMING_IS_IPL_ACTIVE_BY_HASH(Hash iplHash)
	{
		auto retval = (bool)STREAMING::IS_IPL_ACTIVE_BY_HASH(iplHash);
		return retval;
	}

	static bool LUA_NATIVE_STREAMING_IS_POSITION_INSIDE_IPL_STREAMING_EXTENTS_(Hash iplHash, float x, float y, float z)
	{
		auto retval = (bool)STREAMING::_IS_POSITION_INSIDE_IPL_STREAMING_EXTENTS(iplHash, x, y, z);
		return retval;
	}

	static void LUA_NATIVE_STREAMING_0xDEEE1F265B7ECEF5_()
	{
		STREAMING::_0xDEEE1F265B7ECEF5();
	}

	static void LUA_NATIVE_STREAMING_SET_GAME_PAUSES_FOR_STREAMING(bool bAllowPause)
	{
		STREAMING::SET_GAME_PAUSES_FOR_STREAMING(bAllowPause);
	}

	static int LUA_NATIVE_STREAMING_GET_NUMBER_OF_STREAMING_REQUESTS()
	{
		auto retval = STREAMING::GET_NUMBER_OF_STREAMING_REQUESTS();
		return retval;
	}

	static void LUA_NATIVE_STREAMING_REQUEST_PTFX_ASSET()
	{
		STREAMING::REQUEST_PTFX_ASSET();
	}

	static bool LUA_NATIVE_STREAMING_HAS_PTFX_ASSET_LOADED()
	{
		auto retval = (bool)STREAMING::HAS_PTFX_ASSET_LOADED();
		return retval;
	}

	static void LUA_NATIVE_STREAMING_REMOVE_PTFX_ASSET()
	{
		STREAMING::REMOVE_PTFX_ASSET();
	}

	static void LUA_NATIVE_STREAMING_REQUEST_NAMED_PTFX_ASSET(Hash fxNameHash)
	{
		STREAMING::REQUEST_NAMED_PTFX_ASSET(fxNameHash);
	}

	static bool LUA_NATIVE_STREAMING_HAS_NAMED_PTFX_ASSET_LOADED(Hash fxNameHash)
	{
		auto retval = (bool)STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(fxNameHash);
		return retval;
	}

	static void LUA_NATIVE_STREAMING_REMOVE_NAMED_PTFX_ASSET(Hash fxNameHash)
	{
		STREAMING::REMOVE_NAMED_PTFX_ASSET(fxNameHash);
	}

	static void LUA_NATIVE_STREAMING_SET_POPULATION_BUDGET_MULTIPLIER(float fBudgetMultiplier)
	{
		STREAMING::SET_POPULATION_BUDGET_MULTIPLIER(fBudgetMultiplier);
	}

	static float LUA_NATIVE_STREAMING_GET_POPULATION_BUDGET_MULTIPLIER()
	{
		auto retval = STREAMING::GET_POPULATION_BUDGET_MULTIPLIER();
		return retval;
	}

	static Any LUA_NATIVE_STREAMING_0x071769BCB24379E5_()
	{
		auto retval = STREAMING::_0x071769BCB24379E5();
		return retval;
	}

	static void LUA_NATIVE_STREAMING_CLEAR_FOCUS()
	{
		STREAMING::CLEAR_FOCUS();
	}

	static void LUA_NATIVE_STREAMING_SET_FOCUS_POS_AND_VEL(float posX, float posY, float posZ, float velX, float velY, float velZ)
	{
		STREAMING::SET_FOCUS_POS_AND_VEL(posX, posY, posZ, velX, velY, velZ);
	}

	static void LUA_NATIVE_STREAMING_SET_FOCUS_ENTITY(Entity entityIndex)
	{
		STREAMING::SET_FOCUS_ENTITY(entityIndex);
	}

	static bool LUA_NATIVE_STREAMING_IS_ENTITY_FOCUS(Entity entityIndex)
	{
		auto retval = (bool)STREAMING::IS_ENTITY_FOCUS(entityIndex);
		return retval;
	}

	static void LUA_NATIVE_STREAMING_SET_MAPDATACULLBOX_ENABLED(sol::stack_object boxName, bool bEnabled)
	{
		STREAMING::SET_MAPDATACULLBOX_ENABLED(boxName.is<const char*>() ? boxName.as<const char*>() : nullptr, bEnabled);
	}

	static void LUA_NATIVE_STREAMING_SET_ALL_MAPDATA_CULLED(bool bCulled)
	{
		STREAMING::SET_ALL_MAPDATA_CULLED(bCulled);
	}

	static void LUA_NATIVE_STREAMING_0xF01D21DF39554115_(Any p0)
	{
		STREAMING::_0xF01D21DF39554115(p0);
	}

	static bool LUA_NATIVE_STREAMING_LOAD_SCENE_START(float posX, float posY, float posZ, float offsetX, float offsetY, float offsetZ, float radius, int p7)
	{
		auto retval = (bool)STREAMING::LOAD_SCENE_START(posX, posY, posZ, offsetX, offsetY, offsetZ, radius, p7);
		return retval;
	}

	static bool LUA_NATIVE_STREAMING_LOAD_SCENE_START_SPHERE(float x, float y, float z, float radius, Any p4)
	{
		auto retval = (bool)STREAMING::LOAD_SCENE_START_SPHERE(x, y, z, radius, p4);
		return retval;
	}

	static void LUA_NATIVE_STREAMING_LOAD_SCENE_STOP()
	{
		STREAMING::LOAD_SCENE_STOP();
	}

	static bool LUA_NATIVE_STREAMING_IS_LOAD_SCENE_ACTIVE()
	{
		auto retval = (bool)STREAMING::IS_LOAD_SCENE_ACTIVE();
		return retval;
	}

	static bool LUA_NATIVE_STREAMING_IS_LOAD_SCENE_LOADED()
	{
		auto retval = (bool)STREAMING::IS_LOAD_SCENE_LOADED();
		return retval;
	}

	static bool LUA_NATIVE_STREAMING_IS_RENDERED_SCENE_LOADED()
	{
		auto retval = (bool)STREAMING::IS_RENDERED_SCENE_LOADED();
		return retval;
	}

	static bool LUA_NATIVE_STREAMING_IS_PLAYER_SWITCH_IN_PROGRESS()
	{
		auto retval = (bool)STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS();
		return retval;
	}

	static void LUA_NATIVE_STREAMING_SET_SCENE_STREAMING_TRACKS_CAM_POS_THIS_FRAME()
	{
		STREAMING::SET_SCENE_STREAMING_TRACKS_CAM_POS_THIS_FRAME();
	}

	static void LUA_NATIVE_STREAMING_IPL_GROUP_SWAP_START(sol::stack_object iplGroupBefore, sol::stack_object iplGroupAfter)
	{
		STREAMING::IPL_GROUP_SWAP_START(iplGroupBefore.is<const char*>() ? iplGroupBefore.as<const char*>() : nullptr, iplGroupAfter.is<const char*>() ? iplGroupAfter.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_STREAMING_IPL_GROUP_SWAP_CANCEL()
	{
		STREAMING::IPL_GROUP_SWAP_CANCEL();
	}

	static bool LUA_NATIVE_STREAMING_IPL_GROUP_SWAP_IS_READY()
	{
		auto retval = (bool)STREAMING::IPL_GROUP_SWAP_IS_READY();
		return retval;
	}

	static void LUA_NATIVE_STREAMING_IPL_GROUP_SWAP_FINISH()
	{
		STREAMING::IPL_GROUP_SWAP_FINISH();
	}

	static bool LUA_NATIVE_STREAMING_IPL_GROUP_SWAP_IS_ACTIVE()
	{
		auto retval = (bool)STREAMING::IPL_GROUP_SWAP_IS_ACTIVE();
		return retval;
	}

	static void LUA_NATIVE_STREAMING_PREFETCH_SRL(sol::stack_object cutsceneName)
	{
		STREAMING::PREFETCH_SRL(cutsceneName.is<const char*>() ? cutsceneName.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_STREAMING_0xAE00387E53B1E9FC_()
	{
		STREAMING::_0xAE00387E53B1E9FC();
	}

	static void LUA_NATIVE_STREAMING_0xEF1A8A484118735E_()
	{
		STREAMING::_0xEF1A8A484118735E();
	}

	static void LUA_NATIVE_STREAMING_0xD9F2FF4AF394D926_()
	{
		STREAMING::_0xD9F2FF4AF394D926();
	}

	static bool LUA_NATIVE_STREAMING_IS_SRL_LOADED()
	{
		auto retval = (bool)STREAMING::IS_SRL_LOADED();
		return retval;
	}

	static void LUA_NATIVE_STREAMING_BEGIN_SRL()
	{
		STREAMING::BEGIN_SRL();
	}

	static void LUA_NATIVE_STREAMING_END_SRL()
	{
		STREAMING::END_SRL();
	}

	static void LUA_NATIVE_STREAMING_SET_SRL_TIME(float time)
	{
		STREAMING::SET_SRL_TIME(time);
	}

	static void LUA_NATIVE_STREAMING_SET_SRL_READAHEAD_TIMES(int prestreamMap, int prestreamAssets, int playbackMap, int playbackAssets)
	{
		STREAMING::SET_SRL_READAHEAD_TIMES(prestreamMap, prestreamAssets, playbackMap, playbackAssets);
	}

	static void LUA_NATIVE_STREAMING_SET_SRL_LONG_JUMP_MODE(bool enableLongJumpMode)
	{
		STREAMING::SET_SRL_LONG_JUMP_MODE(enableLongJumpMode);
	}

	static void LUA_NATIVE_STREAMING_SET_HD_AREA(float positionX, float positionY, float positionZ, float radius)
	{
		STREAMING::SET_HD_AREA(positionX, positionY, positionZ, radius);
	}

	static void LUA_NATIVE_STREAMING_CLEAR_HD_AREA()
	{
		STREAMING::CLEAR_HD_AREA();
	}

	static void LUA_NATIVE_STREAMING_0x09FBF15D73EFC900_()
	{
		STREAMING::_0x09FBF15D73EFC900();
	}

	static void LUA_NATIVE_STREAMING_0xF11D7CB962FCD747_(Any p0)
	{
		STREAMING::_0xF11D7CB962FCD747(p0);
	}

	static void LUA_NATIVE_STREAMING_0xB9B9E47EDB9D63DB_()
	{
		STREAMING::_0xB9B9E47EDB9D63DB();
	}

	static void LUA_NATIVE_STREAMING_0xBE8DAA9D8D01DA6A_(Any p0, Any p1, Any p2)
	{
		STREAMING::_0xBE8DAA9D8D01DA6A(p0, p1, p2);
	}

	static Any LUA_NATIVE_STREAMING_0x53764309C4618087_(Any p0)
	{
		auto retval = STREAMING::_0x53764309C4618087(p0);
		return retval;
	}

	static void LUA_NATIVE_STREAMING_0x032A14D082A9B269_(Hash p0)
	{
		STREAMING::_0x032A14D082A9B269(p0);
	}

	static void LUA_NATIVE_STREAMING_0xAFA87A7D41EE346A_(Any p0)
	{
		STREAMING::_0xAFA87A7D41EE346A(p0);
	}

	static void LUA_NATIVE_STREAMING_0x6A6E79FBE8678C98_()
	{
		STREAMING::_0x6A6E79FBE8678C98();
	}

	static void LUA_NATIVE_STREAMING_0xCC61D8D6C19D9F14_(Any p0)
	{
		STREAMING::_0xCC61D8D6C19D9F14(p0);
	}

	static Any LUA_NATIVE_STREAMING_0xDA7FDEFF4DE86839_()
	{
		auto retval = STREAMING::_0xDA7FDEFF4DE86839();
		return retval;
	}

	static Any LUA_NATIVE_STREAMING_0x5D5E2102B174B8D2_()
	{
		auto retval = STREAMING::_0x5D5E2102B174B8D2();
		return retval;
	}

	static Any LUA_NATIVE_STREAMING_0x7B8C2B846C05E5AD_()
	{
		auto retval = STREAMING::_0x7B8C2B846C05E5AD();
		return retval;
	}

	static void LUA_NATIVE_STREAMING_0x62D5F0588915B277_()
	{
		STREAMING::_0x62D5F0588915B277();
	}

	static Any LUA_NATIVE_STREAMING_0x2F4D53023F826FF0_()
	{
		auto retval = STREAMING::_0x2F4D53023F826FF0();
		return retval;
	}

	static Any LUA_NATIVE_STREAMING_0xDABFE48BA0D457AA_()
	{
		auto retval = STREAMING::_0xDABFE48BA0D457AA();
		return retval;
	}

	static Any LUA_NATIVE_STREAMING_0xE5B76E5B56CD77DD_()
	{
		auto retval = STREAMING::_0xE5B76E5B56CD77DD();
		return retval;
	}

	static Any LUA_NATIVE_STREAMING_0x27AF48C62B281341_()
	{
		auto retval = STREAMING::_0x27AF48C62B281341();
		return retval;
	}

	static Any LUA_NATIVE_STREAMING_0x99F92061EFE908BA_()
	{
		auto retval = STREAMING::_0x99F92061EFE908BA();
		return retval;
	}

	static Any LUA_NATIVE_STREAMING_0x05DD384F39DE1C8C_(Any p0, Any p1)
	{
		auto retval = STREAMING::_0x05DD384F39DE1C8C(p0, p1);
		return retval;
	}

	static Any LUA_NATIVE_STREAMING_0x198B85CC3C7A4593_(Any p0, Any p1)
	{
		auto retval = STREAMING::_0x198B85CC3C7A4593(p0, p1);
		return retval;
	}

	static Any LUA_NATIVE_STREAMING_0x2A6D1DAAB9EBB262_(Any p0)
	{
		auto retval = STREAMING::_0x2A6D1DAAB9EBB262(p0);
		return retval;
	}

	static void LUA_NATIVE_STREAMING_0x07559B29950301FF_(Any p0, Any p1)
	{
		STREAMING::_0x07559B29950301FF(p0, p1);
	}

	static Any LUA_NATIVE_STREAMING_0xD6E39DC5D46DF4AB_(Any p0)
	{
		auto retval = STREAMING::_0xD6E39DC5D46DF4AB(p0);
		return retval;
	}

	static Any LUA_NATIVE_STREAMING_0x8D56BDA343D9519F_(Any p0)
	{
		auto retval = STREAMING::_0x8D56BDA343D9519F(p0);
		return retval;
	}

	static void LUA_NATIVE_STREAMING_0xD840C130D7AACFA5_(Any p0, Any p1, Any p2)
	{
		STREAMING::_0xD840C130D7AACFA5(p0, p1, p2);
	}

	static void LUA_NATIVE_STREAMING_0x2E24C27B112B5B12_(Any p0)
	{
		STREAMING::_0x2E24C27B112B5B12(p0);
	}

	static void LUA_NATIVE_STREAMING_SET_GUARMA_WORLDHORIZON_ACTIVE_(bool toggle)
	{
		STREAMING::_SET_GUARMA_WORLDHORIZON_ACTIVE(toggle);
	}

	void init_native_binding_STREAMING(sol::state& L)
	{
		auto STREAMING = L["STREAMING"].get_or_create<sol::table>();
		STREAMING.set_function("REQUEST_MODEL", LUA_NATIVE_STREAMING_REQUEST_MODEL);
		STREAMING.set_function("HAS_MODEL_LOADED", LUA_NATIVE_STREAMING_HAS_MODEL_LOADED);
		STREAMING.set_function("SET_MODEL_AS_NO_LONGER_NEEDED", LUA_NATIVE_STREAMING_SET_MODEL_AS_NO_LONGER_NEEDED);
		STREAMING.set_function("IS_MODEL_IN_CDIMAGE", LUA_NATIVE_STREAMING_IS_MODEL_IN_CDIMAGE);
		STREAMING.set_function("IS_MODEL_VALID", LUA_NATIVE_STREAMING_IS_MODEL_VALID);
		STREAMING.set_function("IS_MODEL_A_PED", LUA_NATIVE_STREAMING_IS_MODEL_A_PED);
		STREAMING.set_function("IS_MODEL_A_VEHICLE", LUA_NATIVE_STREAMING_IS_MODEL_A_VEHICLE);
		STREAMING.set_function("IS_MODEL_AN_OBJECT_", LUA_NATIVE_STREAMING_IS_MODEL_AN_OBJECT_);
		STREAMING.set_function("HAS_COLLISION_LOADED_AT_COORD_", LUA_NATIVE_STREAMING_HAS_COLLISION_LOADED_AT_COORD_);
		STREAMING.set_function("0x80B3E0597366ADF1_", LUA_NATIVE_STREAMING_0x80B3E0597366ADF1_);
		STREAMING.set_function("REQUEST_COLLISION_AT_COORD", LUA_NATIVE_STREAMING_REQUEST_COLLISION_AT_COORD);
		STREAMING.set_function("REQUEST_METADATA_AT_COORD_", LUA_NATIVE_STREAMING_REQUEST_METADATA_AT_COORD_);
		STREAMING.set_function("REQUEST_COLLISION_FOR_MODEL", LUA_NATIVE_STREAMING_REQUEST_COLLISION_FOR_MODEL);
		STREAMING.set_function("HAS_COLLISION_FOR_MODEL_LOADED", LUA_NATIVE_STREAMING_HAS_COLLISION_FOR_MODEL_LOADED);
		STREAMING.set_function("REQUEST_ADDITIONAL_COLLISION_AT_COORD", LUA_NATIVE_STREAMING_REQUEST_ADDITIONAL_COLLISION_AT_COORD);
		STREAMING.set_function("DOES_ANIM_DICT_EXIST", LUA_NATIVE_STREAMING_DOES_ANIM_DICT_EXIST);
		STREAMING.set_function("REQUEST_ANIM_DICT", LUA_NATIVE_STREAMING_REQUEST_ANIM_DICT);
		STREAMING.set_function("HAS_ANIM_DICT_LOADED", LUA_NATIVE_STREAMING_HAS_ANIM_DICT_LOADED);
		STREAMING.set_function("REMOVE_ANIM_DICT", LUA_NATIVE_STREAMING_REMOVE_ANIM_DICT);
		STREAMING.set_function("REQUEST_MOVE_NETWORK_DEF", LUA_NATIVE_STREAMING_REQUEST_MOVE_NETWORK_DEF);
		STREAMING.set_function("HAS_MOVE_NETWORK_DEF_LOADED", LUA_NATIVE_STREAMING_HAS_MOVE_NETWORK_DEF_LOADED);
		STREAMING.set_function("REMOVE_MOVE_NETWORK_DEF", LUA_NATIVE_STREAMING_REMOVE_MOVE_NETWORK_DEF);
		STREAMING.set_function("REQUEST_CLIP_SET", LUA_NATIVE_STREAMING_REQUEST_CLIP_SET);
		STREAMING.set_function("HAS_CLIP_SET_LOADED", LUA_NATIVE_STREAMING_HAS_CLIP_SET_LOADED);
		STREAMING.set_function("REMOVE_CLIP_SET", LUA_NATIVE_STREAMING_REMOVE_CLIP_SET);
		STREAMING.set_function("REQUEST_CLIP_SET_BY_HASH_", LUA_NATIVE_STREAMING_REQUEST_CLIP_SET_BY_HASH_);
		STREAMING.set_function("0x03DDBF2D73799F9E_", LUA_NATIVE_STREAMING_0x03DDBF2D73799F9E_);
		STREAMING.set_function("0x85B8F04555AB49B8_", LUA_NATIVE_STREAMING_0x85B8F04555AB49B8_);
		STREAMING.set_function("0x9F348DE670423460_", LUA_NATIVE_STREAMING_0x9F348DE670423460_);
		STREAMING.set_function("0x5288B7F0690F7C1F_", LUA_NATIVE_STREAMING_0x5288B7F0690F7C1F_);
		STREAMING.set_function("REQUEST_SCENARIO_TYPE_", LUA_NATIVE_STREAMING_REQUEST_SCENARIO_TYPE_);
		STREAMING.set_function("HAS_SCENARIO_TYPE_LOADED_", LUA_NATIVE_STREAMING_HAS_SCENARIO_TYPE_LOADED_);
		STREAMING.set_function("REMOVE_SCENARIO_ASSET_", LUA_NATIVE_STREAMING_REMOVE_SCENARIO_ASSET_);
		STREAMING.set_function("0xB223249B7798EEED_", LUA_NATIVE_STREAMING_0xB223249B7798EEED_);
		STREAMING.set_function("0xA0AE7653E8181725_", LUA_NATIVE_STREAMING_0xA0AE7653E8181725_);
		STREAMING.set_function("0x66BC28E50E85270E_", LUA_NATIVE_STREAMING_0x66BC28E50E85270E_);
		STREAMING.set_function("GET_IPL_BOUNDING_SPHERE_", LUA_NATIVE_STREAMING_GET_IPL_BOUNDING_SPHERE_);
		STREAMING.set_function("REQUEST_IPL_HASH", LUA_NATIVE_STREAMING_REQUEST_IPL_HASH);
		STREAMING.set_function("REQUEST_IPL_BY_HASH", LUA_NATIVE_STREAMING_REQUEST_IPL_BY_HASH);
		STREAMING.set_function("REMOVE_IPL_HASH", LUA_NATIVE_STREAMING_REMOVE_IPL_HASH);
		STREAMING.set_function("REMOVE_IPL_BY_HASH", LUA_NATIVE_STREAMING_REMOVE_IPL_BY_HASH);
		STREAMING.set_function("IS_IPL_ACTIVE_HASH", LUA_NATIVE_STREAMING_IS_IPL_ACTIVE_HASH);
		STREAMING.set_function("IS_IPL_ACTIVE_BY_HASH", LUA_NATIVE_STREAMING_IS_IPL_ACTIVE_BY_HASH);
		STREAMING.set_function("IS_POSITION_INSIDE_IPL_STREAMING_EXTENTS_", LUA_NATIVE_STREAMING_IS_POSITION_INSIDE_IPL_STREAMING_EXTENTS_);
		STREAMING.set_function("0xDEEE1F265B7ECEF5_", LUA_NATIVE_STREAMING_0xDEEE1F265B7ECEF5_);
		STREAMING.set_function("SET_GAME_PAUSES_FOR_STREAMING", LUA_NATIVE_STREAMING_SET_GAME_PAUSES_FOR_STREAMING);
		STREAMING.set_function("GET_NUMBER_OF_STREAMING_REQUESTS", LUA_NATIVE_STREAMING_GET_NUMBER_OF_STREAMING_REQUESTS);
		STREAMING.set_function("REQUEST_PTFX_ASSET", LUA_NATIVE_STREAMING_REQUEST_PTFX_ASSET);
		STREAMING.set_function("HAS_PTFX_ASSET_LOADED", LUA_NATIVE_STREAMING_HAS_PTFX_ASSET_LOADED);
		STREAMING.set_function("REMOVE_PTFX_ASSET", LUA_NATIVE_STREAMING_REMOVE_PTFX_ASSET);
		STREAMING.set_function("REQUEST_NAMED_PTFX_ASSET", LUA_NATIVE_STREAMING_REQUEST_NAMED_PTFX_ASSET);
		STREAMING.set_function("HAS_NAMED_PTFX_ASSET_LOADED", LUA_NATIVE_STREAMING_HAS_NAMED_PTFX_ASSET_LOADED);
		STREAMING.set_function("REMOVE_NAMED_PTFX_ASSET", LUA_NATIVE_STREAMING_REMOVE_NAMED_PTFX_ASSET);
		STREAMING.set_function("SET_POPULATION_BUDGET_MULTIPLIER", LUA_NATIVE_STREAMING_SET_POPULATION_BUDGET_MULTIPLIER);
		STREAMING.set_function("GET_POPULATION_BUDGET_MULTIPLIER", LUA_NATIVE_STREAMING_GET_POPULATION_BUDGET_MULTIPLIER);
		STREAMING.set_function("0x071769BCB24379E5_", LUA_NATIVE_STREAMING_0x071769BCB24379E5_);
		STREAMING.set_function("CLEAR_FOCUS", LUA_NATIVE_STREAMING_CLEAR_FOCUS);
		STREAMING.set_function("SET_FOCUS_POS_AND_VEL", LUA_NATIVE_STREAMING_SET_FOCUS_POS_AND_VEL);
		STREAMING.set_function("SET_FOCUS_ENTITY", LUA_NATIVE_STREAMING_SET_FOCUS_ENTITY);
		STREAMING.set_function("IS_ENTITY_FOCUS", LUA_NATIVE_STREAMING_IS_ENTITY_FOCUS);
		STREAMING.set_function("SET_MAPDATACULLBOX_ENABLED", LUA_NATIVE_STREAMING_SET_MAPDATACULLBOX_ENABLED);
		STREAMING.set_function("SET_ALL_MAPDATA_CULLED", LUA_NATIVE_STREAMING_SET_ALL_MAPDATA_CULLED);
		STREAMING.set_function("0xF01D21DF39554115_", LUA_NATIVE_STREAMING_0xF01D21DF39554115_);
		STREAMING.set_function("LOAD_SCENE_START", LUA_NATIVE_STREAMING_LOAD_SCENE_START);
		STREAMING.set_function("LOAD_SCENE_START_SPHERE", LUA_NATIVE_STREAMING_LOAD_SCENE_START_SPHERE);
		STREAMING.set_function("LOAD_SCENE_STOP", LUA_NATIVE_STREAMING_LOAD_SCENE_STOP);
		STREAMING.set_function("IS_LOAD_SCENE_ACTIVE", LUA_NATIVE_STREAMING_IS_LOAD_SCENE_ACTIVE);
		STREAMING.set_function("IS_LOAD_SCENE_LOADED", LUA_NATIVE_STREAMING_IS_LOAD_SCENE_LOADED);
		STREAMING.set_function("IS_RENDERED_SCENE_LOADED", LUA_NATIVE_STREAMING_IS_RENDERED_SCENE_LOADED);
		STREAMING.set_function("IS_PLAYER_SWITCH_IN_PROGRESS", LUA_NATIVE_STREAMING_IS_PLAYER_SWITCH_IN_PROGRESS);
		STREAMING.set_function("SET_SCENE_STREAMING_TRACKS_CAM_POS_THIS_FRAME", LUA_NATIVE_STREAMING_SET_SCENE_STREAMING_TRACKS_CAM_POS_THIS_FRAME);
		STREAMING.set_function("IPL_GROUP_SWAP_START", LUA_NATIVE_STREAMING_IPL_GROUP_SWAP_START);
		STREAMING.set_function("IPL_GROUP_SWAP_CANCEL", LUA_NATIVE_STREAMING_IPL_GROUP_SWAP_CANCEL);
		STREAMING.set_function("IPL_GROUP_SWAP_IS_READY", LUA_NATIVE_STREAMING_IPL_GROUP_SWAP_IS_READY);
		STREAMING.set_function("IPL_GROUP_SWAP_FINISH", LUA_NATIVE_STREAMING_IPL_GROUP_SWAP_FINISH);
		STREAMING.set_function("IPL_GROUP_SWAP_IS_ACTIVE", LUA_NATIVE_STREAMING_IPL_GROUP_SWAP_IS_ACTIVE);
		STREAMING.set_function("PREFETCH_SRL", LUA_NATIVE_STREAMING_PREFETCH_SRL);
		STREAMING.set_function("0xAE00387E53B1E9FC_", LUA_NATIVE_STREAMING_0xAE00387E53B1E9FC_);
		STREAMING.set_function("0xEF1A8A484118735E_", LUA_NATIVE_STREAMING_0xEF1A8A484118735E_);
		STREAMING.set_function("0xD9F2FF4AF394D926_", LUA_NATIVE_STREAMING_0xD9F2FF4AF394D926_);
		STREAMING.set_function("IS_SRL_LOADED", LUA_NATIVE_STREAMING_IS_SRL_LOADED);
		STREAMING.set_function("BEGIN_SRL", LUA_NATIVE_STREAMING_BEGIN_SRL);
		STREAMING.set_function("END_SRL", LUA_NATIVE_STREAMING_END_SRL);
		STREAMING.set_function("SET_SRL_TIME", LUA_NATIVE_STREAMING_SET_SRL_TIME);
		STREAMING.set_function("SET_SRL_READAHEAD_TIMES", LUA_NATIVE_STREAMING_SET_SRL_READAHEAD_TIMES);
		STREAMING.set_function("SET_SRL_LONG_JUMP_MODE", LUA_NATIVE_STREAMING_SET_SRL_LONG_JUMP_MODE);
		STREAMING.set_function("SET_HD_AREA", LUA_NATIVE_STREAMING_SET_HD_AREA);
		STREAMING.set_function("CLEAR_HD_AREA", LUA_NATIVE_STREAMING_CLEAR_HD_AREA);
		STREAMING.set_function("0x09FBF15D73EFC900_", LUA_NATIVE_STREAMING_0x09FBF15D73EFC900_);
		STREAMING.set_function("0xF11D7CB962FCD747_", LUA_NATIVE_STREAMING_0xF11D7CB962FCD747_);
		STREAMING.set_function("0xB9B9E47EDB9D63DB_", LUA_NATIVE_STREAMING_0xB9B9E47EDB9D63DB_);
		STREAMING.set_function("0xBE8DAA9D8D01DA6A_", LUA_NATIVE_STREAMING_0xBE8DAA9D8D01DA6A_);
		STREAMING.set_function("0x53764309C4618087_", LUA_NATIVE_STREAMING_0x53764309C4618087_);
		STREAMING.set_function("0x032A14D082A9B269_", LUA_NATIVE_STREAMING_0x032A14D082A9B269_);
		STREAMING.set_function("0xAFA87A7D41EE346A_", LUA_NATIVE_STREAMING_0xAFA87A7D41EE346A_);
		STREAMING.set_function("0x6A6E79FBE8678C98_", LUA_NATIVE_STREAMING_0x6A6E79FBE8678C98_);
		STREAMING.set_function("0xCC61D8D6C19D9F14_", LUA_NATIVE_STREAMING_0xCC61D8D6C19D9F14_);
		STREAMING.set_function("0xDA7FDEFF4DE86839_", LUA_NATIVE_STREAMING_0xDA7FDEFF4DE86839_);
		STREAMING.set_function("0x5D5E2102B174B8D2_", LUA_NATIVE_STREAMING_0x5D5E2102B174B8D2_);
		STREAMING.set_function("0x7B8C2B846C05E5AD_", LUA_NATIVE_STREAMING_0x7B8C2B846C05E5AD_);
		STREAMING.set_function("0x62D5F0588915B277_", LUA_NATIVE_STREAMING_0x62D5F0588915B277_);
		STREAMING.set_function("0x2F4D53023F826FF0_", LUA_NATIVE_STREAMING_0x2F4D53023F826FF0_);
		STREAMING.set_function("0xDABFE48BA0D457AA_", LUA_NATIVE_STREAMING_0xDABFE48BA0D457AA_);
		STREAMING.set_function("0xE5B76E5B56CD77DD_", LUA_NATIVE_STREAMING_0xE5B76E5B56CD77DD_);
		STREAMING.set_function("0x27AF48C62B281341_", LUA_NATIVE_STREAMING_0x27AF48C62B281341_);
		STREAMING.set_function("0x99F92061EFE908BA_", LUA_NATIVE_STREAMING_0x99F92061EFE908BA_);
		STREAMING.set_function("0x05DD384F39DE1C8C_", LUA_NATIVE_STREAMING_0x05DD384F39DE1C8C_);
		STREAMING.set_function("0x198B85CC3C7A4593_", LUA_NATIVE_STREAMING_0x198B85CC3C7A4593_);
		STREAMING.set_function("0x2A6D1DAAB9EBB262_", LUA_NATIVE_STREAMING_0x2A6D1DAAB9EBB262_);
		STREAMING.set_function("0x07559B29950301FF_", LUA_NATIVE_STREAMING_0x07559B29950301FF_);
		STREAMING.set_function("0xD6E39DC5D46DF4AB_", LUA_NATIVE_STREAMING_0xD6E39DC5D46DF4AB_);
		STREAMING.set_function("0x8D56BDA343D9519F_", LUA_NATIVE_STREAMING_0x8D56BDA343D9519F_);
		STREAMING.set_function("0xD840C130D7AACFA5_", LUA_NATIVE_STREAMING_0xD840C130D7AACFA5_);
		STREAMING.set_function("0x2E24C27B112B5B12_", LUA_NATIVE_STREAMING_0x2E24C27B112B5B12_);
		STREAMING.set_function("SET_GUARMA_WORLDHORIZON_ACTIVE_", LUA_NATIVE_STREAMING_SET_GUARMA_WORLDHORIZON_ACTIVE_);
	}
}
