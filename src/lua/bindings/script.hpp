#pragma once

namespace Lua::script
{
	class script_util
	{
	public:
		int yield();
		int sleep(int ms);
	};

	void bind(sol::state& state);
}
