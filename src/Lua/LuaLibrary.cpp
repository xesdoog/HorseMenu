#include "LuaLibrary.hpp"
#include "LuaMgr.hpp"


namespace Teminus::LuaJIT
{
	LuaLibrary::LuaLibrary()
	{
		LuaManager::RegisterLibrary(this);
	}
}
