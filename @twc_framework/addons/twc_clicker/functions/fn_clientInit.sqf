params ["_player"];

if (!local _player) exitWith {};

// CBA settings for the keybinding
#include "\a3\editor_f\Data\Scripts\dikCodes.h"
TWC_CLICKER_PLAY = false;
TWC_CLICKER_PLAY_QUEUE = [];

[
	"TWC",
	"twc_clicker",
	"Clicker",
	{
		TWC_CLICKER_PLAY = true;
		[player] call TWC_Clicker_fnc_play;
	},
	"",
	[
		DIK_T,
		[
			false,
			false,
			false
		],
		false
	]
] call CBA_fnc_addKeybind;