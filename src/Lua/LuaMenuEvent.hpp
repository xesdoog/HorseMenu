#pragma once


namespace Teminus
{
	enum eMenuEvent : uint8_t
	{
		ScriptsReloaded,
		HwndProc,
		PlayerJoin,
		PlayerLeave,
		ScriptedGameEventReceived,
		ChatMessageReceived,
		MenuUnloaded
	};
}
