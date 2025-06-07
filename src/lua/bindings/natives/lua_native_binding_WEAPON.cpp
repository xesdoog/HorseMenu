#include "lua_native_binding.hpp"
#include "game/rdr/Natives.hpp"

namespace Lua::native
{
	static Hash LUA_NATIVE_WEAPON_GET_WEAPON_UNLOCK_(Hash weaponHash)
	{
		auto retval = WEAPON::_GET_WEAPON_UNLOCK(weaponHash);
		return retval;
	}

	static void LUA_NATIVE_WEAPON_ADD_AMMO_TO_PED_(Ped ped, Hash weaponHash, int amount, Hash addReason)
	{
		WEAPON::_ADD_AMMO_TO_PED(ped, weaponHash, amount, addReason);
	}

	static void LUA_NATIVE_WEAPON_ADD_AMMO_TO_PED_BY_TYPE_(Ped ped, Hash ammoType, int amount, Hash addReason)
	{
		WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(ped, ammoType, amount, addReason);
	}

	static void LUA_NATIVE_WEAPON_REMOVE_AMMO_FROM_PED_(Ped ped, Hash weaponHash, int amount, Hash removeReason)
	{
		WEAPON::_REMOVE_AMMO_FROM_PED(ped, weaponHash, amount, removeReason);
	}

	static void LUA_NATIVE_WEAPON_REMOVE_AMMO_FROM_PED_BY_TYPE_(Ped ped, Hash ammoHash, int amount, Hash removeReason)
	{
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(ped, ammoHash, amount, removeReason);
	}

	static void LUA_NATIVE_WEAPON_REMOVE_ALL_PED_AMMO_(Ped ped)
	{
		WEAPON::_REMOVE_ALL_PED_AMMO(ped);
	}

	static void LUA_NATIVE_WEAPON_SET_PED_AMMO(Ped PedIndex, Hash TypeOfWeapon, int AmountOfAmmo)
	{
		WEAPON::SET_PED_AMMO(PedIndex, TypeOfWeapon, AmountOfAmmo);
	}

	static void LUA_NATIVE_WEAPON_0x8A779706DA5CA3DD_(Ped ped, bool p1, int p2)
	{
		WEAPON::_0x8A779706DA5CA3DD(ped, p1, p2);
	}

	static void LUA_NATIVE_WEAPON_0x9409C62504A8F9E9_(Vehicle vehicle, bool p1)
	{
		WEAPON::_0x9409C62504A8F9E9(vehicle, p1);
	}

	static void LUA_NATIVE_WEAPON_SET_VEHICLE_WEAPON_HEADING_LIMITS_(Vehicle vehicle, int p1, float minHeading, float maxHeading)
	{
		WEAPON::_SET_VEHICLE_WEAPON_HEADING_LIMITS(vehicle, p1, minHeading, maxHeading);
	}

	static Any LUA_NATIVE_WEAPON_SET_VEHICLE_WEAPON_HEADING_LIMITS_2_(Vehicle vehicle, int p1, float minHeading, float maxHeading)
	{
		auto retval = WEAPON::_SET_VEHICLE_WEAPON_HEADING_LIMITS_2(vehicle, p1, minHeading, maxHeading);
		return retval;
	}

	static void LUA_NATIVE_WEAPON_SET_VEHICLE_WEAPON_HEADING(Vehicle vehicle, int seatIndex, float heading, bool p3)
	{
		WEAPON::SET_VEHICLE_WEAPON_HEADING(vehicle, seatIndex, heading, p3);
	}

	static void LUA_NATIVE_WEAPON_SET_PED_INFINITE_AMMO(Ped PedIndex, bool Infinite, Hash TypeOfWeapon)
	{
		WEAPON::SET_PED_INFINITE_AMMO(PedIndex, Infinite, TypeOfWeapon);
	}

	static void LUA_NATIVE_WEAPON_SET_PED_INFINITE_AMMO_CLIP_(Ped ped, bool toggle)
	{
		WEAPON::_SET_PED_INFINITE_AMMO_CLIP(ped, toggle);
	}

	static int LUA_NATIVE_WEAPON_GET_AMMO_IN_PED_WEAPON(Ped PedIndex, Hash TypeOfWeapon)
	{
		auto retval = WEAPON::GET_AMMO_IN_PED_WEAPON(PedIndex, TypeOfWeapon);
		return retval;
	}

	static int LUA_NATIVE_WEAPON_GET_MAX_AMMO_IN_CLIP(Ped PedIndex, Hash WeaponType, bool DoDeadCheck)
	{
		auto retval = WEAPON::GET_MAX_AMMO_IN_CLIP(PedIndex, WeaponType, DoDeadCheck);
		return retval;
	}

	static std::tuple<bool, int> LUA_NATIVE_WEAPON_GET_AMMO_IN_CLIP(Ped PedIndex, int ReturnAmmoInClip, Hash WeaponType)
	{
		std::tuple<bool, int> return_values;
		std::get<0>(return_values) = (bool)WEAPON::GET_AMMO_IN_CLIP(PedIndex, &ReturnAmmoInClip, WeaponType);
		std::get<1>(return_values) = ReturnAmmoInClip;

		return return_values;
	}

	static std::tuple<bool, int> LUA_NATIVE_WEAPON_GET_AMMO_IN_CLIP_BY_INVENTORY_UID_(Ped ped, int ammo, uintptr_t inventoryUid)
	{
		std::tuple<bool, int> return_values;
		std::get<0>(return_values) = (bool)WEAPON::_GET_AMMO_IN_CLIP_BY_INVENTORY_UID(ped, &ammo, (Any*)inventoryUid);
		std::get<1>(return_values) = ammo;

		return return_values;
	}

	static bool LUA_NATIVE_WEAPON_SET_AMMO_IN_CLIP(Ped PedIndex, Hash WeaponType, int AmmoInClip)
	{
		auto retval = (bool)WEAPON::SET_AMMO_IN_CLIP(PedIndex, WeaponType, AmmoInClip);
		return retval;
	}

	static Any LUA_NATIVE_WEAPON_REFILL_AMMO_IN_CLIP_(Ped ped, uintptr_t clipInventoryUid, int p2)
	{
		auto retval = WEAPON::_REFILL_AMMO_IN_CLIP(ped, (Any*)clipInventoryUid, p2);
		return retval;
	}

	static std::tuple<bool, int> LUA_NATIVE_WEAPON_GET_MAX_AMMO(Ped PedIndex, int ReturnMaxAmmo, Hash WeaponType)
	{
		std::tuple<bool, int> return_values;
		std::get<0>(return_values) = (bool)WEAPON::GET_MAX_AMMO(PedIndex, &ReturnMaxAmmo, WeaponType);
		std::get<1>(return_values) = ReturnMaxAmmo;

		return return_values;
	}

	static void LUA_NATIVE_WEAPON_SET_PED_AMMO_BY_TYPE(Ped PedIndex, Hash AmmoType, int AmmoAmount)
	{
		WEAPON::SET_PED_AMMO_BY_TYPE(PedIndex, AmmoType, AmmoAmount);
	}

	static int LUA_NATIVE_WEAPON_GET_PED_AMMO_BY_TYPE(Ped PedIndex, Hash AmmoType)
	{
		auto retval = WEAPON::GET_PED_AMMO_BY_TYPE(PedIndex, AmmoType);
		return retval;
	}

	static void LUA_NATIVE_WEAPON_SET_PED_AMMO_TO_DROP(Ped PedIndex, int MinAmount, int MaxAmount)
	{
		WEAPON::SET_PED_AMMO_TO_DROP(PedIndex, MinAmount, MaxAmount);
	}

	static Hash LUA_NATIVE_WEAPON_GET_AMMO_TYPE_FOR_WEAPON_(Hash weaponHash)
	{
		auto retval = WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(weaponHash);
		return retval;
	}

	static Hash LUA_NATIVE_WEAPON_GET_PED_AMMO_TYPE_FROM_WEAPON(Ped PedIndex, Hash WeaponType)
	{
		auto retval = WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(PedIndex, WeaponType);
		return retval;
	}

	static Hash LUA_NATIVE_WEAPON_GET_WEAPON_TYPE_FROM_AMMO_TYPE_(Hash ammoType)
	{
		auto retval = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(ammoType);
		return retval;
	}

	static Hash LUA_NATIVE_WEAPON_GET_WEAPON_COMPONENT_TYPE_MODEL_(Hash componentHash)
	{
		auto retval = WEAPON::_GET_WEAPON_COMPONENT_TYPE_MODEL(componentHash);
		return retval;
	}

	static Hash LUA_NATIVE_WEAPON_GET_WEAPONTYPE_MODEL_(Hash weaponHash)
	{
		auto retval = WEAPON::_GET_WEAPONTYPE_MODEL(weaponHash);
		return retval;
	}

	static Hash LUA_NATIVE_WEAPON_GET_WEAPONTYPE_SLOT_(Hash weaponHash)
	{
		auto retval = WEAPON::_GET_WEAPONTYPE_SLOT(weaponHash);
		return retval;
	}

	static Hash LUA_NATIVE_WEAPON_GET_WEAPONTYPE_GROUP(Hash weapon)
	{
		auto retval = WEAPON::GET_WEAPONTYPE_GROUP(weapon);
		return retval;
	}

	static Hash LUA_NATIVE_WEAPON_0xF8204EF17410BF43_(Hash weaponGroupHash, float p1, float p2, Any p3)
	{
		auto retval = WEAPON::_0xF8204EF17410BF43(weaponGroupHash, p1, p2, p3);
		return retval;
	}

	static bool LUA_NATIVE_WEAPON_IS_WEAPON_KIT_(Hash weaponHash)
	{
		auto retval = (bool)WEAPON::_IS_WEAPON_KIT(weaponHash);
		return retval;
	}

	static bool LUA_NATIVE_WEAPON_IS_WEAPON_KIT_2_(Hash weaponHash)
	{
		auto retval = (bool)WEAPON::_IS_WEAPON_KIT_2(weaponHash);
		return retval;
	}

	static bool LUA_NATIVE_WEAPON_IS_WEAPON_BOW(Hash weaponHash)
	{
		auto retval = (bool)WEAPON::IS_WEAPON_BOW(weaponHash);
		return retval;
	}

	static bool LUA_NATIVE_WEAPON_IS_WEAPON_LANTERN_(Hash weaponHash)
	{
		auto retval = (bool)WEAPON::_IS_WEAPON_LANTERN(weaponHash);
		return retval;
	}

	static bool LUA_NATIVE_WEAPON_IS_WEAPON_TORCH_(Hash weaponHash)
	{
		auto retval = (bool)WEAPON::_IS_WEAPON_TORCH(weaponHash);
		return retval;
	}

	static bool LUA_NATIVE_WEAPON_GIVE_WEAPON_TO_PED_WITH_OPTIONS(Ped ped, uintptr_t data, uintptr_t outData)
	{
		auto retval = (bool)WEAPON::GIVE_WEAPON_TO_PED_WITH_OPTIONS(ped, (Any*)data, (Any*)outData);
		return retval;
	}

	static Hash LUA_NATIVE_WEAPON_GIVE_WEAPON_TO_PED(Ped ped, Hash weaponHash, int ammoCount, bool bForceInHand, bool bForceInHolster, int attachPoint, bool bAllowMultipleCopies, float p7, float p8, Hash addReason, bool bIgnoreUnlocks, float permanentDegradation, bool p12)
	{
		auto retval = WEAPON::GIVE_WEAPON_TO_PED(ped, weaponHash, ammoCount, bForceInHand, bForceInHolster, attachPoint, bAllowMultipleCopies, p7, p8, addReason, bIgnoreUnlocks, permanentDegradation, p12);
		return retval;
	}

	static void LUA_NATIVE_WEAPON_SET_FORCE_CURRENT_WEAPON_INTO_COCKED_STATE_(Ped ped, int attachPoint)
	{
		WEAPON::_SET_FORCE_CURRENT_WEAPON_INTO_COCKED_STATE(ped, attachPoint);
	}

