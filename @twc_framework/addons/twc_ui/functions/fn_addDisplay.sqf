disableSerialization;
if (!hasInterface) exitWith {};
_uiEHID = (uiNameSpace getVariable "TWC_BearingDisplay_EH");
if (!isNil "_uiEHID") exitWith {};

_ehID = addMissionEventhandler ["Draw3D", {
	_bearingString = [] call TWC_UI_fnc_getVisualBearingLocal;
	[_bearingString] call TWC_UI_fnc_showBearing;
}];

uiNamespace setVariable ['TWC_BearingDisplay_EH', _ehID];