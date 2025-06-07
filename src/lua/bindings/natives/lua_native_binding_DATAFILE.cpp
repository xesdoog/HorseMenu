#include "lua_native_binding.hpp"
#include "game/rdr/Natives.hpp"

namespace Lua::native
{
	static void LUA_NATIVE_DATAFILE_DATAFILE_WATCH_REQUEST_ID(int nCloudRequestID)
	{
		DATAFILE::DATAFILE_WATCH_REQUEST_ID(nCloudRequestID);
	}

	static bool LUA_NATIVE_DATAFILE_DATAFILE_HAS_LOADED_FILE_DATA(int nCloudRequestID)
	{
		auto retval = (bool)DATAFILE::DATAFILE_HAS_LOADED_FILE_DATA(nCloudRequestID);
		return retval;
	}

	static bool LUA_NATIVE_DATAFILE_DATAFILE_HAS_VALID_FILE_DATA(int nCloudRequestID)
	{
		auto retval = (bool)DATAFILE::DATAFILE_HAS_VALID_FILE_DATA(nCloudRequestID);
		return retval;
	}

	static bool LUA_NATIVE_DATAFILE_DATAFILE_SELECT_ACTIVE_FILE(int nCloudRequestID, int datafileIndex)
	{
		auto retval = (bool)DATAFILE::DATAFILE_SELECT_ACTIVE_FILE(nCloudRequestID, datafileIndex);
		return retval;
	}

	static bool LUA_NATIVE_DATAFILE_DATAFILE_DELETE_REQUESTED_FILE(int nCloudRequestID)
	{
		auto retval = (bool)DATAFILE::DATAFILE_DELETE_REQUESTED_FILE(nCloudRequestID);
		return retval;
	}

	static Any LUA_NATIVE_DATAFILE_UGC2_SET_PLAYER_DATA(Any p0, Any p1, Any p2, Any p3)
	{
		auto retval = DATAFILE::UGC2_SET_PLAYER_DATA(p0, p1, p2, p3);
		return retval;
	}

	static Any LUA_NATIVE_DATAFILE_DATAFILE_UGC_SELECT_DATA(Any ugcRequestId, int index, Any p2)
	{
		auto retval = DATAFILE::DATAFILE_UGC_SELECT_DATA(ugcRequestId, index, p2);
		return retval;
	}

	static void LUA_NATIVE_DATAFILE_DATAFILE_CREATE(int datafileIndex)
	{
		DATAFILE::DATAFILE_CREATE(datafileIndex);
	}

	static void LUA_NATIVE_DATAFILE_DATAFILE_DELETE(int datafileIndex)
	{
		DATAFILE::DATAFILE_DELETE(datafileIndex);
	}

	static void* LUA_NATIVE_DATAFILE_DATAFILE_GET_FILE_DICT(int datafileIndex)
	{
		auto retval = DATAFILE::DATAFILE_GET_FILE_DICT(datafileIndex);
		return retval;
	}

	static bool LUA_NATIVE_DATAFILE_DATADICT_IS_DICT_VALID(uintptr_t fileDict)
	{
		auto retval = (bool)DATAFILE::DATADICT_IS_DICT_VALID((Any*)fileDict);
		return retval;
	}

	static bool LUA_NATIVE_DATAFILE_DATADICT_IS_ARRAY_VALID(uintptr_t fileDict)
	{
		auto retval = (bool)DATAFILE::DATADICT_IS_ARRAY_VALID((Any*)fileDict);
		return retval;
	}

	static void LUA_NATIVE_DATAFILE_DATADICT_SET_INT(uintptr_t dict, sol::stack_object name, int value)
	{
		DATAFILE::DATADICT_SET_INT((Any*)dict, name.is<const char*>() ? name.as<const char*>() : nullptr, value);
	}

