params ["_player"];

if (!local _player) exitWith {};

// CBA settings for the keybinding
#include "\a3\editor_f\Data\Scripts\dikCodes.h"

[
	"TWC",
	"twc_whistle",
	"TWC Whistle",
	{
		[_player] call TWC_Whistle_fnc_attempt;
	},
	{
		["TWC_Whistle_Play_Stop", _player] call CBA_fnc_serverEvent;
	},
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