#pragma once
#include <sol/sol.hpp>
#include "LuaModule.hpp"


namespace Teminus::LuaJIT
{
	class LuaLibrary
	{
	public:
		LuaLibrary();
		virtual void Register(sol::state& L) = 0;
	};
}
