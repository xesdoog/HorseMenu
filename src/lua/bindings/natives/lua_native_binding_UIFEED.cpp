#include "lua_native_binding.hpp"
#include "game/rdr/Natives.hpp"

namespace Lua::native
{
	static int LUA_NATIVE_UIFEED_UI_FEED_POST_HELP_TEXT_(uintptr_t p0, uintptr_t p1, bool p2)
	{
		auto retval = UIFEED::_UI_FEED_POST_HELP_TEXT((Any*)p0, (Any*)p1, p2);
		return retval;
	}

	static int LUA_NATIVE_UIFEED_UI_FEED_POST_LOCATION_SHARD_(uintptr_t duration, uintptr_t data, bool p2, bool p3)
	{
		auto retval = UIFEED::_UI_FEED_POST_LOCATION_SHARD((Any*)duration, (Any*)data, p2, p3);
		return retval;
	}

	static int LUA_NATIVE_UIFEED_UI_FEED_POST_OBJECTIVE_(uintptr_t p0, uintptr_t p1, bool p2)
	{
		auto retval = UIFEED::_UI_FEED_POST_OBJECTIVE((Any*)p0, (Any*)p1, p2);
		return retval;
	}

	static int LUA_NATIVE_UIFEED_UI_FEED_POST_FEED_TICKER_(uintptr_t p0, uintptr_t p1, bool p2)
	{
		auto retval = UIFEED::_UI_FEED_POST_FEED_TICKER((Any*)p0, (Any*)p1, p2);
		return retval;
	}

	static int LUA_NATIVE_UIFEED_UI_FEED_POST_SAMPLE_TOAST_(uintptr_t p0, uintptr_t p1, bool p2, bool p3)
	{
		auto retval = UIFEED::_UI_FEED_POST_SAMPLE_TOAST((Any*)p0, (Any*)p1, p2, p3);
		return retval;
	}

	static int LUA_NATIVE_UIFEED_0xAFF5BE9BA496CE40_(uintptr_t p0, uintptr_t p1, bool p2, bool p3, Hash collectableCategory)
	{
		auto retval = UIFEED::_0xAFF5BE9BA496CE40((Any*)p0, (Any*)p1, p2, p3, collectableCategory);
		return retval;
	}

	static int LUA_NATIVE_UIFEED_UI_FEED_POST_SAMPLE_TOAST_WITH_APP_LINK_(uintptr_t p0, uintptr_t p1, bool p2, bool p3, bool p4)
	{
		auto retval = UIFEED::_UI_FEED_POST_SAMPLE_TOAST_WITH_APP_LINK((Any*)p0, (Any*)p1, p2, p3, p4);
		return retval;
	}

	static int LUA_NATIVE_UIFEED_UI_FEED_POST_SAMPLE_NOTIFICATION_(uintptr_t p0, uintptr_t p1, int p2, int p3)
	{
		auto retval = UIFEED::_UI_FEED_POST_SAMPLE_NOTIFICATION((Any*)p0, (Any*)p1, p2, p3);
		return retval;
	}

	static int LUA_NATIVE_UIFEED_UI_FEED_POST_RANKUP_TOAST_(uintptr_t p0, uintptr_t p1, int p2, int p3)
	{
		auto retval = UIFEED::_UI_FEED_POST_RANKUP_TOAST((Any*)p0, (Any*)p1, p2, p3);
		return retval;
	}

	static int LUA_NATIVE_UIFEED_0x18D6869FBFFEC0F8_(uintptr_t p0, uintptr_t p1, bool p2, bool p3)
	{
		auto retval = UIFEED::_0x18D6869FBFFEC0F8((Any*)p0, (Any*)p1, p2, p3);
		return retval;
	}

	static int LUA_NATIVE_UIFEED_UI_FEED_POST_SAMPLE_TOAST_RIGHT_(uintptr_t p0, uintptr_t p1, bool p2)
	{
		auto retval = UIFEED::_UI_FEED_POST_SAMPLE_TOAST_RIGHT((Any*)p0, (Any*)p1, p2);
		return retval;
	}

	static int LUA_NATIVE_UIFEED_UI_FEED_POST_MISSION_NAME_(uintptr_t p0, uintptr_t p1, bool p2)
	{
		auto retval = UIFEED::_UI_FEED_POST_MISSION_NAME((Any*)p0, (Any*)p1, p2);
		return retval;
	}

	static int LUA_NATIVE_UIFEED_UI_FEED_POST_RETICLE_MESSAGE_(uintptr_t p0, uintptr_t p1, bool p2)
	{
		auto retval = UIFEED::_UI_FEED_POST_RETICLE_MESSAGE((Any*)p0, (Any*)p1, p2);
		return retval;
	}

