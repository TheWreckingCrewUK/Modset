params ["_bearing"];
disableSerialization;

if (isNull (uiNameSpace getVariable ["TWC_BearingDisplay", displayNull])) then {
	("BearingDisplay" call BIS_fnc_rscLayer) cutRsc ["BearingDisplay", "PLAIN", 0, true];
};

_display = uiNameSpace getVariable ["TWC_BearingDisplay", displayNull];
_setText = _display displayCtrl 17556;
_setText ctrlSetStructuredText (parseText format ["%1", _bearing]);