#include "lua_native_binding.hpp"
#include "game/rdr/Natives.hpp"

namespace Lua::native
{
	static void LUA_NATIVE_GRAPHICS_FREE_MEMORY_FOR_MISSION_CREATOR_PHOTO()
	{
		GRAPHICS::FREE_MEMORY_FOR_MISSION_CREATOR_PHOTO();
	}

	static bool LUA_NATIVE_GRAPHICS_LOAD_MISSION_CREATOR_PHOTO(sol::stack_object szContentID, int nFileID, int nFileVersion, int nLanguage)
	{
		auto retval = (bool)GRAPHICS::LOAD_MISSION_CREATOR_PHOTO(szContentID.is<const char*>() ? szContentID.as<const char*>() : nullptr, nFileID, nFileVersion, nLanguage);
		return retval;
	}

	static int LUA_NATIVE_GRAPHICS_GET_STATUS_OF_LOAD_MISSION_CREATOR_PHOTO(sol::stack_object szContentID)
	{
		auto retval = GRAPHICS::GET_STATUS_OF_LOAD_MISSION_CREATOR_PHOTO(szContentID.is<const char*>() ? szContentID.as<const char*>() : nullptr);
		return retval;
	}

	static bool LUA_NATIVE_GRAPHICS_BEGIN_TAKE_HIGH_QUALITY_PHOTO()
	{
		auto retval = (bool)GRAPHICS::BEGIN_TAKE_HIGH_QUALITY_PHOTO();
		return retval;
	}

	static int LUA_NATIVE_GRAPHICS_GET_STATUS_OF_TAKE_HIGH_QUALITY_PHOTO()
	{
		auto retval = GRAPHICS::GET_STATUS_OF_TAKE_HIGH_QUALITY_PHOTO();
		return retval;
	}

	static void LUA_NATIVE_GRAPHICS_FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO()
	{
		GRAPHICS::FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO();
	}

	static void LUA_NATIVE_GRAPHICS_SET_PHOTO_SELF_STAT_(bool p0)
	{
		GRAPHICS::_SET_PHOTO_SELF_STAT(p0);
	}

	static void LUA_NATIVE_GRAPHICS_SET_PHOTO_STUDIO_STAT_(int p0)
	{
		GRAPHICS::_SET_PHOTO_STUDIO_STAT(p0);
	}

	static void LUA_NATIVE_GRAPHICS_SET_POSSE_ID_FOR_PHOTO_(Any posseId)
	{
		GRAPHICS::_SET_POSSE_ID_FOR_PHOTO(posseId);
	}

	static void LUA_NATIVE_GRAPHICS_0x9F6D859C80708B26_(bool p0, bool p1)
	{
		GRAPHICS::_0x9F6D859C80708B26(p0, p1);
	}

	static bool LUA_NATIVE_GRAPHICS_IS_PHOTO_FRAME()
	{
		auto retval = (bool)GRAPHICS::IS_PHOTO_FRAME();
		return retval;
	}

	static void LUA_NATIVE_GRAPHICS_SET_PHOTO_IN_PHOTOMODE_STAT_(bool p0)
	{
		GRAPHICS::_SET_PHOTO_IN_PHOTOMODE_STAT(p0);
	}

	static void LUA_NATIVE_GRAPHICS_SET_PHOTO_OVERLAY_EFFECT_STAT_(int p0)
	{
		GRAPHICS::_SET_PHOTO_OVERLAY_EFFECT_STAT(p0);
	}

	static void LUA_NATIVE_GRAPHICS_0x0D5B19C34068FEE7_(Any p0)
	{
		GRAPHICS::_0x0D5B19C34068FEE7(p0);
	}

	static void LUA_NATIVE_GRAPHICS_SET_PLAYER_APPEAR_IN_PHOTO_(Player player)
	{
		GRAPHICS::_SET_PLAYER_APPEAR_IN_PHOTO(player);
	}

	static void LUA_NATIVE_GRAPHICS_SET_REGION_PHOTO_TAKEN_STAT_(sol::stack_object p0)
	{
		GRAPHICS::_SET_REGION_PHOTO_TAKEN_STAT(p0.is<const char*>() ? p0.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_GRAPHICS_SET_DISTRICT_PHOTO_TAKEN_STAT_(sol::stack_object p0)
	{
		GRAPHICS::_SET_DISTRICT_PHOTO_TAKEN_STAT(p0.is<const char*>() ? p0.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_GRAPHICS_SET_STATE_PHOTO_TAKEN_STAT_(sol::stack_object p0)
	{
		GRAPHICS::_SET_STATE_PHOTO_TAKEN_STAT(p0.is<const char*>() ? p0.as<const char*>() : nullptr);
	}

	static bool LUA_NATIVE_GRAPHICS_SAVE_HIGH_QUALITY_PHOTO(int PhotoSlotIndex)
	{
		auto retval = (bool)GRAPHICS::SAVE_HIGH_QUALITY_PHOTO(PhotoSlotIndex);
		return retval;
	}

	static int LUA_NATIVE_GRAPHICS_GET_STATUS_OF_SAVE_HIGH_QUALITY_PHOTO()
	{
		auto retval = GRAPHICS::GET_STATUS_OF_SAVE_HIGH_QUALITY_PHOTO();
		return retval;
	}

	static bool LUA_NATIVE_GRAPHICS_BEGIN_CREATE_LOW_QUALITY_COPY_OF_PHOTO(int qualitySetting)
	{
		auto retval = (bool)GRAPHICS::BEGIN_CREATE_LOW_QUALITY_COPY_OF_PHOTO(qualitySetting);
		return retval;
	}

	static int LUA_NATIVE_GRAPHICS_GET_STATUS_OF_CREATE_LOW_QUALITY_COPY_OF_PHOTO(int qualitySetting)
	{
		auto retval = GRAPHICS::GET_STATUS_OF_CREATE_LOW_QUALITY_COPY_OF_PHOTO(qualitySetting);
		return retval;
	}

	static void LUA_NATIVE_GRAPHICS_FREE_MEMORY_FOR_LOW_QUALITY_PHOTO()
	{
		GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
	}

	static void LUA_NATIVE_GRAPHICS_DRAW_LOW_QUALITY_PHOTO_TO_PHONE(bool bDraw, int PhotoRotation)
	{
		GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(bDraw, PhotoRotation);
	}

	static int LUA_NATIVE_GRAPHICS_GET_MAX_NUMBER_OF_LOCAL_PHOTOS_()
	{
		auto retval = GRAPHICS::_GET_MAX_NUMBER_OF_LOCAL_PHOTOS();
		return retval;
	}

	static int LUA_NATIVE_GRAPHICS_GET_CURRENT_NUMBER_OF_LOCAL_PHOTOS_()
	{
		auto retval = GRAPHICS::_GET_CURRENT_NUMBER_OF_LOCAL_PHOTOS();
		return retval;
	}

	static bool LUA_NATIVE_GRAPHICS_QUEUE_OPERATION_TO_CREATE_SORTED_LIST_OF_PHOTOS()
	{
		auto retval = (bool)GRAPHICS::QUEUE_OPERATION_TO_CREATE_SORTED_LIST_OF_PHOTOS();
		return retval;
	}

	static int LUA_NATIVE_GRAPHICS_GET_STATUS_OF_SORTED_LIST_OPERATION()
	{
		auto retval = GRAPHICS::GET_STATUS_OF_SORTED_LIST_OPERATION();
		return retval;
	}

	static void LUA_NATIVE_GRAPHICS_DRAW_LIGHT_WITH_RANGE(float VecCoorsX, float VecCoorsY, float VecCoorsZ, int R, int G, int B, float Range, float Intensity)
	{
		GRAPHICS::DRAW_LIGHT_WITH_RANGE(VecCoorsX, VecCoorsY, VecCoorsZ, R, G, B, Range, Intensity);
	}

	static void LUA_NATIVE_GRAPHICS_UPDATE_LIGHTS_ON_ENTITY(Entity EntityIndex)
	{
		GRAPHICS::UPDATE_LIGHTS_ON_ENTITY(EntityIndex);
	}

	static void LUA_NATIVE_GRAPHICS_SET_LIGHTS_COLOR_FOR_ENTITY_(Entity entity, int red, int green, int blue)
	{
		GRAPHICS::_SET_LIGHTS_COLOR_FOR_ENTITY(entity, red, green, blue);
	}

	static void LUA_NATIVE_GRAPHICS_SET_LIGHTS_INTENSITY_FOR_ENTITY_(Entity entity, float intensity)
	{
		GRAPHICS::_SET_LIGHTS_INTENSITY_FOR_ENTITY(entity, intensity);
	}

	static void LUA_NATIVE_GRAPHICS_SET_LIGHTS_TYPE_FOR_ENTITY_(Entity entity, int type)
	{
		GRAPHICS::_SET_LIGHTS_TYPE_FOR_ENTITY(entity, type);
	}

	static void LUA_NATIVE_GRAPHICS_DRAW_MARKER_(Hash type, float posX, float posY, float posZ, float dirX, float dirY, float dirZ, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ, int red, int green, int blue, int alpha, bool bobUpAndDown, bool faceCamera, int p19, bool rotate, sol::stack_object textureDict, sol::stack_object textureName, bool drawOnEnts)
	{
		GRAPHICS::_DRAW_MARKER(type, posX, posY, posZ, dirX, dirY, dirZ, rotX, rotY, rotZ, scaleX, scaleY, scaleZ, red, green, blue, alpha, bobUpAndDown, faceCamera, p19, rotate, textureDict.is<const char*>() ? textureDict.as<const char*>() : nullptr, textureName.is<const char*>() ? textureName.as<const char*>() : nullptr, drawOnEnts);
	}

	static int LUA_NATIVE_GRAPHICS_CREATE_CHECKPOINT_WITH_NAMEHASH(Hash typeHash, float posX1, float posY1, float posZ1, float posX2, float posY2, float posZ2, float radius, int red, int green, int blue, int alpha, int reserved)
	{
		auto retval = GRAPHICS::CREATE_CHECKPOINT_WITH_NAMEHASH(typeHash, posX1, posY1, posZ1, posX2, posY2, posZ2, radius, red, green, blue, alpha, reserved);
		return retval;
	}

	static bool LUA_NATIVE_GRAPHICS_DOES_CHECKPOINT_HAVE_FX_(int checkpoint)
	{
		auto retval = (bool)GRAPHICS::_DOES_CHECKPOINT_HAVE_FX(checkpoint);
		return retval;
	}

	static void LUA_NATIVE_GRAPHICS_SET_CHECKPOINT_RGBA(int UniqueCheckpointIndex, int colR, int colG, int colB, int colA)
	{
		GRAPHICS::SET_CHECKPOINT_RGBA(UniqueCheckpointIndex, colR, colG, colB, colA);
	}

	static void LUA_NATIVE_GRAPHICS_SET_CHECKPOINT_RGBA2(int UniqueCheckpointIndex, int colR, int colG, int colB, int colA)
	{
		GRAPHICS::SET_CHECKPOINT_RGBA2(UniqueCheckpointIndex, colR, colG, colB, colA);
	}

	static void LUA_NATIVE_GRAPHICS_0xCC3B787E73E64160_(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		GRAPHICS::_0xCC3B787E73E64160(p0, p1, p2, p3, p4);
	}

	static void LUA_NATIVE_GRAPHICS_0x171C18E994C1A395_(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		GRAPHICS::_0x171C18E994C1A395(p0, p1, p2, p3, p4);
	}

	static void LUA_NATIVE_GRAPHICS_DELETE_CHECKPOINT(int UniqueCheckpointIndex)
	{
		GRAPHICS::DELETE_CHECKPOINT(UniqueCheckpointIndex);
	}

	static void LUA_NATIVE_GRAPHICS_DRAW_RECT(float CentreX, float CentreY, float Width, float Height, int R, int G, int B, int A, bool bStereo, bool p9)
	{
		GRAPHICS::DRAW_RECT(CentreX, CentreY, Width, Height, R, G, B, A, bStereo, p9);
	}

	static void LUA_NATIVE_GRAPHICS_SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(bool bValue)
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(bValue);
	}

	static void LUA_NATIVE_GRAPHICS_SET_SCRIPT_GFX_DRAW_ORDER(int iDrawOrder)
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iDrawOrder);
	}

	static void LUA_NATIVE_GRAPHICS_DRAW_SPRITE(sol::stack_object pTextureDictionaryName, sol::stack_object pTextureName, float CentreX, float CentreY, float Width, float Height, float Rotation, int R, int G, int B, int A, bool DoStereorize)
	{
		GRAPHICS::DRAW_SPRITE(pTextureDictionaryName.is<const char*>() ? pTextureDictionaryName.as<const char*>() : nullptr, pTextureName.is<const char*>() ? pTextureName.as<const char*>() : nullptr, CentreX, CentreY, Width, Height, Rotation, R, G, B, A, DoStereorize);
	}

	static void LUA_NATIVE_GRAPHICS_ATTACH_TV_AUDIO_TO_ENTITY(Entity entity)
	{
		GRAPHICS::ATTACH_TV_AUDIO_TO_ENTITY(entity);
	}

	static void LUA_NATIVE_GRAPHICS_SET_TV_AUDIO_FRONTEND(bool frontend)
	{
		GRAPHICS::SET_TV_AUDIO_FRONTEND(frontend);
	}

	static std::tuple<int, int> LUA_NATIVE_GRAPHICS_GET_SCREEN_RESOLUTION(int X, int Y)
	{
		std::tuple<int, int> return_values;
		GRAPHICS::GET_SCREEN_RESOLUTION(&X, &Y);
		std::get<0>(return_values) = X;
		std::get<1>(return_values) = Y;

		return return_values;
	}

	static void LUA_NATIVE_GRAPHICS_0xA04EF43030593ABC_(Any p0, Any p1)
	{
		GRAPHICS::_0xA04EF43030593ABC(p0, p1);
	}

	static void LUA_NATIVE_GRAPHICS_0xA21AF60C9F99CCC5_()
	{
		GRAPHICS::_0xA21AF60C9F99CCC5();
	}

	static Any LUA_NATIVE_GRAPHICS_0xC28F62AC9774FC1B_()
	{
		auto retval = GRAPHICS::_0xC28F62AC9774FC1B();
		return retval;
	}

	static void LUA_NATIVE_GRAPHICS_0xEB48CE48EEC41FD4_(Any p0)
	{
		GRAPHICS::_0xEB48CE48EEC41FD4(p0);
	}

	static std::tuple<bool, float, float> LUA_NATIVE_GRAPHICS_GET_SCREEN_COORD_FROM_WORLD_COORD(float vWorldPosX, float vWorldPosY, float vWorldPosZ, float fXpos, float Ypos)
	{
		std::tuple<bool, float, float> return_values;
		std::get<0>(return_values) = (bool)GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vWorldPosX, vWorldPosY, vWorldPosZ, &fXpos, &Ypos);
		std::get<1>(return_values) = fXpos;
		std::get<2>(return_values) = Ypos;

		return return_values;
	}

	static bool LUA_NATIVE_GRAPHICS_IS_TEXTURE_IN_DICT_(Hash txdHash, Hash dict)
	{
		auto retval = (bool)GRAPHICS::_IS_TEXTURE_IN_DICT(txdHash, dict);
		return retval;
	}