	static bool LUA_NATIVE_DATAFILE_DATADICT_GET_BOOL(uintptr_t dict, sol::stack_object name)
	{
		auto retval = (bool)DATAFILE::DATADICT_GET_BOOL((Any*)dict, name.is<const char*>() ? name.as<const char*>() : nullptr);
		return retval;
	}

	static int LUA_NATIVE_DATAFILE_DATADICT_GET_INT(uintptr_t dict, sol::stack_object name)
	{
		auto retval = DATAFILE::DATADICT_GET_INT((Any*)dict, name.is<const char*>() ? name.as<const char*>() : nullptr);
		return retval;
	}

	static float LUA_NATIVE_DATAFILE_DATADICT_GET_FLOAT(uintptr_t dict, sol::stack_object name)
	{
		auto retval = DATAFILE::DATADICT_GET_FLOAT((Any*)dict, name.is<const char*>() ? name.as<const char*>() : nullptr);
		return retval;
	}

	static const char* LUA_NATIVE_DATAFILE_DATADICT_GET_STRING(uintptr_t dict, sol::stack_object name)
	{
		auto retval = DATAFILE::DATADICT_GET_STRING((Any*)dict, name.is<const char*>() ? name.as<const char*>() : nullptr);
		return retval;
	}

	static Vector3 LUA_NATIVE_DATAFILE_DATADICT_GET_VECTOR(uintptr_t dict, sol::stack_object name)
	{
		auto retval = DATAFILE::DATADICT_GET_VECTOR((Any*)dict, name.is<const char*>() ? name.as<const char*>() : nullptr);
		return retval;
	}

	static void* LUA_NATIVE_DATAFILE_DATADICT_GET_DICT(uintptr_t parent, sol::stack_object name)
	{
		auto retval = DATAFILE::DATADICT_GET_DICT((Any*)parent, name.is<const char*>() ? name.as<const char*>() : nullptr);
		return retval;
	}

	static void* LUA_NATIVE_DATAFILE_DATADICT_GET_ARRAY(uintptr_t parent, sol::stack_object name)
	{
		auto retval = DATAFILE::DATADICT_GET_ARRAY((Any*)parent, name.is<const char*>() ? name.as<const char*>() : nullptr);
		return retval;
	}

	static int LUA_NATIVE_DATAFILE_DATADICT_GET_TYPE(uintptr_t dict, sol::stack_object name)
	{
		auto retval = DATAFILE::DATADICT_GET_TYPE((Any*)dict, name.is<const char*>() ? name.as<const char*>() : nullptr);
		return retval;
	}

	static void LUA_NATIVE_DATAFILE_0xBC0DF006A4952C68_(Any p0, Any p1, Any p2)
	{
		DATAFILE::_0xBC0DF006A4952C68(p0, p1, p2);
	}

	static void LUA_NATIVE_DATAFILE_0x9F130129EBC31B34_(Any p0, Any p1, Any p2)
	{
		DATAFILE::_0x9F130129EBC31B34(p0, p1, p2);
	}

	static void LUA_NATIVE_DATAFILE_0x277251C161B4C3F4_(Any p0, Any p1, Any p2)
	{
		DATAFILE::_0x277251C161B4C3F4(p0, p1, p2);
	}

	static void LUA_NATIVE_DATAFILE_0x1C65CC931C0F946F_(Any p0, Any p1, Any p2)
	{
		DATAFILE::_0x1C65CC931C0F946F(p0, p1, p2);
	}

	static void LUA_NATIVE_DATAFILE_0x7681B677400C7071_(Any p0, Any p1, Any p2, Any p3, Any p4)
	{
		DATAFILE::_0x7681B677400C7071(p0, p1, p2, p3, p4);
	}

	static bool LUA_NATIVE_DATAFILE_DATAARRAY_GET_BOOL(uintptr_t arr, int index)
	{
		auto retval = (bool)DATAFILE::DATAARRAY_GET_BOOL((Any*)arr, index);
		return retval;
	}

