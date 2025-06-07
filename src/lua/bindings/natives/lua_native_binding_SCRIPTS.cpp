#include "lua_native_binding.hpp"
#include "game/rdr/Natives.hpp"

namespace Lua::native
{
	static void LUA_NATIVE_SCRIPTS_SET_PLAYER_BIT_AT_INDEX_(uintptr_t value, int bitIndex)
	{
		SCRIPTS::_SET_PLAYER_BIT_AT_INDEX((Any*)value, bitIndex);
	}

	static void LUA_NATIVE_SCRIPTS_CLEAR_PLAYER_BIT_AT_INDEX_(uintptr_t value, int bitIndex)
	{
		SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX((Any*)value, bitIndex);
	}

	static void LUA_NATIVE_SCRIPTS_0xE4ABE20DCE7C7CFE_(Any p0, Any p1, Any p2)
	{
		SCRIPTS::_0xE4ABE20DCE7C7CFE(p0, p1, p2);
	}

	static void LUA_NATIVE_SCRIPTS_0xFFDDF802279BE128_(Any p0, Any p1, Any p2)
	{
		SCRIPTS::_0xFFDDF802279BE128(p0, p1, p2);
	}

	static void LUA_NATIVE_SCRIPTS_0x64F765D9A1F8F02C_(uintptr_t p0, uintptr_t p1, uintptr_t p2)
	{
		SCRIPTS::_0x64F765D9A1F8F02C((Any*)p0, (Any*)p1, (Any*)p2);
	}

	static void LUA_NATIVE_SCRIPTS_SET_ALL_PLAYER_BITS_(uintptr_t value)
	{
		SCRIPTS::_SET_ALL_PLAYER_BITS((Any*)value);
	}

	static void LUA_NATIVE_SCRIPTS_CLEAR_ALL_PLAYER_BITS_(uintptr_t value)
	{
		SCRIPTS::_CLEAR_ALL_PLAYER_BITS((Any*)value);
	}

	static bool LUA_NATIVE_SCRIPTS_IS_PLAYER_BIT_SET_AT_INDEX_(uintptr_t value, int bitIndex)
	{
		auto retval = (bool)SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX((Any*)value, bitIndex);
		return retval;
	}

	static std::tuple<bool, int> LUA_NATIVE_SCRIPTS_IS_ANY_PLAYER_BIT_SET_(int playerBits)
	{
		std::tuple<bool, int> return_values;
		std::get<0>(return_values) = (bool)SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&playerBits);
		std::get<1>(return_values) = playerBits;

