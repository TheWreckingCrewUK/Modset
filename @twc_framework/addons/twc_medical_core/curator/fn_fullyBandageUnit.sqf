params["_logic","_units","_activated"];

_mouseOver = missionnamespace getvariable ["bis_fnc_curatorObjectPlaced_mouseOver", [""]];

if((_mouseOver select 0) != "OBJECT") exitWith {
	hint "Please place on a unit!";
};

_unit = effectiveCommander (_mouseOver select 1);

if !(_unit isKindOf "CAManBase") exitWith {
	hint "Needs to be a unit!";
};

_openWounds = _unit getVariable ["ace_medical_openWounds", []];
_bandagedWounds = _unit getVariable ["ace_medical_bandagedWounds", []];

{
	_bandagedWounds pushBack _x;
} forEach _openWounds;

_unit setVariable ["ace_medical_bandagedWounds", _bandagedWounds, true];
_unit setVariable ["ace_medical_openWounds", [], true];

[_unit, true, true, true, true] call ace_medical_engine_fnc_updateBodyPartVisuals;
[_unit] call ace_medical_engine_fnc_updateDamageEffects;
[_unit] call ace_medical_status_fnc_updateWoundBloodLoss;