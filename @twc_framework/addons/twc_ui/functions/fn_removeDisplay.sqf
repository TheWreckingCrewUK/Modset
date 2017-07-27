disableSerialization;
_uiEHID = (uiNameSpace getVariable "TWC_BearingDisplay_EH");
if (isNil "_uiEHID") exitWith {};
removeMissionEventHandler["Draw3D", _uiEHID];
uiNamespace setVariable ['TWC_BearingDisplay_EH', nil];
[] call TWC_UI_fnc_hideBearing;