		return return_values;
	}

	static int LUA_NATIVE_SCRIPTS_GET_BLOCK_OF_PLAYER_BITS(uintptr_t value, int p1)
	{
		auto retval = SCRIPTS::GET_BLOCK_OF_PLAYER_BITS((Any*)value, p1);
		return retval;
	}

	static void LUA_NATIVE_SCRIPTS_SET_BLOCK_OF_PLAYER_BITS(uintptr_t value, int p1, int p2)
	{
		SCRIPTS::SET_BLOCK_OF_PLAYER_BITS((Any*)value, p1, p2);
	}

	static int LUA_NATIVE_SCRIPTS_COUNT_PLAYER_BITS(uintptr_t value)
	{
		auto retval = SCRIPTS::COUNT_PLAYER_BITS((Any*)value);
		return retval;
	}

	static void LUA_NATIVE_SCRIPTS_0x1BDB5A07307F6929_(Any p0, Any p1)
	{
		SCRIPTS::_0x1BDB5A07307F6929(p0, p1);
	}

	static void LUA_NATIVE_SCRIPTS_0x1C5EB3C27F7508CB_(Any p0, Any p1)
	{
		SCRIPTS::_0x1C5EB3C27F7508CB(p0, p1);
	}

	static void LUA_NATIVE_SCRIPTS_0x42A429CDFED6D99D_(Any p0, Any p1, Any p2)
	{
		SCRIPTS::_0x42A429CDFED6D99D(p0, p1, p2);
	}

	static void LUA_NATIVE_SCRIPTS_0x5827BE85A87B073D_(Any p0)
	{
		SCRIPTS::_0x5827BE85A87B073D(p0);
	}

	static Any LUA_NATIVE_SCRIPTS_0x0A79C81C418F5D38_(Any p0, Any p1)
	{
		auto retval = SCRIPTS::_0x0A79C81C418F5D38(p0, p1);
		return retval;
	}

	static Any LUA_NATIVE_SCRIPTS_0xA88E1D7FA1E20080_(Any p0)
	{
		auto retval = SCRIPTS::_0xA88E1D7FA1E20080(p0);
		return retval;
	}

	static int LUA_NATIVE_SCRIPTS_COUNT_PARTICIPANT_BITS(uintptr_t value)
	{
		auto retval = SCRIPTS::COUNT_PARTICIPANT_BITS((Any*)value);
		return retval;
	}

	static void LUA_NATIVE_SCRIPTS_REQUEST_SCRIPT(sol::stack_object scriptname)
	{
		SCRIPTS::REQUEST_SCRIPT(scriptname.is<const char*>() ? scriptname.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_SCRIPTS_SET_SCRIPT_AS_NO_LONGER_NEEDED(sol::stack_object scriptname)
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(scriptname.is<const char*>() ? scriptname.as<const char*>() : nullptr);
	}

	static bool LUA_NATIVE_SCRIPTS_HAS_SCRIPT_LOADED(sol::stack_object scriptname)
	{
		auto retval = (bool)SCRIPTS::HAS_SCRIPT_LOADED(scriptname.is<const char*>() ? scriptname.as<const char*>() : nullptr);
		return retval;
	}

	static bool LUA_NATIVE_SCRIPTS_DOES_SCRIPT_EXIST(sol::stack_object scriptname)
	{
		auto retval = (bool)SCRIPTS::DOES_SCRIPT_EXIST(scriptname.is<const char*>() ? scriptname.as<const char*>() : nullptr);
		return retval;
	}

	static void LUA_NATIVE_SCRIPTS_REQUEST_SCRIPT_WITH_NAME_HASH(Hash hashOfScriptName)
	{
		SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(hashOfScriptName);
	}

	static void LUA_NATIVE_SCRIPTS_SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(Hash hashOfScriptName)
	{
		SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(hashOfScriptName);
	}

	static bool LUA_NATIVE_SCRIPTS_HAS_SCRIPT_WITH_NAME_HASH_LOADED(Hash hashOfScriptName)
	{
		auto retval = (bool)SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(hashOfScriptName);
		return retval;
	}

	static bool LUA_NATIVE_SCRIPTS_DOES_SCRIPT_WITH_NAME_HASH_EXIST(Hash hashOfScriptName)
	{
		auto retval = (bool)SCRIPTS::DOES_SCRIPT_WITH_NAME_HASH_EXIST(hashOfScriptName);
		return retval;
	}

	static void LUA_NATIVE_SCRIPTS_TERMINATE_THREAD(int thread)
	{
		SCRIPTS::TERMINATE_THREAD(thread);
	}

	static bool LUA_NATIVE_SCRIPTS_IS_THREAD_ACTIVE(int thread, bool ignoreKilledState)
	{
		auto retval = (bool)SCRIPTS::IS_THREAD_ACTIVE(thread, ignoreKilledState);
		return retval;
	}

	static bool LUA_NATIVE_SCRIPTS_DOES_THREAD_EXIST(int threadId)
	{
		auto retval = (bool)SCRIPTS::DOES_THREAD_EXIST(threadId);
		return retval;
	}

	static std::tuple<bool, bool> LUA_NATIVE_SCRIPTS_GET_THREAD_EXISTENCE_DETAILS(int threadId, bool threadExists, bool hasScriptHandler)
	{
		std::tuple<bool, bool> return_values;
		SCRIPTS::GET_THREAD_EXISTENCE_DETAILS(threadId, (BOOL*)&threadExists, (BOOL*)&hasScriptHandler);
		std::get<0>(return_values) = threadExists;
		std::get<1>(return_values) = hasScriptHandler;

		return return_values;
	}

	static Hash LUA_NATIVE_SCRIPTS_GET_HASH_OF_THREAD_(int threadId)
	{
		auto retval = SCRIPTS::_GET_HASH_OF_THREAD(threadId);
		return retval;
	}

	static void LUA_NATIVE_SCRIPTS_SCRIPT_THREAD_ITERATOR_RESET()
	{
		SCRIPTS::SCRIPT_THREAD_ITERATOR_RESET();
	}

	static int LUA_NATIVE_SCRIPTS_SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID()
	{
		auto retval = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
		return retval;
	}

	static bool LUA_NATIVE_SCRIPTS_IS_BACKGROUND_SCRIPT_(int threadId)
	{
		auto retval = (bool)SCRIPTS::_IS_BACKGROUND_SCRIPT(threadId);
		return retval;
	}

	static int LUA_NATIVE_SCRIPTS_GET_ID_OF_THIS_THREAD()
	{
		auto retval = SCRIPTS::GET_ID_OF_THIS_THREAD();
		return retval;
	}

	static void LUA_NATIVE_SCRIPTS_TERMINATE_THIS_THREAD()
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	static int LUA_NATIVE_SCRIPTS_GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Hash HashOfScriptName)
	{
		auto retval = SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(HashOfScriptName);
		return retval;
	}

	static void LUA_NATIVE_SCRIPTS_REQUEST_THREAD_EXIT_(int threadId)
	{
		SCRIPTS::_REQUEST_THREAD_EXIT(threadId);
	}

	static void LUA_NATIVE_SCRIPTS_REQUEST_THREAD_EXIT_FOR_ALL_THREADS_WITH_THIS_NAME_(Hash nameHash)
	{
		SCRIPTS::_REQUEST_THREAD_EXIT_FOR_ALL_THREADS_WITH_THIS_NAME(nameHash);
	}

	static bool LUA_NATIVE_SCRIPTS_IS_THREAD_EXIT_REQUESTED()
	{
		auto retval = (bool)SCRIPTS::IS_THREAD_EXIT_REQUESTED();
		return retval;
	}

	static bool LUA_NATIVE_SCRIPTS_IS_THREAD_EXIT_REQUESTED_FOR_THREAD_WITH_THIS_ID_(int threadId)
	{
		auto retval = (bool)SCRIPTS::_IS_THREAD_EXIT_REQUESTED_FOR_THREAD_WITH_THIS_ID(threadId);
		return retval;
	}

	static int LUA_NATIVE_SCRIPTS_GET_THREAD_EXIT_REASON_()
	{
		auto retval = SCRIPTS::_GET_THREAD_EXIT_REASON();
		return retval;
	}

	static Hash LUA_NATIVE_SCRIPTS_GET_HASH_OF_THIS_SCRIPT_NAME()
	{
		auto retval = SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME();
		return retval;
	}

	static int LUA_NATIVE_SCRIPTS_GET_NUMBER_OF_EVENTS(int eventQueue)
	{
		auto retval = SCRIPTS::GET_NUMBER_OF_EVENTS(eventQueue);
		return retval;
	}

	static bool LUA_NATIVE_SCRIPTS_GET_EVENT_EXISTS(int eventQueue, Hash eventType)
	{
		auto retval = (bool)SCRIPTS::GET_EVENT_EXISTS(eventQueue, eventType);
		return retval;
	}

	static Hash LUA_NATIVE_SCRIPTS_GET_EVENT_AT_INDEX(int eventQueue, int eventIndex)
	{
		auto retval = SCRIPTS::GET_EVENT_AT_INDEX(eventQueue, eventIndex);
		return retval;
	}

	static bool LUA_NATIVE_SCRIPTS_GET_EVENT_DATA(int eventQueue, int eventIndex, uintptr_t data, int dataSize)
	{
		auto retval = (bool)SCRIPTS::GET_EVENT_DATA(eventQueue, eventIndex, (Any*)data, dataSize);
		return retval;
	}

	static void LUA_NATIVE_SCRIPTS_SET_EVENT_FLAG_FOR_DELETION(int eventGroup, int eventIndex, bool p2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(eventGroup, eventIndex, p2);
	}

	static int LUA_NATIVE_SCRIPTS_TRIGGER_SCRIPT_EVENT(int eventQueue, uintptr_t data, int sizeOfData, int scriptMetadataIndex, int playerBits)
	{
		SCRIPTS::TRIGGER_SCRIPT_EVENT(eventQueue, (Any*)data, sizeOfData, scriptMetadataIndex, &playerBits);
		return playerBits;
	}

	static void LUA_NATIVE_SCRIPTS_TRIGGER_SCRIPT_EVENT_2_(uintptr_t eventData, int eventDataSize, int scriptMetadataIndex, int threadId)
	{
		SCRIPTS::_TRIGGER_SCRIPT_EVENT_2((Any*)eventData, eventDataSize, scriptMetadataIndex, threadId);
	}

	static Any LUA_NATIVE_SCRIPTS_0xE7282390542F570D_(Any p0)
	{
		auto retval = SCRIPTS::_0xE7282390542F570D(p0);
		return retval;
	}

	static void LUA_NATIVE_SCRIPTS_0x11B0A0B282FA9B10_(bool p0)
	{
		SCRIPTS::_0x11B0A0B282FA9B10(p0);
	}

	static void LUA_NATIVE_SCRIPTS_0x6F700A4BF7C3331B_(bool p0)
	{
		SCRIPTS::_0x6F700A4BF7C3331B(p0);
	}

	static void LUA_NATIVE_SCRIPTS_0xF9E951A1E5517C06_()
	{
		SCRIPTS::_0xF9E951A1E5517C06();
	}

	static void LUA_NATIVE_SCRIPTS_0x76CBCD9EADC00955_()
	{
		SCRIPTS::_0x76CBCD9EADC00955();
	}

	static void LUA_NATIVE_SCRIPTS_SHUTDOWN_LOADING_SCREEN()
	{
		SCRIPTS::SHUTDOWN_LOADING_SCREEN();
	}

	static void LUA_NATIVE_SCRIPTS_SET_NO_LOADING_SCREEN(bool state)
	{
		SCRIPTS::SET_NO_LOADING_SCREEN(state);
	}

	static bool LUA_NATIVE_SCRIPTS_GET_NO_LOADING_SCREEN()
	{
		auto retval = (bool)SCRIPTS::GET_NO_LOADING_SCREEN();
		return retval;
	}

	static void LUA_NATIVE_SCRIPTS_DISPLAY_LOADING_SCREENS_(Hash p0, Hash p1, Hash p2, sol::stack_object gamemodeName, sol::stack_object title, sol::stack_object subtitle)
	{
		SCRIPTS::_DISPLAY_LOADING_SCREENS(p0, p1, p2, gamemodeName.is<const char*>() ? gamemodeName.as<const char*>() : nullptr, title.is<const char*>() ? title.as<const char*>() : nullptr, subtitle.is<const char*>() ? subtitle.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_SCRIPTS_0x29FB4CE89472C3CB_(Any p0, Any p1, float p2, float p3, sol::stack_object p4, sol::stack_object p5, sol::stack_object p6, int p7)
	{
		SCRIPTS::_0x29FB4CE89472C3CB(p0, p1, p2, p3, p4.is<const char*>() ? p4.as<const char*>() : nullptr, p5.is<const char*>() ? p5.as<const char*>() : nullptr, p6.is<const char*>() ? p6.as<const char*>() : nullptr, p7);
	}

	static void LUA_NATIVE_SCRIPTS_STOP_DISPLAYING_MP_TRANSITION_LOADING_SCREENS(Any p0)
	{
		SCRIPTS::STOP_DISPLAYING_MP_TRANSITION_LOADING_SCREENS(p0);
	}

	static bool LUA_NATIVE_SCRIPTS_IS_LOADING_SCREEN_VISIBLE()
	{
		auto retval = (bool)SCRIPTS::IS_LOADING_SCREEN_VISIBLE();
		return retval;
	}

	static void LUA_NATIVE_SCRIPTS_BAIL_TO_LANDING_PAGE(int bailCode)
	{
		SCRIPTS::BAIL_TO_LANDING_PAGE(bailCode);
	}

	static void LUA_NATIVE_SCRIPTS_BAIL_WITH_PASS_THROUGH_PARAMS(sol::stack_object params)
	{
		SCRIPTS::BAIL_WITH_PASS_THROUGH_PARAMS(params.is<const char*>() ? params.as<const char*>() : nullptr);
	}

	static bool LUA_NATIVE_SCRIPTS_BG_IS_EXITFLAG_SET()
	{
		auto retval = (bool)SCRIPTS::BG_IS_EXITFLAG_SET();
		return retval;
	}

	static void LUA_NATIVE_SCRIPTS_BG_SET_EXITFLAG_RESPONSE()
	{
		SCRIPTS::BG_SET_EXITFLAG_RESPONSE();
	}

	static void LUA_NATIVE_SCRIPTS_BG_START_CONTEXT_HASH(Hash context)
	{
		SCRIPTS::BG_START_CONTEXT_HASH(context);
	}

	static void LUA_NATIVE_SCRIPTS_BG_END_CONTEXT_HASH(Hash context)
	{
		SCRIPTS::BG_END_CONTEXT_HASH(context);
	}

	static void LUA_NATIVE_SCRIPTS_BG_START_CONTEXT(sol::stack_object context)
	{
		SCRIPTS::BG_START_CONTEXT(context.is<const char*>() ? context.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_SCRIPTS_BG_END_CONTEXT(sol::stack_object context)
	{
		SCRIPTS::BG_END_CONTEXT(context.is<const char*>() ? context.as<const char*>() : nullptr);
	}

	static bool LUA_NATIVE_SCRIPTS_BG_DOES_LAUNCH_PARAM_EXIST(int bgScriptId, sol::stack_object paramName)
	{
		auto retval = (bool)SCRIPTS::BG_DOES_LAUNCH_PARAM_EXIST(bgScriptId, paramName.is<const char*>() ? paramName.as<const char*>() : nullptr);
		return retval;
	}

	static int LUA_NATIVE_SCRIPTS_BG_GET_LAUNCH_PARAM_VALUE(int bgScriptId, sol::stack_object paramName)
	{
		auto retval = SCRIPTS::BG_GET_LAUNCH_PARAM_VALUE(bgScriptId, paramName.is<const char*>() ? paramName.as<const char*>() : nullptr);
		return retval;
	}

	static int LUA_NATIVE_SCRIPTS_BG_GET_SCRIPT_ID_FROM_NAME_HASH(Hash scriptNameHash)
	{
		auto retval = SCRIPTS::BG_GET_SCRIPT_ID_FROM_NAME_HASH(scriptNameHash);
		return retval;
	}

	static void LUA_NATIVE_SCRIPTS_BG_RELOAD_ALL_BACKGROUND_SCRIPTS_()
	{
		SCRIPTS::_BG_RELOAD_ALL_BACKGROUND_SCRIPTS();
	}

	static void LUA_NATIVE_SCRIPTS_ACTIVATE_GOAL_CONTEXT_(Hash goalContext)
	{
		SCRIPTS::_ACTIVATE_GOAL_CONTEXT(goalContext);
	}

	static void LUA_NATIVE_SCRIPTS_DEACTIVATE_GOAL_CONTEXT_(Hash goalContext)
	{
		SCRIPTS::_DEACTIVATE_GOAL_CONTEXT(goalContext);
	}

	static bool LUA_NATIVE_SCRIPTS_IS_GOAL_CONTEXT_ACTIVE_(Hash goalContext)
	{
		auto retval = (bool)SCRIPTS::_IS_GOAL_CONTEXT_ACTIVE(goalContext);
		return retval;
	}

	static const char* LUA_NATIVE_SCRIPTS_NET_RPC_GUID_TO_STRING_(uintptr_t netRpcGuid)
	{
		auto retval = SCRIPTS::_NET_RPC_GUID_TO_STRING((Any*)netRpcGuid);
		return retval;
	}

	static bool LUA_NATIVE_SCRIPTS_AWARDS_GET_RESULT_ITEM(uintptr_t rpcGuid, Hash awardHash, int itemIndex, uintptr_t outResultItem)
	{
		auto retval = (bool)SCRIPTS::AWARDS_GET_RESULT_ITEM((Any*)rpcGuid, awardHash, itemIndex, (Any*)outResultItem);
		return retval;
	}

	static bool LUA_NATIVE_SCRIPTS_AWARDS_GET_UNLOCK_CLAIM_DATA_(uintptr_t rpcGuid, Hash awardHash, int dataIndex, uintptr_t outUnlockData)
	{
		auto retval = (bool)SCRIPTS::_AWARDS_GET_UNLOCK_CLAIM_DATA((Any*)rpcGuid, awardHash, dataIndex, (Any*)outUnlockData);
		return retval;
	}

	static bool LUA_NATIVE_SCRIPTS_LOOT_GET_RESULT_ITEM_(uintptr_t rpcGuid, int itemIndex, uintptr_t outResultItem)
	{
		auto retval = (bool)SCRIPTS::_LOOT_GET_RESULT_ITEM((Any*)rpcGuid, itemIndex, (Any*)outResultItem);
		return retval;
	}

	static bool LUA_NATIVE_SCRIPTS_LOOT_GET_LOOT_CLAIM_DATA_(uintptr_t rpcGuid, int dataIndex, uintptr_t outLootData)
	{
		auto retval = (bool)SCRIPTS::_LOOT_GET_LOOT_CLAIM_DATA((Any*)rpcGuid, dataIndex, (Any*)outLootData);
		return retval;
	}

	static bool LUA_NATIVE_SCRIPTS_STORE_GLOBAL_BLOCK_(int index)
	{
		auto retval = (bool)SCRIPTS::_STORE_GLOBAL_BLOCK(index);
		return retval;
	}

	static bool LUA_NATIVE_SCRIPTS_RESTORE_GLOBAL_BLOCK_(int index)
	{
		auto retval = (bool)SCRIPTS::_RESTORE_GLOBAL_BLOCK(index);
		return retval;
	}

	static bool LUA_NATIVE_SCRIPTS_DOES_COMPRESSED_GLOBAL_BLOCK_BUFFER_EXIST_(int index)
	{
		auto retval = (bool)SCRIPTS::_DOES_COMPRESSED_GLOBAL_BLOCK_BUFFER_EXIST(index);
		return retval;
	}

	static void LUA_NATIVE_SCRIPTS_SET_GLOBAL_BLOCK_CAN_BE_ACCESSED_(int index, bool toggle)
	{
		SCRIPTS::_SET_GLOBAL_BLOCK_CAN_BE_ACCESSED(index, toggle);
	}

	static bool LUA_NATIVE_SCRIPTS_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED_(int index)
	{
		auto retval = (bool)SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(index);
		return retval;
	}

	static void LUA_NATIVE_SCRIPTS_SET_ALL_GLOBAL_BLOCKS_HAVE_BEEN_LOADED_(bool toggle)
	{
		SCRIPTS::_SET_ALL_GLOBAL_BLOCKS_HAVE_BEEN_LOADED(toggle);
	}

	static bool LUA_NATIVE_SCRIPTS_HAVE_ALL_CHILD_SCRIPTS_TERMINATED(int p0)
	{
		auto retval = (bool)SCRIPTS::HAVE_ALL_CHILD_SCRIPTS_TERMINATED(p0);
		return retval;
	}

	static int LUA_NATIVE_SCRIPTS_START_NEW_SCRIPT(sol::stack_object pScriptName, int stackSize)
	{
		auto retval = SCRIPTS::START_NEW_SCRIPT(pScriptName.is<const char*>() ? pScriptName.as<const char*>() : nullptr, stackSize);
		return retval;
	}

	static int LUA_NATIVE_SCRIPTS_START_NEW_SCRIPT_WITH_ARGS(sol::stack_object pScriptName, uintptr_t args, int argCount, int stackSize)
	{
		auto retval = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(pScriptName.is<const char*>() ? pScriptName.as<const char*>() : nullptr, (Any*)args, argCount, stackSize);
		return retval;
	}

	static int LUA_NATIVE_SCRIPTS_START_NEW_SCRIPT_WITH_NAME_HASH(Hash scriptHash, int stackSize)
	{
		auto retval = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH(scriptHash, stackSize);
		return retval;
	}

	static int LUA_NATIVE_SCRIPTS_START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(Hash scriptHash, uintptr_t args, int argCount, int stackSize)
	{
		auto retval = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(scriptHash, (Any*)args, argCount, stackSize);
		return retval;
	}

	void init_native_binding_SCRIPTS(sol::state& L)
	{
		auto SCRIPTS = L["SCRIPTS"].get_or_create<sol::table>();
		SCRIPTS.set_function("SET_PLAYER_BIT_AT_INDEX_", LUA_NATIVE_SCRIPTS_SET_PLAYER_BIT_AT_INDEX_);
		SCRIPTS.set_function("CLEAR_PLAYER_BIT_AT_INDEX_", LUA_NATIVE_SCRIPTS_CLEAR_PLAYER_BIT_AT_INDEX_);
		SCRIPTS.set_function("0xE4ABE20DCE7C7CFE_", LUA_NATIVE_SCRIPTS_0xE4ABE20DCE7C7CFE_);
		SCRIPTS.set_function("0xFFDDF802279BE128_", LUA_NATIVE_SCRIPTS_0xFFDDF802279BE128_);
		SCRIPTS.set_function("0x64F765D9A1F8F02C_", LUA_NATIVE_SCRIPTS_0x64F765D9A1F8F02C_);
		SCRIPTS.set_function("SET_ALL_PLAYER_BITS_", LUA_NATIVE_SCRIPTS_SET_ALL_PLAYER_BITS_);
		SCRIPTS.set_function("CLEAR_ALL_PLAYER_BITS_", LUA_NATIVE_SCRIPTS_CLEAR_ALL_PLAYER_BITS_);
		SCRIPTS.set_function("IS_PLAYER_BIT_SET_AT_INDEX_", LUA_NATIVE_SCRIPTS_IS_PLAYER_BIT_SET_AT_INDEX_);
		SCRIPTS.set_function("IS_ANY_PLAYER_BIT_SET_", LUA_NATIVE_SCRIPTS_IS_ANY_PLAYER_BIT_SET_);
		SCRIPTS.set_function("GET_BLOCK_OF_PLAYER_BITS", LUA_NATIVE_SCRIPTS_GET_BLOCK_OF_PLAYER_BITS);
		SCRIPTS.set_function("SET_BLOCK_OF_PLAYER_BITS", LUA_NATIVE_SCRIPTS_SET_BLOCK_OF_PLAYER_BITS);
		SCRIPTS.set_function("COUNT_PLAYER_BITS", LUA_NATIVE_SCRIPTS_COUNT_PLAYER_BITS);
		SCRIPTS.set_function("0x1BDB5A07307F6929_", LUA_NATIVE_SCRIPTS_0x1BDB5A07307F6929_);
		SCRIPTS.set_function("0x1C5EB3C27F7508CB_", LUA_NATIVE_SCRIPTS_0x1C5EB3C27F7508CB_);
		SCRIPTS.set_function("0x42A429CDFED6D99D_", LUA_NATIVE_SCRIPTS_0x42A429CDFED6D99D_);
		SCRIPTS.set_function("0x5827BE85A87B073D_", LUA_NATIVE_SCRIPTS_0x5827BE85A87B073D_);
		SCRIPTS.set_function("0x0A79C81C418F5D38_", LUA_NATIVE_SCRIPTS_0x0A79C81C418F5D38_);
		SCRIPTS.set_function("0xA88E1D7FA1E20080_", LUA_NATIVE_SCRIPTS_0xA88E1D7FA1E20080_);
		SCRIPTS.set_function("COUNT_PARTICIPANT_BITS", LUA_NATIVE_SCRIPTS_COUNT_PARTICIPANT_BITS);
		SCRIPTS.set_function("REQUEST_SCRIPT", LUA_NATIVE_SCRIPTS_REQUEST_SCRIPT);
		SCRIPTS.set_function("SET_SCRIPT_AS_NO_LONGER_NEEDED", LUA_NATIVE_SCRIPTS_SET_SCRIPT_AS_NO_LONGER_NEEDED);
		SCRIPTS.set_function("HAS_SCRIPT_LOADED", LUA_NATIVE_SCRIPTS_HAS_SCRIPT_LOADED);
		SCRIPTS.set_function("DOES_SCRIPT_EXIST", LUA_NATIVE_SCRIPTS_DOES_SCRIPT_EXIST);
		SCRIPTS.set_function("REQUEST_SCRIPT_WITH_NAME_HASH", LUA_NATIVE_SCRIPTS_REQUEST_SCRIPT_WITH_NAME_HASH);
		SCRIPTS.set_function("SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED", LUA_NATIVE_SCRIPTS_SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED);
		SCRIPTS.set_function("HAS_SCRIPT_WITH_NAME_HASH_LOADED", LUA_NATIVE_SCRIPTS_HAS_SCRIPT_WITH_NAME_HASH_LOADED);
		SCRIPTS.set_function("DOES_SCRIPT_WITH_NAME_HASH_EXIST", LUA_NATIVE_SCRIPTS_DOES_SCRIPT_WITH_NAME_HASH_EXIST);
		SCRIPTS.set_function("TERMINATE_THREAD", LUA_NATIVE_SCRIPTS_TERMINATE_THREAD);
		SCRIPTS.set_function("IS_THREAD_ACTIVE", LUA_NATIVE_SCRIPTS_IS_THREAD_ACTIVE);
		SCRIPTS.set_function("DOES_THREAD_EXIST", LUA_NATIVE_SCRIPTS_DOES_THREAD_EXIST);
		SCRIPTS.set_function("GET_THREAD_EXISTENCE_DETAILS", LUA_NATIVE_SCRIPTS_GET_THREAD_EXISTENCE_DETAILS);
		SCRIPTS.set_function("GET_HASH_OF_THREAD_", LUA_NATIVE_SCRIPTS_GET_HASH_OF_THREAD_);
		SCRIPTS.set_function("SCRIPT_THREAD_ITERATOR_RESET", LUA_NATIVE_SCRIPTS_SCRIPT_THREAD_ITERATOR_RESET);
		SCRIPTS.set_function("SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID", LUA_NATIVE_SCRIPTS_SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID);
		SCRIPTS.set_function("IS_BACKGROUND_SCRIPT_", LUA_NATIVE_SCRIPTS_IS_BACKGROUND_SCRIPT_);
		SCRIPTS.set_function("GET_ID_OF_THIS_THREAD", LUA_NATIVE_SCRIPTS_GET_ID_OF_THIS_THREAD);
		SCRIPTS.set_function("TERMINATE_THIS_THREAD", LUA_NATIVE_SCRIPTS_TERMINATE_THIS_THREAD);
		SCRIPTS.set_function("GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH", LUA_NATIVE_SCRIPTS_GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH);
		SCRIPTS.set_function("REQUEST_THREAD_EXIT_", LUA_NATIVE_SCRIPTS_REQUEST_THREAD_EXIT_);
		SCRIPTS.set_function("REQUEST_THREAD_EXIT_FOR_ALL_THREADS_WITH_THIS_NAME_", LUA_NATIVE_SCRIPTS_REQUEST_THREAD_EXIT_FOR_ALL_THREADS_WITH_THIS_NAME_);
		SCRIPTS.set_function("IS_THREAD_EXIT_REQUESTED", LUA_NATIVE_SCRIPTS_IS_THREAD_EXIT_REQUESTED);
		SCRIPTS.set_function("IS_THREAD_EXIT_REQUESTED_FOR_THREAD_WITH_THIS_ID_", LUA_NATIVE_SCRIPTS_IS_THREAD_EXIT_REQUESTED_FOR_THREAD_WITH_THIS_ID_);
		SCRIPTS.set_function("GET_THREAD_EXIT_REASON_", LUA_NATIVE_SCRIPTS_GET_THREAD_EXIT_REASON_);
		SCRIPTS.set_function("GET_HASH_OF_THIS_SCRIPT_NAME", LUA_NATIVE_SCRIPTS_GET_HASH_OF_THIS_SCRIPT_NAME);
		SCRIPTS.set_function("GET_NUMBER_OF_EVENTS", LUA_NATIVE_SCRIPTS_GET_NUMBER_OF_EVENTS);
		SCRIPTS.set_function("GET_EVENT_EXISTS", LUA_NATIVE_SCRIPTS_GET_EVENT_EXISTS);
		SCRIPTS.set_function("GET_EVENT_AT_INDEX", LUA_NATIVE_SCRIPTS_GET_EVENT_AT_INDEX);
		SCRIPTS.set_function("GET_EVENT_DATA", LUA_NATIVE_SCRIPTS_GET_EVENT_DATA);
		SCRIPTS.set_function("SET_EVENT_FLAG_FOR_DELETION", LUA_NATIVE_SCRIPTS_SET_EVENT_FLAG_FOR_DELETION);
		SCRIPTS.set_function("TRIGGER_SCRIPT_EVENT", LUA_NATIVE_SCRIPTS_TRIGGER_SCRIPT_EVENT);
		SCRIPTS.set_function("TRIGGER_SCRIPT_EVENT_2_", LUA_NATIVE_SCRIPTS_TRIGGER_SCRIPT_EVENT_2_);
		SCRIPTS.set_function("0xE7282390542F570D_", LUA_NATIVE_SCRIPTS_0xE7282390542F570D_);
		SCRIPTS.set_function("0x11B0A0B282FA9B10_", LUA_NATIVE_SCRIPTS_0x11B0A0B282FA9B10_);
		SCRIPTS.set_function("0x6F700A4BF7C3331B_", LUA_NATIVE_SCRIPTS_0x6F700A4BF7C3331B_);
		SCRIPTS.set_function("0xF9E951A1E5517C06_", LUA_NATIVE_SCRIPTS_0xF9E951A1E5517C06_);
		SCRIPTS.set_function("0x76CBCD9EADC00955_", LUA_NATIVE_SCRIPTS_0x76CBCD9EADC00955_);
		SCRIPTS.set_function("SHUTDOWN_LOADING_SCREEN", LUA_NATIVE_SCRIPTS_SHUTDOWN_LOADING_SCREEN);
		SCRIPTS.set_function("SET_NO_LOADING_SCREEN", LUA_NATIVE_SCRIPTS_SET_NO_LOADING_SCREEN);
		SCRIPTS.set_function("GET_NO_LOADING_SCREEN", LUA_NATIVE_SCRIPTS_GET_NO_LOADING_SCREEN);
		SCRIPTS.set_function("DISPLAY_LOADING_SCREENS_", LUA_NATIVE_SCRIPTS_DISPLAY_LOADING_SCREENS_);
		SCRIPTS.set_function("0x29FB4CE89472C3CB_", LUA_NATIVE_SCRIPTS_0x29FB4CE89472C3CB_);
		SCRIPTS.set_function("STOP_DISPLAYING_MP_TRANSITION_LOADING_SCREENS", LUA_NATIVE_SCRIPTS_STOP_DISPLAYING_MP_TRANSITION_LOADING_SCREENS);
		SCRIPTS.set_function("IS_LOADING_SCREEN_VISIBLE", LUA_NATIVE_SCRIPTS_IS_LOADING_SCREEN_VISIBLE);
		SCRIPTS.set_function("BAIL_TO_LANDING_PAGE", LUA_NATIVE_SCRIPTS_BAIL_TO_LANDING_PAGE);
		SCRIPTS.set_function("BAIL_WITH_PASS_THROUGH_PARAMS", LUA_NATIVE_SCRIPTS_BAIL_WITH_PASS_THROUGH_PARAMS);
		SCRIPTS.set_function("BG_IS_EXITFLAG_SET", LUA_NATIVE_SCRIPTS_BG_IS_EXITFLAG_SET);
		SCRIPTS.set_function("BG_SET_EXITFLAG_RESPONSE", LUA_NATIVE_SCRIPTS_BG_SET_EXITFLAG_RESPONSE);
		SCRIPTS.set_function("BG_START_CONTEXT_HASH", LUA_NATIVE_SCRIPTS_BG_START_CONTEXT_HASH);
		SCRIPTS.set_function("BG_END_CONTEXT_HASH", LUA_NATIVE_SCRIPTS_BG_END_CONTEXT_HASH);
		SCRIPTS.set_function("BG_START_CONTEXT", LUA_NATIVE_SCRIPTS_BG_START_CONTEXT);
		SCRIPTS.set_function("BG_END_CONTEXT", LUA_NATIVE_SCRIPTS_BG_END_CONTEXT);
		SCRIPTS.set_function("BG_DOES_LAUNCH_PARAM_EXIST", LUA_NATIVE_SCRIPTS_BG_DOES_LAUNCH_PARAM_EXIST);
		SCRIPTS.set_function("BG_GET_LAUNCH_PARAM_VALUE", LUA_NATIVE_SCRIPTS_BG_GET_LAUNCH_PARAM_VALUE);
		SCRIPTS.set_function("BG_GET_SCRIPT_ID_FROM_NAME_HASH", LUA_NATIVE_SCRIPTS_BG_GET_SCRIPT_ID_FROM_NAME_HASH);
		SCRIPTS.set_function("BG_RELOAD_ALL_BACKGROUND_SCRIPTS_", LUA_NATIVE_SCRIPTS_BG_RELOAD_ALL_BACKGROUND_SCRIPTS_);
		SCRIPTS.set_function("ACTIVATE_GOAL_CONTEXT_", LUA_NATIVE_SCRIPTS_ACTIVATE_GOAL_CONTEXT_);
		SCRIPTS.set_function("DEACTIVATE_GOAL_CONTEXT_", LUA_NATIVE_SCRIPTS_DEACTIVATE_GOAL_CONTEXT_);
		SCRIPTS.set_function("IS_GOAL_CONTEXT_ACTIVE_", LUA_NATIVE_SCRIPTS_IS_GOAL_CONTEXT_ACTIVE_);
		SCRIPTS.set_function("NET_RPC_GUID_TO_STRING_", LUA_NATIVE_SCRIPTS_NET_RPC_GUID_TO_STRING_);
		SCRIPTS.set_function("AWARDS_GET_RESULT_ITEM", LUA_NATIVE_SCRIPTS_AWARDS_GET_RESULT_ITEM);
		SCRIPTS.set_function("AWARDS_GET_UNLOCK_CLAIM_DATA_", LUA_NATIVE_SCRIPTS_AWARDS_GET_UNLOCK_CLAIM_DATA_);
		SCRIPTS.set_function("LOOT_GET_RESULT_ITEM_", LUA_NATIVE_SCRIPTS_LOOT_GET_RESULT_ITEM_);
		SCRIPTS.set_function("LOOT_GET_LOOT_CLAIM_DATA_", LUA_NATIVE_SCRIPTS_LOOT_GET_LOOT_CLAIM_DATA_);
		SCRIPTS.set_function("STORE_GLOBAL_BLOCK_", LUA_NATIVE_SCRIPTS_STORE_GLOBAL_BLOCK_);
		SCRIPTS.set_function("RESTORE_GLOBAL_BLOCK_", LUA_NATIVE_SCRIPTS_RESTORE_GLOBAL_BLOCK_);
		SCRIPTS.set_function("DOES_COMPRESSED_GLOBAL_BLOCK_BUFFER_EXIST_", LUA_NATIVE_SCRIPTS_DOES_COMPRESSED_GLOBAL_BLOCK_BUFFER_EXIST_);
		SCRIPTS.set_function("SET_GLOBAL_BLOCK_CAN_BE_ACCESSED_", LUA_NATIVE_SCRIPTS_SET_GLOBAL_BLOCK_CAN_BE_ACCESSED_);
		SCRIPTS.set_function("GET_GLOBAL_BLOCK_CAN_BE_ACCESSED_", LUA_NATIVE_SCRIPTS_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED_);
		SCRIPTS.set_function("SET_ALL_GLOBAL_BLOCKS_HAVE_BEEN_LOADED_", LUA_NATIVE_SCRIPTS_SET_ALL_GLOBAL_BLOCKS_HAVE_BEEN_LOADED_);
		SCRIPTS.set_function("HAVE_ALL_CHILD_SCRIPTS_TERMINATED", LUA_NATIVE_SCRIPTS_HAVE_ALL_CHILD_SCRIPTS_TERMINATED);
		SCRIPTS.set_function("START_NEW_SCRIPT", LUA_NATIVE_SCRIPTS_START_NEW_SCRIPT);
		SCRIPTS.set_function("START_NEW_SCRIPT_WITH_ARGS", LUA_NATIVE_SCRIPTS_START_NEW_SCRIPT_WITH_ARGS);
		SCRIPTS.set_function("START_NEW_SCRIPT_WITH_NAME_HASH", LUA_NATIVE_SCRIPTS_START_NEW_SCRIPT_WITH_NAME_HASH);
		SCRIPTS.set_function("START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS", LUA_NATIVE_SCRIPTS_START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS);
	}
}
