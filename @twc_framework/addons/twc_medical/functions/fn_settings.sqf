#include "\a3\editor_f\Data\Scripts\dikCodes.h"

[
	"TWC_Medical_Threshold_Head",
	"SLIDER",
	"Head Damage Threshold",
	["TWC", "Damage Threshold Settings (Testing)"],
	[1, 30, 12, 0],
	true
] call CBA_fnc_addSetting;

[
	"TWC_Medical_Threshold_Body",
	"SLIDER",
	"Body Damage Threshold",
	["TWC", "Damage Threshold Settings (Testing)"],
	[1, 30, 18, 0],
	true
] call CBA_fnc_addSetting;

[
	"TWC_Medical_Threshold_Total",
	"SLIDER",
	"Total Damage Threshold",
	["TWC", "Damage Threshold Settings (Testing)"],
	[1, 50, 30, 0],
	true
] call CBA_fnc_addSetting;