params ["_caller", "_target"];

if !(_target isKindOf "CAManBase") exitWith { false };
if (_caller == _target) exitwith { false };

// no wounds to suture
private _bandagedWounds = _target getVariable ["ace_medical_bandagedWounds", []];
if (count _bandagedWounds == 0) exitWith { false };

true