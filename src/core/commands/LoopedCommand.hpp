#pragma once
#include "BoolCommand.hpp"
#include "game/rdr/Player.hpp"

namespace Teminus
{
	class LoopedCommand : public BoolCommand
	{
	protected:
		virtual void OnTick() = 0;

	public:
		LoopedCommand(std::string name, std::string label, std::string description);
		void Tick();
	};
}