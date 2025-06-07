#include "lua_native_binding.hpp"
#include "game/rdr/Natives.hpp"

namespace Lua::native
{
	static void LUA_NATIVE_EVENT_SET_DECISION_MAKER(Ped PedIndex, Hash DecisionMakerId)
	{
		EVENT::SET_DECISION_MAKER(PedIndex, DecisionMakerId);
	}

	static void LUA_NATIVE_EVENT_SET_DECISION_MAKER_TO_DEFAULT(Ped ped)
	{
		EVENT::SET_DECISION_MAKER_TO_DEFAULT(ped);
	}

	static ScrHandle LUA_NATIVE_EVENT_CREATE_SHOCKING_EVENT_(uintptr_t args)
	{
		auto retval = EVENT::_CREATE_SHOCKING_EVENT((Any*)args);
		return retval;
	}

	static int LUA_NATIVE_EVENT_ADD_SHOCKING_EVENT_AT_POSITION(Hash eventType, float posX, float posY, float posZ, float p4, float p5, float p6, float p7, float p8, int p9, int p10)
	{
		auto retval = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(eventType, posX, posY, posZ, p4, p5, p6, p7, p8, p9, p10);
		return retval;
	}

	static int LUA_NATIVE_EVENT_ADD_SHOCKING_EVENT_FOR_ENTITY(Hash eventType, Entity ent, float p2, float p3, float p4, float p5, float p6, float p7, bool p8, bool p9, int p10, int p11)
	{
		auto retval = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(eventType, ent, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11);
		return retval;
	}

	static bool LUA_NATIVE_EVENT_IS_SHOCKING_EVENT_IN_SPHERE(Hash eventType, float posX, float posY, float posZ, float radius)
	{
		auto retval = (bool)EVENT::IS_SHOCKING_EVENT_IN_SPHERE(eventType, posX, posY, posZ, radius);
		return retval;
	}

	static bool LUA_NATIVE_EVENT_REMOVE_SHOCKING_EVENT(int shockingEventId)
	{
		auto retval = (bool)EVENT::REMOVE_SHOCKING_EVENT(shockingEventId);
		return retval;
	}

	static void LUA_NATIVE_EVENT_REMOVE_ALL_SHOCKING_EVENTS(bool scriptCreatedOnly)
	{
		EVENT::REMOVE_ALL_SHOCKING_EVENTS(scriptCreatedOnly);
	}

	static void LUA_NATIVE_EVENT_REMOVE_ALL_SHOCKING_EVENTS_IN_AREA_(float x, float y, float z, float radius, bool p4)
	{
		EVENT::_REMOVE_ALL_SHOCKING_EVENTS_IN_AREA(x, y, z, radius, p4);
	}

	static void LUA_NATIVE_EVENT_REMOVE_ALL_SHOCKING_EVENTS_OF_TYPE_IN_AREA_(Hash eventType, float x, float y, float z, float radius, bool p5)
	{
		EVENT::_REMOVE_ALL_SHOCKING_EVENTS_OF_TYPE_IN_AREA(eventType, x, y, z, radius, p5);
	}

	static void LUA_NATIVE_EVENT_REMOVE_ALL_SHOCKING_EVENTS_OF_TYPE(Hash eventType, bool p1)
	{
		EVENT::REMOVE_ALL_SHOCKING_EVENTS_OF_TYPE(eventType, p1);
	}

	static void LUA_NATIVE_EVENT_REMOVE_SHOCKING_EVENT_SPAWN_BLOCKING_AREAS()
	{
		EVENT::REMOVE_SHOCKING_EVENT_SPAWN_BLOCKING_AREAS();
	}

	static Any LUA_NATIVE_EVENT_0x36D0F2BA2C0D9BDE_(Entity entity, int p1)
	{
		auto retval = EVENT::_0x36D0F2BA2C0D9BDE(entity, p1);
		return retval;
	}

	static void LUA_NATIVE_EVENT_0x7C511E91738A0828_(Ped ped1, Ped ped2, int p2, Hash p3)
	{
		EVENT::_0x7C511E91738A0828(ped1, ped2, p2, p3);
	}

