#include "lua_native_binding.hpp"
#include "game/rdr/Natives.hpp"

namespace Lua::native
{
	static int LUA_NATIVE_MONEY_MONEY_GET_CASH_BALANCE_()
	{
		auto retval = MONEY::_MONEY_GET_CASH_BALANCE();
		return retval;
	}

	static bool LUA_NATIVE_MONEY_MONEY_DECREMENT_CASH_BALANCE_(int amount)
	{
		auto retval = (bool)MONEY::_MONEY_DECREMENT_CASH_BALANCE(amount);
		return retval;
	}

	static bool LUA_NATIVE_MONEY_MONEY_INCREMENT_CASH_BALANCE_(int amount, Hash addReason)
	{
		auto retval = (bool)MONEY::_MONEY_INCREMENT_CASH_BALANCE(amount, addReason);
		return retval;
	}

	static const char* LUA_NATIVE_MONEY_NETWORK_GET_STRING_CASH_BALANCE_()
	{
		auto retval = MONEY::_NETWORK_GET_STRING_CASH_BALANCE();
		return retval;
	}

	static bool LUA_NATIVE_MONEY_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN_(int cashBalance, int goldBarBalance)
	{
		auto retval = (bool)MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(cashBalance, goldBarBalance);
		return retval;
	}

	static const char* LUA_NATIVE_MONEY_0xA46FD001D1BE896C_()
	{
		auto retval = MONEY::_0xA46FD001D1BE896C();
		return retval;
	}

	static bool LUA_NATIVE_MONEY_0x07AD9E43FD478527_(Any p0, Any p1)
	{
		auto retval = (bool)MONEY::_0x07AD9E43FD478527(p0, p1);
		return retval;
	}

	static int LUA_NATIVE_MONEY_NETWORK_GET_CASH_BALANCE_()
	{
		auto retval = MONEY::_NETWORK_GET_CASH_BALANCE();
		return retval;
	}

	void init_native_binding_MONEY(sol::state& L)
	{
		auto MONEY = L["MONEY"].get_or_create<sol::table>();
		MONEY.set_function("MONEY_GET_CASH_BALANCE_", LUA_NATIVE_MONEY_MONEY_GET_CASH_BALANCE_);
		MONEY.set_function("MONEY_DECREMENT_CASH_BALANCE_", LUA_NATIVE_MONEY_MONEY_DECREMENT_CASH_BALANCE_);
		MONEY.set_function("MONEY_INCREMENT_CASH_BALANCE_", LUA_NATIVE_MONEY_MONEY_INCREMENT_CASH_BALANCE_);
		MONEY.set_function("NETWORK_GET_STRING_CASH_BALANCE_", LUA_NATIVE_MONEY_NETWORK_GET_STRING_CASH_BALANCE_);
		MONEY.set_function("NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN_", LUA_NATIVE_MONEY_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN_);
		MONEY.set_function("0xA46FD001D1BE896C_", LUA_NATIVE_MONEY_0xA46FD001D1BE896C_);
		MONEY.set_function("0x07AD9E43FD478527_", LUA_NATIVE_MONEY_0x07AD9E43FD478527_);
		MONEY.set_function("NETWORK_GET_CASH_BALANCE_", LUA_NATIVE_MONEY_NETWORK_GET_CASH_BALANCE_);
	}
}