	static int LUA_NATIVE_UIFEED_UI_FEED_POST_ONE_TEXT_SHARD_(uintptr_t p0, uintptr_t p1, bool p2)
	{
		auto retval = UIFEED::_UI_FEED_POST_ONE_TEXT_SHARD((Any*)p0, (Any*)p1, p2);
		return retval;
	}

	static int LUA_NATIVE_UIFEED_UI_FEED_POST_TWO_TEXT_SHARD_(uintptr_t p0, uintptr_t p1, bool p2, bool p3)
	{
		auto retval = UIFEED::_UI_FEED_POST_TWO_TEXT_SHARD((Any*)p0, (Any*)p1, p2, p3);
		return retval;
	}

	static int LUA_NATIVE_UIFEED_UI_FEED_POST_THREE_TEXT_SHARD_(uintptr_t p0, uintptr_t p1, bool p2, bool p3, bool p4)
	{
		auto retval = UIFEED::_UI_FEED_POST_THREE_TEXT_SHARD((Any*)p0, (Any*)p1, p2, p3, p4);
		return retval;
	}

	static int LUA_NATIVE_UIFEED_UI_FEED_POST_GAME_UPDATE_SHARD_(uintptr_t p0, uintptr_t p1, bool p2)
	{
		auto retval = UIFEED::_UI_FEED_POST_GAME_UPDATE_SHARD((Any*)p0, (Any*)p1, p2);
		return retval;
	}

	static int LUA_NATIVE_UIFEED_UI_FEED_POST_VOICE_CHAT_FEED_(uintptr_t p0, uintptr_t p1, bool p2)
	{
		auto retval = UIFEED::_UI_FEED_POST_VOICE_CHAT_FEED((Any*)p0, (Any*)p1, p2);
		return retval;
	}

	static void LUA_NATIVE_UIFEED_UI_FEED_CLEAR_CHANNEL(int feedChannel, bool p1, bool p2)
	{
		UIFEED::UI_FEED_CLEAR_CHANNEL(feedChannel, p1, p2);
	}

	static void LUA_NATIVE_UIFEED_UI_FEED_CLEAR_ALL_CHANNELS_()
	{
		UIFEED::_UI_FEED_CLEAR_ALL_CHANNELS();
	}

	static void LUA_NATIVE_UIFEED_UI_FEED_CLEAR_HELP_TEXT_FEED_(int feedMessage, bool p1)
	{
		UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(feedMessage, p1);
	}

	static void LUA_NATIVE_UIFEED_0x6D85126F6CCF02C9_(int feedChannel, int p1, bool p2)
	{
		UIFEED::_0x6D85126F6CCF02C9(feedChannel, p1, p2);
	}

	static int LUA_NATIVE_UIFEED_0x4E88A65968A55C78_(uintptr_t p0, bool p1)
	{
		auto retval = UIFEED::_0x4E88A65968A55C78((Any*)p0, p1);
		return retval;
	}

	static int LUA_NATIVE_UIFEED_0x0FD07141AD048AAE_(uintptr_t p0, bool p1)
	{
		auto retval = UIFEED::_0x0FD07141AD048AAE((Any*)p0, p1);
		return retval;
	}

	static int LUA_NATIVE_UIFEED_UI_FEED_GET_MESSAGE_STATE_(int feedMessage)
	{
		auto retval = UIFEED::_UI_FEED_GET_MESSAGE_STATE(feedMessage);
		return retval;
	}

	static int LUA_NATIVE_UIFEED_UI_FEED_GET_CURRENT_MESSAGE(int feedChannel)
	{
		auto retval = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(feedChannel);
		return retval;
	}

	static bool LUA_NATIVE_UIFEED_0xB7223B91CD6B7E07_(int feedChannel)
	{
		auto retval = (bool)UIFEED::_0xB7223B91CD6B7E07(feedChannel);
		return retval;
	}

