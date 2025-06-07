#include "lua_native_binding.hpp"
#include "game/rdr/Natives.hpp"

namespace Lua::native
{
	static int LUA_NATIVE_PHYSICS_ADD_ROPE(float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float len, int ropeType, float maxLength, float minLength, float p10, bool p11, bool p12, bool rigid, float p14, bool breakWhenShot, uintptr_t unkPtr, bool p17)
	{
		auto retval = PHYSICS::ADD_ROPE(posX, posY, posZ, rotX, rotY, rotZ, len, ropeType, maxLength, minLength, p10, p11, p12, rigid, p14, breakWhenShot, (Any*)unkPtr, p17);
		return retval;
	}

	static int LUA_NATIVE_PHYSICS_ADD_ROPE_2_(float x, float y, float z, float rotX, float rotY, float rotZ, float length, int ropeType, bool isNetworked, int p9, float p10)
	{
		auto retval = PHYSICS::_ADD_ROPE_2(x, y, z, rotX, rotY, rotZ, length, ropeType, isNetworked, p9, p10);
		return retval;
	}

	static int LUA_NATIVE_PHYSICS_DELETE_ROPE(int ropeID)
	{
		PHYSICS::DELETE_ROPE(&ropeID);
		return ropeID;
	}

	static void LUA_NATIVE_PHYSICS_RELEASE_ROPE_(int ropeId)
	{
		PHYSICS::_RELEASE_ROPE(ropeId);
	}

	static void LUA_NATIVE_PHYSICS_DELETE_CHILD_ROPE(int ropeID)
	{
		PHYSICS::DELETE_CHILD_ROPE(ropeID);
	}

	static std::tuple<int, int, int> LUA_NATIVE_PHYSICS_BREAK_ROPE_(int ropeId, int ropeTop, int ropeBottom, float offsetX, float offsetY, float offsetZ, int p6)
	{
		std::tuple<int, int, int> return_values;
		PHYSICS::_BREAK_ROPE(&ropeId, &ropeTop, &ropeBottom, offsetX, offsetY, offsetZ, p6);
		std::get<0>(return_values) = ropeId;
		std::get<1>(return_values) = ropeTop;
		std::get<2>(return_values) = ropeBottom;

		return return_values;
	}

	static bool LUA_NATIVE_PHYSICS_DOES_ROPE_EXIST(int ropeID)
	{
		auto retval = (bool)PHYSICS::DOES_ROPE_EXIST(ropeID);
		return retval;
	}

	static bool LUA_NATIVE_PHYSICS_IS_ROPE_BROKEN_(int ropeId)
	{
		auto retval = (bool)PHYSICS::_IS_ROPE_BROKEN(ropeId);
		return retval;
	}

	static int LUA_NATIVE_PHYSICS_ROPE_CHANGE_VISIBILITY_(int ropeId, bool visible)
	{
		PHYSICS::_ROPE_CHANGE_VISIBILITY(&ropeId, visible);
		return ropeId;
	}

	static int LUA_NATIVE_PHYSICS_ROPE_DRAW_SHADOW_ENABLED(int ropeID, bool isDrawEnabled)
	{
		PHYSICS::ROPE_DRAW_SHADOW_ENABLED(&ropeID, isDrawEnabled);
		return ropeID;
	}

	static int LUA_NATIVE_PHYSICS_GET_ROPE_VERTEX_COUNT(int ropeID)
	{
		auto retval = PHYSICS::GET_ROPE_VERTEX_COUNT(ropeID);
		return retval;
	}

	static void LUA_NATIVE_PHYSICS_0xE54BF2CE6C7D23A9_(int ropeId, int p1, float x, float y, float z)
	{
		PHYSICS::_0xE54BF2CE6C7D23A9(ropeId, p1, x, y, z);
	}

	static void LUA_NATIVE_PHYSICS_0x9C24846D0A4A2776_(Any p0)
	{
		PHYSICS::_0x9C24846D0A4A2776(p0);
	}

	static void LUA_NATIVE_PHYSICS_0x0CB16D05E03FB525_(Any p0)
	{
		PHYSICS::_0x0CB16D05E03FB525(p0);
	}

