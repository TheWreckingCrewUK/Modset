[
	"TWC_Debug_Enable",
	"CHECKBOX",
	"Enable Debug",
	["TWC", "Debugging"],
	true,
	true
] call CBA_fnc_addSetting;

[
	"TWC_Debug_PlayerLimit",
	"SLIDER",
	"Player Limit Before Disabling Debugging",
	["TWC", "Debugging"],
	[1, 4, 10, 0],
	true
] call CBA_fnc_addSetting;