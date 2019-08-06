#include "\a3\editor_f\Data\Scripts\dikCodes.h"

[
	"TWC",
	"TWC_AI_Control_Gestures_Advance",
	"Advance Signal",
	{
		[player] call TWC_AI_Control_Gestures_fnc_signalAdvance;
	},
	"",
	[
		DIK_NUMPAD1,
		[
			false,
			false,
			false
		]
	]
] call CBA_fnc_addKeybind;

[
	"TWC",
	"TWC_AI_Control_Gestures_Halt",
	"Halt Signal",
	{
		[player] call TWC_AI_Control_Gestures_fnc_signalHalt;
	},
	"",
	[
		DIK_NUMPAD2,
		[
			false,
			false,
			false
		]
	]
] call CBA_fnc_addKeybind;

[
	"TWC_Show_Gestures",
	"CHECKBOX",
	"Show Gestures Menu",
	"TWC",
	true,
	false
] call CBA_fnc_addSetting;