disableSerialization;
if (!hasInterface) exitWith {};
if (!isNull (uiNameSpace getVariable ["TWC_BearingDisplay_EH", null])) exitWith {};

uiNamespace setVariable ['TWC_BearingDisplay_EH', 
	[missionNamespace, "Draw3D", { 
		[{[] call TWC_UI_fnc_getVisualBearingLocal.sqf}] call TWC_UI_fnc_showBearing.sqf;
	}, ""] call CBA_fnc_addBISEventHandler;
];