	static void LUA_NATIVE_EVENT_SUPPRESS_SHOCKING_EVENTS_NEXT_FRAME()
	{
		EVENT::SUPPRESS_SHOCKING_EVENTS_NEXT_FRAME();
	}

	static void LUA_NATIVE_EVENT_0xB6F4825153920582_()
	{
		EVENT::_0xB6F4825153920582();
	}

	static void LUA_NATIVE_EVENT_0x4B2B1A891D437CA7_(float p0)
	{
		EVENT::_0x4B2B1A891D437CA7(p0);
	}

	static void LUA_NATIVE_EVENT_0x9520175B35E2268D_(Ped ped, bool p1)
	{
		EVENT::_0x9520175B35E2268D(ped, p1);
	}

	static Any LUA_NATIVE_EVENT_0x18E93EBFC1FCFA48_(Volume volume, bool p1, bool p2)
	{
		auto retval = EVENT::_0x18E93EBFC1FCFA48(volume, p1, p2);
		return retval;
	}

	static void LUA_NATIVE_EVENT_0x56B3410626A473E7_(Any p0)
	{
		EVENT::_0x56B3410626A473E7(p0);
	}

	static void LUA_NATIVE_EVENT_ADD_MODEL_TO_EVENT_MONITOR_(Hash model, bool p1, bool p2)
	{
		EVENT::_ADD_MODEL_TO_EVENT_MONITOR(model, p1, p2);
	}

	static void LUA_NATIVE_EVENT_0x4465C3D1475BD3FD_(Hash model)
	{
		EVENT::_0x4465C3D1475BD3FD(model);
	}

	static Any LUA_NATIVE_EVENT_0x2DD42FAD06E6F19E_(Object object, bool p1, bool p2)
	{
		auto retval = EVENT::_0x2DD42FAD06E6F19E(object, p1, p2);
		return retval;
	}

	static void LUA_NATIVE_EVENT_0xA86B0EE9B39D15D6_(Object object)
	{
		EVENT::_0xA86B0EE9B39D15D6(object);
	}

	static bool LUA_NATIVE_EVENT_0x26054EB81AC0893B_(Object object)
	{
		auto retval = (bool)EVENT::_0x26054EB81AC0893B(object);
		return retval;
	}

	static void LUA_NATIVE_EVENT_SET_EVENT_TRACKER_FOR_PED_(Ped ped, sol::stack_object eventName, int p2)
	{
		EVENT::_SET_EVENT_TRACKER_FOR_PED(ped, eventName.is<const char*>() ? eventName.as<const char*>() : nullptr, p2);
	}

	static int LUA_NATIVE_EVENT_0xAD17A18215DD23D6_(Entity entity, int p1, int p2)
	{
		auto retval = EVENT::_0xAD17A18215DD23D6(entity, p1, p2);
		return retval;
	}

	static int LUA_NATIVE_EVENT_EVENT_GET_TIME_SINCE_EVENT_(Entity entity, Hash eventType, int p2, int p3)
	{
		auto retval = EVENT::_EVENT_GET_TIME_SINCE_EVENT(entity, eventType, p2, p3);
		return retval;
	}

	static Hash LUA_NATIVE_EVENT_EVENT_GET_RECENT_EVENT_(Entity entity, int p1, int p2)
	{
		auto retval = EVENT::_EVENT_GET_RECENT_EVENT(entity, p1, p2);
		return retval;
	}

	static bool LUA_NATIVE_EVENT_IS_EVENT_TRACKER_ACTIVE_(sol::stack_object eventName, Hash shockingEvent)
	{
		auto retval = (bool)EVENT::_IS_EVENT_TRACKER_ACTIVE(eventName.is<const char*>() ? eventName.as<const char*>() : nullptr, shockingEvent);
		return retval;
	}

	static Entity LUA_NATIVE_EVENT_EVENT_GET_SOURCE_ENTITY_FROM_EVENT_(Entity entity, Hash eventType, int p2, int p3)
	{
		auto retval = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(entity, eventType, p2, p3);
		return retval;
	}

