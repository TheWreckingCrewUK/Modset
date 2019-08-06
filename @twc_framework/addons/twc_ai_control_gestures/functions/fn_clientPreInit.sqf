#include "\a3\editor_f\Data\Scripts\dikCodes.h"

[
	"TWC",
	"TWC_AI_Control_Gestures",
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
	"TWC_AI_Control_Gestures",
	"Halt Signal",
	{
		[player] call TWC_AI_Control_Gestures_fnc_signalHalt;
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
	"TWC_Show_Gestures",
	"CHECKBOX",
	["Show Gestures Menu", "Show the Custom TWC AI Control Gestures Menu under Self-Interaction"],
	"TWC",
	true,
	false
] call CBA_fnc_addSetting;