	static void LUA_NATIVE_GRAPHICS_SET_ARTIFICIAL_LIGHTS_STATE(bool bState)
	{
		GRAPHICS::SET_ARTIFICIAL_LIGHTS_STATE(bState);
	}

	static void LUA_NATIVE_GRAPHICS_DISABLE_HDTEX_THIS_FRAME()
	{
		GRAPHICS::DISABLE_HDTEX_THIS_FRAME();
	}

	static void LUA_NATIVE_GRAPHICS_0x1A9F09AB458D49C6_(bool p0)
	{
		GRAPHICS::_0x1A9F09AB458D49C6(p0);
	}

	static int LUA_NATIVE_GRAPHICS_CREATE_TRACKED_POINT()
	{
		auto retval = GRAPHICS::CREATE_TRACKED_POINT();
		return retval;
	}

	static void LUA_NATIVE_GRAPHICS_SET_TRACKED_POINT_INFO(int queryIdx, float centerX, float centerY, float centerZ, float radius)
	{
		GRAPHICS::SET_TRACKED_POINT_INFO(queryIdx, centerX, centerY, centerZ, radius);
	}

	static bool LUA_NATIVE_GRAPHICS_IS_TRACKED_POINT_VISIBLE(int queryIdx)
	{
		auto retval = (bool)GRAPHICS::IS_TRACKED_POINT_VISIBLE(queryIdx);
		return retval;
	}

	static int LUA_NATIVE_GRAPHICS_0xDFE332A5DA6FE7C9_(int iTrackedPoint)
	{
		auto retval = GRAPHICS::_0xDFE332A5DA6FE7C9(iTrackedPoint);
		return retval;
	}