	static Entity LUA_NATIVE_EVENT_EVENT_GET_TARGET_ENTITY_FROM_EVENT_(Entity entity, Hash eventType, int p2, int p3)
	{
		auto retval = EVENT::_EVENT_GET_TARGET_ENTITY_FROM_EVENT(entity, eventType, p2, p3);
		return retval;
	}

	static Any LUA_NATIVE_EVENT_0x1D1B448D719415AB_(Ped ped)
	{
		auto retval = EVENT::_0x1D1B448D719415AB(ped);
		return retval;
	}

	static Any LUA_NATIVE_EVENT_0x83D43F0FD5276E4D_(Entity entity, int p1)
	{
		auto retval = EVENT::_0x83D43F0FD5276E4D(entity, p1);
		return retval;
	}

	static void LUA_NATIVE_EVENT_0xE28D7FC9FD32ABEB_(Entity entity, Hash eventType, int p2)
	{
		EVENT::_0xE28D7FC9FD32ABEB(entity, eventType, p2);
	}

	static void LUA_NATIVE_EVENT_0x1A5C5D350068A673_(Ped ped, int p1)
	{
		EVENT::_0x1A5C5D350068A673(ped, p1);
	}

	static void LUA_NATIVE_EVENT_EVENT_FLUSH_ALL_EVENT_TRACKERS_(Ped ped)
	{
		EVENT::_EVENT_FLUSH_ALL_EVENT_TRACKERS(ped);
	}

	static void LUA_NATIVE_EVENT_0xE2C2FBB7825FFC66_()
	{
		EVENT::_0xE2C2FBB7825FFC66();
	}

