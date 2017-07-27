disableSerialization;
if (isNull (uiNameSpace getVariable ["TWC_BearingDisplay_EH", null])) exitWith {};
(uiNameSpace getVariable ["TWC_BearingDisplay_EH", null]) call CBA_fnc_removePlayerEventHandler;
[] call TWC_UI_fnc_hideBearing.sqf;