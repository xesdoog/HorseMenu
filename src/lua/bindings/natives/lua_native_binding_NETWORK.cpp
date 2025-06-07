#include "lua_native_binding.hpp"
#include "game/rdr/Natives.hpp"

namespace Lua::native
{
	static bool LUA_NATIVE_NETWORK_NETWORK_IS_SIGNED_ONLINE()
	{
		auto retval = (bool)NETWORK::NETWORK_IS_SIGNED_ONLINE();
		return retval;
	}

	static int LUA_NATIVE_NETWORK_NETWORK_GET_NP_UNAVAILABLE_REASON()
	{
		auto retval = NETWORK::NETWORK_GET_NP_UNAVAILABLE_REASON();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_HAS_VALID_ROS_CREDENTIALS()
	{
		auto retval = (bool)NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_IS_CLOUD_AVAILABLE()
	{
		auto retval = (bool)NETWORK::NETWORK_IS_CLOUD_AVAILABLE();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_HAS_SOCIAL_CLUB_ACCOUNT()
	{
		auto retval = (bool)NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_IS_HOST()
	{
		auto retval = (bool)NETWORK::NETWORK_IS_HOST();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_HAVE_ONLINE_PRIVILEGES()
	{
		auto retval = (bool)NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_CHECK_USER_CONTENT_PRIVILEGES(int nGamerIndex)
	{
		auto retval = (bool)NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(nGamerIndex);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_CHECK_COMMUNICATION_PRIVILEGES(int nGamerIndex)
	{
		auto retval = (bool)NETWORK::NETWORK_CHECK_COMMUNICATION_PRIVILEGES(nGamerIndex);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_CAN_VIEW_GAMER_USER_CONTENT(uintptr_t gamerHandle)
	{
		auto retval = (bool)NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT((Any*)gamerHandle);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_0xF23A6D6C11D8EC15_(uintptr_t gamerHandle)
	{
		auto retval = (bool)NETWORK::_0xF23A6D6C11D8EC15((Any*)gamerHandle);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_0x3E8CCE6769DB5F34_(int p0)
	{
		auto retval = NETWORK::_0x3E8CCE6769DB5F34(p0);
		return retval;
	}

	static void LUA_NATIVE_NETWORK_NETWORK_SHOW_ACCOUNT_UPGRADE_UI()
	{
		NETWORK::NETWORK_SHOW_ACCOUNT_UPGRADE_UI();
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_IS_PROMOTION_ENABLED()
	{
		auto retval = (bool)NETWORK::NETWORK_IS_PROMOTION_ENABLED();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_IS_CUSTOM_UPSELL_ENABLED()
	{
		auto retval = (bool)NETWORK::NETWORK_IS_CUSTOM_UPSELL_ENABLED();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_SHOULD_SHOW_PROMOTION_DLG()
	{
		auto retval = (bool)NETWORK::NETWORK_SHOULD_SHOW_PROMOTION_DLG();
		return retval;
	}

	static void LUA_NATIVE_NETWORK_0xFC6FCF4C03F1BBF6_()
	{
		NETWORK::_0xFC6FCF4C03F1BBF6();
	}

	static Any LUA_NATIVE_NETWORK_0x160F0CE6D76A39C9_()
	{
		auto retval = NETWORK::_0x160F0CE6D76A39C9();
		return retval;
	}

	static int LUA_NATIVE_NETWORK_NETWORK_GET_PROMOTION_DLG_SEEN_COUNT()
	{
		auto retval = NETWORK::NETWORK_GET_PROMOTION_DLG_SEEN_COUNT();
		return retval;
	}

	static void LUA_NATIVE_NETWORK_0xE5FF65CFF5160752_()
	{
		NETWORK::_0xE5FF65CFF5160752();
	}

	static std::tuple<bool, int> LUA_NATIVE_NETWORK_NETWORK_CAN_ACCESS_MULTIPLAYER(int nAccessCode)
	{
		std::tuple<bool, int> return_values;
		std::get<0>(return_values) = (bool)NETWORK::NETWORK_CAN_ACCESS_MULTIPLAYER(&nAccessCode);
		std::get<1>(return_values) = nAccessCode;

		return return_values;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_CHECK_ACCESS_AND_ALERT_IF_FAIL()
	{
		auto retval = (bool)NETWORK::NETWORK_CHECK_ACCESS_AND_ALERT_IF_FAIL();
		return retval;
	}

	static int LUA_NATIVE_NETWORK_NETWORK_GET_GLOBAL_ENTITY_FLAGS_(Entity entity)
	{
		auto retval = NETWORK::_NETWORK_GET_GLOBAL_ENTITY_FLAGS(entity);
		return retval;
	}

	static void LUA_NATIVE_NETWORK_0xA95470DA137587F5_(bool p0)
	{
		NETWORK::_0xA95470DA137587F5(p0);
	}

	static Any LUA_NATIVE_NETWORK_0xBB697756309D77EE_(bool p0)
	{
		auto retval = NETWORK::_0xBB697756309D77EE(p0);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT_()
	{
		auto retval = (bool)NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_SET_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT(bool completed)
	{
		auto retval = (bool)NETWORK::NETWORK_SET_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT(completed);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_0xD7D0DF27CB1765B5_(int p0)
	{
		auto retval = (bool)NETWORK::_0xD7D0DF27CB1765B5(p0);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_SET_MP_MISSION_FLAG_ON_CURRENT_SLOT(bool enabled, int flagIndex)
	{
		auto retval = (bool)NETWORK::NETWORK_SET_MP_MISSION_FLAG_ON_CURRENT_SLOT(enabled, flagIndex);
		return retval;
	}

	static void LUA_NATIVE_NETWORK_0x3E74A687A73979C6_(bool p0)
	{
		NETWORK::_0x3E74A687A73979C6(p0);
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_SESSION_IS_PRIVATE()
	{
		auto retval = (bool)NETWORK::NETWORK_SESSION_IS_PRIVATE();
		return retval;
	}

	static void LUA_NATIVE_NETWORK_NETWORK_SESSION_GET_SESSION_ID_(uintptr_t sessionId)
	{
		NETWORK::_NETWORK_SESSION_GET_SESSION_ID((Any*)sessionId);
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_SESSION_ARE_SESSION_IDS_EQUAL_(uintptr_t sessionId1, uintptr_t sessionId2)
	{
		auto retval = (bool)NETWORK::_NETWORK_SESSION_ARE_SESSION_IDS_EQUAL((Any*)sessionId1, (Any*)sessionId2);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_REQUEST_SESSION_SEAMLESS(int flags, int seamlessType, uintptr_t sessionRequestId)
	{
		auto retval = (bool)NETWORK::NETWORK_REQUEST_SESSION_SEAMLESS(flags, seamlessType, (Any*)sessionRequestId);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_SESSION_REQUEST_SESSION_SEAMLESS(int flags, int seamlessType, int userHash, uintptr_t sessionRequestId)
	{
		auto retval = (bool)NETWORK::NETWORK_SESSION_REQUEST_SESSION_SEAMLESS(flags, seamlessType, userHash, (Any*)sessionRequestId);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_SESSION_REQUEST_SESSION_COMPETITIVE(int flags, int matchType, int userHash, int p3, uintptr_t sessionRequestId)
	{
		auto retval = (bool)NETWORK::NETWORK_SESSION_REQUEST_SESSION_COMPETITIVE(flags, matchType, userHash, p3, (Any*)sessionRequestId);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_SESSION_REQUEST_SESSION_PRIVATE(int flags, int numPlayers, int userHash, uintptr_t sessionRequestId)
	{
		auto retval = (bool)NETWORK::NETWORK_SESSION_REQUEST_SESSION_PRIVATE(flags, numPlayers, userHash, (Any*)sessionRequestId);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_SESSION_REQUEST_SESSION_ON_CALL_(int flags, int category, uintptr_t p2, int userHash, uintptr_t sessionRequestId)
	{
		auto retval = (bool)NETWORK::_NETWORK_SESSION_REQUEST_SESSION_ON_CALL(flags, category, (Any*)p2, userHash, (Any*)sessionRequestId);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_SESSION_REQUEST_SESSION_NOMINATED_(int flags, int userHash, int p2, uintptr_t sessionRequestId)
	{
		auto retval = (bool)NETWORK::_NETWORK_SESSION_REQUEST_SESSION_NOMINATED(flags, userHash, p2, (Any*)sessionRequestId);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_SESSION_IS_SESSION_REQUEST_ID_VALID(uintptr_t sessionRequestId)
	{
		auto retval = (bool)NETWORK::NETWORK_SESSION_IS_SESSION_REQUEST_ID_VALID((Any*)sessionRequestId);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_NETWORK_SESSION_GET_SESSION_TYPE()
	{
		auto retval = NETWORK::NETWORK_SESSION_GET_SESSION_TYPE();
		return retval;
	}

	static int LUA_NATIVE_NETWORK_0x1413B6BF27AB7A95_()
	{
		auto retval = NETWORK::_0x1413B6BF27AB7A95();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_SESSION_IS_ANY_REQUEST_IN_PROGRESS()
	{
		auto retval = (bool)NETWORK::NETWORK_SESSION_IS_ANY_REQUEST_IN_PROGRESS();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_0xAFA14F98327791CE_(uintptr_t sessionRequestId)
	{
		auto retval = (bool)NETWORK::_0xAFA14F98327791CE((Any*)sessionRequestId);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_SESSION_IS_REQUEST_IN_PROGRESS(uintptr_t sessionRequestId)
	{
		auto retval = (bool)NETWORK::NETWORK_SESSION_IS_REQUEST_IN_PROGRESS((Any*)sessionRequestId);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_SESSION_IS_REQUEST_IN_PROGRESS_BY_QUEUE_GROUP_(int queueGroup)
	{
		auto retval = (bool)NETWORK::_NETWORK_SESSION_IS_REQUEST_IN_PROGRESS_BY_QUEUE_GROUP(queueGroup);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_SESSION_CANCEL_REQUEST_(uintptr_t sessionRequestId)
	{
		auto retval = (bool)NETWORK::_NETWORK_SESSION_CANCEL_REQUEST((Any*)sessionRequestId);
		return retval;
	}

	static void LUA_NATIVE_NETWORK_0xA6F1BAABFF6AD7B9_(uintptr_t p0)
	{
		NETWORK::_0xA6F1BAABFF6AD7B9((Any*)p0);
	}

	static std::tuple<int, int> LUA_NATIVE_NETWORK_NETWORK_SESSION_GET_SESSION_REQUEST_RESULT_(uintptr_t sessionRequestId, int p1)
	{
		std::tuple<int, int> return_values;
		std::get<0>(return_values) = NETWORK::_NETWORK_SESSION_GET_SESSION_REQUEST_RESULT((Any*)sessionRequestId, &p1);
		std::get<1>(return_values) = p1;

		return return_values;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_SESSION_IS_REQUEST_PENDING_TRANSITION(uintptr_t sessionRequestId)
	{
		auto retval = (bool)NETWORK::NETWORK_SESSION_IS_REQUEST_PENDING_TRANSITION((Any*)sessionRequestId);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_SESSION_TRANSITION_TO_SESSION_(uintptr_t sessionRequestId)
	{
		auto retval = (bool)NETWORK::_NETWORK_SESSION_TRANSITION_TO_SESSION((Any*)sessionRequestId);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_SESSION_IS_NSRR_SUCCESS_(uintptr_t sessionRequestId)
	{
		auto retval = (bool)NETWORK::_NETWORK_SESSION_IS_NSRR_SUCCESS((Any*)sessionRequestId);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_SESSION_LEFT_QUEUE_OR_REQUESTED_SESSION(uintptr_t sessionRequestId)
	{
		auto retval = (bool)NETWORK::NETWORK_SESSION_LEFT_QUEUE_OR_REQUESTED_SESSION((Any*)sessionRequestId);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_SESSION_LEAVE_SESSION()
	{
		auto retval = (bool)NETWORK::NETWORK_SESSION_LEAVE_SESSION();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_SESSION_IS_TRANSITIONING()
	{
		auto retval = (bool)NETWORK::NETWORK_SESSION_IS_TRANSITIONING();
		return retval;
	}

	static void LUA_NATIVE_NETWORK_0xFD4272A137703449_()
	{
		NETWORK::_0xFD4272A137703449();
	}

	static void LUA_NATIVE_NETWORK_NETWORK_SESSION_PLAYLIST_GO_TO_NEXT_CONTENT_()
	{
		NETWORK::_NETWORK_SESSION_PLAYLIST_GO_TO_NEXT_CONTENT();
	}

	static void LUA_NATIVE_NETWORK_NETWORK_SESSION_PLAYLIST_GET_UPCOMING_CONTENT_()
	{
		NETWORK::_NETWORK_SESSION_PLAYLIST_GET_UPCOMING_CONTENT();
	}

	static void LUA_NATIVE_NETWORK_NETWORK_DISABLE_REALTIME_MULTIPLAYER()
	{
		NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	}

	static void LUA_NATIVE_NETWORK_0x71FA2D1880C48032_(bool p0)
	{
		NETWORK::_0x71FA2D1880C48032(p0);
	}

	static std::tuple<int, int, int> LUA_NATIVE_NETWORK_NETWORK_GET_GLOBAL_MULTIPLAYER_CLOCK(int nHour, int nMinute, int nSecond)
	{
		std::tuple<int, int, int> return_values;
		NETWORK::NETWORK_GET_GLOBAL_MULTIPLAYER_CLOCK(&nHour, &nMinute, &nSecond);
		std::get<0>(return_values) = nHour;
		std::get<1>(return_values) = nMinute;
		std::get<2>(return_values) = nSecond;

		return return_values;
	}

	static void LUA_NATIVE_NETWORK_NETWORK_CLEAR_CLOCK_TIME_OVERRIDE()
	{
		NETWORK::NETWORK_CLEAR_CLOCK_TIME_OVERRIDE();
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_IS_CLOCK_TIME_OVERRIDDEN()
	{
		auto retval = (bool)NETWORK::NETWORK_IS_CLOCK_TIME_OVERRIDDEN();
		return retval;
	}

	static std::tuple<bool, int, int, int> LUA_NATIVE_NETWORK_NETWORK_GET_GLOBAL_CLOCK(int hour, int minute, int second)
	{
		std::tuple<bool, int, int, int> return_values;
		std::get<0>(return_values) = (bool)NETWORK::NETWORK_GET_GLOBAL_CLOCK(&hour, &minute, &second);
		std::get<1>(return_values) = hour;
		std::get<2>(return_values) = minute;
		std::get<3>(return_values) = second;

		return return_values;
	}

	static void LUA_NATIVE_NETWORK_NETWORK_CLOCK_TIME_OVERRIDE_(int hour, int minute, int second, int transitionTime, bool pauseClock)
	{
		NETWORK::_NETWORK_CLOCK_TIME_OVERRIDE(hour, minute, second, transitionTime, pauseClock);
	}

	static void LUA_NATIVE_NETWORK_NETWORK_CLOCK_TIME_OVERRIDE_2_(int hour, int minute, int second, int transitionTime, bool pauseClock, bool clockwise)
	{
		NETWORK::_NETWORK_CLOCK_TIME_OVERRIDE_2(hour, minute, second, transitionTime, pauseClock, clockwise);
	}

	static void LUA_NATIVE_NETWORK_NETWORK_CLEAR_CLOCK_OVERRIDE_OVERTIME_(int milliseconds)
	{
		NETWORK::_NETWORK_CLEAR_CLOCK_OVERRIDE_OVERTIME(milliseconds);
	}

	static bool LUA_NATIVE_NETWORK_0x0E54D4DA6018FF8E_()
	{
		auto retval = (bool)NETWORK::_0x0E54D4DA6018FF8E();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_IS_FINDING_GAMERS()
	{
		auto retval = (bool)NETWORK::NETWORK_IS_FINDING_GAMERS();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_DID_FIND_GAMERS_SUCCEED()
	{
		auto retval = (bool)NETWORK::NETWORK_DID_FIND_GAMERS_SUCCEED();
		return retval;
	}

	static int LUA_NATIVE_NETWORK_0x7BCA0A3972708436_(uintptr_t outData, int p1)
	{
		auto retval = NETWORK::_0x7BCA0A3972708436((Any*)outData, p1);
		return retval;
	}

	static void LUA_NATIVE_NETWORK_NETWORK_CLEAR_FOUND_GAMERS()
	{
		NETWORK::NETWORK_CLEAR_FOUND_GAMERS();
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_GET_GAMER_SESSION_FROM_HANDLE_(uintptr_t data, int count)
	{
		auto retval = (bool)NETWORK::_NETWORK_GET_GAMER_SESSION_FROM_HANDLE((Any*)data, count);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_HAS_CURRENT_GET_GAMER_STATUS_STARTED_()
	{
		auto retval = (bool)NETWORK::_NETWORK_HAS_CURRENT_GET_GAMER_STATUS_STARTED();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_DID_GET_GAMER_STATUS_SUCCEED()
	{
		auto retval = (bool)NETWORK::NETWORK_DID_GET_GAMER_STATUS_SUCCEED();
		return retval;
	}

	static int LUA_NATIVE_NETWORK_NETWORK_GET_GAMER_STATUS_(uintptr_t gamerHandle, int p1)
	{
		auto retval = NETWORK::_NETWORK_GET_GAMER_STATUS((Any*)gamerHandle, p1);
		return retval;
	}

	static void LUA_NATIVE_NETWORK_NETWORK_CLEAR_GET_GAMER_STATUS()
	{
		NETWORK::NETWORK_CLEAR_GET_GAMER_STATUS();
	}

	static void LUA_NATIVE_NETWORK_NETWORK_SET_SCRIPT_READY_FOR_EVENTS(bool bReady)
	{
		NETWORK::NETWORK_SET_SCRIPT_READY_FOR_EVENTS(bReady);
	}

	static bool LUA_NATIVE_NETWORK_0x316FD416C432C761_()
	{
		auto retval = (bool)NETWORK::_0x316FD416C432C761();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_0x062842D61D0D53FD_()
	{
		auto retval = (bool)NETWORK::_0x062842D61D0D53FD();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_IS_GAME_IN_PROGRESS()
	{
		auto retval = (bool)NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_IS_SESSION_ACTIVE()
	{
		auto retval = (bool)NETWORK::NETWORK_IS_SESSION_ACTIVE();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_IS_IN_SESSION()
	{
		auto retval = (bool)NETWORK::NETWORK_IS_IN_SESSION();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_IS_IN_SESSION_LOBBY_()
	{
		auto retval = (bool)NETWORK::_NETWORK_IS_IN_SESSION_LOBBY();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_IS_SESSION_STARTED()
	{
		auto retval = (bool)NETWORK::NETWORK_IS_SESSION_STARTED();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_CAN_SESSION_END()
	{
		auto retval = (bool)NETWORK::NETWORK_CAN_SESSION_END();
		return retval;
	}

	static int LUA_NATIVE_NETWORK_NETWORK_GET_GAME_MODE()
	{
		auto retval = NETWORK::NETWORK_GET_GAME_MODE();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_SESSION_ADD_SESSION_FLAGS_(int flags)
	{
		auto retval = (bool)NETWORK::_NETWORK_SESSION_ADD_SESSION_FLAGS(flags);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_SESSION_REMOVE_SESSION_FLAGS(int flags)
	{
		auto retval = (bool)NETWORK::NETWORK_SESSION_REMOVE_SESSION_FLAGS(flags);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_NETWORK_SESSION_GET_SESSION_FLAGS()
	{
		auto retval = NETWORK::NETWORK_SESSION_GET_SESSION_FLAGS();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_SESSION_SET_PLAYER_FLAGS_(int flags)
	{
		auto retval = (bool)NETWORK::_NETWORK_SESSION_SET_PLAYER_FLAGS(flags);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_SESSION_REMOVE_PLAYER_FLAGS_(int flags)
	{
		auto retval = (bool)NETWORK::_NETWORK_SESSION_REMOVE_PLAYER_FLAGS(flags);
		return retval;
	}

	static Player LUA_NATIVE_NETWORK_NETWORK_GET_SESSION_HOST_()
	{
		auto retval = NETWORK::_NETWORK_GET_SESSION_HOST();
		return retval;
	}

	static Any LUA_NATIVE_NETWORK_0xD3A3C8B9F3BDEF81_()
	{
		auto retval = NETWORK::_0xD3A3C8B9F3BDEF81();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_0x18B94666CF610AEB_()
	{
		auto retval = (bool)NETWORK::_0x18B94666CF610AEB();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_0x981146E5C9CE9250_(int inviteIndex)
	{
		auto retval = (bool)NETWORK::_0x981146E5C9CE9250(inviteIndex);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_0xBF8276E51761F9DA_()
	{
		auto retval = NETWORK::_0xBF8276E51761F9DA();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_0xDCA4A74135E1DEA5_(Any p0)
	{
		auto retval = (bool)NETWORK::_0xDCA4A74135E1DEA5(p0);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_HAS_PENDING_INVITE_FAILURE()
	{
		auto retval = (bool)NETWORK::NETWORK_HAS_PENDING_INVITE_FAILURE();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_CAN_RECEIVE_INVITE_FROM_HANDLE_(uintptr_t gamerHandle)
	{
		auto retval = (bool)NETWORK::_NETWORK_CAN_RECEIVE_INVITE_FROM_HANDLE((Any*)gamerHandle);
		return retval;
	}

	static void LUA_NATIVE_NETWORK_0x704F92B3AF20D857_(bool setting)
	{
		NETWORK::_0x704F92B3AF20D857(setting);
	}

	static void LUA_NATIVE_NETWORK_0xF342F6BD0A8287D5_(Any p0)
	{
		NETWORK::_0xF342F6BD0A8287D5(p0);
	}

	static void LUA_NATIVE_NETWORK_0xD39A72AE5EBD57E5_()
	{
		NETWORK::_0xD39A72AE5EBD57E5();
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_SEND_SESSION_INVITE_(uintptr_t gamerHandle, sol::stack_object contentId, uintptr_t data, int dataSize, int p4, int flags)
	{
		auto retval = (bool)NETWORK::_NETWORK_SEND_SESSION_INVITE((Any*)gamerHandle, contentId.is<const char*>() ? contentId.as<const char*>() : nullptr, (Any*)data, dataSize, p4, flags);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_0xD1FFB246F4E088AC_(int p0)
	{
		auto retval = (bool)NETWORK::_0xD1FFB246F4E088AC(p0);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_0x27B1AE4D8C652F08_(int p0)
	{
		auto retval = NETWORK::_0x27B1AE4D8C652F08(p0);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_0x6C27442A225A241A_(int p0)
	{
		auto retval = NETWORK::_0x6C27442A225A241A(p0);
		return retval;
	}

	static const char* LUA_NATIVE_NETWORK_0xE59F4924BD3A718D_(int p0)
	{
		auto retval = NETWORK::_0xE59F4924BD3A718D(p0);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_0x78271BC02AE9AF83_(int p0)
	{
		auto retval = NETWORK::_0x78271BC02AE9AF83(p0);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_0x16EFB123C4451032_(int p0, uintptr_t gamerHandle)
	{
		auto retval = (bool)NETWORK::_0x16EFB123C4451032(p0, (Any*)gamerHandle);
		return retval;
	}

	static const char* LUA_NATIVE_NETWORK_0xE79BA3BC265895DA_(int p0)
	{
		auto retval = NETWORK::_0xE79BA3BC265895DA(p0);
		return retval;
	}

	static Any LUA_NATIVE_NETWORK_0xC0CFFDA87C2C163D_(int p0, Any p1, int p2)
	{
		auto retval = NETWORK::_0xC0CFFDA87C2C163D(p0, p1, p2);
		return retval;
	}

	static Any LUA_NATIVE_NETWORK_0x5ED39DA62BEB1330_(int p0)
	{
		auto retval = NETWORK::_0x5ED39DA62BEB1330(p0);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_ACCEPT_RS_INVITE(int p0)
	{
		auto retval = (bool)NETWORK::NETWORK_ACCEPT_RS_INVITE(p0);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_0x3AA0CDC63696166D_(int p0)
	{
		auto retval = (bool)NETWORK::_0x3AA0CDC63696166D(p0);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_NETWORK_REQUEST_JOIN(Any p0)
	{
		auto retval = NETWORK::NETWORK_REQUEST_JOIN(p0);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_0xE8E633215471BB5D_(Any p0)
	{
		auto retval = NETWORK::_0xE8E633215471BB5D(p0);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_0xA2837A5E21FB5A58_(Any p0)
	{
		auto retval = (bool)NETWORK::_0xA2837A5E21FB5A58(p0);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_0xE39600E50D608693_(Any p0, Any p1)
	{
		auto retval = (bool)NETWORK::_0xE39600E50D608693(p0, p1);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_0xD7BAD4062074B9C1_(Any p0)
	{
		auto retval = (bool)NETWORK::_0xD7BAD4062074B9C1(p0);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_0xCA58D4FD20D70F24_(Any p0)
	{
		auto retval = NETWORK::_0xCA58D4FD20D70F24(p0);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_0xC028B3F52C707C49_(Any p0)
	{
		auto retval = (bool)NETWORK::_0xC028B3F52C707C49(p0);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_IS_PLATFORM_INVITE_PENDING()
	{
		auto retval = (bool)NETWORK::NETWORK_IS_PLATFORM_INVITE_PENDING();
		return retval;
	}

	static void LUA_NATIVE_NETWORK_0x5B9C6AC118FD4774_()
	{
		NETWORK::_0x5B9C6AC118FD4774();
	}

	static int LUA_NATIVE_NETWORK_NETWORK_GET_PLATFORM_INVITE_ID_()
	{
		auto retval = NETWORK::_NETWORK_GET_PLATFORM_INVITE_ID();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_ACTION_PLATFORM_INVITE()
	{
		auto retval = (bool)NETWORK::NETWORK_ACTION_PLATFORM_INVITE();
		return retval;
	}

	static void LUA_NATIVE_NETWORK_NETWORK_CLEAR_PLATFORM_INVITE()
	{
		NETWORK::NETWORK_CLEAR_PLATFORM_INVITE();
	}

	static void LUA_NATIVE_NETWORK_0x603469298A4308AF_(bool p0)
	{
		NETWORK::_0x603469298A4308AF(p0);
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_ARE_ONLINE_NOTIFICATIONS_SHOWN_IN_STORY_MODE_()
	{
		auto retval = (bool)NETWORK::_NETWORK_ARE_ONLINE_NOTIFICATIONS_SHOWN_IN_STORY_MODE();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_IS_IN_PLATFORM_PARTY()
	{
		auto retval = (bool)NETWORK::NETWORK_IS_IN_PLATFORM_PARTY();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_ARE_PLAYERS_IN_SAME_PLATFORM_PARTY_(uintptr_t gamerHandle1, uintptr_t gamerHandle2)
	{
		auto retval = (bool)NETWORK::_NETWORK_ARE_PLAYERS_IN_SAME_PLATFORM_PARTY((Any*)gamerHandle1, (Any*)gamerHandle2);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_IS_IN_PLATFORM_PARTY_CHAT()
	{
		auto retval = (bool)NETWORK::NETWORK_IS_IN_PLATFORM_PARTY_CHAT();
		return retval;
	}

	static void LUA_NATIVE_NETWORK_NETWORK_SEED_RANDOM_NUMBER_GENERATOR(int nSeed)
	{
		NETWORK::NETWORK_SEED_RANDOM_NUMBER_GENERATOR(nSeed);
	}

	static int LUA_NATIVE_NETWORK_NETWORK_GET_RANDOM_INT_RANGED(int nMinimum, int nMaximum)
	{
		auto retval = NETWORK::NETWORK_GET_RANDOM_INT_RANGED(nMinimum, nMaximum);
		return retval;
	}

	static void LUA_NATIVE_NETWORK_NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(int MaxNumPlayers, bool activeInSinglePlayer, int InstanceId)
	{
		NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(MaxNumPlayers, activeInSinglePlayer, InstanceId);
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT()
	{
		auto retval = (bool)NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT();
		return retval;
	}

	static int LUA_NATIVE_NETWORK_NETWORK_GET_MAX_NUM_PARTICIPANTS()
	{
		auto retval = NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS();
		return retval;
	}

	static int LUA_NATIVE_NETWORK_NETWORK_GET_NUM_PARTICIPANTS()
	{
		auto retval = NETWORK::NETWORK_GET_NUM_PARTICIPANTS();
		return retval;
	}

	static int LUA_NATIVE_NETWORK_NETWORK_GET_SCRIPT_STATUS()
	{
		auto retval = NETWORK::NETWORK_GET_SCRIPT_STATUS();
		return retval;
	}

	static void LUA_NATIVE_NETWORK_NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(uintptr_t Address, int Size, sol::stack_object DebugName)
	{
		NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES((Any*)Address, Size, DebugName.is<const char*>() ? DebugName.as<const char*>() : nullptr);
	}

	static std::tuple<int, int> LUA_NATIVE_NETWORK_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE_(int p0)
	{
		std::tuple<int, int> return_values;
		std::get<0>(return_values) = NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&p0);
		std::get<1>(return_values) = p0;

		return return_values;
	}

	static void LUA_NATIVE_NETWORK_NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(uintptr_t Address, int Size, sol::stack_object DebugName)
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES((Any*)Address, Size, DebugName.is<const char*>() ? DebugName.as<const char*>() : nullptr);
	}

	static std::tuple<int, int> LUA_NATIVE_NETWORK_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE_(int p0)
	{
		std::tuple<int, int> return_values;
		std::get<0>(return_values) = NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&p0);
		std::get<1>(return_values) = p0;

		return return_values;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA()
	{
		auto retval = (bool)NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA();
		return retval;
	}

	static Player LUA_NATIVE_NETWORK_NETWORK_GET_PLAYER_INDEX(int Participant)
	{
		auto retval = NETWORK::NETWORK_GET_PLAYER_INDEX(Participant);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_NETWORK_GET_PARTICIPANT_INDEX(Player Plr)
	{
		auto retval = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(Plr);
		return retval;
	}

	static Player LUA_NATIVE_NETWORK_NETWORK_GET_PLAYER_INDEX_FROM_PED(Ped PedIndex)
	{
		auto retval = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(PedIndex);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_NETWORK_GET_NUM_CONNECTED_PLAYERS()
	{
		auto retval = NETWORK::NETWORK_GET_NUM_CONNECTED_PLAYERS();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_IS_PLAYER_CONNECTED(Player Plr)
	{
		auto retval = (bool)NETWORK::NETWORK_IS_PLAYER_CONNECTED(Plr);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_NETWORK_GET_TOTAL_NUM_PLAYERS()
	{
		auto retval = NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_IS_PARTICIPANT_ACTIVE(int Participant)
	{
		auto retval = (bool)NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(Participant);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_IS_PLAYER_ACTIVE(Player Plr)
	{
		auto retval = (bool)NETWORK::NETWORK_IS_PLAYER_ACTIVE(Plr);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_IS_PLAYER_A_PARTICIPANT(Player Plr)
	{
		auto retval = (bool)NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Plr);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_IS_HOST_OF_THIS_SCRIPT()
	{
		auto retval = (bool)NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT();
		return retval;
	}

	static int LUA_NATIVE_NETWORK_NETWORK_GET_HOST_OF_THIS_SCRIPT()
	{
		auto retval = NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT();
		return retval;
	}

	static Player LUA_NATIVE_NETWORK_NETWORK_GET_HOST_OF_SCRIPT(sol::stack_object scriptName, int instanceId, int p2)
	{
		auto retval = NETWORK::NETWORK_GET_HOST_OF_SCRIPT(scriptName.is<const char*>() ? scriptName.as<const char*>() : nullptr, instanceId, p2);
		return retval;
	}

	static Player LUA_NATIVE_NETWORK_NETWORK_GET_HOST_OF_THREAD(int threadId)
	{
		auto retval = NETWORK::NETWORK_GET_HOST_OF_THREAD(threadId);
		return retval;
	}

	static void LUA_NATIVE_NETWORK_NETWORK_SET_MISSION_FINISHED()
	{
		NETWORK::NETWORK_SET_MISSION_FINISHED();
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_IS_SCRIPT_ACTIVE(sol::stack_object scriptName, int instanceId, bool localOnly, int p3)
	{
		auto retval = (bool)NETWORK::NETWORK_IS_SCRIPT_ACTIVE(scriptName.is<const char*>() ? scriptName.as<const char*>() : nullptr, instanceId, localOnly, p3);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(Hash scriptHash, int p1, bool p2, int p3)
	{
		auto retval = (bool)NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(scriptHash, p1, p2, p3);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_IS_THREAD_ACTIVE_(int threadId)
	{
		auto retval = (bool)NETWORK::_NETWORK_IS_THREAD_ACTIVE(threadId);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_NETWORK_GET_INSTANCE_ID_OF_THREAD_(int threadId)
	{
		auto retval = NETWORK::_NETWORK_GET_INSTANCE_ID_OF_THREAD(threadId);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_NETWORK_GET_NUM_SCRIPT_PARTICIPANTS(sol::stack_object scriptName, int instanceId, Hash positionHash)
	{
		auto retval = NETWORK::NETWORK_GET_NUM_SCRIPT_PARTICIPANTS(scriptName.is<const char*>() ? scriptName.as<const char*>() : nullptr, instanceId, positionHash);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT()
	{
		auto retval = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_IS_PLAYER_A_PARTICIPANT_ON_SCRIPT(Player Plr, sol::stack_object scriptName, int instanceId)
	{
		auto retval = (bool)NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT_ON_SCRIPT(Plr, scriptName.is<const char*>() ? scriptName.as<const char*>() : nullptr, instanceId);
		return retval;
	}

	static void LUA_NATIVE_NETWORK_NETWORK_PREVENT_SCRIPT_HOST_MIGRATION()
	{
		NETWORK::NETWORK_PREVENT_SCRIPT_HOST_MIGRATION();
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_IS_FEATURE_SUPPORTED(int featureId)
	{
		auto retval = (bool)NETWORK::NETWORK_IS_FEATURE_SUPPORTED(featureId);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_PARTICIPANT_ID()
	{
		auto retval = NETWORK::PARTICIPANT_ID();
		return retval;
	}

	static int LUA_NATIVE_NETWORK_PARTICIPANT_ID_TO_INT()
	{
		auto retval = NETWORK::PARTICIPANT_ID_TO_INT();
		return retval;
	}

	static std::tuple<Player, Hash> LUA_NATIVE_NETWORK_NETWORK_GET_DESTROYER_OF_NETWORK_ID(int NetworkId, Hash TypeOfWeapon)
	{
		std::tuple<Player, Hash> return_values;
		std::get<0>(return_values) = NETWORK::NETWORK_GET_DESTROYER_OF_NETWORK_ID(NetworkId, &TypeOfWeapon);
		std::get<1>(return_values) = TypeOfWeapon;

		return return_values;
	}

	static Player LUA_NATIVE_NETWORK_0x6CF82A7F65A5AD5F_(Ped ped, uintptr_t p1)
	{
		auto retval = NETWORK::_0x6CF82A7F65A5AD5F(ped, (Any*)p1);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_0x236321F1178A5446_(Player player, Ped ped, uintptr_t p2)
	{
		auto retval = (bool)NETWORK::_0x236321F1178A5446(player, ped, (Any*)p2);
		return retval;
	}

	static std::tuple<bool, int> LUA_NATIVE_NETWORK_NETWORK_GET_ASSISTED_DAMAGE_OF_ENTITY(Player playerIndexDamager, Entity entityDamaged, int damageDealt)
	{
		std::tuple<bool, int> return_values;
		std::get<0>(return_values) = (bool)NETWORK::NETWORK_GET_ASSISTED_DAMAGE_OF_ENTITY(playerIndexDamager, entityDamaged, &damageDealt);
		std::get<1>(return_values) = damageDealt;

		return return_values;
	}

	static std::tuple<Entity, Hash> LUA_NATIVE_NETWORK_NETWORK_GET_ENTITY_KILLER_OF_PLAYER(Player Plr, Hash TypeOfWeapon)
	{
		std::tuple<Entity, Hash> return_values;
		std::get<0>(return_values) = NETWORK::NETWORK_GET_ENTITY_KILLER_OF_PLAYER(Plr, &TypeOfWeapon);
		std::get<1>(return_values) = TypeOfWeapon;

		return return_values;
	}

	static void LUA_NATIVE_NETWORK_NETWORK_RESURRECT_LOCAL_PLAYER(float PosX, float PosY, float PosZ, float Heading, int p4, bool p5, Any p6, bool p7)
	{
		NETWORK::NETWORK_RESURRECT_LOCAL_PLAYER(PosX, PosY, PosZ, Heading, p4, p5, p6, p7);
	}

	static void LUA_NATIVE_NETWORK_NETWORK_RESURRECT_LOCAL_PLAYER_2_(uintptr_t args)
	{
		NETWORK::_NETWORK_RESURRECT_LOCAL_PLAYER_2((Any*)args);
	}

	static void LUA_NATIVE_NETWORK_NETWORK_SET_LOCAL_PLAYER_INVINCIBLE_TIME(int invincibilityTime)
	{
		NETWORK::NETWORK_SET_LOCAL_PLAYER_INVINCIBLE_TIME(invincibilityTime);
	}

	static void LUA_NATIVE_NETWORK_NETWORK_SET_LOCAL_PLAYER_SYNC_LOOK_AT(bool bSyncLookAt)
	{
		NETWORK::NETWORK_SET_LOCAL_PLAYER_SYNC_LOOK_AT(bSyncLookAt);
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(Entity EntityIndex)
	{
		auto retval = (bool)NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(EntityIndex);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_NETWORK_GET_NETWORK_ID_FROM_ENTITY(Entity EntityIndex)
	{
		auto retval = NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(EntityIndex);
		return retval;
	}

	static Entity LUA_NATIVE_NETWORK_NETWORK_GET_ENTITY_FROM_NETWORK_ID(int NetworkId)
	{
		auto retval = NETWORK::NETWORK_GET_ENTITY_FROM_NETWORK_ID(NetworkId);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_GET_ENTITY_IS_NETWORKED(Entity entityIndex)
	{
		auto retval = (bool)NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(entityIndex);
		return retval;
	}

	static void LUA_NATIVE_NETWORK_NETWORK_REGISTER_ENTITY_AS_NETWORKED(Entity entityIndex)
	{
		NETWORK::NETWORK_REGISTER_ENTITY_AS_NETWORKED(entityIndex);
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_DOES_NETWORK_ID_EXIST(int NetworkId)
	{
		auto retval = (bool)NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(NetworkId);
		return retval;
	}

	static Any LUA_NATIVE_NETWORK_0x950ACD8F05B7B9DF_(Any p0)
	{
		auto retval = NETWORK::_0x950ACD8F05B7B9DF(p0);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(int NetworkId)
	{
		auto retval = (bool)NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(NetworkId);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_HAS_CONTROL_OF_NETWORK_ID(int NetworkId)
	{
		auto retval = (bool)NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(NetworkId);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_REQUEST_CONTROL_OF_ENTITY(Entity entityIndex)
	{
		auto retval = (bool)NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(entityIndex);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_REQUEST_CONTROL_OF_ANIM_SCENE_(AnimScene animScene)
	{
		auto retval = (bool)NETWORK::_NETWORK_REQUEST_CONTROL_OF_ANIM_SCENE(animScene);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_REQUEST_CONTROL_OF_PICKUP_PLACEMENT(Any p0)
	{
		auto retval = (bool)NETWORK::NETWORK_REQUEST_CONTROL_OF_PICKUP_PLACEMENT(p0);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_HAS_CONTROL_OF_ENTITY(Entity entityIndex)
	{
		auto retval = (bool)NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(entityIndex);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_HAS_CONTROL_OF_PICKUP(Pickup pickupIndex)
	{
		auto retval = (bool)NETWORK::NETWORK_HAS_CONTROL_OF_PICKUP(pickupIndex);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_HAS_CONTROL_OF_ANIM_SCENE_(AnimScene animScene)
	{
		auto retval = (bool)NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(animScene);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_HAS_CONTROL_OF_PICKUP_PLACEMENT(Any p0)
	{
		auto retval = (bool)NETWORK::NETWORK_HAS_CONTROL_OF_PICKUP_PLACEMENT(p0);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_0xF260AF6F43953316_(ScrHandle handle)
	{
		auto retval = NETWORK::_0xF260AF6F43953316(handle);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_VEH_TO_NET(Vehicle vehID)
	{
		auto retval = NETWORK::VEH_TO_NET(vehID);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_PED_TO_NET(Ped pedID)
	{
		auto retval = NETWORK::PED_TO_NET(pedID);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_OBJ_TO_NET(Object objID)
	{
		auto retval = NETWORK::OBJ_TO_NET(objID);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_ANIM_SCENE_TO_NET_(AnimScene animScene)
	{
		auto retval = NETWORK::_ANIM_SCENE_TO_NET(animScene);
		return retval;
	}

	static Vehicle LUA_NATIVE_NETWORK_NET_TO_VEH(int netID)
	{
		auto retval = NETWORK::NET_TO_VEH(netID);
		return retval;
	}

	static Ped LUA_NATIVE_NETWORK_NET_TO_PED(int netID)
	{
		auto retval = NETWORK::NET_TO_PED(netID);
		return retval;
	}

	static Object LUA_NATIVE_NETWORK_NET_TO_OBJ(int netID)
	{
		auto retval = NETWORK::NET_TO_OBJ(netID);
		return retval;
	}

	static Entity LUA_NATIVE_NETWORK_NET_TO_ENT(int netID)
	{
		auto retval = NETWORK::NET_TO_ENT(netID);
		return retval;
	}

	static AnimScene LUA_NATIVE_NETWORK_NET_TO_ANIM_SCENE_(int netId)
	{
		auto retval = NETWORK::_NET_TO_ANIM_SCENE(netId);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_PROPSET_TO_NET_(PropSet propSet)
	{
		auto retval = NETWORK::_PROPSET_TO_NET(propSet);
		return retval;
	}

	static PropSet LUA_NATIVE_NETWORK_NET_TO_PROPSET_(int netId)
	{
		auto retval = NETWORK::_NET_TO_PROPSET(netId);
		return retval;
	}

	static void LUA_NATIVE_NETWORK_0x0CC28C08613BA9E5_(int p0)
	{
		NETWORK::_0x0CC28C08613BA9E5(p0);
	}

	static void LUA_NATIVE_NETWORK_NETWORK_GET_LOCAL_HANDLE(uintptr_t gamerHandle)
	{
		NETWORK::NETWORK_GET_LOCAL_HANDLE((Any*)gamerHandle);
	}

	static void LUA_NATIVE_NETWORK_NETWORK_HANDLE_FROM_PLAYER(Player playerIndex, uintptr_t gamerHandle)
	{
		NETWORK::NETWORK_HANDLE_FROM_PLAYER(playerIndex, (Any*)gamerHandle);
	}

	static Hash LUA_NATIVE_NETWORK_NETWORK_HASH_FROM_PLAYER_HANDLE(Player playerIndex)
	{
		auto retval = NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(playerIndex);
		return retval;
	}

	static void LUA_NATIVE_NETWORK_NETWORK_HANDLE_FROM_FRIEND(int friendIndex, uintptr_t gamerHandle)
	{
		NETWORK::NETWORK_HANDLE_FROM_FRIEND(friendIndex, (Any*)gamerHandle);
	}

	static const char* LUA_NATIVE_NETWORK_NETWORK_GET_GAMERTAG_FROM_HANDLE(uintptr_t gamerHandle)
	{
		auto retval = NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE((Any*)gamerHandle);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_NETWORK_DISPLAYNAMES_FROM_HANDLES_START(uintptr_t gamerHandles, int count)
	{
		auto retval = NETWORK::NETWORK_DISPLAYNAMES_FROM_HANDLES_START((Any*)gamerHandles, count);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_NETWORK_GET_DISPLAYNAMES_FROM_HANDLES(int requestId, Any displayNames, int count)
	{
		auto retval = NETWORK::NETWORK_GET_DISPLAYNAMES_FROM_HANDLES(requestId, displayNames, count);
		return retval;
	}

	static std::tuple<bool, char> LUA_NATIVE_NETWORK_NETWORK_GET_DISPLAY_NAME_FROM_HANDLE_(uintptr_t gamerHandle, char displayName)
	{
		std::tuple<bool, char> return_values;
		std::get<0>(return_values) = (bool)NETWORK::_NETWORK_GET_DISPLAY_NAME_FROM_HANDLE((Any*)gamerHandle, &displayName);
		std::get<1>(return_values) = displayName;

		return return_values;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_ARE_HANDLES_THE_SAME(uintptr_t gamerHandle1, uintptr_t gamerHandle2)
	{
		auto retval = (bool)NETWORK::NETWORK_ARE_HANDLES_THE_SAME((Any*)gamerHandle1, (Any*)gamerHandle2);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_IS_HANDLE_VALID(uintptr_t gamerHandle)
	{
		auto retval = (bool)NETWORK::NETWORK_IS_HANDLE_VALID((Any*)gamerHandle);
		return retval;
	}

	static Player LUA_NATIVE_NETWORK_NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uintptr_t gamerHandle)
	{
		auto retval = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE((Any*)gamerHandle);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_IS_GAMER_IN_MY_SESSION(uintptr_t gamerHandle)
	{
		auto retval = (bool)NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION((Any*)gamerHandle);
		return retval;
	}

	static void LUA_NATIVE_NETWORK_NETWORK_SHOW_PROFILE_UI(uintptr_t gamerHandle)
	{
		NETWORK::NETWORK_SHOW_PROFILE_UI((Any*)gamerHandle);
	}

	static void LUA_NATIVE_NETWORK_0x5759160AC17C13CE_(uintptr_t gamerHandle, sol::stack_object message)
	{
		NETWORK::_0x5759160AC17C13CE((Any*)gamerHandle, message.is<const char*>() ? message.as<const char*>() : nullptr);
	}

	static int LUA_NATIVE_NETWORK_0xF302AB9D978352EE_(Entity entity)
	{
		auto retval = NETWORK::_0xF302AB9D978352EE(entity);
		return retval;
	}

	static Entity LUA_NATIVE_NETWORK_0x4538EE7C321590BC_(int networkId)
	{
		auto retval = NETWORK::_0x4538EE7C321590BC(networkId);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_0xA47D48D06AA5A188_()
	{
		auto retval = (bool)NETWORK::_0xA47D48D06AA5A188();
		return retval;
	}

	static int LUA_NATIVE_NETWORK_NETWORK_GET_TOTAL_NUM_FRIENDS()
	{
		auto retval = NETWORK::NETWORK_GET_TOTAL_NUM_FRIENDS();
		return retval;
	}

	static int LUA_NATIVE_NETWORK_0xA94ECE191D90637A_()
	{
		auto retval = NETWORK::_0xA94ECE191D90637A();
		return retval;
	}

	static void LUA_NATIVE_NETWORK_0x5CB8B0C846D0F30B_(Any p0)
	{
		NETWORK::_0x5CB8B0C846D0F30B(p0);
	}

	static void LUA_NATIVE_NETWORK_0xFF36F36B07E69059_(Any p0)
	{
		NETWORK::_0xFF36F36B07E69059(p0);
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_GET_CURRENT_FRIEND_PAGE_DATA_(uintptr_t p0)
	{
		auto retval = (bool)NETWORK::_NETWORK_GET_CURRENT_FRIEND_PAGE_DATA((Any*)p0);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_0xB389289F031F059A_()
	{
		auto retval = NETWORK::_0xB389289F031F059A();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_CAN_REFRESH_FRIEND_PAGE()
	{
		auto retval = (bool)NETWORK::NETWORK_CAN_REFRESH_FRIEND_PAGE();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_REFRESH_CURRENT_FRIEND_PAGE()
	{
		auto retval = (bool)NETWORK::NETWORK_REFRESH_CURRENT_FRIEND_PAGE();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_0xDA1BFED8582F61F0_()
	{
		auto retval = (bool)NETWORK::_0xDA1BFED8582F61F0();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_0x232E1EB23CDB313C_()
	{
		auto retval = (bool)NETWORK::_0x232E1EB23CDB313C();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_0x3E4A16BC669E71B3_()
	{
		auto retval = (bool)NETWORK::_0x3E4A16BC669E71B3();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_IS_FRIEND_HANDLE_ONLINE_(uintptr_t gamerHandle)
	{
		auto retval = (bool)NETWORK::_NETWORK_IS_FRIEND_HANDLE_ONLINE((Any*)gamerHandle);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_IS_FRIEND_HANDLE_IN_SAME_TITLE_(uintptr_t gamerHandle)
	{
		auto retval = (bool)NETWORK::_NETWORK_IS_FRIEND_HANDLE_IN_SAME_TITLE((Any*)gamerHandle);
		return retval;
	}

	static const char* LUA_NATIVE_NETWORK_NETWORK_GET_GAMERTAG_FROM_FRIEND_(uintptr_t gamerHandle)
	{
		auto retval = NETWORK::_NETWORK_GET_GAMERTAG_FROM_FRIEND((Any*)gamerHandle);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_IS_FRIEND(uintptr_t gamerHandle)
	{
		auto retval = (bool)NETWORK::NETWORK_IS_FRIEND((Any*)gamerHandle);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_IS_PENDING_FRIEND(uintptr_t gamerHandle)
	{
		auto retval = (bool)NETWORK::NETWORK_IS_PENDING_FRIEND((Any*)gamerHandle);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_ADD_FRIEND(uintptr_t gamerHandle, sol::stack_object message)
	{
		auto retval = (bool)NETWORK::NETWORK_ADD_FRIEND((Any*)gamerHandle, message.is<const char*>() ? message.as<const char*>() : nullptr);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_REMOVE_FRIEND_(uintptr_t gamerHandle)
	{
		auto retval = (bool)NETWORK::_NETWORK_REMOVE_FRIEND((Any*)gamerHandle);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_CAN_ADD_FRIEND_(uintptr_t gamerHandle)
	{
		auto retval = (bool)NETWORK::_NETWORK_CAN_ADD_FRIEND((Any*)gamerHandle);
		return retval;
	}

	static void LUA_NATIVE_NETWORK_NETWORK_SET_PLAYER_IS_PASSIVE(bool toggle)
	{
		NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(toggle);
	}

	static void LUA_NATIVE_NETWORK_NETWORK_SET_FRIENDLY_FIRE_OPTION(bool friendlyFire)
	{
		NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(friendlyFire);
	}

	static void LUA_NATIVE_NETWORK_NETWORK_SET_RICH_PRESENCE(int id, uintptr_t data, int sizeOfData, int numFields)
	{
		NETWORK::NETWORK_SET_RICH_PRESENCE(id, (Any*)data, sizeOfData, numFields);
	}

	static int LUA_NATIVE_NETWORK_NETWORK_GET_TIMEOUT_TIME()
	{
		auto retval = NETWORK::NETWORK_GET_TIMEOUT_TIME();
		return retval;
	}

	static void LUA_NATIVE_NETWORK_0xBC7D36946D19E60E_(bool p0)
	{
		NETWORK::_0xBC7D36946D19E60E(p0);
	}

	static bool LUA_NATIVE_NETWORK_0x880A7202301E282B_(uintptr_t p0, uintptr_t p1, float x, float y, float z, float p5, Any p6)
	{
		auto retval = (bool)NETWORK::_0x880A7202301E282B((Any*)p0, (Any*)p1, x, y, z, p5, p6);
		return retval;
	}

	static Any LUA_NATIVE_NETWORK_0xC964FCD3D1720697_()
	{
		auto retval = NETWORK::_0xC964FCD3D1720697();
		return retval;
	}

	static Any LUA_NATIVE_NETWORK_0xEC089F84A9C16C62_()
	{
		auto retval = NETWORK::_0xEC089F84A9C16C62();
		return retval;
	}

	static void LUA_NATIVE_NETWORK_PREVENT_NETWORK_ID_MIGRATION(int netId)
	{
		NETWORK::PREVENT_NETWORK_ID_MIGRATION(netId);
	}

	static void LUA_NATIVE_NETWORK_KEEP_NETWORK_ID_IN_FAST_INSTANCE(int netId, bool p1, int p2)
	{
		NETWORK::KEEP_NETWORK_ID_IN_FAST_INSTANCE(netId, p1, p2);
	}

	static void LUA_NATIVE_NETWORK_0x02C4C6C2900D84DF_(Player player, Any p1)
	{
		NETWORK::_0x02C4C6C2900D84DF(player, p1);
	}

	static void LUA_NATIVE_NETWORK_0xD78A26024BB13E08_(Player player)
	{
		NETWORK::_0xD78A26024BB13E08(player);
	}

	static void LUA_NATIVE_NETWORK_SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(int NetworkId, bool ExistsOnAll)
	{
		NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(NetworkId, ExistsOnAll);
	}

	static void LUA_NATIVE_NETWORK_SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(int NetworkId, Player PlayerId, bool AlwaysExistsForPlayer)
	{
		NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(NetworkId, PlayerId, AlwaysExistsForPlayer);
	}

	static void LUA_NATIVE_NETWORK_SET_NETWORK_ID_STOP_CLONING(int networkId, bool bStopCloning)
	{
		NETWORK::SET_NETWORK_ID_STOP_CLONING(networkId, bStopCloning);
	}

	static void LUA_NATIVE_NETWORK_NETWORK_SET_ENTITY_REMAINS_WHEN_UNNETWORKED(Entity entity, bool toggle)
	{
		NETWORK::NETWORK_SET_ENTITY_REMAINS_WHEN_UNNETWORKED(entity, toggle);
	}

	static void LUA_NATIVE_NETWORK_NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(Entity EntityIndex, bool Exists)
	{
		NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(EntityIndex, Exists);
	}

	static void LUA_NATIVE_NETWORK_0xE31A04513237DC89_(Entity entity)
	{
		NETWORK::_0xE31A04513237DC89(entity);
	}

	static void LUA_NATIVE_NETWORK_SET_NETWORK_ID_VISIBLE_IN_CUTSCENE(int NetworkId, bool Visible, bool RemotelyVisible, Any p3)
	{
		NETWORK::SET_NETWORK_ID_VISIBLE_IN_CUTSCENE(NetworkId, Visible, RemotelyVisible, p3);
	}

	static bool LUA_NATIVE_NETWORK_IS_NETWORK_ID_OWNED_BY_PARTICIPANT(int NetworkId)
	{
		auto retval = (bool)NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(NetworkId);
		return retval;
	}

	static Player LUA_NATIVE_NETWORK_NETWORK_GET_PLAYER_OWNER_OF_NETWORK_ID_(int netId)
	{
		auto retval = NETWORK::_NETWORK_GET_PLAYER_OWNER_OF_NETWORK_ID(netId);
		return retval;
	}

	static void LUA_NATIVE_NETWORK_SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(bool LocallyVisible, bool RemotelyVisible, int instanceId)
	{
		NETWORK::SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(LocallyVisible, RemotelyVisible, instanceId);
	}

	static void LUA_NATIVE_NETWORK_PREVENT_MIGRATION_OF_ENTITIES_IN_FAST_INSTANCE_FOR_LOCAL_PLAYER(bool toggle)
	{
		NETWORK::PREVENT_MIGRATION_OF_ENTITIES_IN_FAST_INSTANCE_FOR_LOCAL_PLAYER(toggle);
	}

	static void LUA_NATIVE_NETWORK_SET_LOCAL_PLAYER_INVISIBLE_LOCALLY(bool bIncludePlayersVehicle)
	{
		NETWORK::SET_LOCAL_PLAYER_INVISIBLE_LOCALLY(bIncludePlayersVehicle);
	}

	static void LUA_NATIVE_NETWORK_SET_PLAYER_INVISIBLE_LOCALLY(Player PlayerId, bool bIncludePlayersVehicle)
	{
		NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(PlayerId, bIncludePlayersVehicle);
	}

	static void LUA_NATIVE_NETWORK_SET_PLAYER_VISIBLE_LOCALLY(Player PlayerId, bool bIncludePlayersVehicle)
	{
		NETWORK::SET_PLAYER_VISIBLE_LOCALLY(PlayerId, bIncludePlayersVehicle);
	}

	static void LUA_NATIVE_NETWORK_SET_ENTITY_VISIBLE_IN_CUTSCENE(Entity EntityIndex, bool Visible, bool RemotelyVisible, int p3)
	{
		NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(EntityIndex, Visible, RemotelyVisible, p3);
	}

	static void LUA_NATIVE_NETWORK_SET_DOOR_NETWORKED_(Hash doorHash)
	{
		NETWORK::_SET_DOOR_NETWORKED(doorHash);
	}

	static void LUA_NATIVE_NETWORK_SET_DOOR_UNNETWORKED_(Any p0, bool toggle)
	{
		NETWORK::_SET_DOOR_UNNETWORKED(p0, toggle);
	}

	static bool LUA_NATIVE_NETWORK_IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID(int NetworkId)
	{
		auto retval = (bool)NETWORK::IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID(NetworkId);
		return retval;
	}

	static void LUA_NATIVE_NETWORK_ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(int NetworkId, bool ActivateTracker)
	{
		NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(NetworkId, ActivateTracker);
	}

	static bool LUA_NATIVE_NETWORK_IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(float PosX, float PosY, float PosZ, float minRadius, float maxRadius)
	{
		auto retval = (bool)NETWORK::IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(PosX, PosY, PosZ, minRadius, maxRadius);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_IS_SPHERE_VISIBLE_TO_PLAYER(Player PlayerId, float PosX, float PosY, float PosZ, float minRadius, float maxRadius)
	{
		auto retval = (bool)NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(PlayerId, PosX, PosY, PosZ, minRadius, maxRadius);
		return retval;
	}

	static void LUA_NATIVE_NETWORK_0xD42C543F73233041_(bool p0)
	{
		NETWORK::_0xD42C543F73233041(p0);
	}

	static void LUA_NATIVE_NETWORK_RESERVE_NETWORK_MISSION_OBJECTS(int NumObjectsToReserve)
	{
		NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(NumObjectsToReserve);
	}

	static void LUA_NATIVE_NETWORK_RESERVE_NETWORK_CLIENT_MISSION_OBJECTS(int amount)
	{
		NETWORK::RESERVE_NETWORK_CLIENT_MISSION_OBJECTS(amount);
	}

	static void LUA_NATIVE_NETWORK_RESERVE_NETWORK_MISSION_PEDS(int NumPedsToReserve)
	{
		NETWORK::RESERVE_NETWORK_MISSION_PEDS(NumPedsToReserve);
	}

	static void LUA_NATIVE_NETWORK_RESERVE_NETWORK_CLIENT_MISSION_PEDS(int amount)
	{
		NETWORK::RESERVE_NETWORK_CLIENT_MISSION_PEDS(amount);
	}

	static void LUA_NATIVE_NETWORK_RESERVE_NETWORK_MISSION_VEHICLES(int NumVehiclesToReserve)
	{
		NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(NumVehiclesToReserve);
	}

	static void LUA_NATIVE_NETWORK_RESERVE_NETWORK_MISSION_PICKUPS(int amount)
	{
		NETWORK::RESERVE_NETWORK_MISSION_PICKUPS(amount);
	}

	static bool LUA_NATIVE_NETWORK_CAN_REGISTER_MISSION_OBJECTS(int NumObjectsToRegister)
	{
		auto retval = (bool)NETWORK::CAN_REGISTER_MISSION_OBJECTS(NumObjectsToRegister);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_CAN_REGISTER_MISSION_PEDS(int NumPedsToRegister)
	{
		auto retval = (bool)NETWORK::CAN_REGISTER_MISSION_PEDS(NumPedsToRegister);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_CAN_REGISTER_MISSION_VEHICLES(int NumVehiclesToRegister)
	{
		auto retval = (bool)NETWORK::CAN_REGISTER_MISSION_VEHICLES(NumVehiclesToRegister);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_CAN_REGISTER_MISSION_PICKUPS(int amount)
	{
		auto retval = (bool)NETWORK::CAN_REGISTER_MISSION_PICKUPS(amount);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_CAN_REGISTER_MISSION_ENTITIES(int NumPedsToRegister, int NumVehiclesToRegister, int NumObjectsToRegister, int NumPickupsToRegister)
	{
		auto retval = (bool)NETWORK::CAN_REGISTER_MISSION_ENTITIES(NumPedsToRegister, NumVehiclesToRegister, NumObjectsToRegister, NumPickupsToRegister);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_GET_NUM_RESERVED_MISSION_OBJECTS(bool bForAllScripts)
	{
		auto retval = NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(bForAllScripts);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_GET_NUM_RESERVED_MISSION_PEDS(bool bForAllScripts)
	{
		auto retval = NETWORK::GET_NUM_RESERVED_MISSION_PEDS(bForAllScripts);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_GET_NUM_RESERVED_MISSION_VEHICLES(bool bForAllScripts)
	{
		auto retval = NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(bForAllScripts);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_GET_NUM_RESERVED_MISSION_PICKUPS_(bool p0)
	{
		auto retval = NETWORK::_GET_NUM_RESERVED_MISSION_PICKUPS(p0);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_GET_NUM_CREATED_MISSION_OBJECTS(bool bForAllScripts)
	{
		auto retval = NETWORK::GET_NUM_CREATED_MISSION_OBJECTS(bForAllScripts);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_GET_NUM_CREATED_MISSION_PEDS(bool bForAllScripts)
	{
		auto retval = NETWORK::GET_NUM_CREATED_MISSION_PEDS(bForAllScripts);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_GET_NUM_CREATED_MISSION_VEHICLES(bool bForAllScripts)
	{
		auto retval = NETWORK::GET_NUM_CREATED_MISSION_VEHICLES(bForAllScripts);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_GET_NUM_CREATED_MISSION_PICKUPS_(bool p0)
	{
		auto retval = NETWORK::_GET_NUM_CREATED_MISSION_PICKUPS(p0);
		return retval;
	}

	static std::tuple<int, int, int, int, int, int> LUA_NATIVE_NETWORK_GET_RESERVED_MISSION_ENTITIES_FOR_THREAD_(int threadId, int pedMax, int vehicleMax, int unkMax, int pedMin, int vehicleMin, int unkMin)
	{
		std::tuple<int, int, int, int, int, int> return_values;
		NETWORK::_GET_RESERVED_MISSION_ENTITIES_FOR_THREAD(threadId, &pedMax, &vehicleMax, &unkMax, &pedMin, &vehicleMin, &unkMin);
		std::get<0>(return_values) = pedMax;
		std::get<1>(return_values) = vehicleMax;
		std::get<2>(return_values) = unkMax;
		std::get<3>(return_values) = pedMin;
		std::get<4>(return_values) = vehicleMin;
		std::get<5>(return_values) = unkMin;

		return return_values;
	}

	static std::tuple<int, int, int, int> LUA_NATIVE_NETWORK_GET_RESERVED_MISSION_ENTITIES_IN_AREA(float locationX, float locationY, float locationZ, bool includeLocalScripts, int numReservedPeds, int numReservedVehicles, int numReservedObjects, int numReservedPickups)
	{
		std::tuple<int, int, int, int> return_values;
		NETWORK::GET_RESERVED_MISSION_ENTITIES_IN_AREA(locationX, locationY, locationZ, includeLocalScripts, &numReservedPeds, &numReservedVehicles, &numReservedObjects, &numReservedPickups);
		std::get<0>(return_values) = numReservedPeds;
		std::get<1>(return_values) = numReservedVehicles;
		std::get<2>(return_values) = numReservedObjects;
		std::get<3>(return_values) = numReservedPickups;

		return return_values;
	}

	static bool LUA_NATIVE_NETWORK_0x5F328FC909F0E0FF_(int p0, int p1, int p2, int p3)
	{
		auto retval = (bool)NETWORK::_0x5F328FC909F0E0FF(p0, p1, p2, p3);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_GET_MAX_NUM_NETWORK_OBJECTS()
	{
		auto retval = NETWORK::GET_MAX_NUM_NETWORK_OBJECTS();
		return retval;
	}

	static int LUA_NATIVE_NETWORK_GET_MAX_NUM_NETWORK_PEDS()
	{
		auto retval = NETWORK::GET_MAX_NUM_NETWORK_PEDS();
		return retval;
	}

	static int LUA_NATIVE_NETWORK_GET_MAX_NUM_NETWORK_VEHICLES()
	{
		auto retval = NETWORK::GET_MAX_NUM_NETWORK_VEHICLES();
		return retval;
	}

	static int LUA_NATIVE_NETWORK_GET_MAX_NUM_NETWORK_PICKUPS()
	{
		auto retval = NETWORK::GET_MAX_NUM_NETWORK_PICKUPS();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_0x75FC34A2BA345BD1_(Entity entity, Player player, uintptr_t p2)
	{
		auto retval = (bool)NETWORK::_0x75FC34A2BA345BD1(entity, player, (Any*)p2);
		return retval;
	}

	static void LUA_NATIVE_NETWORK_0x979765465A6F25FC_(Entity entity, bool p1)
	{
		NETWORK::_0x979765465A6F25FC(entity, p1);
	}

	static int LUA_NATIVE_NETWORK_0x5133CF81924F1129_()
	{
		auto retval = NETWORK::_0x5133CF81924F1129();
		return retval;
	}

	static int LUA_NATIVE_NETWORK_0x1E4E097D71D449FB_(bool p0)
	{
		auto retval = NETWORK::_0x1E4E097D71D449FB(p0);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_0x982D7AD755B8F62C_(bool p0)
	{
		auto retval = NETWORK::_0x982D7AD755B8F62C(p0);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_0x917AD74BDCF8B6E9_(bool p0)
	{
		auto retval = NETWORK::_0x917AD74BDCF8B6E9(p0);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_0xF8DC69DC1AD19072_(bool p0)
	{
		auto retval = NETWORK::_0xF8DC69DC1AD19072(p0);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_0x744BFBB0CA908161_(bool p0)
	{
		auto retval = NETWORK::_0x744BFBB0CA908161(p0);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_0x106CBDD5077DEDE1_(bool p0)
	{
		auto retval = NETWORK::_0x106CBDD5077DEDE1(p0);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_0xBAF7E2979442B29F_(bool p0)
	{
		auto retval = NETWORK::_0xBAF7E2979442B29F(p0);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_0x039B692B3318FAB6_(bool p0)
	{
		auto retval = NETWORK::_0x039B692B3318FAB6(p0);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_0x4835413EA6F9C9CD_(bool p0)
	{
		auto retval = NETWORK::_0x4835413EA6F9C9CD(p0);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_GET_NETWORK_TIME()
	{
		auto retval = NETWORK::GET_NETWORK_TIME();
		return retval;
	}

	static int LUA_NATIVE_NETWORK_GET_NETWORK_TIME_ACCURATE()
	{
		auto retval = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_HAS_NETWORK_TIME_STARTED()
	{
		auto retval = (bool)NETWORK::HAS_NETWORK_TIME_STARTED();
		return retval;
	}

	static int LUA_NATIVE_NETWORK_GET_TIME_OFFSET(int Time1, int Offset)
	{
		auto retval = NETWORK::GET_TIME_OFFSET(Time1, Offset);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_IS_TIME_LESS_THAN(int Time1, int Time2)
	{
		auto retval = (bool)NETWORK::IS_TIME_LESS_THAN(Time1, Time2);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_IS_TIME_MORE_THAN(int Time1, int Time2)
	{
		auto retval = (bool)NETWORK::IS_TIME_MORE_THAN(Time1, Time2);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_GET_TIME_DIFFERENCE(int Time1, int Time2)
	{
		auto retval = NETWORK::GET_TIME_DIFFERENCE(Time1, Time2);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_GET_CLOUD_TIME_AS_INT()
	{
		auto retval = NETWORK::GET_CLOUD_TIME_AS_INT();
		return retval;
	}

	static void LUA_NATIVE_NETWORK_CONVERT_POSIX_TIME(int nContentIndex, uintptr_t sDate)
	{
		NETWORK::CONVERT_POSIX_TIME(nContentIndex, (Any*)sDate);
	}

	static void LUA_NATIVE_NETWORK_NETWORK_SET_IN_SPECTATOR_MODE(bool InSpectatorMode, Player playerIndex)
	{
		NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(InSpectatorMode, playerIndex);
	}

	static void LUA_NATIVE_NETWORK_NETWORK_SET_IN_STATIC_SPECTATOR_MODE_(bool toggle, float x, float y, float z)
	{
		NETWORK::_NETWORK_SET_IN_STATIC_SPECTATOR_MODE(toggle, x, y, z);
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_IS_IN_SPECTATOR_MODE()
	{
		auto retval = (bool)NETWORK::NETWORK_IS_IN_SPECTATOR_MODE();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_IS_PLAYER_IN_SPECTATOR_MODE_(Player player)
	{
		auto retval = (bool)NETWORK::_NETWORK_IS_PLAYER_IN_SPECTATOR_MODE(player);
		return retval;
	}

	static void LUA_NATIVE_NETWORK_NETWORK_SET_IN_MP_CUTSCENE(bool p0, bool p1, int p2, bool p3)
	{
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(p0, p1, p2, p3);
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_IS_IN_MP_CUTSCENE()
	{
		auto retval = (bool)NETWORK::NETWORK_IS_IN_MP_CUTSCENE();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_IS_PLAYER_IN_MP_CUTSCENE(Player playerIndex)
	{
		auto retval = (bool)NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(playerIndex);
		return retval;
	}

	static void LUA_NATIVE_NETWORK_0x34BC1E79546BA543_(bool p0)
	{
		NETWORK::_0x34BC1E79546BA543(p0);
	}

	static void LUA_NATIVE_NETWORK_SET_NETWORK_RESPOT_TIMER_(Entity entity, int timer, bool p2)
	{
		NETWORK::_SET_NETWORK_RESPOT_TIMER(entity, timer, p2);
	}

	static bool LUA_NATIVE_NETWORK_0x26A867C0B7A456D1_(Entity entity)
	{
		auto retval = (bool)NETWORK::_0x26A867C0B7A456D1(entity);
		return retval;
	}

	static void LUA_NATIVE_NETWORK_SET_LOCAL_PLAYER_AS_GHOST(bool bSet)
	{
		NETWORK::SET_LOCAL_PLAYER_AS_GHOST(bSet);
	}

	static bool LUA_NATIVE_NETWORK_IS_ENTITY_A_GHOST(Entity EntityIndex)
	{
		auto retval = (bool)NETWORK::IS_ENTITY_A_GHOST(EntityIndex);
		return retval;
	}

	static void LUA_NATIVE_NETWORK_SET_PLAYER_VISIBILITY_TO_LOCAL_PLAYER_DISABLED_(Player player, bool disabled)
	{
		NETWORK::_SET_PLAYER_VISIBILITY_TO_LOCAL_PLAYER_DISABLED(player, disabled);
	}

	static void LUA_NATIVE_NETWORK_SET_ENTITY_GHOSTED_TO_LOCAL_PLAYER_(Entity entity, bool toggle)
	{
		NETWORK::_SET_ENTITY_GHOSTED_TO_LOCAL_PLAYER(entity, toggle);
	}

	static bool LUA_NATIVE_NETWORK_IS_OBJECT_REASSIGNMENT_IN_PROGRESS()
	{
		auto retval = (bool)NETWORK::IS_OBJECT_REASSIGNMENT_IN_PROGRESS();
		return retval;
	}

	static int LUA_NATIVE_NETWORK_0x039AD6B57D5179FF_()
	{
		auto retval = NETWORK::_0x039AD6B57D5179FF();
		return retval;
	}

	static int LUA_NATIVE_NETWORK_0x02B3CDD652B3CDD6_()
	{
		auto retval = NETWORK::_0x02B3CDD652B3CDD6();
		return retval;
	}

	static int LUA_NATIVE_NETWORK_GET_NUM_PEER_NEGOTIATION_RESPONSES_()
	{
		auto retval = NETWORK::_GET_NUM_PEER_NEGOTIATION_RESPONSES();
		return retval;
	}

	static void LUA_NATIVE_NETWORK_NETWORK_DEBUG_REQUEST_ENTITY_POSITION_(uintptr_t p0)
	{
		NETWORK::_NETWORK_DEBUG_REQUEST_ENTITY_POSITION((Any*)p0);
	}

	static int LUA_NATIVE_NETWORK_NETWORK_GET_NETWORK_ID_FROM_ROPE_ID(int ropeId)
	{
		auto retval = NETWORK::NETWORK_GET_NETWORK_ID_FROM_ROPE_ID(ropeId);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_NETWORK_GET_ROPE_ID_FROM_NETWORK_ID(int netId)
	{
		auto retval = NETWORK::NETWORK_GET_ROPE_ID_FROM_NETWORK_ID(netId);
		return retval;
	}

	static void LUA_NATIVE_NETWORK_NETWORK_SPAWN_CONFIG_ADD_SPAWN_POINT_(float x, float y, float z, float heading)
	{
		NETWORK::_NETWORK_SPAWN_CONFIG_ADD_SPAWN_POINT(x, y, z, heading);
	}

	static void LUA_NATIVE_NETWORK_0xA63E4F050F20021F_()
	{
		NETWORK::_0xA63E4F050F20021F();
	}

	static void LUA_NATIVE_NETWORK_NETWORK_SPAWN_CONFIG_ADD_EXCLUSION_VOLUME_(Volume volume)
	{
		NETWORK::_NETWORK_SPAWN_CONFIG_ADD_EXCLUSION_VOLUME(volume);
	}

	static void LUA_NATIVE_NETWORK_NETWORK_SPAWN_CONFIG_REMOVE_EXCLUSION_VOLUME_(Volume volume)
	{
		NETWORK::_NETWORK_SPAWN_CONFIG_REMOVE_EXCLUSION_VOLUME(volume);
	}

	static void LUA_NATIVE_NETWORK_0x0BF90CBB6B72977B_()
	{
		NETWORK::_0x0BF90CBB6B72977B();
	}

	static void LUA_NATIVE_NETWORK_0x7B3FF2D193628126_(Player player)
	{
		NETWORK::_0x7B3FF2D193628126(player);
	}

	static void LUA_NATIVE_NETWORK_0x19B52C20B5C4757C_()
	{
		NETWORK::_0x19B52C20B5C4757C();
	}

	static void LUA_NATIVE_NETWORK_NETWORK_SPAWN_CONFIG_SET_FLAGS(int flags)
	{
		NETWORK::NETWORK_SPAWN_CONFIG_SET_FLAGS(flags);
	}

	static void LUA_NATIVE_NETWORK_0x6CEE2E30021DAEC6_()
	{
		NETWORK::_0x6CEE2E30021DAEC6();
	}

	static void LUA_NATIVE_NETWORK_NETWORK_SPAWN_CONFIG_ADD_PROPERTY_SCRIPTED_(int configProperty, bool include)
	{
		NETWORK::_NETWORK_SPAWN_CONFIG_ADD_PROPERTY_SCRIPTED(configProperty, include);
	}

	static void LUA_NATIVE_NETWORK_0xB131E686BD97B3F8_()
	{
		NETWORK::_0xB131E686BD97B3F8();
	}

	static void LUA_NATIVE_NETWORK_NETWORK_SPAWN_CONFIG_ADD_PROPERTY_PREFERENCE_(int configProperty, bool include, float weight)
	{
		NETWORK::_NETWORK_SPAWN_CONFIG_ADD_PROPERTY_PREFERENCE(configProperty, include, weight);
	}

	static void LUA_NATIVE_NETWORK_0x405DDEFB1F531B18_(Volume volume, bool p1, Any p2, Any p3)
	{
		NETWORK::_0x405DDEFB1F531B18(volume, p1, p2, p3);
	}

	static void LUA_NATIVE_NETWORK_0x43CF999205084B4B_()
	{
		NETWORK::_0x43CF999205084B4B();
	}

	static void LUA_NATIVE_NETWORK_0x13F592FC3BF0EA84_(Volume volume, bool p1, float originalWeight, Any p3, Any p4)
	{
		NETWORK::_0x13F592FC3BF0EA84(volume, p1, originalWeight, p3, p4);
	}

	static void LUA_NATIVE_NETWORK_0xCF23AB5BD47B384D_(Any p0)
	{
		NETWORK::_0xCF23AB5BD47B384D(p0);
	}

	static void LUA_NATIVE_NETWORK_0xE5634491A58C2703_(float p0)
	{
		NETWORK::_0xE5634491A58C2703(p0);
	}

	static void LUA_NATIVE_NETWORK_NETWORK_SPAWN_CONFIG_SET_GROUND_TO_ROOT_OFFSET(float offset)
	{
		NETWORK::NETWORK_SPAWN_CONFIG_SET_GROUND_TO_ROOT_OFFSET(offset);
	}

	static void LUA_NATIVE_NETWORK_NETWORK_SPAWN_CONFIG_SET_LEVEL_WATER_DEPTH_(int waterDepthLevel)
	{
		NETWORK::_NETWORK_SPAWN_CONFIG_SET_LEVEL_WATER_DEPTH(waterDepthLevel);
	}

	static void LUA_NATIVE_NETWORK_NETWORK_SPAWN_CONFIG_SET_TUNING_FLOAT(Hash p0, float p1)
	{
		NETWORK::NETWORK_SPAWN_CONFIG_SET_TUNING_FLOAT(p0, p1);
	}

	static void LUA_NATIVE_NETWORK_0x5D3C528B7A7DF836_(Hash nsctf)
	{
		NETWORK::_0x5D3C528B7A7DF836(nsctf);
	}

	static void LUA_NATIVE_NETWORK_0x2686BD9566B65EDA_(float x, float y, float z)
	{
		NETWORK::_0x2686BD9566B65EDA(x, y, z);
	}

	static void LUA_NATIVE_NETWORK_0xBB1EC8C2EEF33BAA_(Entity entity)
	{
		NETWORK::_0xBB1EC8C2EEF33BAA(entity);
	}

	static bool LUA_NATIVE_NETWORK_0x67CCDF74C4DF7169_()
	{
		auto retval = (bool)NETWORK::_0x67CCDF74C4DF7169();
		return retval;
	}

	static void LUA_NATIVE_NETWORK_0xC8B6D18E22484643_()
	{
		NETWORK::_0xC8B6D18E22484643();
	}

	static void LUA_NATIVE_NETWORK_0x97BCE4C4B3191228_()
	{
		NETWORK::_0x97BCE4C4B3191228();
	}

	static int LUA_NATIVE_NETWORK_0x41452E8A3B9C0C4B_()
	{
		auto retval = NETWORK::_0x41452E8A3B9C0C4B();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_SPAWN_CONFIG_SEARCH_IN_PROGRESS_()
	{
		auto retval = (bool)NETWORK::_NETWORK_SPAWN_CONFIG_SEARCH_IN_PROGRESS();
		return retval;
	}

	static void LUA_NATIVE_NETWORK_0x61BFBAA795E712AD_()
	{
		NETWORK::_0x61BFBAA795E712AD();
	}

	static void LUA_NATIVE_NETWORK_NETWORK_SPAWN_CONFIG_SET_CANCEL_SEARCH_()
	{
		NETWORK::_NETWORK_SPAWN_CONFIG_SET_CANCEL_SEARCH();
	}

	static void LUA_NATIVE_NETWORK_0x691E4DE5309EAEFC_(Any p0, uintptr_t p1)
	{
		NETWORK::_0x691E4DE5309EAEFC(p0, (Any*)p1);
	}

	static void LUA_NATIVE_NETWORK_NETWORK_START_SOLO_TUTORIAL_SESSION()
	{
		NETWORK::NETWORK_START_SOLO_TUTORIAL_SESSION();
	}

	static void LUA_NATIVE_NETWORK_NETWORK_END_TUTORIAL_SESSION()
	{
		NETWORK::NETWORK_END_TUTORIAL_SESSION();
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_IS_IN_TUTORIAL_SESSION()
	{
		auto retval = (bool)NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING()
	{
		auto retval = (bool)NETWORK::NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(Player FirstPlayerIndex, Player SecondPlayerIndex)
	{
		auto retval = (bool)NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(FirstPlayerIndex, SecondPlayerIndex);
		return retval;
	}

	static void LUA_NATIVE_NETWORK_NETWORK_ALLOW_ALL_ENTITY_FADING_FOR_INSTANCES(bool toggle)
	{
		NETWORK::NETWORK_ALLOW_ALL_ENTITY_FADING_FOR_INSTANCES(toggle);
	}

	static void LUA_NATIVE_NETWORK_NETWORK_ALLOW_ENTITY_FADING_FOR_INSTANCES(Entity entity, bool toggle)
	{
		NETWORK::NETWORK_ALLOW_ENTITY_FADING_FOR_INSTANCES(entity, toggle);
	}

	static void LUA_NATIVE_NETWORK_0xDC6AD5C046F33AB4_(bool p0, bool p1)
	{
		NETWORK::_0xDC6AD5C046F33AB4(p0, p1);
	}

	static void LUA_NATIVE_NETWORK_0x6C7E04E9DE451789_()
	{
		NETWORK::_0x6C7E04E9DE451789();
	}

	static void LUA_NATIVE_NETWORK_NETWORK_SET_LOCAL_PLAYER_PENDING_FAST_INSTANCE_ID(int instanceId)
	{
		NETWORK::NETWORK_SET_LOCAL_PLAYER_PENDING_FAST_INSTANCE_ID(instanceId);
	}

	static int LUA_NATIVE_NETWORK_NETWORK_GET_PLAYER_FAST_INSTANCE_ID_(Player player)
	{
		auto retval = NETWORK::_NETWORK_GET_PLAYER_FAST_INSTANCE_ID(player);
		return retval;
	}

	static void LUA_NATIVE_NETWORK_NETWORK_CONCEAL_PLAYER(Player PlayerIndex, bool Conceal)
	{
		NETWORK::NETWORK_CONCEAL_PLAYER(PlayerIndex, Conceal);
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_IS_PLAYER_CONCEALED(Player PlayerIndex)
	{
		auto retval = (bool)NETWORK::NETWORK_IS_PLAYER_CONCEALED(PlayerIndex);
		return retval;
	}

	static void LUA_NATIVE_NETWORK_0x40FEDB13870042F1_()
	{
		NETWORK::_0x40FEDB13870042F1();
	}

	static void LUA_NATIVE_NETWORK_0x422F9D6D6C7BC290_(int p0)
	{
		NETWORK::_0x422F9D6D6C7BC290(p0);
	}

	static void LUA_NATIVE_NETWORK_NETWORK_REQUEST_CLOUD_TUNABLES()
	{
		NETWORK::NETWORK_REQUEST_CLOUD_TUNABLES();
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_IS_TUNABLE_CLOUD_REQUEST_PENDING()
	{
		auto retval = (bool)NETWORK::NETWORK_IS_TUNABLE_CLOUD_REQUEST_PENDING();
		return retval;
	}

	static int LUA_NATIVE_NETWORK_NETWORK_GET_TUNABLE_CLOUD_CRC()
	{
		auto retval = NETWORK::NETWORK_GET_TUNABLE_CLOUD_CRC();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_DOES_TUNABLE_EXIST(Hash tunableContext, Hash tunableName)
	{
		auto retval = (bool)NETWORK::NETWORK_DOES_TUNABLE_EXIST(tunableContext, tunableName);
		return retval;
	}

	static std::tuple<bool, int> LUA_NATIVE_NETWORK_NETWORK_ACCESS_TUNABLE_INT(Hash tunableContext, Hash tunableName, int value)
	{
		std::tuple<bool, int> return_values;
		std::get<0>(return_values) = (bool)NETWORK::NETWORK_ACCESS_TUNABLE_INT(tunableContext, tunableName, &value);
		std::get<1>(return_values) = value;

		return return_values;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_ACCESS_TUNABLE_BOOL(Hash tunableContext, Hash tunableName)
	{
		auto retval = (bool)NETWORK::NETWORK_ACCESS_TUNABLE_BOOL(tunableContext, tunableName);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_NETWORK_TRY_ACCESS_TUNABLE_INT_HASH(Hash tunableContext, Hash tunableName, int defaultValue)
	{
		auto retval = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_INT_HASH(tunableContext, tunableName, defaultValue);
		return retval;
	}

	static float LUA_NATIVE_NETWORK_NETWORK_TRY_ACCESS_TUNABLE_FLOAT_HASH(Hash tunableContext, Hash tunableName, float defaultValue)
	{
		auto retval = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_FLOAT_HASH(tunableContext, tunableName, defaultValue);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(Hash tunableContext, Hash tunableName, bool defaultValue)
	{
		auto retval = (bool)NETWORK::NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(tunableContext, tunableName, defaultValue);
		return retval;
	}

	static void LUA_NATIVE_NETWORK_0x894B5ECAB45D2342_(int netHandle, Any p1)
	{
		NETWORK::_0x894B5ECAB45D2342(netHandle, p1);
	}

	static void LUA_NATIVE_NETWORK_NETWORK_DISABLE_PROXIMITY_MIGRATION(int NetworkId)
	{
		NETWORK::NETWORK_DISABLE_PROXIMITY_MIGRATION(NetworkId);
	}

	static bool LUA_NATIVE_NETWORK_COMMERCE_STORE_IS_OPEN_()
	{
		auto retval = (bool)NETWORK::_COMMERCE_STORE_IS_OPEN();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_COMMERCE_STORE_IS_ENABLED_()
	{
		auto retval = (bool)NETWORK::_COMMERCE_STORE_IS_ENABLED();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_CLOUD_HAS_REQUEST_COMPLETED(int nRequestID)
	{
		auto retval = (bool)NETWORK::CLOUD_HAS_REQUEST_COMPLETED(nRequestID);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_CLOUD_DID_REQUEST_SUCCEED(int nRequestID)
	{
		auto retval = (bool)NETWORK::CLOUD_DID_REQUEST_SUCCEED(nRequestID);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_GET_LAUNCH_PARAM_EXISTS_(sol::stack_object paramName)
	{
		auto retval = (bool)NETWORK::_GET_LAUNCH_PARAM_EXISTS(paramName.is<const char*>() ? paramName.as<const char*>() : nullptr);
		return retval;
	}

	static const char* LUA_NATIVE_NETWORK_GET_LAUNCH_PARAM_VALUE(sol::stack_object paramName)
	{
		auto retval = NETWORK::GET_LAUNCH_PARAM_VALUE(paramName.is<const char*>() ? paramName.as<const char*>() : nullptr);
		return retval;
	}

	static void LUA_NATIVE_NETWORK_SET_LAUNCH_PARAM_VALUE_(sol::stack_object paramName, sol::stack_object value)
	{
		NETWORK::_SET_LAUNCH_PARAM_VALUE(paramName.is<const char*>() ? paramName.as<const char*>() : nullptr, value.is<const char*>() ? value.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_NETWORK_CLEAR_LAUNCH_PARAM_(sol::stack_object paramName)
	{
		NETWORK::_CLEAR_LAUNCH_PARAM(paramName.is<const char*>() ? paramName.as<const char*>() : nullptr);
	}

	static const char* LUA_NATIVE_NETWORK_GET_LAUNCH_PARAM_STRING_()
	{
		auto retval = NETWORK::_GET_LAUNCH_PARAM_STRING();
		return retval;
	}

	static void LUA_NATIVE_NETWORK_SET_LAUNCH_PARAM_STRING_(sol::stack_object params)
	{
		NETWORK::_SET_LAUNCH_PARAM_STRING(params.is<const char*>() ? params.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_NETWORK_CLEAR_SERVICE_EVENT_ARGUMENTS()
	{
		NETWORK::CLEAR_SERVICE_EVENT_ARGUMENTS();
	}

	static bool LUA_NATIVE_NETWORK_UGC_IS_REQUEST_PENDING(int ugcRequestId)
	{
		auto retval = (bool)NETWORK::UGC_IS_REQUEST_PENDING(ugcRequestId);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_UGC_HAS_REQUEST_FINISHED(int ugcRequestId)
	{
		auto retval = (bool)NETWORK::UGC_HAS_REQUEST_FINISHED(ugcRequestId);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_UGC_DID_REQUEST_SUCCEED(int ugcRequestId)
	{
		auto retval = (bool)NETWORK::UGC_DID_REQUEST_SUCCEED(ugcRequestId);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_0xCD53E6CBF609C012_(int ugcRequestId)
	{
		auto retval = (bool)NETWORK::_0xCD53E6CBF609C012(ugcRequestId);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_UGC_QUERY_BY_CONTENT_TYPE_(int p0, int maxGet, sol::stack_object contentTypeName, int p3, int p4, int p5)
	{
		auto retval = NETWORK::_UGC_QUERY_BY_CONTENT_TYPE(p0, maxGet, contentTypeName.is<const char*>() ? contentTypeName.as<const char*>() : nullptr, p3, p4, p5);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_UGC_QUERY_BY_CATEGORY_(int categoryType, int p1, int maxGet, sol::stack_object contentTypeName, int p4, bool p5)
	{
		auto retval = NETWORK::_UGC_QUERY_BY_CATEGORY(categoryType, p1, maxGet, contentTypeName.is<const char*>() ? contentTypeName.as<const char*>() : nullptr, p4, p5);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_UGC_QUERY_BY_CONTENT_ID_(sol::stack_object contentId, bool latestVersion, sol::stack_object contentTypeName)
	{
		auto retval = NETWORK::_UGC_QUERY_BY_CONTENT_ID(contentId.is<const char*>() ? contentId.as<const char*>() : nullptr, latestVersion, contentTypeName.is<const char*>() ? contentTypeName.as<const char*>() : nullptr);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_UGC_IS_BOOK_MARKED_(sol::stack_object contentId)
	{
		auto retval = (bool)NETWORK::_UGC_IS_BOOK_MARKED(contentId.is<const char*>() ? contentId.as<const char*>() : nullptr);
		return retval;
	}

	static void LUA_NATIVE_NETWORK_UGC_CLEAR_QUERY_RESULTS(int ugcRequestId)
	{
		NETWORK::UGC_CLEAR_QUERY_RESULTS(ugcRequestId);
	}

	static bool LUA_NATIVE_NETWORK_UGC_QUERY_WAS_FORCE_CANCELLED(int ugcRequestId)
	{
		auto retval = (bool)NETWORK::UGC_QUERY_WAS_FORCE_CANCELLED(ugcRequestId);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_UGC_QUERY_GET_CONTENT_NUM(int ugcRequestId)
	{
		auto retval = NETWORK::UGC_QUERY_GET_CONTENT_NUM(ugcRequestId);
		return retval;
	}

	static Any LUA_NATIVE_NETWORK_UGC_QUERY_GET_CREATOR_HANDLE_(Any p0, int index, uintptr_t gamerHandle)
	{
		auto retval = NETWORK::_UGC_QUERY_GET_CREATOR_HANDLE(p0, index, (Any*)gamerHandle);
		return retval;
	}

	static const char* LUA_NATIVE_NETWORK_UGC_QUERY_GET_OWNER_ID_(Any p0, int index)
	{
		auto retval = NETWORK::_UGC_QUERY_GET_OWNER_ID(p0, index);
		return retval;
	}

	static const char* LUA_NATIVE_NETWORK_UGC_QUERY_GET_NAME_(Any p0, int index)
	{
		auto retval = NETWORK::_UGC_QUERY_GET_NAME(p0, index);
		return retval;
	}

	static const char* LUA_NATIVE_NETWORK_UGC_QUERY_GET_ROOT_CONTENT_ID_(Any p0, int index)
	{
		auto retval = NETWORK::_UGC_QUERY_GET_ROOT_CONTENT_ID(p0, index);
		return retval;
	}

	static const char* LUA_NATIVE_NETWORK_UGC_QUERY_GET_PLAYLIST_NAME_(Any p0, int index)
	{
		auto retval = NETWORK::_UGC_QUERY_GET_PLAYLIST_NAME(p0, index);
		return retval;
	}

	static Hash LUA_NATIVE_NETWORK_UGC_QUERY_GET_MISSION_DESC_HASH_(Any p0, int index)
	{
		auto retval = NETWORK::_UGC_QUERY_GET_MISSION_DESC_HASH(p0, index);
		return retval;
	}

	static const char* LUA_NATIVE_NETWORK_UGC_QUERY_GET_CREATOR_PHOTO_(Any p0, int p1, Any p2)
	{
		auto retval = NETWORK::_UGC_QUERY_GET_CREATOR_PHOTO(p0, p1, p2);
		return retval;
	}

	static void LUA_NATIVE_NETWORK_UGC_QUERY_GET_DATE_(Any p0, int index, uintptr_t p2)
	{
		NETWORK::_UGC_QUERY_GET_DATE(p0, index, (Any*)p2);
	}

	static int LUA_NATIVE_NETWORK_UGC_QUERY_GET_POSIX_UPDATED_DATE_(Any p0, Any p1)
	{
		auto retval = NETWORK::_UGC_QUERY_GET_POSIX_UPDATED_DATE(p0, p1);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_UGC_QUERY_GET_POSIX_PUBLISHED_DATE_(Any p0, Any p1)
	{
		auto retval = NETWORK::_UGC_QUERY_GET_POSIX_PUBLISHED_DATE(p0, p1);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_UGC_QUERY_GET_VERSION_(Any p0, int index, int p2)
	{
		auto retval = NETWORK::_UGC_QUERY_GET_VERSION(p0, index, p2);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_UGC_QUERY_GET_LANGUAGE_(Any p0, int index)
	{
		auto retval = NETWORK::_UGC_QUERY_GET_LANGUAGE(p0, index);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_UGC_QUERY_GET_PUBLISHED_(Any p0, Any p1)
	{
		auto retval = (bool)NETWORK::_UGC_QUERY_GET_PUBLISHED(p0, p1);
		return retval;
	}

	static float LUA_NATIVE_NETWORK_UGC_QUERY_GET_RATING_(Any p0, int index, int p2)
	{
		auto retval = NETWORK::_UGC_QUERY_GET_RATING(p0, index, p2);
		return retval;
	}

	static Any LUA_NATIVE_NETWORK_0x5F0E99071582DECA_(Any p0, int index, int p2)
	{
		auto retval = NETWORK::_0x5F0E99071582DECA(p0, index, p2);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_UGC_QUERY_GET_CONTENT_HAS_PLAYER_RECORD(Any p0, int index)
	{
		auto retval = (bool)NETWORK::UGC_QUERY_GET_CONTENT_HAS_PLAYER_RECORD(p0, index);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_UGC_QUERY_GET_BOOK_MARKED_(Any p0, int index)
	{
		auto retval = (bool)NETWORK::_UGC_QUERY_GET_BOOK_MARKED(p0, index);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_UGC_HAS_PRIVILEGE_()
	{
		auto retval = (bool)NETWORK::_UGC_HAS_PRIVILEGE();
		return retval;
	}

	static int LUA_NATIVE_NETWORK_UGC_REQUEST_CONTENT_DATA_FROM_PARAMS(sol::stack_object szContentType, sol::stack_object szContentID, int nFileID, int nFileVersion, int nLanguage)
	{
		auto retval = NETWORK::UGC_REQUEST_CONTENT_DATA_FROM_PARAMS(szContentType.is<const char*>() ? szContentType.as<const char*>() : nullptr, szContentID.is<const char*>() ? szContentID.as<const char*>() : nullptr, nFileID, nFileVersion, nLanguage);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_UGC_REQUEST_CACHED_DESCRIPTION(Hash nHash)
	{
		auto retval = NETWORK::UGC_REQUEST_CACHED_DESCRIPTION(nHash);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_UGC_IS_DESCRIPTION_REQUEST_IN_PROGRESS(Hash nHash)
	{
		auto retval = (bool)NETWORK::UGC_IS_DESCRIPTION_REQUEST_IN_PROGRESS(nHash);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_UGC_HAS_DESCRIPTION_REQUEST_FINISHED(Hash nHash)
	{
		auto retval = (bool)NETWORK::UGC_HAS_DESCRIPTION_REQUEST_FINISHED(nHash);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_UGC_DID_DESCRIPTION_REQUEST_SUCCEED(Hash nHash)
	{
		auto retval = (bool)NETWORK::UGC_DID_DESCRIPTION_REQUEST_SUCCEED(nHash);
		return retval;
	}

	static const char* LUA_NATIVE_NETWORK_UGC_GET_CACHED_DESCRIPTION(Hash nHash, int nMaxLength)
	{
		auto retval = NETWORK::UGC_GET_CACHED_DESCRIPTION(nHash, nMaxLength);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_UGC_RELEASE_CACHED_DESCRIPTION(Hash nHash)
	{
		auto retval = (bool)NETWORK::UGC_RELEASE_CACHED_DESCRIPTION(nHash);
		return retval;
	}

	static void LUA_NATIVE_NETWORK_UGC_RELEASE_ALL_CACHED_DESCRIPTIONS()
	{
		NETWORK::UGC_RELEASE_ALL_CACHED_DESCRIPTIONS();
	}

	static void LUA_NATIVE_NETWORK_UGC_SET_QUERY_DATA_FROM_OFFLINE(bool bFromOffline)
	{
		NETWORK::UGC_SET_QUERY_DATA_FROM_OFFLINE(bFromOffline);
	}

	static bool LUA_NATIVE_NETWORK_UGC_IS_LANGUAGE_SUPPORTED(int nLanguage)
	{
		auto retval = (bool)NETWORK::UGC_IS_LANGUAGE_SUPPORTED(nLanguage);
		return retval;
	}

	static Any LUA_NATIVE_NETWORK_0xD4022C7286B0DFA2_(sol::stack_object p0, int p1, int p2)
	{
		auto retval = NETWORK::_0xD4022C7286B0DFA2(p0.is<const char*>() ? p0.as<const char*>() : nullptr, p1, p2);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_PERSONA_PHOTO_WRITE_SC_PROFILE_(sol::stack_object texture, int personaPhotoType, int formatIndex)
	{
		auto retval = (bool)NETWORK::_NETWORK_PERSONA_PHOTO_WRITE_SC_PROFILE(texture.is<const char*>() ? texture.as<const char*>() : nullptr, personaPhotoType, formatIndex);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_PERSONA_PHOTO_WRITE_LOCAL_(sol::stack_object texture, int playerSlot, int p2, int personaPhotoLocalCacheType)
	{
		auto retval = (bool)NETWORK::_NETWORK_PERSONA_PHOTO_WRITE_LOCAL(texture.is<const char*>() ? texture.as<const char*>() : nullptr, playerSlot, p2, personaPhotoLocalCacheType);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_IS_PREVIOUS_UPLOAD_PENDING_()
	{
		auto retval = (bool)NETWORK::_NETWORK_IS_PREVIOUS_UPLOAD_PENDING();
		return retval;
	}

	static Any LUA_NATIVE_NETWORK_0xCC4E72C339461ED1_()
	{
		auto retval = NETWORK::_0xCC4E72C339461ED1();
		return retval;
	}

	static const char* LUA_NATIVE_NETWORK_REQUEST_PEDSHOT_TEXTURE_LOCAL_BACKUP_DOWNLOAD_(int player, int personaPhotoLocalCacheType)
	{
		auto retval = NETWORK::_REQUEST_PEDSHOT_TEXTURE_LOCAL_BACKUP_DOWNLOAD(player, personaPhotoLocalCacheType);
		return retval;
	}

	static const char* LUA_NATIVE_NETWORK_REQUEST_PEDSHOT_TEXTURE_LOCAL_DOWNLOAD_(uintptr_t gamerHandle, int p1)
	{
		auto retval = NETWORK::_REQUEST_PEDSHOT_TEXTURE_LOCAL_DOWNLOAD((Any*)gamerHandle, p1);
		return retval;
	}

	static const char* LUA_NATIVE_NETWORK_REQUEST_PEDSHOT_TEXTURE_MULTIPLAYER_DOWNLOAD_(uintptr_t gamerHandle, int p1)
	{
		auto retval = NETWORK::_REQUEST_PEDSHOT_TEXTURE_MULTIPLAYER_DOWNLOAD((Any*)gamerHandle, p1);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_TEXTURE_DOWNLOAD_TEXTURE_NAME_IS_VALID_(sol::stack_object name)
	{
		auto retval = (bool)NETWORK::_TEXTURE_DOWNLOAD_TEXTURE_NAME_IS_VALID(name.is<const char*>() ? name.as<const char*>() : nullptr);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_TEXTURE_DOWNLOAD_REQUEST(uintptr_t gamerHandle, sol::stack_object cloudPath, sol::stack_object textureName, bool useCacheWithoutCloudChecks)
	{
		auto retval = NETWORK::TEXTURE_DOWNLOAD_REQUEST((Any*)gamerHandle, cloudPath.is<const char*>() ? cloudPath.as<const char*>() : nullptr, textureName.is<const char*>() ? textureName.as<const char*>() : nullptr, useCacheWithoutCloudChecks);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_MUGSHOT_TEXTURE_DOWNLOAD_REQUEST_(uintptr_t gamerHandle, int p1, sol::stack_object name, bool p3)
	{
		auto retval = NETWORK::_MUGSHOT_TEXTURE_DOWNLOAD_REQUEST((Any*)gamerHandle, p1, name.is<const char*>() ? name.as<const char*>() : nullptr, p3);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_UGC_TEXTURE_DOWNLOAD_REQUEST(sol::stack_object contentID, int nFileID, int nFileVersion, int nLanguage, sol::stack_object textureName, bool useCacheWithoutCloudChecks)
	{
		auto retval = NETWORK::UGC_TEXTURE_DOWNLOAD_REQUEST(contentID.is<const char*>() ? contentID.as<const char*>() : nullptr, nFileID, nFileVersion, nLanguage, textureName.is<const char*>() ? textureName.as<const char*>() : nullptr, useCacheWithoutCloudChecks);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_LOCAL_PLAYER_PEDSHOT_TEXTURE_DOWNLOAD_REQUEST_(int playerSlot, int personaPhotoLocalCacheType)
	{
		auto retval = NETWORK::_LOCAL_PLAYER_PEDSHOT_TEXTURE_DOWNLOAD_REQUEST(playerSlot, personaPhotoLocalCacheType);
		return retval;
	}

	static void LUA_NATIVE_NETWORK_TEXTURE_DOWNLOAD_RELEASE(int textureDownloadHandle)
	{
		NETWORK::TEXTURE_DOWNLOAD_RELEASE(textureDownloadHandle);
	}

	static void LUA_NATIVE_NETWORK_TEXTURE_DOWNLOAD_RELEASE_BY_NAME_(sol::stack_object name)
	{
		NETWORK::_TEXTURE_DOWNLOAD_RELEASE_BY_NAME(name.is<const char*>() ? name.as<const char*>() : nullptr);
	}

	static const char* LUA_NATIVE_NETWORK_TEXTURE_DOWNLOAD_GET_NAME(int textureDownloadHandle)
	{
		auto retval = NETWORK::TEXTURE_DOWNLOAD_GET_NAME(textureDownloadHandle);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_GET_STATUS_OF_TEXTURE_DOWNLOAD(int textureDownloadHandle)
	{
		auto retval = NETWORK::GET_STATUS_OF_TEXTURE_DOWNLOAD(textureDownloadHandle);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_PEDMUGSHOT_GET_STATUS_()
	{
		auto retval = NETWORK::_PEDMUGSHOT_GET_STATUS();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_PEDMUGSHOT_TAKE_()
	{
		auto retval = (bool)NETWORK::_PEDMUGSHOT_TAKE();
		return retval;
	}

	static Any LUA_NATIVE_NETWORK_PEDMUGSHOT_REQUEST_SEND_()
	{
		auto retval = NETWORK::_PEDMUGSHOT_REQUEST_SEND();
		return retval;
	}

	static void LUA_NATIVE_NETWORK_0x814729078AED6D30_()
	{
		NETWORK::_0x814729078AED6D30();
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_HAVE_ROS_BANNED_PRIV()
	{
		auto retval = (bool)NETWORK::NETWORK_HAVE_ROS_BANNED_PRIV();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_HAS_ROS_PRIVILEGE(int privilegeId)
	{
		auto retval = (bool)NETWORK::NETWORK_HAS_ROS_PRIVILEGE(privilegeId);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_NETWORK_START_USER_CONTENT_PERMISSIONS_CHECK(uintptr_t hGamer)
	{
		auto retval = NETWORK::NETWORK_START_USER_CONTENT_PERMISSIONS_CHECK((Any*)hGamer);
		return retval;
	}

	static void LUA_NATIVE_NETWORK_NETWORK_AUTO_SESSION_SET_ALLOWED_TO_SPLIT_(bool toggle)
	{
		NETWORK::_NETWORK_AUTO_SESSION_SET_ALLOWED_TO_SPLIT(toggle);
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_AUTO_SESSION_IS_ALLOWED_TO_MERGE()
	{
		auto retval = (bool)NETWORK::NETWORK_AUTO_SESSION_IS_ALLOWED_TO_MERGE();
		return retval;
	}

	static void LUA_NATIVE_NETWORK_NETWORK_AUTO_SESSION_SET_ALLOWED_TO_MERGE_(bool toggle, uintptr_t p1, int p2)
	{
		NETWORK::_NETWORK_AUTO_SESSION_SET_ALLOWED_TO_MERGE(toggle, (Any*)p1, p2);
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_AUTO_SESSION_IS_AUTO_WARP_DISABLED_()
	{
		auto retval = (bool)NETWORK::_NETWORK_AUTO_SESSION_IS_AUTO_WARP_DISABLED();
		return retval;
	}

	static void LUA_NATIVE_NETWORK_NETWORK_AUTO_SESSION_SET_AUTO_WARP_ENABLED_(bool toggle)
	{
		NETWORK::_NETWORK_AUTO_SESSION_SET_AUTO_WARP_ENABLED(toggle);
	}

	static std::tuple<bool, int> LUA_NATIVE_NETWORK_NETWORK_AUTO_SESSION_CAN_SPLIT_SESSION(int p0)
	{
		std::tuple<bool, int> return_values;
		std::get<0>(return_values) = (bool)NETWORK::NETWORK_AUTO_SESSION_CAN_SPLIT_SESSION(&p0);
		std::get<1>(return_values) = p0;

		return return_values;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_AUTO_SESSION_SPLIT_SESSION(int playersToTake, int maxInstancePlayers, int sessionFlags, int bucketId)
	{
		auto retval = (bool)NETWORK::NETWORK_AUTO_SESSION_SPLIT_SESSION(playersToTake, maxInstancePlayers, sessionFlags, bucketId);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_AUTO_SESSION_IS_PROCESSING_SESSION_SPLIT_()
	{
		auto retval = (bool)NETWORK::_NETWORK_AUTO_SESSION_IS_PROCESSING_SESSION_SPLIT();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_AUTO_SESSION_SPLIT_SESSION_SUCCESSFUL_()
	{
		auto retval = (bool)NETWORK::_NETWORK_AUTO_SESSION_SPLIT_SESSION_SUCCESSFUL();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_AUTO_SESSION_IS_INSTANCED_SESSION_()
	{
		auto retval = (bool)NETWORK::_NETWORK_AUTO_SESSION_IS_INSTANCED_SESSION();
		return retval;
	}

	static void LUA_NATIVE_NETWORK_NETWORK_AUTO_SESSION_FINISH_INSTANCE()
	{
		NETWORK::NETWORK_AUTO_SESSION_FINISH_INSTANCE();
	}

	static void LUA_NATIVE_NETWORK_0xFD8112109A96877C_()
	{
		NETWORK::_0xFD8112109A96877C();
	}

	static void LUA_NATIVE_NETWORK_0x5A91BCEF74944E93_(Player player, float p1)
	{
		NETWORK::_0x5A91BCEF74944E93(player, p1);
	}

	static int LUA_NATIVE_NETWORK_0xFB3205788F8AFA3F_()
	{
		auto retval = NETWORK::_0xFB3205788F8AFA3F();
		return retval;
	}

	static void LUA_NATIVE_NETWORK_0x335AF56613CA0F49_(int p0)
	{
		NETWORK::_0x335AF56613CA0F49(p0);
	}

	static bool LUA_NATIVE_NETWORK_0x9E5A47744C0F0376_(int p0)
	{
		auto retval = (bool)NETWORK::_0x9E5A47744C0F0376(p0);
		return retval;
	}

	static void LUA_NATIVE_NETWORK_0xD3B6EBC6C3D77D44_(int p0)
	{
		NETWORK::_0xD3B6EBC6C3D77D44(p0);
	}

	static void LUA_NATIVE_NETWORK_0xA7670F7991099680_(int p0)
	{
		NETWORK::_0xA7670F7991099680(p0);
	}

	static void LUA_NATIVE_NETWORK_0x7673C0D2C5CDAC55_()
	{
		NETWORK::_0x7673C0D2C5CDAC55();
	}

	static void LUA_NATIVE_NETWORK_0x3CBD6565D9C3B133_(int p0, int p1, float p2)
	{
		NETWORK::_0x3CBD6565D9C3B133(p0, p1, p2);
	}

	static void LUA_NATIVE_NETWORK_0x0D183D8490EE4366_(int p0, int p1)
	{
		NETWORK::_0x0D183D8490EE4366(p0, p1);
	}

	static void LUA_NATIVE_NETWORK_0xC1968045EEB563B7_(int p0)
	{
		NETWORK::_0xC1968045EEB563B7(p0);
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_AUTO_SESSION_IS_OBJECT_CREATION_PAUSED()
	{
		auto retval = (bool)NETWORK::NETWORK_AUTO_SESSION_IS_OBJECT_CREATION_PAUSED();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_0x0B6B4507AC5EA8B8_()
	{
		auto retval = (bool)NETWORK::_0x0B6B4507AC5EA8B8();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_IS_RESETTING_POPULATION()
	{
		auto retval = (bool)NETWORK::NETWORK_IS_RESETTING_POPULATION();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_RESET_POPULATION(bool p0, int p1)
	{
		auto retval = (bool)NETWORK::NETWORK_RESET_POPULATION(p0, p1);
		return retval;
	}

	static void LUA_NATIVE_NETWORK_NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(bool flag)
	{
		NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(flag);
	}

	static void LUA_NATIVE_NETWORK_0x3034C77C79A58880_(bool p0)
	{
		NETWORK::_0x3034C77C79A58880(p0);
	}

	static void LUA_NATIVE_NETWORK_NETWORK_ALLOW_REMOTE_ATTACHMENT_MODIFICATION(Entity EntityIndex, bool CanModify)
	{
		NETWORK::NETWORK_ALLOW_REMOTE_ATTACHMENT_MODIFICATION(EntityIndex, CanModify);
	}

	static void LUA_NATIVE_NETWORK_NETWORK_SHOW_CHAT_RESTRICTION_MSC(Player localGamerIndex)
	{
		NETWORK::NETWORK_SHOW_CHAT_RESTRICTION_MSC(localGamerIndex);
	}

	static void LUA_NATIVE_NETWORK_NETWORK_SHOW_PSN_UGC_RESTRICTION()
	{
		NETWORK::NETWORK_SHOW_PSN_UGC_RESTRICTION();
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_IS_CONNECTED_VIA_RELAY(Player PlayerIndex)
	{
		auto retval = (bool)NETWORK::NETWORK_IS_CONNECTED_VIA_RELAY(PlayerIndex);
		return retval;
	}

	static float LUA_NATIVE_NETWORK_NETWORK_GET_AVERAGE_LATENCY(Player PlayerIndex)
	{
		auto retval = NETWORK::NETWORK_GET_AVERAGE_LATENCY(PlayerIndex);
		return retval;
	}

	static float LUA_NATIVE_NETWORK_NETWORK_GET_AVERAGE_PING(Player PlayerIndex)
	{
		auto retval = NETWORK::NETWORK_GET_AVERAGE_PING(PlayerIndex);
		return retval;
	}

	static float LUA_NATIVE_NETWORK_NETWORK_GET_AVERAGE_PACKET_LOSS(Player PlayerIndex)
	{
		auto retval = NETWORK::NETWORK_GET_AVERAGE_PACKET_LOSS(PlayerIndex);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_NETWORK_GET_NUM_UNACKED_RELIABLES(Player PlayerIndex)
	{
		auto retval = NETWORK::NETWORK_GET_NUM_UNACKED_RELIABLES(PlayerIndex);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_NETWORK_GET_UNRELIABLE_RESEND_COUNT(Player PlayerIndex)
	{
		auto retval = NETWORK::NETWORK_GET_UNRELIABLE_RESEND_COUNT(PlayerIndex);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_NETWORK_GET_HIGHEST_RELIABLE_RESEND_COUNT(Player PlayerIndex)
	{
		auto retval = NETWORK::NETWORK_GET_HIGHEST_RELIABLE_RESEND_COUNT(PlayerIndex);
		return retval;
	}

	static void LUA_NATIVE_NETWORK_NETWORK_DUMP_NET_IF_CONFIG()
	{
		NETWORK::NETWORK_DUMP_NET_IF_CONFIG();
	}

	static void LUA_NATIVE_NETWORK_NETWORK_GET_NET_STATISTICS_INFO()
	{
		NETWORK::NETWORK_GET_NET_STATISTICS_INFO();
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_IS_PLAYER_INDEX_VALID(Player player)
	{
		auto retval = (bool)NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(player);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_GET_PLAYER_WAYPOINT_IS_ACTIVE_(Player player)
	{
		auto retval = (bool)NETWORK::_GET_PLAYER_WAYPOINT_IS_ACTIVE(player);
		return retval;
	}

	static void LUA_NATIVE_NETWORK_0x455156F47DC6B78C_(bool p0)
	{
		NETWORK::_0x455156F47DC6B78C(p0);
	}

	static void LUA_NATIVE_NETWORK_SET_LOCAL_PLAYER_DAMAGE_MULTIPLIER_FOR_PLAYER_(Player player, float damageMultiplier)
	{
		NETWORK::_SET_LOCAL_PLAYER_DAMAGE_MULTIPLIER_FOR_PLAYER(player, damageMultiplier);
	}

	static void LUA_NATIVE_NETWORK_NETWORK_TRIGGER_DAMAGE_EVENT_FOR_ZERO_DAMAGE(Entity EntityIndex, bool shouldTrigger)
	{
		NETWORK::NETWORK_TRIGGER_DAMAGE_EVENT_FOR_ZERO_DAMAGE(EntityIndex, shouldTrigger);
	}

	static void LUA_NATIVE_NETWORK_0x5CD3AAD8FF9ED121_(Any p0)
	{
		NETWORK::_0x5CD3AAD8FF9ED121(p0);
	}

	static void LUA_NATIVE_NETWORK_0x51951DE06C0D1C40_(Player player, int type)
	{
		NETWORK::_0x51951DE06C0D1C40(player, type);
	}

	static void LUA_NATIVE_NETWORK_0xE3AB5EEFCB6671A2_(int setting)
	{
		NETWORK::_0xE3AB5EEFCB6671A2(setting);
	}

	static void LUA_NATIVE_NETWORK_0x9B39B0555CC692B5_()
	{
		NETWORK::_0x9B39B0555CC692B5();
	}

	static int LUA_NATIVE_NETWORK_0xFE53B1F8D43F19BF_(Player player1, Player player2)
	{
		auto retval = NETWORK::_0xFE53B1F8D43F19BF(player1, player2);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_0x862C5040F4888741_(Player player1, Player player2)
	{
		auto retval = (bool)NETWORK::_0x862C5040F4888741(player1, player2);
		return retval;
	}

	static void LUA_NATIVE_NETWORK_0x2CD41AC000E6F611_()
	{
		NETWORK::_0x2CD41AC000E6F611();
	}

	static void LUA_NATIVE_NETWORK_0xACC44768AF229042_()
	{
		NETWORK::_0xACC44768AF229042();
	}

	static void LUA_NATIVE_NETWORK_0x7E300B5B86AB1D1A_(uintptr_t p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11, int p12, int p13, int p14)
	{
		NETWORK::_0x7E300B5B86AB1D1A((Any*)p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14);
	}

	static int LUA_NATIVE_NETWORK_GET_UNIQUE_INT_FOR_PLAYER(Player player)
	{
		auto retval = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(player);
		return retval;
	}

	static void LUA_NATIVE_NETWORK_0x780A13F780A13F1B_(bool toggle)
	{
		NETWORK::_0x780A13F780A13F1B(toggle);
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_IS_TRACKED_PLAYER_VISIBLE_(Player player, Player trackedPlayer)
	{
		auto retval = (bool)NETWORK::_NETWORK_IS_TRACKED_PLAYER_VISIBLE(player, trackedPlayer);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_IS_AIM_CAM_ACTIVE(Player player)
	{
		auto retval = (bool)NETWORK::NETWORK_IS_AIM_CAM_ACTIVE(player);
		return retval;
	}

	static void LUA_NATIVE_NETWORK_NETWORK_ALERT_(Hash ctx, Hash lh, int ec, int h)
	{
		NETWORK::_NETWORK_ALERT(ctx, lh, ec, h);
	}

	static void LUA_NATIVE_NETWORK_0x19447FCAE97704DC_(Hash ctx, int ec, bool ex, bool ro)
	{
		NETWORK::_0x19447FCAE97704DC(ctx, ec, ex, ro);
	}

	static void LUA_NATIVE_NETWORK_0x2C4E98DDA475364F_(sol::stack_object p0)
	{
		NETWORK::_0x2C4E98DDA475364F(p0.is<const char*>() ? p0.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_NETWORK_0x3F0ABAE38A0515AD_(int p0, int p1)
	{
		NETWORK::_0x3F0ABAE38A0515AD(p0, p1);
	}

	static int LUA_NATIVE_NETWORK_0x3F2EE18A3E294801_(int p0)
	{
		auto retval = NETWORK::_0x3F2EE18A3E294801(p0);
		return retval;
	}

	static void LUA_NATIVE_NETWORK_SET_SOCIAL_MATCHMAKING_ALLOWED_(bool toggle)
	{
		NETWORK::_SET_SOCIAL_MATCHMAKING_ALLOWED(toggle);
	}

	static bool LUA_NATIVE_NETWORK_GET_SOCIAL_MATCHMAKING_ALLOWED_()
	{
		auto retval = (bool)NETWORK::_GET_SOCIAL_MATCHMAKING_ALLOWED();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_AWARD_HAS_REACHED_MAXCLAIM(Any p0)
	{
		auto retval = (bool)NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(p0);
		return retval;
	}

	static Any LUA_NATIVE_NETWORK_0x271F95E55C663B8B_(Any p0, Any p1)
	{
		auto retval = NETWORK::_0x271F95E55C663B8B(p0, p1);
		return retval;
	}

	static Any LUA_NATIVE_NETWORK_0x64A36BA85CE01A81_(Any p0, Any p1, Any p2, Any p3)
	{
		auto retval = NETWORK::_0x64A36BA85CE01A81(p0, p1, p2, p3);
		return retval;
	}

	static Any LUA_NATIVE_NETWORK_0xE10F2D7715ABABEC_(Any p0)
	{
		auto retval = NETWORK::_0xE10F2D7715ABABEC(p0);
		return retval;
	}

	static Any LUA_NATIVE_NETWORK_0x7A8E8DF782B47EB0_(Any p0, Any p1, Any p2)
	{
		auto retval = NETWORK::_0x7A8E8DF782B47EB0(p0, p1, p2);
		return retval;
	}

	static Any LUA_NATIVE_NETWORK_0x77B299E8799B1332_(Any p0, Any p1, Any p2)
	{
		auto retval = NETWORK::_0x77B299E8799B1332(p0, p1, p2);
		return retval;
	}

	static Any LUA_NATIVE_NETWORK_0x923346025512DFB7_(Any p0)
	{
		auto retval = NETWORK::_0x923346025512DFB7(p0);
		return retval;
	}

	static int LUA_NATIVE_NETWORK_NETWORK_GET_XP_()
	{
		auto retval = NETWORK::_NETWORK_GET_XP();
		return retval;
	}

	static int LUA_NATIVE_NETWORK_NETWORK_GET_RANK_()
	{
		auto retval = NETWORK::_NETWORK_GET_RANK();
		return retval;
	}

	static void LUA_NATIVE_NETWORK_NETWORK_SET_RECENT_GAMERS_ENABLED(bool toggle)
	{
		NETWORK::NETWORK_SET_RECENT_GAMERS_ENABLED(toggle);
	}

	static bool LUA_NATIVE_NETWORK_0x273E04A3A7AD1F2D_()
	{
		auto retval = (bool)NETWORK::_0x273E04A3A7AD1F2D();
		return retval;
	}

	static void LUA_NATIVE_NETWORK_NETWORK_ADD_PLAYER_TO_RECENT_GAMERS_LIST_(Player player, int p1)
	{
		NETWORK::_NETWORK_ADD_PLAYER_TO_RECENT_GAMERS_LIST(player, p1);
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_REQUEST_RECENT_GAMER_NAMES(int p0, int playerCount)
	{
		auto retval = (bool)NETWORK::NETWORK_REQUEST_RECENT_GAMER_NAMES(p0, playerCount);
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_IS_RECENT_GAMER_NAMES_REQUEST_IN_PROGRESS_()
	{
		auto retval = (bool)NETWORK::_NETWORK_IS_RECENT_GAMER_NAMES_REQUEST_IN_PROGRESS();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_DID_RECENT_GAMER_NAMES_REQUEST_SUCCEED_()
	{
		auto retval = (bool)NETWORK::_NETWORK_DID_RECENT_GAMER_NAMES_REQUEST_SUCCEED();
		return retval;
	}

	static int LUA_NATIVE_NETWORK_NETWORK_GET_NUM_RECENT_GAMERS_()
	{
		auto retval = NETWORK::_NETWORK_GET_NUM_RECENT_GAMERS();
		return retval;
	}

	static bool LUA_NATIVE_NETWORK_NETWORK_GET_RECENT_GAMER_NAMES(int p0, int p1, uintptr_t outData, int dataSize)
	{
		auto retval = (bool)NETWORK::NETWORK_GET_RECENT_GAMER_NAMES(p0, p1, (Any*)outData, dataSize);
		return retval;
	}

	static void LUA_NATIVE_NETWORK_0x49CF17A564918E8D_()
	{
		NETWORK::_0x49CF17A564918E8D();
	}

	static void LUA_NATIVE_NETWORK_0xD637D327080CD86E_(int p0)
	{
		NETWORK::_0xD637D327080CD86E(p0);
	}

	static void LUA_NATIVE_NETWORK_0x564552C6AF1EEAB1_()
	{
		NETWORK::_0x564552C6AF1EEAB1();
	}

	static void LUA_NATIVE_NETWORK_NETWORK_ACTIVITY_RESET_TO_IDLE()
	{
		NETWORK::NETWORK_ACTIVITY_RESET_TO_IDLE();
	}

	static void LUA_NATIVE_NETWORK_NETWORK_ACTIVITY_SET_CURRENT(int netPlaylistActivity)
	{
		NETWORK::NETWORK_ACTIVITY_SET_CURRENT(netPlaylistActivity);
	}

	static const char* LUA_NATIVE_NETWORK_NETWORK_GET_ROS_TITLE_NAME_()
	{
		auto retval = NETWORK::_NETWORK_GET_ROS_TITLE_NAME();
		return retval;
	}

	static void LUA_NATIVE_NETWORK_REPORT_PLAYER_(Player player, int reportType, sol::stack_object description, sol::stack_object horseName)
	{
		NETWORK::_REPORT_PLAYER(player, reportType, description.is<const char*>() ? description.as<const char*>() : nullptr, horseName.is<const char*>() ? horseName.as<const char*>() : nullptr);
	}

	void init_native_binding_NETWORK(sol::state& L)
	{
		auto NETWORK = L["NETWORK"].get_or_create<sol::table>();
		NETWORK.set_function("NETWORK_IS_SIGNED_ONLINE", LUA_NATIVE_NETWORK_NETWORK_IS_SIGNED_ONLINE);
		NETWORK.set_function("NETWORK_GET_NP_UNAVAILABLE_REASON", LUA_NATIVE_NETWORK_NETWORK_GET_NP_UNAVAILABLE_REASON);
		NETWORK.set_function("NETWORK_HAS_VALID_ROS_CREDENTIALS", LUA_NATIVE_NETWORK_NETWORK_HAS_VALID_ROS_CREDENTIALS);
		NETWORK.set_function("NETWORK_IS_CLOUD_AVAILABLE", LUA_NATIVE_NETWORK_NETWORK_IS_CLOUD_AVAILABLE);
		NETWORK.set_function("NETWORK_HAS_SOCIAL_CLUB_ACCOUNT", LUA_NATIVE_NETWORK_NETWORK_HAS_SOCIAL_CLUB_ACCOUNT);
		NETWORK.set_function("NETWORK_IS_HOST", LUA_NATIVE_NETWORK_NETWORK_IS_HOST);
		NETWORK.set_function("NETWORK_HAVE_ONLINE_PRIVILEGES", LUA_NATIVE_NETWORK_NETWORK_HAVE_ONLINE_PRIVILEGES);
		NETWORK.set_function("NETWORK_CHECK_USER_CONTENT_PRIVILEGES", LUA_NATIVE_NETWORK_NETWORK_CHECK_USER_CONTENT_PRIVILEGES);
		NETWORK.set_function("NETWORK_CHECK_COMMUNICATION_PRIVILEGES", LUA_NATIVE_NETWORK_NETWORK_CHECK_COMMUNICATION_PRIVILEGES);
		NETWORK.set_function("NETWORK_CAN_VIEW_GAMER_USER_CONTENT", LUA_NATIVE_NETWORK_NETWORK_CAN_VIEW_GAMER_USER_CONTENT);
		NETWORK.set_function("0xF23A6D6C11D8EC15_", LUA_NATIVE_NETWORK_0xF23A6D6C11D8EC15_);
		NETWORK.set_function("0x3E8CCE6769DB5F34_", LUA_NATIVE_NETWORK_0x3E8CCE6769DB5F34_);
		NETWORK.set_function("NETWORK_SHOW_ACCOUNT_UPGRADE_UI", LUA_NATIVE_NETWORK_NETWORK_SHOW_ACCOUNT_UPGRADE_UI);
		NETWORK.set_function("NETWORK_IS_PROMOTION_ENABLED", LUA_NATIVE_NETWORK_NETWORK_IS_PROMOTION_ENABLED);
		NETWORK.set_function("NETWORK_IS_CUSTOM_UPSELL_ENABLED", LUA_NATIVE_NETWORK_NETWORK_IS_CUSTOM_UPSELL_ENABLED);
		NETWORK.set_function("NETWORK_SHOULD_SHOW_PROMOTION_DLG", LUA_NATIVE_NETWORK_NETWORK_SHOULD_SHOW_PROMOTION_DLG);
		NETWORK.set_function("0xFC6FCF4C03F1BBF6_", LUA_NATIVE_NETWORK_0xFC6FCF4C03F1BBF6_);
		NETWORK.set_function("0x160F0CE6D76A39C9_", LUA_NATIVE_NETWORK_0x160F0CE6D76A39C9_);
		NETWORK.set_function("NETWORK_GET_PROMOTION_DLG_SEEN_COUNT", LUA_NATIVE_NETWORK_NETWORK_GET_PROMOTION_DLG_SEEN_COUNT);
		NETWORK.set_function("0xE5FF65CFF5160752_", LUA_NATIVE_NETWORK_0xE5FF65CFF5160752_);
		NETWORK.set_function("NETWORK_CAN_ACCESS_MULTIPLAYER", LUA_NATIVE_NETWORK_NETWORK_CAN_ACCESS_MULTIPLAYER);
		NETWORK.set_function("NETWORK_CHECK_ACCESS_AND_ALERT_IF_FAIL", LUA_NATIVE_NETWORK_NETWORK_CHECK_ACCESS_AND_ALERT_IF_FAIL);
		NETWORK.set_function("NETWORK_GET_GLOBAL_ENTITY_FLAGS_", LUA_NATIVE_NETWORK_NETWORK_GET_GLOBAL_ENTITY_FLAGS_);
		NETWORK.set_function("0xA95470DA137587F5_", LUA_NATIVE_NETWORK_0xA95470DA137587F5_);
		NETWORK.set_function("0xBB697756309D77EE_", LUA_NATIVE_NETWORK_0xBB697756309D77EE_);
		NETWORK.set_function("NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT_", LUA_NATIVE_NETWORK_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT_);
		NETWORK.set_function("NETWORK_SET_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT", LUA_NATIVE_NETWORK_NETWORK_SET_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT);
		NETWORK.set_function("0xD7D0DF27CB1765B5_", LUA_NATIVE_NETWORK_0xD7D0DF27CB1765B5_);
		NETWORK.set_function("NETWORK_SET_MP_MISSION_FLAG_ON_CURRENT_SLOT", LUA_NATIVE_NETWORK_NETWORK_SET_MP_MISSION_FLAG_ON_CURRENT_SLOT);
		NETWORK.set_function("0x3E74A687A73979C6_", LUA_NATIVE_NETWORK_0x3E74A687A73979C6_);
		NETWORK.set_function("NETWORK_SESSION_IS_PRIVATE", LUA_NATIVE_NETWORK_NETWORK_SESSION_IS_PRIVATE);
		NETWORK.set_function("NETWORK_SESSION_GET_SESSION_ID_", LUA_NATIVE_NETWORK_NETWORK_SESSION_GET_SESSION_ID_);
		NETWORK.set_function("NETWORK_SESSION_ARE_SESSION_IDS_EQUAL_", LUA_NATIVE_NETWORK_NETWORK_SESSION_ARE_SESSION_IDS_EQUAL_);
		NETWORK.set_function("NETWORK_REQUEST_SESSION_SEAMLESS", LUA_NATIVE_NETWORK_NETWORK_REQUEST_SESSION_SEAMLESS);
		NETWORK.set_function("NETWORK_SESSION_REQUEST_SESSION_SEAMLESS", LUA_NATIVE_NETWORK_NETWORK_SESSION_REQUEST_SESSION_SEAMLESS);
		NETWORK.set_function("NETWORK_SESSION_REQUEST_SESSION_COMPETITIVE", LUA_NATIVE_NETWORK_NETWORK_SESSION_REQUEST_SESSION_COMPETITIVE);
		NETWORK.set_function("NETWORK_SESSION_REQUEST_SESSION_PRIVATE", LUA_NATIVE_NETWORK_NETWORK_SESSION_REQUEST_SESSION_PRIVATE);
		NETWORK.set_function("NETWORK_SESSION_REQUEST_SESSION_ON_CALL_", LUA_NATIVE_NETWORK_NETWORK_SESSION_REQUEST_SESSION_ON_CALL_);
		NETWORK.set_function("NETWORK_SESSION_REQUEST_SESSION_NOMINATED_", LUA_NATIVE_NETWORK_NETWORK_SESSION_REQUEST_SESSION_NOMINATED_);
		NETWORK.set_function("NETWORK_SESSION_IS_SESSION_REQUEST_ID_VALID", LUA_NATIVE_NETWORK_NETWORK_SESSION_IS_SESSION_REQUEST_ID_VALID);
		NETWORK.set_function("NETWORK_SESSION_GET_SESSION_TYPE", LUA_NATIVE_NETWORK_NETWORK_SESSION_GET_SESSION_TYPE);
		NETWORK.set_function("0x1413B6BF27AB7A95_", LUA_NATIVE_NETWORK_0x1413B6BF27AB7A95_);
		NETWORK.set_function("NETWORK_SESSION_IS_ANY_REQUEST_IN_PROGRESS", LUA_NATIVE_NETWORK_NETWORK_SESSION_IS_ANY_REQUEST_IN_PROGRESS);
		NETWORK.set_function("0xAFA14F98327791CE_", LUA_NATIVE_NETWORK_0xAFA14F98327791CE_);
		NETWORK.set_function("NETWORK_SESSION_IS_REQUEST_IN_PROGRESS", LUA_NATIVE_NETWORK_NETWORK_SESSION_IS_REQUEST_IN_PROGRESS);
		NETWORK.set_function("NETWORK_SESSION_IS_REQUEST_IN_PROGRESS_BY_QUEUE_GROUP_", LUA_NATIVE_NETWORK_NETWORK_SESSION_IS_REQUEST_IN_PROGRESS_BY_QUEUE_GROUP_);
		NETWORK.set_function("NETWORK_SESSION_CANCEL_REQUEST_", LUA_NATIVE_NETWORK_NETWORK_SESSION_CANCEL_REQUEST_);
		NETWORK.set_function("0xA6F1BAABFF6AD7B9_", LUA_NATIVE_NETWORK_0xA6F1BAABFF6AD7B9_);
		NETWORK.set_function("NETWORK_SESSION_GET_SESSION_REQUEST_RESULT_", LUA_NATIVE_NETWORK_NETWORK_SESSION_GET_SESSION_REQUEST_RESULT_);
		NETWORK.set_function("NETWORK_SESSION_IS_REQUEST_PENDING_TRANSITION", LUA_NATIVE_NETWORK_NETWORK_SESSION_IS_REQUEST_PENDING_TRANSITION);
		NETWORK.set_function("NETWORK_SESSION_TRANSITION_TO_SESSION_", LUA_NATIVE_NETWORK_NETWORK_SESSION_TRANSITION_TO_SESSION_);
		NETWORK.set_function("NETWORK_SESSION_IS_NSRR_SUCCESS_", LUA_NATIVE_NETWORK_NETWORK_SESSION_IS_NSRR_SUCCESS_);
		NETWORK.set_function("NETWORK_SESSION_LEFT_QUEUE_OR_REQUESTED_SESSION", LUA_NATIVE_NETWORK_NETWORK_SESSION_LEFT_QUEUE_OR_REQUESTED_SESSION);
		NETWORK.set_function("NETWORK_SESSION_LEAVE_SESSION", LUA_NATIVE_NETWORK_NETWORK_SESSION_LEAVE_SESSION);
		NETWORK.set_function("NETWORK_SESSION_IS_TRANSITIONING", LUA_NATIVE_NETWORK_NETWORK_SESSION_IS_TRANSITIONING);
		NETWORK.set_function("0xFD4272A137703449_", LUA_NATIVE_NETWORK_0xFD4272A137703449_);
		NETWORK.set_function("NETWORK_SESSION_PLAYLIST_GO_TO_NEXT_CONTENT_", LUA_NATIVE_NETWORK_NETWORK_SESSION_PLAYLIST_GO_TO_NEXT_CONTENT_);
		NETWORK.set_function("NETWORK_SESSION_PLAYLIST_GET_UPCOMING_CONTENT_", LUA_NATIVE_NETWORK_NETWORK_SESSION_PLAYLIST_GET_UPCOMING_CONTENT_);
		NETWORK.set_function("NETWORK_DISABLE_REALTIME_MULTIPLAYER", LUA_NATIVE_NETWORK_NETWORK_DISABLE_REALTIME_MULTIPLAYER);
		NETWORK.set_function("0x71FA2D1880C48032_", LUA_NATIVE_NETWORK_0x71FA2D1880C48032_);
		NETWORK.set_function("NETWORK_GET_GLOBAL_MULTIPLAYER_CLOCK", LUA_NATIVE_NETWORK_NETWORK_GET_GLOBAL_MULTIPLAYER_CLOCK);
		NETWORK.set_function("NETWORK_CLEAR_CLOCK_TIME_OVERRIDE", LUA_NATIVE_NETWORK_NETWORK_CLEAR_CLOCK_TIME_OVERRIDE);
		NETWORK.set_function("NETWORK_IS_CLOCK_TIME_OVERRIDDEN", LUA_NATIVE_NETWORK_NETWORK_IS_CLOCK_TIME_OVERRIDDEN);
		NETWORK.set_function("NETWORK_GET_GLOBAL_CLOCK", LUA_NATIVE_NETWORK_NETWORK_GET_GLOBAL_CLOCK);
		NETWORK.set_function("NETWORK_CLOCK_TIME_OVERRIDE_", LUA_NATIVE_NETWORK_NETWORK_CLOCK_TIME_OVERRIDE_);
		NETWORK.set_function("NETWORK_CLOCK_TIME_OVERRIDE_2_", LUA_NATIVE_NETWORK_NETWORK_CLOCK_TIME_OVERRIDE_2_);
		NETWORK.set_function("NETWORK_CLEAR_CLOCK_OVERRIDE_OVERTIME_", LUA_NATIVE_NETWORK_NETWORK_CLEAR_CLOCK_OVERRIDE_OVERTIME_);
		NETWORK.set_function("0x0E54D4DA6018FF8E_", LUA_NATIVE_NETWORK_0x0E54D4DA6018FF8E_);
		NETWORK.set_function("NETWORK_IS_FINDING_GAMERS", LUA_NATIVE_NETWORK_NETWORK_IS_FINDING_GAMERS);
		NETWORK.set_function("NETWORK_DID_FIND_GAMERS_SUCCEED", LUA_NATIVE_NETWORK_NETWORK_DID_FIND_GAMERS_SUCCEED);
		NETWORK.set_function("0x7BCA0A3972708436_", LUA_NATIVE_NETWORK_0x7BCA0A3972708436_);
		NETWORK.set_function("NETWORK_CLEAR_FOUND_GAMERS", LUA_NATIVE_NETWORK_NETWORK_CLEAR_FOUND_GAMERS);
		NETWORK.set_function("NETWORK_GET_GAMER_SESSION_FROM_HANDLE_", LUA_NATIVE_NETWORK_NETWORK_GET_GAMER_SESSION_FROM_HANDLE_);
		NETWORK.set_function("NETWORK_HAS_CURRENT_GET_GAMER_STATUS_STARTED_", LUA_NATIVE_NETWORK_NETWORK_HAS_CURRENT_GET_GAMER_STATUS_STARTED_);
		NETWORK.set_function("NETWORK_DID_GET_GAMER_STATUS_SUCCEED", LUA_NATIVE_NETWORK_NETWORK_DID_GET_GAMER_STATUS_SUCCEED);
		NETWORK.set_function("NETWORK_GET_GAMER_STATUS_", LUA_NATIVE_NETWORK_NETWORK_GET_GAMER_STATUS_);
		NETWORK.set_function("NETWORK_CLEAR_GET_GAMER_STATUS", LUA_NATIVE_NETWORK_NETWORK_CLEAR_GET_GAMER_STATUS);
		NETWORK.set_function("NETWORK_SET_SCRIPT_READY_FOR_EVENTS", LUA_NATIVE_NETWORK_NETWORK_SET_SCRIPT_READY_FOR_EVENTS);
		NETWORK.set_function("0x316FD416C432C761_", LUA_NATIVE_NETWORK_0x316FD416C432C761_);
		NETWORK.set_function("0x062842D61D0D53FD_", LUA_NATIVE_NETWORK_0x062842D61D0D53FD_);
		NETWORK.set_function("NETWORK_IS_GAME_IN_PROGRESS", LUA_NATIVE_NETWORK_NETWORK_IS_GAME_IN_PROGRESS);
		NETWORK.set_function("NETWORK_IS_SESSION_ACTIVE", LUA_NATIVE_NETWORK_NETWORK_IS_SESSION_ACTIVE);
		NETWORK.set_function("NETWORK_IS_IN_SESSION", LUA_NATIVE_NETWORK_NETWORK_IS_IN_SESSION);
		NETWORK.set_function("NETWORK_IS_IN_SESSION_LOBBY_", LUA_NATIVE_NETWORK_NETWORK_IS_IN_SESSION_LOBBY_);
		NETWORK.set_function("NETWORK_IS_SESSION_STARTED", LUA_NATIVE_NETWORK_NETWORK_IS_SESSION_STARTED);
		NETWORK.set_function("NETWORK_CAN_SESSION_END", LUA_NATIVE_NETWORK_NETWORK_CAN_SESSION_END);
		NETWORK.set_function("NETWORK_GET_GAME_MODE", LUA_NATIVE_NETWORK_NETWORK_GET_GAME_MODE);
		NETWORK.set_function("NETWORK_SESSION_ADD_SESSION_FLAGS_", LUA_NATIVE_NETWORK_NETWORK_SESSION_ADD_SESSION_FLAGS_);
		NETWORK.set_function("NETWORK_SESSION_REMOVE_SESSION_FLAGS", LUA_NATIVE_NETWORK_NETWORK_SESSION_REMOVE_SESSION_FLAGS);
		NETWORK.set_function("NETWORK_SESSION_GET_SESSION_FLAGS", LUA_NATIVE_NETWORK_NETWORK_SESSION_GET_SESSION_FLAGS);
		NETWORK.set_function("NETWORK_SESSION_SET_PLAYER_FLAGS_", LUA_NATIVE_NETWORK_NETWORK_SESSION_SET_PLAYER_FLAGS_);
		NETWORK.set_function("NETWORK_SESSION_REMOVE_PLAYER_FLAGS_", LUA_NATIVE_NETWORK_NETWORK_SESSION_REMOVE_PLAYER_FLAGS_);
		NETWORK.set_function("NETWORK_GET_SESSION_HOST_", LUA_NATIVE_NETWORK_NETWORK_GET_SESSION_HOST_);
		NETWORK.set_function("0xD3A3C8B9F3BDEF81_", LUA_NATIVE_NETWORK_0xD3A3C8B9F3BDEF81_);
		NETWORK.set_function("0x18B94666CF610AEB_", LUA_NATIVE_NETWORK_0x18B94666CF610AEB_);
		NETWORK.set_function("0x981146E5C9CE9250_", LUA_NATIVE_NETWORK_0x981146E5C9CE9250_);
		NETWORK.set_function("0xBF8276E51761F9DA_", LUA_NATIVE_NETWORK_0xBF8276E51761F9DA_);
		NETWORK.set_function("0xDCA4A74135E1DEA5_", LUA_NATIVE_NETWORK_0xDCA4A74135E1DEA5_);
		NETWORK.set_function("NETWORK_HAS_PENDING_INVITE_FAILURE", LUA_NATIVE_NETWORK_NETWORK_HAS_PENDING_INVITE_FAILURE);
		NETWORK.set_function("NETWORK_CAN_RECEIVE_INVITE_FROM_HANDLE_", LUA_NATIVE_NETWORK_NETWORK_CAN_RECEIVE_INVITE_FROM_HANDLE_);
		NETWORK.set_function("0x704F92B3AF20D857_", LUA_NATIVE_NETWORK_0x704F92B3AF20D857_);
		NETWORK.set_function("0xF342F6BD0A8287D5_", LUA_NATIVE_NETWORK_0xF342F6BD0A8287D5_);
		NETWORK.set_function("0xD39A72AE5EBD57E5_", LUA_NATIVE_NETWORK_0xD39A72AE5EBD57E5_);
		NETWORK.set_function("NETWORK_SEND_SESSION_INVITE_", LUA_NATIVE_NETWORK_NETWORK_SEND_SESSION_INVITE_);
		NETWORK.set_function("0xD1FFB246F4E088AC_", LUA_NATIVE_NETWORK_0xD1FFB246F4E088AC_);
		NETWORK.set_function("0x27B1AE4D8C652F08_", LUA_NATIVE_NETWORK_0x27B1AE4D8C652F08_);
		NETWORK.set_function("0x6C27442A225A241A_", LUA_NATIVE_NETWORK_0x6C27442A225A241A_);
		NETWORK.set_function("0xE59F4924BD3A718D_", LUA_NATIVE_NETWORK_0xE59F4924BD3A718D_);
		NETWORK.set_function("0x78271BC02AE9AF83_", LUA_NATIVE_NETWORK_0x78271BC02AE9AF83_);
		NETWORK.set_function("0x16EFB123C4451032_", LUA_NATIVE_NETWORK_0x16EFB123C4451032_);
		NETWORK.set_function("0xE79BA3BC265895DA_", LUA_NATIVE_NETWORK_0xE79BA3BC265895DA_);
		NETWORK.set_function("0xC0CFFDA87C2C163D_", LUA_NATIVE_NETWORK_0xC0CFFDA87C2C163D_);
		NETWORK.set_function("0x5ED39DA62BEB1330_", LUA_NATIVE_NETWORK_0x5ED39DA62BEB1330_);
		NETWORK.set_function("NETWORK_ACCEPT_RS_INVITE", LUA_NATIVE_NETWORK_NETWORK_ACCEPT_RS_INVITE);
		NETWORK.set_function("0x3AA0CDC63696166D_", LUA_NATIVE_NETWORK_0x3AA0CDC63696166D_);
		NETWORK.set_function("NETWORK_REQUEST_JOIN", LUA_NATIVE_NETWORK_NETWORK_REQUEST_JOIN);
		NETWORK.set_function("0xE8E633215471BB5D_", LUA_NATIVE_NETWORK_0xE8E633215471BB5D_);
		NETWORK.set_function("0xA2837A5E21FB5A58_", LUA_NATIVE_NETWORK_0xA2837A5E21FB5A58_);
		NETWORK.set_function("0xE39600E50D608693_", LUA_NATIVE_NETWORK_0xE39600E50D608693_);
		NETWORK.set_function("0xD7BAD4062074B9C1_", LUA_NATIVE_NETWORK_0xD7BAD4062074B9C1_);
		NETWORK.set_function("0xCA58D4FD20D70F24_", LUA_NATIVE_NETWORK_0xCA58D4FD20D70F24_);
		NETWORK.set_function("0xC028B3F52C707C49_", LUA_NATIVE_NETWORK_0xC028B3F52C707C49_);
		NETWORK.set_function("NETWORK_IS_PLATFORM_INVITE_PENDING", LUA_NATIVE_NETWORK_NETWORK_IS_PLATFORM_INVITE_PENDING);
		NETWORK.set_function("0x5B9C6AC118FD4774_", LUA_NATIVE_NETWORK_0x5B9C6AC118FD4774_);
		NETWORK.set_function("NETWORK_GET_PLATFORM_INVITE_ID_", LUA_NATIVE_NETWORK_NETWORK_GET_PLATFORM_INVITE_ID_);
		NETWORK.set_function("NETWORK_ACTION_PLATFORM_INVITE", LUA_NATIVE_NETWORK_NETWORK_ACTION_PLATFORM_INVITE);
		NETWORK.set_function("NETWORK_CLEAR_PLATFORM_INVITE", LUA_NATIVE_NETWORK_NETWORK_CLEAR_PLATFORM_INVITE);
		NETWORK.set_function("0x603469298A4308AF_", LUA_NATIVE_NETWORK_0x603469298A4308AF_);
		NETWORK.set_function("NETWORK_ARE_ONLINE_NOTIFICATIONS_SHOWN_IN_STORY_MODE_", LUA_NATIVE_NETWORK_NETWORK_ARE_ONLINE_NOTIFICATIONS_SHOWN_IN_STORY_MODE_);
		NETWORK.set_function("NETWORK_IS_IN_PLATFORM_PARTY", LUA_NATIVE_NETWORK_NETWORK_IS_IN_PLATFORM_PARTY);
		NETWORK.set_function("NETWORK_ARE_PLAYERS_IN_SAME_PLATFORM_PARTY_", LUA_NATIVE_NETWORK_NETWORK_ARE_PLAYERS_IN_SAME_PLATFORM_PARTY_);
		NETWORK.set_function("NETWORK_IS_IN_PLATFORM_PARTY_CHAT", LUA_NATIVE_NETWORK_NETWORK_IS_IN_PLATFORM_PARTY_CHAT);
		NETWORK.set_function("NETWORK_SEED_RANDOM_NUMBER_GENERATOR", LUA_NATIVE_NETWORK_NETWORK_SEED_RANDOM_NUMBER_GENERATOR);
		NETWORK.set_function("NETWORK_GET_RANDOM_INT_RANGED", LUA_NATIVE_NETWORK_NETWORK_GET_RANDOM_INT_RANGED);
		NETWORK.set_function("NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT", LUA_NATIVE_NETWORK_NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT);
		NETWORK.set_function("NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT", LUA_NATIVE_NETWORK_NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT);
		NETWORK.set_function("NETWORK_GET_MAX_NUM_PARTICIPANTS", LUA_NATIVE_NETWORK_NETWORK_GET_MAX_NUM_PARTICIPANTS);
		NETWORK.set_function("NETWORK_GET_NUM_PARTICIPANTS", LUA_NATIVE_NETWORK_NETWORK_GET_NUM_PARTICIPANTS);
		NETWORK.set_function("NETWORK_GET_SCRIPT_STATUS", LUA_NATIVE_NETWORK_NETWORK_GET_SCRIPT_STATUS);
		NETWORK.set_function("NETWORK_REGISTER_HOST_BROADCAST_VARIABLES", LUA_NATIVE_NETWORK_NETWORK_REGISTER_HOST_BROADCAST_VARIABLES);
		NETWORK.set_function("NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE_", LUA_NATIVE_NETWORK_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE_);
		NETWORK.set_function("NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES", LUA_NATIVE_NETWORK_NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES);
		NETWORK.set_function("NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE_", LUA_NATIVE_NETWORK_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE_);
		NETWORK.set_function("NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA", LUA_NATIVE_NETWORK_NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA);
		NETWORK.set_function("NETWORK_GET_PLAYER_INDEX", LUA_NATIVE_NETWORK_NETWORK_GET_PLAYER_INDEX);
		NETWORK.set_function("NETWORK_GET_PARTICIPANT_INDEX", LUA_NATIVE_NETWORK_NETWORK_GET_PARTICIPANT_INDEX);
		NETWORK.set_function("NETWORK_GET_PLAYER_INDEX_FROM_PED", LUA_NATIVE_NETWORK_NETWORK_GET_PLAYER_INDEX_FROM_PED);
		NETWORK.set_function("NETWORK_GET_NUM_CONNECTED_PLAYERS", LUA_NATIVE_NETWORK_NETWORK_GET_NUM_CONNECTED_PLAYERS);
		NETWORK.set_function("NETWORK_IS_PLAYER_CONNECTED", LUA_NATIVE_NETWORK_NETWORK_IS_PLAYER_CONNECTED);
		NETWORK.set_function("NETWORK_GET_TOTAL_NUM_PLAYERS", LUA_NATIVE_NETWORK_NETWORK_GET_TOTAL_NUM_PLAYERS);
		NETWORK.set_function("NETWORK_IS_PARTICIPANT_ACTIVE", LUA_NATIVE_NETWORK_NETWORK_IS_PARTICIPANT_ACTIVE);
		NETWORK.set_function("NETWORK_IS_PLAYER_ACTIVE", LUA_NATIVE_NETWORK_NETWORK_IS_PLAYER_ACTIVE);
		NETWORK.set_function("NETWORK_IS_PLAYER_A_PARTICIPANT", LUA_NATIVE_NETWORK_NETWORK_IS_PLAYER_A_PARTICIPANT);
		NETWORK.set_function("NETWORK_IS_HOST_OF_THIS_SCRIPT", LUA_NATIVE_NETWORK_NETWORK_IS_HOST_OF_THIS_SCRIPT);
		NETWORK.set_function("NETWORK_GET_HOST_OF_THIS_SCRIPT", LUA_NATIVE_NETWORK_NETWORK_GET_HOST_OF_THIS_SCRIPT);
		NETWORK.set_function("NETWORK_GET_HOST_OF_SCRIPT", LUA_NATIVE_NETWORK_NETWORK_GET_HOST_OF_SCRIPT);
		NETWORK.set_function("NETWORK_GET_HOST_OF_THREAD", LUA_NATIVE_NETWORK_NETWORK_GET_HOST_OF_THREAD);
		NETWORK.set_function("NETWORK_SET_MISSION_FINISHED", LUA_NATIVE_NETWORK_NETWORK_SET_MISSION_FINISHED);
		NETWORK.set_function("NETWORK_IS_SCRIPT_ACTIVE", LUA_NATIVE_NETWORK_NETWORK_IS_SCRIPT_ACTIVE);
		NETWORK.set_function("NETWORK_IS_SCRIPT_ACTIVE_BY_HASH", LUA_NATIVE_NETWORK_NETWORK_IS_SCRIPT_ACTIVE_BY_HASH);
		NETWORK.set_function("NETWORK_IS_THREAD_ACTIVE_", LUA_NATIVE_NETWORK_NETWORK_IS_THREAD_ACTIVE_);
		NETWORK.set_function("NETWORK_GET_INSTANCE_ID_OF_THREAD_", LUA_NATIVE_NETWORK_NETWORK_GET_INSTANCE_ID_OF_THREAD_);
		NETWORK.set_function("NETWORK_GET_NUM_SCRIPT_PARTICIPANTS", LUA_NATIVE_NETWORK_NETWORK_GET_NUM_SCRIPT_PARTICIPANTS);
		NETWORK.set_function("NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT", LUA_NATIVE_NETWORK_NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT);
		NETWORK.set_function("NETWORK_IS_PLAYER_A_PARTICIPANT_ON_SCRIPT", LUA_NATIVE_NETWORK_NETWORK_IS_PLAYER_A_PARTICIPANT_ON_SCRIPT);
		NETWORK.set_function("NETWORK_PREVENT_SCRIPT_HOST_MIGRATION", LUA_NATIVE_NETWORK_NETWORK_PREVENT_SCRIPT_HOST_MIGRATION);
		NETWORK.set_function("NETWORK_IS_FEATURE_SUPPORTED", LUA_NATIVE_NETWORK_NETWORK_IS_FEATURE_SUPPORTED);
		NETWORK.set_function("PARTICIPANT_ID", LUA_NATIVE_NETWORK_PARTICIPANT_ID);
		NETWORK.set_function("PARTICIPANT_ID_TO_INT", LUA_NATIVE_NETWORK_PARTICIPANT_ID_TO_INT);
		NETWORK.set_function("NETWORK_GET_DESTROYER_OF_NETWORK_ID", LUA_NATIVE_NETWORK_NETWORK_GET_DESTROYER_OF_NETWORK_ID);
		NETWORK.set_function("0x6CF82A7F65A5AD5F_", LUA_NATIVE_NETWORK_0x6CF82A7F65A5AD5F_);
		NETWORK.set_function("0x236321F1178A5446_", LUA_NATIVE_NETWORK_0x236321F1178A5446_);
		NETWORK.set_function("NETWORK_GET_ASSISTED_DAMAGE_OF_ENTITY", LUA_NATIVE_NETWORK_NETWORK_GET_ASSISTED_DAMAGE_OF_ENTITY);
		NETWORK.set_function("NETWORK_GET_ENTITY_KILLER_OF_PLAYER", LUA_NATIVE_NETWORK_NETWORK_GET_ENTITY_KILLER_OF_PLAYER);
		NETWORK.set_function("NETWORK_RESURRECT_LOCAL_PLAYER", LUA_NATIVE_NETWORK_NETWORK_RESURRECT_LOCAL_PLAYER);
		NETWORK.set_function("NETWORK_RESURRECT_LOCAL_PLAYER_2_", LUA_NATIVE_NETWORK_NETWORK_RESURRECT_LOCAL_PLAYER_2_);
		NETWORK.set_function("NETWORK_SET_LOCAL_PLAYER_INVINCIBLE_TIME", LUA_NATIVE_NETWORK_NETWORK_SET_LOCAL_PLAYER_INVINCIBLE_TIME);
		NETWORK.set_function("NETWORK_SET_LOCAL_PLAYER_SYNC_LOOK_AT", LUA_NATIVE_NETWORK_NETWORK_SET_LOCAL_PLAYER_SYNC_LOOK_AT);
		NETWORK.set_function("NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD", LUA_NATIVE_NETWORK_NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD);
		NETWORK.set_function("NETWORK_GET_NETWORK_ID_FROM_ENTITY", LUA_NATIVE_NETWORK_NETWORK_GET_NETWORK_ID_FROM_ENTITY);
		NETWORK.set_function("NETWORK_GET_ENTITY_FROM_NETWORK_ID", LUA_NATIVE_NETWORK_NETWORK_GET_ENTITY_FROM_NETWORK_ID);
		NETWORK.set_function("NETWORK_GET_ENTITY_IS_NETWORKED", LUA_NATIVE_NETWORK_NETWORK_GET_ENTITY_IS_NETWORKED);
		NETWORK.set_function("NETWORK_REGISTER_ENTITY_AS_NETWORKED", LUA_NATIVE_NETWORK_NETWORK_REGISTER_ENTITY_AS_NETWORKED);
		NETWORK.set_function("NETWORK_DOES_NETWORK_ID_EXIST", LUA_NATIVE_NETWORK_NETWORK_DOES_NETWORK_ID_EXIST);
		NETWORK.set_function("0x950ACD8F05B7B9DF_", LUA_NATIVE_NETWORK_0x950ACD8F05B7B9DF_);
		NETWORK.set_function("NETWORK_REQUEST_CONTROL_OF_NETWORK_ID", LUA_NATIVE_NETWORK_NETWORK_REQUEST_CONTROL_OF_NETWORK_ID);
		NETWORK.set_function("NETWORK_HAS_CONTROL_OF_NETWORK_ID", LUA_NATIVE_NETWORK_NETWORK_HAS_CONTROL_OF_NETWORK_ID);
		NETWORK.set_function("NETWORK_REQUEST_CONTROL_OF_ENTITY", LUA_NATIVE_NETWORK_NETWORK_REQUEST_CONTROL_OF_ENTITY);
		NETWORK.set_function("NETWORK_REQUEST_CONTROL_OF_ANIM_SCENE_", LUA_NATIVE_NETWORK_NETWORK_REQUEST_CONTROL_OF_ANIM_SCENE_);
		NETWORK.set_function("NETWORK_REQUEST_CONTROL_OF_PICKUP_PLACEMENT", LUA_NATIVE_NETWORK_NETWORK_REQUEST_CONTROL_OF_PICKUP_PLACEMENT);
		NETWORK.set_function("NETWORK_HAS_CONTROL_OF_ENTITY", LUA_NATIVE_NETWORK_NETWORK_HAS_CONTROL_OF_ENTITY);
		NETWORK.set_function("NETWORK_HAS_CONTROL_OF_PICKUP", LUA_NATIVE_NETWORK_NETWORK_HAS_CONTROL_OF_PICKUP);
		NETWORK.set_function("NETWORK_HAS_CONTROL_OF_ANIM_SCENE_", LUA_NATIVE_NETWORK_NETWORK_HAS_CONTROL_OF_ANIM_SCENE_);
		NETWORK.set_function("NETWORK_HAS_CONTROL_OF_PICKUP_PLACEMENT", LUA_NATIVE_NETWORK_NETWORK_HAS_CONTROL_OF_PICKUP_PLACEMENT);
		NETWORK.set_function("0xF260AF6F43953316_", LUA_NATIVE_NETWORK_0xF260AF6F43953316_);
		NETWORK.set_function("VEH_TO_NET", LUA_NATIVE_NETWORK_VEH_TO_NET);
		NETWORK.set_function("PED_TO_NET", LUA_NATIVE_NETWORK_PED_TO_NET);
		NETWORK.set_function("OBJ_TO_NET", LUA_NATIVE_NETWORK_OBJ_TO_NET);
		NETWORK.set_function("ANIM_SCENE_TO_NET_", LUA_NATIVE_NETWORK_ANIM_SCENE_TO_NET_);
		NETWORK.set_function("NET_TO_VEH", LUA_NATIVE_NETWORK_NET_TO_VEH);
		NETWORK.set_function("NET_TO_PED", LUA_NATIVE_NETWORK_NET_TO_PED);
		NETWORK.set_function("NET_TO_OBJ", LUA_NATIVE_NETWORK_NET_TO_OBJ);
		NETWORK.set_function("NET_TO_ENT", LUA_NATIVE_NETWORK_NET_TO_ENT);
		NETWORK.set_function("NET_TO_ANIM_SCENE_", LUA_NATIVE_NETWORK_NET_TO_ANIM_SCENE_);
		NETWORK.set_function("PROPSET_TO_NET_", LUA_NATIVE_NETWORK_PROPSET_TO_NET_);
		NETWORK.set_function("NET_TO_PROPSET_", LUA_NATIVE_NETWORK_NET_TO_PROPSET_);
		NETWORK.set_function("0x0CC28C08613BA9E5_", LUA_NATIVE_NETWORK_0x0CC28C08613BA9E5_);
		NETWORK.set_function("NETWORK_GET_LOCAL_HANDLE", LUA_NATIVE_NETWORK_NETWORK_GET_LOCAL_HANDLE);
		NETWORK.set_function("NETWORK_HANDLE_FROM_PLAYER", LUA_NATIVE_NETWORK_NETWORK_HANDLE_FROM_PLAYER);
		NETWORK.set_function("NETWORK_HASH_FROM_PLAYER_HANDLE", LUA_NATIVE_NETWORK_NETWORK_HASH_FROM_PLAYER_HANDLE);
		NETWORK.set_function("NETWORK_HANDLE_FROM_FRIEND", LUA_NATIVE_NETWORK_NETWORK_HANDLE_FROM_FRIEND);
		NETWORK.set_function("NETWORK_GET_GAMERTAG_FROM_HANDLE", LUA_NATIVE_NETWORK_NETWORK_GET_GAMERTAG_FROM_HANDLE);
		NETWORK.set_function("NETWORK_DISPLAYNAMES_FROM_HANDLES_START", LUA_NATIVE_NETWORK_NETWORK_DISPLAYNAMES_FROM_HANDLES_START);
		NETWORK.set_function("NETWORK_GET_DISPLAYNAMES_FROM_HANDLES", LUA_NATIVE_NETWORK_NETWORK_GET_DISPLAYNAMES_FROM_HANDLES);
		NETWORK.set_function("NETWORK_GET_DISPLAY_NAME_FROM_HANDLE_", LUA_NATIVE_NETWORK_NETWORK_GET_DISPLAY_NAME_FROM_HANDLE_);
		NETWORK.set_function("NETWORK_ARE_HANDLES_THE_SAME", LUA_NATIVE_NETWORK_NETWORK_ARE_HANDLES_THE_SAME);
		NETWORK.set_function("NETWORK_IS_HANDLE_VALID", LUA_NATIVE_NETWORK_NETWORK_IS_HANDLE_VALID);
		NETWORK.set_function("NETWORK_GET_PLAYER_FROM_GAMER_HANDLE", LUA_NATIVE_NETWORK_NETWORK_GET_PLAYER_FROM_GAMER_HANDLE);
		NETWORK.set_function("NETWORK_IS_GAMER_IN_MY_SESSION", LUA_NATIVE_NETWORK_NETWORK_IS_GAMER_IN_MY_SESSION);
		NETWORK.set_function("NETWORK_SHOW_PROFILE_UI", LUA_NATIVE_NETWORK_NETWORK_SHOW_PROFILE_UI);
		NETWORK.set_function("0x5759160AC17C13CE_", LUA_NATIVE_NETWORK_0x5759160AC17C13CE_);
		NETWORK.set_function("0xF302AB9D978352EE_", LUA_NATIVE_NETWORK_0xF302AB9D978352EE_);
		NETWORK.set_function("0x4538EE7C321590BC_", LUA_NATIVE_NETWORK_0x4538EE7C321590BC_);
		NETWORK.set_function("0xA47D48D06AA5A188_", LUA_NATIVE_NETWORK_0xA47D48D06AA5A188_);
		NETWORK.set_function("NETWORK_GET_TOTAL_NUM_FRIENDS", LUA_NATIVE_NETWORK_NETWORK_GET_TOTAL_NUM_FRIENDS);
		NETWORK.set_function("0xA94ECE191D90637A_", LUA_NATIVE_NETWORK_0xA94ECE191D90637A_);
		NETWORK.set_function("0x5CB8B0C846D0F30B_", LUA_NATIVE_NETWORK_0x5CB8B0C846D0F30B_);
		NETWORK.set_function("0xFF36F36B07E69059_", LUA_NATIVE_NETWORK_0xFF36F36B07E69059_);
		NETWORK.set_function("NETWORK_GET_CURRENT_FRIEND_PAGE_DATA_", LUA_NATIVE_NETWORK_NETWORK_GET_CURRENT_FRIEND_PAGE_DATA_);
		NETWORK.set_function("0xB389289F031F059A_", LUA_NATIVE_NETWORK_0xB389289F031F059A_);
		NETWORK.set_function("NETWORK_CAN_REFRESH_FRIEND_PAGE", LUA_NATIVE_NETWORK_NETWORK_CAN_REFRESH_FRIEND_PAGE);
		NETWORK.set_function("NETWORK_REFRESH_CURRENT_FRIEND_PAGE", LUA_NATIVE_NETWORK_NETWORK_REFRESH_CURRENT_FRIEND_PAGE);
		NETWORK.set_function("0xDA1BFED8582F61F0_", LUA_NATIVE_NETWORK_0xDA1BFED8582F61F0_);
		NETWORK.set_function("0x232E1EB23CDB313C_", LUA_NATIVE_NETWORK_0x232E1EB23CDB313C_);
		NETWORK.set_function("0x3E4A16BC669E71B3_", LUA_NATIVE_NETWORK_0x3E4A16BC669E71B3_);
		NETWORK.set_function("NETWORK_IS_FRIEND_HANDLE_ONLINE_", LUA_NATIVE_NETWORK_NETWORK_IS_FRIEND_HANDLE_ONLINE_);
		NETWORK.set_function("NETWORK_IS_FRIEND_HANDLE_IN_SAME_TITLE_", LUA_NATIVE_NETWORK_NETWORK_IS_FRIEND_HANDLE_IN_SAME_TITLE_);
		NETWORK.set_function("NETWORK_GET_GAMERTAG_FROM_FRIEND_", LUA_NATIVE_NETWORK_NETWORK_GET_GAMERTAG_FROM_FRIEND_);
		NETWORK.set_function("NETWORK_IS_FRIEND", LUA_NATIVE_NETWORK_NETWORK_IS_FRIEND);
		NETWORK.set_function("NETWORK_IS_PENDING_FRIEND", LUA_NATIVE_NETWORK_NETWORK_IS_PENDING_FRIEND);
		NETWORK.set_function("NETWORK_ADD_FRIEND", LUA_NATIVE_NETWORK_NETWORK_ADD_FRIEND);
		NETWORK.set_function("NETWORK_REMOVE_FRIEND_", LUA_NATIVE_NETWORK_NETWORK_REMOVE_FRIEND_);
		NETWORK.set_function("NETWORK_CAN_ADD_FRIEND_", LUA_NATIVE_NETWORK_NETWORK_CAN_ADD_FRIEND_);
		NETWORK.set_function("NETWORK_SET_PLAYER_IS_PASSIVE", LUA_NATIVE_NETWORK_NETWORK_SET_PLAYER_IS_PASSIVE);
		NETWORK.set_function("NETWORK_SET_FRIENDLY_FIRE_OPTION", LUA_NATIVE_NETWORK_NETWORK_SET_FRIENDLY_FIRE_OPTION);
		NETWORK.set_function("NETWORK_SET_RICH_PRESENCE", LUA_NATIVE_NETWORK_NETWORK_SET_RICH_PRESENCE);
		NETWORK.set_function("NETWORK_GET_TIMEOUT_TIME", LUA_NATIVE_NETWORK_NETWORK_GET_TIMEOUT_TIME);
		NETWORK.set_function("0xBC7D36946D19E60E_", LUA_NATIVE_NETWORK_0xBC7D36946D19E60E_);
		NETWORK.set_function("0x880A7202301E282B_", LUA_NATIVE_NETWORK_0x880A7202301E282B_);
		NETWORK.set_function("0xC964FCD3D1720697_", LUA_NATIVE_NETWORK_0xC964FCD3D1720697_);
		NETWORK.set_function("0xEC089F84A9C16C62_", LUA_NATIVE_NETWORK_0xEC089F84A9C16C62_);
		NETWORK.set_function("PREVENT_NETWORK_ID_MIGRATION", LUA_NATIVE_NETWORK_PREVENT_NETWORK_ID_MIGRATION);
		NETWORK.set_function("KEEP_NETWORK_ID_IN_FAST_INSTANCE", LUA_NATIVE_NETWORK_KEEP_NETWORK_ID_IN_FAST_INSTANCE);
		NETWORK.set_function("0x02C4C6C2900D84DF_", LUA_NATIVE_NETWORK_0x02C4C6C2900D84DF_);
		NETWORK.set_function("0xD78A26024BB13E08_", LUA_NATIVE_NETWORK_0xD78A26024BB13E08_);
		NETWORK.set_function("SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES", LUA_NATIVE_NETWORK_SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES);
		NETWORK.set_function("SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER", LUA_NATIVE_NETWORK_SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER);
		NETWORK.set_function("SET_NETWORK_ID_STOP_CLONING", LUA_NATIVE_NETWORK_SET_NETWORK_ID_STOP_CLONING);
		NETWORK.set_function("NETWORK_SET_ENTITY_REMAINS_WHEN_UNNETWORKED", LUA_NATIVE_NETWORK_NETWORK_SET_ENTITY_REMAINS_WHEN_UNNETWORKED);
		NETWORK.set_function("NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS", LUA_NATIVE_NETWORK_NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS);
		NETWORK.set_function("0xE31A04513237DC89_", LUA_NATIVE_NETWORK_0xE31A04513237DC89_);
		NETWORK.set_function("SET_NETWORK_ID_VISIBLE_IN_CUTSCENE", LUA_NATIVE_NETWORK_SET_NETWORK_ID_VISIBLE_IN_CUTSCENE);
		NETWORK.set_function("IS_NETWORK_ID_OWNED_BY_PARTICIPANT", LUA_NATIVE_NETWORK_IS_NETWORK_ID_OWNED_BY_PARTICIPANT);
		NETWORK.set_function("NETWORK_GET_PLAYER_OWNER_OF_NETWORK_ID_", LUA_NATIVE_NETWORK_NETWORK_GET_PLAYER_OWNER_OF_NETWORK_ID_);
		NETWORK.set_function("SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE", LUA_NATIVE_NETWORK_SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE);
		NETWORK.set_function("PREVENT_MIGRATION_OF_ENTITIES_IN_FAST_INSTANCE_FOR_LOCAL_PLAYER", LUA_NATIVE_NETWORK_PREVENT_MIGRATION_OF_ENTITIES_IN_FAST_INSTANCE_FOR_LOCAL_PLAYER);
		NETWORK.set_function("SET_LOCAL_PLAYER_INVISIBLE_LOCALLY", LUA_NATIVE_NETWORK_SET_LOCAL_PLAYER_INVISIBLE_LOCALLY);
		NETWORK.set_function("SET_PLAYER_INVISIBLE_LOCALLY", LUA_NATIVE_NETWORK_SET_PLAYER_INVISIBLE_LOCALLY);
		NETWORK.set_function("SET_PLAYER_VISIBLE_LOCALLY", LUA_NATIVE_NETWORK_SET_PLAYER_VISIBLE_LOCALLY);
		NETWORK.set_function("SET_ENTITY_VISIBLE_IN_CUTSCENE", LUA_NATIVE_NETWORK_SET_ENTITY_VISIBLE_IN_CUTSCENE);
		NETWORK.set_function("SET_DOOR_NETWORKED_", LUA_NATIVE_NETWORK_SET_DOOR_NETWORKED_);
		NETWORK.set_function("SET_DOOR_UNNETWORKED_", LUA_NATIVE_NETWORK_SET_DOOR_UNNETWORKED_);
		NETWORK.set_function("IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID", LUA_NATIVE_NETWORK_IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID);
		NETWORK.set_function("ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID", LUA_NATIVE_NETWORK_ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID);
		NETWORK.set_function("IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE", LUA_NATIVE_NETWORK_IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE);
		NETWORK.set_function("IS_SPHERE_VISIBLE_TO_PLAYER", LUA_NATIVE_NETWORK_IS_SPHERE_VISIBLE_TO_PLAYER);
		NETWORK.set_function("0xD42C543F73233041_", LUA_NATIVE_NETWORK_0xD42C543F73233041_);
		NETWORK.set_function("RESERVE_NETWORK_MISSION_OBJECTS", LUA_NATIVE_NETWORK_RESERVE_NETWORK_MISSION_OBJECTS);
		NETWORK.set_function("RESERVE_NETWORK_CLIENT_MISSION_OBJECTS", LUA_NATIVE_NETWORK_RESERVE_NETWORK_CLIENT_MISSION_OBJECTS);
		NETWORK.set_function("RESERVE_NETWORK_MISSION_PEDS", LUA_NATIVE_NETWORK_RESERVE_NETWORK_MISSION_PEDS);
		NETWORK.set_function("RESERVE_NETWORK_CLIENT_MISSION_PEDS", LUA_NATIVE_NETWORK_RESERVE_NETWORK_CLIENT_MISSION_PEDS);
		NETWORK.set_function("RESERVE_NETWORK_MISSION_VEHICLES", LUA_NATIVE_NETWORK_RESERVE_NETWORK_MISSION_VEHICLES);
		NETWORK.set_function("RESERVE_NETWORK_MISSION_PICKUPS", LUA_NATIVE_NETWORK_RESERVE_NETWORK_MISSION_PICKUPS);
		NETWORK.set_function("CAN_REGISTER_MISSION_OBJECTS", LUA_NATIVE_NETWORK_CAN_REGISTER_MISSION_OBJECTS);
		NETWORK.set_function("CAN_REGISTER_MISSION_PEDS", LUA_NATIVE_NETWORK_CAN_REGISTER_MISSION_PEDS);
		NETWORK.set_function("CAN_REGISTER_MISSION_VEHICLES", LUA_NATIVE_NETWORK_CAN_REGISTER_MISSION_VEHICLES);
		NETWORK.set_function("CAN_REGISTER_MISSION_PICKUPS", LUA_NATIVE_NETWORK_CAN_REGISTER_MISSION_PICKUPS);
		NETWORK.set_function("CAN_REGISTER_MISSION_ENTITIES", LUA_NATIVE_NETWORK_CAN_REGISTER_MISSION_ENTITIES);
		NETWORK.set_function("GET_NUM_RESERVED_MISSION_OBJECTS", LUA_NATIVE_NETWORK_GET_NUM_RESERVED_MISSION_OBJECTS);
		NETWORK.set_function("GET_NUM_RESERVED_MISSION_PEDS", LUA_NATIVE_NETWORK_GET_NUM_RESERVED_MISSION_PEDS);
		NETWORK.set_function("GET_NUM_RESERVED_MISSION_VEHICLES", LUA_NATIVE_NETWORK_GET_NUM_RESERVED_MISSION_VEHICLES);
		NETWORK.set_function("GET_NUM_RESERVED_MISSION_PICKUPS_", LUA_NATIVE_NETWORK_GET_NUM_RESERVED_MISSION_PICKUPS_);
		NETWORK.set_function("GET_NUM_CREATED_MISSION_OBJECTS", LUA_NATIVE_NETWORK_GET_NUM_CREATED_MISSION_OBJECTS);
		NETWORK.set_function("GET_NUM_CREATED_MISSION_PEDS", LUA_NATIVE_NETWORK_GET_NUM_CREATED_MISSION_PEDS);
		NETWORK.set_function("GET_NUM_CREATED_MISSION_VEHICLES", LUA_NATIVE_NETWORK_GET_NUM_CREATED_MISSION_VEHICLES);
		NETWORK.set_function("GET_NUM_CREATED_MISSION_PICKUPS_", LUA_NATIVE_NETWORK_GET_NUM_CREATED_MISSION_PICKUPS_);
		NETWORK.set_function("GET_RESERVED_MISSION_ENTITIES_FOR_THREAD_", LUA_NATIVE_NETWORK_GET_RESERVED_MISSION_ENTITIES_FOR_THREAD_);
		NETWORK.set_function("GET_RESERVED_MISSION_ENTITIES_IN_AREA", LUA_NATIVE_NETWORK_GET_RESERVED_MISSION_ENTITIES_IN_AREA);
		NETWORK.set_function("0x5F328FC909F0E0FF_", LUA_NATIVE_NETWORK_0x5F328FC909F0E0FF_);
		NETWORK.set_function("GET_MAX_NUM_NETWORK_OBJECTS", LUA_NATIVE_NETWORK_GET_MAX_NUM_NETWORK_OBJECTS);
		NETWORK.set_function("GET_MAX_NUM_NETWORK_PEDS", LUA_NATIVE_NETWORK_GET_MAX_NUM_NETWORK_PEDS);
		NETWORK.set_function("GET_MAX_NUM_NETWORK_VEHICLES", LUA_NATIVE_NETWORK_GET_MAX_NUM_NETWORK_VEHICLES);
		NETWORK.set_function("GET_MAX_NUM_NETWORK_PICKUPS", LUA_NATIVE_NETWORK_GET_MAX_NUM_NETWORK_PICKUPS);
		NETWORK.set_function("0x75FC34A2BA345BD1_", LUA_NATIVE_NETWORK_0x75FC34A2BA345BD1_);
		NETWORK.set_function("0x979765465A6F25FC_", LUA_NATIVE_NETWORK_0x979765465A6F25FC_);
		NETWORK.set_function("0x5133CF81924F1129_", LUA_NATIVE_NETWORK_0x5133CF81924F1129_);
		NETWORK.set_function("0x1E4E097D71D449FB_", LUA_NATIVE_NETWORK_0x1E4E097D71D449FB_);
		NETWORK.set_function("0x982D7AD755B8F62C_", LUA_NATIVE_NETWORK_0x982D7AD755B8F62C_);
		NETWORK.set_function("0x917AD74BDCF8B6E9_", LUA_NATIVE_NETWORK_0x917AD74BDCF8B6E9_);
		NETWORK.set_function("0xF8DC69DC1AD19072_", LUA_NATIVE_NETWORK_0xF8DC69DC1AD19072_);
		NETWORK.set_function("0x744BFBB0CA908161_", LUA_NATIVE_NETWORK_0x744BFBB0CA908161_);
		NETWORK.set_function("0x106CBDD5077DEDE1_", LUA_NATIVE_NETWORK_0x106CBDD5077DEDE1_);
		NETWORK.set_function("0xBAF7E2979442B29F_", LUA_NATIVE_NETWORK_0xBAF7E2979442B29F_);
		NETWORK.set_function("0x039B692B3318FAB6_", LUA_NATIVE_NETWORK_0x039B692B3318FAB6_);
		NETWORK.set_function("0x4835413EA6F9C9CD_", LUA_NATIVE_NETWORK_0x4835413EA6F9C9CD_);
		NETWORK.set_function("GET_NETWORK_TIME", LUA_NATIVE_NETWORK_GET_NETWORK_TIME);
		NETWORK.set_function("GET_NETWORK_TIME_ACCURATE", LUA_NATIVE_NETWORK_GET_NETWORK_TIME_ACCURATE);
		NETWORK.set_function("HAS_NETWORK_TIME_STARTED", LUA_NATIVE_NETWORK_HAS_NETWORK_TIME_STARTED);
		NETWORK.set_function("GET_TIME_OFFSET", LUA_NATIVE_NETWORK_GET_TIME_OFFSET);
		NETWORK.set_function("IS_TIME_LESS_THAN", LUA_NATIVE_NETWORK_IS_TIME_LESS_THAN);
		NETWORK.set_function("IS_TIME_MORE_THAN", LUA_NATIVE_NETWORK_IS_TIME_MORE_THAN);
		NETWORK.set_function("GET_TIME_DIFFERENCE", LUA_NATIVE_NETWORK_GET_TIME_DIFFERENCE);
		NETWORK.set_function("GET_CLOUD_TIME_AS_INT", LUA_NATIVE_NETWORK_GET_CLOUD_TIME_AS_INT);
		NETWORK.set_function("CONVERT_POSIX_TIME", LUA_NATIVE_NETWORK_CONVERT_POSIX_TIME);
		NETWORK.set_function("NETWORK_SET_IN_SPECTATOR_MODE", LUA_NATIVE_NETWORK_NETWORK_SET_IN_SPECTATOR_MODE);
		NETWORK.set_function("NETWORK_SET_IN_STATIC_SPECTATOR_MODE_", LUA_NATIVE_NETWORK_NETWORK_SET_IN_STATIC_SPECTATOR_MODE_);
		NETWORK.set_function("NETWORK_IS_IN_SPECTATOR_MODE", LUA_NATIVE_NETWORK_NETWORK_IS_IN_SPECTATOR_MODE);
		NETWORK.set_function("NETWORK_IS_PLAYER_IN_SPECTATOR_MODE_", LUA_NATIVE_NETWORK_NETWORK_IS_PLAYER_IN_SPECTATOR_MODE_);
		NETWORK.set_function("NETWORK_SET_IN_MP_CUTSCENE", LUA_NATIVE_NETWORK_NETWORK_SET_IN_MP_CUTSCENE);
		NETWORK.set_function("NETWORK_IS_IN_MP_CUTSCENE", LUA_NATIVE_NETWORK_NETWORK_IS_IN_MP_CUTSCENE);
		NETWORK.set_function("NETWORK_IS_PLAYER_IN_MP_CUTSCENE", LUA_NATIVE_NETWORK_NETWORK_IS_PLAYER_IN_MP_CUTSCENE);
		NETWORK.set_function("0x34BC1E79546BA543_", LUA_NATIVE_NETWORK_0x34BC1E79546BA543_);
		NETWORK.set_function("SET_NETWORK_RESPOT_TIMER_", LUA_NATIVE_NETWORK_SET_NETWORK_RESPOT_TIMER_);
		NETWORK.set_function("0x26A867C0B7A456D1_", LUA_NATIVE_NETWORK_0x26A867C0B7A456D1_);
		NETWORK.set_function("SET_LOCAL_PLAYER_AS_GHOST", LUA_NATIVE_NETWORK_SET_LOCAL_PLAYER_AS_GHOST);
		NETWORK.set_function("IS_ENTITY_A_GHOST", LUA_NATIVE_NETWORK_IS_ENTITY_A_GHOST);
		NETWORK.set_function("SET_PLAYER_VISIBILITY_TO_LOCAL_PLAYER_DISABLED_", LUA_NATIVE_NETWORK_SET_PLAYER_VISIBILITY_TO_LOCAL_PLAYER_DISABLED_);
		NETWORK.set_function("SET_ENTITY_GHOSTED_TO_LOCAL_PLAYER_", LUA_NATIVE_NETWORK_SET_ENTITY_GHOSTED_TO_LOCAL_PLAYER_);
		NETWORK.set_function("IS_OBJECT_REASSIGNMENT_IN_PROGRESS", LUA_NATIVE_NETWORK_IS_OBJECT_REASSIGNMENT_IN_PROGRESS);
		NETWORK.set_function("0x039AD6B57D5179FF_", LUA_NATIVE_NETWORK_0x039AD6B57D5179FF_);
		NETWORK.set_function("0x02B3CDD652B3CDD6_", LUA_NATIVE_NETWORK_0x02B3CDD652B3CDD6_);
		NETWORK.set_function("GET_NUM_PEER_NEGOTIATION_RESPONSES_", LUA_NATIVE_NETWORK_GET_NUM_PEER_NEGOTIATION_RESPONSES_);
		NETWORK.set_function("NETWORK_DEBUG_REQUEST_ENTITY_POSITION_", LUA_NATIVE_NETWORK_NETWORK_DEBUG_REQUEST_ENTITY_POSITION_);
		NETWORK.set_function("NETWORK_GET_NETWORK_ID_FROM_ROPE_ID", LUA_NATIVE_NETWORK_NETWORK_GET_NETWORK_ID_FROM_ROPE_ID);
		NETWORK.set_function("NETWORK_GET_ROPE_ID_FROM_NETWORK_ID", LUA_NATIVE_NETWORK_NETWORK_GET_ROPE_ID_FROM_NETWORK_ID);
		NETWORK.set_function("NETWORK_SPAWN_CONFIG_ADD_SPAWN_POINT_", LUA_NATIVE_NETWORK_NETWORK_SPAWN_CONFIG_ADD_SPAWN_POINT_);
		NETWORK.set_function("0xA63E4F050F20021F_", LUA_NATIVE_NETWORK_0xA63E4F050F20021F_);
		NETWORK.set_function("NETWORK_SPAWN_CONFIG_ADD_EXCLUSION_VOLUME_", LUA_NATIVE_NETWORK_NETWORK_SPAWN_CONFIG_ADD_EXCLUSION_VOLUME_);
		NETWORK.set_function("NETWORK_SPAWN_CONFIG_REMOVE_EXCLUSION_VOLUME_", LUA_NATIVE_NETWORK_NETWORK_SPAWN_CONFIG_REMOVE_EXCLUSION_VOLUME_);
		NETWORK.set_function("0x0BF90CBB6B72977B_", LUA_NATIVE_NETWORK_0x0BF90CBB6B72977B_);
		NETWORK.set_function("0x7B3FF2D193628126_", LUA_NATIVE_NETWORK_0x7B3FF2D193628126_);
		NETWORK.set_function("0x19B52C20B5C4757C_", LUA_NATIVE_NETWORK_0x19B52C20B5C4757C_);
		NETWORK.set_function("NETWORK_SPAWN_CONFIG_SET_FLAGS", LUA_NATIVE_NETWORK_NETWORK_SPAWN_CONFIG_SET_FLAGS);
		NETWORK.set_function("0x6CEE2E30021DAEC6_", LUA_NATIVE_NETWORK_0x6CEE2E30021DAEC6_);
		NETWORK.set_function("NETWORK_SPAWN_CONFIG_ADD_PROPERTY_SCRIPTED_", LUA_NATIVE_NETWORK_NETWORK_SPAWN_CONFIG_ADD_PROPERTY_SCRIPTED_);
		NETWORK.set_function("0xB131E686BD97B3F8_", LUA_NATIVE_NETWORK_0xB131E686BD97B3F8_);
		NETWORK.set_function("NETWORK_SPAWN_CONFIG_ADD_PROPERTY_PREFERENCE_", LUA_NATIVE_NETWORK_NETWORK_SPAWN_CONFIG_ADD_PROPERTY_PREFERENCE_);
		NETWORK.set_function("0x405DDEFB1F531B18_", LUA_NATIVE_NETWORK_0x405DDEFB1F531B18_);
		NETWORK.set_function("0x43CF999205084B4B_", LUA_NATIVE_NETWORK_0x43CF999205084B4B_);
		NETWORK.set_function("0x13F592FC3BF0EA84_", LUA_NATIVE_NETWORK_0x13F592FC3BF0EA84_);
		NETWORK.set_function("0xCF23AB5BD47B384D_", LUA_NATIVE_NETWORK_0xCF23AB5BD47B384D_);
		NETWORK.set_function("0xE5634491A58C2703_", LUA_NATIVE_NETWORK_0xE5634491A58C2703_);
		NETWORK.set_function("NETWORK_SPAWN_CONFIG_SET_GROUND_TO_ROOT_OFFSET", LUA_NATIVE_NETWORK_NETWORK_SPAWN_CONFIG_SET_GROUND_TO_ROOT_OFFSET);
		NETWORK.set_function("NETWORK_SPAWN_CONFIG_SET_LEVEL_WATER_DEPTH_", LUA_NATIVE_NETWORK_NETWORK_SPAWN_CONFIG_SET_LEVEL_WATER_DEPTH_);
		NETWORK.set_function("NETWORK_SPAWN_CONFIG_SET_TUNING_FLOAT", LUA_NATIVE_NETWORK_NETWORK_SPAWN_CONFIG_SET_TUNING_FLOAT);
		NETWORK.set_function("0x5D3C528B7A7DF836_", LUA_NATIVE_NETWORK_0x5D3C528B7A7DF836_);
		NETWORK.set_function("0x2686BD9566B65EDA_", LUA_NATIVE_NETWORK_0x2686BD9566B65EDA_);
		NETWORK.set_function("0xBB1EC8C2EEF33BAA_", LUA_NATIVE_NETWORK_0xBB1EC8C2EEF33BAA_);
		NETWORK.set_function("0x67CCDF74C4DF7169_", LUA_NATIVE_NETWORK_0x67CCDF74C4DF7169_);
		NETWORK.set_function("0xC8B6D18E22484643_", LUA_NATIVE_NETWORK_0xC8B6D18E22484643_);
		NETWORK.set_function("0x97BCE4C4B3191228_", LUA_NATIVE_NETWORK_0x97BCE4C4B3191228_);
		NETWORK.set_function("0x41452E8A3B9C0C4B_", LUA_NATIVE_NETWORK_0x41452E8A3B9C0C4B_);
		NETWORK.set_function("NETWORK_SPAWN_CONFIG_SEARCH_IN_PROGRESS_", LUA_NATIVE_NETWORK_NETWORK_SPAWN_CONFIG_SEARCH_IN_PROGRESS_);
		NETWORK.set_function("0x61BFBAA795E712AD_", LUA_NATIVE_NETWORK_0x61BFBAA795E712AD_);
		NETWORK.set_function("NETWORK_SPAWN_CONFIG_SET_CANCEL_SEARCH_", LUA_NATIVE_NETWORK_NETWORK_SPAWN_CONFIG_SET_CANCEL_SEARCH_);
		NETWORK.set_function("0x691E4DE5309EAEFC_", LUA_NATIVE_NETWORK_0x691E4DE5309EAEFC_);
		NETWORK.set_function("NETWORK_START_SOLO_TUTORIAL_SESSION", LUA_NATIVE_NETWORK_NETWORK_START_SOLO_TUTORIAL_SESSION);
		NETWORK.set_function("NETWORK_END_TUTORIAL_SESSION", LUA_NATIVE_NETWORK_NETWORK_END_TUTORIAL_SESSION);
		NETWORK.set_function("NETWORK_IS_IN_TUTORIAL_SESSION", LUA_NATIVE_NETWORK_NETWORK_IS_IN_TUTORIAL_SESSION);
		NETWORK.set_function("NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING", LUA_NATIVE_NETWORK_NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING);
		NETWORK.set_function("NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION", LUA_NATIVE_NETWORK_NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION);
		NETWORK.set_function("NETWORK_ALLOW_ALL_ENTITY_FADING_FOR_INSTANCES", LUA_NATIVE_NETWORK_NETWORK_ALLOW_ALL_ENTITY_FADING_FOR_INSTANCES);
		NETWORK.set_function("NETWORK_ALLOW_ENTITY_FADING_FOR_INSTANCES", LUA_NATIVE_NETWORK_NETWORK_ALLOW_ENTITY_FADING_FOR_INSTANCES);
		NETWORK.set_function("0xDC6AD5C046F33AB4_", LUA_NATIVE_NETWORK_0xDC6AD5C046F33AB4_);
		NETWORK.set_function("0x6C7E04E9DE451789_", LUA_NATIVE_NETWORK_0x6C7E04E9DE451789_);
		NETWORK.set_function("NETWORK_SET_LOCAL_PLAYER_PENDING_FAST_INSTANCE_ID", LUA_NATIVE_NETWORK_NETWORK_SET_LOCAL_PLAYER_PENDING_FAST_INSTANCE_ID);
		NETWORK.set_function("NETWORK_GET_PLAYER_FAST_INSTANCE_ID_", LUA_NATIVE_NETWORK_NETWORK_GET_PLAYER_FAST_INSTANCE_ID_);
		NETWORK.set_function("NETWORK_CONCEAL_PLAYER", LUA_NATIVE_NETWORK_NETWORK_CONCEAL_PLAYER);
		NETWORK.set_function("NETWORK_IS_PLAYER_CONCEALED", LUA_NATIVE_NETWORK_NETWORK_IS_PLAYER_CONCEALED);
		NETWORK.set_function("0x40FEDB13870042F1_", LUA_NATIVE_NETWORK_0x40FEDB13870042F1_);
		NETWORK.set_function("0x422F9D6D6C7BC290_", LUA_NATIVE_NETWORK_0x422F9D6D6C7BC290_);
		NETWORK.set_function("NETWORK_REQUEST_CLOUD_TUNABLES", LUA_NATIVE_NETWORK_NETWORK_REQUEST_CLOUD_TUNABLES);
		NETWORK.set_function("NETWORK_IS_TUNABLE_CLOUD_REQUEST_PENDING", LUA_NATIVE_NETWORK_NETWORK_IS_TUNABLE_CLOUD_REQUEST_PENDING);
		NETWORK.set_function("NETWORK_GET_TUNABLE_CLOUD_CRC", LUA_NATIVE_NETWORK_NETWORK_GET_TUNABLE_CLOUD_CRC);
		NETWORK.set_function("NETWORK_DOES_TUNABLE_EXIST", LUA_NATIVE_NETWORK_NETWORK_DOES_TUNABLE_EXIST);
		NETWORK.set_function("NETWORK_ACCESS_TUNABLE_INT", LUA_NATIVE_NETWORK_NETWORK_ACCESS_TUNABLE_INT);
		NETWORK.set_function("NETWORK_ACCESS_TUNABLE_BOOL", LUA_NATIVE_NETWORK_NETWORK_ACCESS_TUNABLE_BOOL);
		NETWORK.set_function("NETWORK_TRY_ACCESS_TUNABLE_INT_HASH", LUA_NATIVE_NETWORK_NETWORK_TRY_ACCESS_TUNABLE_INT_HASH);
		NETWORK.set_function("NETWORK_TRY_ACCESS_TUNABLE_FLOAT_HASH", LUA_NATIVE_NETWORK_NETWORK_TRY_ACCESS_TUNABLE_FLOAT_HASH);
		NETWORK.set_function("NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH", LUA_NATIVE_NETWORK_NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH);
		NETWORK.set_function("0x894B5ECAB45D2342_", LUA_NATIVE_NETWORK_0x894B5ECAB45D2342_);
		NETWORK.set_function("NETWORK_DISABLE_PROXIMITY_MIGRATION", LUA_NATIVE_NETWORK_NETWORK_DISABLE_PROXIMITY_MIGRATION);
		NETWORK.set_function("COMMERCE_STORE_IS_OPEN_", LUA_NATIVE_NETWORK_COMMERCE_STORE_IS_OPEN_);
		NETWORK.set_function("COMMERCE_STORE_IS_ENABLED_", LUA_NATIVE_NETWORK_COMMERCE_STORE_IS_ENABLED_);
		NETWORK.set_function("CLOUD_HAS_REQUEST_COMPLETED", LUA_NATIVE_NETWORK_CLOUD_HAS_REQUEST_COMPLETED);
		NETWORK.set_function("CLOUD_DID_REQUEST_SUCCEED", LUA_NATIVE_NETWORK_CLOUD_DID_REQUEST_SUCCEED);
		NETWORK.set_function("GET_LAUNCH_PARAM_EXISTS_", LUA_NATIVE_NETWORK_GET_LAUNCH_PARAM_EXISTS_);
		NETWORK.set_function("GET_LAUNCH_PARAM_VALUE", LUA_NATIVE_NETWORK_GET_LAUNCH_PARAM_VALUE);
		NETWORK.set_function("SET_LAUNCH_PARAM_VALUE_", LUA_NATIVE_NETWORK_SET_LAUNCH_PARAM_VALUE_);
		NETWORK.set_function("CLEAR_LAUNCH_PARAM_", LUA_NATIVE_NETWORK_CLEAR_LAUNCH_PARAM_);
		NETWORK.set_function("GET_LAUNCH_PARAM_STRING_", LUA_NATIVE_NETWORK_GET_LAUNCH_PARAM_STRING_);
		NETWORK.set_function("SET_LAUNCH_PARAM_STRING_", LUA_NATIVE_NETWORK_SET_LAUNCH_PARAM_STRING_);
		NETWORK.set_function("CLEAR_SERVICE_EVENT_ARGUMENTS", LUA_NATIVE_NETWORK_CLEAR_SERVICE_EVENT_ARGUMENTS);
		NETWORK.set_function("UGC_IS_REQUEST_PENDING", LUA_NATIVE_NETWORK_UGC_IS_REQUEST_PENDING);
		NETWORK.set_function("UGC_HAS_REQUEST_FINISHED", LUA_NATIVE_NETWORK_UGC_HAS_REQUEST_FINISHED);
		NETWORK.set_function("UGC_DID_REQUEST_SUCCEED", LUA_NATIVE_NETWORK_UGC_DID_REQUEST_SUCCEED);
		NETWORK.set_function("0xCD53E6CBF609C012_", LUA_NATIVE_NETWORK_0xCD53E6CBF609C012_);
		NETWORK.set_function("UGC_QUERY_BY_CONTENT_TYPE_", LUA_NATIVE_NETWORK_UGC_QUERY_BY_CONTENT_TYPE_);
		NETWORK.set_function("UGC_QUERY_BY_CATEGORY_", LUA_NATIVE_NETWORK_UGC_QUERY_BY_CATEGORY_);
		NETWORK.set_function("UGC_QUERY_BY_CONTENT_ID_", LUA_NATIVE_NETWORK_UGC_QUERY_BY_CONTENT_ID_);
		NETWORK.set_function("UGC_IS_BOOK_MARKED_", LUA_NATIVE_NETWORK_UGC_IS_BOOK_MARKED_);
		NETWORK.set_function("UGC_CLEAR_QUERY_RESULTS", LUA_NATIVE_NETWORK_UGC_CLEAR_QUERY_RESULTS);
		NETWORK.set_function("UGC_QUERY_WAS_FORCE_CANCELLED", LUA_NATIVE_NETWORK_UGC_QUERY_WAS_FORCE_CANCELLED);
		NETWORK.set_function("UGC_QUERY_GET_CONTENT_NUM", LUA_NATIVE_NETWORK_UGC_QUERY_GET_CONTENT_NUM);
		NETWORK.set_function("UGC_QUERY_GET_CREATOR_HANDLE_", LUA_NATIVE_NETWORK_UGC_QUERY_GET_CREATOR_HANDLE_);
		NETWORK.set_function("UGC_QUERY_GET_OWNER_ID_", LUA_NATIVE_NETWORK_UGC_QUERY_GET_OWNER_ID_);
		NETWORK.set_function("UGC_QUERY_GET_NAME_", LUA_NATIVE_NETWORK_UGC_QUERY_GET_NAME_);
		NETWORK.set_function("UGC_QUERY_GET_ROOT_CONTENT_ID_", LUA_NATIVE_NETWORK_UGC_QUERY_GET_ROOT_CONTENT_ID_);
		NETWORK.set_function("UGC_QUERY_GET_PLAYLIST_NAME_", LUA_NATIVE_NETWORK_UGC_QUERY_GET_PLAYLIST_NAME_);
		NETWORK.set_function("UGC_QUERY_GET_MISSION_DESC_HASH_", LUA_NATIVE_NETWORK_UGC_QUERY_GET_MISSION_DESC_HASH_);
		NETWORK.set_function("UGC_QUERY_GET_CREATOR_PHOTO_", LUA_NATIVE_NETWORK_UGC_QUERY_GET_CREATOR_PHOTO_);
		NETWORK.set_function("UGC_QUERY_GET_DATE_", LUA_NATIVE_NETWORK_UGC_QUERY_GET_DATE_);
		NETWORK.set_function("UGC_QUERY_GET_POSIX_UPDATED_DATE_", LUA_NATIVE_NETWORK_UGC_QUERY_GET_POSIX_UPDATED_DATE_);
		NETWORK.set_function("UGC_QUERY_GET_POSIX_PUBLISHED_DATE_", LUA_NATIVE_NETWORK_UGC_QUERY_GET_POSIX_PUBLISHED_DATE_);
		NETWORK.set_function("UGC_QUERY_GET_VERSION_", LUA_NATIVE_NETWORK_UGC_QUERY_GET_VERSION_);
		NETWORK.set_function("UGC_QUERY_GET_LANGUAGE_", LUA_NATIVE_NETWORK_UGC_QUERY_GET_LANGUAGE_);
		NETWORK.set_function("UGC_QUERY_GET_PUBLISHED_", LUA_NATIVE_NETWORK_UGC_QUERY_GET_PUBLISHED_);
		NETWORK.set_function("UGC_QUERY_GET_RATING_", LUA_NATIVE_NETWORK_UGC_QUERY_GET_RATING_);
		NETWORK.set_function("0x5F0E99071582DECA_", LUA_NATIVE_NETWORK_0x5F0E99071582DECA_);
		NETWORK.set_function("UGC_QUERY_GET_CONTENT_HAS_PLAYER_RECORD", LUA_NATIVE_NETWORK_UGC_QUERY_GET_CONTENT_HAS_PLAYER_RECORD);
		NETWORK.set_function("UGC_QUERY_GET_BOOK_MARKED_", LUA_NATIVE_NETWORK_UGC_QUERY_GET_BOOK_MARKED_);
		NETWORK.set_function("UGC_HAS_PRIVILEGE_", LUA_NATIVE_NETWORK_UGC_HAS_PRIVILEGE_);
		NETWORK.set_function("UGC_REQUEST_CONTENT_DATA_FROM_PARAMS", LUA_NATIVE_NETWORK_UGC_REQUEST_CONTENT_DATA_FROM_PARAMS);
		NETWORK.set_function("UGC_REQUEST_CACHED_DESCRIPTION", LUA_NATIVE_NETWORK_UGC_REQUEST_CACHED_DESCRIPTION);
		NETWORK.set_function("UGC_IS_DESCRIPTION_REQUEST_IN_PROGRESS", LUA_NATIVE_NETWORK_UGC_IS_DESCRIPTION_REQUEST_IN_PROGRESS);
		NETWORK.set_function("UGC_HAS_DESCRIPTION_REQUEST_FINISHED", LUA_NATIVE_NETWORK_UGC_HAS_DESCRIPTION_REQUEST_FINISHED);
		NETWORK.set_function("UGC_DID_DESCRIPTION_REQUEST_SUCCEED", LUA_NATIVE_NETWORK_UGC_DID_DESCRIPTION_REQUEST_SUCCEED);
		NETWORK.set_function("UGC_GET_CACHED_DESCRIPTION", LUA_NATIVE_NETWORK_UGC_GET_CACHED_DESCRIPTION);
		NETWORK.set_function("UGC_RELEASE_CACHED_DESCRIPTION", LUA_NATIVE_NETWORK_UGC_RELEASE_CACHED_DESCRIPTION);
		NETWORK.set_function("UGC_RELEASE_ALL_CACHED_DESCRIPTIONS", LUA_NATIVE_NETWORK_UGC_RELEASE_ALL_CACHED_DESCRIPTIONS);
		NETWORK.set_function("UGC_SET_QUERY_DATA_FROM_OFFLINE", LUA_NATIVE_NETWORK_UGC_SET_QUERY_DATA_FROM_OFFLINE);
		NETWORK.set_function("UGC_IS_LANGUAGE_SUPPORTED", LUA_NATIVE_NETWORK_UGC_IS_LANGUAGE_SUPPORTED);
		NETWORK.set_function("0xD4022C7286B0DFA2_", LUA_NATIVE_NETWORK_0xD4022C7286B0DFA2_);
		NETWORK.set_function("NETWORK_PERSONA_PHOTO_WRITE_SC_PROFILE_", LUA_NATIVE_NETWORK_NETWORK_PERSONA_PHOTO_WRITE_SC_PROFILE_);
		NETWORK.set_function("NETWORK_PERSONA_PHOTO_WRITE_LOCAL_", LUA_NATIVE_NETWORK_NETWORK_PERSONA_PHOTO_WRITE_LOCAL_);
		NETWORK.set_function("NETWORK_IS_PREVIOUS_UPLOAD_PENDING_", LUA_NATIVE_NETWORK_NETWORK_IS_PREVIOUS_UPLOAD_PENDING_);
		NETWORK.set_function("0xCC4E72C339461ED1_", LUA_NATIVE_NETWORK_0xCC4E72C339461ED1_);
		NETWORK.set_function("REQUEST_PEDSHOT_TEXTURE_LOCAL_BACKUP_DOWNLOAD_", LUA_NATIVE_NETWORK_REQUEST_PEDSHOT_TEXTURE_LOCAL_BACKUP_DOWNLOAD_);
		NETWORK.set_function("REQUEST_PEDSHOT_TEXTURE_LOCAL_DOWNLOAD_", LUA_NATIVE_NETWORK_REQUEST_PEDSHOT_TEXTURE_LOCAL_DOWNLOAD_);
		NETWORK.set_function("REQUEST_PEDSHOT_TEXTURE_MULTIPLAYER_DOWNLOAD_", LUA_NATIVE_NETWORK_REQUEST_PEDSHOT_TEXTURE_MULTIPLAYER_DOWNLOAD_);
		NETWORK.set_function("TEXTURE_DOWNLOAD_TEXTURE_NAME_IS_VALID_", LUA_NATIVE_NETWORK_TEXTURE_DOWNLOAD_TEXTURE_NAME_IS_VALID_);
		NETWORK.set_function("TEXTURE_DOWNLOAD_REQUEST", LUA_NATIVE_NETWORK_TEXTURE_DOWNLOAD_REQUEST);
		NETWORK.set_function("MUGSHOT_TEXTURE_DOWNLOAD_REQUEST_", LUA_NATIVE_NETWORK_MUGSHOT_TEXTURE_DOWNLOAD_REQUEST_);
		NETWORK.set_function("UGC_TEXTURE_DOWNLOAD_REQUEST", LUA_NATIVE_NETWORK_UGC_TEXTURE_DOWNLOAD_REQUEST);
		NETWORK.set_function("LOCAL_PLAYER_PEDSHOT_TEXTURE_DOWNLOAD_REQUEST_", LUA_NATIVE_NETWORK_LOCAL_PLAYER_PEDSHOT_TEXTURE_DOWNLOAD_REQUEST_);
		NETWORK.set_function("TEXTURE_DOWNLOAD_RELEASE", LUA_NATIVE_NETWORK_TEXTURE_DOWNLOAD_RELEASE);
		NETWORK.set_function("TEXTURE_DOWNLOAD_RELEASE_BY_NAME_", LUA_NATIVE_NETWORK_TEXTURE_DOWNLOAD_RELEASE_BY_NAME_);
		NETWORK.set_function("TEXTURE_DOWNLOAD_GET_NAME", LUA_NATIVE_NETWORK_TEXTURE_DOWNLOAD_GET_NAME);
		NETWORK.set_function("GET_STATUS_OF_TEXTURE_DOWNLOAD", LUA_NATIVE_NETWORK_GET_STATUS_OF_TEXTURE_DOWNLOAD);
		NETWORK.set_function("PEDMUGSHOT_GET_STATUS_", LUA_NATIVE_NETWORK_PEDMUGSHOT_GET_STATUS_);
		NETWORK.set_function("PEDMUGSHOT_TAKE_", LUA_NATIVE_NETWORK_PEDMUGSHOT_TAKE_);
		NETWORK.set_function("PEDMUGSHOT_REQUEST_SEND_", LUA_NATIVE_NETWORK_PEDMUGSHOT_REQUEST_SEND_);
		NETWORK.set_function("0x814729078AED6D30_", LUA_NATIVE_NETWORK_0x814729078AED6D30_);
		NETWORK.set_function("NETWORK_HAVE_ROS_BANNED_PRIV", LUA_NATIVE_NETWORK_NETWORK_HAVE_ROS_BANNED_PRIV);
		NETWORK.set_function("NETWORK_HAS_ROS_PRIVILEGE", LUA_NATIVE_NETWORK_NETWORK_HAS_ROS_PRIVILEGE);
		NETWORK.set_function("NETWORK_START_USER_CONTENT_PERMISSIONS_CHECK", LUA_NATIVE_NETWORK_NETWORK_START_USER_CONTENT_PERMISSIONS_CHECK);
		NETWORK.set_function("NETWORK_AUTO_SESSION_SET_ALLOWED_TO_SPLIT_", LUA_NATIVE_NETWORK_NETWORK_AUTO_SESSION_SET_ALLOWED_TO_SPLIT_);
		NETWORK.set_function("NETWORK_AUTO_SESSION_IS_ALLOWED_TO_MERGE", LUA_NATIVE_NETWORK_NETWORK_AUTO_SESSION_IS_ALLOWED_TO_MERGE);
		NETWORK.set_function("NETWORK_AUTO_SESSION_SET_ALLOWED_TO_MERGE_", LUA_NATIVE_NETWORK_NETWORK_AUTO_SESSION_SET_ALLOWED_TO_MERGE_);
		NETWORK.set_function("NETWORK_AUTO_SESSION_IS_AUTO_WARP_DISABLED_", LUA_NATIVE_NETWORK_NETWORK_AUTO_SESSION_IS_AUTO_WARP_DISABLED_);
		NETWORK.set_function("NETWORK_AUTO_SESSION_SET_AUTO_WARP_ENABLED_", LUA_NATIVE_NETWORK_NETWORK_AUTO_SESSION_SET_AUTO_WARP_ENABLED_);
		NETWORK.set_function("NETWORK_AUTO_SESSION_CAN_SPLIT_SESSION", LUA_NATIVE_NETWORK_NETWORK_AUTO_SESSION_CAN_SPLIT_SESSION);
		NETWORK.set_function("NETWORK_AUTO_SESSION_SPLIT_SESSION", LUA_NATIVE_NETWORK_NETWORK_AUTO_SESSION_SPLIT_SESSION);
		NETWORK.set_function("NETWORK_AUTO_SESSION_IS_PROCESSING_SESSION_SPLIT_", LUA_NATIVE_NETWORK_NETWORK_AUTO_SESSION_IS_PROCESSING_SESSION_SPLIT_);
		NETWORK.set_function("NETWORK_AUTO_SESSION_SPLIT_SESSION_SUCCESSFUL_", LUA_NATIVE_NETWORK_NETWORK_AUTO_SESSION_SPLIT_SESSION_SUCCESSFUL_);
		NETWORK.set_function("NETWORK_AUTO_SESSION_IS_INSTANCED_SESSION_", LUA_NATIVE_NETWORK_NETWORK_AUTO_SESSION_IS_INSTANCED_SESSION_);
		NETWORK.set_function("NETWORK_AUTO_SESSION_FINISH_INSTANCE", LUA_NATIVE_NETWORK_NETWORK_AUTO_SESSION_FINISH_INSTANCE);
		NETWORK.set_function("0xFD8112109A96877C_", LUA_NATIVE_NETWORK_0xFD8112109A96877C_);
		NETWORK.set_function("0x5A91BCEF74944E93_", LUA_NATIVE_NETWORK_0x5A91BCEF74944E93_);
		NETWORK.set_function("0xFB3205788F8AFA3F_", LUA_NATIVE_NETWORK_0xFB3205788F8AFA3F_);
		NETWORK.set_function("0x335AF56613CA0F49_", LUA_NATIVE_NETWORK_0x335AF56613CA0F49_);
		NETWORK.set_function("0x9E5A47744C0F0376_", LUA_NATIVE_NETWORK_0x9E5A47744C0F0376_);
		NETWORK.set_function("0xD3B6EBC6C3D77D44_", LUA_NATIVE_NETWORK_0xD3B6EBC6C3D77D44_);
		NETWORK.set_function("0xA7670F7991099680_", LUA_NATIVE_NETWORK_0xA7670F7991099680_);
		NETWORK.set_function("0x7673C0D2C5CDAC55_", LUA_NATIVE_NETWORK_0x7673C0D2C5CDAC55_);
		NETWORK.set_function("0x3CBD6565D9C3B133_", LUA_NATIVE_NETWORK_0x3CBD6565D9C3B133_);
		NETWORK.set_function("0x0D183D8490EE4366_", LUA_NATIVE_NETWORK_0x0D183D8490EE4366_);
		NETWORK.set_function("0xC1968045EEB563B7_", LUA_NATIVE_NETWORK_0xC1968045EEB563B7_);
		NETWORK.set_function("NETWORK_AUTO_SESSION_IS_OBJECT_CREATION_PAUSED", LUA_NATIVE_NETWORK_NETWORK_AUTO_SESSION_IS_OBJECT_CREATION_PAUSED);
		NETWORK.set_function("0x0B6B4507AC5EA8B8_", LUA_NATIVE_NETWORK_0x0B6B4507AC5EA8B8_);
		NETWORK.set_function("NETWORK_IS_RESETTING_POPULATION", LUA_NATIVE_NETWORK_NETWORK_IS_RESETTING_POPULATION);
		NETWORK.set_function("NETWORK_RESET_POPULATION", LUA_NATIVE_NETWORK_NETWORK_RESET_POPULATION);
		NETWORK.set_function("NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND", LUA_NATIVE_NETWORK_NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND);
		NETWORK.set_function("0x3034C77C79A58880_", LUA_NATIVE_NETWORK_0x3034C77C79A58880_);
		NETWORK.set_function("NETWORK_ALLOW_REMOTE_ATTACHMENT_MODIFICATION", LUA_NATIVE_NETWORK_NETWORK_ALLOW_REMOTE_ATTACHMENT_MODIFICATION);
		NETWORK.set_function("NETWORK_SHOW_CHAT_RESTRICTION_MSC", LUA_NATIVE_NETWORK_NETWORK_SHOW_CHAT_RESTRICTION_MSC);
		NETWORK.set_function("NETWORK_SHOW_PSN_UGC_RESTRICTION", LUA_NATIVE_NETWORK_NETWORK_SHOW_PSN_UGC_RESTRICTION);
		NETWORK.set_function("NETWORK_IS_CONNECTED_VIA_RELAY", LUA_NATIVE_NETWORK_NETWORK_IS_CONNECTED_VIA_RELAY);
		NETWORK.set_function("NETWORK_GET_AVERAGE_LATENCY", LUA_NATIVE_NETWORK_NETWORK_GET_AVERAGE_LATENCY);
		NETWORK.set_function("NETWORK_GET_AVERAGE_PING", LUA_NATIVE_NETWORK_NETWORK_GET_AVERAGE_PING);
		NETWORK.set_function("NETWORK_GET_AVERAGE_PACKET_LOSS", LUA_NATIVE_NETWORK_NETWORK_GET_AVERAGE_PACKET_LOSS);
		NETWORK.set_function("NETWORK_GET_NUM_UNACKED_RELIABLES", LUA_NATIVE_NETWORK_NETWORK_GET_NUM_UNACKED_RELIABLES);
		NETWORK.set_function("NETWORK_GET_UNRELIABLE_RESEND_COUNT", LUA_NATIVE_NETWORK_NETWORK_GET_UNRELIABLE_RESEND_COUNT);
		NETWORK.set_function("NETWORK_GET_HIGHEST_RELIABLE_RESEND_COUNT", LUA_NATIVE_NETWORK_NETWORK_GET_HIGHEST_RELIABLE_RESEND_COUNT);
		NETWORK.set_function("NETWORK_DUMP_NET_IF_CONFIG", LUA_NATIVE_NETWORK_NETWORK_DUMP_NET_IF_CONFIG);
		NETWORK.set_function("NETWORK_GET_NET_STATISTICS_INFO", LUA_NATIVE_NETWORK_NETWORK_GET_NET_STATISTICS_INFO);
		NETWORK.set_function("NETWORK_IS_PLAYER_INDEX_VALID", LUA_NATIVE_NETWORK_NETWORK_IS_PLAYER_INDEX_VALID);
		NETWORK.set_function("GET_PLAYER_WAYPOINT_IS_ACTIVE_", LUA_NATIVE_NETWORK_GET_PLAYER_WAYPOINT_IS_ACTIVE_);
		NETWORK.set_function("0x455156F47DC6B78C_", LUA_NATIVE_NETWORK_0x455156F47DC6B78C_);
		NETWORK.set_function("SET_LOCAL_PLAYER_DAMAGE_MULTIPLIER_FOR_PLAYER_", LUA_NATIVE_NETWORK_SET_LOCAL_PLAYER_DAMAGE_MULTIPLIER_FOR_PLAYER_);
		NETWORK.set_function("NETWORK_TRIGGER_DAMAGE_EVENT_FOR_ZERO_DAMAGE", LUA_NATIVE_NETWORK_NETWORK_TRIGGER_DAMAGE_EVENT_FOR_ZERO_DAMAGE);
		NETWORK.set_function("0x5CD3AAD8FF9ED121_", LUA_NATIVE_NETWORK_0x5CD3AAD8FF9ED121_);
		NETWORK.set_function("0x51951DE06C0D1C40_", LUA_NATIVE_NETWORK_0x51951DE06C0D1C40_);
		NETWORK.set_function("0xE3AB5EEFCB6671A2_", LUA_NATIVE_NETWORK_0xE3AB5EEFCB6671A2_);
		NETWORK.set_function("0x9B39B0555CC692B5_", LUA_NATIVE_NETWORK_0x9B39B0555CC692B5_);
		NETWORK.set_function("0xFE53B1F8D43F19BF_", LUA_NATIVE_NETWORK_0xFE53B1F8D43F19BF_);
		NETWORK.set_function("0x862C5040F4888741_", LUA_NATIVE_NETWORK_0x862C5040F4888741_);
		NETWORK.set_function("0x2CD41AC000E6F611_", LUA_NATIVE_NETWORK_0x2CD41AC000E6F611_);
		NETWORK.set_function("0xACC44768AF229042_", LUA_NATIVE_NETWORK_0xACC44768AF229042_);
		NETWORK.set_function("0x7E300B5B86AB1D1A_", LUA_NATIVE_NETWORK_0x7E300B5B86AB1D1A_);
		NETWORK.set_function("GET_UNIQUE_INT_FOR_PLAYER", LUA_NATIVE_NETWORK_GET_UNIQUE_INT_FOR_PLAYER);
		NETWORK.set_function("0x780A13F780A13F1B_", LUA_NATIVE_NETWORK_0x780A13F780A13F1B_);
		NETWORK.set_function("NETWORK_IS_TRACKED_PLAYER_VISIBLE_", LUA_NATIVE_NETWORK_NETWORK_IS_TRACKED_PLAYER_VISIBLE_);
		NETWORK.set_function("NETWORK_IS_AIM_CAM_ACTIVE", LUA_NATIVE_NETWORK_NETWORK_IS_AIM_CAM_ACTIVE);
		NETWORK.set_function("NETWORK_ALERT_", LUA_NATIVE_NETWORK_NETWORK_ALERT_);
		NETWORK.set_function("0x19447FCAE97704DC_", LUA_NATIVE_NETWORK_0x19447FCAE97704DC_);
		NETWORK.set_function("0x2C4E98DDA475364F_", LUA_NATIVE_NETWORK_0x2C4E98DDA475364F_);
		NETWORK.set_function("0x3F0ABAE38A0515AD_", LUA_NATIVE_NETWORK_0x3F0ABAE38A0515AD_);
		NETWORK.set_function("0x3F2EE18A3E294801_", LUA_NATIVE_NETWORK_0x3F2EE18A3E294801_);
		NETWORK.set_function("SET_SOCIAL_MATCHMAKING_ALLOWED_", LUA_NATIVE_NETWORK_SET_SOCIAL_MATCHMAKING_ALLOWED_);
		NETWORK.set_function("GET_SOCIAL_MATCHMAKING_ALLOWED_", LUA_NATIVE_NETWORK_GET_SOCIAL_MATCHMAKING_ALLOWED_);
		NETWORK.set_function("NETWORK_AWARD_HAS_REACHED_MAXCLAIM", LUA_NATIVE_NETWORK_NETWORK_AWARD_HAS_REACHED_MAXCLAIM);
		NETWORK.set_function("0x271F95E55C663B8B_", LUA_NATIVE_NETWORK_0x271F95E55C663B8B_);
		NETWORK.set_function("0x64A36BA85CE01A81_", LUA_NATIVE_NETWORK_0x64A36BA85CE01A81_);
		NETWORK.set_function("0xE10F2D7715ABABEC_", LUA_NATIVE_NETWORK_0xE10F2D7715ABABEC_);
		NETWORK.set_function("0x7A8E8DF782B47EB0_", LUA_NATIVE_NETWORK_0x7A8E8DF782B47EB0_);
		NETWORK.set_function("0x77B299E8799B1332_", LUA_NATIVE_NETWORK_0x77B299E8799B1332_);
		NETWORK.set_function("0x923346025512DFB7_", LUA_NATIVE_NETWORK_0x923346025512DFB7_);
		NETWORK.set_function("NETWORK_GET_XP_", LUA_NATIVE_NETWORK_NETWORK_GET_XP_);
		NETWORK.set_function("NETWORK_GET_RANK_", LUA_NATIVE_NETWORK_NETWORK_GET_RANK_);
		NETWORK.set_function("NETWORK_SET_RECENT_GAMERS_ENABLED", LUA_NATIVE_NETWORK_NETWORK_SET_RECENT_GAMERS_ENABLED);
		NETWORK.set_function("0x273E04A3A7AD1F2D_", LUA_NATIVE_NETWORK_0x273E04A3A7AD1F2D_);
		NETWORK.set_function("NETWORK_ADD_PLAYER_TO_RECENT_GAMERS_LIST_", LUA_NATIVE_NETWORK_NETWORK_ADD_PLAYER_TO_RECENT_GAMERS_LIST_);
		NETWORK.set_function("NETWORK_REQUEST_RECENT_GAMER_NAMES", LUA_NATIVE_NETWORK_NETWORK_REQUEST_RECENT_GAMER_NAMES);
		NETWORK.set_function("NETWORK_IS_RECENT_GAMER_NAMES_REQUEST_IN_PROGRESS_", LUA_NATIVE_NETWORK_NETWORK_IS_RECENT_GAMER_NAMES_REQUEST_IN_PROGRESS_);
		NETWORK.set_function("NETWORK_DID_RECENT_GAMER_NAMES_REQUEST_SUCCEED_", LUA_NATIVE_NETWORK_NETWORK_DID_RECENT_GAMER_NAMES_REQUEST_SUCCEED_);
		NETWORK.set_function("NETWORK_GET_NUM_RECENT_GAMERS_", LUA_NATIVE_NETWORK_NETWORK_GET_NUM_RECENT_GAMERS_);
		NETWORK.set_function("NETWORK_GET_RECENT_GAMER_NAMES", LUA_NATIVE_NETWORK_NETWORK_GET_RECENT_GAMER_NAMES);
		NETWORK.set_function("0x49CF17A564918E8D_", LUA_NATIVE_NETWORK_0x49CF17A564918E8D_);
		NETWORK.set_function("0xD637D327080CD86E_", LUA_NATIVE_NETWORK_0xD637D327080CD86E_);
		NETWORK.set_function("0x564552C6AF1EEAB1_", LUA_NATIVE_NETWORK_0x564552C6AF1EEAB1_);
		NETWORK.set_function("NETWORK_ACTIVITY_RESET_TO_IDLE", LUA_NATIVE_NETWORK_NETWORK_ACTIVITY_RESET_TO_IDLE);
		NETWORK.set_function("NETWORK_ACTIVITY_SET_CURRENT", LUA_NATIVE_NETWORK_NETWORK_ACTIVITY_SET_CURRENT);
		NETWORK.set_function("NETWORK_GET_ROS_TITLE_NAME_", LUA_NATIVE_NETWORK_NETWORK_GET_ROS_TITLE_NAME_);
		NETWORK.set_function("REPORT_PLAYER_", LUA_NATIVE_NETWORK_REPORT_PLAYER_);
	}
}