	void init_native_binding_EVENT(sol::state& L)
	{
		auto EVENT = L["EVENT"].get_or_create<sol::table>();
		EVENT.set_function("SET_DECISION_MAKER", LUA_NATIVE_EVENT_SET_DECISION_MAKER);
		EVENT.set_function("SET_DECISION_MAKER_TO_DEFAULT", LUA_NATIVE_EVENT_SET_DECISION_MAKER_TO_DEFAULT);
		EVENT.set_function("CREATE_SHOCKING_EVENT_", LUA_NATIVE_EVENT_CREATE_SHOCKING_EVENT_);
		EVENT.set_function("ADD_SHOCKING_EVENT_AT_POSITION", LUA_NATIVE_EVENT_ADD_SHOCKING_EVENT_AT_POSITION);
		EVENT.set_function("ADD_SHOCKING_EVENT_FOR_ENTITY", LUA_NATIVE_EVENT_ADD_SHOCKING_EVENT_FOR_ENTITY);
		EVENT.set_function("IS_SHOCKING_EVENT_IN_SPHERE", LUA_NATIVE_EVENT_IS_SHOCKING_EVENT_IN_SPHERE);
		EVENT.set_function("REMOVE_SHOCKING_EVENT", LUA_NATIVE_EVENT_REMOVE_SHOCKING_EVENT);
		EVENT.set_function("REMOVE_ALL_SHOCKING_EVENTS", LUA_NATIVE_EVENT_REMOVE_ALL_SHOCKING_EVENTS);
		EVENT.set_function("REMOVE_ALL_SHOCKING_EVENTS_IN_AREA_", LUA_NATIVE_EVENT_REMOVE_ALL_SHOCKING_EVENTS_IN_AREA_);
		EVENT.set_function("REMOVE_ALL_SHOCKING_EVENTS_OF_TYPE_IN_AREA_", LUA_NATIVE_EVENT_REMOVE_ALL_SHOCKING_EVENTS_OF_TYPE_IN_AREA_);
		EVENT.set_function("REMOVE_ALL_SHOCKING_EVENTS_OF_TYPE", LUA_NATIVE_EVENT_REMOVE_ALL_SHOCKING_EVENTS_OF_TYPE);
		EVENT.set_function("REMOVE_SHOCKING_EVENT_SPAWN_BLOCKING_AREAS", LUA_NATIVE_EVENT_REMOVE_SHOCKING_EVENT_SPAWN_BLOCKING_AREAS);
		EVENT.set_function("0x36D0F2BA2C0D9BDE_", LUA_NATIVE_EVENT_0x36D0F2BA2C0D9BDE_);
		EVENT.set_function("0x7C511E91738A0828_", LUA_NATIVE_EVENT_0x7C511E91738A0828_);
		EVENT.set_function("SUPPRESS_SHOCKING_EVENTS_NEXT_FRAME", LUA_NATIVE_EVENT_SUPPRESS_SHOCKING_EVENTS_NEXT_FRAME);
		EVENT.set_function("0xB6F4825153920582_", LUA_NATIVE_EVENT_0xB6F4825153920582_);
		EVENT.set_function("0x4B2B1A891D437CA7_", LUA_NATIVE_EVENT_0x4B2B1A891D437CA7_);
		EVENT.set_function("0x9520175B35E2268D_", LUA_NATIVE_EVENT_0x9520175B35E2268D_);
		EVENT.set_function("0x18E93EBFC1FCFA48_", LUA_NATIVE_EVENT_0x18E93EBFC1FCFA48_);
		EVENT.set_function("0x56B3410626A473E7_", LUA_NATIVE_EVENT_0x56B3410626A473E7_);
		EVENT.set_function("ADD_MODEL_TO_EVENT_MONITOR_", LUA_NATIVE_EVENT_ADD_MODEL_TO_EVENT_MONITOR_);
		EVENT.set_function("0x4465C3D1475BD3FD_", LUA_NATIVE_EVENT_0x4465C3D1475BD3FD_);
		EVENT.set_function("0x2DD42FAD06E6F19E_", LUA_NATIVE_EVENT_0x2DD42FAD06E6F19E_);
		EVENT.set_function("0xA86B0EE9B39D15D6_", LUA_NATIVE_EVENT_0xA86B0EE9B39D15D6_);
		EVENT.set_function("0x26054EB81AC0893B_", LUA_NATIVE_EVENT_0x26054EB81AC0893B_);
		EVENT.set_function("SET_EVENT_TRACKER_FOR_PED_", LUA_NATIVE_EVENT_SET_EVENT_TRACKER_FOR_PED_);
		EVENT.set_function("0xAD17A18215DD23D6_", LUA_NATIVE_EVENT_0xAD17A18215DD23D6_);
		EVENT.set_function("EVENT_GET_TIME_SINCE_EVENT_", LUA_NATIVE_EVENT_EVENT_GET_TIME_SINCE_EVENT_);
		EVENT.set_function("EVENT_GET_RECENT_EVENT_", LUA_NATIVE_EVENT_EVENT_GET_RECENT_EVENT_);
		EVENT.set_function("IS_EVENT_TRACKER_ACTIVE_", LUA_NATIVE_EVENT_IS_EVENT_TRACKER_ACTIVE_);
		EVENT.set_function("EVENT_GET_SOURCE_ENTITY_FROM_EVENT_", LUA_NATIVE_EVENT_EVENT_GET_SOURCE_ENTITY_FROM_EVENT_);
		EVENT.set_function("EVENT_GET_TARGET_ENTITY_FROM_EVENT_", LUA_NATIVE_EVENT_EVENT_GET_TARGET_ENTITY_FROM_EVENT_);
		EVENT.set_function("0x1D1B448D719415AB_", LUA_NATIVE_EVENT_0x1D1B448D719415AB_);
		EVENT.set_function("0x83D43F0FD5276E4D_", LUA_NATIVE_EVENT_0x83D43F0FD5276E4D_);
		EVENT.set_function("0xE28D7FC9FD32ABEB_", LUA_NATIVE_EVENT_0xE28D7FC9FD32ABEB_);
		EVENT.set_function("0x1A5C5D350068A673_", LUA_NATIVE_EVENT_0x1A5C5D350068A673_);
		EVENT.set_function("EVENT_FLUSH_ALL_EVENT_TRACKERS_", LUA_NATIVE_EVENT_EVENT_FLUSH_ALL_EVENT_TRACKERS_);
		EVENT.set_function("0xE2C2FBB7825FFC66_", LUA_NATIVE_EVENT_0xE2C2FBB7825FFC66_);
	}
}
