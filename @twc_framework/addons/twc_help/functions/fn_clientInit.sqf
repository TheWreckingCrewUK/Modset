if (!hasInterface) exitWith {};

#include "\a3\editor_f\Data\Scripts\dikCodes.h";

[
	"TWC",
	"twc_help",
	"Request Management Help",
	{
		createDialog "TWC_Help_Message";
	},
	"",
	[
		DIK_Y,
		[
			false,
			false,
			false
		]
	]
] call CBA_fnc_addKeybind;