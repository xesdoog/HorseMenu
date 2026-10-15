#include "core/commands/Command.hpp"
#include "game/rdr/Pools.hpp"

namespace Teminus::Features
{
	class KillAll : public Command
	{
		using Command::Command;

		virtual void OnCall() override
		{
			for (auto ped : Pools::GetPeds())
			{
				if (!ped.IsPlayer())
					ped.Kill();
			}
		}
	};

	static KillAll _KillAll{"killallpeds", "Kill All Peds", "Kills all peds in the game world"};
}