	static int LUA_NATIVE_DATAFILE_DATAARRAY_GET_INT(uintptr_t arr, int index)
	{
		auto retval = DATAFILE::DATAARRAY_GET_INT((Any*)arr, index);
		return retval;
	}

	static float LUA_NATIVE_DATAFILE_DATAARRAY_GET_FLOAT(uintptr_t arr, int index)
	{
		auto retval = DATAFILE::DATAARRAY_GET_FLOAT((Any*)arr, index);
		return retval;
	}

	static const char* LUA_NATIVE_DATAFILE_DATAARRAY_GET_STRING(uintptr_t arr, int index)
	{
		auto retval = DATAFILE::DATAARRAY_GET_STRING((Any*)arr, index);
		return retval;
	}

	static Vector3 LUA_NATIVE_DATAFILE_DATAARRAY_GET_VECTOR(uintptr_t arr, int index)
	{
		auto retval = DATAFILE::DATAARRAY_GET_VECTOR((Any*)arr, index);
		return retval;
	}

	static void* LUA_NATIVE_DATAFILE_DATAARRAY_GET_DICT(uintptr_t parent, int index)
	{
		auto retval = DATAFILE::DATAARRAY_GET_DICT((Any*)parent, index);
		return retval;
	}

	static int LUA_NATIVE_DATAFILE_DATAARRAY_GET_COUNT(uintptr_t arr)
	{
		auto retval = DATAFILE::DATAARRAY_GET_COUNT((Any*)arr);
		return retval;
	}

	static int LUA_NATIVE_DATAFILE_DATAARRAY_GET_TYPE(uintptr_t arr, int index)
	{
		auto retval = DATAFILE::DATAARRAY_GET_TYPE((Any*)arr, index);
		return retval;
	}

	static Any LUA_NATIVE_DATAFILE_0x4F9E3ED7617123AC_(Any p0)
	{
		auto retval = DATAFILE::_0x4F9E3ED7617123AC(p0);
		return retval;
	}

	static Any LUA_NATIVE_DATAFILE_0xCA56DD6AB7A39F64_(Any p0)
	{
		auto retval = DATAFILE::_0xCA56DD6AB7A39F64(p0);
		return retval;
	}

	static int LUA_NATIVE_DATAFILE_PARSEDDATA_LOAD_FILE_HASH_(Hash p0)
	{
		auto retval = DATAFILE::_PARSEDDATA_LOAD_FILE_HASH(p0);
		return retval;
	}

	static void LUA_NATIVE_DATAFILE_PARSEDDATA_UNLOAD_FILE_(int fileHandle)
	{
		DATAFILE::_PARSEDDATA_UNLOAD_FILE(fileHandle);
	}

	static bool LUA_NATIVE_DATAFILE_PARSEDDATA_IS_FILE_VALID(int fileHandle)
	{
		auto retval = (bool)DATAFILE::PARSEDDATA_IS_FILE_VALID(fileHandle);
		return retval;
	}

	static bool LUA_NATIVE_DATAFILE_PARSEDDATA_IS_FILE_LOADED(int fileHandle)
	{
		auto retval = (bool)DATAFILE::PARSEDDATA_IS_FILE_LOADED(fileHandle);
		return retval;
	}

	static void LUA_NATIVE_DATAFILE_0x3168BA5D6DECE323_()
	{
		DATAFILE::_0x3168BA5D6DECE323();
	}

	static Any LUA_NATIVE_DATAFILE_PARSEDDATA_REGISTER_QUERY_(Any p0, Any p1, Any p2)
	{
		auto retval = DATAFILE::_PARSEDDATA_REGISTER_QUERY(p0, p1, p2);
		return retval;
	}

	static std::tuple<bool, int> LUA_NATIVE_DATAFILE_PARSEDDATA_RQ_FILLOUT_NODE(int p0, uintptr_t p1)
	{
		std::tuple<bool, int> return_values;
		std::get<0>(return_values) = (bool)DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&p0, (Any*)p1);
		std::get<1>(return_values) = p0;