	void init_native_binding_UIFEED(sol::state& L)
	{
		auto UIFEED = L["UIFEED"].get_or_create<sol::table>();
		UIFEED.set_function("UI_FEED_POST_HELP_TEXT_", LUA_NATIVE_UIFEED_UI_FEED_POST_HELP_TEXT_);
		UIFEED.set_function("UI_FEED_POST_LOCATION_SHARD_", LUA_NATIVE_UIFEED_UI_FEED_POST_LOCATION_SHARD_);
		UIFEED.set_function("UI_FEED_POST_OBJECTIVE_", LUA_NATIVE_UIFEED_UI_FEED_POST_OBJECTIVE_);
		UIFEED.set_function("UI_FEED_POST_FEED_TICKER_", LUA_NATIVE_UIFEED_UI_FEED_POST_FEED_TICKER_);
		UIFEED.set_function("UI_FEED_POST_SAMPLE_TOAST_", LUA_NATIVE_UIFEED_UI_FEED_POST_SAMPLE_TOAST_);
		UIFEED.set_function("0xAFF5BE9BA496CE40_", LUA_NATIVE_UIFEED_0xAFF5BE9BA496CE40_);
		UIFEED.set_function("UI_FEED_POST_SAMPLE_TOAST_WITH_APP_LINK_", LUA_NATIVE_UIFEED_UI_FEED_POST_SAMPLE_TOAST_WITH_APP_LINK_);
		UIFEED.set_function("UI_FEED_POST_SAMPLE_NOTIFICATION_", LUA_NATIVE_UIFEED_UI_FEED_POST_SAMPLE_NOTIFICATION_);
		UIFEED.set_function("UI_FEED_POST_RANKUP_TOAST_", LUA_NATIVE_UIFEED_UI_FEED_POST_RANKUP_TOAST_);
		UIFEED.set_function("0x18D6869FBFFEC0F8_", LUA_NATIVE_UIFEED_0x18D6869FBFFEC0F8_);
		UIFEED.set_function("UI_FEED_POST_SAMPLE_TOAST_RIGHT_", LUA_NATIVE_UIFEED_UI_FEED_POST_SAMPLE_TOAST_RIGHT_);
		UIFEED.set_function("UI_FEED_POST_MISSION_NAME_", LUA_NATIVE_UIFEED_UI_FEED_POST_MISSION_NAME_);
		UIFEED.set_function("UI_FEED_POST_RETICLE_MESSAGE_", LUA_NATIVE_UIFEED_UI_FEED_POST_RETICLE_MESSAGE_);
		UIFEED.set_function("UI_FEED_POST_ONE_TEXT_SHARD_", LUA_NATIVE_UIFEED_UI_FEED_POST_ONE_TEXT_SHARD_);
		UIFEED.set_function("UI_FEED_POST_TWO_TEXT_SHARD_", LUA_NATIVE_UIFEED_UI_FEED_POST_TWO_TEXT_SHARD_);
		UIFEED.set_function("UI_FEED_POST_THREE_TEXT_SHARD_", LUA_NATIVE_UIFEED_UI_FEED_POST_THREE_TEXT_SHARD_);
		UIFEED.set_function("UI_FEED_POST_GAME_UPDATE_SHARD_", LUA_NATIVE_UIFEED_UI_FEED_POST_GAME_UPDATE_SHARD_);
		UIFEED.set_function("UI_FEED_POST_VOICE_CHAT_FEED_", LUA_NATIVE_UIFEED_UI_FEED_POST_VOICE_CHAT_FEED_);
		UIFEED.set_function("UI_FEED_CLEAR_CHANNEL", LUA_NATIVE_UIFEED_UI_FEED_CLEAR_CHANNEL);
		UIFEED.set_function("UI_FEED_CLEAR_ALL_CHANNELS_", LUA_NATIVE_UIFEED_UI_FEED_CLEAR_ALL_CHANNELS_);
		UIFEED.set_function("UI_FEED_CLEAR_HELP_TEXT_FEED_", LUA_NATIVE_UIFEED_UI_FEED_CLEAR_HELP_TEXT_FEED_);
		UIFEED.set_function("0x6D85126F6CCF02C9_", LUA_NATIVE_UIFEED_0x6D85126F6CCF02C9_);
		UIFEED.set_function("0x4E88A65968A55C78_", LUA_NATIVE_UIFEED_0x4E88A65968A55C78_);
		UIFEED.set_function("0x0FD07141AD048AAE_", LUA_NATIVE_UIFEED_0x0FD07141AD048AAE_);
		UIFEED.set_function("UI_FEED_GET_MESSAGE_STATE_", LUA_NATIVE_UIFEED_UI_FEED_GET_MESSAGE_STATE_);
		UIFEED.set_function("UI_FEED_GET_CURRENT_MESSAGE", LUA_NATIVE_UIFEED_UI_FEED_GET_CURRENT_MESSAGE);
		UIFEED.set_function("0xB7223B91CD6B7E07_", LUA_NATIVE_UIFEED_0xB7223B91CD6B7E07_);
	}
}