	static void LUA_NATIVE_PHYSICS_0xF27F1A8DE4F50A1B_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		PHYSICS::_0xF27F1A8DE4F50A1B(p0, p1, p2, p3, p4, p5, p6);
	}

	static void LUA_NATIVE_PHYSICS_0x21D0890D88DFB0B0_(int ropeId, bool p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, int p10)
	{
		PHYSICS::_0x21D0890D88DFB0B0(ropeId, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);
	}

	static void LUA_NATIVE_PHYSICS_ATTACH_ENTITIES_TO_ROPE(int ropeID, Entity iEntityAID, Entity iEntityBID, float worldPositionAX, float worldPositionAY, float worldPositionAZ, float worldPositionBX, float worldPositionBY, float worldPositionBZ, float ropeLength, int componentPartA, int componentPartB, sol::stack_object boneNamePartA, sol::stack_object boneNamePartB, bool p14, int boneId1, int boneId2, int alwaysZero3, int alwaysZero4, bool p19, bool p20)
	{
		PHYSICS::ATTACH_ENTITIES_TO_ROPE(ropeID, iEntityAID, iEntityBID, worldPositionAX, worldPositionAY, worldPositionAZ, worldPositionBX, worldPositionBY, worldPositionBZ, ropeLength, componentPartA, componentPartB, boneNamePartA.is<const char*>() ? boneNamePartA.as<const char*>() : nullptr, boneNamePartB.is<const char*>() ? boneNamePartB.as<const char*>() : nullptr, p14, boneId1, boneId2, alwaysZero3, alwaysZero4, p19, p20);
	}

	static void LUA_NATIVE_PHYSICS_ATTACH_ENTITIES_TO_ROPE_2_(int ropeId, Entity entity1, Entity entity2, float ent1X, float ent1Y, float ent1Z, float ent2X, float ent2Y, float ent2Z, sol::stack_object boneName1, sol::stack_object boneName2)
	{
		PHYSICS::_ATTACH_ENTITIES_TO_ROPE_2(ropeId, entity1, entity2, ent1X, ent1Y, ent1Z, ent2X, ent2Y, ent2Z, boneName1.is<const char*>() ? boneName1.as<const char*>() : nullptr, boneName2.is<const char*>() ? boneName2.as<const char*>() : nullptr);
	}

	static void LUA_NATIVE_PHYSICS_ATTACH_ENTITES_TO_ROPE_3_(int ropeId, Entity entity1, Entity entity2, float p3, float p4, float p5, float p6, float p7, float p8, Any p9, Any p10)
	{
		PHYSICS::_ATTACH_ENTITES_TO_ROPE_3(ropeId, entity1, entity2, p3, p4, p5, p6, p7, p8, p9, p10);
	}

	static void LUA_NATIVE_PHYSICS_0x69C810B72291D831_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6)
	{
		PHYSICS::_0x69C810B72291D831(p0, p1, p2, p3, p4, p5, p6);
	}

	static void LUA_NATIVE_PHYSICS_0xB7469CB9AC3C0FD4_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		PHYSICS::_0xB7469CB9AC3C0FD4(p0, p1, p2, p3, p4, p5, p6, p7);
	}

	static void LUA_NATIVE_PHYSICS_0xC64E7A62632AD2FE_(int ropeId, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7)
	{
		PHYSICS::_0xC64E7A62632AD2FE(ropeId, p1, p2, p3, p4, p5, p6, p7);
	}

	static bool LUA_NATIVE_PHYSICS_IS_ROPE_ATTACHED_TO_ENTITY_(int ropeId, Entity entity)
	{
		auto retval = (bool)PHYSICS::_IS_ROPE_ATTACHED_TO_ENTITY(ropeId, entity);
		return retval;
	}

	static void LUA_NATIVE_PHYSICS_DETACH_ROPE_FROM_ENTITY(int ropeID, Entity iEntityID)
	{
		PHYSICS::DETACH_ROPE_FROM_ENTITY(ropeID, iEntityID);
	}

	static void LUA_NATIVE_PHYSICS_HITCH_HORSE_(Ped horse, float x, float y, float z)
	{
		PHYSICS::_HITCH_HORSE(horse, x, y, z);
	}

	static void LUA_NATIVE_PHYSICS_UNHITCH_HORSE_(Ped horse)
	{
		PHYSICS::_UNHITCH_HORSE(horse);
	}

	static void LUA_NATIVE_PHYSICS_0x6EA0E93CFFA472CC_(Any p0)
	{
		PHYSICS::_0x6EA0E93CFFA472CC(p0);
	}

	static void LUA_NATIVE_PHYSICS_0xBDDA142759307528_(Any p0)
	{
		PHYSICS::_0xBDDA142759307528(p0);
	}

	static void LUA_NATIVE_PHYSICS_0x32F4DBFDFCCCC735_(Any p0, Any p1, Any p2)
	{
		PHYSICS::_0x32F4DBFDFCCCC735(p0, p1, p2);
	}

	static void LUA_NATIVE_PHYSICS_0xF8CA39D5C0D1D9A1_(Any p0, Any p1)
	{
		PHYSICS::_0xF8CA39D5C0D1D9A1(p0, p1);
	}

	static void LUA_NATIVE_PHYSICS_0xEAF529446488EB18_(Any p0)
	{
		PHYSICS::_0xEAF529446488EB18(p0);
	}

	static void LUA_NATIVE_PHYSICS_0x31160EC47E7C9549_(Any p0, Any p1)
	{
		PHYSICS::_0x31160EC47E7C9549(p0, p1);
	}

	static void LUA_NATIVE_PHYSICS_0x5E981C764DF33117_(Any p0, Any p1)
	{
		PHYSICS::_0x5E981C764DF33117(p0, p1);
	}

	static void LUA_NATIVE_PHYSICS_ROPE_SET_UPDATE_ORDER(int ropeID, int iUpdateOrder)
	{
		PHYSICS::ROPE_SET_UPDATE_ORDER(ropeID, iUpdateOrder);
	}

	static void LUA_NATIVE_PHYSICS_0xFB9153A54AC713E8_(int ropeId, bool p1)
	{
		PHYSICS::_0xFB9153A54AC713E8(ropeId, p1);
	}

	static void LUA_NATIVE_PHYSICS_0xD699E688B49C0FD2_(int ropeId, float p1, float p2, float p3, bool p4)
	{
		PHYSICS::_0xD699E688B49C0FD2(ropeId, p1, p2, p3, p4);
	}

	static void LUA_NATIVE_PHYSICS_0xBB3E9B073E66C3C9_(int ropeId, bool p1, bool p2, bool p3, bool p4)
	{
		PHYSICS::_0xBB3E9B073E66C3C9(ropeId, p1, p2, p3, p4);
	}

	static void LUA_NATIVE_PHYSICS_0x522FA3F490E2F7AC_(int ropeId, Any p1, Any p2)
	{
		PHYSICS::_0x522FA3F490E2F7AC(ropeId, p1, p2);
	}

	static void LUA_NATIVE_PHYSICS_0x3900491C0D61ED4B_(Any p0, Any p1)
	{
		PHYSICS::_0x3900491C0D61ED4B(p0, p1);
	}

	static void LUA_NATIVE_PHYSICS_0xC89E7410A93AC19A_(int ropeId, float p1)
	{
		PHYSICS::_0xC89E7410A93AC19A(ropeId, p1);
	}

	static void LUA_NATIVE_PHYSICS_0x1D97DA8ACB5D2582_(int ropeId, int p1)
	{
		PHYSICS::_0x1D97DA8ACB5D2582(ropeId, p1);
	}

	static void LUA_NATIVE_PHYSICS_CREATE_ROPE_WINDING_ABILITY_(int ropeId, sol::stack_object p1, sol::stack_object ropeModelType, float length, bool p4)
	{
		PHYSICS::_CREATE_ROPE_WINDING_ABILITY(ropeId, p1.is<const char*>() ? p1.as<const char*>() : nullptr, ropeModelType.is<const char*>() ? ropeModelType.as<const char*>() : nullptr, length, p4);
	}

	static Vector3 LUA_NATIVE_PHYSICS_GET_ROPE_LAST_VERTEX_COORD(int ropeID)
	{
		auto retval = PHYSICS::GET_ROPE_LAST_VERTEX_COORD(ropeID);
		return retval;
	}

	static Vector3 LUA_NATIVE_PHYSICS_GET_ROPE_VERTEX_COORD(int ropeID, int vtxIndex)
	{
		auto retval = PHYSICS::GET_ROPE_VERTEX_COORD(ropeID, vtxIndex);
		return retval;
	}

	static void LUA_NATIVE_PHYSICS_START_ROPE_WINDING(int ropeID)
	{
		PHYSICS::START_ROPE_WINDING(ropeID);
	}

	static void LUA_NATIVE_PHYSICS_STOP_ROPE_WINDING(int ropeID)
	{
		PHYSICS::STOP_ROPE_WINDING(ropeID);
	}

	static void LUA_NATIVE_PHYSICS_START_ROPE_UNWINDING_FRONT(int ropeID)
	{
		PHYSICS::START_ROPE_UNWINDING_FRONT(ropeID);
	}

	static void LUA_NATIVE_PHYSICS_STOP_ROPE_UNWINDING_FRONT(int ropeID)
	{
		PHYSICS::STOP_ROPE_UNWINDING_FRONT(ropeID);
	}

	static void LUA_NATIVE_PHYSICS_START_ROPE_UNWINDING_BACK_(int ropeId)
	{
		PHYSICS::_START_ROPE_UNWINDING_BACK(ropeId);
	}

	static void LUA_NATIVE_PHYSICS_STOP_ROPE_UNWINDING_BACK_(int ropeId)
	{
		PHYSICS::_STOP_ROPE_UNWINDING_BACK(ropeId);
	}

	static void LUA_NATIVE_PHYSICS_0x461FCBDEB4D06717_(int ropeId, bool p1)
	{
		PHYSICS::_0x461FCBDEB4D06717(ropeId, p1);
	}

	static void LUA_NATIVE_PHYSICS_0x423C6B1F3786D28B_(Any p0, Any p1)
	{
		PHYSICS::_0x423C6B1F3786D28B(p0, p1);
	}

	static void LUA_NATIVE_PHYSICS_0x76BAD9D538BCA1AA_(int ropeId, float p1)
	{
		PHYSICS::_0x76BAD9D538BCA1AA(ropeId, p1);
	}

	static void LUA_NATIVE_PHYSICS_0xB40EA9E0D2E2F7F3_(int ropeId, float p1)
	{
		PHYSICS::_0xB40EA9E0D2E2F7F3(ropeId, p1);
	}

	static float LUA_NATIVE_PHYSICS_ROPE_GET_FORCED_LENGTH_(int ropeId)
	{
		auto retval = PHYSICS::_ROPE_GET_FORCED_LENGTH(ropeId);
		return retval;
	}

	static void LUA_NATIVE_PHYSICS_0x751DF00EEFF122E3_(Any p0)
	{
		PHYSICS::_0x751DF00EEFF122E3(p0);
	}

	static void LUA_NATIVE_PHYSICS_ROPE_FORCE_LENGTH(int ropeID, float len)
	{
		PHYSICS::ROPE_FORCE_LENGTH(ropeID, len);
	}

	static void LUA_NATIVE_PHYSICS_0x8D59079C37C21D78_(int ropeId, float p1)
	{
		PHYSICS::_0x8D59079C37C21D78(ropeId, p1);
	}

	static void LUA_NATIVE_PHYSICS_0x814D453FCFDF119F_(Any p0, Any p1, Any p2)
	{
		PHYSICS::_0x814D453FCFDF119F(p0, p1, p2);
	}

	static void LUA_NATIVE_PHYSICS_0x1FC92BDBA1106BD2_(int ropeId, float p1)
	{
		PHYSICS::_0x1FC92BDBA1106BD2(ropeId, p1);
	}

	static void LUA_NATIVE_PHYSICS_0xDEDE679ED29DD4E7_(int ropeId, bool p1)
	{
		PHYSICS::_0xDEDE679ED29DD4E7(ropeId, p1);
	}

	static void LUA_NATIVE_PHYSICS_0xF1EA2A881EB7F2CD_(int ropeId, bool p1)
	{
		PHYSICS::_0xF1EA2A881EB7F2CD(ropeId, p1);
	}

	static void LUA_NATIVE_PHYSICS_0x5A989B7EE3672A56_(Any p0, Any p1)
	{
		PHYSICS::_0x5A989B7EE3672A56(p0, p1);
	}

	static void LUA_NATIVE_PHYSICS_0x483D4E917B0D35A9_(Any p0, Any p1)
	{
		PHYSICS::_0x483D4E917B0D35A9(p0, p1);
	}

	static Player LUA_NATIVE_PHYSICS_ROPE_GET_BREAKER_OF_ROPE_(int ropeId)
	{
		auto retval = PHYSICS::_ROPE_GET_BREAKER_OF_ROPE(ropeId);
		return retval;
	}

	static void LUA_NATIVE_PHYSICS_SET_DAMPING(Entity entityID, int dampingType, float dampingValue)
	{
		PHYSICS::SET_DAMPING(entityID, dampingType, dampingValue);
	}

	static void LUA_NATIVE_PHYSICS_ACTIVATE_PHYSICS(Entity entityID)
	{
		PHYSICS::ACTIVATE_PHYSICS(entityID);
	}

	static void LUA_NATIVE_PHYSICS_BREAK_ENTITY_GLASS(Entity entityId, float impactPositionX, float impactPositionY, float impactPositionZ, float impactRadius, float impulseX, float impulseY, float impulseZ, float damage, int crackType, bool silent)
	{
		PHYSICS::BREAK_ENTITY_GLASS(entityId, impactPositionX, impactPositionY, impactPositionZ, impactRadius, impulseX, impulseY, impulseZ, damage, crackType, silent);
	}

	static void LUA_NATIVE_PHYSICS_0x8EEDFD8921389928_(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9)
	{
		PHYSICS::_0x8EEDFD8921389928(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
	}

	static void LUA_NATIVE_PHYSICS_SET_DISABLE_BREAKING(Entity entityId, bool disableBreaking)
	{
		PHYSICS::SET_DISABLE_BREAKING(entityId, disableBreaking);
	}

	static void LUA_NATIVE_PHYSICS_SET_DISABLE_FRAG_DAMAGE(Entity entityId, bool disableDamage)
	{
		PHYSICS::SET_DISABLE_FRAG_DAMAGE(entityId, disableDamage);
	}

	static void LUA_NATIVE_PHYSICS_0x5BD7457221CC5FF4_(Any p0, Any p1)
	{
		PHYSICS::_0x5BD7457221CC5FF4(p0, p1);
	}

	void init_native_binding_PHYSICS(sol::state& L)
	{
		auto PHYSICS = L["PHYSICS"].get_or_create<sol::table>();
		PHYSICS.set_function("ADD_ROPE", LUA_NATIVE_PHYSICS_ADD_ROPE);
		PHYSICS.set_function("ADD_ROPE_2_", LUA_NATIVE_PHYSICS_ADD_ROPE_2_);
		PHYSICS.set_function("DELETE_ROPE", LUA_NATIVE_PHYSICS_DELETE_ROPE);
		PHYSICS.set_function("RELEASE_ROPE_", LUA_NATIVE_PHYSICS_RELEASE_ROPE_);
		PHYSICS.set_function("DELETE_CHILD_ROPE", LUA_NATIVE_PHYSICS_DELETE_CHILD_ROPE);
		PHYSICS.set_function("BREAK_ROPE_", LUA_NATIVE_PHYSICS_BREAK_ROPE_);
		PHYSICS.set_function("DOES_ROPE_EXIST", LUA_NATIVE_PHYSICS_DOES_ROPE_EXIST);
		PHYSICS.set_function("IS_ROPE_BROKEN_", LUA_NATIVE_PHYSICS_IS_ROPE_BROKEN_);
		PHYSICS.set_function("ROPE_CHANGE_VISIBILITY_", LUA_NATIVE_PHYSICS_ROPE_CHANGE_VISIBILITY_);
		PHYSICS.set_function("ROPE_DRAW_SHADOW_ENABLED", LUA_NATIVE_PHYSICS_ROPE_DRAW_SHADOW_ENABLED);
		PHYSICS.set_function("GET_ROPE_VERTEX_COUNT", LUA_NATIVE_PHYSICS_GET_ROPE_VERTEX_COUNT);
		PHYSICS.set_function("0xE54BF2CE6C7D23A9_", LUA_NATIVE_PHYSICS_0xE54BF2CE6C7D23A9_);
		PHYSICS.set_function("0x9C24846D0A4A2776_", LUA_NATIVE_PHYSICS_0x9C24846D0A4A2776_);
		PHYSICS.set_function("0x0CB16D05E03FB525_", LUA_NATIVE_PHYSICS_0x0CB16D05E03FB525_);
		PHYSICS.set_function("0xF27F1A8DE4F50A1B_", LUA_NATIVE_PHYSICS_0xF27F1A8DE4F50A1B_);
		PHYSICS.set_function("0x21D0890D88DFB0B0_", LUA_NATIVE_PHYSICS_0x21D0890D88DFB0B0_);
		PHYSICS.set_function("ATTACH_ENTITIES_TO_ROPE", LUA_NATIVE_PHYSICS_ATTACH_ENTITIES_TO_ROPE);
		PHYSICS.set_function("ATTACH_ENTITIES_TO_ROPE_2_", LUA_NATIVE_PHYSICS_ATTACH_ENTITIES_TO_ROPE_2_);
		PHYSICS.set_function("ATTACH_ENTITES_TO_ROPE_3_", LUA_NATIVE_PHYSICS_ATTACH_ENTITES_TO_ROPE_3_);
		PHYSICS.set_function("0x69C810B72291D831_", LUA_NATIVE_PHYSICS_0x69C810B72291D831_);
		PHYSICS.set_function("0xB7469CB9AC3C0FD4_", LUA_NATIVE_PHYSICS_0xB7469CB9AC3C0FD4_);
		PHYSICS.set_function("0xC64E7A62632AD2FE_", LUA_NATIVE_PHYSICS_0xC64E7A62632AD2FE_);
		PHYSICS.set_function("IS_ROPE_ATTACHED_TO_ENTITY_", LUA_NATIVE_PHYSICS_IS_ROPE_ATTACHED_TO_ENTITY_);
		PHYSICS.set_function("DETACH_ROPE_FROM_ENTITY", LUA_NATIVE_PHYSICS_DETACH_ROPE_FROM_ENTITY);
		PHYSICS.set_function("HITCH_HORSE_", LUA_NATIVE_PHYSICS_HITCH_HORSE_);
		PHYSICS.set_function("UNHITCH_HORSE_", LUA_NATIVE_PHYSICS_UNHITCH_HORSE_);
		PHYSICS.set_function("0x6EA0E93CFFA472CC_", LUA_NATIVE_PHYSICS_0x6EA0E93CFFA472CC_);
		PHYSICS.set_function("0xBDDA142759307528_", LUA_NATIVE_PHYSICS_0xBDDA142759307528_);
		PHYSICS.set_function("0x32F4DBFDFCCCC735_", LUA_NATIVE_PHYSICS_0x32F4DBFDFCCCC735_);
		PHYSICS.set_function("0xF8CA39D5C0D1D9A1_", LUA_NATIVE_PHYSICS_0xF8CA39D5C0D1D9A1_);
		PHYSICS.set_function("0xEAF529446488EB18_", LUA_NATIVE_PHYSICS_0xEAF529446488EB18_);
		PHYSICS.set_function("0x31160EC47E7C9549_", LUA_NATIVE_PHYSICS_0x31160EC47E7C9549_);
		PHYSICS.set_function("0x5E981C764DF33117_", LUA_NATIVE_PHYSICS_0x5E981C764DF33117_);
		PHYSICS.set_function("ROPE_SET_UPDATE_ORDER", LUA_NATIVE_PHYSICS_ROPE_SET_UPDATE_ORDER);
		PHYSICS.set_function("0xFB9153A54AC713E8_", LUA_NATIVE_PHYSICS_0xFB9153A54AC713E8_);
		PHYSICS.set_function("0xD699E688B49C0FD2_", LUA_NATIVE_PHYSICS_0xD699E688B49C0FD2_);
		PHYSICS.set_function("0xBB3E9B073E66C3C9_", LUA_NATIVE_PHYSICS_0xBB3E9B073E66C3C9_);
		PHYSICS.set_function("0x522FA3F490E2F7AC_", LUA_NATIVE_PHYSICS_0x522FA3F490E2F7AC_);
		PHYSICS.set_function("0x3900491C0D61ED4B_", LUA_NATIVE_PHYSICS_0x3900491C0D61ED4B_);
		PHYSICS.set_function("0xC89E7410A93AC19A_", LUA_NATIVE_PHYSICS_0xC89E7410A93AC19A_);
		PHYSICS.set_function("0x1D97DA8ACB5D2582_", LUA_NATIVE_PHYSICS_0x1D97DA8ACB5D2582_);
		PHYSICS.set_function("CREATE_ROPE_WINDING_ABILITY_", LUA_NATIVE_PHYSICS_CREATE_ROPE_WINDING_ABILITY_);
		PHYSICS.set_function("GET_ROPE_LAST_VERTEX_COORD", LUA_NATIVE_PHYSICS_GET_ROPE_LAST_VERTEX_COORD);
		PHYSICS.set_function("GET_ROPE_VERTEX_COORD", LUA_NATIVE_PHYSICS_GET_ROPE_VERTEX_COORD);
		PHYSICS.set_function("START_ROPE_WINDING", LUA_NATIVE_PHYSICS_START_ROPE_WINDING);
		PHYSICS.set_function("STOP_ROPE_WINDING", LUA_NATIVE_PHYSICS_STOP_ROPE_WINDING);
		PHYSICS.set_function("START_ROPE_UNWINDING_FRONT", LUA_NATIVE_PHYSICS_START_ROPE_UNWINDING_FRONT);
		PHYSICS.set_function("STOP_ROPE_UNWINDING_FRONT", LUA_NATIVE_PHYSICS_STOP_ROPE_UNWINDING_FRONT);
		PHYSICS.set_function("START_ROPE_UNWINDING_BACK_", LUA_NATIVE_PHYSICS_START_ROPE_UNWINDING_BACK_);
		PHYSICS.set_function("STOP_ROPE_UNWINDING_BACK_", LUA_NATIVE_PHYSICS_STOP_ROPE_UNWINDING_BACK_);
		PHYSICS.set_function("0x461FCBDEB4D06717_", LUA_NATIVE_PHYSICS_0x461FCBDEB4D06717_);
		PHYSICS.set_function("0x423C6B1F3786D28B_", LUA_NATIVE_PHYSICS_0x423C6B1F3786D28B_);
		PHYSICS.set_function("0x76BAD9D538BCA1AA_", LUA_NATIVE_PHYSICS_0x76BAD9D538BCA1AA_);
		PHYSICS.set_function("0xB40EA9E0D2E2F7F3_", LUA_NATIVE_PHYSICS_0xB40EA9E0D2E2F7F3_);
		PHYSICS.set_function("ROPE_GET_FORCED_LENGTH_", LUA_NATIVE_PHYSICS_ROPE_GET_FORCED_LENGTH_);
		PHYSICS.set_function("0x751DF00EEFF122E3_", LUA_NATIVE_PHYSICS_0x751DF00EEFF122E3_);
		PHYSICS.set_function("ROPE_FORCE_LENGTH", LUA_NATIVE_PHYSICS_ROPE_FORCE_LENGTH);
		PHYSICS.set_function("0x8D59079C37C21D78_", LUA_NATIVE_PHYSICS_0x8D59079C37C21D78_);
		PHYSICS.set_function("0x814D453FCFDF119F_", LUA_NATIVE_PHYSICS_0x814D453FCFDF119F_);
		PHYSICS.set_function("0x1FC92BDBA1106BD2_", LUA_NATIVE_PHYSICS_0x1FC92BDBA1106BD2_);
		PHYSICS.set_function("0xDEDE679ED29DD4E7_", LUA_NATIVE_PHYSICS_0xDEDE679ED29DD4E7_);
		PHYSICS.set_function("0xF1EA2A881EB7F2CD_", LUA_NATIVE_PHYSICS_0xF1EA2A881EB7F2CD_);
		PHYSICS.set_function("0x5A989B7EE3672A56_", LUA_NATIVE_PHYSICS_0x5A989B7EE3672A56_);
		PHYSICS.set_function("0x483D4E917B0D35A9_", LUA_NATIVE_PHYSICS_0x483D4E917B0D35A9_);
		PHYSICS.set_function("ROPE_GET_BREAKER_OF_ROPE_", LUA_NATIVE_PHYSICS_ROPE_GET_BREAKER_OF_ROPE_);
		PHYSICS.set_function("SET_DAMPING", LUA_NATIVE_PHYSICS_SET_DAMPING);
		PHYSICS.set_function("ACTIVATE_PHYSICS", LUA_NATIVE_PHYSICS_ACTIVATE_PHYSICS);
		PHYSICS.set_function("BREAK_ENTITY_GLASS", LUA_NATIVE_PHYSICS_BREAK_ENTITY_GLASS);
		PHYSICS.set_function("0x8EEDFD8921389928_", LUA_NATIVE_PHYSICS_0x8EEDFD8921389928_);
		PHYSICS.set_function("SET_DISABLE_BREAKING", LUA_NATIVE_PHYSICS_SET_DISABLE_BREAKING);
		PHYSICS.set_function("SET_DISABLE_FRAG_DAMAGE", LUA_NATIVE_PHYSICS_SET_DISABLE_FRAG_DAMAGE);
		PHYSICS.set_function("0x5BD7457221CC5FF4_", LUA_NATIVE_PHYSICS_0x5BD7457221CC5FF4_);
	}
}