		return return_values;
	}

	static Any LUA_NATIVE_DATAFILE_PARSEDDATA_RQ_GET_NUM_NODES_(Any p0)
	{
		auto retval = DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(p0);
		return retval;
	}

	static int LUA_NATIVE_DATAFILE_0xE13634BB6BAF0734_(int p0, int p1)
	{
		auto retval = DATAFILE::_0xE13634BB6BAF0734(p0, p1);
		return retval;
	}

	static Any LUA_NATIVE_DATAFILE_PARSEDDATA_GET_NUM_CHILDREN_(Any p0, Any p1)
	{
		auto retval = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(p0, p1);
		return retval;
	}

	static std::tuple<bool, Hash> LUA_NATIVE_DATAFILE_PARSEDDATA_RQ_FILLOUT_HASH(Hash p0, uintptr_t p1)
	{
		std::tuple<bool, Hash> return_values;
		std::get<0>(return_values) = (bool)DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&p0, (Any*)p1);
		std::get<1>(return_values) = p0;

		return return_values;
	}

	static std::tuple<bool, char> LUA_NATIVE_DATAFILE_PARSEDDATA_RQ_FILLOUT_STRING_63_(char p0, uintptr_t p1)
	{
		std::tuple<bool, char> return_values;
		std::get<0>(return_values) = (bool)DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&p0, (Any*)p1);
		std::get<1>(return_values) = p0;

		return return_values;
	}

	static std::tuple<bool, char> LUA_NATIVE_DATAFILE_PARSEDDATA_RQ_FILLOUT_STRING_127(char p0, uintptr_t p1)
	{
		std::tuple<bool, char> return_values;
		std::get<0>(return_values) = (bool)DATAFILE::PARSEDDATA_RQ_FILLOUT_STRING_127(&p0, (Any*)p1);
		std::get<1>(return_values) = p0;

		return return_values;
	}

	static std::tuple<bool, Vector3> LUA_NATIVE_DATAFILE_PARSEDDATA_RQ_FILLOUT_VECTOR_(Vector3 p0, uintptr_t p1)
	{
		std::tuple<bool, Vector3> return_values;
		std::get<0>(return_values) = (bool)DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(&p0, (Any*)p1);
		std::get<1>(return_values) = p0;

		return return_values;
	}

	static std::tuple<bool, float> LUA_NATIVE_DATAFILE_PARSEDDATA_RQ_FILLOUT_FLOAT_(float p0, uintptr_t p1)
	{
		std::tuple<bool, float> return_values;
		std::get<0>(return_values) = (bool)DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&p0, (Any*)p1);
		std::get<1>(return_values) = p0;

		return return_values;
	}

	static std::tuple<bool, int> LUA_NATIVE_DATAFILE_PARSEDDATA_RQ_FILLOUT_INT_(int p0, uintptr_t p1)
	{
		std::tuple<bool, int> return_values;
		std::get<0>(return_values) = (bool)DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&p0, (Any*)p1);
		std::get<1>(return_values) = p0;

		return return_values;
	}

	static std::tuple<bool, bool> LUA_NATIVE_DATAFILE_PARSEDDATA_RQ_FILLOUT_BOOL_(bool p0, uintptr_t p1)
	{
		std::tuple<bool, bool> return_values;
		std::get<0>(return_values) = (bool)DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL((BOOL*)&p0, (Any*)p1);
		std::get<1>(return_values) = p0;

		return return_values;
	}

	static void LUA_NATIVE_DATAFILE_PARSEDDATA_GET_FILE_(uintptr_t p0)
	{
		DATAFILE::_PARSEDDATA_GET_FILE((Any*)p0);
	}

	static bool LUA_NATIVE_DATAFILE_PARSEDDATA_GET_ENTRIES_(uintptr_t p0)
	{
		auto retval = (bool)DATAFILE::_PARSEDDATA_GET_ENTRIES((Any*)p0);
		return retval;
	}

	static bool LUA_NATIVE_DATAFILE_PARSEDDATA_GET_FLOAT_(uintptr_t p0, uintptr_t p1, Hash p2)
	{
		auto retval = (bool)DATAFILE::_PARSEDDATA_GET_FLOAT((Any*)p0, (Any*)p1, p2);
		return retval;
	}

	static bool LUA_NATIVE_DATAFILE_PARSEDDATA_GET_INT_(uintptr_t p0, uintptr_t p1, Hash p2)
	{
		auto retval = (bool)DATAFILE::_PARSEDDATA_GET_INT((Any*)p0, (Any*)p1, p2);
		return retval;
	}

	static bool LUA_NATIVE_DATAFILE_PARSEDDATA_GET_SECTION_(uintptr_t p0, uintptr_t p1, Hash section)
	{
		auto retval = (bool)DATAFILE::_PARSEDDATA_GET_SECTION((Any*)p0, (Any*)p1, section);
		return retval;
	}

	static std::tuple<bool, bool> LUA_NATIVE_DATAFILE_PARSEDDATA_GET_BOOL_(bool p0, uintptr_t p1, Hash p2)
	{
		std::tuple<bool, bool> return_values;
		std::get<0>(return_values) = (bool)DATAFILE::_PARSEDDATA_GET_BOOL((BOOL*)&p0, (Any*)p1, p2);
		std::get<1>(return_values) = p0;

		return return_values;
	}

	void init_native_binding_DATAFILE(sol::state& L)
	{
		auto DATAFILE = L["DATAFILE"].get_or_create<sol::table>();
		DATAFILE.set_function("DATAFILE_WATCH_REQUEST_ID", LUA_NATIVE_DATAFILE_DATAFILE_WATCH_REQUEST_ID);
		DATAFILE.set_function("DATAFILE_HAS_LOADED_FILE_DATA", LUA_NATIVE_DATAFILE_DATAFILE_HAS_LOADED_FILE_DATA);
		DATAFILE.set_function("DATAFILE_HAS_VALID_FILE_DATA", LUA_NATIVE_DATAFILE_DATAFILE_HAS_VALID_FILE_DATA);
		DATAFILE.set_function("DATAFILE_SELECT_ACTIVE_FILE", LUA_NATIVE_DATAFILE_DATAFILE_SELECT_ACTIVE_FILE);
		DATAFILE.set_function("DATAFILE_DELETE_REQUESTED_FILE", LUA_NATIVE_DATAFILE_DATAFILE_DELETE_REQUESTED_FILE);
		DATAFILE.set_function("UGC2_SET_PLAYER_DATA", LUA_NATIVE_DATAFILE_UGC2_SET_PLAYER_DATA);
		DATAFILE.set_function("DATAFILE_UGC_SELECT_DATA", LUA_NATIVE_DATAFILE_DATAFILE_UGC_SELECT_DATA);
		DATAFILE.set_function("DATAFILE_CREATE", LUA_NATIVE_DATAFILE_DATAFILE_CREATE);
		DATAFILE.set_function("DATAFILE_DELETE", LUA_NATIVE_DATAFILE_DATAFILE_DELETE);
		DATAFILE.set_function("DATAFILE_GET_FILE_DICT", LUA_NATIVE_DATAFILE_DATAFILE_GET_FILE_DICT);
		DATAFILE.set_function("DATADICT_IS_DICT_VALID", LUA_NATIVE_DATAFILE_DATADICT_IS_DICT_VALID);
		DATAFILE.set_function("DATADICT_IS_ARRAY_VALID", LUA_NATIVE_DATAFILE_DATADICT_IS_ARRAY_VALID);
		DATAFILE.set_function("DATADICT_SET_INT", LUA_NATIVE_DATAFILE_DATADICT_SET_INT);
		DATAFILE.set_function("DATADICT_GET_BOOL", LUA_NATIVE_DATAFILE_DATADICT_GET_BOOL);
		DATAFILE.set_function("DATADICT_GET_INT", LUA_NATIVE_DATAFILE_DATADICT_GET_INT);
		DATAFILE.set_function("DATADICT_GET_FLOAT", LUA_NATIVE_DATAFILE_DATADICT_GET_FLOAT);
		DATAFILE.set_function("DATADICT_GET_STRING", LUA_NATIVE_DATAFILE_DATADICT_GET_STRING);
		DATAFILE.set_function("DATADICT_GET_VECTOR", LUA_NATIVE_DATAFILE_DATADICT_GET_VECTOR);
		DATAFILE.set_function("DATADICT_GET_DICT", LUA_NATIVE_DATAFILE_DATADICT_GET_DICT);
		DATAFILE.set_function("DATADICT_GET_ARRAY", LUA_NATIVE_DATAFILE_DATADICT_GET_ARRAY);
		DATAFILE.set_function("DATADICT_GET_TYPE", LUA_NATIVE_DATAFILE_DATADICT_GET_TYPE);
		DATAFILE.set_function("0xBC0DF006A4952C68_", LUA_NATIVE_DATAFILE_0xBC0DF006A4952C68_);
		DATAFILE.set_function("0x9F130129EBC31B34_", LUA_NATIVE_DATAFILE_0x9F130129EBC31B34_);
		DATAFILE.set_function("0x277251C161B4C3F4_", LUA_NATIVE_DATAFILE_0x277251C161B4C3F4_);
		DATAFILE.set_function("0x1C65CC931C0F946F_", LUA_NATIVE_DATAFILE_0x1C65CC931C0F946F_);
		DATAFILE.set_function("0x7681B677400C7071_", LUA_NATIVE_DATAFILE_0x7681B677400C7071_);
		DATAFILE.set_function("DATAARRAY_GET_BOOL", LUA_NATIVE_DATAFILE_DATAARRAY_GET_BOOL);
		DATAFILE.set_function("DATAARRAY_GET_INT", LUA_NATIVE_DATAFILE_DATAARRAY_GET_INT);
		DATAFILE.set_function("DATAARRAY_GET_FLOAT", LUA_NATIVE_DATAFILE_DATAARRAY_GET_FLOAT);
		DATAFILE.set_function("DATAARRAY_GET_STRING", LUA_NATIVE_DATAFILE_DATAARRAY_GET_STRING);
		DATAFILE.set_function("DATAARRAY_GET_VECTOR", LUA_NATIVE_DATAFILE_DATAARRAY_GET_VECTOR);
		DATAFILE.set_function("DATAARRAY_GET_DICT", LUA_NATIVE_DATAFILE_DATAARRAY_GET_DICT);
		DATAFILE.set_function("DATAARRAY_GET_COUNT", LUA_NATIVE_DATAFILE_DATAARRAY_GET_COUNT);
		DATAFILE.set_function("DATAARRAY_GET_TYPE", LUA_NATIVE_DATAFILE_DATAARRAY_GET_TYPE);
		DATAFILE.set_function("0x4F9E3ED7617123AC_", LUA_NATIVE_DATAFILE_0x4F9E3ED7617123AC_);
		DATAFILE.set_function("0xCA56DD6AB7A39F64_", LUA_NATIVE_DATAFILE_0xCA56DD6AB7A39F64_);
		DATAFILE.set_function("PARSEDDATA_LOAD_FILE_HASH_", LUA_NATIVE_DATAFILE_PARSEDDATA_LOAD_FILE_HASH_);
		DATAFILE.set_function("PARSEDDATA_UNLOAD_FILE_", LUA_NATIVE_DATAFILE_PARSEDDATA_UNLOAD_FILE_);
		DATAFILE.set_function("PARSEDDATA_IS_FILE_VALID", LUA_NATIVE_DATAFILE_PARSEDDATA_IS_FILE_VALID);
		DATAFILE.set_function("PARSEDDATA_IS_FILE_LOADED", LUA_NATIVE_DATAFILE_PARSEDDATA_IS_FILE_LOADED);
		DATAFILE.set_function("0x3168BA5D6DECE323_", LUA_NATIVE_DATAFILE_0x3168BA5D6DECE323_);
		DATAFILE.set_function("PARSEDDATA_REGISTER_QUERY_", LUA_NATIVE_DATAFILE_PARSEDDATA_REGISTER_QUERY_);
		DATAFILE.set_function("PARSEDDATA_RQ_FILLOUT_NODE", LUA_NATIVE_DATAFILE_PARSEDDATA_RQ_FILLOUT_NODE);
		DATAFILE.set_function("PARSEDDATA_RQ_GET_NUM_NODES_", LUA_NATIVE_DATAFILE_PARSEDDATA_RQ_GET_NUM_NODES_);
		DATAFILE.set_function("0xE13634BB6BAF0734_", LUA_NATIVE_DATAFILE_0xE13634BB6BAF0734_);
		DATAFILE.set_function("PARSEDDATA_GET_NUM_CHILDREN_", LUA_NATIVE_DATAFILE_PARSEDDATA_GET_NUM_CHILDREN_);
		DATAFILE.set_function("PARSEDDATA_RQ_FILLOUT_HASH", LUA_NATIVE_DATAFILE_PARSEDDATA_RQ_FILLOUT_HASH);
		DATAFILE.set_function("PARSEDDATA_RQ_FILLOUT_STRING_63_", LUA_NATIVE_DATAFILE_PARSEDDATA_RQ_FILLOUT_STRING_63_);
		DATAFILE.set_function("PARSEDDATA_RQ_FILLOUT_STRING_127", LUA_NATIVE_DATAFILE_PARSEDDATA_RQ_FILLOUT_STRING_127);
		DATAFILE.set_function("PARSEDDATA_RQ_FILLOUT_VECTOR_", LUA_NATIVE_DATAFILE_PARSEDDATA_RQ_FILLOUT_VECTOR_);
		DATAFILE.set_function("PARSEDDATA_RQ_FILLOUT_FLOAT_", LUA_NATIVE_DATAFILE_PARSEDDATA_RQ_FILLOUT_FLOAT_);
		DATAFILE.set_function("PARSEDDATA_RQ_FILLOUT_INT_", LUA_NATIVE_DATAFILE_PARSEDDATA_RQ_FILLOUT_INT_);
		DATAFILE.set_function("PARSEDDATA_RQ_FILLOUT_BOOL_", LUA_NATIVE_DATAFILE_PARSEDDATA_RQ_FILLOUT_BOOL_);
		DATAFILE.set_function("PARSEDDATA_GET_FILE_", LUA_NATIVE_DATAFILE_PARSEDDATA_GET_FILE_);
		DATAFILE.set_function("PARSEDDATA_GET_ENTRIES_", LUA_NATIVE_DATAFILE_PARSEDDATA_GET_ENTRIES_);
		DATAFILE.set_function("PARSEDDATA_GET_FLOAT_", LUA_NATIVE_DATAFILE_PARSEDDATA_GET_FLOAT_);
		DATAFILE.set_function("PARSEDDATA_GET_INT_", LUA_NATIVE_DATAFILE_PARSEDDATA_GET_INT_);
		DATAFILE.set_function("PARSEDDATA_GET_SECTION_", LUA_NATIVE_DATAFILE_PARSEDDATA_GET_SECTION_);
		DATAFILE.set_function("PARSEDDATA_GET_BOOL_", LUA_NATIVE_DATAFILE_PARSEDDATA_GET_BOOL_);
	}
}