	static void LUA_NATIVE_GRAPHICS_DESTROY_TRACKED_POINT(int queryIdx)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(queryIdx);
	}

	static bool LUA_NATIVE_GRAPHICS_IS_TRACKED_POINT_VALID_(int point)
	{
		auto retval = (bool)GRAPHICS::_IS_TRACKED_POINT_VALID(point);
		return retval;
	}

	static int LUA_NATIVE_GRAPHICS_SET_GRASS_CULL_SPHERE(float centerX, float centerY, float centerZ, float radius, int p4)
	{
		auto retval = GRAPHICS::SET_GRASS_CULL_SPHERE(centerX, centerY, centerZ, radius, p4);
		return retval;
	}

	static void LUA_NATIVE_GRAPHICS_REMOVE_GRASS_CULL_SPHERE(int handle)
	{
		GRAPHICS::REMOVE_GRASS_CULL_SPHERE(handle);
	}

	static int LUA_NATIVE_GRAPHICS_ADD_VEG_MODIFIER_ZONE_(Volume volume, int p1, int flags, int p3)
	{
		auto retval = GRAPHICS::_ADD_VEG_MODIFIER_ZONE(volume, p1, flags, p3);
		return retval;
	}

	static int LUA_NATIVE_GRAPHICS_ADD_VEG_MODIFIER_SPHERE(float x, float y, float z, float radius, int modType, int flags, int p6)
	{
		auto retval = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(x, y, z, radius, modType, flags, p6);
		return retval;
	}

	static void LUA_NATIVE_GRAPHICS_REMOVE_VEG_MODIFIER_SPHERE(int vegModifierHandle, int p1)
	{
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(vegModifierHandle, p1);
	}

	static void LUA_NATIVE_GRAPHICS_ENABLE_STATIC_VEG_MODIFIER_(Hash p0)
	{
		GRAPHICS::_ENABLE_STATIC_VEG_MODIFIER(p0);
	}

	static void LUA_NATIVE_GRAPHICS_DISABLE_STATIC_VEG_MODIFIER_(Hash p0)
	{
		GRAPHICS::_DISABLE_STATIC_VEG_MODIFIER(p0);
	}

	static bool LUA_NATIVE_GRAPHICS_IS_STATIC_VEG_MODIFIER_ENABLED_(Hash p0)
	{
		auto retval = (bool)GRAPHICS::_IS_STATIC_VEG_MODIFIER_ENABLED(p0);
		return retval;
	}

	static void LUA_NATIVE_GRAPHICS_0xEC3F7F24EEEB3BA3_()
	{
		GRAPHICS::_0xEC3F7F24EEEB3BA3();
	}

	static void LUA_NATIVE_GRAPHICS_0x9F158A49B0D84C3C_(Any p0)
	{
		GRAPHICS::_0x9F158A49B0D84C3C(p0);
	}

	static void LUA_NATIVE_GRAPHICS_0x910E260AEAD855DE_()
	{
		GRAPHICS::_0x910E260AEAD855DE();
	}

	static bool LUA_NATIVE_GRAPHICS_CREATE_SWATCH_TEXTURE_DICT_(int slots)
	{
		auto retval = (bool)GRAPHICS::_CREATE_SWATCH_TEXTURE_DICT(slots);
		return retval;
	}

	static void LUA_NATIVE_GRAPHICS_DESTROY_SWATCH_TEXTURE_DICT_()
	{
		GRAPHICS::_DESTROY_SWATCH_TEXTURE_DICT();
	}

	static void LUA_NATIVE_GRAPHICS_GENERATE_SWATCH_TEXTURE_DIRECTLY_(int slot, Any p1)
	{
		GRAPHICS::_GENERATE_SWATCH_TEXTURE_DIRECTLY(slot, p1);
	}

	static void LUA_NATIVE_GRAPHICS_GENERATE_SWATCH_TEXTURE_(int slotId, Hash componentHash, int metapedType, bool p3)
	{
		GRAPHICS::_GENERATE_SWATCH_TEXTURE(slotId, componentHash, metapedType, p3);
	}

	static void LUA_NATIVE_GRAPHICS_CASCADE_SHADOWS_SET_CASCADE_BOUNDS(int cascadeIndex, bool bEnabled, float x, float y, float z, float radiusScale, bool interpolateToDisabled, float interpolationTime)
	{
		GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS(cascadeIndex, bEnabled, x, y, z, radiusScale, interpolateToDisabled, interpolationTime);
	}

	static void LUA_NATIVE_GRAPHICS_CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(bool scale)
	{
		GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(scale);
	}

	static void LUA_NATIVE_GRAPHICS_CASCADE_SHADOWS_SET_SHADOW_SAMPLE_TYPE(sol::stack_object typeStr)
	{
		GRAPHICS::CASCADE_SHADOWS_SET_SHADOW_SAMPLE_TYPE(typeStr.is<const char*>() ? typeStr.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_GRAPHICS_CASCADE_SHADOWS_CLEAR_SHADOW_SAMPLE_TYPE()
	{
		GRAPHICS::CASCADE_SHADOWS_CLEAR_SHADOW_SAMPLE_TYPE();
	}

	static void LUA_NATIVE_GRAPHICS_0x503941F65DBA24EC_(Any p0)
	{
		GRAPHICS::_0x503941F65DBA24EC(p0);
	}

	static void LUA_NATIVE_GRAPHICS_0x815653A42C5ABE76_()
	{
		GRAPHICS::_0x815653A42C5ABE76();
	}

	static void LUA_NATIVE_GRAPHICS_0xFF8018C778349234_(Any p0)
	{
		GRAPHICS::_0xFF8018C778349234(p0);
	}

	static void LUA_NATIVE_GRAPHICS_RESET_ADAPTATION(int numFrames)
	{
		GRAPHICS::RESET_ADAPTATION(numFrames);
	}

	static void LUA_NATIVE_GRAPHICS_TOGGLE_PAUSED_RENDERPHASES(bool on)
	{
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(on);
	}

	static bool LUA_NATIVE_GRAPHICS_GET_TOGGLE_PAUSED_RENDERPHASES_STATUS()
	{
		auto retval = (bool)GRAPHICS::GET_TOGGLE_PAUSED_RENDERPHASES_STATUS();
		return retval;
	}

	static void LUA_NATIVE_GRAPHICS_RESET_PAUSED_RENDERPHASES()
	{
		GRAPHICS::RESET_PAUSED_RENDERPHASES();
	}

	static void LUA_NATIVE_GRAPHICS_SET_HIDOF_OVERRIDE(bool enableOverride, bool enableDOF, float dofNearStart, float dofNearEnd, float dofFarStart, float dofFarEnd)
	{
		GRAPHICS::SET_HIDOF_OVERRIDE(enableOverride, enableDOF, dofNearStart, dofNearEnd, dofFarStart, dofFarEnd);
	}

	static void LUA_NATIVE_GRAPHICS_0x21F00E08CBB5F37B_(sol::stack_object component)
	{
		GRAPHICS::_0x21F00E08CBB5F37B(component.is<const char*>() ? component.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_GRAPHICS_0x5AC6E0FA028369DE_()
	{
		GRAPHICS::_0x5AC6E0FA028369DE();
	}

	static bool LUA_NATIVE_GRAPHICS_0xEC3D8C228FE553D7_(bool p0)
	{
		auto retval = (bool)GRAPHICS::_0xEC3D8C228FE553D7(p0);
		return retval;
	}

	static void LUA_NATIVE_GRAPHICS_0xF5793BB386E1FF9C_(Any p0)
	{
		GRAPHICS::_0xF5793BB386E1FF9C(p0);
	}

	static void LUA_NATIVE_GRAPHICS_0x5CD6A2CCE5087161_(Any p0)
	{
		GRAPHICS::_0x5CD6A2CCE5087161(p0);
	}

	static void LUA_NATIVE_GRAPHICS_0xC8D0611D9A0CF5D3_(Any p0)
	{
		GRAPHICS::_0xC8D0611D9A0CF5D3(p0);
	}

	static float LUA_NATIVE_GRAPHICS_GET_PHOTO_MODE_EXPOSURE_()
	{
		auto retval = GRAPHICS::_GET_PHOTO_MODE_EXPOSURE();
		return retval;
	}

	static void LUA_NATIVE_GRAPHICS_0x62B9F9A1272AED80_(Any p0)
	{
		GRAPHICS::_0x62B9F9A1272AED80(p0);
	}

	static float LUA_NATIVE_GRAPHICS_GET_PHOTO_MODE_CONTRAST_()
	{
		auto retval = GRAPHICS::_GET_PHOTO_MODE_CONTRAST();
		return retval;
	}

	static void LUA_NATIVE_GRAPHICS_0x9229ED770975BD9E_()
	{
		GRAPHICS::_0x9229ED770975BD9E();
	}

	static bool LUA_NATIVE_GRAPHICS_START_PARTICLE_FX_NON_LOOPED_AT_COORD(sol::stack_object fxName, float vecPositionX, float vecPositionY, float vecPositionZ, float vecRotationX, float vecRotationY, float vecRotationZ, float scale, bool invertAxisX, bool invertAxisY, bool invertAxisZ)
	{
		auto retval = (bool)GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD(fxName.is<const char*>() ? fxName.as<const char*>() : nullptr, vecPositionX, vecPositionY, vecPositionZ, vecRotationX, vecRotationY, vecRotationZ, scale, invertAxisX, invertAxisY, invertAxisZ);
		return retval;
	}

	static bool LUA_NATIVE_GRAPHICS_START_NETWORKED_PARTICLE_FX_NON_LOOPED_AT_COORD(sol::stack_object fxName, float vecPositionX, float vecPositionY, float vecPositionZ, float vecRotationX, float vecRotationY, float vecRotationZ, float scale, bool invertAxisX, bool invertAxisY, bool invertAxisZ)
	{
		auto retval = (bool)GRAPHICS::START_NETWORKED_PARTICLE_FX_NON_LOOPED_AT_COORD(fxName.is<const char*>() ? fxName.as<const char*>() : nullptr, vecPositionX, vecPositionY, vecPositionZ, vecRotationX, vecRotationY, vecRotationZ, scale, invertAxisX, invertAxisY, invertAxisZ);
		return retval;
	}

	static bool LUA_NATIVE_GRAPHICS_START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE(sol::stack_object fxName, Ped pedIndex, float vecPositionX, float vecPositionY, float vecPositionZ, float vecRotationX, float vecRotationY, float vecRotationZ, int boneTag, float scale, bool invertAxisX, bool invertAxisY, bool invertAxisZ)
	{
		auto retval = (bool)GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE(fxName.is<const char*>() ? fxName.as<const char*>() : nullptr, pedIndex, vecPositionX, vecPositionY, vecPositionZ, vecRotationX, vecRotationY, vecRotationZ, boneTag, scale, invertAxisX, invertAxisY, invertAxisZ);
		return retval;
	}

	static bool LUA_NATIVE_GRAPHICS_START_PARTICLE_FX_NON_LOOPED_ON_ENTITY(sol::stack_object fxName, Entity entityIndex, float vecPositionX, float vecPositionY, float vecPositionZ, float vecRotationX, float vecRotationY, float vecRotationZ, float scale, bool invertAxisX, bool invertAxisY, bool invertAxisZ)
	{
		auto retval = (bool)GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY(fxName.is<const char*>() ? fxName.as<const char*>() : nullptr, entityIndex, vecPositionX, vecPositionY, vecPositionZ, vecRotationX, vecRotationY, vecRotationZ, scale, invertAxisX, invertAxisY, invertAxisZ);
		return retval;
	}

	static bool LUA_NATIVE_GRAPHICS_START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_ENTITY(sol::stack_object fxName, Entity entityIndex, float vecPositionX, float vecPositionY, float vecPositionZ, float vecRotationX, float vecRotationY, float vecRotationZ, float scale, bool invertAxisX, bool invertAxisY, bool invertAxisZ)
	{
		auto retval = (bool)GRAPHICS::START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_ENTITY(fxName.is<const char*>() ? fxName.as<const char*>() : nullptr, entityIndex, vecPositionX, vecPositionY, vecPositionZ, vecRotationX, vecRotationY, vecRotationZ, scale, invertAxisX, invertAxisY, invertAxisZ);
		return retval;
	}

	static bool LUA_NATIVE_GRAPHICS_START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE_2_(sol::stack_object effectName, Ped ped, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, int boneIndex, float scale, bool axisX, bool axisY, bool axisZ)
	{
		auto retval = (bool)GRAPHICS::_START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE_2(effectName.is<const char*>() ? effectName.as<const char*>() : nullptr, ped, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, boneIndex, scale, axisX, axisY, axisZ);
		return retval;
	}

	static void LUA_NATIVE_GRAPHICS_SET_PARTICLE_FX_NON_LOOPED_COLOUR(float colR, float colG, float colB)
	{
		GRAPHICS::SET_PARTICLE_FX_NON_LOOPED_COLOUR(colR, colG, colB);
	}

	static void LUA_NATIVE_GRAPHICS_SET_PARTICLE_FX_NON_LOOPED_ALPHA(float colA)
	{
		GRAPHICS::SET_PARTICLE_FX_NON_LOOPED_ALPHA(colA);
	}

	static void LUA_NATIVE_GRAPHICS_SET_PARTICLE_FX_NON_LOOPED_EMITTER_SCALE_(float p0, float p1, float p2)
	{
		GRAPHICS::_SET_PARTICLE_FX_NON_LOOPED_EMITTER_SCALE(p0, p1, p2);
	}

	static int LUA_NATIVE_GRAPHICS_START_PARTICLE_FX_LOOPED_AT_COORD(sol::stack_object fxName, float vecPositionX, float vecPositionY, float vecPositionZ, float vecRotationX, float vecRotationY, float vecRotationZ, float scale, bool invertAxisX, bool invertAxisY, bool invertAxisZ, bool localOnly)
	{
		auto retval = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD(fxName.is<const char*>() ? fxName.as<const char*>() : nullptr, vecPositionX, vecPositionY, vecPositionZ, vecRotationX, vecRotationY, vecRotationZ, scale, invertAxisX, invertAxisY, invertAxisZ, localOnly);
		return retval;
	}

	static int LUA_NATIVE_GRAPHICS_START_PARTICLE_FX_LOOPED_ON_PED_BONE(sol::stack_object fxName, Ped pedIndex, float vecPositionX, float vecPositionY, float vecPositionZ, float vecRotationX, float vecRotationY, float vecRotationZ, int boneTag, float scale, bool invertAxisX, bool invertAxisY, bool invertAxisZ)
	{
		auto retval = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_PED_BONE(fxName.is<const char*>() ? fxName.as<const char*>() : nullptr, pedIndex, vecPositionX, vecPositionY, vecPositionZ, vecRotationX, vecRotationY, vecRotationZ, boneTag, scale, invertAxisX, invertAxisY, invertAxisZ);
		return retval;
	}

	static int LUA_NATIVE_GRAPHICS_START_PARTICLE_FX_LOOPED_ON_ENTITY(sol::stack_object fxName, Entity entityIndex, float vecPositionX, float vecPositionY, float vecPositionZ, float vecRotationX, float vecRotationY, float vecRotationZ, float scale, bool invertAxisX, bool invertAxisY, bool invertAxisZ)
	{
		auto retval = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY(fxName.is<const char*>() ? fxName.as<const char*>() : nullptr, entityIndex, vecPositionX, vecPositionY, vecPositionZ, vecRotationX, vecRotationY, vecRotationZ, scale, invertAxisX, invertAxisY, invertAxisZ);
		return retval;
	}

	static int LUA_NATIVE_GRAPHICS_START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(sol::stack_object fxName, Entity entityIndex, float vecPositionX, float vecPositionY, float vecPositionZ, float vecRotationX, float vecRotationY, float vecRotationZ, int boneIndex, float scale, bool invertAxisX, bool invertAxisY, bool invertAxisZ)
	{
		auto retval = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(fxName.is<const char*>() ? fxName.as<const char*>() : nullptr, entityIndex, vecPositionX, vecPositionY, vecPositionZ, vecRotationX, vecRotationY, vecRotationZ, boneIndex, scale, invertAxisX, invertAxisY, invertAxisZ);
		return retval;
	}

	static int LUA_NATIVE_GRAPHICS_START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY(sol::stack_object fxName, Entity entityIndex, float vecPositionX, float vecPositionY, float vecPositionZ, float vecRotationX, float vecRotationY, float vecRotationZ, float scale, bool invertAxisX, bool invertAxisY, bool invertAxisZ)
	{
		auto retval = GRAPHICS::START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY(fxName.is<const char*>() ? fxName.as<const char*>() : nullptr, entityIndex, vecPositionX, vecPositionY, vecPositionZ, vecRotationX, vecRotationY, vecRotationZ, scale, invertAxisX, invertAxisY, invertAxisZ);
		return retval;
	}

	static int LUA_NATIVE_GRAPHICS_START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(sol::stack_object fxName, Entity entityIndex, float vecPositionX, float vecPositionY, float vecPositionZ, float vecRotationX, float vecRotationY, float vecRotationZ, int boneIndex, float scale, bool invertAxisX, bool invertAxisY, bool invertAxisZ)
	{
		auto retval = GRAPHICS::START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(fxName.is<const char*>() ? fxName.as<const char*>() : nullptr, entityIndex, vecPositionX, vecPositionY, vecPositionZ, vecRotationX, vecRotationY, vecRotationZ, boneIndex, scale, invertAxisX, invertAxisY, invertAxisZ);
		return retval;
	}

	static void LUA_NATIVE_GRAPHICS_STOP_PARTICLE_FX_LOOPED(int ptfxId, bool localOnly)
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(ptfxId, localOnly);
	}

	static bool LUA_NATIVE_GRAPHICS_DOES_PARTICLE_FX_LOOPED_EXIST(int ptfxId)
	{
		auto retval = (bool)GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(ptfxId);
		return retval;
	}

	static void LUA_NATIVE_GRAPHICS_SET_PARTICLE_FX_LOOPED_OFFSETS(int ptfxId, float positionX, float positionY, float positionZ, float vecRotationX, float vecRotationY, float vecRotationZ)
	{
		GRAPHICS::SET_PARTICLE_FX_LOOPED_OFFSETS(ptfxId, positionX, positionY, positionZ, vecRotationX, vecRotationY, vecRotationZ);
	}

	static void LUA_NATIVE_GRAPHICS_SET_PARTICLE_FX_LOOPED_EVOLUTION(int ptfxId, sol::stack_object evoName, float evoVal, bool localOnly)
	{
		GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(ptfxId, evoName.is<const char*>() ? evoName.as<const char*>() : nullptr, evoVal, localOnly);
	}

	static void LUA_NATIVE_GRAPHICS_SET_PARTICLE_FX_LOOPED_COLOUR(int ptfxId, float colR, float colG, float colB, bool localOnly)
	{
		GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(ptfxId, colR, colG, colB, localOnly);
	}

	static void LUA_NATIVE_GRAPHICS_SET_PARTICLE_FX_LOOPED_ALPHA(int ptfxId, float colA)
	{
		GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(ptfxId, colA);
	}

	static void LUA_NATIVE_GRAPHICS_SET_PARTICLE_FX_LOOPED_SCALE(int ptfxId, float scale)
	{
		GRAPHICS::SET_PARTICLE_FX_LOOPED_SCALE(ptfxId, scale);
	}

	static void LUA_NATIVE_GRAPHICS_SET_PARTICLE_FX_LOOPED_FAR_CLIP_DIST(int ptfxId, float farClipDist)
	{
		GRAPHICS::SET_PARTICLE_FX_LOOPED_FAR_CLIP_DIST(ptfxId, farClipDist);
	}

	static void LUA_NATIVE_GRAPHICS_SET_PARTICLE_FX_LOOPED_UPDATE_DISTANT_SMOKE_(int ptfxHandle, float scalar)
	{
		GRAPHICS::_SET_PARTICLE_FX_LOOPED_UPDATE_DISTANT_SMOKE(ptfxHandle, scalar);
	}

	static void LUA_NATIVE_GRAPHICS_REMOVE_PARTICLE_FX(int ptfxId, bool localOnly)
	{
		GRAPHICS::REMOVE_PARTICLE_FX(ptfxId, localOnly);
	}

	static void LUA_NATIVE_GRAPHICS_REMOVE_PARTICLE_FX_FROM_ENTITY(Entity entityIndex)
	{
		GRAPHICS::REMOVE_PARTICLE_FX_FROM_ENTITY(entityIndex);
	}

	static void LUA_NATIVE_GRAPHICS_REMOVE_PARTICLE_FX_IN_RANGE(float posX, float posY, float posZ, float range)
	{
		GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(posX, posY, posZ, range);
	}

	static void LUA_NATIVE_GRAPHICS_USE_PARTICLE_FX_ASSET(sol::stack_object ptFxAssetName)
	{
		GRAPHICS::USE_PARTICLE_FX_ASSET(ptFxAssetName.is<const char*>() ? ptFxAssetName.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_GRAPHICS_SET_PARTICLE_FX_OVERRIDE(sol::stack_object ptFxToOverride, sol::stack_object ptFxToUseInstead)
	{
		GRAPHICS::SET_PARTICLE_FX_OVERRIDE(ptFxToOverride.is<const char*>() ? ptFxToOverride.as<const char*>() : nullptr, ptFxToUseInstead.is<const char*>() ? ptFxToUseInstead.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_GRAPHICS_RESET_PARTICLE_FX_OVERRIDE(sol::stack_object ptFxToOverride)
	{
		GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(ptFxToOverride.is<const char*>() ? ptFxToOverride.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_GRAPHICS_0x4FB67D172C4476F3_(Entity entity, sol::stack_object p1, sol::stack_object p2, float p3)
	{
		GRAPHICS::_0x4FB67D172C4476F3(entity, p1.is<const char*>() ? p1.as<const char*>() : nullptr, p2.is<const char*>() ? p2.as<const char*>() : nullptr, p3);
	}

	static void LUA_NATIVE_GRAPHICS_SET_PARTICLE_FX_AMBIENT_COLOUR(Entity entity, sol::stack_object p1, float r, float g, float b)
	{
		GRAPHICS::SET_PARTICLE_FX_AMBIENT_COLOUR(entity, p1.is<const char*>() ? p1.as<const char*>() : nullptr, r, g, b);
	}

	static void LUA_NATIVE_GRAPHICS_0xD1472AFF30C103D6_(float p0)
	{
		GRAPHICS::_0xD1472AFF30C103D6(p0);
	}

	static void LUA_NATIVE_GRAPHICS_SET_PARTICLE_FX_BULLET_IMPACT_SCALE(float scale)
	{
		GRAPHICS::SET_PARTICLE_FX_BULLET_IMPACT_SCALE(scale);
	}

	static void LUA_NATIVE_GRAPHICS_SET_PARTICLE_FX_BULLET_IMPACT_LODRANGE_SCALE(float scale)
	{
		GRAPHICS::SET_PARTICLE_FX_BULLET_IMPACT_LODRANGE_SCALE(scale);
	}

	static void LUA_NATIVE_GRAPHICS_SET_SNIPER_GLINTS_ENABLED_(bool enabled)
	{
		GRAPHICS::_SET_SNIPER_GLINTS_ENABLED(enabled);
	}

	static void LUA_NATIVE_GRAPHICS_SET_PARTICLE_FX_FOOT_LODRANGE_SCALE(float scale)
	{
		GRAPHICS::SET_PARTICLE_FX_FOOT_LODRANGE_SCALE(scale);
	}

	static void LUA_NATIVE_GRAPHICS_0x4046493D2EEACA0E_()
	{
		GRAPHICS::_0x4046493D2EEACA0E();
	}

	static void LUA_NATIVE_GRAPHICS_SET_PICKUP_LIGHT(Object object, bool toggle)
	{
		GRAPHICS::SET_PICKUP_LIGHT(object, toggle);
	}

	static void LUA_NATIVE_GRAPHICS_BLOCK_PICKUP_OBJECT_LIGHT_(Object pickupObject, bool toggle)
	{
		GRAPHICS::_BLOCK_PICKUP_OBJECT_LIGHT(pickupObject, toggle);
	}

	static void LUA_NATIVE_GRAPHICS_BLOCK_PICKUP_PLACEMENT_LIGHT(Pickup pickup, bool toggle)
	{
		GRAPHICS::BLOCK_PICKUP_PLACEMENT_LIGHT(pickup, toggle);
	}

	static void LUA_NATIVE_GRAPHICS_ALLOW_PICKUP_LIGHT_SYNC(Object pickupObject, bool allow)
	{
		GRAPHICS::ALLOW_PICKUP_LIGHT_SYNC(pickupObject, allow);
	}

	static void LUA_NATIVE_GRAPHICS_SET_PEARLESCENT_FX_ENABLED_(Object object, bool toggle)
	{
		GRAPHICS::_SET_PEARLESCENT_FX_ENABLED(object, toggle);
	}

	static void LUA_NATIVE_GRAPHICS_REMOVE_DECALS_IN_RANGE(float posX, float posY, float posZ, float range)
	{
		GRAPHICS::REMOVE_DECALS_IN_RANGE(posX, posY, posZ, range);
	}

	static void LUA_NATIVE_GRAPHICS_REMOVE_DECALS_FROM_OBJECT(Object ObjectIndex)
	{
		GRAPHICS::REMOVE_DECALS_FROM_OBJECT(ObjectIndex);
	}

	static int LUA_NATIVE_GRAPHICS_ADD_DECAL(Any p0, float posX, float posY, float posZ, float dirX, float dirY, float dirZ, float sideX, float sideY, float sideZ, Any p10, float width, float height, float colR, float colG, float colB, float colA, float life, bool isLongRange, bool isDynamic, bool useComplexColn, Any p21)
	{
		auto retval = GRAPHICS::ADD_DECAL(p0, posX, posY, posZ, dirX, dirY, dirZ, sideX, sideY, sideZ, p10, width, height, colR, colG, colB, colA, life, isLongRange, isDynamic, useComplexColn, p21);
		return retval;
	}

	static void LUA_NATIVE_GRAPHICS_ADD_BLOOD_POOL_(float x, float y, float z, bool unused)
	{
		GRAPHICS::_ADD_BLOOD_POOL(x, y, z, unused);
	}

	static void LUA_NATIVE_GRAPHICS_ADD_BLOOD_POOL_2_(float x, float y, float z, float p3, float size, float p5, bool permanent, float p7, bool p8)
	{
		GRAPHICS::_ADD_BLOOD_POOL_2(x, y, z, p3, size, p5, permanent, p7, p8);
	}

	static void LUA_NATIVE_GRAPHICS_ADD_BLOOD_POOLS_FOR_PED_(Ped ped)
	{
		GRAPHICS::_ADD_BLOOD_POOLS_FOR_PED(ped);
	}

	static void LUA_NATIVE_GRAPHICS_ADD_BLOOD_POOLS_FOR_PED_WITH_PARAMS_(Ped ped, float p1, float size, float p3)
	{
		GRAPHICS::_ADD_BLOOD_POOLS_FOR_PED_WITH_PARAMS(ped, p1, size, p3);
	}

	static void LUA_NATIVE_GRAPHICS_START_PETROL_TRAIL_DECALS(Any p0, float width)
	{
		GRAPHICS::START_PETROL_TRAIL_DECALS(p0, width);
	}

	static void LUA_NATIVE_GRAPHICS_ADD_PETROL_TRAIL_DECAL_INFO(float posX, float posY, float posZ, float alphaMult)
	{
		GRAPHICS::ADD_PETROL_TRAIL_DECAL_INFO(posX, posY, posZ, alphaMult);
	}

	static void LUA_NATIVE_GRAPHICS_END_PETROL_TRAIL_DECALS()
	{
		GRAPHICS::END_PETROL_TRAIL_DECALS();
	}

	static Any LUA_NATIVE_GRAPHICS_0xE63D68F455CA0B47_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		auto retval = GRAPHICS::_0xE63D68F455CA0B47(p0, p1, p2, p3, p4, p5, p6);
		return retval;
	}

	static void LUA_NATIVE_GRAPHICS_REMOVE_DECAL(int decalId)
	{
		GRAPHICS::REMOVE_DECAL(decalId);
	}

	static bool LUA_NATIVE_GRAPHICS_IS_DECAL_ALIVE(int decalId)
	{
		auto retval = (bool)GRAPHICS::IS_DECAL_ALIVE(decalId);
		return retval;
	}

	static void LUA_NATIVE_GRAPHICS_SET_DISABLE_PETROL_DECALS_IGNITING_THIS_FRAME()
	{
		GRAPHICS::SET_DISABLE_PETROL_DECALS_IGNITING_THIS_FRAME();
	}

	static void LUA_NATIVE_GRAPHICS_0xB032C085D9A03907_()
	{
		GRAPHICS::_0xB032C085D9A03907();
	}

	static void LUA_NATIVE_GRAPHICS_0xFB680A9B33D0EDBE_(bool p0)
	{
		GRAPHICS::_0xFB680A9B33D0EDBE(p0);
	}

	static void LUA_NATIVE_GRAPHICS_0x41F88A85A579A61D_(float p0)
	{
		GRAPHICS::_0x41F88A85A579A61D(p0);
	}

	static void LUA_NATIVE_GRAPHICS_BLOOD_TRAIL_FOR_WAYPOINT_(sol::stack_object waypointRecording, float p1)
	{
		GRAPHICS::_BLOOD_TRAIL_FOR_WAYPOINT(waypointRecording.is<const char*>() ? waypointRecording.as<const char*>() : nullptr, p1);
	}

	static void LUA_NATIVE_GRAPHICS_ADD_BLOOD_TRAIL_POINT_(float x, float y, float z)
	{
		GRAPHICS::_ADD_BLOOD_TRAIL_POINT(x, y, z);
	}

	static void LUA_NATIVE_GRAPHICS_0x812C1563185C6FB2_()
	{
		GRAPHICS::_0x812C1563185C6FB2();
	}

	static void LUA_NATIVE_GRAPHICS_0x4BD66B4E3427689B_(sol::stack_object p0)
	{
		GRAPHICS::_0x4BD66B4E3427689B(p0.is<const char*>() ? p0.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_GRAPHICS_ADD_BLOOD_TRAIL_SPLAT_(float x, float y, float z)
	{
		GRAPHICS::_ADD_BLOOD_TRAIL_SPLAT(x, y, z);
	}

	static void LUA_NATIVE_GRAPHICS_0xF2F543D48F319A3A_()
	{
		GRAPHICS::_0xF2F543D48F319A3A();
	}

	static void LUA_NATIVE_GRAPHICS_0x1460B644397453EB_()
	{
		GRAPHICS::_0x1460B644397453EB();
	}

	static void LUA_NATIVE_GRAPHICS_DISABLE_FAR_ARTIFICIAL_LIGHTS_(bool disable)
	{
		GRAPHICS::_DISABLE_FAR_ARTIFICIAL_LIGHTS(disable);
	}

	static void LUA_NATIVE_GRAPHICS_0x453D16D41FC51D3E_(bool p0)
	{
		GRAPHICS::_0x453D16D41FC51D3E(p0);
	}

	static void LUA_NATIVE_GRAPHICS_0xC06F2F45A73EABCD_(Entity entity)
	{
		GRAPHICS::_0xC06F2F45A73EABCD(entity);
	}

	static void LUA_NATIVE_GRAPHICS_SET_TIMECYCLE_MODIFIER(sol::stack_object ModifierName)
	{
		GRAPHICS::SET_TIMECYCLE_MODIFIER(ModifierName.is<const char*>() ? ModifierName.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_GRAPHICS_SET_TIMECYCLE_MODIFIER_STRENGTH(float strength)
	{
		GRAPHICS::SET_TIMECYCLE_MODIFIER_STRENGTH(strength);
	}

	static void LUA_NATIVE_GRAPHICS_SET_TRANSITION_TIMECYCLE_MODIFIER(sol::stack_object ModifierName, float time)
	{
		GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER(ModifierName.is<const char*>() ? ModifierName.as<const char*>() : nullptr, time);
	}

	static void LUA_NATIVE_GRAPHICS_SET_TRANSITION_OUT_OF_TIMECYCLE_MODIFIER(float time)
	{
		GRAPHICS::SET_TRANSITION_OUT_OF_TIMECYCLE_MODIFIER(time);
	}

	static void LUA_NATIVE_GRAPHICS_CLEAR_TIMECYCLE_MODIFIER()
	{
		GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	}

	static int LUA_NATIVE_GRAPHICS_GET_TIMECYCLE_MODIFIER_INDEX()
	{
		auto retval = GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX();
		return retval;
	}

	static int LUA_NATIVE_GRAPHICS_GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX()
	{
		auto retval = GRAPHICS::GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX();
		return retval;
	}

	static void LUA_NATIVE_GRAPHICS_0x67B0778C62E74423_(Any p0)
	{
		GRAPHICS::_0x67B0778C62E74423(p0);
	}

	static void LUA_NATIVE_GRAPHICS_0x6C03118E9E5C1A14_(Any p0)
	{
		GRAPHICS::_0x6C03118E9E5C1A14(p0);
	}

	static float LUA_NATIVE_GRAPHICS_GET_MODIFIED_VISIBILITY_DISTANCE_()
	{
		auto retval = GRAPHICS::_GET_MODIFIED_VISIBILITY_DISTANCE();
		return retval;
	}

	static void LUA_NATIVE_GRAPHICS_ENABLE_MOON_CYCLE_OVERRIDE(float value)
	{
		GRAPHICS::ENABLE_MOON_CYCLE_OVERRIDE(value);
	}

	static void LUA_NATIVE_GRAPHICS_SET_TV_CHANNEL(int iChannel)
	{
		GRAPHICS::SET_TV_CHANNEL(iChannel);
	}

	static int LUA_NATIVE_GRAPHICS_GET_TV_CHANNEL()
	{
		auto retval = GRAPHICS::GET_TV_CHANNEL();
		return retval;
	}

	static void LUA_NATIVE_GRAPHICS_SET_TV_VOLUME(float vol)
	{
		GRAPHICS::SET_TV_VOLUME(vol);
	}

	static void LUA_NATIVE_GRAPHICS_DRAW_TV_CHANNEL(float CentreX, float CentreY, float Width, float Height, float Rotation, int R, int G, int B, int A)
	{
		GRAPHICS::DRAW_TV_CHANNEL(CentreX, CentreY, Width, Height, Rotation, R, G, B, A);
	}

	static void LUA_NATIVE_GRAPHICS_SET_TV_CHANNEL_PLAYLIST(int iChannel, sol::stack_object playlistName, bool startFromNow)
	{
		GRAPHICS::SET_TV_CHANNEL_PLAYLIST(iChannel, playlistName.is<const char*>() ? playlistName.as<const char*>() : nullptr, startFromNow);
	}

	static bool LUA_NATIVE_GRAPHICS_IS_TVSHOW_CURRENTLY_PLAYING(Hash nameHash)
	{
		auto retval = (bool)GRAPHICS::IS_TVSHOW_CURRENTLY_PLAYING(nameHash);
		return retval;
	}

	static Any LUA_NATIVE_GRAPHICS_0x5C674EB487891F6B_()
	{
		auto retval = GRAPHICS::_0x5C674EB487891F6B();
		return retval;
	}

	static void LUA_NATIVE_GRAPHICS_ENABLE_MOVIE_SUBTITLES(bool bOnOff)
	{
		GRAPHICS::ENABLE_MOVIE_SUBTITLES(bOnOff);
	}

	static void LUA_NATIVE_GRAPHICS_0x32DE2BFFDA43E62A_()
	{
		GRAPHICS::_0x32DE2BFFDA43E62A();
	}

	static void LUA_NATIVE_GRAPHICS_0xD543487A1F12828F_(Any p0, Any p1, Any p2, Any p3)
	{
		GRAPHICS::_0xD543487A1F12828F(p0, p1, p2, p3);
	}

	static void LUA_NATIVE_GRAPHICS_0xD9BC98B55BCFAA9B_(Any p0)
	{
		GRAPHICS::_0xD9BC98B55BCFAA9B(p0);
	}

	static void LUA_NATIVE_GRAPHICS_0x48FE0DB54045B975_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		GRAPHICS::_0x48FE0DB54045B975(p0, p1, p2, p3, p4, p5, p6);
	}

	static void LUA_NATIVE_GRAPHICS_0x735762E8D7573E42_(Any p0, Any p1, Any p2)
	{
		GRAPHICS::_0x735762E8D7573E42(p0, p1, p2);
	}

	static void LUA_NATIVE_GRAPHICS_0x981C7D863980FA51_()
	{
		GRAPHICS::_0x981C7D863980FA51();
	}

	static void LUA_NATIVE_GRAPHICS_ANIMPOSTFX_PRELOAD_POSTFX_(sol::stack_object effectName)
	{
		GRAPHICS::_ANIMPOSTFX_PRELOAD_POSTFX(effectName.is<const char*>() ? effectName.as<const char*>() : nullptr);
	}

	static bool LUA_NATIVE_GRAPHICS_ANIMPOSTFX_HAS_LOADED_(sol::stack_object effectName)
	{
		auto retval = (bool)GRAPHICS::_ANIMPOSTFX_HAS_LOADED(effectName.is<const char*>() ? effectName.as<const char*>() : nullptr);
		return retval;
	}

	static void LUA_NATIVE_GRAPHICS_ANIMPOSTFX_SET_TO_UNLOAD_(sol::stack_object effectName)
	{
		GRAPHICS::_ANIMPOSTFX_SET_TO_UNLOAD(effectName.is<const char*>() ? effectName.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_GRAPHICS_ANIMPOSTFX_PLAY(sol::stack_object effectName)
	{
		GRAPHICS::ANIMPOSTFX_PLAY(effectName.is<const char*>() ? effectName.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_GRAPHICS_ANIMPOSTFX_PLAY_TIMED_(sol::stack_object effectName, int duration)
	{
		GRAPHICS::_ANIMPOSTFX_PLAY_TIMED(effectName.is<const char*>() ? effectName.as<const char*>() : nullptr, duration);
	}

	static void LUA_NATIVE_GRAPHICS_ANIMPOSTFX_STOP(sol::stack_object effectName)
	{
		GRAPHICS::ANIMPOSTFX_STOP(effectName.is<const char*>() ? effectName.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_GRAPHICS_0x26DD2FB0A88CC412_(sol::stack_object effectName, sol::stack_object effectName2, Any p2, Any p3)
	{
		GRAPHICS::_0x26DD2FB0A88CC412(effectName.is<const char*>() ? effectName.as<const char*>() : nullptr, effectName2.is<const char*>() ? effectName2.as<const char*>() : nullptr, p2, p3);
	}

	static void LUA_NATIVE_GRAPHICS_ANIMPOSTFX_CLEAR_EFFECT_(sol::stack_object effectName)
	{
		GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(effectName.is<const char*>() ? effectName.as<const char*>() : nullptr);
	}

	static bool LUA_NATIVE_GRAPHICS_ANIMPOSTFX_IS_RUNNING(sol::stack_object effectName)
	{
		auto retval = (bool)GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName.is<const char*>() ? effectName.as<const char*>() : nullptr);
		return retval;
	}

	static bool LUA_NATIVE_GRAPHICS_ANIMPOSTFX_IS_TAG_PLAYING_(sol::stack_object effectName)
	{
		auto retval = (bool)GRAPHICS::_ANIMPOSTFX_IS_TAG_PLAYING(effectName.is<const char*>() ? effectName.as<const char*>() : nullptr);
		return retval;
	}

	static void LUA_NATIVE_GRAPHICS_ANIMPOSTFX_STOP_ALL()
	{
		GRAPHICS::ANIMPOSTFX_STOP_ALL();
	}

	static void LUA_NATIVE_GRAPHICS_ANIMPOSTFX_STOP_TAG_(sol::stack_object effectName)
	{
		GRAPHICS::_ANIMPOSTFX_STOP_TAG(effectName.is<const char*>() ? effectName.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_GRAPHICS_ANIMPOSTFX_SET_STRENGTH_(sol::stack_object effectName, float strength)
	{
		GRAPHICS::_ANIMPOSTFX_SET_STRENGTH(effectName.is<const char*>() ? effectName.as<const char*>() : nullptr, strength);
	}

	static void LUA_NATIVE_GRAPHICS_ANIMPOSTFX_SET_POTENCY_(sol::stack_object effectName, int p1, float potency)
	{
		GRAPHICS::_ANIMPOSTFX_SET_POTENCY(effectName.is<const char*>() ? effectName.as<const char*>() : nullptr, p1, potency);
	}

	static void LUA_NATIVE_GRAPHICS_ANIMPOSTFX_SET_POSTFX_COLOR_(sol::stack_object effectName, int p1, int red, int green, int blue, int alpha)
	{
		GRAPHICS::_ANIMPOSTFX_SET_POSTFX_COLOR(effectName.is<const char*>() ? effectName.as<const char*>() : nullptr, p1, red, green, blue, alpha);
	}

	static bool LUA_NATIVE_GRAPHICS_0xB958D97A0DFAA0C2_(sol::stack_object effectName)
	{
		auto retval = (bool)GRAPHICS::_0xB958D97A0DFAA0C2(effectName.is<const char*>() ? effectName.as<const char*>() : nullptr);
		return retval;
	}

	static void LUA_NATIVE_GRAPHICS_0xA201A3D0AC087C37_(sol::stack_object effectName)
	{
		GRAPHICS::_0xA201A3D0AC087C37(effectName.is<const char*>() ? effectName.as<const char*>() : nullptr);
	}

	static std::tuple<bool, bool> LUA_NATIVE_GRAPHICS_0xFBF161FCFEC8589E_(sol::stack_object effectName, int p1, bool p2, bool p3)
	{
		std::tuple<bool, bool> return_values;
		std::get<0>(return_values) = (bool)GRAPHICS::_0xFBF161FCFEC8589E(effectName.is<const char*>() ? effectName.as<const char*>() : nullptr, p1, p2, (BOOL*)&p3);
		std::get<1>(return_values) = p3;

		return return_values;
	}

	static Hash LUA_NATIVE_GRAPHICS_ANIMPOSTFX_GET_STACKHASH_(sol::stack_object effectName)
	{
		auto retval = GRAPHICS::_ANIMPOSTFX_GET_STACKHASH(effectName.is<const char*>() ? effectName.as<const char*>() : nullptr);
		return retval;
	}

	static void LUA_NATIVE_GRAPHICS_ANIMPOSTFX_PRELOAD_POSTFX_BY_STACKHASH_(Hash effectNameHash)
	{
		GRAPHICS::_ANIMPOSTFX_PRELOAD_POSTFX_BY_STACKHASH(effectNameHash);
	}

	static bool LUA_NATIVE_GRAPHICS_ANIMPOSTFX_IS_PRELOADING_BY_STACKHASH(Hash effectNameHash)
	{
		auto retval = (bool)GRAPHICS::ANIMPOSTFX_IS_PRELOADING_BY_STACKHASH(effectNameHash);
		return retval;
	}

	static void LUA_NATIVE_GRAPHICS_0x38D9D50F2085E9B3_(Hash effectNameHash)
	{
		GRAPHICS::_0x38D9D50F2085E9B3(effectNameHash);
	}

	static void LUA_NATIVE_GRAPHICS_ANIMPOSTFX_PLAY_TAG_(Hash effectNameHash)
	{
		GRAPHICS::_ANIMPOSTFX_PLAY_TAG(effectNameHash);
	}

	static void LUA_NATIVE_GRAPHICS_0xC76FC4C2FC5F4405_(Hash effectNameHash)
	{
		GRAPHICS::_0xC76FC4C2FC5F4405(effectNameHash);
	}

	static void LUA_NATIVE_GRAPHICS_ANIMPOSTFX_STOP_STACKHASH_POSTFX_(Hash effectNameHash)
	{
		GRAPHICS::_ANIMPOSTFX_STOP_STACKHASH_POSTFX(effectNameHash);
	}

	static bool LUA_NATIVE_GRAPHICS_ANIMPOSTFX_IS_STACKHASH_PLAYING_(Hash effectNameHash)
	{
		auto retval = (bool)GRAPHICS::_ANIMPOSTFX_IS_STACKHASH_PLAYING(effectNameHash);
		return retval;
	}

	static bool LUA_NATIVE_GRAPHICS_0xE75CDDEBF618C8FF_(Hash effectNameHash)
	{
		auto retval = (bool)GRAPHICS::_0xE75CDDEBF618C8FF(effectNameHash);
		return retval;
	}

	static void LUA_NATIVE_GRAPHICS_0x71845905BCCDE781_(Hash effectNameHash)
	{
		GRAPHICS::_0x71845905BCCDE781(effectNameHash);
	}

	static std::tuple<bool, bool> LUA_NATIVE_GRAPHICS_ANIMPOSTFX_HAS_EVENT_TRIGGERED_BY_STACKHASH(Hash effectNameHash, int p1, bool p2, bool p3)
	{
		std::tuple<bool, bool> return_values;
		std::get<0>(return_values) = (bool)GRAPHICS::ANIMPOSTFX_HAS_EVENT_TRIGGERED_BY_STACKHASH(effectNameHash, p1, p2, (BOOL*)&p3);
		std::get<1>(return_values) = p3;

		return return_values;
	}

	static bool LUA_NATIVE_GRAPHICS_0xFF584F097C17FA8F_()
	{
		auto retval = (bool)GRAPHICS::_0xFF584F097C17FA8F();
		return retval;
	}

	static bool LUA_NATIVE_GRAPHICS_0x3DA7A10583A4BEC0_()
	{
		auto retval = (bool)GRAPHICS::_0x3DA7A10583A4BEC0();
		return retval;
	}

	static Any LUA_NATIVE_GRAPHICS_0xC37792A3F9C90771_()
	{
		auto retval = GRAPHICS::_0xC37792A3F9C90771();
		return retval;
	}

	static void LUA_NATIVE_GRAPHICS_0xA0F4D12D6042F6D5_(Any p0, Any p1)
	{
		GRAPHICS::_0xA0F4D12D6042F6D5(p0, p1);
	}

	static void LUA_NATIVE_GRAPHICS_0x8996FA6AD9FE4E90_(Any p0)
	{
		GRAPHICS::_0x8996FA6AD9FE4E90(p0);
	}

	static void LUA_NATIVE_GRAPHICS_SET_ENTITY_RENDER_GUARMA_SHIP_(Vehicle vehicle, bool toggle)
	{
		GRAPHICS::_SET_ENTITY_RENDER_GUARMA_SHIP(vehicle, toggle);
	}

	static bool LUA_NATIVE_GRAPHICS_PEDSHOT_IS_AVAILABLE()
	{
		auto retval = (bool)GRAPHICS::PEDSHOT_IS_AVAILABLE();
		return retval;
	}

	static bool LUA_NATIVE_GRAPHICS_0xFD05B1DDE83749FA_(sol::stack_object p0)
	{
		auto retval = (bool)GRAPHICS::_0xFD05B1DDE83749FA(p0.is<const char*>() ? p0.as<const char*>() : nullptr);
		return retval;
	}

	static void LUA_NATIVE_GRAPHICS_PEDSHOT_FINISH_CLEANUP_DATA_()
	{
		GRAPHICS::_PEDSHOT_FINISH_CLEANUP_DATA();
	}

	static void LUA_NATIVE_GRAPHICS_PEDSHOT_PREVIOUS_PERSONA_PHOTO_DATA_CLEANUP_()
	{
		GRAPHICS::_PEDSHOT_PREVIOUS_PERSONA_PHOTO_DATA_CLEANUP();
	}

	static void LUA_NATIVE_GRAPHICS_PEDSHOT_INIT_CLEANUP_DATA_()
	{
		GRAPHICS::_PEDSHOT_INIT_CLEANUP_DATA();
	}

	static bool LUA_NATIVE_GRAPHICS_PEDSHOT_GENERATE_PERSONA_PHOTO_(sol::stack_object texture, Ped ped, int playerSlot)
	{
		auto retval = (bool)GRAPHICS::_PEDSHOT_GENERATE_PERSONA_PHOTO(texture.is<const char*>() ? texture.as<const char*>() : nullptr, ped, playerSlot);
		return retval;
	}

	static void LUA_NATIVE_GRAPHICS_PEDSHOT_SET_PERSONA_PHOTO_TYPE_(int personaPhotoLocalCacheType)
	{
		GRAPHICS::_PEDSHOT_SET_PERSONA_PHOTO_TYPE(personaPhotoLocalCacheType);
	}

	static void LUA_NATIVE_GRAPHICS_0xA1A86055792FB249_(int personaPhotoLocalCacheType)
	{
		GRAPHICS::_0xA1A86055792FB249(personaPhotoLocalCacheType);
	}

	static bool LUA_NATIVE_GRAPHICS_0x402E1A61D2587FCD_(Any p0, float x, float y, float z, float p4, float p5, float heading)
	{
		auto retval = (bool)GRAPHICS::_0x402E1A61D2587FCD(p0, x, y, z, p4, p5, heading);
		return retval;
	}

	static Any LUA_NATIVE_GRAPHICS_0x5C9C3A466B3296A8_(Any p0)
	{
		auto retval = GRAPHICS::_0x5C9C3A466B3296A8(p0);
		return retval;
	}

	static Any LUA_NATIVE_GRAPHICS_0xA15CCAB8AD038291_(Any p0, Any p1, Any p2, Any p3)
	{
		auto retval = GRAPHICS::_0xA15CCAB8AD038291(p0, p1, p2, p3);
		return retval;
	}

	static Any LUA_NATIVE_GRAPHICS_0x285438C26C732F9D_()
	{
		auto retval = GRAPHICS::_0x285438C26C732F9D();
		return retval;
	}

	static void LUA_NATIVE_GRAPHICS_SET_PROXY_INTERIOR_INDEX_ARTIFICIAL_LIGHTS_STATE_(int proxyInteriorIndex, bool state)
	{
		GRAPHICS::_SET_PROXY_INTERIOR_INDEX_ARTIFICIAL_LIGHTS_STATE(proxyInteriorIndex, state);
	}

	static bool LUA_NATIVE_GRAPHICS_IS_PROXY_INTERIOR_INDEX_ARTIFICIAL_LIGHTS_ENABLED_(int proxyInteriorIndex)
	{
		auto retval = (bool)GRAPHICS::_IS_PROXY_INTERIOR_INDEX_ARTIFICIAL_LIGHTS_ENABLED(proxyInteriorIndex);
		return retval;
	}

	static int LUA_NATIVE_GRAPHICS_GET_PROXY_INTERIOR_INDEX_(int interiorId)
	{
		auto retval = GRAPHICS::_GET_PROXY_INTERIOR_INDEX(interiorId);
		return retval;
	}

	static void LUA_NATIVE_GRAPHICS_0x9D1B0B5066205692_()
	{
		GRAPHICS::_0x9D1B0B5066205692();
	}

	static void LUA_NATIVE_GRAPHICS_0xC489FE31AC726512_(Any p0, Any p1)
	{
		GRAPHICS::_0xC489FE31AC726512(p0, p1);
	}

	static void LUA_NATIVE_GRAPHICS_SET_CLOUD_LAYER_(float x, float y, int p2)
	{
		GRAPHICS::_SET_CLOUD_LAYER(x, y, p2);
	}

	static void LUA_NATIVE_GRAPHICS_SET_CLOUD_NOISE_(float x, float y, float z)
	{
		GRAPHICS::_SET_CLOUD_NOISE(x, y, z);
	}

	static void LUA_NATIVE_GRAPHICS_SET_CLOUD_POSITION_(float x, float y, float z)
	{
		GRAPHICS::_SET_CLOUD_POSITION(x, y, z);
	}

	static void LUA_NATIVE_GRAPHICS_SET_CLOUD_HEIGHT_(float height)
	{
		GRAPHICS::_SET_CLOUD_HEIGHT(height);
	}

	static void LUA_NATIVE_GRAPHICS_0x085C5B61A0114F32_(Any p0, Any p1)
	{
		GRAPHICS::_0x085C5B61A0114F32(p0, p1);
	}

	static void LUA_NATIVE_GRAPHICS_0x1FF8731BE1DFC0C0_(Any p0, Any p1)
	{
		GRAPHICS::_0x1FF8731BE1DFC0C0(p0, p1);
	}

	static Any LUA_NATIVE_GRAPHICS_0xFC9B53C072F418E0_()
	{
		auto retval = GRAPHICS::_0xFC9B53C072F418E0();
		return retval;
	}

	static void LUA_NATIVE_GRAPHICS_0x94B261F1F35293E1_(Any p0)
	{
		GRAPHICS::_0x94B261F1F35293E1(p0);
	}

	static void LUA_NATIVE_GRAPHICS_ENABLE_ENTITYMASK()
	{
		GRAPHICS::ENABLE_ENTITYMASK();
	}

	static void LUA_NATIVE_GRAPHICS_DISABLE_ENTITYMASK()
	{
		GRAPHICS::DISABLE_ENTITYMASK();
	}

	static void LUA_NATIVE_GRAPHICS_ADD_ENTITY_TO_ENTITY_MASK_(Entity entity, int mask)
	{
		GRAPHICS::_ADD_ENTITY_TO_ENTITY_MASK(entity, mask);
	}

	static void LUA_NATIVE_GRAPHICS_ADD_ENTITY_TO_ENTITY_MASK_WITH_INTENSITY_(Entity entity, int mask, float intensity)
	{
		GRAPHICS::_ADD_ENTITY_TO_ENTITY_MASK_WITH_INTENSITY(entity, mask, intensity);
	}

	static void LUA_NATIVE_GRAPHICS_REMOVE_ENTITY_FROM_ENTITY_MASK_(Entity entity)
	{
		GRAPHICS::_REMOVE_ENTITY_FROM_ENTITY_MASK(entity);
	}

	static std::tuple<bool, float, float, float, float> LUA_NATIVE_GRAPHICS_GET_ENTITY_MASK_LAYERS_(Entity entity, float layer0, float layer1, float layer2, float layer3)
	{
		std::tuple<bool, float, float, float, float> return_values;
		std::get<0>(return_values) = (bool)GRAPHICS::_GET_ENTITY_MASK_LAYERS(entity, &layer0, &layer1, &layer2, &layer3);
		std::get<1>(return_values) = layer0;
		std::get<2>(return_values) = layer1;
		std::get<3>(return_values) = layer2;
		std::get<4>(return_values) = layer3;

		return return_values;
	}

	static std::tuple<float, float, float, float> LUA_NATIVE_GRAPHICS_SET_ENTITY_MASK_LAYERS_(Entity entity, float layer0, float layer1, float layer2, float layer3)
	{
		std::tuple<float, float, float, float> return_values;
		GRAPHICS::_SET_ENTITY_MASK_LAYERS(entity, &layer0, &layer1, &layer2, &layer3);
		std::get<0>(return_values) = layer0;
		std::get<1>(return_values) = layer1;
		std::get<2>(return_values) = layer2;
		std::get<3>(return_values) = layer3;

		return return_values;
	}

	static void LUA_NATIVE_GRAPHICS_SET_ENTITY_AURA_(float p0, float p1, float p2)
	{
		GRAPHICS::_SET_ENTITY_AURA(p0, p1, p2);
	}

	static void LUA_NATIVE_GRAPHICS_RESET_ENTITY_AURA_()
	{
		GRAPHICS::_RESET_ENTITY_AURA();
	}

	static void LUA_NATIVE_GRAPHICS_SET_SNOW_COVERAGE_TYPE_(int type)
	{
		GRAPHICS::_SET_SNOW_COVERAGE_TYPE(type);
	}

	static void LUA_NATIVE_GRAPHICS_0x519928DF02EB5101_(Any p0)
	{
		GRAPHICS::_0x519928DF02EB5101(p0);
	}

	static void LUA_NATIVE_GRAPHICS_0x1C6306E5BC25C29C_()
	{
		GRAPHICS::_0x1C6306E5BC25C29C();
	}

	void init_native_binding_GRAPHICS(sol::state& L)
	{
		auto GRAPHICS = L["GRAPHICS"].get_or_create<sol::table>();
		GRAPHICS.set_function("FREE_MEMORY_FOR_MISSION_CREATOR_PHOTO", LUA_NATIVE_GRAPHICS_FREE_MEMORY_FOR_MISSION_CREATOR_PHOTO);
		GRAPHICS.set_function("LOAD_MISSION_CREATOR_PHOTO", LUA_NATIVE_GRAPHICS_LOAD_MISSION_CREATOR_PHOTO);
		GRAPHICS.set_function("GET_STATUS_OF_LOAD_MISSION_CREATOR_PHOTO", LUA_NATIVE_GRAPHICS_GET_STATUS_OF_LOAD_MISSION_CREATOR_PHOTO);
		GRAPHICS.set_function("BEGIN_TAKE_HIGH_QUALITY_PHOTO", LUA_NATIVE_GRAPHICS_BEGIN_TAKE_HIGH_QUALITY_PHOTO);
		GRAPHICS.set_function("GET_STATUS_OF_TAKE_HIGH_QUALITY_PHOTO", LUA_NATIVE_GRAPHICS_GET_STATUS_OF_TAKE_HIGH_QUALITY_PHOTO);
		GRAPHICS.set_function("FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO", LUA_NATIVE_GRAPHICS_FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO);
		GRAPHICS.set_function("SET_PHOTO_SELF_STAT_", LUA_NATIVE_GRAPHICS_SET_PHOTO_SELF_STAT_);
		GRAPHICS.set_function("SET_PHOTO_STUDIO_STAT_", LUA_NATIVE_GRAPHICS_SET_PHOTO_STUDIO_STAT_);
		GRAPHICS.set_function("SET_POSSE_ID_FOR_PHOTO_", LUA_NATIVE_GRAPHICS_SET_POSSE_ID_FOR_PHOTO_);
		GRAPHICS.set_function("0x9F6D859C80708B26_", LUA_NATIVE_GRAPHICS_0x9F6D859C80708B26_);
		GRAPHICS.set_function("IS_PHOTO_FRAME", LUA_NATIVE_GRAPHICS_IS_PHOTO_FRAME);
		GRAPHICS.set_function("SET_PHOTO_IN_PHOTOMODE_STAT_", LUA_NATIVE_GRAPHICS_SET_PHOTO_IN_PHOTOMODE_STAT_);
		GRAPHICS.set_function("SET_PHOTO_OVERLAY_EFFECT_STAT_", LUA_NATIVE_GRAPHICS_SET_PHOTO_OVERLAY_EFFECT_STAT_);
		GRAPHICS.set_function("0x0D5B19C34068FEE7_", LUA_NATIVE_GRAPHICS_0x0D5B19C34068FEE7_);
		GRAPHICS.set_function("SET_PLAYER_APPEAR_IN_PHOTO_", LUA_NATIVE_GRAPHICS_SET_PLAYER_APPEAR_IN_PHOTO_);
		GRAPHICS.set_function("SET_REGION_PHOTO_TAKEN_STAT_", LUA_NATIVE_GRAPHICS_SET_REGION_PHOTO_TAKEN_STAT_);
		GRAPHICS.set_function("SET_DISTRICT_PHOTO_TAKEN_STAT_", LUA_NATIVE_GRAPHICS_SET_DISTRICT_PHOTO_TAKEN_STAT_);
		GRAPHICS.set_function("SET_STATE_PHOTO_TAKEN_STAT_", LUA_NATIVE_GRAPHICS_SET_STATE_PHOTO_TAKEN_STAT_);
		GRAPHICS.set_function("SAVE_HIGH_QUALITY_PHOTO", LUA_NATIVE_GRAPHICS_SAVE_HIGH_QUALITY_PHOTO);
		GRAPHICS.set_function("GET_STATUS_OF_SAVE_HIGH_QUALITY_PHOTO", LUA_NATIVE_GRAPHICS_GET_STATUS_OF_SAVE_HIGH_QUALITY_PHOTO);
		GRAPHICS.set_function("BEGIN_CREATE_LOW_QUALITY_COPY_OF_PHOTO", LUA_NATIVE_GRAPHICS_BEGIN_CREATE_LOW_QUALITY_COPY_OF_PHOTO);
		GRAPHICS.set_function("GET_STATUS_OF_CREATE_LOW_QUALITY_COPY_OF_PHOTO", LUA_NATIVE_GRAPHICS_GET_STATUS_OF_CREATE_LOW_QUALITY_COPY_OF_PHOTO);
		GRAPHICS.set_function("FREE_MEMORY_FOR_LOW_QUALITY_PHOTO", LUA_NATIVE_GRAPHICS_FREE_MEMORY_FOR_LOW_QUALITY_PHOTO);
		GRAPHICS.set_function("DRAW_LOW_QUALITY_PHOTO_TO_PHONE", LUA_NATIVE_GRAPHICS_DRAW_LOW_QUALITY_PHOTO_TO_PHONE);
		GRAPHICS.set_function("GET_MAX_NUMBER_OF_LOCAL_PHOTOS_", LUA_NATIVE_GRAPHICS_GET_MAX_NUMBER_OF_LOCAL_PHOTOS_);
		GRAPHICS.set_function("GET_CURRENT_NUMBER_OF_LOCAL_PHOTOS_", LUA_NATIVE_GRAPHICS_GET_CURRENT_NUMBER_OF_LOCAL_PHOTOS_);
		GRAPHICS.set_function("QUEUE_OPERATION_TO_CREATE_SORTED_LIST_OF_PHOTOS", LUA_NATIVE_GRAPHICS_QUEUE_OPERATION_TO_CREATE_SORTED_LIST_OF_PHOTOS);
		GRAPHICS.set_function("GET_STATUS_OF_SORTED_LIST_OPERATION", LUA_NATIVE_GRAPHICS_GET_STATUS_OF_SORTED_LIST_OPERATION);
		GRAPHICS.set_function("DRAW_LIGHT_WITH_RANGE", LUA_NATIVE_GRAPHICS_DRAW_LIGHT_WITH_RANGE);
		GRAPHICS.set_function("UPDATE_LIGHTS_ON_ENTITY", LUA_NATIVE_GRAPHICS_UPDATE_LIGHTS_ON_ENTITY);
		GRAPHICS.set_function("SET_LIGHTS_COLOR_FOR_ENTITY_", LUA_NATIVE_GRAPHICS_SET_LIGHTS_COLOR_FOR_ENTITY_);
		GRAPHICS.set_function("SET_LIGHTS_INTENSITY_FOR_ENTITY_", LUA_NATIVE_GRAPHICS_SET_LIGHTS_INTENSITY_FOR_ENTITY_);
		GRAPHICS.set_function("SET_LIGHTS_TYPE_FOR_ENTITY_", LUA_NATIVE_GRAPHICS_SET_LIGHTS_TYPE_FOR_ENTITY_);
		GRAPHICS.set_function("DRAW_MARKER_", LUA_NATIVE_GRAPHICS_DRAW_MARKER_);
		GRAPHICS.set_function("CREATE_CHECKPOINT_WITH_NAMEHASH", LUA_NATIVE_GRAPHICS_CREATE_CHECKPOINT_WITH_NAMEHASH);
		GRAPHICS.set_function("DOES_CHECKPOINT_HAVE_FX_", LUA_NATIVE_GRAPHICS_DOES_CHECKPOINT_HAVE_FX_);
		GRAPHICS.set_function("SET_CHECKPOINT_RGBA", LUA_NATIVE_GRAPHICS_SET_CHECKPOINT_RGBA);
		GRAPHICS.set_function("SET_CHECKPOINT_RGBA2", LUA_NATIVE_GRAPHICS_SET_CHECKPOINT_RGBA2);
		GRAPHICS.set_function("0xCC3B787E73E64160_", LUA_NATIVE_GRAPHICS_0xCC3B787E73E64160_);
		GRAPHICS.set_function("0x171C18E994C1A395_", LUA_NATIVE_GRAPHICS_0x171C18E994C1A395_);
		GRAPHICS.set_function("DELETE_CHECKPOINT", LUA_NATIVE_GRAPHICS_DELETE_CHECKPOINT);
		GRAPHICS.set_function("DRAW_RECT", LUA_NATIVE_GRAPHICS_DRAW_RECT);
		GRAPHICS.set_function("SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU", LUA_NATIVE_GRAPHICS_SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU);
		GRAPHICS.set_function("SET_SCRIPT_GFX_DRAW_ORDER", LUA_NATIVE_GRAPHICS_SET_SCRIPT_GFX_DRAW_ORDER);
		GRAPHICS.set_function("DRAW_SPRITE", LUA_NATIVE_GRAPHICS_DRAW_SPRITE);
		GRAPHICS.set_function("ATTACH_TV_AUDIO_TO_ENTITY", LUA_NATIVE_GRAPHICS_ATTACH_TV_AUDIO_TO_ENTITY);
		GRAPHICS.set_function("SET_TV_AUDIO_FRONTEND", LUA_NATIVE_GRAPHICS_SET_TV_AUDIO_FRONTEND);
		GRAPHICS.set_function("GET_SCREEN_RESOLUTION", LUA_NATIVE_GRAPHICS_GET_SCREEN_RESOLUTION);
		GRAPHICS.set_function("0xA04EF43030593ABC_", LUA_NATIVE_GRAPHICS_0xA04EF43030593ABC_);
		GRAPHICS.set_function("0xA21AF60C9F99CCC5_", LUA_NATIVE_GRAPHICS_0xA21AF60C9F99CCC5_);
		GRAPHICS.set_function("0xC28F62AC9774FC1B_", LUA_NATIVE_GRAPHICS_0xC28F62AC9774FC1B_);
		GRAPHICS.set_function("0xEB48CE48EEC41FD4_", LUA_NATIVE_GRAPHICS_0xEB48CE48EEC41FD4_);
		GRAPHICS.set_function("GET_SCREEN_COORD_FROM_WORLD_COORD", LUA_NATIVE_GRAPHICS_GET_SCREEN_COORD_FROM_WORLD_COORD);
		GRAPHICS.set_function("IS_TEXTURE_IN_DICT_", LUA_NATIVE_GRAPHICS_IS_TEXTURE_IN_DICT_);
		GRAPHICS.set_function("SET_ARTIFICIAL_LIGHTS_STATE", LUA_NATIVE_GRAPHICS_SET_ARTIFICIAL_LIGHTS_STATE);
		GRAPHICS.set_function("DISABLE_HDTEX_THIS_FRAME", LUA_NATIVE_GRAPHICS_DISABLE_HDTEX_THIS_FRAME);
		GRAPHICS.set_function("0x1A9F09AB458D49C6_", LUA_NATIVE_GRAPHICS_0x1A9F09AB458D49C6_);
		GRAPHICS.set_function("CREATE_TRACKED_POINT", LUA_NATIVE_GRAPHICS_CREATE_TRACKED_POINT);
		GRAPHICS.set_function("SET_TRACKED_POINT_INFO", LUA_NATIVE_GRAPHICS_SET_TRACKED_POINT_INFO);
		GRAPHICS.set_function("IS_TRACKED_POINT_VISIBLE", LUA_NATIVE_GRAPHICS_IS_TRACKED_POINT_VISIBLE);
		GRAPHICS.set_function("0xDFE332A5DA6FE7C9_", LUA_NATIVE_GRAPHICS_0xDFE332A5DA6FE7C9_);
		GRAPHICS.set_function("DESTROY_TRACKED_POINT", LUA_NATIVE_GRAPHICS_DESTROY_TRACKED_POINT);
		GRAPHICS.set_function("IS_TRACKED_POINT_VALID_", LUA_NATIVE_GRAPHICS_IS_TRACKED_POINT_VALID_);
		GRAPHICS.set_function("SET_GRASS_CULL_SPHERE", LUA_NATIVE_GRAPHICS_SET_GRASS_CULL_SPHERE);
		GRAPHICS.set_function("REMOVE_GRASS_CULL_SPHERE", LUA_NATIVE_GRAPHICS_REMOVE_GRASS_CULL_SPHERE);
		GRAPHICS.set_function("ADD_VEG_MODIFIER_ZONE_", LUA_NATIVE_GRAPHICS_ADD_VEG_MODIFIER_ZONE_);
		GRAPHICS.set_function("ADD_VEG_MODIFIER_SPHERE", LUA_NATIVE_GRAPHICS_ADD_VEG_MODIFIER_SPHERE);
		GRAPHICS.set_function("REMOVE_VEG_MODIFIER_SPHERE", LUA_NATIVE_GRAPHICS_REMOVE_VEG_MODIFIER_SPHERE);
		GRAPHICS.set_function("ENABLE_STATIC_VEG_MODIFIER_", LUA_NATIVE_GRAPHICS_ENABLE_STATIC_VEG_MODIFIER_);
		GRAPHICS.set_function("DISABLE_STATIC_VEG_MODIFIER_", LUA_NATIVE_GRAPHICS_DISABLE_STATIC_VEG_MODIFIER_);
		GRAPHICS.set_function("IS_STATIC_VEG_MODIFIER_ENABLED_", LUA_NATIVE_GRAPHICS_IS_STATIC_VEG_MODIFIER_ENABLED_);
		GRAPHICS.set_function("0xEC3F7F24EEEB3BA3_", LUA_NATIVE_GRAPHICS_0xEC3F7F24EEEB3BA3_);
		GRAPHICS.set_function("0x9F158A49B0D84C3C_", LUA_NATIVE_GRAPHICS_0x9F158A49B0D84C3C_);
		GRAPHICS.set_function("0x910E260AEAD855DE_", LUA_NATIVE_GRAPHICS_0x910E260AEAD855DE_);
		GRAPHICS.set_function("CREATE_SWATCH_TEXTURE_DICT_", LUA_NATIVE_GRAPHICS_CREATE_SWATCH_TEXTURE_DICT_);
		GRAPHICS.set_function("DESTROY_SWATCH_TEXTURE_DICT_", LUA_NATIVE_GRAPHICS_DESTROY_SWATCH_TEXTURE_DICT_);
		GRAPHICS.set_function("GENERATE_SWATCH_TEXTURE_DIRECTLY_", LUA_NATIVE_GRAPHICS_GENERATE_SWATCH_TEXTURE_DIRECTLY_);
		GRAPHICS.set_function("GENERATE_SWATCH_TEXTURE_", LUA_NATIVE_GRAPHICS_GENERATE_SWATCH_TEXTURE_);
		GRAPHICS.set_function("CASCADE_SHADOWS_SET_CASCADE_BOUNDS", LUA_NATIVE_GRAPHICS_CASCADE_SHADOWS_SET_CASCADE_BOUNDS);
		GRAPHICS.set_function("CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER", LUA_NATIVE_GRAPHICS_CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER);
		GRAPHICS.set_function("CASCADE_SHADOWS_SET_SHADOW_SAMPLE_TYPE", LUA_NATIVE_GRAPHICS_CASCADE_SHADOWS_SET_SHADOW_SAMPLE_TYPE);
		GRAPHICS.set_function("CASCADE_SHADOWS_CLEAR_SHADOW_SAMPLE_TYPE", LUA_NATIVE_GRAPHICS_CASCADE_SHADOWS_CLEAR_SHADOW_SAMPLE_TYPE);
		GRAPHICS.set_function("0x503941F65DBA24EC_", LUA_NATIVE_GRAPHICS_0x503941F65DBA24EC_);
		GRAPHICS.set_function("0x815653A42C5ABE76_", LUA_NATIVE_GRAPHICS_0x815653A42C5ABE76_);
		GRAPHICS.set_function("0xFF8018C778349234_", LUA_NATIVE_GRAPHICS_0xFF8018C778349234_);
		GRAPHICS.set_function("RESET_ADAPTATION", LUA_NATIVE_GRAPHICS_RESET_ADAPTATION);
		GRAPHICS.set_function("TOGGLE_PAUSED_RENDERPHASES", LUA_NATIVE_GRAPHICS_TOGGLE_PAUSED_RENDERPHASES);
		GRAPHICS.set_function("GET_TOGGLE_PAUSED_RENDERPHASES_STATUS", LUA_NATIVE_GRAPHICS_GET_TOGGLE_PAUSED_RENDERPHASES_STATUS);
		GRAPHICS.set_function("RESET_PAUSED_RENDERPHASES", LUA_NATIVE_GRAPHICS_RESET_PAUSED_RENDERPHASES);
		GRAPHICS.set_function("SET_HIDOF_OVERRIDE", LUA_NATIVE_GRAPHICS_SET_HIDOF_OVERRIDE);
		GRAPHICS.set_function("0x21F00E08CBB5F37B_", LUA_NATIVE_GRAPHICS_0x21F00E08CBB5F37B_);
		GRAPHICS.set_function("0x5AC6E0FA028369DE_", LUA_NATIVE_GRAPHICS_0x5AC6E0FA028369DE_);
		GRAPHICS.set_function("0xEC3D8C228FE553D7_", LUA_NATIVE_GRAPHICS_0xEC3D8C228FE553D7_);
		GRAPHICS.set_function("0xF5793BB386E1FF9C_", LUA_NATIVE_GRAPHICS_0xF5793BB386E1FF9C_);
		GRAPHICS.set_function("0x5CD6A2CCE5087161_", LUA_NATIVE_GRAPHICS_0x5CD6A2CCE5087161_);
		GRAPHICS.set_function("0xC8D0611D9A0CF5D3_", LUA_NATIVE_GRAPHICS_0xC8D0611D9A0CF5D3_);
		GRAPHICS.set_function("GET_PHOTO_MODE_EXPOSURE_", LUA_NATIVE_GRAPHICS_GET_PHOTO_MODE_EXPOSURE_);
		GRAPHICS.set_function("0x62B9F9A1272AED80_", LUA_NATIVE_GRAPHICS_0x62B9F9A1272AED80_);
		GRAPHICS.set_function("GET_PHOTO_MODE_CONTRAST_", LUA_NATIVE_GRAPHICS_GET_PHOTO_MODE_CONTRAST_);
		GRAPHICS.set_function("0x9229ED770975BD9E_", LUA_NATIVE_GRAPHICS_0x9229ED770975BD9E_);
		GRAPHICS.set_function("START_PARTICLE_FX_NON_LOOPED_AT_COORD", LUA_NATIVE_GRAPHICS_START_PARTICLE_FX_NON_LOOPED_AT_COORD);
		GRAPHICS.set_function("START_NETWORKED_PARTICLE_FX_NON_LOOPED_AT_COORD", LUA_NATIVE_GRAPHICS_START_NETWORKED_PARTICLE_FX_NON_LOOPED_AT_COORD);
		GRAPHICS.set_function("START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE", LUA_NATIVE_GRAPHICS_START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE);
		GRAPHICS.set_function("START_PARTICLE_FX_NON_LOOPED_ON_ENTITY", LUA_NATIVE_GRAPHICS_START_PARTICLE_FX_NON_LOOPED_ON_ENTITY);
		GRAPHICS.set_function("START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_ENTITY", LUA_NATIVE_GRAPHICS_START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_ENTITY);
		GRAPHICS.set_function("START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE_2_", LUA_NATIVE_GRAPHICS_START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE_2_);
		GRAPHICS.set_function("SET_PARTICLE_FX_NON_LOOPED_COLOUR", LUA_NATIVE_GRAPHICS_SET_PARTICLE_FX_NON_LOOPED_COLOUR);
		GRAPHICS.set_function("SET_PARTICLE_FX_NON_LOOPED_ALPHA", LUA_NATIVE_GRAPHICS_SET_PARTICLE_FX_NON_LOOPED_ALPHA);
		GRAPHICS.set_function("SET_PARTICLE_FX_NON_LOOPED_EMITTER_SCALE_", LUA_NATIVE_GRAPHICS_SET_PARTICLE_FX_NON_LOOPED_EMITTER_SCALE_);
		GRAPHICS.set_function("START_PARTICLE_FX_LOOPED_AT_COORD", LUA_NATIVE_GRAPHICS_START_PARTICLE_FX_LOOPED_AT_COORD);
		GRAPHICS.set_function("START_PARTICLE_FX_LOOPED_ON_PED_BONE", LUA_NATIVE_GRAPHICS_START_PARTICLE_FX_LOOPED_ON_PED_BONE);
		GRAPHICS.set_function("START_PARTICLE_FX_LOOPED_ON_ENTITY", LUA_NATIVE_GRAPHICS_START_PARTICLE_FX_LOOPED_ON_ENTITY);
		GRAPHICS.set_function("START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE", LUA_NATIVE_GRAPHICS_START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE);
		GRAPHICS.set_function("START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY", LUA_NATIVE_GRAPHICS_START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY);
		GRAPHICS.set_function("START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY_BONE", LUA_NATIVE_GRAPHICS_START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY_BONE);
		GRAPHICS.set_function("STOP_PARTICLE_FX_LOOPED", LUA_NATIVE_GRAPHICS_STOP_PARTICLE_FX_LOOPED);
		GRAPHICS.set_function("DOES_PARTICLE_FX_LOOPED_EXIST", LUA_NATIVE_GRAPHICS_DOES_PARTICLE_FX_LOOPED_EXIST);
		GRAPHICS.set_function("SET_PARTICLE_FX_LOOPED_OFFSETS", LUA_NATIVE_GRAPHICS_SET_PARTICLE_FX_LOOPED_OFFSETS);
		GRAPHICS.set_function("SET_PARTICLE_FX_LOOPED_EVOLUTION", LUA_NATIVE_GRAPHICS_SET_PARTICLE_FX_LOOPED_EVOLUTION);
		GRAPHICS.set_function("SET_PARTICLE_FX_LOOPED_COLOUR", LUA_NATIVE_GRAPHICS_SET_PARTICLE_FX_LOOPED_COLOUR);
		GRAPHICS.set_function("SET_PARTICLE_FX_LOOPED_ALPHA", LUA_NATIVE_GRAPHICS_SET_PARTICLE_FX_LOOPED_ALPHA);
		GRAPHICS.set_function("SET_PARTICLE_FX_LOOPED_SCALE", LUA_NATIVE_GRAPHICS_SET_PARTICLE_FX_LOOPED_SCALE);
		GRAPHICS.set_function("SET_PARTICLE_FX_LOOPED_FAR_CLIP_DIST", LUA_NATIVE_GRAPHICS_SET_PARTICLE_FX_LOOPED_FAR_CLIP_DIST);
		GRAPHICS.set_function("SET_PARTICLE_FX_LOOPED_UPDATE_DISTANT_SMOKE_", LUA_NATIVE_GRAPHICS_SET_PARTICLE_FX_LOOPED_UPDATE_DISTANT_SMOKE_);
		GRAPHICS.set_function("REMOVE_PARTICLE_FX", LUA_NATIVE_GRAPHICS_REMOVE_PARTICLE_FX);
		GRAPHICS.set_function("REMOVE_PARTICLE_FX_FROM_ENTITY", LUA_NATIVE_GRAPHICS_REMOVE_PARTICLE_FX_FROM_ENTITY);
		GRAPHICS.set_function("REMOVE_PARTICLE_FX_IN_RANGE", LUA_NATIVE_GRAPHICS_REMOVE_PARTICLE_FX_IN_RANGE);
		GRAPHICS.set_function("USE_PARTICLE_FX_ASSET", LUA_NATIVE_GRAPHICS_USE_PARTICLE_FX_ASSET);
		GRAPHICS.set_function("SET_PARTICLE_FX_OVERRIDE", LUA_NATIVE_GRAPHICS_SET_PARTICLE_FX_OVERRIDE);
		GRAPHICS.set_function("RESET_PARTICLE_FX_OVERRIDE", LUA_NATIVE_GRAPHICS_RESET_PARTICLE_FX_OVERRIDE);
		GRAPHICS.set_function("0x4FB67D172C4476F3_", LUA_NATIVE_GRAPHICS_0x4FB67D172C4476F3_);
		GRAPHICS.set_function("SET_PARTICLE_FX_AMBIENT_COLOUR", LUA_NATIVE_GRAPHICS_SET_PARTICLE_FX_AMBIENT_COLOUR);
		GRAPHICS.set_function("0xD1472AFF30C103D6_", LUA_NATIVE_GRAPHICS_0xD1472AFF30C103D6_);
		GRAPHICS.set_function("SET_PARTICLE_FX_BULLET_IMPACT_SCALE", LUA_NATIVE_GRAPHICS_SET_PARTICLE_FX_BULLET_IMPACT_SCALE);
		GRAPHICS.set_function("SET_PARTICLE_FX_BULLET_IMPACT_LODRANGE_SCALE", LUA_NATIVE_GRAPHICS_SET_PARTICLE_FX_BULLET_IMPACT_LODRANGE_SCALE);
		GRAPHICS.set_function("SET_SNIPER_GLINTS_ENABLED_", LUA_NATIVE_GRAPHICS_SET_SNIPER_GLINTS_ENABLED_);
		GRAPHICS.set_function("SET_PARTICLE_FX_FOOT_LODRANGE_SCALE", LUA_NATIVE_GRAPHICS_SET_PARTICLE_FX_FOOT_LODRANGE_SCALE);
		GRAPHICS.set_function("0x4046493D2EEACA0E_", LUA_NATIVE_GRAPHICS_0x4046493D2EEACA0E_);
		GRAPHICS.set_function("SET_PICKUP_LIGHT", LUA_NATIVE_GRAPHICS_SET_PICKUP_LIGHT);
		GRAPHICS.set_function("BLOCK_PICKUP_OBJECT_LIGHT_", LUA_NATIVE_GRAPHICS_BLOCK_PICKUP_OBJECT_LIGHT_);
		GRAPHICS.set_function("BLOCK_PICKUP_PLACEMENT_LIGHT", LUA_NATIVE_GRAPHICS_BLOCK_PICKUP_PLACEMENT_LIGHT);
		GRAPHICS.set_function("ALLOW_PICKUP_LIGHT_SYNC", LUA_NATIVE_GRAPHICS_ALLOW_PICKUP_LIGHT_SYNC);
		GRAPHICS.set_function("SET_PEARLESCENT_FX_ENABLED_", LUA_NATIVE_GRAPHICS_SET_PEARLESCENT_FX_ENABLED_);
		GRAPHICS.set_function("REMOVE_DECALS_IN_RANGE", LUA_NATIVE_GRAPHICS_REMOVE_DECALS_IN_RANGE);
		GRAPHICS.set_function("REMOVE_DECALS_FROM_OBJECT", LUA_NATIVE_GRAPHICS_REMOVE_DECALS_FROM_OBJECT);
		GRAPHICS.set_function("ADD_DECAL", LUA_NATIVE_GRAPHICS_ADD_DECAL);
		GRAPHICS.set_function("ADD_BLOOD_POOL_", LUA_NATIVE_GRAPHICS_ADD_BLOOD_POOL_);
		GRAPHICS.set_function("ADD_BLOOD_POOL_2_", LUA_NATIVE_GRAPHICS_ADD_BLOOD_POOL_2_);
		GRAPHICS.set_function("ADD_BLOOD_POOLS_FOR_PED_", LUA_NATIVE_GRAPHICS_ADD_BLOOD_POOLS_FOR_PED_);
		GRAPHICS.set_function("ADD_BLOOD_POOLS_FOR_PED_WITH_PARAMS_", LUA_NATIVE_GRAPHICS_ADD_BLOOD_POOLS_FOR_PED_WITH_PARAMS_);
		GRAPHICS.set_function("START_PETROL_TRAIL_DECALS", LUA_NATIVE_GRAPHICS_START_PETROL_TRAIL_DECALS);
		GRAPHICS.set_function("ADD_PETROL_TRAIL_DECAL_INFO", LUA_NATIVE_GRAPHICS_ADD_PETROL_TRAIL_DECAL_INFO);
		GRAPHICS.set_function("END_PETROL_TRAIL_DECALS", LUA_NATIVE_GRAPHICS_END_PETROL_TRAIL_DECALS);
		GRAPHICS.set_function("0xE63D68F455CA0B47_", LUA_NATIVE_GRAPHICS_0xE63D68F455CA0B47_);
		GRAPHICS.set_function("REMOVE_DECAL", LUA_NATIVE_GRAPHICS_REMOVE_DECAL);
		GRAPHICS.set_function("IS_DECAL_ALIVE", LUA_NATIVE_GRAPHICS_IS_DECAL_ALIVE);
		GRAPHICS.set_function("SET_DISABLE_PETROL_DECALS_IGNITING_THIS_FRAME", LUA_NATIVE_GRAPHICS_SET_DISABLE_PETROL_DECALS_IGNITING_THIS_FRAME);
		GRAPHICS.set_function("0xB032C085D9A03907_", LUA_NATIVE_GRAPHICS_0xB032C085D9A03907_);
		GRAPHICS.set_function("0xFB680A9B33D0EDBE_", LUA_NATIVE_GRAPHICS_0xFB680A9B33D0EDBE_);
		GRAPHICS.set_function("0x41F88A85A579A61D_", LUA_NATIVE_GRAPHICS_0x41F88A85A579A61D_);
		GRAPHICS.set_function("BLOOD_TRAIL_FOR_WAYPOINT_", LUA_NATIVE_GRAPHICS_BLOOD_TRAIL_FOR_WAYPOINT_);
		GRAPHICS.set_function("ADD_BLOOD_TRAIL_POINT_", LUA_NATIVE_GRAPHICS_ADD_BLOOD_TRAIL_POINT_);
		GRAPHICS.set_function("0x812C1563185C6FB2_", LUA_NATIVE_GRAPHICS_0x812C1563185C6FB2_);
		GRAPHICS.set_function("0x4BD66B4E3427689B_", LUA_NATIVE_GRAPHICS_0x4BD66B4E3427689B_);
		GRAPHICS.set_function("ADD_BLOOD_TRAIL_SPLAT_", LUA_NATIVE_GRAPHICS_ADD_BLOOD_TRAIL_SPLAT_);
		GRAPHICS.set_function("0xF2F543D48F319A3A_", LUA_NATIVE_GRAPHICS_0xF2F543D48F319A3A_);
		GRAPHICS.set_function("0x1460B644397453EB_", LUA_NATIVE_GRAPHICS_0x1460B644397453EB_);
		GRAPHICS.set_function("DISABLE_FAR_ARTIFICIAL_LIGHTS_", LUA_NATIVE_GRAPHICS_DISABLE_FAR_ARTIFICIAL_LIGHTS_);
		GRAPHICS.set_function("0x453D16D41FC51D3E_", LUA_NATIVE_GRAPHICS_0x453D16D41FC51D3E_);
		GRAPHICS.set_function("0xC06F2F45A73EABCD_", LUA_NATIVE_GRAPHICS_0xC06F2F45A73EABCD_);
		GRAPHICS.set_function("SET_TIMECYCLE_MODIFIER", LUA_NATIVE_GRAPHICS_SET_TIMECYCLE_MODIFIER);
		GRAPHICS.set_function("SET_TIMECYCLE_MODIFIER_STRENGTH", LUA_NATIVE_GRAPHICS_SET_TIMECYCLE_MODIFIER_STRENGTH);
		GRAPHICS.set_function("SET_TRANSITION_TIMECYCLE_MODIFIER", LUA_NATIVE_GRAPHICS_SET_TRANSITION_TIMECYCLE_MODIFIER);
		GRAPHICS.set_function("SET_TRANSITION_OUT_OF_TIMECYCLE_MODIFIER", LUA_NATIVE_GRAPHICS_SET_TRANSITION_OUT_OF_TIMECYCLE_MODIFIER);
		GRAPHICS.set_function("CLEAR_TIMECYCLE_MODIFIER", LUA_NATIVE_GRAPHICS_CLEAR_TIMECYCLE_MODIFIER);
		GRAPHICS.set_function("GET_TIMECYCLE_MODIFIER_INDEX", LUA_NATIVE_GRAPHICS_GET_TIMECYCLE_MODIFIER_INDEX);
		GRAPHICS.set_function("GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX", LUA_NATIVE_GRAPHICS_GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX);
		GRAPHICS.set_function("0x67B0778C62E74423_", LUA_NATIVE_GRAPHICS_0x67B0778C62E74423_);
		GRAPHICS.set_function("0x6C03118E9E5C1A14_", LUA_NATIVE_GRAPHICS_0x6C03118E9E5C1A14_);
		GRAPHICS.set_function("GET_MODIFIED_VISIBILITY_DISTANCE_", LUA_NATIVE_GRAPHICS_GET_MODIFIED_VISIBILITY_DISTANCE_);
		GRAPHICS.set_function("ENABLE_MOON_CYCLE_OVERRIDE", LUA_NATIVE_GRAPHICS_ENABLE_MOON_CYCLE_OVERRIDE);
		GRAPHICS.set_function("SET_TV_CHANNEL", LUA_NATIVE_GRAPHICS_SET_TV_CHANNEL);
		GRAPHICS.set_function("GET_TV_CHANNEL", LUA_NATIVE_GRAPHICS_GET_TV_CHANNEL);
		GRAPHICS.set_function("SET_TV_VOLUME", LUA_NATIVE_GRAPHICS_SET_TV_VOLUME);
		GRAPHICS.set_function("DRAW_TV_CHANNEL", LUA_NATIVE_GRAPHICS_DRAW_TV_CHANNEL);
		GRAPHICS.set_function("SET_TV_CHANNEL_PLAYLIST", LUA_NATIVE_GRAPHICS_SET_TV_CHANNEL_PLAYLIST);
		GRAPHICS.set_function("IS_TVSHOW_CURRENTLY_PLAYING", LUA_NATIVE_GRAPHICS_IS_TVSHOW_CURRENTLY_PLAYING);
		GRAPHICS.set_function("0x5C674EB487891F6B_", LUA_NATIVE_GRAPHICS_0x5C674EB487891F6B_);
		GRAPHICS.set_function("ENABLE_MOVIE_SUBTITLES", LUA_NATIVE_GRAPHICS_ENABLE_MOVIE_SUBTITLES);
		GRAPHICS.set_function("0x32DE2BFFDA43E62A_", LUA_NATIVE_GRAPHICS_0x32DE2BFFDA43E62A_);
		GRAPHICS.set_function("0xD543487A1F12828F_", LUA_NATIVE_GRAPHICS_0xD543487A1F12828F_);
		GRAPHICS.set_function("0xD9BC98B55BCFAA9B_", LUA_NATIVE_GRAPHICS_0xD9BC98B55BCFAA9B_);
		GRAPHICS.set_function("0x48FE0DB54045B975_", LUA_NATIVE_GRAPHICS_0x48FE0DB54045B975_);
		GRAPHICS.set_function("0x735762E8D7573E42_", LUA_NATIVE_GRAPHICS_0x735762E8D7573E42_);
		GRAPHICS.set_function("0x981C7D863980FA51_", LUA_NATIVE_GRAPHICS_0x981C7D863980FA51_);
		GRAPHICS.set_function("ANIMPOSTFX_PRELOAD_POSTFX_", LUA_NATIVE_GRAPHICS_ANIMPOSTFX_PRELOAD_POSTFX_);
		GRAPHICS.set_function("ANIMPOSTFX_HAS_LOADED_", LUA_NATIVE_GRAPHICS_ANIMPOSTFX_HAS_LOADED_);
		GRAPHICS.set_function("ANIMPOSTFX_SET_TO_UNLOAD_", LUA_NATIVE_GRAPHICS_ANIMPOSTFX_SET_TO_UNLOAD_);
		GRAPHICS.set_function("ANIMPOSTFX_PLAY", LUA_NATIVE_GRAPHICS_ANIMPOSTFX_PLAY);
		GRAPHICS.set_function("ANIMPOSTFX_PLAY_TIMED_", LUA_NATIVE_GRAPHICS_ANIMPOSTFX_PLAY_TIMED_);
		GRAPHICS.set_function("ANIMPOSTFX_STOP", LUA_NATIVE_GRAPHICS_ANIMPOSTFX_STOP);
		GRAPHICS.set_function("0x26DD2FB0A88CC412_", LUA_NATIVE_GRAPHICS_0x26DD2FB0A88CC412_);
		GRAPHICS.set_function("ANIMPOSTFX_CLEAR_EFFECT_", LUA_NATIVE_GRAPHICS_ANIMPOSTFX_CLEAR_EFFECT_);
		GRAPHICS.set_function("ANIMPOSTFX_IS_RUNNING", LUA_NATIVE_GRAPHICS_ANIMPOSTFX_IS_RUNNING);
		GRAPHICS.set_function("ANIMPOSTFX_IS_TAG_PLAYING_", LUA_NATIVE_GRAPHICS_ANIMPOSTFX_IS_TAG_PLAYING_);
		GRAPHICS.set_function("ANIMPOSTFX_STOP_ALL", LUA_NATIVE_GRAPHICS_ANIMPOSTFX_STOP_ALL);
		GRAPHICS.set_function("ANIMPOSTFX_STOP_TAG_", LUA_NATIVE_GRAPHICS_ANIMPOSTFX_STOP_TAG_);
		GRAPHICS.set_function("ANIMPOSTFX_SET_STRENGTH_", LUA_NATIVE_GRAPHICS_ANIMPOSTFX_SET_STRENGTH_);
		GRAPHICS.set_function("ANIMPOSTFX_SET_POTENCY_", LUA_NATIVE_GRAPHICS_ANIMPOSTFX_SET_POTENCY_);
		GRAPHICS.set_function("ANIMPOSTFX_SET_POSTFX_COLOR_", LUA_NATIVE_GRAPHICS_ANIMPOSTFX_SET_POSTFX_COLOR_);
		GRAPHICS.set_function("0xB958D97A0DFAA0C2_", LUA_NATIVE_GRAPHICS_0xB958D97A0DFAA0C2_);
		GRAPHICS.set_function("0xA201A3D0AC087C37_", LUA_NATIVE_GRAPHICS_0xA201A3D0AC087C37_);
		GRAPHICS.set_function("0xFBF161FCFEC8589E_", LUA_NATIVE_GRAPHICS_0xFBF161FCFEC8589E_);
		GRAPHICS.set_function("ANIMPOSTFX_GET_STACKHASH_", LUA_NATIVE_GRAPHICS_ANIMPOSTFX_GET_STACKHASH_);
		GRAPHICS.set_function("ANIMPOSTFX_PRELOAD_POSTFX_BY_STACKHASH_", LUA_NATIVE_GRAPHICS_ANIMPOSTFX_PRELOAD_POSTFX_BY_STACKHASH_);
		GRAPHICS.set_function("ANIMPOSTFX_IS_PRELOADING_BY_STACKHASH", LUA_NATIVE_GRAPHICS_ANIMPOSTFX_IS_PRELOADING_BY_STACKHASH);
		GRAPHICS.set_function("0x38D9D50F2085E9B3_", LUA_NATIVE_GRAPHICS_0x38D9D50F2085E9B3_);
		GRAPHICS.set_function("ANIMPOSTFX_PLAY_TAG_", LUA_NATIVE_GRAPHICS_ANIMPOSTFX_PLAY_TAG_);
		GRAPHICS.set_function("0xC76FC4C2FC5F4405_", LUA_NATIVE_GRAPHICS_0xC76FC4C2FC5F4405_);
		GRAPHICS.set_function("ANIMPOSTFX_STOP_STACKHASH_POSTFX_", LUA_NATIVE_GRAPHICS_ANIMPOSTFX_STOP_STACKHASH_POSTFX_);
		GRAPHICS.set_function("ANIMPOSTFX_IS_STACKHASH_PLAYING_", LUA_NATIVE_GRAPHICS_ANIMPOSTFX_IS_STACKHASH_PLAYING_);
		GRAPHICS.set_function("0xE75CDDEBF618C8FF_", LUA_NATIVE_GRAPHICS_0xE75CDDEBF618C8FF_);
		GRAPHICS.set_function("0x71845905BCCDE781_", LUA_NATIVE_GRAPHICS_0x71845905BCCDE781_);
		GRAPHICS.set_function("ANIMPOSTFX_HAS_EVENT_TRIGGERED_BY_STACKHASH", LUA_NATIVE_GRAPHICS_ANIMPOSTFX_HAS_EVENT_TRIGGERED_BY_STACKHASH);
		GRAPHICS.set_function("0xFF584F097C17FA8F_", LUA_NATIVE_GRAPHICS_0xFF584F097C17FA8F_);
		GRAPHICS.set_function("0x3DA7A10583A4BEC0_", LUA_NATIVE_GRAPHICS_0x3DA7A10583A4BEC0_);
		GRAPHICS.set_function("0xC37792A3F9C90771_", LUA_NATIVE_GRAPHICS_0xC37792A3F9C90771_);
		GRAPHICS.set_function("0xA0F4D12D6042F6D5_", LUA_NATIVE_GRAPHICS_0xA0F4D12D6042F6D5_);
		GRAPHICS.set_function("0x8996FA6AD9FE4E90_", LUA_NATIVE_GRAPHICS_0x8996FA6AD9FE4E90_);
		GRAPHICS.set_function("SET_ENTITY_RENDER_GUARMA_SHIP_", LUA_NATIVE_GRAPHICS_SET_ENTITY_RENDER_GUARMA_SHIP_);
		GRAPHICS.set_function("PEDSHOT_IS_AVAILABLE", LUA_NATIVE_GRAPHICS_PEDSHOT_IS_AVAILABLE);
		GRAPHICS.set_function("0xFD05B1DDE83749FA_", LUA_NATIVE_GRAPHICS_0xFD05B1DDE83749FA_);
		GRAPHICS.set_function("PEDSHOT_FINISH_CLEANUP_DATA_", LUA_NATIVE_GRAPHICS_PEDSHOT_FINISH_CLEANUP_DATA_);
		GRAPHICS.set_function("PEDSHOT_PREVIOUS_PERSONA_PHOTO_DATA_CLEANUP_", LUA_NATIVE_GRAPHICS_PEDSHOT_PREVIOUS_PERSONA_PHOTO_DATA_CLEANUP_);
		GRAPHICS.set_function("PEDSHOT_INIT_CLEANUP_DATA_", LUA_NATIVE_GRAPHICS_PEDSHOT_INIT_CLEANUP_DATA_);
		GRAPHICS.set_function("PEDSHOT_GENERATE_PERSONA_PHOTO_", LUA_NATIVE_GRAPHICS_PEDSHOT_GENERATE_PERSONA_PHOTO_);
		GRAPHICS.set_function("PEDSHOT_SET_PERSONA_PHOTO_TYPE_", LUA_NATIVE_GRAPHICS_PEDSHOT_SET_PERSONA_PHOTO_TYPE_);
		GRAPHICS.set_function("0xA1A86055792FB249_", LUA_NATIVE_GRAPHICS_0xA1A86055792FB249_);
		GRAPHICS.set_function("0x402E1A61D2587FCD_", LUA_NATIVE_GRAPHICS_0x402E1A61D2587FCD_);
		GRAPHICS.set_function("0x5C9C3A466B3296A8_", LUA_NATIVE_GRAPHICS_0x5C9C3A466B3296A8_);
		GRAPHICS.set_function("0xA15CCAB8AD038291_", LUA_NATIVE_GRAPHICS_0xA15CCAB8AD038291_);
		GRAPHICS.set_function("0x285438C26C732F9D_", LUA_NATIVE_GRAPHICS_0x285438C26C732F9D_);
		GRAPHICS.set_function("SET_PROXY_INTERIOR_INDEX_ARTIFICIAL_LIGHTS_STATE_", LUA_NATIVE_GRAPHICS_SET_PROXY_INTERIOR_INDEX_ARTIFICIAL_LIGHTS_STATE_);
		GRAPHICS.set_function("IS_PROXY_INTERIOR_INDEX_ARTIFICIAL_LIGHTS_ENABLED_", LUA_NATIVE_GRAPHICS_IS_PROXY_INTERIOR_INDEX_ARTIFICIAL_LIGHTS_ENABLED_);
		GRAPHICS.set_function("GET_PROXY_INTERIOR_INDEX_", LUA_NATIVE_GRAPHICS_GET_PROXY_INTERIOR_INDEX_);
		GRAPHICS.set_function("0x9D1B0B5066205692_", LUA_NATIVE_GRAPHICS_0x9D1B0B5066205692_);
		GRAPHICS.set_function("0xC489FE31AC726512_", LUA_NATIVE_GRAPHICS_0xC489FE31AC726512_);
		GRAPHICS.set_function("SET_CLOUD_LAYER_", LUA_NATIVE_GRAPHICS_SET_CLOUD_LAYER_);
		GRAPHICS.set_function("SET_CLOUD_NOISE_", LUA_NATIVE_GRAPHICS_SET_CLOUD_NOISE_);
		GRAPHICS.set_function("SET_CLOUD_POSITION_", LUA_NATIVE_GRAPHICS_SET_CLOUD_POSITION_);
		GRAPHICS.set_function("SET_CLOUD_HEIGHT_", LUA_NATIVE_GRAPHICS_SET_CLOUD_HEIGHT_);
		GRAPHICS.set_function("0x085C5B61A0114F32_", LUA_NATIVE_GRAPHICS_0x085C5B61A0114F32_);
		GRAPHICS.set_function("0x1FF8731BE1DFC0C0_", LUA_NATIVE_GRAPHICS_0x1FF8731BE1DFC0C0_);
		GRAPHICS.set_function("0xFC9B53C072F418E0_", LUA_NATIVE_GRAPHICS_0xFC9B53C072F418E0_);
		GRAPHICS.set_function("0x94B261F1F35293E1_", LUA_NATIVE_GRAPHICS_0x94B261F1F35293E1_);
		GRAPHICS.set_function("ENABLE_ENTITYMASK", LUA_NATIVE_GRAPHICS_ENABLE_ENTITYMASK);
		GRAPHICS.set_function("DISABLE_ENTITYMASK", LUA_NATIVE_GRAPHICS_DISABLE_ENTITYMASK);
		GRAPHICS.set_function("ADD_ENTITY_TO_ENTITY_MASK_", LUA_NATIVE_GRAPHICS_ADD_ENTITY_TO_ENTITY_MASK_);
		GRAPHICS.set_function("ADD_ENTITY_TO_ENTITY_MASK_WITH_INTENSITY_", LUA_NATIVE_GRAPHICS_ADD_ENTITY_TO_ENTITY_MASK_WITH_INTENSITY_);
		GRAPHICS.set_function("REMOVE_ENTITY_FROM_ENTITY_MASK_", LUA_NATIVE_GRAPHICS_REMOVE_ENTITY_FROM_ENTITY_MASK_);
		GRAPHICS.set_function("GET_ENTITY_MASK_LAYERS_", LUA_NATIVE_GRAPHICS_GET_ENTITY_MASK_LAYERS_);
		GRAPHICS.set_function("SET_ENTITY_MASK_LAYERS_", LUA_NATIVE_GRAPHICS_SET_ENTITY_MASK_LAYERS_);
		GRAPHICS.set_function("SET_ENTITY_AURA_", LUA_NATIVE_GRAPHICS_SET_ENTITY_AURA_);
		GRAPHICS.set_function("RESET_ENTITY_AURA_", LUA_NATIVE_GRAPHICS_RESET_ENTITY_AURA_);
		GRAPHICS.set_function("SET_SNOW_COVERAGE_TYPE_", LUA_NATIVE_GRAPHICS_SET_SNOW_COVERAGE_TYPE_);
		GRAPHICS.set_function("0x519928DF02EB5101_", LUA_NATIVE_GRAPHICS_0x519928DF02EB5101_);
		GRAPHICS.set_function("0x1C6306E5BC25C29C_", LUA_NATIVE_GRAPHICS_0x1C6306E5BC25C29C_);
	}
}
