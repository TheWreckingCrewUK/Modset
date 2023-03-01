if (!hasInterface) exitWith {};

#include "\a3\editor_f\Data\Scripts\dikCodes.h";

//Original Shift+Y keybind
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
			true,
			false,
			false
		]
	]
] call CBA_fnc_addKeybind;

[["TWC Admin Message","Sends a message to the logged in admin"], "TWC_Help_Message"] call CBA_fnc_addPauseMenuOption;