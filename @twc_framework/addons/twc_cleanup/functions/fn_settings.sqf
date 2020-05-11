#include "\a3\editor_f\Data\Scripts\dikCodes.h"

[
	"TWC_Corpse_Enabled",
	"CHECKBOX",
	"Corpse Management Enabled",
	["TWC - Cleanup", "Corpse Management"],
	true,
	1,
	{},
	true // needs restart
] call CBA_fnc_addSetting;

[
	"TWC_Corpse_Queue_Max",
	"SLIDER",
	"Corpse Queue Max",
	["TWC - Cleanup", "Corpse Management"],
	[5, 50, 25, 0],
	1,
	{},
	true
] call CBA_fnc_addSetting;

[
	"TWC_Corpse_Queue_MinTime",
	"SLIDER",
	["Corpse Min Time (Seconds)", "Minimal time between death and cleanup"],
	["TWC - Cleanup", "Corpse Management"],
	[60, 900, 300, 0],
	1,
	{},
	true
] call CBA_fnc_addSetting;
