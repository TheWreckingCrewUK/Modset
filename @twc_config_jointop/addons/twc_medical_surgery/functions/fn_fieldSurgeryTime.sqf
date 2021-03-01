params ["_caller", "_target"];

_bloodVolume = [_caller, _target] call twc_medical_fnc_getBloodVolume;
_openWounds = _target getVariable ['ACE_Medical_openWounds', []];
_openWoundTime = ((count _openWounds) * 5);

(floor (5 + (5 * (10 * _bloodVolume)) + _openWoundTime)) max 60;