#include "lua_native_binding.hpp"
#include "game/rdr/Natives.hpp"

namespace Lua::native
{
	static void LUA_NATIVE_HUD_ENABLE_REDUCED_MENU_TIME_SCALE_()
	{
		HUD::_ENABLE_REDUCED_MENU_TIME_SCALE();
	}

	static void LUA_NATIVE_HUD_DISABLE_REDUCED_MENU_TIME_SCALE_()
	{
		HUD::_DISABLE_REDUCED_MENU_TIME_SCALE();
	}

	static void LUA_NATIVE_HUD_ENABLE_HUD_CONTEXT_THIS_FRAME_(Hash component)
	{
		HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(component);
	}

	static void LUA_NATIVE_HUD_ENABLE_HUD_CONTEXT_(Hash component)
	{
		HUD::_ENABLE_HUD_CONTEXT(component);
	}

	static void LUA_NATIVE_HUD_DISABLE_HUD_CONTEXT_(Hash component)
	{
		HUD::_DISABLE_HUD_CONTEXT(component);
	}

	static int LUA_NATIVE_HUD_0x7EC0D68233E391AC_(int p0)
	{
		auto retval = HUD::_0x7EC0D68233E391AC(p0);
		return retval;
	}

	static void LUA_NATIVE_HUD_BUSYSPINNER_SET_TEXT_(sol::stack_object text)
	{
		HUD::_BUSYSPINNER_SET_TEXT(text.is<const char*>() ? text.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_HUD_BUSYSPINNER_OFF()
	{
		HUD::BUSYSPINNER_OFF();
	}

	static bool LUA_NATIVE_HUD_BUSYSPINNER_IS_ON()
	{
		auto retval = (bool)HUD::BUSYSPINNER_IS_ON();
		return retval;
	}

	static const char* LUA_NATIVE_HUD_GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sol::stack_object pText, int startPoint, int endPoint)
	{
		auto retval = HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(pText.is<const char*>() ? pText.as<const char*>() : nullptr, startPoint, endPoint);
		return retval;
	}

	static const char* LUA_NATIVE_HUD_GET_FILENAME_FOR_AUDIO_CONVERSATION(sol::stack_object pTextLabelOfAudioConversation)
	{
		auto retval = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(pTextLabelOfAudioConversation.is<const char*>() ? pTextLabelOfAudioConversation.as<const char*>() : nullptr);
		return retval;
	}

	static void LUA_NATIVE_HUD_CLEAR_ALL_HELP_MESSAGES()
	{
		HUD::CLEAR_ALL_HELP_MESSAGES();
	}

	static bool LUA_NATIVE_HUD_TEXT_BLOCK_IS_LOADED(sol::stack_object textBlock)
	{
		auto retval = (bool)HUD::TEXT_BLOCK_IS_LOADED(textBlock.is<const char*>() ? textBlock.as<const char*>() : nullptr);
		return retval;
	}

	static bool LUA_NATIVE_HUD_TEXT_BLOCK_IS_STREAMED_(sol::stack_object textBlock)
	{
		auto retval = (bool)HUD::_TEXT_BLOCK_IS_STREAMED(textBlock.is<const char*>() ? textBlock.as<const char*>() : nullptr);
		return retval;
	}

	static void LUA_NATIVE_HUD_TEXT_BLOCK_REQUEST(sol::stack_object textBlock)
	{
		HUD::TEXT_BLOCK_REQUEST(textBlock.is<const char*>() ? textBlock.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_HUD_TEXT_BLOCK_DELETE_(sol::stack_object textBlock)
	{
		HUD::_TEXT_BLOCK_DELETE(textBlock.is<const char*>() ? textBlock.as<const char*>() : nullptr);
	}

	static bool LUA_NATIVE_HUD_DOES_TEXT_BLOCK_EXIST_(sol::stack_object textDatabase)
	{
		auto retval = (bool)HUD::_DOES_TEXT_BLOCK_EXIST(textDatabase.is<const char*>() ? textDatabase.as<const char*>() : nullptr);
		return retval;
	}

	static bool LUA_NATIVE_HUD_DOES_TEXT_LABEL_EXIST(sol::stack_object pTextLabel)
	{
		auto retval = (bool)HUD::DOES_TEXT_LABEL_EXIST(pTextLabel.is<const char*>() ? pTextLabel.as<const char*>() : nullptr);
		return retval;
	}

	static const char* LUA_NATIVE_HUD_GET_LABEL_TEXT_2_(sol::stack_object label)
	{
		auto retval = HUD::_GET_LABEL_TEXT_2(label.is<const char*>() ? label.as<const char*>() : nullptr);
		return retval;
	}

	static const char* LUA_NATIVE_HUD_GET_TEXT_SUBSTRING_2_(sol::stack_object text, int length)
	{
		auto retval = HUD::_GET_TEXT_SUBSTRING_2(text.is<const char*>() ? text.as<const char*>() : nullptr, length);
		return retval;
	}

	static Any LUA_NATIVE_HUD_0x806862E5D266CF38_(Any p0, Any p1, Any p2)
	{
		auto retval = HUD::_0x806862E5D266CF38(p0, p1, p2);
		return retval;
	}

	static int LUA_NATIVE_HUD_GET_LENGTH_OF_LITERAL_STRING(sol::stack_object pLiteralString)
	{
		auto retval = HUD::GET_LENGTH_OF_LITERAL_STRING(pLiteralString.is<const char*>() ? pLiteralString.as<const char*>() : nullptr);
		return retval;
	}

	static int LUA_NATIVE_HUD_GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sol::stack_object pLiteralString)
	{
		auto retval = HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(pLiteralString.is<const char*>() ? pLiteralString.as<const char*>() : nullptr);
		return retval;
	}

	static const char* LUA_NATIVE_HUD_GET_STRING_FROM_HASH_KEY(Hash labelHash)
	{
		auto retval = HUD::GET_STRING_FROM_HASH_KEY(labelHash);
		return retval;
	}

	static bool LUA_NATIVE_HUD_IS_RADAR_PREFERENCE_SWITCHED_ON()
	{
		auto retval = (bool)HUD::IS_RADAR_PREFERENCE_SWITCHED_ON();
		return retval;
	}

	static bool LUA_NATIVE_HUD_IS_SUBTITLE_PREFERENCE_SWITCHED_ON()
	{
		auto retval = (bool)HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON();
		return retval;
	}

	static void LUA_NATIVE_HUD_DISPLAY_HUD(bool bDisplayHudFlag)
	{
		HUD::DISPLAY_HUD(bDisplayHudFlag);
	}

	static bool LUA_NATIVE_HUD_IS_HUD_HIDDEN()
	{
		auto retval = (bool)HUD::IS_HUD_HIDDEN();
		return retval;
	}

	static bool LUA_NATIVE_HUD_IS_RADAR_HIDDEN()
	{
		auto retval = (bool)HUD::IS_RADAR_HIDDEN();
		return retval;
	}

	static bool LUA_NATIVE_HUD_IS_RADAR_HIDDEN_BY_SCRIPT()
	{
		auto retval = (bool)HUD::IS_RADAR_HIDDEN_BY_SCRIPT();
		return retval;
	}

	static std::tuple<int, int, int, int> LUA_NATIVE_HUD_GET_COLOR_FROM_NAME_(Hash colorNameHash, int red, int green, int blue, int alpha)
	{
		std::tuple<int, int, int, int> return_values;
		HUD::_GET_COLOR_FROM_NAME(colorNameHash, &red, &green, &blue, &alpha);
		std::get<0>(return_values) = red;
		std::get<1>(return_values) = green;
		std::get<2>(return_values) = blue;
		std::get<3>(return_values) = alpha;

		return return_values;
	}

	static void LUA_NATIVE_HUD_DISPLAY_TEXT_(sol::stack_object text, float xPos, float yPos)
	{
		HUD::_DISPLAY_TEXT(text.is<const char*>() ? text.as<const char*>() : nullptr, xPos, yPos);
	}

	static void LUA_NATIVE_HUD_SET_TEXT_COLOR_(int r, int g, int b, int a)
	{
		HUD::_SET_TEXT_COLOR(r, g, b, a);
	}

	static void LUA_NATIVE_HUD_SET_TEXT_RENDER_ID(int RenderIndex)
	{
		HUD::SET_TEXT_RENDER_ID(RenderIndex);
	}

	static bool LUA_NATIVE_HUD_REGISTER_NAMED_RENDERTARGET(sol::stack_object name, bool delay)
	{
		auto retval = (bool)HUD::REGISTER_NAMED_RENDERTARGET(name.is<const char*>() ? name.as<const char*>() : nullptr, delay);
		return retval;
	}

	static bool LUA_NATIVE_HUD_IS_NAMED_RENDERTARGET_REGISTERED(sol::stack_object name)
	{
		auto retval = (bool)HUD::IS_NAMED_RENDERTARGET_REGISTERED(name.is<const char*>() ? name.as<const char*>() : nullptr);
		return retval;
	}

	static bool LUA_NATIVE_HUD_RELEASE_NAMED_RENDERTARGET(sol::stack_object name)
	{
		auto retval = (bool)HUD::RELEASE_NAMED_RENDERTARGET(name.is<const char*>() ? name.as<const char*>() : nullptr);
		return retval;
	}

	static void LUA_NATIVE_HUD_LINK_NAMED_RENDERTARGET(Hash ModelHash)
	{
		HUD::LINK_NAMED_RENDERTARGET(ModelHash);
	}

	static int LUA_NATIVE_HUD_GET_NAMED_RENDERTARGET_RENDER_ID(sol::stack_object name)
	{
		auto retval = HUD::GET_NAMED_RENDERTARGET_RENDER_ID(name.is<const char*>() ? name.as<const char*>() : nullptr);
		return retval;
	}

	static bool LUA_NATIVE_HUD_IS_NAMED_RENDERTARGET_LINKED(Hash ModelHash)
	{
		auto retval = (bool)HUD::IS_NAMED_RENDERTARGET_LINKED(ModelHash);
		return retval;
	}

	static void LUA_NATIVE_HUD_0x9D37EB5003E0F2CF_(Any p0, Any p1)
	{
		HUD::_0x9D37EB5003E0F2CF(p0, p1);
	}

	static void LUA_NATIVE_HUD_HIDE_LOADING_ON_FADE_THIS_FRAME()
	{
		HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
	}

	static void LUA_NATIVE_HUD_0x052D4AC0922AF91A_(Any p0, Any p1)
	{
		HUD::_0x052D4AC0922AF91A(p0, p1);
	}

	static void LUA_NATIVE_HUD_HIDE_HUD_AND_RADAR_THIS_FRAME()
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	}

	static void LUA_NATIVE_HUD_0x8A59D44189AF2BC5_(Any p0, Any p1)
	{
		HUD::_0x8A59D44189AF2BC5(p0, p1);
	}

	static void LUA_NATIVE_HUD_0x160825DADF1B04B3_()
	{
		HUD::_0x160825DADF1B04B3();
	}

	static Any LUA_NATIVE_HUD_0x9C409BBC492CB5B1_()
	{
		auto retval = HUD::_0x9C409BBC492CB5B1();
		return retval;
	}

	static Any LUA_NATIVE_HUD_0x0501D52D24EA8934_(Any p0)
	{
		auto retval = HUD::_0x0501D52D24EA8934(p0);
		return retval;
	}

	static Any LUA_NATIVE_HUD_0x100157D6D7FE32CA_(Any p0, Any p1)
	{
		auto retval = HUD::_0x100157D6D7FE32CA(p0, p1);
		return retval;
	}

	static Any LUA_NATIVE_HUD_0x28AE29D909C8FDCE_(Any p0)
	{
		auto retval = HUD::_0x28AE29D909C8FDCE(p0);
		return retval;
	}

	static void LUA_NATIVE_HUD_0x2F7BB105144ACF30_()
	{
		HUD::_0x2F7BB105144ACF30();
	}

	static void LUA_NATIVE_HUD_0xBFFF81E12A745A5F_()
	{
		HUD::_0xBFFF81E12A745A5F();
	}

	static void LUA_NATIVE_HUD_SET_MISSION_NAME(bool bActive, sol::stack_object pTextLabel)
	{
		HUD::SET_MISSION_NAME(bActive, pTextLabel.is<const char*>() ? pTextLabel.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_HUD_SET_MISSION_NAME_FOR_UGC_MISSION(bool bActive, sol::stack_object pMissionName)
	{
		HUD::SET_MISSION_NAME_FOR_UGC_MISSION(bActive, pMissionName.is<const char*>() ? pMissionName.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_HUD_0xCE0D2F5586627CCE_(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		HUD::_0xCE0D2F5586627CCE(p0, p1, p2, p3, p4);
	}

	static std::tuple<int, float, float> LUA_NATIVE_HUD_GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(float vWorldPosX, float vWorldPosY, float vWorldPosZ, float fScreenPosX, float fScreenPosY)
	{
		std::tuple<int, float, float> return_values;
		std::get<0>(return_values) = HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(vWorldPosX, vWorldPosY, vWorldPosZ, &fScreenPosX, &fScreenPosY);
		std::get<1>(return_values) = fScreenPosX;
		std::get<2>(return_values) = fScreenPosY;

		return return_values;
	}

	static void LUA_NATIVE_HUD_HIDE_HUD_THIS_FRAME_()
	{
		HUD::_HIDE_HUD_THIS_FRAME();
	}

	static void LUA_NATIVE_HUD_DISABLE_FRONTEND_THIS_FRAME()
	{
		HUD::DISABLE_FRONTEND_THIS_FRAME();
	}

	static void LUA_NATIVE_HUD_0x5651516D947ABC53_()
	{
		HUD::_0x5651516D947ABC53();
	}

	static void LUA_NATIVE_HUD_ALLOW_PAUSE_WHEN_NOT_IN_STATE_OF_PLAY_THIS_FRAME()
	{
		HUD::ALLOW_PAUSE_WHEN_NOT_IN_STATE_OF_PLAY_THIS_FRAME();
	}

	static void LUA_NATIVE_HUD_SET_FRONTEND_ACTIVE(bool bActive)
	{
		HUD::SET_FRONTEND_ACTIVE(bActive);
	}

	static bool LUA_NATIVE_HUD_IS_PAUSE_MENU_ACTIVE()
	{
		auto retval = (bool)HUD::IS_PAUSE_MENU_ACTIVE();
		return retval;
	}

	static void LUA_NATIVE_HUD_SHOW_PLAYER_CORES_(bool state)
	{
		HUD::_SHOW_PLAYER_CORES(state);
	}

	static void LUA_NATIVE_HUD_SHOW_HORSE_CORES_(bool state)
	{
		HUD::_SHOW_HORSE_CORES(state);
	}

	static void LUA_NATIVE_HUD_0x3FE4FB41EF7D2196_(Any p0)
	{
		HUD::_0x3FE4FB41EF7D2196(p0);
	}

	static void LUA_NATIVE_HUD_JOURNAL_WRITE_ENTRY_(Any p0)
	{
		HUD::_JOURNAL_WRITE_ENTRY(p0);
	}

	static Any LUA_NATIVE_HUD_JOURNAL_CAN_WRITE_ENTRY_(Any p0)
	{
		auto retval = HUD::_JOURNAL_CAN_WRITE_ENTRY(p0);
		return retval;
	}

	static Any LUA_NATIVE_HUD_JOURNAL_GET_ENTRY_COUNT_()
	{
		auto retval = HUD::_JOURNAL_GET_ENTRY_COUNT();
		return retval;
	}

	static Any LUA_NATIVE_HUD_JOURNAL_GET_ENTRY_AT_INDEX_(Any p0)
	{
		auto retval = HUD::_JOURNAL_GET_ENTRY_AT_INDEX(p0);
		return retval;
	}

	static Any LUA_NATIVE_HUD_JOURNAL_GET_GRIME_AT_INDEX_(Any p0)
	{
		auto retval = HUD::_JOURNAL_GET_GRIME_AT_INDEX(p0);
		return retval;
	}

	static Any LUA_NATIVE_HUD_JOURNAL_GET_ENTRY_INFO_(Any p0, Any p1)
	{
		auto retval = HUD::_JOURNAL_GET_ENTRY_INFO(p0, p1);
		return retval;
	}

	static Any LUA_NATIVE_HUD_JOURNAL_GET_TEXTURE_WITH_LAYOUT_(Any p0, Any p1, Any p2)
	{
		auto retval = HUD::_JOURNAL_GET_TEXTURE_WITH_LAYOUT(p0, p1, p2);
		return retval;
	}

	static void LUA_NATIVE_HUD_JOURNAL_MARK_READ_(Any p0)
	{
		HUD::_JOURNAL_MARK_READ(p0);
	}

	static void LUA_NATIVE_HUD_JOURNAL_CLEAR_ALL_PROGRESS_()
	{
		HUD::_JOURNAL_CLEAR_ALL_PROGRESS();
	}

	static Any LUA_NATIVE_HUD_UI_REQUEST_SCENE(Any p0, Any p1)
	{
		auto retval = HUD::UI_REQUEST_SCENE(p0, p1);
		return retval;
	}

	static void LUA_NATIVE_HUD_0xF1E6979C0B779985_(int uiscene)
	{
		HUD::_0xF1E6979C0B779985(uiscene);
	}

	static Any LUA_NATIVE_HUD_UI_GET_SCENE_UIOBJECT(Any p0)
	{
		auto retval = HUD::UI_GET_SCENE_UIOBJECT(p0);
		return retval;
	}

	static void LUA_NATIVE_HUD_UI_MOVIEVIEW_SET_RENDER_TARGET(Any p0, Any p1)
	{
		HUD::UI_MOVIEVIEW_SET_RENDER_TARGET(p0, p1);
	}

	static Prompt LUA_NATIVE_HUD_UI_PROMPT_CREATE_(Hash inputHash, sol::stack_object labelName, Any p2, Any p3, Any p4, int p5)
	{
		auto retval = HUD::_UI_PROMPT_CREATE(inputHash, labelName.is<const char*>() ? labelName.as<const char*>() : nullptr, p2, p3, p4, p5);
		return retval;
	}

	static Prompt LUA_NATIVE_HUD_UI_PROMPT_REGISTER_BEGIN_()
	{
		auto retval = HUD::_UI_PROMPT_REGISTER_BEGIN();
		return retval;
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_REGISTER_END_(Prompt prompt)
	{
		HUD::_UI_PROMPT_REGISTER_END(prompt);
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_SET_PRIORITY_(Prompt prompt, int priority)
	{
		HUD::_UI_PROMPT_SET_PRIORITY(prompt, priority);
	}

	static Any LUA_NATIVE_HUD_UI_PROMPT_SET_CONTROL_ACTION_(Prompt prompt, Hash action)
	{
		auto retval = HUD::_UI_PROMPT_SET_CONTROL_ACTION(prompt, action);
		return retval;
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_SET_ALLOWED_ACTION_(Prompt prompt, Hash action)
	{
		HUD::_UI_PROMPT_SET_ALLOWED_ACTION(prompt, action);
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_SET_STANDARD_MODE_(Prompt prompt, bool releaseMode)
	{
		HUD::_UI_PROMPT_SET_STANDARD_MODE(prompt, releaseMode);
	}

	static bool LUA_NATIVE_HUD_UI_PROMPT_HAS_STANDARD_MODE_COMPLETED_(Prompt prompt, int p1)
	{
		auto retval = (bool)HUD::_UI_PROMPT_HAS_STANDARD_MODE_COMPLETED(prompt, p1);
		return retval;
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_SET_PRESSED_TIMED_MODE_(Prompt prompt, int depletionTimeMs)
	{
		HUD::_UI_PROMPT_SET_PRESSED_TIMED_MODE(prompt, depletionTimeMs);
	}

	static bool LUA_NATIVE_HUD_UI_PROMPT_HAS_PRESSED_TIMED_MODE_COMPLETED_(Prompt prompt)
	{
		auto retval = (bool)HUD::_UI_PROMPT_HAS_PRESSED_TIMED_MODE_COMPLETED(prompt);
		return retval;
	}

	static bool LUA_NATIVE_HUD_UI_PROMPT_HAS_PRESSED_TIMED_MODE_FAILED_(Prompt prompt)
	{
		auto retval = (bool)HUD::_UI_PROMPT_HAS_PRESSED_TIMED_MODE_FAILED(prompt);
		return retval;
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_SET_HOLD_MODE_(Prompt prompt, int holdTimeMs)
	{
		HUD::_UI_PROMPT_SET_HOLD_MODE(prompt, holdTimeMs);
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_SET_STANDARDIZED_HOLD_MODE_(Prompt prompt, Hash timedEventHash)
	{
		HUD::_UI_PROMPT_SET_STANDARDIZED_HOLD_MODE(prompt, timedEventHash);
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_SET_HOLD_INDEFINITELY_MODE_(Prompt prompt)
	{
		HUD::_UI_PROMPT_SET_HOLD_INDEFINITELY_MODE(prompt);
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_SET_HOLD_AUTO_FILL_MODE_(Prompt prompt, int autoFillTimeMs, int holdTimeMs)
	{
		HUD::_UI_PROMPT_SET_HOLD_AUTO_FILL_MODE(prompt, autoFillTimeMs, holdTimeMs);
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_SET_HOLD_AUTO_FILL_WITH_DECAY_MODE_(Prompt prompt, int autoFillTimeMs, int holdTimeMs)
	{
		HUD::_UI_PROMPT_SET_HOLD_AUTO_FILL_WITH_DECAY_MODE(prompt, autoFillTimeMs, holdTimeMs);
	}

	static bool LUA_NATIVE_HUD_UI_PROMPT_HAS_HOLD_AUTO_FILL_MODE_(Prompt prompt)
	{
		auto retval = (bool)HUD::_UI_PROMPT_HAS_HOLD_AUTO_FILL_MODE(prompt);
		return retval;
	}

	static bool LUA_NATIVE_HUD_UI_PROMPT_HAS_HOLD_MODE_(Prompt prompt)
	{
		auto retval = (bool)HUD::_UI_PROMPT_HAS_HOLD_MODE(prompt);
		return retval;
	}

	static bool LUA_NATIVE_HUD_UI_PROMPT_IS_HOLD_MODE_RUNNING_(Prompt prompt)
	{
		auto retval = (bool)HUD::_UI_PROMPT_IS_HOLD_MODE_RUNNING(prompt);
		return retval;
	}

	static bool LUA_NATIVE_HUD_UI_PROMPT_HAS_HOLD_MODE_COMPLETED_(Prompt prompt)
	{
		auto retval = (bool)HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(prompt);
		return retval;
	}

	static float LUA_NATIVE_HUD_UI_PROMPT_GET_PROGRESS_(Prompt prompt)
	{
		auto retval = HUD::_UI_PROMPT_GET_PROGRESS(prompt);
		return retval;
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_SET_MASH_MODE_(Prompt prompt, int mashes)
	{
		HUD::_UI_PROMPT_SET_MASH_MODE(prompt, mashes);
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_SET_MASH_INDEFINITELY_MODE_(Prompt prompt)
	{
		HUD::_UI_PROMPT_SET_MASH_INDEFINITELY_MODE(prompt);
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_SET_MASH_WITH_RESISTANCE_MODE_(Prompt prompt, int mashes, float p2, float p3)
	{
		HUD::_UI_PROMPT_SET_MASH_WITH_RESISTANCE_MODE(prompt, mashes, p2, p3);
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE_(Prompt prompt, int mashes, float p2, float p3)
	{
		HUD::_UI_PROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(prompt, mashes, p2, p3);
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_SET_MASH_AUTO_FILL_MODE_(Prompt prompt, int autoFillTimeMs, int mashes)
	{
		HUD::_UI_PROMPT_SET_MASH_AUTO_FILL_MODE(prompt, autoFillTimeMs, mashes);
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_SET_MASH_MANUAL_MODE_(Prompt prompt, float p1, float p2, float p3, Any p4)
	{
		HUD::_UI_PROMPT_SET_MASH_MANUAL_MODE(prompt, p1, p2, p3, p4);
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE_(Prompt prompt, float p1, float p2, float p3, Any p4)
	{
		HUD::_UI_PROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(prompt, p1, p2, p3, p4);
	}

	static bool LUA_NATIVE_HUD_UI_PROMPT_HAS_MANUAL_MASH_MODE_(Prompt prompt)
	{
		auto retval = (bool)HUD::_UI_PROMPT_HAS_MANUAL_MASH_MODE(prompt);
		return retval;
	}

	static bool LUA_NATIVE_HUD_UI_PROMPT_HAS_MASH_MODE_(Prompt prompt)
	{
		auto retval = (bool)HUD::_UI_PROMPT_HAS_MASH_MODE(prompt);
		return retval;
	}

	static Any LUA_NATIVE_HUD_0xB0E8599243B3F568_(Any p0)
	{
		auto retval = HUD::_0xB0E8599243B3F568(p0);
		return retval;
	}

	static bool LUA_NATIVE_HUD_UI_PROMPT_HAS_MASH_MODE_COMPLETED_(Prompt prompt)
	{
		auto retval = (bool)HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(prompt);
		return retval;
	}

	static bool LUA_NATIVE_HUD_UI_PROMPT_HAS_MASH_MODE_FAILED_(Prompt prompt)
	{
		auto retval = (bool)HUD::_UI_PROMPT_HAS_MASH_MODE_FAILED(prompt);
		return retval;
	}

	static float LUA_NATIVE_HUD_UI_PROMPT_GET_MASH_MODE_PROGRESS_(Prompt prompt)
	{
		auto retval = HUD::_UI_PROMPT_GET_MASH_MODE_PROGRESS(prompt);
		return retval;
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_SET_MASH_MANUAL_MODE_INCREASE_PER_PRESS_(Prompt prompt, float rate)
	{
		HUD::_UI_PROMPT_SET_MASH_MANUAL_MODE_INCREASE_PER_PRESS(prompt, rate);
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_SET_MASH_MANUAL_MODE_DECAY_SPEED_(Prompt prompt, float speed)
	{
		HUD::_UI_PROMPT_SET_MASH_MANUAL_MODE_DECAY_SPEED(prompt, speed);
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_SET_MASH_MANUAL_MODE_PRESSED_GROWTH_SPEED_(Prompt prompt, float speed)
	{
		HUD::_UI_PROMPT_SET_MASH_MANUAL_MODE_PRESSED_GROWTH_SPEED(prompt, speed);
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_SET_ROTATE_MODE_(Prompt prompt, float p1, bool counterclockwise)
	{
		HUD::_UI_PROMPT_SET_ROTATE_MODE(prompt, p1, counterclockwise);
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_SET_TARGET_MODE_(Prompt prompt, float p1, float p2, Any p3)
	{
		HUD::_UI_PROMPT_SET_TARGET_MODE(prompt, p1, p2, p3);
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_SET_TARGET_MODE_TARGET_(Prompt prompt, float p1, float p2)
	{
		HUD::_UI_PROMPT_SET_TARGET_MODE_TARGET(prompt, p1, p2);
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_SET_TARGET_MODE_PROGRESS_(Prompt prompt, float progress)
	{
		HUD::_UI_PROMPT_SET_TARGET_MODE_PROGRESS(prompt, progress);
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_SET_BEAT_MODE_(Prompt prompt, bool toggle)
	{
		HUD::_UI_PROMPT_SET_BEAT_MODE(prompt, toggle);
	}

	static bool LUA_NATIVE_HUD_UI_PROMPT_WAS_BEAT_MODE_PRESSED_IN_TIME_WINDOW_(Prompt prompt)
	{
		auto retval = (bool)HUD::_UI_PROMPT_WAS_BEAT_MODE_PRESSED_IN_TIME_WINDOW(prompt);
		return retval;
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_SET_BEAT_MODE_GRAYED_OUT_(Prompt prompt, Any p1)
	{
		HUD::_UI_PROMPT_SET_BEAT_MODE_GRAYED_OUT(prompt, p1);
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_RESTART_MODES_(Prompt prompt)
	{
		HUD::_UI_PROMPT_RESTART_MODES(prompt);
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_SET_SPINNER_SPEED_(Prompt prompt, Any p1)
	{
		HUD::_UI_PROMPT_SET_SPINNER_SPEED(prompt, p1);
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_SET_SPINNER_POSITION_(Prompt prompt, Any p1)
	{
		HUD::_UI_PROMPT_SET_SPINNER_POSITION(prompt, p1);
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_SET_URGENT_PULSING_ENABLED_(Prompt prompt, bool toggle)
	{
		HUD::_UI_PROMPT_SET_URGENT_PULSING_ENABLED(prompt, toggle);
	}

	static bool LUA_NATIVE_HUD_UI_PROMPT_GET_URGENT_PULSING_ENABLED_(Prompt prompt)
	{
		auto retval = (bool)HUD::_UI_PROMPT_GET_URGENT_PULSING_ENABLED(prompt);
		return retval;
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_SET_TAG_(Prompt prompt, Any p1)
	{
		HUD::_UI_PROMPT_SET_TAG(prompt, p1);
	}

	static int LUA_NATIVE_HUD_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY_(Entity entity)
	{
		auto retval = HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(entity);
		return retval;
	}

	static int LUA_NATIVE_HUD_UI_PROMPT_GET_GROUP_ID_FOR_SCENARIO_POINT_(Any p0, int p1)
	{
		auto retval = HUD::_UI_PROMPT_GET_GROUP_ID_FOR_SCENARIO_POINT(p0, p1);
		return retval;
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_SET_GROUP_(Prompt prompt, int groupId, int tabIndex)
	{
		HUD::_UI_PROMPT_SET_GROUP(prompt, groupId, tabIndex);
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_REMOVE_GROUP_(Prompt prompt, Any p1)
	{
		HUD::_UI_PROMPT_REMOVE_GROUP(prompt, p1);
	}

	static Any LUA_NATIVE_HUD_UI_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME_(Hash hash, sol::stack_object name, int tabAmount, int tabDefaultIndex, int p4, Prompt prompt)
	{
		auto retval = HUD::_UI_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME(hash, name.is<const char*>() ? name.as<const char*>() : nullptr, tabAmount, tabDefaultIndex, p4, prompt);
		return retval;
	}

	static int LUA_NATIVE_HUD_UI_PROMPT_GET_GROUP_ACTIVE_PAGE_(Hash hash)
	{
		auto retval = HUD::_UI_PROMPT_GET_GROUP_ACTIVE_PAGE(hash);
		return retval;
	}

	static Any LUA_NATIVE_HUD_UI_PROMPT_SET_AMBIENT_GROUP_THIS_FRAME_(Entity entity, float p1, int p2, int p3, Hash p4, sol::stack_object name, int p6)
	{
		auto retval = HUD::_UI_PROMPT_SET_AMBIENT_GROUP_THIS_FRAME(entity, p1, p2, p3, p4, name.is<const char*>() ? name.as<const char*>() : nullptr, p6);
		return retval;
	}

	static Any LUA_NATIVE_HUD_0x8B55B324A9123F6B_(int groupId, Volume volume, sol::stack_object p2, Any p3, Any p4, Any p5)
	{
		auto retval = HUD::_0x8B55B324A9123F6B(groupId, volume, p2.is<const char*>() ? p2.as<const char*>() : nullptr, p3, p4, p5);
		return retval;
	}

	static bool LUA_NATIVE_HUD_UI_PROMPT_DOES_AMBIENT_GROUP_EXIST_(Hash hash)
	{
		auto retval = (bool)HUD::_UI_PROMPT_DOES_AMBIENT_GROUP_EXIST(hash);
		return retval;
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_ADD_GROUP_LINK_(Any p0, Prompt prompt, Any p2)
	{
		HUD::_UI_PROMPT_ADD_GROUP_LINK(p0, prompt, p2);
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_ADD_GROUP_RETURN_LINK_(Any p0, Prompt prompt)
	{
		HUD::_UI_PROMPT_ADD_GROUP_RETURN_LINK(p0, prompt);
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_SET_TRANSPORT_MODE_(Prompt prompt, int mode)
	{
		HUD::_UI_PROMPT_SET_TRANSPORT_MODE(prompt, mode);
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_DISABLE_PROMPTS_THIS_FRAME_()
	{
		HUD::_UI_PROMPT_DISABLE_PROMPTS_THIS_FRAME();
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_DELETE_(Prompt prompt)
	{
		HUD::_UI_PROMPT_DELETE(prompt);
	}

	static bool LUA_NATIVE_HUD_UI_PROMPT_IS_VALID_(Prompt prompt)
	{
		auto retval = (bool)HUD::_UI_PROMPT_IS_VALID(prompt);
		return retval;
	}

	static bool LUA_NATIVE_HUD_UI_PROMPT_IS_ACTIVE_(Prompt prompt)
	{
		auto retval = (bool)HUD::_UI_PROMPT_IS_ACTIVE(prompt);
		return retval;
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_SET_VISIBLE_(Prompt prompt, bool toggle)
	{
		HUD::_UI_PROMPT_SET_VISIBLE(prompt, toggle);
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_SET_ENABLED_(Prompt prompt, bool toggle)
	{
		HUD::_UI_PROMPT_SET_ENABLED(prompt, toggle);
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_SET_TEXT_(Prompt prompt, sol::stack_object text)
	{
		HUD::_UI_PROMPT_SET_TEXT(prompt, text.is<const char*>() ? text.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_SET_ATTRIBUTE_(Prompt prompt, int attribute, bool enabled)
	{
		HUD::_UI_PROMPT_SET_ATTRIBUTE(prompt, attribute, enabled);
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_SET_TYPE_(Prompt prompt, int type)
	{
		HUD::_UI_PROMPT_SET_TYPE(prompt, type);
	}

	static void LUA_NATIVE_HUD_0x53CE46C01A089DA1_(Prompt prompt, bool p1)
	{
		HUD::_0x53CE46C01A089DA1(prompt, p1);
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_SET_MANUAL_RESOLVED_(Prompt prompt, Any p1)
	{
		HUD::_UI_PROMPT_SET_MANUAL_RESOLVED(prompt, p1);
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_CONTEXT_SET_VOLUME_(Prompt prompt, Volume volume)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(prompt, volume);
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_CONTEXT_SET_POINT_(Prompt prompt, float x, float y, float z)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_POINT(prompt, x, y, z);
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_CONTEXT_SET_RADIUS_(Prompt prompt, float radius)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(prompt, radius);
	}

	static bool LUA_NATIVE_HUD_UI_PROMPT_IS_PRESSED_(Prompt prompt)
	{
		auto retval = (bool)HUD::_UI_PROMPT_IS_PRESSED(prompt);
		return retval;
	}

	static bool LUA_NATIVE_HUD_UI_PROMPT_IS_JUST_PRESSED_(Prompt prompt)
	{
		auto retval = (bool)HUD::_UI_PROMPT_IS_JUST_PRESSED(prompt);
		return retval;
	}

	static bool LUA_NATIVE_HUD_UI_PROMPT_IS_JUST_RELEASED_(Prompt prompt)
	{
		auto retval = (bool)HUD::_UI_PROMPT_IS_JUST_RELEASED(prompt);
		return retval;
	}

	static bool LUA_NATIVE_HUD_UI_PROMPT_IS_RELEASED_(Prompt prompt)
	{
		auto retval = (bool)HUD::_UI_PROMPT_IS_RELEASED(prompt);
		return retval;
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME_(int p0)
	{
		HUD::_UI_PROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(p0);
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME_(int p0)
	{
		HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(p0);
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_FILTER_CLEAR_()
	{
		HUD::_UI_PROMPT_FILTER_CLEAR();
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_SET_PROMPT_PRIORITY_PREFERENCE_(Ped ped)
	{
		HUD::_UI_PROMPT_SET_PROMPT_PRIORITY_PREFERENCE(ped);
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_CLEAR_PROMPT_PRIORITY_PREFERENCE_()
	{
		HUD::_UI_PROMPT_CLEAR_PROMPT_PRIORITY_PREFERENCE();
	}

	static bool LUA_NATIVE_HUD_UI_PROMPT_IS_ENABLED_(Prompt prompt)
	{
		auto retval = (bool)HUD::_UI_PROMPT_IS_ENABLED(prompt);
		return retval;
	}

	static bool LUA_NATIVE_HUD_UI_PROMPT_IS_CONTROL_ACTION_ACTIVE(Hash controlAction)
	{
		auto retval = (bool)HUD::UI_PROMPT_IS_CONTROL_ACTION_ACTIVE(controlAction);
		return retval;
	}

	static Any LUA_NATIVE_HUD_0xD6BD313CFA41E57A_(Any p0)
	{
		auto retval = HUD::_0xD6BD313CFA41E57A(p0);
		return retval;
	}

	static int LUA_NATIVE_HUD_UI_PROMPT_SET_REGISTER_HORIZONTAL_ORIENTATION_()
	{
		auto retval = HUD::_UI_PROMPT_SET_REGISTER_HORIZONTAL_ORIENTATION();
		return retval;
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_CLEAR_HORIZONTAL_ORIENTATION_(int id)
	{
		HUD::_UI_PROMPT_CLEAR_HORIZONTAL_ORIENTATION(id);
	}

	static void LUA_NATIVE_HUD_UI_PROMPT_SET_ORDERING_AS_INPUT_TYPE_(Prompt prompt, Any p1)
	{
		HUD::_UI_PROMPT_SET_ORDERING_AS_INPUT_TYPE(prompt, p1);
	}

	static Any LUA_NATIVE_HUD_0x066725A9D52B3641_()
	{
		auto retval = HUD::_0x066725A9D52B3641();
		return retval;
	}

	static void LUA_NATIVE_HUD_0x958278B97C4AFFD8_(Any p0, Any p1)
	{
		HUD::_0x958278B97C4AFFD8(p0, p1);
	}

	static int LUA_NATIVE_HUD_CREATE_MP_GAMER_TAG_(Player player, sol::stack_object username, bool pointedClanTag, bool isRockstarClan, sol::stack_object clanTag, int clanFlag)
	{
		auto retval = HUD::_CREATE_MP_GAMER_TAG(player, username.is<const char*>() ? username.as<const char*>() : nullptr, pointedClanTag, isRockstarClan, clanTag.is<const char*>() ? clanTag.as<const char*>() : nullptr, clanFlag);
		return retval;
	}

	static int LUA_NATIVE_HUD_CREATE_FAKE_MP_GAMER_TAG(Ped ped, sol::stack_object PlayerName, bool bCrewTypeIsPrivate, bool bCrewTagContainsRockstar, sol::stack_object CrewTag, int iCrewRank)
	{
		auto retval = HUD::CREATE_FAKE_MP_GAMER_TAG(ped, PlayerName.is<const char*>() ? PlayerName.as<const char*>() : nullptr, bCrewTypeIsPrivate, bCrewTagContainsRockstar, CrewTag.is<const char*>() ? CrewTag.as<const char*>() : nullptr, iCrewRank);
		return retval;
	}

	static int LUA_NATIVE_HUD_CREATE_MP_GAMER_TAG_ON_ENTITY_(Entity entity, sol::stack_object text)
	{
		auto retval = HUD::_CREATE_MP_GAMER_TAG_ON_ENTITY(entity, text.is<const char*>() ? text.as<const char*>() : nullptr);
		return retval;
	}

	static void LUA_NATIVE_HUD_REMOVE_MP_GAMER_TAG(int iPlayerNum)
	{
		HUD::REMOVE_MP_GAMER_TAG(iPlayerNum);
	}

	static bool LUA_NATIVE_HUD_IS_MP_GAMER_TAG_ACTIVE(int iPlayerNum)
	{
		auto retval = (bool)HUD::IS_MP_GAMER_TAG_ACTIVE(iPlayerNum);
		return retval;
	}

	static bool LUA_NATIVE_HUD_IS_MP_GAMER_TAG_ACTIVE_ON_ENTITY_(int gamerTagId, Entity entity)
	{
		auto retval = (bool)HUD::_IS_MP_GAMER_TAG_ACTIVE_ON_ENTITY(gamerTagId, entity);
		return retval;
	}

	static void LUA_NATIVE_HUD_SET_MP_GAMER_TAG_VISIBILITY_(int gamerTagId, int visibility)
	{
		HUD::_SET_MP_GAMER_TAG_VISIBILITY(gamerTagId, visibility);
	}

	static void LUA_NATIVE_HUD_SET_MP_GAMER_TAG_TYPE_(int gamerTagId, Hash type)
	{
		HUD::_SET_MP_GAMER_TAG_TYPE(gamerTagId, type);
	}

	static void LUA_NATIVE_HUD_SET_MP_GAMER_TAG_COLOUR_(int gamerTagId, Hash colour)
	{
		HUD::_SET_MP_GAMER_TAG_COLOUR(gamerTagId, colour);
	}

	static void LUA_NATIVE_HUD_SET_MP_GAMER_TAG_UNK_ALLOW_LOCALIZED_(int gamerTagId, bool allow)
	{
		HUD::_SET_MP_GAMER_TAG_UNK_ALLOW_LOCALIZED(gamerTagId, allow);
	}

	static void LUA_NATIVE_HUD_SET_MP_GAMER_TAG_NAME(int iPlayerNum, sol::stack_object PlayerName)
	{
		HUD::SET_MP_GAMER_TAG_NAME(iPlayerNum, PlayerName.is<const char*>() ? PlayerName.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_HUD_SET_MP_GAMER_TAG_NAME_POSSE_(int gamerTagId, sol::stack_object text)
	{
		HUD::_SET_MP_GAMER_TAG_NAME_POSSE(gamerTagId, text.is<const char*>() ? text.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_HUD_SET_MP_GAMER_TAG_BIG_TEXT(int iPlayerNum, sol::stack_object BigText)
	{
		HUD::SET_MP_GAMER_TAG_BIG_TEXT(iPlayerNum, BigText.is<const char*>() ? BigText.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_HUD_SET_MP_GAMER_TAG_TOP_ICON_(int gamerTagId, Hash icon)
	{
		HUD::_SET_MP_GAMER_TAG_TOP_ICON(gamerTagId, icon);
	}

	static void LUA_NATIVE_HUD_SET_MP_GAMER_TAG_SECONDARY_ICON_(int gamerTagId, Hash icon)
	{
		HUD::_SET_MP_GAMER_TAG_SECONDARY_ICON(gamerTagId, icon);
	}

	static void LUA_NATIVE_HUD_MP_GAMER_TAG_ENABLE_REVIVE_TOP_ICON_(int gamerTagId)
	{
		HUD::_MP_GAMER_TAG_ENABLE_REVIVE_TOP_ICON(gamerTagId);
	}

	static void LUA_NATIVE_HUD_MP_GAMER_TAG_DISABLE_REVIVE_TOP_ICON_(int gamerTagId)
	{
		HUD::_MP_GAMER_TAG_DISABLE_REVIVE_TOP_ICON(gamerTagId);
	}

	void init_native_binding_HUD(sol::state& L)
	{
		auto HUD = L["HUD"].get_or_create<sol::table>();
		HUD.set_function("ENABLE_REDUCED_MENU_TIME_SCALE_", LUA_NATIVE_HUD_ENABLE_REDUCED_MENU_TIME_SCALE_);
		HUD.set_function("DISABLE_REDUCED_MENU_TIME_SCALE_", LUA_NATIVE_HUD_DISABLE_REDUCED_MENU_TIME_SCALE_);
		HUD.set_function("ENABLE_HUD_CONTEXT_THIS_FRAME_", LUA_NATIVE_HUD_ENABLE_HUD_CONTEXT_THIS_FRAME_);
		HUD.set_function("ENABLE_HUD_CONTEXT_", LUA_NATIVE_HUD_ENABLE_HUD_CONTEXT_);
		HUD.set_function("DISABLE_HUD_CONTEXT_", LUA_NATIVE_HUD_DISABLE_HUD_CONTEXT_);
		HUD.set_function("0x7EC0D68233E391AC_", LUA_NATIVE_HUD_0x7EC0D68233E391AC_);
		HUD.set_function("BUSYSPINNER_SET_TEXT_", LUA_NATIVE_HUD_BUSYSPINNER_SET_TEXT_);
		HUD.set_function("BUSYSPINNER_OFF", LUA_NATIVE_HUD_BUSYSPINNER_OFF);
		HUD.set_function("BUSYSPINNER_IS_ON", LUA_NATIVE_HUD_BUSYSPINNER_IS_ON);
		HUD.set_function("GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME", LUA_NATIVE_HUD_GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME);
		HUD.set_function("GET_FILENAME_FOR_AUDIO_CONVERSATION", LUA_NATIVE_HUD_GET_FILENAME_FOR_AUDIO_CONVERSATION);
		HUD.set_function("CLEAR_ALL_HELP_MESSAGES", LUA_NATIVE_HUD_CLEAR_ALL_HELP_MESSAGES);
		HUD.set_function("TEXT_BLOCK_IS_LOADED", LUA_NATIVE_HUD_TEXT_BLOCK_IS_LOADED);
		HUD.set_function("TEXT_BLOCK_IS_STREAMED_", LUA_NATIVE_HUD_TEXT_BLOCK_IS_STREAMED_);
		HUD.set_function("TEXT_BLOCK_REQUEST", LUA_NATIVE_HUD_TEXT_BLOCK_REQUEST);
		HUD.set_function("TEXT_BLOCK_DELETE_", LUA_NATIVE_HUD_TEXT_BLOCK_DELETE_);
		HUD.set_function("DOES_TEXT_BLOCK_EXIST_", LUA_NATIVE_HUD_DOES_TEXT_BLOCK_EXIST_);
		HUD.set_function("DOES_TEXT_LABEL_EXIST", LUA_NATIVE_HUD_DOES_TEXT_LABEL_EXIST);
		HUD.set_function("GET_LABEL_TEXT_2_", LUA_NATIVE_HUD_GET_LABEL_TEXT_2_);
		HUD.set_function("GET_TEXT_SUBSTRING_2_", LUA_NATIVE_HUD_GET_TEXT_SUBSTRING_2_);
		HUD.set_function("0x806862E5D266CF38_", LUA_NATIVE_HUD_0x806862E5D266CF38_);
		HUD.set_function("GET_LENGTH_OF_LITERAL_STRING", LUA_NATIVE_HUD_GET_LENGTH_OF_LITERAL_STRING);
		HUD.set_function("GET_LENGTH_OF_LITERAL_STRING_IN_BYTES", LUA_NATIVE_HUD_GET_LENGTH_OF_LITERAL_STRING_IN_BYTES);
		HUD.set_function("GET_STRING_FROM_HASH_KEY", LUA_NATIVE_HUD_GET_STRING_FROM_HASH_KEY);
		HUD.set_function("IS_RADAR_PREFERENCE_SWITCHED_ON", LUA_NATIVE_HUD_IS_RADAR_PREFERENCE_SWITCHED_ON);
		HUD.set_function("IS_SUBTITLE_PREFERENCE_SWITCHED_ON", LUA_NATIVE_HUD_IS_SUBTITLE_PREFERENCE_SWITCHED_ON);
		HUD.set_function("DISPLAY_HUD", LUA_NATIVE_HUD_DISPLAY_HUD);
		HUD.set_function("IS_HUD_HIDDEN", LUA_NATIVE_HUD_IS_HUD_HIDDEN);
		HUD.set_function("IS_RADAR_HIDDEN", LUA_NATIVE_HUD_IS_RADAR_HIDDEN);
		HUD.set_function("IS_RADAR_HIDDEN_BY_SCRIPT", LUA_NATIVE_HUD_IS_RADAR_HIDDEN_BY_SCRIPT);
		HUD.set_function("GET_COLOR_FROM_NAME_", LUA_NATIVE_HUD_GET_COLOR_FROM_NAME_);
		HUD.set_function("DISPLAY_TEXT_", LUA_NATIVE_HUD_DISPLAY_TEXT_);
		HUD.set_function("SET_TEXT_COLOR_", LUA_NATIVE_HUD_SET_TEXT_COLOR_);
		HUD.set_function("SET_TEXT_RENDER_ID", LUA_NATIVE_HUD_SET_TEXT_RENDER_ID);
		HUD.set_function("REGISTER_NAMED_RENDERTARGET", LUA_NATIVE_HUD_REGISTER_NAMED_RENDERTARGET);
		HUD.set_function("IS_NAMED_RENDERTARGET_REGISTERED", LUA_NATIVE_HUD_IS_NAMED_RENDERTARGET_REGISTERED);
		HUD.set_function("RELEASE_NAMED_RENDERTARGET", LUA_NATIVE_HUD_RELEASE_NAMED_RENDERTARGET);
		HUD.set_function("LINK_NAMED_RENDERTARGET", LUA_NATIVE_HUD_LINK_NAMED_RENDERTARGET);
		HUD.set_function("GET_NAMED_RENDERTARGET_RENDER_ID", LUA_NATIVE_HUD_GET_NAMED_RENDERTARGET_RENDER_ID);
		HUD.set_function("IS_NAMED_RENDERTARGET_LINKED", LUA_NATIVE_HUD_IS_NAMED_RENDERTARGET_LINKED);
		HUD.set_function("0x9D37EB5003E0F2CF_", LUA_NATIVE_HUD_0x9D37EB5003E0F2CF_);
		HUD.set_function("HIDE_LOADING_ON_FADE_THIS_FRAME", LUA_NATIVE_HUD_HIDE_LOADING_ON_FADE_THIS_FRAME);
		HUD.set_function("0x052D4AC0922AF91A_", LUA_NATIVE_HUD_0x052D4AC0922AF91A_);
		HUD.set_function("HIDE_HUD_AND_RADAR_THIS_FRAME", LUA_NATIVE_HUD_HIDE_HUD_AND_RADAR_THIS_FRAME);
		HUD.set_function("0x8A59D44189AF2BC5_", LUA_NATIVE_HUD_0x8A59D44189AF2BC5_);
		HUD.set_function("0x160825DADF1B04B3_", LUA_NATIVE_HUD_0x160825DADF1B04B3_);
		HUD.set_function("0x9C409BBC492CB5B1_", LUA_NATIVE_HUD_0x9C409BBC492CB5B1_);
		HUD.set_function("0x0501D52D24EA8934_", LUA_NATIVE_HUD_0x0501D52D24EA8934_);
		HUD.set_function("0x100157D6D7FE32CA_", LUA_NATIVE_HUD_0x100157D6D7FE32CA_);
		HUD.set_function("0x28AE29D909C8FDCE_", LUA_NATIVE_HUD_0x28AE29D909C8FDCE_);
		HUD.set_function("0x2F7BB105144ACF30_", LUA_NATIVE_HUD_0x2F7BB105144ACF30_);
		HUD.set_function("0xBFFF81E12A745A5F_", LUA_NATIVE_HUD_0xBFFF81E12A745A5F_);
		HUD.set_function("SET_MISSION_NAME", LUA_NATIVE_HUD_SET_MISSION_NAME);
		HUD.set_function("SET_MISSION_NAME_FOR_UGC_MISSION", LUA_NATIVE_HUD_SET_MISSION_NAME_FOR_UGC_MISSION);
		HUD.set_function("0xCE0D2F5586627CCE_", LUA_NATIVE_HUD_0xCE0D2F5586627CCE_);
		HUD.set_function("GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION", LUA_NATIVE_HUD_GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION);
		HUD.set_function("HIDE_HUD_THIS_FRAME_", LUA_NATIVE_HUD_HIDE_HUD_THIS_FRAME_);
		HUD.set_function("DISABLE_FRONTEND_THIS_FRAME", LUA_NATIVE_HUD_DISABLE_FRONTEND_THIS_FRAME);
		HUD.set_function("0x5651516D947ABC53_", LUA_NATIVE_HUD_0x5651516D947ABC53_);
		HUD.set_function("ALLOW_PAUSE_WHEN_NOT_IN_STATE_OF_PLAY_THIS_FRAME", LUA_NATIVE_HUD_ALLOW_PAUSE_WHEN_NOT_IN_STATE_OF_PLAY_THIS_FRAME);
		HUD.set_function("SET_FRONTEND_ACTIVE", LUA_NATIVE_HUD_SET_FRONTEND_ACTIVE);
		HUD.set_function("IS_PAUSE_MENU_ACTIVE", LUA_NATIVE_HUD_IS_PAUSE_MENU_ACTIVE);
		HUD.set_function("SHOW_PLAYER_CORES_", LUA_NATIVE_HUD_SHOW_PLAYER_CORES_);
		HUD.set_function("SHOW_HORSE_CORES_", LUA_NATIVE_HUD_SHOW_HORSE_CORES_);
		HUD.set_function("0x3FE4FB41EF7D2196_", LUA_NATIVE_HUD_0x3FE4FB41EF7D2196_);
		HUD.set_function("JOURNAL_WRITE_ENTRY_", LUA_NATIVE_HUD_JOURNAL_WRITE_ENTRY_);
		HUD.set_function("JOURNAL_CAN_WRITE_ENTRY_", LUA_NATIVE_HUD_JOURNAL_CAN_WRITE_ENTRY_);
		HUD.set_function("JOURNAL_GET_ENTRY_COUNT_", LUA_NATIVE_HUD_JOURNAL_GET_ENTRY_COUNT_);
		HUD.set_function("JOURNAL_GET_ENTRY_AT_INDEX_", LUA_NATIVE_HUD_JOURNAL_GET_ENTRY_AT_INDEX_);
		HUD.set_function("JOURNAL_GET_GRIME_AT_INDEX_", LUA_NATIVE_HUD_JOURNAL_GET_GRIME_AT_INDEX_);
		HUD.set_function("JOURNAL_GET_ENTRY_INFO_", LUA_NATIVE_HUD_JOURNAL_GET_ENTRY_INFO_);
		HUD.set_function("JOURNAL_GET_TEXTURE_WITH_LAYOUT_", LUA_NATIVE_HUD_JOURNAL_GET_TEXTURE_WITH_LAYOUT_);
		HUD.set_function("JOURNAL_MARK_READ_", LUA_NATIVE_HUD_JOURNAL_MARK_READ_);
		HUD.set_function("JOURNAL_CLEAR_ALL_PROGRESS_", LUA_NATIVE_HUD_JOURNAL_CLEAR_ALL_PROGRESS_);
		HUD.set_function("UI_REQUEST_SCENE", LUA_NATIVE_HUD_UI_REQUEST_SCENE);
		HUD.set_function("0xF1E6979C0B779985_", LUA_NATIVE_HUD_0xF1E6979C0B779985_);
		HUD.set_function("UI_GET_SCENE_UIOBJECT", LUA_NATIVE_HUD_UI_GET_SCENE_UIOBJECT);
		HUD.set_function("UI_MOVIEVIEW_SET_RENDER_TARGET", LUA_NATIVE_HUD_UI_MOVIEVIEW_SET_RENDER_TARGET);
		HUD.set_function("UI_PROMPT_CREATE_", LUA_NATIVE_HUD_UI_PROMPT_CREATE_);
		HUD.set_function("UI_PROMPT_REGISTER_BEGIN_", LUA_NATIVE_HUD_UI_PROMPT_REGISTER_BEGIN_);
		HUD.set_function("UI_PROMPT_REGISTER_END_", LUA_NATIVE_HUD_UI_PROMPT_REGISTER_END_);
		HUD.set_function("UI_PROMPT_SET_PRIORITY_", LUA_NATIVE_HUD_UI_PROMPT_SET_PRIORITY_);
		HUD.set_function("UI_PROMPT_SET_CONTROL_ACTION_", LUA_NATIVE_HUD_UI_PROMPT_SET_CONTROL_ACTION_);
		HUD.set_function("UI_PROMPT_SET_ALLOWED_ACTION_", LUA_NATIVE_HUD_UI_PROMPT_SET_ALLOWED_ACTION_);
		HUD.set_function("UI_PROMPT_SET_STANDARD_MODE_", LUA_NATIVE_HUD_UI_PROMPT_SET_STANDARD_MODE_);
		HUD.set_function("UI_PROMPT_HAS_STANDARD_MODE_COMPLETED_", LUA_NATIVE_HUD_UI_PROMPT_HAS_STANDARD_MODE_COMPLETED_);
		HUD.set_function("UI_PROMPT_SET_PRESSED_TIMED_MODE_", LUA_NATIVE_HUD_UI_PROMPT_SET_PRESSED_TIMED_MODE_);
		HUD.set_function("UI_PROMPT_HAS_PRESSED_TIMED_MODE_COMPLETED_", LUA_NATIVE_HUD_UI_PROMPT_HAS_PRESSED_TIMED_MODE_COMPLETED_);
		HUD.set_function("UI_PROMPT_HAS_PRESSED_TIMED_MODE_FAILED_", LUA_NATIVE_HUD_UI_PROMPT_HAS_PRESSED_TIMED_MODE_FAILED_);
		HUD.set_function("UI_PROMPT_SET_HOLD_MODE_", LUA_NATIVE_HUD_UI_PROMPT_SET_HOLD_MODE_);
		HUD.set_function("UI_PROMPT_SET_STANDARDIZED_HOLD_MODE_", LUA_NATIVE_HUD_UI_PROMPT_SET_STANDARDIZED_HOLD_MODE_);
		HUD.set_function("UI_PROMPT_SET_HOLD_INDEFINITELY_MODE_", LUA_NATIVE_HUD_UI_PROMPT_SET_HOLD_INDEFINITELY_MODE_);
		HUD.set_function("UI_PROMPT_SET_HOLD_AUTO_FILL_MODE_", LUA_NATIVE_HUD_UI_PROMPT_SET_HOLD_AUTO_FILL_MODE_);
		HUD.set_function("UI_PROMPT_SET_HOLD_AUTO_FILL_WITH_DECAY_MODE_", LUA_NATIVE_HUD_UI_PROMPT_SET_HOLD_AUTO_FILL_WITH_DECAY_MODE_);
		HUD.set_function("UI_PROMPT_HAS_HOLD_AUTO_FILL_MODE_", LUA_NATIVE_HUD_UI_PROMPT_HAS_HOLD_AUTO_FILL_MODE_);
		HUD.set_function("UI_PROMPT_HAS_HOLD_MODE_", LUA_NATIVE_HUD_UI_PROMPT_HAS_HOLD_MODE_);
		HUD.set_function("UI_PROMPT_IS_HOLD_MODE_RUNNING_", LUA_NATIVE_HUD_UI_PROMPT_IS_HOLD_MODE_RUNNING_);
		HUD.set_function("UI_PROMPT_HAS_HOLD_MODE_COMPLETED_", LUA_NATIVE_HUD_UI_PROMPT_HAS_HOLD_MODE_COMPLETED_);
		HUD.set_function("UI_PROMPT_GET_PROGRESS_", LUA_NATIVE_HUD_UI_PROMPT_GET_PROGRESS_);
		HUD.set_function("UI_PROMPT_SET_MASH_MODE_", LUA_NATIVE_HUD_UI_PROMPT_SET_MASH_MODE_);
		HUD.set_function("UI_PROMPT_SET_MASH_INDEFINITELY_MODE_", LUA_NATIVE_HUD_UI_PROMPT_SET_MASH_INDEFINITELY_MODE_);
		HUD.set_function("UI_PROMPT_SET_MASH_WITH_RESISTANCE_MODE_", LUA_NATIVE_HUD_UI_PROMPT_SET_MASH_WITH_RESISTANCE_MODE_);
		HUD.set_function("UI_PROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE_", LUA_NATIVE_HUD_UI_PROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE_);
		HUD.set_function("UI_PROMPT_SET_MASH_AUTO_FILL_MODE_", LUA_NATIVE_HUD_UI_PROMPT_SET_MASH_AUTO_FILL_MODE_);
		HUD.set_function("UI_PROMPT_SET_MASH_MANUAL_MODE_", LUA_NATIVE_HUD_UI_PROMPT_SET_MASH_MANUAL_MODE_);
		HUD.set_function("UI_PROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE_", LUA_NATIVE_HUD_UI_PROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE_);
		HUD.set_function("UI_PROMPT_HAS_MANUAL_MASH_MODE_", LUA_NATIVE_HUD_UI_PROMPT_HAS_MANUAL_MASH_MODE_);
		HUD.set_function("UI_PROMPT_HAS_MASH_MODE_", LUA_NATIVE_HUD_UI_PROMPT_HAS_MASH_MODE_);
		HUD.set_function("0xB0E8599243B3F568_", LUA_NATIVE_HUD_0xB0E8599243B3F568_);
		HUD.set_function("UI_PROMPT_HAS_MASH_MODE_COMPLETED_", LUA_NATIVE_HUD_UI_PROMPT_HAS_MASH_MODE_COMPLETED_);
		HUD.set_function("UI_PROMPT_HAS_MASH_MODE_FAILED_", LUA_NATIVE_HUD_UI_PROMPT_HAS_MASH_MODE_FAILED_);
		HUD.set_function("UI_PROMPT_GET_MASH_MODE_PROGRESS_", LUA_NATIVE_HUD_UI_PROMPT_GET_MASH_MODE_PROGRESS_);
		HUD.set_function("UI_PROMPT_SET_MASH_MANUAL_MODE_INCREASE_PER_PRESS_", LUA_NATIVE_HUD_UI_PROMPT_SET_MASH_MANUAL_MODE_INCREASE_PER_PRESS_);
		HUD.set_function("UI_PROMPT_SET_MASH_MANUAL_MODE_DECAY_SPEED_", LUA_NATIVE_HUD_UI_PROMPT_SET_MASH_MANUAL_MODE_DECAY_SPEED_);
		HUD.set_function("UI_PROMPT_SET_MASH_MANUAL_MODE_PRESSED_GROWTH_SPEED_", LUA_NATIVE_HUD_UI_PROMPT_SET_MASH_MANUAL_MODE_PRESSED_GROWTH_SPEED_);
		HUD.set_function("UI_PROMPT_SET_ROTATE_MODE_", LUA_NATIVE_HUD_UI_PROMPT_SET_ROTATE_MODE_);
		HUD.set_function("UI_PROMPT_SET_TARGET_MODE_", LUA_NATIVE_HUD_UI_PROMPT_SET_TARGET_MODE_);
		HUD.set_function("UI_PROMPT_SET_TARGET_MODE_TARGET_", LUA_NATIVE_HUD_UI_PROMPT_SET_TARGET_MODE_TARGET_);
		HUD.set_function("UI_PROMPT_SET_TARGET_MODE_PROGRESS_", LUA_NATIVE_HUD_UI_PROMPT_SET_TARGET_MODE_PROGRESS_);
		HUD.set_function("UI_PROMPT_SET_BEAT_MODE_", LUA_NATIVE_HUD_UI_PROMPT_SET_BEAT_MODE_);
		HUD.set_function("UI_PROMPT_WAS_BEAT_MODE_PRESSED_IN_TIME_WINDOW_", LUA_NATIVE_HUD_UI_PROMPT_WAS_BEAT_MODE_PRESSED_IN_TIME_WINDOW_);
		HUD.set_function("UI_PROMPT_SET_BEAT_MODE_GRAYED_OUT_", LUA_NATIVE_HUD_UI_PROMPT_SET_BEAT_MODE_GRAYED_OUT_);
		HUD.set_function("UI_PROMPT_RESTART_MODES_", LUA_NATIVE_HUD_UI_PROMPT_RESTART_MODES_);
		HUD.set_function("UI_PROMPT_SET_SPINNER_SPEED_", LUA_NATIVE_HUD_UI_PROMPT_SET_SPINNER_SPEED_);
		HUD.set_function("UI_PROMPT_SET_SPINNER_POSITION_", LUA_NATIVE_HUD_UI_PROMPT_SET_SPINNER_POSITION_);
		HUD.set_function("UI_PROMPT_SET_URGENT_PULSING_ENABLED_", LUA_NATIVE_HUD_UI_PROMPT_SET_URGENT_PULSING_ENABLED_);
		HUD.set_function("UI_PROMPT_GET_URGENT_PULSING_ENABLED_", LUA_NATIVE_HUD_UI_PROMPT_GET_URGENT_PULSING_ENABLED_);
		HUD.set_function("UI_PROMPT_SET_TAG_", LUA_NATIVE_HUD_UI_PROMPT_SET_TAG_);
		HUD.set_function("UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY_", LUA_NATIVE_HUD_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY_);
		HUD.set_function("UI_PROMPT_GET_GROUP_ID_FOR_SCENARIO_POINT_", LUA_NATIVE_HUD_UI_PROMPT_GET_GROUP_ID_FOR_SCENARIO_POINT_);
		HUD.set_function("UI_PROMPT_SET_GROUP_", LUA_NATIVE_HUD_UI_PROMPT_SET_GROUP_);
		HUD.set_function("UI_PROMPT_REMOVE_GROUP_", LUA_NATIVE_HUD_UI_PROMPT_REMOVE_GROUP_);
		HUD.set_function("UI_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME_", LUA_NATIVE_HUD_UI_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME_);
		HUD.set_function("UI_PROMPT_GET_GROUP_ACTIVE_PAGE_", LUA_NATIVE_HUD_UI_PROMPT_GET_GROUP_ACTIVE_PAGE_);
		HUD.set_function("UI_PROMPT_SET_AMBIENT_GROUP_THIS_FRAME_", LUA_NATIVE_HUD_UI_PROMPT_SET_AMBIENT_GROUP_THIS_FRAME_);
		HUD.set_function("0x8B55B324A9123F6B_", LUA_NATIVE_HUD_0x8B55B324A9123F6B_);
		HUD.set_function("UI_PROMPT_DOES_AMBIENT_GROUP_EXIST_", LUA_NATIVE_HUD_UI_PROMPT_DOES_AMBIENT_GROUP_EXIST_);
		HUD.set_function("UI_PROMPT_ADD_GROUP_LINK_", LUA_NATIVE_HUD_UI_PROMPT_ADD_GROUP_LINK_);
		HUD.set_function("UI_PROMPT_ADD_GROUP_RETURN_LINK_", LUA_NATIVE_HUD_UI_PROMPT_ADD_GROUP_RETURN_LINK_);
		HUD.set_function("UI_PROMPT_SET_TRANSPORT_MODE_", LUA_NATIVE_HUD_UI_PROMPT_SET_TRANSPORT_MODE_);
		HUD.set_function("UI_PROMPT_DISABLE_PROMPTS_THIS_FRAME_", LUA_NATIVE_HUD_UI_PROMPT_DISABLE_PROMPTS_THIS_FRAME_);
		HUD.set_function("UI_PROMPT_DELETE_", LUA_NATIVE_HUD_UI_PROMPT_DELETE_);
		HUD.set_function("UI_PROMPT_IS_VALID_", LUA_NATIVE_HUD_UI_PROMPT_IS_VALID_);
		HUD.set_function("UI_PROMPT_IS_ACTIVE_", LUA_NATIVE_HUD_UI_PROMPT_IS_ACTIVE_);
		HUD.set_function("UI_PROMPT_SET_VISIBLE_", LUA_NATIVE_HUD_UI_PROMPT_SET_VISIBLE_);
		HUD.set_function("UI_PROMPT_SET_ENABLED_", LUA_NATIVE_HUD_UI_PROMPT_SET_ENABLED_);
		HUD.set_function("UI_PROMPT_SET_TEXT_", LUA_NATIVE_HUD_UI_PROMPT_SET_TEXT_);
		HUD.set_function("UI_PROMPT_SET_ATTRIBUTE_", LUA_NATIVE_HUD_UI_PROMPT_SET_ATTRIBUTE_);
		HUD.set_function("UI_PROMPT_SET_TYPE_", LUA_NATIVE_HUD_UI_PROMPT_SET_TYPE_);
		HUD.set_function("0x53CE46C01A089DA1_", LUA_NATIVE_HUD_0x53CE46C01A089DA1_);
		HUD.set_function("UI_PROMPT_SET_MANUAL_RESOLVED_", LUA_NATIVE_HUD_UI_PROMPT_SET_MANUAL_RESOLVED_);
		HUD.set_function("UI_PROMPT_CONTEXT_SET_VOLUME_", LUA_NATIVE_HUD_UI_PROMPT_CONTEXT_SET_VOLUME_);
		HUD.set_function("UI_PROMPT_CONTEXT_SET_POINT_", LUA_NATIVE_HUD_UI_PROMPT_CONTEXT_SET_POINT_);
		HUD.set_function("UI_PROMPT_CONTEXT_SET_RADIUS_", LUA_NATIVE_HUD_UI_PROMPT_CONTEXT_SET_RADIUS_);
		HUD.set_function("UI_PROMPT_IS_PRESSED_", LUA_NATIVE_HUD_UI_PROMPT_IS_PRESSED_);
		HUD.set_function("UI_PROMPT_IS_JUST_PRESSED_", LUA_NATIVE_HUD_UI_PROMPT_IS_JUST_PRESSED_);
		HUD.set_function("UI_PROMPT_IS_JUST_RELEASED_", LUA_NATIVE_HUD_UI_PROMPT_IS_JUST_RELEASED_);
		HUD.set_function("UI_PROMPT_IS_RELEASED_", LUA_NATIVE_HUD_UI_PROMPT_IS_RELEASED_);
		HUD.set_function("UI_PROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME_", LUA_NATIVE_HUD_UI_PROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME_);
		HUD.set_function("UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME_", LUA_NATIVE_HUD_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME_);
		HUD.set_function("UI_PROMPT_FILTER_CLEAR_", LUA_NATIVE_HUD_UI_PROMPT_FILTER_CLEAR_);
		HUD.set_function("UI_PROMPT_SET_PROMPT_PRIORITY_PREFERENCE_", LUA_NATIVE_HUD_UI_PROMPT_SET_PROMPT_PRIORITY_PREFERENCE_);
		HUD.set_function("UI_PROMPT_CLEAR_PROMPT_PRIORITY_PREFERENCE_", LUA_NATIVE_HUD_UI_PROMPT_CLEAR_PROMPT_PRIORITY_PREFERENCE_);
		HUD.set_function("UI_PROMPT_IS_ENABLED_", LUA_NATIVE_HUD_UI_PROMPT_IS_ENABLED_);
		HUD.set_function("UI_PROMPT_IS_CONTROL_ACTION_ACTIVE", LUA_NATIVE_HUD_UI_PROMPT_IS_CONTROL_ACTION_ACTIVE);
		HUD.set_function("0xD6BD313CFA41E57A_", LUA_NATIVE_HUD_0xD6BD313CFA41E57A_);
		HUD.set_function("UI_PROMPT_SET_REGISTER_HORIZONTAL_ORIENTATION_", LUA_NATIVE_HUD_UI_PROMPT_SET_REGISTER_HORIZONTAL_ORIENTATION_);
		HUD.set_function("UI_PROMPT_CLEAR_HORIZONTAL_ORIENTATION_", LUA_NATIVE_HUD_UI_PROMPT_CLEAR_HORIZONTAL_ORIENTATION_);
		HUD.set_function("UI_PROMPT_SET_ORDERING_AS_INPUT_TYPE_", LUA_NATIVE_HUD_UI_PROMPT_SET_ORDERING_AS_INPUT_TYPE_);
		HUD.set_function("0x066725A9D52B3641_", LUA_NATIVE_HUD_0x066725A9D52B3641_);
		HUD.set_function("0x958278B97C4AFFD8_", LUA_NATIVE_HUD_0x958278B97C4AFFD8_);
		HUD.set_function("CREATE_MP_GAMER_TAG_", LUA_NATIVE_HUD_CREATE_MP_GAMER_TAG_);
		HUD.set_function("CREATE_FAKE_MP_GAMER_TAG", LUA_NATIVE_HUD_CREATE_FAKE_MP_GAMER_TAG);
		HUD.set_function("CREATE_MP_GAMER_TAG_ON_ENTITY_", LUA_NATIVE_HUD_CREATE_MP_GAMER_TAG_ON_ENTITY_);
		HUD.set_function("REMOVE_MP_GAMER_TAG", LUA_NATIVE_HUD_REMOVE_MP_GAMER_TAG);
		HUD.set_function("IS_MP_GAMER_TAG_ACTIVE", LUA_NATIVE_HUD_IS_MP_GAMER_TAG_ACTIVE);
		HUD.set_function("IS_MP_GAMER_TAG_ACTIVE_ON_ENTITY_", LUA_NATIVE_HUD_IS_MP_GAMER_TAG_ACTIVE_ON_ENTITY_);
		HUD.set_function("SET_MP_GAMER_TAG_VISIBILITY_", LUA_NATIVE_HUD_SET_MP_GAMER_TAG_VISIBILITY_);
		HUD.set_function("SET_MP_GAMER_TAG_TYPE_", LUA_NATIVE_HUD_SET_MP_GAMER_TAG_TYPE_);
		HUD.set_function("SET_MP_GAMER_TAG_COLOUR_", LUA_NATIVE_HUD_SET_MP_GAMER_TAG_COLOUR_);
		HUD.set_function("SET_MP_GAMER_TAG_UNK_ALLOW_LOCALIZED_", LUA_NATIVE_HUD_SET_MP_GAMER_TAG_UNK_ALLOW_LOCALIZED_);
		HUD.set_function("SET_MP_GAMER_TAG_NAME", LUA_NATIVE_HUD_SET_MP_GAMER_TAG_NAME);
		HUD.set_function("SET_MP_GAMER_TAG_NAME_POSSE_", LUA_NATIVE_HUD_SET_MP_GAMER_TAG_NAME_POSSE_);
		HUD.set_function("SET_MP_GAMER_TAG_BIG_TEXT", LUA_NATIVE_HUD_SET_MP_GAMER_TAG_BIG_TEXT);
		HUD.set_function("SET_MP_GAMER_TAG_TOP_ICON_", LUA_NATIVE_HUD_SET_MP_GAMER_TAG_TOP_ICON_);
		HUD.set_function("SET_MP_GAMER_TAG_SECONDARY_ICON_", LUA_NATIVE_HUD_SET_MP_GAMER_TAG_SECONDARY_ICON_);
		HUD.set_function("MP_GAMER_TAG_ENABLE_REVIVE_TOP_ICON_", LUA_NATIVE_HUD_MP_GAMER_TAG_ENABLE_REVIVE_TOP_ICON_);
		HUD.set_function("MP_GAMER_TAG_DISABLE_REVIVE_TOP_ICON_", LUA_NATIVE_HUD_MP_GAMER_TAG_DISABLE_REVIVE_TOP_ICON_);
	}
}
