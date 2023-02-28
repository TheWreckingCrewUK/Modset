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

[missionNamespace,"OnGameInterrupt", {
	if(serverCommandAvailable "#shutdown" || !isMultiplayer)exitWith{};
    _this spawn {
        params ["_display"];
		_helpDisplay = createDialog ["TWC_Help_Message_Escape",true];
		waitUntil{isNull _helpDisplay || isNull _display};
		//We have to do it this way or there is an edge case where the black box gets stuck on screen
		if(isNull _helpDisplay)then{
			_display closeDisplay 2;
		}else{
			_helpDisplay closeDisplay 2;
		};
    };
}] call BIS_fnc_addScriptedEventHandler;