	static Any LUA_NATIVE_WEAPON_0x9F0E1892C7F228A8_(bool p0)
	{
		auto retval = WEAPON::_0x9F0E1892C7F228A8(p0);
		return retval;
	}

	static void LUA_NATIVE_WEAPON_HOLSTER_PED_WEAPONS_(Ped ped, bool p1, bool p2, bool p3, bool immediately)
	{
		WEAPON::_HOLSTER_PED_WEAPONS(ped, p1, p2, p3, immediately);
	}

	static void LUA_NATIVE_WEAPON_HIDE_PED_WEAPONS_(Ped ped, int p0, bool immediately)
	{
		WEAPON::_HIDE_PED_WEAPONS(ped, p0, immediately);
	}

	static void LUA_NATIVE_WEAPON_0x4820A6939D7CEF28_(Any p0, Any p1)
	{
		WEAPON::_0x4820A6939D7CEF28(p0, p1);
	}

	static void LUA_NATIVE_WEAPON_SET_CURRENT_PED_WEAPON(Ped PedIndex, Hash TypeOfWeapon, bool bForceInHand, int attachPoint, bool p4, bool p5)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(PedIndex, TypeOfWeapon, bForceInHand, attachPoint, p4, p5);
	}

	static std::tuple<bool, Hash> LUA_NATIVE_WEAPON_GET_CURRENT_PED_WEAPON(Ped PedIndex, Hash ReturnWeaponType, bool DoDeadCheck, int attachPoint, bool p4)
	{
		std::tuple<bool, Hash> return_values;
		std::get<0>(return_values) = (bool)WEAPON::GET_CURRENT_PED_WEAPON(PedIndex, &ReturnWeaponType, DoDeadCheck, attachPoint, p4);
		std::get<1>(return_values) = ReturnWeaponType;

		return return_values;
	}

	static Entity LUA_NATIVE_WEAPON_GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Ped PedIndex, int attachPoint)
	{
		auto retval = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(PedIndex, attachPoint);
		return retval;
	}

	static bool LUA_NATIVE_WEAPON_ENABLE_WEAPON_RESTORE_(Ped ped)
	{
		auto retval = (bool)WEAPON::_ENABLE_WEAPON_RESTORE(ped);
		return retval;
	}

	static Hash LUA_NATIVE_WEAPON_GET_PED_BACKUP_WEAPON(Ped ped, bool p1)
	{
		auto retval = WEAPON::GET_PED_BACKUP_WEAPON(ped, p1);
		return retval;
	}

	static Any LUA_NATIVE_WEAPON_0x486C96A0DCD2BC92_(Any p0, Any p1)
	{
		auto retval = WEAPON::_0x486C96A0DCD2BC92(p0, p1);
		return retval;
	}

	static Hash LUA_NATIVE_WEAPON_GET_PED_WORST_WEAPON_(Ped ped, bool p1, bool p2, bool p3)
	{
		auto retval = WEAPON::_GET_PED_WORST_WEAPON(ped, p1, p2, p3);
		return retval;
	}

	static Hash LUA_NATIVE_WEAPON_GET_BEST_PED_WEAPON(Ped PedIndex, bool p1, bool p2)
	{
		auto retval = WEAPON::GET_BEST_PED_WEAPON(PedIndex, p1, p2);
		return retval;
	}

	static Any LUA_NATIVE_WEAPON_GET_BEST_PED_WEAPON_IN_INVENTORY_(Ped ped, Any p1, uintptr_t guidPrimary)
	{
		auto retval = WEAPON::_GET_BEST_PED_WEAPON_IN_INVENTORY(ped, p1, (Any*)guidPrimary);
		return retval;
	}

	static void LUA_NATIVE_WEAPON_GET_BEST_PED_SHORTARM_GUID(Ped ped, uintptr_t outGUID, bool p2, bool p3)
	{
		WEAPON::GET_BEST_PED_SHORTARM_GUID(ped, (Any*)outGUID, p2, p3);
	}

	static bool LUA_NATIVE_WEAPON_GET_PED_WEAPON_GUID_AT_ATTACH_POINT(Ped ped, int attachPoint, uintptr_t weaponGuid)
	{
		auto retval = (bool)WEAPON::GET_PED_WEAPON_GUID_AT_ATTACH_POINT(ped, attachPoint, (Any*)weaponGuid);
		return retval;
	}

	static Hash LUA_NATIVE_WEAPON_GET_BEST_PED_WEAPON_IN_GROUP_(Ped ped, Hash weaponGroup, bool p2, bool p3)
	{
		auto retval = WEAPON::_GET_BEST_PED_WEAPON_IN_GROUP(ped, weaponGroup, p2, p3);
		return retval;
	}

	static Hash LUA_NATIVE_WEAPON_GET_DEFAULT_UNARMED_WEAPON_HASH_(Ped ped)
	{
		auto retval = WEAPON::_GET_DEFAULT_UNARMED_WEAPON_HASH(ped);
		return retval;
	}

	static void LUA_NATIVE_WEAPON_SET_AMMO_IN_TURRET_(Vehicle vehicle, Hash turretHash, int ammo)
	{
		WEAPON::_SET_AMMO_IN_TURRET(vehicle, turretHash, ammo);
	}

	static bool LUA_NATIVE_WEAPON_SET_CURRENT_PED_VEHICLE_WEAPON(Ped PedIndex, Hash TypeOfWeapon)
	{
		auto retval = (bool)WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(PedIndex, TypeOfWeapon);
		return retval;
	}

	static std::tuple<bool, Hash> LUA_NATIVE_WEAPON_GET_CURRENT_PED_VEHICLE_WEAPON(Ped PedIndex, Hash ReturnWeaponType)
	{
		std::tuple<bool, Hash> return_values;
		std::get<0>(return_values) = (bool)WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(PedIndex, &ReturnWeaponType);
		std::get<1>(return_values) = ReturnWeaponType;

		return return_values;
	}

	static bool LUA_NATIVE_WEAPON_IS_PED_ARMED(Ped ped, int flags)
	{
		auto retval = (bool)WEAPON::IS_PED_ARMED(ped, flags);
		return retval;
	}

	static Any LUA_NATIVE_WEAPON_0xA2091482ED42EF85_(Any p0, Any p1)
	{
		auto retval = WEAPON::_0xA2091482ED42EF85(p0, p1);
		return retval;
	}

	static bool LUA_NATIVE_WEAPON_IS_WEAPON_HOLSTER_STATE_CHANGING_(Ped ped)
	{
		auto retval = (bool)WEAPON::_IS_WEAPON_HOLSTER_STATE_CHANGING(ped);
		return retval;
	}

	static bool LUA_NATIVE_WEAPON_IS_WEAPON_VALID(Hash TypeOfWeapon)
	{
		auto retval = (bool)WEAPON::IS_WEAPON_VALID(TypeOfWeapon);
		return retval;
	}

	static bool LUA_NATIVE_WEAPON_IS_AMMO_VALID_(Hash ammoHash)
	{
		auto retval = (bool)WEAPON::_IS_AMMO_VALID(ammoHash);
		return retval;
	}

	static Any LUA_NATIVE_WEAPON_0x23BF601A42F329A0_(Any p0)
	{
		auto retval = WEAPON::_0x23BF601A42F329A0(p0);
		return retval;
	}

	static bool LUA_NATIVE_WEAPON_IS_PED_CARRYING_WEAPON(Ped ped, Hash weaponHash)
	{
		auto retval = (bool)WEAPON::IS_PED_CARRYING_WEAPON(ped, weaponHash);
		return retval;
	}

	static bool LUA_NATIVE_WEAPON_HAS_PED_GOT_WEAPON(Ped PedIndex, Hash TypeOfWeapon, int GeneralWeaponType, bool p3)
	{
		auto retval = (bool)WEAPON::HAS_PED_GOT_WEAPON(PedIndex, TypeOfWeapon, GeneralWeaponType, p3);
		return retval;
	}

	static bool LUA_NATIVE_WEAPON_0x07E1C35F0078C3F9_(Ped ped, Hash weapon)
	{
		auto retval = (bool)WEAPON::_0x07E1C35F0078C3F9(ped, weapon);
		return retval;
	}

	static bool LUA_NATIVE_WEAPON_IS_PED_WEAPON_READY_TO_SHOOT(Ped PedIndex)
	{
		auto retval = (bool)WEAPON::IS_PED_WEAPON_READY_TO_SHOOT(PedIndex);
		return retval;
	}

	static Hash LUA_NATIVE_WEAPON_GET_PED_WEAPON_IN_SLOT_(Ped ped, Hash slotHash)
	{
		auto retval = WEAPON::_GET_PED_WEAPON_IN_SLOT(ped, slotHash);
		return retval;
	}

	static void LUA_NATIVE_WEAPON_GIVE_DELAYED_WEAPON_TO_PED(Ped PedIndex, Hash TypeOfWeapon, int AmountOfAmmo, bool bSetAsCurrentWeapon, Hash addReason)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PedIndex, TypeOfWeapon, AmountOfAmmo, bSetAsCurrentWeapon, addReason);
	}

	static void LUA_NATIVE_WEAPON_REMOVE_ALL_PED_WEAPONS(Ped PedIndex, bool p1, bool p2)
	{
		WEAPON::REMOVE_ALL_PED_WEAPONS(PedIndex, p1, p2);
	}

	static void LUA_NATIVE_WEAPON_REMOVE_WEAPON_FROM_PED(Ped PedIndex, Hash TypeOfWeapon, bool p2, Hash removeReason)
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(PedIndex, TypeOfWeapon, p2, removeReason);
	}

	static void LUA_NATIVE_WEAPON_REMOVE_WEAPON_FROM_PED_BY_GUID_(Ped ped, uintptr_t weaponGuid, Hash removeReason)
	{
		WEAPON::_REMOVE_WEAPON_FROM_PED_BY_GUID(ped, (Any*)weaponGuid, removeReason);
	}

	static void LUA_NATIVE_WEAPON_HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(Ped PedIndex, bool HideWeaponFlag)
	{
		WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PedIndex, HideWeaponFlag);
	}

	static void LUA_NATIVE_WEAPON_SET_PED_CURRENT_WEAPON_VISIBLE(Ped PedIndex, bool VisibleFlag, bool DestroyObject, bool DeadCheck, bool StoreDestroyedWeaponClipValue)
	{
		WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PedIndex, VisibleFlag, DestroyObject, DeadCheck, StoreDestroyedWeaponClipValue);
	}

	static void LUA_NATIVE_WEAPON_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY_(Ped ped, int attachPoint, bool visible)
	{
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(ped, attachPoint, visible);
	}

	static void LUA_NATIVE_WEAPON_SET_PED_ALL_WEAPONS_VISIBILITY_(Ped ped, bool visible)
	{
		WEAPON::_SET_PED_ALL_WEAPONS_VISIBILITY(ped, visible);
	}

	static void LUA_NATIVE_WEAPON_SET_PED_DROPS_WEAPONS_WHEN_DEAD(Ped PedIndex, bool DropsWeaponsFlag)
	{
		WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(PedIndex, DropsWeaponsFlag);
	}

	static void LUA_NATIVE_WEAPON_0x431240A58484D5D0_(Ped ped, bool toggle)
	{
		WEAPON::_0x431240A58484D5D0(ped, toggle);
	}

	static void LUA_NATIVE_WEAPON_0x45E57FDD531C9477_(Ped ped, bool toggle)
	{
		WEAPON::_0x45E57FDD531C9477(ped, toggle);
	}

	static void LUA_NATIVE_WEAPON_0xF08D8FEB455F2C8C_(Ped ped, bool toggle)
	{
		WEAPON::_0xF08D8FEB455F2C8C(ped, toggle);
	}

	static void LUA_NATIVE_WEAPON_0x16D9841A85FA627E_(Ped ped, bool toggle)
	{
		WEAPON::_0x16D9841A85FA627E(ped, toggle);
	}

	static std::tuple<bool, Vector3> LUA_NATIVE_WEAPON_GET_PED_LAST_WEAPON_IMPACT_COORD(Ped PedIndex, Vector3 ImpactCoord)
	{
		std::tuple<bool, Vector3> return_values;
		std::get<0>(return_values) = (bool)WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(PedIndex, &ImpactCoord);
		std::get<1>(return_values) = ImpactCoord;

		return return_values;
	}

	static void LUA_NATIVE_WEAPON_CLEAR_PED_LAST_WEAPON_DAMAGE_(Ped ped)
	{
		WEAPON::_CLEAR_PED_LAST_WEAPON_DAMAGE(ped);
	}

	static bool LUA_NATIVE_WEAPON_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON_(Entity entity, Hash weaponName, int weaponType)
	{
		auto retval = (bool)WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(entity, weaponName, weaponType);
		return retval;
	}

	static void LUA_NATIVE_WEAPON_SET_PED_DROPS_INVENTORY_WEAPON(Ped PedIndex, Hash WeaponType, float offsetX, float offsetY, float offsetZ, int ammoAmount)
	{
		WEAPON::SET_PED_DROPS_INVENTORY_WEAPON(PedIndex, WeaponType, offsetX, offsetY, offsetZ, ammoAmount);
	}

	static void LUA_NATIVE_WEAPON_0xB0FB9B196A3D13F0_(Any p0, Any p1, Any p2)
	{
		WEAPON::_0xB0FB9B196A3D13F0(p0, p1, p2);
	}

	static void LUA_NATIVE_WEAPON_0x2EBF70E1D8C06683_(Ped ped, Hash p1)
	{
		WEAPON::_0x2EBF70E1D8C06683(ped, p1);
	}

	static void LUA_NATIVE_WEAPON_0x63B83A526329AFBC_(Any p0)
	{
		WEAPON::_0x63B83A526329AFBC(p0);
	}

	static Any LUA_NATIVE_WEAPON_MAKE_PED_RELOAD_(Ped ped)
	{
		auto retval = WEAPON::_MAKE_PED_RELOAD(ped);
		return retval;
	}

	static Any LUA_NATIVE_WEAPON_REFILL_AMMO_IN_CURRENT_PED_WEAPON_(Ped ped)
	{
		auto retval = WEAPON::_REFILL_AMMO_IN_CURRENT_PED_WEAPON(ped);
		return retval;
	}

	static Entity LUA_NATIVE_WEAPON_MAKE_PED_DROP_WEAPON(Ped ped, bool p1, int attachPoint, bool p3, bool p4)
	{
		auto retval = WEAPON::MAKE_PED_DROP_WEAPON(ped, p1, attachPoint, p3, p4);
		return retval;
	}

	static Hash LUA_NATIVE_WEAPON_GET_PED_CURRENT_HELD_WEAPON_(Ped ped)
	{
		auto retval = WEAPON::_GET_PED_CURRENT_HELD_WEAPON(ped);
		return retval;
	}

	static void LUA_NATIVE_WEAPON_SET_ALLOW_ANY_WEAPON_DROP(Ped ped, bool toggle)
	{
		WEAPON::SET_ALLOW_ANY_WEAPON_DROP(ped, toggle);
	}

	static void LUA_NATIVE_WEAPON_0xA3716A77DCF17424_(Any p0, Any p1, Any p2)
	{
		WEAPON::_0xA3716A77DCF17424(p0, p1, p2);
	}

	static void LUA_NATIVE_WEAPON_0x457B16951AD77C1B_(Any p0)
	{
		WEAPON::_0x457B16951AD77C1B(p0);
	}

	static Any LUA_NATIVE_WEAPON_0x3799EFCC3C8CD5E1_(Any p0)
	{
		auto retval = WEAPON::_0x3799EFCC3C8CD5E1(p0);
		return retval;
	}

	static float LUA_NATIVE_WEAPON_GET_MAX_LOCKON_DISTANCE_OF_CURRENT_PED_WEAPON_(Ped ped)
	{
		auto retval = WEAPON::_GET_MAX_LOCKON_DISTANCE_OF_CURRENT_PED_WEAPON(ped);
		return retval;
	}

	static void LUA_NATIVE_WEAPON_REMOVE_WEAPON_COMPONENT_FROM_PED_(Ped ped, Hash componentHash, Hash weaponHash)
	{
		WEAPON::_REMOVE_WEAPON_COMPONENT_FROM_PED(ped, componentHash, weaponHash);
	}

	static bool LUA_NATIVE_WEAPON_HAS_PED_GOT_WEAPON_COMPONENT_(Ped ped, Hash componentHash, Hash weaponHash)
	{
		auto retval = (bool)WEAPON::_HAS_PED_GOT_WEAPON_COMPONENT(ped, componentHash, weaponHash);
		return retval;
	}

	static bool LUA_NATIVE_WEAPON_IS_PED_CURRENT_WEAPON_HOLSTERED_(Ped ped)
	{
		auto retval = (bool)WEAPON::_IS_PED_CURRENT_WEAPON_HOLSTERED(ped);
		return retval;
	}

	static Any LUA_NATIVE_WEAPON_0xD2209866B0CB72EA_(Any p0, Any p1)
	{
		auto retval = WEAPON::_0xD2209866B0CB72EA(p0, p1);
		return retval;
	}

	static void LUA_NATIVE_WEAPON_REQUEST_WEAPON_ASSET_(Hash weaponHash, int p1, bool p2)
	{
		WEAPON::_REQUEST_WEAPON_ASSET(weaponHash, p1, p2);
	}

	static bool LUA_NATIVE_WEAPON_HAS_WEAPON_ASSET_LOADED_(Hash weaponHash)
	{
		auto retval = (bool)WEAPON::_HAS_WEAPON_ASSET_LOADED(weaponHash);
		return retval;
	}

	static void LUA_NATIVE_WEAPON_REMOVE_WEAPON_ASSET_(Hash weaponHash)
	{
		WEAPON::_REMOVE_WEAPON_ASSET(weaponHash);
	}

	static void LUA_NATIVE_WEAPON_0xE9B3FEC825668291_(Any p0, Any p1, Any p2)
	{
		WEAPON::_0xE9B3FEC825668291(p0, p1, p2);
	}

	static Any LUA_NATIVE_WEAPON_0x9CCA3131E6B53C68_(Any p0, Any p1, Any p2)
	{
		auto retval = WEAPON::_0x9CCA3131E6B53C68(p0, p1, p2);
		return retval;
	}

	static const char* LUA_NATIVE_WEAPON_GET_WEAPON_NAME_2_(Hash weaponHash)
	{
		auto retval = WEAPON::_GET_WEAPON_NAME_2(weaponHash);
		return retval;
	}

	static const char* LUA_NATIVE_WEAPON_GET_WEAPON_NAME_(Hash weaponHash)
	{
		auto retval = WEAPON::_GET_WEAPON_NAME(weaponHash);
		return retval;
	}

	static const char* LUA_NATIVE_WEAPON_GET_WEAPON_NAME_WITH_PERMANENT_DEGRADATION_(Hash weaponHash, float permanentDegradationLevel)
	{
		auto retval = WEAPON::_GET_WEAPON_NAME_WITH_PERMANENT_DEGRADATION(weaponHash, permanentDegradationLevel);
		return retval;
	}

	static void LUA_NATIVE_WEAPON_0xB832F1A686B9B810_(Any p0, Any p1, Any p2)
	{
		WEAPON::_0xB832F1A686B9B810(p0, p1, p2);
	}

	static Any LUA_NATIVE_WEAPON_0x5A695BD328586B44_(Any p0, Any p1)
	{
		auto retval = WEAPON::_0x5A695BD328586B44(p0, p1);
		return retval;
	}

	static void LUA_NATIVE_WEAPON_0x641351E9AD103890_(Any p0, Any p1)
	{
		WEAPON::_0x641351E9AD103890(p0, p1);
	}

	static void LUA_NATIVE_WEAPON_SET_INSTANTLY_EQUIP_WEAPON_PICKUPS(Ped ped, bool toggle)
	{
		WEAPON::SET_INSTANTLY_EQUIP_WEAPON_PICKUPS(ped, toggle);
	}

	static void LUA_NATIVE_WEAPON_SET_FORCE_AUTO_EQUIP_(Ped ped, bool toggle)
	{
		WEAPON::_SET_FORCE_AUTO_EQUIP(ped, toggle);
	}

	static void LUA_NATIVE_WEAPON_SEND_WEAPON_TO_INVENTORY_(Ped ped, Hash weaponHash)
	{
		WEAPON::_SEND_WEAPON_TO_INVENTORY(ped, weaponHash);
	}

	static void LUA_NATIVE_WEAPON_0x14FF0C2545527F9B_(Ped horse, Hash weaponHash, Ped ped)
	{
		WEAPON::_0x14FF0C2545527F9B(horse, weaponHash, ped);
	}

	static void LUA_NATIVE_WEAPON_0xD4C6E24D955FF061_(Any p0)
	{
		WEAPON::_0xD4C6E24D955FF061(p0);
	}

	static Any LUA_NATIVE_WEAPON_0xAFFD0CCF31F469B8_(Any p0)
	{
		auto retval = WEAPON::_0xAFFD0CCF31F469B8(p0);
		return retval;
	}

	static Hash LUA_NATIVE_WEAPON_GET_WEAPON_STAT_ID_(Hash weaponHash)
	{
		auto retval = WEAPON::_GET_WEAPON_STAT_ID(weaponHash);
		return retval;
	}

	static bool LUA_NATIVE_WEAPON_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON_RECENTLY_(Entity entity, Hash weaponHash, int ms)
	{
		auto retval = (bool)WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON_RECENTLY(entity, weaponHash, ms);
		return retval;
	}

	static Hash LUA_NATIVE_WEAPON_GET_PED_HOGTIE_WEAPON_(Ped ped)
	{
		auto retval = WEAPON::_GET_PED_HOGTIE_WEAPON(ped);
		return retval;
	}

	static Object LUA_NATIVE_WEAPON_CREATE_WEAPON_OBJECT_(Hash weaponHash, int ammoCount, float x, float y, float z, bool showWorldModel, float scale)
	{
		auto retval = WEAPON::_CREATE_WEAPON_OBJECT(weaponHash, ammoCount, x, y, z, showWorldModel, scale);
		return retval;
	}

	static void LUA_NATIVE_WEAPON_REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(Object WeaponObjectIndex, Hash WeaponComponent)
	{
		WEAPON::REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(WeaponObjectIndex, WeaponComponent);
	}

	static bool LUA_NATIVE_WEAPON_HAS_WEAPON_GOT_WEAPON_COMPONENT(Object WeaponObjectIndex, Hash WeaponComponent)
	{
		auto retval = (bool)WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(WeaponObjectIndex, WeaponComponent);
		return retval;
	}

	static Object LUA_NATIVE_WEAPON_GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT_(Object weaponObject, Ped ped, Hash componentHash, bool p3)
	{
		WEAPON::_GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(&weaponObject, ped, componentHash, p3);
		return weaponObject;
	}

	static Object LUA_NATIVE_WEAPON_GET_WEAPON_OBJECT_FROM_PED_(Ped ped, bool p1)
	{
		auto retval = WEAPON::_GET_WEAPON_OBJECT_FROM_PED(ped, p1);
		return retval;
	}

	static Object LUA_NATIVE_WEAPON_GET_PED_WEAPON_OBJECT_(Ped ped, bool p1)
	{
		auto retval = WEAPON::_GET_PED_WEAPON_OBJECT(ped, p1);
		return retval;
	}

	static void LUA_NATIVE_WEAPON_GIVE_WEAPON_COMPONENT_TO_ENTITY_(Entity entity, Hash componentHash, Hash weaponHash, bool p3)
	{
		WEAPON::_GIVE_WEAPON_COMPONENT_TO_ENTITY(entity, componentHash, weaponHash, p3);
	}

	static void LUA_NATIVE_WEAPON_0x74C9080FDD1BB48E_(Any p0, Any p1)
	{
		WEAPON::_0x74C9080FDD1BB48E(p0, p1);
	}

	static void LUA_NATIVE_WEAPON_0x74C9080FDD1BB48F_(Any p0, Any p1)
	{
		WEAPON::_0x74C9080FDD1BB48F(p0, p1);
	}

	static void LUA_NATIVE_WEAPON_0x74C2365FDD1BB48F_(Any p0, Any p1)
	{
		WEAPON::_0x74C2365FDD1BB48F(p0, p1);
	}

	static void LUA_NATIVE_WEAPON_0x74C90AAACC1DD48F_(Any p0)
	{
		WEAPON::_0x74C90AAACC1DD48F(p0);
	}

	static Any LUA_NATIVE_WEAPON_0x74C8000FDD1BB111_(Any p0, Any p1)
	{
		auto retval = WEAPON::_0x74C8000FDD1BB111(p0, p1);
		return retval;
	}

	static Any LUA_NATIVE_WEAPON_0x74C8000FDD1BB222_(Any p0, Any p1)
	{
		auto retval = WEAPON::_0x74C8000FDD1BB222(p0, p1);
		return retval;
	}

	static Hash LUA_NATIVE_WEAPON_GET_WEAPON_GUN_SPINNING_WEAPON_EMOTE_TRICK_TYPE_HASH_(Hash emote, int weaponEmoteTrickType)
	{
		auto retval = WEAPON::_GET_WEAPON_GUN_SPINNING_WEAPON_EMOTE_TRICK_TYPE_HASH(emote, weaponEmoteTrickType);
		return retval;
	}

	static void LUA_NATIVE_WEAPON_SET_ACTIVE_GUN_SPINNING_EQUIP_KIT_EMOTE_TWIRL_(Ped ped, Hash emote)
	{
		WEAPON::_SET_ACTIVE_GUN_SPINNING_EQUIP_KIT_EMOTE_TWIRL(ped, emote);
	}

	static Hash LUA_NATIVE_WEAPON_GET_PED_GUN_SPINNING_EQUIPPED_KIT_EMOTE_TWIRL_(Ped ped)
	{
		auto retval = WEAPON::_GET_PED_GUN_SPINNING_EQUIPPED_KIT_EMOTE_TWIRL(ped);
		return retval;
	}

	static void LUA_NATIVE_WEAPON_SET_ACTIVE_GUN_SPINNING_KIT_EMOTE_TWIRL_(Ped ped, int weaponEmoteTrickType, Hash spin)
	{
		WEAPON::_SET_ACTIVE_GUN_SPINNING_KIT_EMOTE_TWIRL(ped, weaponEmoteTrickType, spin);
	}

	static Hash LUA_NATIVE_WEAPON_GET_PED_GUN_SPINNING_HASH_FROM_WEAPON_EMOTE_VARIATION_(Ped ped, int weaponEmoteVariation)
	{
		auto retval = WEAPON::_GET_PED_GUN_SPINNING_HASH_FROM_WEAPON_EMOTE_VARIATION(ped, weaponEmoteVariation);
		return retval;
	}

	static int LUA_NATIVE_WEAPON_GET_WEAPON_EMOTE_VARIATION_(Ped ped, int variation)
	{
		auto retval = WEAPON::_GET_WEAPON_EMOTE_VARIATION(ped, variation);
		return retval;
	}

	static void LUA_NATIVE_WEAPON_SET_GUN_SPINNING_INVENTORY_SLOT_ID_ACTIVATE_(Ped ped, int emoteType)
	{
		WEAPON::_SET_GUN_SPINNING_INVENTORY_SLOT_ID_ACTIVATE(ped, emoteType);
	}

	static bool LUA_NATIVE_WEAPON_GET_CAN_TWIRL_WEAPON_(Hash weaponHash)
	{
		auto retval = (bool)WEAPON::_GET_CAN_TWIRL_WEAPON(weaponHash);
		return retval;
	}

	static bool LUA_NATIVE_WEAPON_GET_CORRECT_KIT_EMOTE_TWIRL_GUN_(Ped ped, uintptr_t weaponGuid)
	{
		auto retval = (bool)WEAPON::_GET_CORRECT_KIT_EMOTE_TWIRL_GUN(ped, (Any*)weaponGuid);
		return retval;
	}

	static Any LUA_NATIVE_WEAPON_0xBC9444F2FF94A9C0_(Any p0)
	{
		auto retval = WEAPON::_0xBC9444F2FF94A9C0(p0);
		return retval;
	}

	static Hash LUA_NATIVE_WEAPON_GET_DEFAULT_PED_WEAPON_COLLECTION_(Hash pedModel)
	{
		auto retval = WEAPON::_GET_DEFAULT_PED_WEAPON_COLLECTION(pedModel);
		return retval;
	}

	static void LUA_NATIVE_WEAPON_GIVE_WEAPON_COLLECTION_TO_PED_(Ped ped, Hash weaponCollection)
	{
		WEAPON::_GIVE_WEAPON_COLLECTION_TO_PED(ped, weaponCollection);
	}

	static bool LUA_NATIVE_WEAPON_0xF252A85B8F3F8C58_(Hash weaponCollection, Hash dualwieldVariant)
	{
		auto retval = (bool)WEAPON::_0xF252A85B8F3F8C58(weaponCollection, dualwieldVariant);
		return retval;
	}

	static Hash LUA_NATIVE_WEAPON_0x9EEFD670F10656D7_(Hash weaponCollection, Hash weaponGroup)
	{
		auto retval = WEAPON::_0x9EEFD670F10656D7(weaponCollection, weaponGroup);
		return retval;
	}

	static Any LUA_NATIVE_WEAPON_0xF2F585411E748B9C_(Any p0, Any p1)
	{
		auto retval = WEAPON::_0xF2F585411E748B9C(p0, p1);
		return retval;
	}

	static int LUA_NATIVE_WEAPON_GET_WEAPON_CLIP_SIZE(Hash weaponHash)
	{
		auto retval = WEAPON::GET_WEAPON_CLIP_SIZE(weaponHash);
		return retval;
	}

	static void LUA_NATIVE_WEAPON_0xA769D753922B031B_(Any p0, Any p1, Any p2)
	{
		WEAPON::_0xA769D753922B031B(p0, p1, p2);
	}

	static void LUA_NATIVE_WEAPON_0xC5899C4CD2E2495D_(Any p0)
	{
		WEAPON::_0xC5899C4CD2E2495D(p0);
	}

	static bool LUA_NATIVE_WEAPON_GET_ALLOW_DUAL_WIELD(Ped ped)
	{
		auto retval = (bool)WEAPON::GET_ALLOW_DUAL_WIELD(ped);
		return retval;
	}

	static void LUA_NATIVE_WEAPON_SET_ALLOW_DUAL_WIELD_(Ped ped, bool allow)
	{
		WEAPON::_SET_ALLOW_DUAL_WIELD(ped, allow);
	}

	static bool LUA_NATIVE_WEAPON_0x44C8F4908F1B2622_(Ped ped, Hash ammoHash)
	{
		auto retval = (bool)WEAPON::_0x44C8F4908F1B2622(ped, ammoHash);
		return retval;
	}

	static bool LUA_NATIVE_WEAPON_IS_WEAPON_KNIFE_(Hash weaponHash)
	{
		auto retval = (bool)WEAPON::_IS_WEAPON_KNIFE(weaponHash);
		return retval;
	}

	static bool LUA_NATIVE_WEAPON_IS_WEAPON_REVOLVER(Hash weaponHash)
	{
		auto retval = (bool)WEAPON::IS_WEAPON_REVOLVER(weaponHash);
		return retval;
	}

	static bool LUA_NATIVE_WEAPON_IS_WEAPON_PISTOL(Hash weaponHash)
	{
		auto retval = (bool)WEAPON::IS_WEAPON_PISTOL(weaponHash);
		return retval;
	}

	static bool LUA_NATIVE_WEAPON_IS_WEAPON_REPEATER(Hash weaponHash)
	{
		auto retval = (bool)WEAPON::IS_WEAPON_REPEATER(weaponHash);
		return retval;
	}

	static bool LUA_NATIVE_WEAPON_IS_WEAPON_RIFLE(Hash weaponHash)
	{
		auto retval = (bool)WEAPON::IS_WEAPON_RIFLE(weaponHash);
		return retval;
	}

	static bool LUA_NATIVE_WEAPON_IS_WEAPON_SHOTGUN(Hash weaponHash)
	{
		auto retval = (bool)WEAPON::IS_WEAPON_SHOTGUN(weaponHash);
		return retval;
	}

	static bool LUA_NATIVE_WEAPON_IS_WEAPON_SNIPER_(Hash weaponHash)
	{
		auto retval = (bool)WEAPON::_IS_WEAPON_SNIPER(weaponHash);
		return retval;
	}

	static bool LUA_NATIVE_WEAPON_IS_WEAPON_MELEE_WEAPON(Hash weaponHash)
	{
		auto retval = (bool)WEAPON::IS_WEAPON_MELEE_WEAPON(weaponHash);
		return retval;
	}

	static bool LUA_NATIVE_WEAPON_IS_WEAPON_THROWABLE_(Hash weaponHash)
	{
		auto retval = (bool)WEAPON::_IS_WEAPON_THROWABLE(weaponHash);
		return retval;
	}

	static bool LUA_NATIVE_WEAPON_IS_WEAPON_LASSO_(Hash weaponHash)
	{
		auto retval = (bool)WEAPON::_IS_WEAPON_LASSO(weaponHash);
		return retval;
	}

	static bool LUA_NATIVE_WEAPON_IS_WEAPON_BINOCULARS_(Hash weaponHash)
	{
		auto retval = (bool)WEAPON::_IS_WEAPON_BINOCULARS(weaponHash);
		return retval;
	}

	static bool LUA_NATIVE_WEAPON_IS_WEAPON_A_GUN(Hash weaponHash)
	{
		auto retval = (bool)WEAPON::IS_WEAPON_A_GUN(weaponHash);
		return retval;
	}

	static bool LUA_NATIVE_WEAPON_IS_WEAPON_TWO_HANDED_(Hash weaponHash)
	{
		auto retval = (bool)WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash);
		return retval;
	}

	static bool LUA_NATIVE_WEAPON_IS_WEAPON_ONE_HANDED_(Hash weaponHash)
	{
		auto retval = (bool)WEAPON::_IS_WEAPON_ONE_HANDED(weaponHash);
		return retval;
	}

	static bool LUA_NATIVE_WEAPON_IS_WEAPON_SILENT_(Hash weaponHash)
	{
		auto retval = (bool)WEAPON::_IS_WEAPON_SILENT(weaponHash);
		return retval;
	}

	static Any LUA_NATIVE_WEAPON_0xEA522F991E120D45_(Any p0)
	{
		auto retval = WEAPON::_0xEA522F991E120D45(p0);
		return retval;
	}

	static bool LUA_NATIVE_WEAPON_IS_AMMO_SILENT_(Hash ammoHash)
	{
		auto retval = (bool)WEAPON::_IS_AMMO_SILENT(ammoHash);
		return retval;
	}

	static bool LUA_NATIVE_WEAPON_IS_AMMO_SILENT_2_(Hash ammoHash)
	{
		auto retval = (bool)WEAPON::_IS_AMMO_SILENT_2(ammoHash);
		return retval;
	}

	static bool LUA_NATIVE_WEAPON_SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(Hash weaponHash)
	{
		auto retval = (bool)WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(weaponHash);
		return retval;
	}

	static Any LUA_NATIVE_WEAPON_0x5B235F24472F2C3B_(Any p0, Any p1)
	{
		auto retval = WEAPON::_0x5B235F24472F2C3B(p0, p1);
		return retval;
	}

	static Any LUA_NATIVE_WEAPON_0xBFCA7AFABF9D7967_(Any p0, Any p1)
	{
		auto retval = WEAPON::_0xBFCA7AFABF9D7967(p0, p1);
		return retval;
	}

	static Any LUA_NATIVE_WEAPON_0x495A04CAEC263AF8_(Any p0, Any p1)
	{
		auto retval = WEAPON::_0x495A04CAEC263AF8(p0, p1);
		return retval;
	}

	static Any LUA_NATIVE_WEAPON_0x95CA12E2C68043E5_(Any p0, Any p1)
	{
		auto retval = WEAPON::_0x95CA12E2C68043E5(p0, p1);
		return retval;
	}

	static Any LUA_NATIVE_WEAPON_0xABC18A28BAD4B46F_(Any p0, Any p1)
	{
		auto retval = WEAPON::_0xABC18A28BAD4B46F(p0, p1);
		return retval;
	}

	static Any LUA_NATIVE_WEAPON_0x80BB243789008A82_(Any p0, Any p1)
	{
		auto retval = WEAPON::_0x80BB243789008A82(p0, p1);
		return retval;
	}

	static float LUA_NATIVE_WEAPON_GET_WEAPON_DAMAGE_(Object weaponObject)
	{
		auto retval = WEAPON::_GET_WEAPON_DAMAGE(weaponObject);
		return retval;
	}

	static void LUA_NATIVE_WEAPON_SET_WEAPON_DAMAGE_(Object weaponObject, float level, bool p2)
	{
		WEAPON::_SET_WEAPON_DAMAGE(weaponObject, level, p2);
	}

	static float LUA_NATIVE_WEAPON_GET_WEAPON_DIRT_(Object weaponObject)
	{
		auto retval = WEAPON::_GET_WEAPON_DIRT(weaponObject);
		return retval;
	}

	static void LUA_NATIVE_WEAPON_SET_WEAPON_DIRT_(Object weaponObject, float level, bool p2)
	{
		WEAPON::_SET_WEAPON_DIRT(weaponObject, level, p2);
	}

	static float LUA_NATIVE_WEAPON_GET_WEAPON_SOOT_(Object weaponObject)
	{
		auto retval = WEAPON::_GET_WEAPON_SOOT(weaponObject);
		return retval;
	}

	static void LUA_NATIVE_WEAPON_SET_WEAPON_SOOT_(Object weaponObject, float level, bool p2)
	{
		WEAPON::_SET_WEAPON_SOOT(weaponObject, level, p2);
	}

	static void LUA_NATIVE_WEAPON_SET_WEAPON_LEVEL_THRESHOLD_(Object weaponObject, float threshold)
	{
		WEAPON::_SET_WEAPON_LEVEL_THRESHOLD(weaponObject, threshold);
	}

	static float LUA_NATIVE_WEAPON_GET_WEAPON_DEGRADATION(Object weaponObject)
	{
		auto retval = WEAPON::GET_WEAPON_DEGRADATION(weaponObject);
		return retval;
	}

	static float LUA_NATIVE_WEAPON_GET_WEAPON_PERMANENT_DEGRADATION(Object weaponObject)
	{
		auto retval = WEAPON::GET_WEAPON_PERMANENT_DEGRADATION(weaponObject);
		return retval;
	}

	static void LUA_NATIVE_WEAPON_SET_WEAPON_DEGRADATION_(Object weaponObject, float level)
	{
		WEAPON::_SET_WEAPON_DEGRADATION(weaponObject, level);
	}

	static void LUA_NATIVE_WEAPON_LISTEN_PROJECTILE_HIT_EVENTS_(bool listen)
	{
		WEAPON::_LISTEN_PROJECTILE_HIT_EVENTS(listen);
	}

	static float LUA_NATIVE_WEAPON_GET_WEAPON_SCALE_(Object weaponObject)
	{
		auto retval = WEAPON::_GET_WEAPON_SCALE(weaponObject);
		return retval;
	}

	static void LUA_NATIVE_WEAPON_SET_WEAPON_SCALE_(Object weaponObject, float scale)
	{
		WEAPON::_SET_WEAPON_SCALE(weaponObject, scale);
	}

	static Any LUA_NATIVE_WEAPON_0x58425FCA3D3A2D15_(Any p0)
	{
		auto retval = WEAPON::_0x58425FCA3D3A2D15(p0);
		return retval;
	}

	static Any LUA_NATIVE_WEAPON_0xEC97101A8F311282_(Any p0)
	{
		auto retval = WEAPON::_0xEC97101A8F311282(p0);
		return retval;
	}

	static Hash LUA_NATIVE_WEAPON_GET_CURRENT_PED_WEAPON_AMMO_TYPE_(Ped ped, Object weaponObject)
	{
		auto retval = WEAPON::_GET_CURRENT_PED_WEAPON_AMMO_TYPE(ped, weaponObject);
		return retval;
	}

	static Hash LUA_NATIVE_WEAPON_GET_CURRENT_AMMO_TYPE_FROM_GUID_(Ped ped, uintptr_t weaponGuid)
	{
		auto retval = WEAPON::_GET_CURRENT_AMMO_TYPE_FROM_GUID(ped, (Any*)weaponGuid);
		return retval;
	}

	static bool LUA_NATIVE_WEAPON_IS_AMMO_TYPE_VALID_FOR_WEAPON_(Hash weaponHash, Hash ammoHash)
	{
		auto retval = (bool)WEAPON::_IS_AMMO_TYPE_VALID_FOR_WEAPON(weaponHash, ammoHash);
		return retval;
	}

	static void LUA_NATIVE_WEAPON_SET_AMMO_TYPE_FOR_PED_WEAPON_(Ped ped, Hash weaponHash, Hash ammoHash)
	{
		WEAPON::_SET_AMMO_TYPE_FOR_PED_WEAPON(ped, weaponHash, ammoHash);
	}

	static void LUA_NATIVE_WEAPON_0x183CE355115B6E75_(Any p0, Any p1)
	{
		WEAPON::_0x183CE355115B6E75(p0, p1);
	}

	static void LUA_NATIVE_WEAPON_SET_AMMO_TYPE_FOR_PED_WEAPON_INVENTORY_(Ped ped, uintptr_t weaponInventoryUid, Hash ammoHash)
	{
		WEAPON::_SET_AMMO_TYPE_FOR_PED_WEAPON_INVENTORY(ped, (Any*)weaponInventoryUid, ammoHash);
	}

	static void LUA_NATIVE_WEAPON_DISABLE_AMMO_TYPE_FOR_PED_WEAPON_(Ped ped, Hash weaponHash, Hash ammoHash)
	{
		WEAPON::_DISABLE_AMMO_TYPE_FOR_PED_WEAPON(ped, weaponHash, ammoHash);
	}

	static void LUA_NATIVE_WEAPON_DISABLE_AMMO_TYPE_FOR_PED_(Ped ped, Hash ammoHash)
	{
		WEAPON::_DISABLE_AMMO_TYPE_FOR_PED(ped, ammoHash);
	}

	static void LUA_NATIVE_WEAPON_0xD63B4BA3A02A99E0_(Any p0, Any p1)
	{
		WEAPON::_0xD63B4BA3A02A99E0(p0, p1);
	}

	static void LUA_NATIVE_WEAPON_ENABLE_AMMO_TYPE_FOR_PED_WEAPON_(Ped ped, Hash weaponHash, Hash ammoHash)
	{
		WEAPON::_ENABLE_AMMO_TYPE_FOR_PED_WEAPON(ped, weaponHash, ammoHash);
	}

	static void LUA_NATIVE_WEAPON_ENABLE_AMMO_TYPE_FOR_PED_(Ped ped, Hash weaponHash)
	{
		WEAPON::_ENABLE_AMMO_TYPE_FOR_PED(ped, weaponHash);
	}

	static void LUA_NATIVE_WEAPON_0x404514D231DB27A0_(Any p0, Any p1)
	{
		WEAPON::_0x404514D231DB27A0(p0, p1);
	}

	static void LUA_NATIVE_WEAPON_0xD53846B9C931C181_(Any p0, Any p1, Any p2)
	{
		WEAPON::_0xD53846B9C931C181(p0, p1, p2);
	}

	static void LUA_NATIVE_WEAPON_0x000FA7A4A8443AF7_(Any p0)
	{
		WEAPON::_0x000FA7A4A8443AF7(p0);
	}

	static void LUA_NATIVE_WEAPON_0xECBB26529A737EF6_(Any p0)
	{
		WEAPON::_0xECBB26529A737EF6(p0);
	}

	static int LUA_NATIVE_WEAPON_GET_WEAPON_ATTACH_POINT_(Ped ped, int attachPoint)
	{
		auto retval = WEAPON::_GET_WEAPON_ATTACH_POINT(ped, attachPoint);
		return retval;
	}

	static Any LUA_NATIVE_WEAPON_0x4823F13A21F51964_(Any p0, Any p1)
	{
		auto retval = WEAPON::_0x4823F13A21F51964(p0, p1);
		return retval;
	}

	static void LUA_NATIVE_WEAPON_SET_CURRENT_PED_WEAPON_BY_GUID(Ped ped, uintptr_t weaponUid, bool p2, bool p3, bool p4, bool p5)
	{
		WEAPON::SET_CURRENT_PED_WEAPON_BY_GUID(ped, (Any*)weaponUid, p2, p3, p4, p5);
	}

	static void LUA_NATIVE_WEAPON_SET_PLAYER_PED_QUICK_SWAP_WEAPON_BY_GUID(Ped ped, uintptr_t guidPrimary, uintptr_t guidSecondary)
	{
		WEAPON::SET_PLAYER_PED_QUICK_SWAP_WEAPON_BY_GUID(ped, (Any*)guidPrimary, (Any*)guidSecondary);
	}

	static void LUA_NATIVE_WEAPON_GET_PLAYER_PED_QUICK_SWAP_WEAPON_BY_GUID_(Ped ped, uintptr_t guidPrimary, uintptr_t guidSecondary)
	{
		WEAPON::_GET_PLAYER_PED_QUICK_SWAP_WEAPON_BY_GUID(ped, (Any*)guidPrimary, (Any*)guidSecondary);
	}

	static bool LUA_NATIVE_WEAPON_0x0DE0944ECCB3DF5D_(Ped ped)
	{
		auto retval = (bool)WEAPON::_0x0DE0944ECCB3DF5D(ped);
		return retval;
	}

	static Any LUA_NATIVE_WEAPON_0x46D42883E873C1D7_(Ped ped)
	{
		auto retval = WEAPON::_0x46D42883E873C1D7(ped);
		return retval;
	}

	static bool LUA_NATIVE_WEAPON_IS_TARGET_PED_CONSTRAINED_BY_PED_USING_BOLAS_(Ped ped, Ped targetPed)
	{
		auto retval = (bool)WEAPON::_IS_TARGET_PED_CONSTRAINED_BY_PED_USING_BOLAS(ped, targetPed);
		return retval;
	}

	static int LUA_NATIVE_WEAPON_0x65DC4AC5B96614CB_(Hash weaponHash)
	{
		auto retval = WEAPON::_0x65DC4AC5B96614CB(weaponHash);
		return retval;
	}

	void init_native_binding_WEAPON(sol::state& L)
	{
		auto WEAPON = L["WEAPON"].get_or_create<sol::table>();
		WEAPON.set_function("GET_WEAPON_UNLOCK_", LUA_NATIVE_WEAPON_GET_WEAPON_UNLOCK_);
		WEAPON.set_function("ADD_AMMO_TO_PED_", LUA_NATIVE_WEAPON_ADD_AMMO_TO_PED_);
		WEAPON.set_function("ADD_AMMO_TO_PED_BY_TYPE_", LUA_NATIVE_WEAPON_ADD_AMMO_TO_PED_BY_TYPE_);
		WEAPON.set_function("REMOVE_AMMO_FROM_PED_", LUA_NATIVE_WEAPON_REMOVE_AMMO_FROM_PED_);
		WEAPON.set_function("REMOVE_AMMO_FROM_PED_BY_TYPE_", LUA_NATIVE_WEAPON_REMOVE_AMMO_FROM_PED_BY_TYPE_);
		WEAPON.set_function("REMOVE_ALL_PED_AMMO_", LUA_NATIVE_WEAPON_REMOVE_ALL_PED_AMMO_);
		WEAPON.set_function("SET_PED_AMMO", LUA_NATIVE_WEAPON_SET_PED_AMMO);
		WEAPON.set_function("0x8A779706DA5CA3DD_", LUA_NATIVE_WEAPON_0x8A779706DA5CA3DD_);
		WEAPON.set_function("0x9409C62504A8F9E9_", LUA_NATIVE_WEAPON_0x9409C62504A8F9E9_);
		WEAPON.set_function("SET_VEHICLE_WEAPON_HEADING_LIMITS_", LUA_NATIVE_WEAPON_SET_VEHICLE_WEAPON_HEADING_LIMITS_);
		WEAPON.set_function("SET_VEHICLE_WEAPON_HEADING_LIMITS_2_", LUA_NATIVE_WEAPON_SET_VEHICLE_WEAPON_HEADING_LIMITS_2_);
		WEAPON.set_function("SET_VEHICLE_WEAPON_HEADING", LUA_NATIVE_WEAPON_SET_VEHICLE_WEAPON_HEADING);
		WEAPON.set_function("SET_PED_INFINITE_AMMO", LUA_NATIVE_WEAPON_SET_PED_INFINITE_AMMO);
		WEAPON.set_function("SET_PED_INFINITE_AMMO_CLIP_", LUA_NATIVE_WEAPON_SET_PED_INFINITE_AMMO_CLIP_);
		WEAPON.set_function("GET_AMMO_IN_PED_WEAPON", LUA_NATIVE_WEAPON_GET_AMMO_IN_PED_WEAPON);
		WEAPON.set_function("GET_MAX_AMMO_IN_CLIP", LUA_NATIVE_WEAPON_GET_MAX_AMMO_IN_CLIP);
		WEAPON.set_function("GET_AMMO_IN_CLIP", LUA_NATIVE_WEAPON_GET_AMMO_IN_CLIP);
		WEAPON.set_function("GET_AMMO_IN_CLIP_BY_INVENTORY_UID_", LUA_NATIVE_WEAPON_GET_AMMO_IN_CLIP_BY_INVENTORY_UID_);
		WEAPON.set_function("SET_AMMO_IN_CLIP", LUA_NATIVE_WEAPON_SET_AMMO_IN_CLIP);
		WEAPON.set_function("REFILL_AMMO_IN_CLIP_", LUA_NATIVE_WEAPON_REFILL_AMMO_IN_CLIP_);
		WEAPON.set_function("GET_MAX_AMMO", LUA_NATIVE_WEAPON_GET_MAX_AMMO);
		WEAPON.set_function("SET_PED_AMMO_BY_TYPE", LUA_NATIVE_WEAPON_SET_PED_AMMO_BY_TYPE);
		WEAPON.set_function("GET_PED_AMMO_BY_TYPE", LUA_NATIVE_WEAPON_GET_PED_AMMO_BY_TYPE);
		WEAPON.set_function("SET_PED_AMMO_TO_DROP", LUA_NATIVE_WEAPON_SET_PED_AMMO_TO_DROP);
		WEAPON.set_function("GET_AMMO_TYPE_FOR_WEAPON_", LUA_NATIVE_WEAPON_GET_AMMO_TYPE_FOR_WEAPON_);
		WEAPON.set_function("GET_PED_AMMO_TYPE_FROM_WEAPON", LUA_NATIVE_WEAPON_GET_PED_AMMO_TYPE_FROM_WEAPON);
		WEAPON.set_function("GET_WEAPON_TYPE_FROM_AMMO_TYPE_", LUA_NATIVE_WEAPON_GET_WEAPON_TYPE_FROM_AMMO_TYPE_);
		WEAPON.set_function("GET_WEAPON_COMPONENT_TYPE_MODEL_", LUA_NATIVE_WEAPON_GET_WEAPON_COMPONENT_TYPE_MODEL_);
		WEAPON.set_function("GET_WEAPONTYPE_MODEL_", LUA_NATIVE_WEAPON_GET_WEAPONTYPE_MODEL_);
		WEAPON.set_function("GET_WEAPONTYPE_SLOT_", LUA_NATIVE_WEAPON_GET_WEAPONTYPE_SLOT_);
		WEAPON.set_function("GET_WEAPONTYPE_GROUP", LUA_NATIVE_WEAPON_GET_WEAPONTYPE_GROUP);
		WEAPON.set_function("0xF8204EF17410BF43_", LUA_NATIVE_WEAPON_0xF8204EF17410BF43_);
		WEAPON.set_function("IS_WEAPON_KIT_", LUA_NATIVE_WEAPON_IS_WEAPON_KIT_);
		WEAPON.set_function("IS_WEAPON_KIT_2_", LUA_NATIVE_WEAPON_IS_WEAPON_KIT_2_);
		WEAPON.set_function("IS_WEAPON_BOW", LUA_NATIVE_WEAPON_IS_WEAPON_BOW);
		WEAPON.set_function("IS_WEAPON_LANTERN_", LUA_NATIVE_WEAPON_IS_WEAPON_LANTERN_);
		WEAPON.set_function("IS_WEAPON_TORCH_", LUA_NATIVE_WEAPON_IS_WEAPON_TORCH_);
		WEAPON.set_function("GIVE_WEAPON_TO_PED_WITH_OPTIONS", LUA_NATIVE_WEAPON_GIVE_WEAPON_TO_PED_WITH_OPTIONS);
		WEAPON.set_function("GIVE_WEAPON_TO_PED", LUA_NATIVE_WEAPON_GIVE_WEAPON_TO_PED);
		WEAPON.set_function("SET_FORCE_CURRENT_WEAPON_INTO_COCKED_STATE_", LUA_NATIVE_WEAPON_SET_FORCE_CURRENT_WEAPON_INTO_COCKED_STATE_);
		WEAPON.set_function("0x9F0E1892C7F228A8_", LUA_NATIVE_WEAPON_0x9F0E1892C7F228A8_);
		WEAPON.set_function("HOLSTER_PED_WEAPONS_", LUA_NATIVE_WEAPON_HOLSTER_PED_WEAPONS_);
		WEAPON.set_function("HIDE_PED_WEAPONS_", LUA_NATIVE_WEAPON_HIDE_PED_WEAPONS_);
		WEAPON.set_function("0x4820A6939D7CEF28_", LUA_NATIVE_WEAPON_0x4820A6939D7CEF28_);
		WEAPON.set_function("SET_CURRENT_PED_WEAPON", LUA_NATIVE_WEAPON_SET_CURRENT_PED_WEAPON);
		WEAPON.set_function("GET_CURRENT_PED_WEAPON", LUA_NATIVE_WEAPON_GET_CURRENT_PED_WEAPON);
		WEAPON.set_function("GET_CURRENT_PED_WEAPON_ENTITY_INDEX", LUA_NATIVE_WEAPON_GET_CURRENT_PED_WEAPON_ENTITY_INDEX);
		WEAPON.set_function("ENABLE_WEAPON_RESTORE_", LUA_NATIVE_WEAPON_ENABLE_WEAPON_RESTORE_);
		WEAPON.set_function("GET_PED_BACKUP_WEAPON", LUA_NATIVE_WEAPON_GET_PED_BACKUP_WEAPON);
		WEAPON.set_function("0x486C96A0DCD2BC92_", LUA_NATIVE_WEAPON_0x486C96A0DCD2BC92_);
		WEAPON.set_function("GET_PED_WORST_WEAPON_", LUA_NATIVE_WEAPON_GET_PED_WORST_WEAPON_);
		WEAPON.set_function("GET_BEST_PED_WEAPON", LUA_NATIVE_WEAPON_GET_BEST_PED_WEAPON);
		WEAPON.set_function("GET_BEST_PED_WEAPON_IN_INVENTORY_", LUA_NATIVE_WEAPON_GET_BEST_PED_WEAPON_IN_INVENTORY_);
		WEAPON.set_function("GET_BEST_PED_SHORTARM_GUID", LUA_NATIVE_WEAPON_GET_BEST_PED_SHORTARM_GUID);
		WEAPON.set_function("GET_PED_WEAPON_GUID_AT_ATTACH_POINT", LUA_NATIVE_WEAPON_GET_PED_WEAPON_GUID_AT_ATTACH_POINT);
		WEAPON.set_function("GET_BEST_PED_WEAPON_IN_GROUP_", LUA_NATIVE_WEAPON_GET_BEST_PED_WEAPON_IN_GROUP_);
		WEAPON.set_function("GET_DEFAULT_UNARMED_WEAPON_HASH_", LUA_NATIVE_WEAPON_GET_DEFAULT_UNARMED_WEAPON_HASH_);
		WEAPON.set_function("SET_AMMO_IN_TURRET_", LUA_NATIVE_WEAPON_SET_AMMO_IN_TURRET_);
		WEAPON.set_function("SET_CURRENT_PED_VEHICLE_WEAPON", LUA_NATIVE_WEAPON_SET_CURRENT_PED_VEHICLE_WEAPON);
		WEAPON.set_function("GET_CURRENT_PED_VEHICLE_WEAPON", LUA_NATIVE_WEAPON_GET_CURRENT_PED_VEHICLE_WEAPON);
		WEAPON.set_function("IS_PED_ARMED", LUA_NATIVE_WEAPON_IS_PED_ARMED);
		WEAPON.set_function("0xA2091482ED42EF85_", LUA_NATIVE_WEAPON_0xA2091482ED42EF85_);
		WEAPON.set_function("IS_WEAPON_HOLSTER_STATE_CHANGING_", LUA_NATIVE_WEAPON_IS_WEAPON_HOLSTER_STATE_CHANGING_);
		WEAPON.set_function("IS_WEAPON_VALID", LUA_NATIVE_WEAPON_IS_WEAPON_VALID);
		WEAPON.set_function("IS_AMMO_VALID_", LUA_NATIVE_WEAPON_IS_AMMO_VALID_);
		WEAPON.set_function("0x23BF601A42F329A0_", LUA_NATIVE_WEAPON_0x23BF601A42F329A0_);
		WEAPON.set_function("IS_PED_CARRYING_WEAPON", LUA_NATIVE_WEAPON_IS_PED_CARRYING_WEAPON);
		WEAPON.set_function("HAS_PED_GOT_WEAPON", LUA_NATIVE_WEAPON_HAS_PED_GOT_WEAPON);
		WEAPON.set_function("0x07E1C35F0078C3F9_", LUA_NATIVE_WEAPON_0x07E1C35F0078C3F9_);
		WEAPON.set_function("IS_PED_WEAPON_READY_TO_SHOOT", LUA_NATIVE_WEAPON_IS_PED_WEAPON_READY_TO_SHOOT);
		WEAPON.set_function("GET_PED_WEAPON_IN_SLOT_", LUA_NATIVE_WEAPON_GET_PED_WEAPON_IN_SLOT_);
		WEAPON.set_function("GIVE_DELAYED_WEAPON_TO_PED", LUA_NATIVE_WEAPON_GIVE_DELAYED_WEAPON_TO_PED);
		WEAPON.set_function("REMOVE_ALL_PED_WEAPONS", LUA_NATIVE_WEAPON_REMOVE_ALL_PED_WEAPONS);
		WEAPON.set_function("REMOVE_WEAPON_FROM_PED", LUA_NATIVE_WEAPON_REMOVE_WEAPON_FROM_PED);
		WEAPON.set_function("REMOVE_WEAPON_FROM_PED_BY_GUID_", LUA_NATIVE_WEAPON_REMOVE_WEAPON_FROM_PED_BY_GUID_);
		WEAPON.set_function("HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE", LUA_NATIVE_WEAPON_HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE);
		WEAPON.set_function("SET_PED_CURRENT_WEAPON_VISIBLE", LUA_NATIVE_WEAPON_SET_PED_CURRENT_WEAPON_VISIBLE);
		WEAPON.set_function("SET_PED_WEAPON_ATTACH_POINT_VISIBILITY_", LUA_NATIVE_WEAPON_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY_);
		WEAPON.set_function("SET_PED_ALL_WEAPONS_VISIBILITY_", LUA_NATIVE_WEAPON_SET_PED_ALL_WEAPONS_VISIBILITY_);
		WEAPON.set_function("SET_PED_DROPS_WEAPONS_WHEN_DEAD", LUA_NATIVE_WEAPON_SET_PED_DROPS_WEAPONS_WHEN_DEAD);
		WEAPON.set_function("0x431240A58484D5D0_", LUA_NATIVE_WEAPON_0x431240A58484D5D0_);
		WEAPON.set_function("0x45E57FDD531C9477_", LUA_NATIVE_WEAPON_0x45E57FDD531C9477_);
		WEAPON.set_function("0xF08D8FEB455F2C8C_", LUA_NATIVE_WEAPON_0xF08D8FEB455F2C8C_);
		WEAPON.set_function("0x16D9841A85FA627E_", LUA_NATIVE_WEAPON_0x16D9841A85FA627E_);
		WEAPON.set_function("GET_PED_LAST_WEAPON_IMPACT_COORD", LUA_NATIVE_WEAPON_GET_PED_LAST_WEAPON_IMPACT_COORD);
		WEAPON.set_function("CLEAR_PED_LAST_WEAPON_DAMAGE_", LUA_NATIVE_WEAPON_CLEAR_PED_LAST_WEAPON_DAMAGE_);
		WEAPON.set_function("HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON_", LUA_NATIVE_WEAPON_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON_);
		WEAPON.set_function("SET_PED_DROPS_INVENTORY_WEAPON", LUA_NATIVE_WEAPON_SET_PED_DROPS_INVENTORY_WEAPON);
		WEAPON.set_function("0xB0FB9B196A3D13F0_", LUA_NATIVE_WEAPON_0xB0FB9B196A3D13F0_);
		WEAPON.set_function("0x2EBF70E1D8C06683_", LUA_NATIVE_WEAPON_0x2EBF70E1D8C06683_);
		WEAPON.set_function("0x63B83A526329AFBC_", LUA_NATIVE_WEAPON_0x63B83A526329AFBC_);
		WEAPON.set_function("MAKE_PED_RELOAD_", LUA_NATIVE_WEAPON_MAKE_PED_RELOAD_);
		WEAPON.set_function("REFILL_AMMO_IN_CURRENT_PED_WEAPON_", LUA_NATIVE_WEAPON_REFILL_AMMO_IN_CURRENT_PED_WEAPON_);
		WEAPON.set_function("MAKE_PED_DROP_WEAPON", LUA_NATIVE_WEAPON_MAKE_PED_DROP_WEAPON);
		WEAPON.set_function("GET_PED_CURRENT_HELD_WEAPON_", LUA_NATIVE_WEAPON_GET_PED_CURRENT_HELD_WEAPON_);
		WEAPON.set_function("SET_ALLOW_ANY_WEAPON_DROP", LUA_NATIVE_WEAPON_SET_ALLOW_ANY_WEAPON_DROP);
		WEAPON.set_function("0xA3716A77DCF17424_", LUA_NATIVE_WEAPON_0xA3716A77DCF17424_);
		WEAPON.set_function("0x457B16951AD77C1B_", LUA_NATIVE_WEAPON_0x457B16951AD77C1B_);
		WEAPON.set_function("0x3799EFCC3C8CD5E1_", LUA_NATIVE_WEAPON_0x3799EFCC3C8CD5E1_);
		WEAPON.set_function("GET_MAX_LOCKON_DISTANCE_OF_CURRENT_PED_WEAPON_", LUA_NATIVE_WEAPON_GET_MAX_LOCKON_DISTANCE_OF_CURRENT_PED_WEAPON_);
		WEAPON.set_function("REMOVE_WEAPON_COMPONENT_FROM_PED_", LUA_NATIVE_WEAPON_REMOVE_WEAPON_COMPONENT_FROM_PED_);
		WEAPON.set_function("HAS_PED_GOT_WEAPON_COMPONENT_", LUA_NATIVE_WEAPON_HAS_PED_GOT_WEAPON_COMPONENT_);
		WEAPON.set_function("IS_PED_CURRENT_WEAPON_HOLSTERED_", LUA_NATIVE_WEAPON_IS_PED_CURRENT_WEAPON_HOLSTERED_);
		WEAPON.set_function("0xD2209866B0CB72EA_", LUA_NATIVE_WEAPON_0xD2209866B0CB72EA_);
		WEAPON.set_function("REQUEST_WEAPON_ASSET_", LUA_NATIVE_WEAPON_REQUEST_WEAPON_ASSET_);
		WEAPON.set_function("HAS_WEAPON_ASSET_LOADED_", LUA_NATIVE_WEAPON_HAS_WEAPON_ASSET_LOADED_);
		WEAPON.set_function("REMOVE_WEAPON_ASSET_", LUA_NATIVE_WEAPON_REMOVE_WEAPON_ASSET_);
		WEAPON.set_function("0xE9B3FEC825668291_", LUA_NATIVE_WEAPON_0xE9B3FEC825668291_);
		WEAPON.set_function("0x9CCA3131E6B53C68_", LUA_NATIVE_WEAPON_0x9CCA3131E6B53C68_);
		WEAPON.set_function("GET_WEAPON_NAME_2_", LUA_NATIVE_WEAPON_GET_WEAPON_NAME_2_);
		WEAPON.set_function("GET_WEAPON_NAME_", LUA_NATIVE_WEAPON_GET_WEAPON_NAME_);
		WEAPON.set_function("GET_WEAPON_NAME_WITH_PERMANENT_DEGRADATION_", LUA_NATIVE_WEAPON_GET_WEAPON_NAME_WITH_PERMANENT_DEGRADATION_);
		WEAPON.set_function("0xB832F1A686B9B810_", LUA_NATIVE_WEAPON_0xB832F1A686B9B810_);
		WEAPON.set_function("0x5A695BD328586B44_", LUA_NATIVE_WEAPON_0x5A695BD328586B44_);
		WEAPON.set_function("0x641351E9AD103890_", LUA_NATIVE_WEAPON_0x641351E9AD103890_);
		WEAPON.set_function("SET_INSTANTLY_EQUIP_WEAPON_PICKUPS", LUA_NATIVE_WEAPON_SET_INSTANTLY_EQUIP_WEAPON_PICKUPS);
		WEAPON.set_function("SET_FORCE_AUTO_EQUIP_", LUA_NATIVE_WEAPON_SET_FORCE_AUTO_EQUIP_);
		WEAPON.set_function("SEND_WEAPON_TO_INVENTORY_", LUA_NATIVE_WEAPON_SEND_WEAPON_TO_INVENTORY_);
		WEAPON.set_function("0x14FF0C2545527F9B_", LUA_NATIVE_WEAPON_0x14FF0C2545527F9B_);
		WEAPON.set_function("0xD4C6E24D955FF061_", LUA_NATIVE_WEAPON_0xD4C6E24D955FF061_);
		WEAPON.set_function("0xAFFD0CCF31F469B8_", LUA_NATIVE_WEAPON_0xAFFD0CCF31F469B8_);
		WEAPON.set_function("GET_WEAPON_STAT_ID_", LUA_NATIVE_WEAPON_GET_WEAPON_STAT_ID_);
		WEAPON.set_function("HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON_RECENTLY_", LUA_NATIVE_WEAPON_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON_RECENTLY_);
		WEAPON.set_function("GET_PED_HOGTIE_WEAPON_", LUA_NATIVE_WEAPON_GET_PED_HOGTIE_WEAPON_);
		WEAPON.set_function("CREATE_WEAPON_OBJECT_", LUA_NATIVE_WEAPON_CREATE_WEAPON_OBJECT_);
		WEAPON.set_function("REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT", LUA_NATIVE_WEAPON_REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT);
		WEAPON.set_function("HAS_WEAPON_GOT_WEAPON_COMPONENT", LUA_NATIVE_WEAPON_HAS_WEAPON_GOT_WEAPON_COMPONENT);
		WEAPON.set_function("GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT_", LUA_NATIVE_WEAPON_GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT_);
		WEAPON.set_function("GET_WEAPON_OBJECT_FROM_PED_", LUA_NATIVE_WEAPON_GET_WEAPON_OBJECT_FROM_PED_);
		WEAPON.set_function("GET_PED_WEAPON_OBJECT_", LUA_NATIVE_WEAPON_GET_PED_WEAPON_OBJECT_);
		WEAPON.set_function("GIVE_WEAPON_COMPONENT_TO_ENTITY_", LUA_NATIVE_WEAPON_GIVE_WEAPON_COMPONENT_TO_ENTITY_);
		WEAPON.set_function("0x74C9080FDD1BB48E_", LUA_NATIVE_WEAPON_0x74C9080FDD1BB48E_);
		WEAPON.set_function("0x74C9080FDD1BB48F_", LUA_NATIVE_WEAPON_0x74C9080FDD1BB48F_);
		WEAPON.set_function("0x74C2365FDD1BB48F_", LUA_NATIVE_WEAPON_0x74C2365FDD1BB48F_);
		WEAPON.set_function("0x74C90AAACC1DD48F_", LUA_NATIVE_WEAPON_0x74C90AAACC1DD48F_);
		WEAPON.set_function("0x74C8000FDD1BB111_", LUA_NATIVE_WEAPON_0x74C8000FDD1BB111_);
		WEAPON.set_function("0x74C8000FDD1BB222_", LUA_NATIVE_WEAPON_0x74C8000FDD1BB222_);
		WEAPON.set_function("GET_WEAPON_GUN_SPINNING_WEAPON_EMOTE_TRICK_TYPE_HASH_", LUA_NATIVE_WEAPON_GET_WEAPON_GUN_SPINNING_WEAPON_EMOTE_TRICK_TYPE_HASH_);
		WEAPON.set_function("SET_ACTIVE_GUN_SPINNING_EQUIP_KIT_EMOTE_TWIRL_", LUA_NATIVE_WEAPON_SET_ACTIVE_GUN_SPINNING_EQUIP_KIT_EMOTE_TWIRL_);
		WEAPON.set_function("GET_PED_GUN_SPINNING_EQUIPPED_KIT_EMOTE_TWIRL_", LUA_NATIVE_WEAPON_GET_PED_GUN_SPINNING_EQUIPPED_KIT_EMOTE_TWIRL_);
		WEAPON.set_function("SET_ACTIVE_GUN_SPINNING_KIT_EMOTE_TWIRL_", LUA_NATIVE_WEAPON_SET_ACTIVE_GUN_SPINNING_KIT_EMOTE_TWIRL_);
		WEAPON.set_function("GET_PED_GUN_SPINNING_HASH_FROM_WEAPON_EMOTE_VARIATION_", LUA_NATIVE_WEAPON_GET_PED_GUN_SPINNING_HASH_FROM_WEAPON_EMOTE_VARIATION_);
		WEAPON.set_function("GET_WEAPON_EMOTE_VARIATION_", LUA_NATIVE_WEAPON_GET_WEAPON_EMOTE_VARIATION_);
		WEAPON.set_function("SET_GUN_SPINNING_INVENTORY_SLOT_ID_ACTIVATE_", LUA_NATIVE_WEAPON_SET_GUN_SPINNING_INVENTORY_SLOT_ID_ACTIVATE_);
		WEAPON.set_function("GET_CAN_TWIRL_WEAPON_", LUA_NATIVE_WEAPON_GET_CAN_TWIRL_WEAPON_);
		WEAPON.set_function("GET_CORRECT_KIT_EMOTE_TWIRL_GUN_", LUA_NATIVE_WEAPON_GET_CORRECT_KIT_EMOTE_TWIRL_GUN_);
		WEAPON.set_function("0xBC9444F2FF94A9C0_", LUA_NATIVE_WEAPON_0xBC9444F2FF94A9C0_);
		WEAPON.set_function("GET_DEFAULT_PED_WEAPON_COLLECTION_", LUA_NATIVE_WEAPON_GET_DEFAULT_PED_WEAPON_COLLECTION_);
		WEAPON.set_function("GIVE_WEAPON_COLLECTION_TO_PED_", LUA_NATIVE_WEAPON_GIVE_WEAPON_COLLECTION_TO_PED_);
		WEAPON.set_function("0xF252A85B8F3F8C58_", LUA_NATIVE_WEAPON_0xF252A85B8F3F8C58_);
		WEAPON.set_function("0x9EEFD670F10656D7_", LUA_NATIVE_WEAPON_0x9EEFD670F10656D7_);
		WEAPON.set_function("0xF2F585411E748B9C_", LUA_NATIVE_WEAPON_0xF2F585411E748B9C_);
		WEAPON.set_function("GET_WEAPON_CLIP_SIZE", LUA_NATIVE_WEAPON_GET_WEAPON_CLIP_SIZE);
		WEAPON.set_function("0xA769D753922B031B_", LUA_NATIVE_WEAPON_0xA769D753922B031B_);
		WEAPON.set_function("0xC5899C4CD2E2495D_", LUA_NATIVE_WEAPON_0xC5899C4CD2E2495D_);
		WEAPON.set_function("GET_ALLOW_DUAL_WIELD", LUA_NATIVE_WEAPON_GET_ALLOW_DUAL_WIELD);
		WEAPON.set_function("SET_ALLOW_DUAL_WIELD_", LUA_NATIVE_WEAPON_SET_ALLOW_DUAL_WIELD_);
		WEAPON.set_function("0x44C8F4908F1B2622_", LUA_NATIVE_WEAPON_0x44C8F4908F1B2622_);
		WEAPON.set_function("IS_WEAPON_KNIFE_", LUA_NATIVE_WEAPON_IS_WEAPON_KNIFE_);
		WEAPON.set_function("IS_WEAPON_REVOLVER", LUA_NATIVE_WEAPON_IS_WEAPON_REVOLVER);
		WEAPON.set_function("IS_WEAPON_PISTOL", LUA_NATIVE_WEAPON_IS_WEAPON_PISTOL);
		WEAPON.set_function("IS_WEAPON_REPEATER", LUA_NATIVE_WEAPON_IS_WEAPON_REPEATER);
		WEAPON.set_function("IS_WEAPON_RIFLE", LUA_NATIVE_WEAPON_IS_WEAPON_RIFLE);
		WEAPON.set_function("IS_WEAPON_SHOTGUN", LUA_NATIVE_WEAPON_IS_WEAPON_SHOTGUN);
		WEAPON.set_function("IS_WEAPON_SNIPER_", LUA_NATIVE_WEAPON_IS_WEAPON_SNIPER_);
		WEAPON.set_function("IS_WEAPON_MELEE_WEAPON", LUA_NATIVE_WEAPON_IS_WEAPON_MELEE_WEAPON);
		WEAPON.set_function("IS_WEAPON_THROWABLE_", LUA_NATIVE_WEAPON_IS_WEAPON_THROWABLE_);
		WEAPON.set_function("IS_WEAPON_LASSO_", LUA_NATIVE_WEAPON_IS_WEAPON_LASSO_);
		WEAPON.set_function("IS_WEAPON_BINOCULARS_", LUA_NATIVE_WEAPON_IS_WEAPON_BINOCULARS_);
		WEAPON.set_function("IS_WEAPON_A_GUN", LUA_NATIVE_WEAPON_IS_WEAPON_A_GUN);
		WEAPON.set_function("IS_WEAPON_TWO_HANDED_", LUA_NATIVE_WEAPON_IS_WEAPON_TWO_HANDED_);
		WEAPON.set_function("IS_WEAPON_ONE_HANDED_", LUA_NATIVE_WEAPON_IS_WEAPON_ONE_HANDED_);
		WEAPON.set_function("IS_WEAPON_SILENT_", LUA_NATIVE_WEAPON_IS_WEAPON_SILENT_);
		WEAPON.set_function("0xEA522F991E120D45_", LUA_NATIVE_WEAPON_0xEA522F991E120D45_);
		WEAPON.set_function("IS_AMMO_SILENT_", LUA_NATIVE_WEAPON_IS_AMMO_SILENT_);
		WEAPON.set_function("IS_AMMO_SILENT_2_", LUA_NATIVE_WEAPON_IS_AMMO_SILENT_2_);
		WEAPON.set_function("SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED", LUA_NATIVE_WEAPON_SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED);
		WEAPON.set_function("0x5B235F24472F2C3B_", LUA_NATIVE_WEAPON_0x5B235F24472F2C3B_);
		WEAPON.set_function("0xBFCA7AFABF9D7967_", LUA_NATIVE_WEAPON_0xBFCA7AFABF9D7967_);
		WEAPON.set_function("0x495A04CAEC263AF8_", LUA_NATIVE_WEAPON_0x495A04CAEC263AF8_);
		WEAPON.set_function("0x95CA12E2C68043E5_", LUA_NATIVE_WEAPON_0x95CA12E2C68043E5_);
		WEAPON.set_function("0xABC18A28BAD4B46F_", LUA_NATIVE_WEAPON_0xABC18A28BAD4B46F_);
		WEAPON.set_function("0x80BB243789008A82_", LUA_NATIVE_WEAPON_0x80BB243789008A82_);
		WEAPON.set_function("GET_WEAPON_DAMAGE_", LUA_NATIVE_WEAPON_GET_WEAPON_DAMAGE_);
		WEAPON.set_function("SET_WEAPON_DAMAGE_", LUA_NATIVE_WEAPON_SET_WEAPON_DAMAGE_);
		WEAPON.set_function("GET_WEAPON_DIRT_", LUA_NATIVE_WEAPON_GET_WEAPON_DIRT_);
		WEAPON.set_function("SET_WEAPON_DIRT_", LUA_NATIVE_WEAPON_SET_WEAPON_DIRT_);
		WEAPON.set_function("GET_WEAPON_SOOT_", LUA_NATIVE_WEAPON_GET_WEAPON_SOOT_);
		WEAPON.set_function("SET_WEAPON_SOOT_", LUA_NATIVE_WEAPON_SET_WEAPON_SOOT_);
		WEAPON.set_function("SET_WEAPON_LEVEL_THRESHOLD_", LUA_NATIVE_WEAPON_SET_WEAPON_LEVEL_THRESHOLD_);
		WEAPON.set_function("GET_WEAPON_DEGRADATION", LUA_NATIVE_WEAPON_GET_WEAPON_DEGRADATION);
		WEAPON.set_function("GET_WEAPON_PERMANENT_DEGRADATION", LUA_NATIVE_WEAPON_GET_WEAPON_PERMANENT_DEGRADATION);
		WEAPON.set_function("SET_WEAPON_DEGRADATION_", LUA_NATIVE_WEAPON_SET_WEAPON_DEGRADATION_);
		WEAPON.set_function("LISTEN_PROJECTILE_HIT_EVENTS_", LUA_NATIVE_WEAPON_LISTEN_PROJECTILE_HIT_EVENTS_);
		WEAPON.set_function("GET_WEAPON_SCALE_", LUA_NATIVE_WEAPON_GET_WEAPON_SCALE_);
		WEAPON.set_function("SET_WEAPON_SCALE_", LUA_NATIVE_WEAPON_SET_WEAPON_SCALE_);
		WEAPON.set_function("0x58425FCA3D3A2D15_", LUA_NATIVE_WEAPON_0x58425FCA3D3A2D15_);
		WEAPON.set_function("0xEC97101A8F311282_", LUA_NATIVE_WEAPON_0xEC97101A8F311282_);
		WEAPON.set_function("GET_CURRENT_PED_WEAPON_AMMO_TYPE_", LUA_NATIVE_WEAPON_GET_CURRENT_PED_WEAPON_AMMO_TYPE_);
		WEAPON.set_function("GET_CURRENT_AMMO_TYPE_FROM_GUID_", LUA_NATIVE_WEAPON_GET_CURRENT_AMMO_TYPE_FROM_GUID_);
		WEAPON.set_function("IS_AMMO_TYPE_VALID_FOR_WEAPON_", LUA_NATIVE_WEAPON_IS_AMMO_TYPE_VALID_FOR_WEAPON_);
		WEAPON.set_function("SET_AMMO_TYPE_FOR_PED_WEAPON_", LUA_NATIVE_WEAPON_SET_AMMO_TYPE_FOR_PED_WEAPON_);
		WEAPON.set_function("0x183CE355115B6E75_", LUA_NATIVE_WEAPON_0x183CE355115B6E75_);
		WEAPON.set_function("SET_AMMO_TYPE_FOR_PED_WEAPON_INVENTORY_", LUA_NATIVE_WEAPON_SET_AMMO_TYPE_FOR_PED_WEAPON_INVENTORY_);
		WEAPON.set_function("DISABLE_AMMO_TYPE_FOR_PED_WEAPON_", LUA_NATIVE_WEAPON_DISABLE_AMMO_TYPE_FOR_PED_WEAPON_);
		WEAPON.set_function("DISABLE_AMMO_TYPE_FOR_PED_", LUA_NATIVE_WEAPON_DISABLE_AMMO_TYPE_FOR_PED_);
		WEAPON.set_function("0xD63B4BA3A02A99E0_", LUA_NATIVE_WEAPON_0xD63B4BA3A02A99E0_);
		WEAPON.set_function("ENABLE_AMMO_TYPE_FOR_PED_WEAPON_", LUA_NATIVE_WEAPON_ENABLE_AMMO_TYPE_FOR_PED_WEAPON_);
		WEAPON.set_function("ENABLE_AMMO_TYPE_FOR_PED_", LUA_NATIVE_WEAPON_ENABLE_AMMO_TYPE_FOR_PED_);
		WEAPON.set_function("0x404514D231DB27A0_", LUA_NATIVE_WEAPON_0x404514D231DB27A0_);
		WEAPON.set_function("0xD53846B9C931C181_", LUA_NATIVE_WEAPON_0xD53846B9C931C181_);
		WEAPON.set_function("0x000FA7A4A8443AF7_", LUA_NATIVE_WEAPON_0x000FA7A4A8443AF7_);
		WEAPON.set_function("0xECBB26529A737EF6_", LUA_NATIVE_WEAPON_0xECBB26529A737EF6_);
		WEAPON.set_function("GET_WEAPON_ATTACH_POINT_", LUA_NATIVE_WEAPON_GET_WEAPON_ATTACH_POINT_);
		WEAPON.set_function("0x4823F13A21F51964_", LUA_NATIVE_WEAPON_0x4823F13A21F51964_);
		WEAPON.set_function("SET_CURRENT_PED_WEAPON_BY_GUID", LUA_NATIVE_WEAPON_SET_CURRENT_PED_WEAPON_BY_GUID);
		WEAPON.set_function("SET_PLAYER_PED_QUICK_SWAP_WEAPON_BY_GUID", LUA_NATIVE_WEAPON_SET_PLAYER_PED_QUICK_SWAP_WEAPON_BY_GUID);
		WEAPON.set_function("GET_PLAYER_PED_QUICK_SWAP_WEAPON_BY_GUID_", LUA_NATIVE_WEAPON_GET_PLAYER_PED_QUICK_SWAP_WEAPON_BY_GUID_);
		WEAPON.set_function("0x0DE0944ECCB3DF5D_", LUA_NATIVE_WEAPON_0x0DE0944ECCB3DF5D_);
		WEAPON.set_function("0x46D42883E873C1D7_", LUA_NATIVE_WEAPON_0x46D42883E873C1D7_);
		WEAPON.set_function("IS_TARGET_PED_CONSTRAINED_BY_PED_USING_BOLAS_", LUA_NATIVE_WEAPON_IS_TARGET_PED_CONSTRAINED_BY_PED_USING_BOLAS_);
		WEAPON.set_function("0x65DC4AC5B96614CB_", LUA_NATIVE_WEAPON_0x65DC4AC5B96614CB_);
	}
}
