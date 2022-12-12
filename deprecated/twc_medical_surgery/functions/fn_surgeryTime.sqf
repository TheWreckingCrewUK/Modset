params ["_caller", "_target"];

_isMedic = (_caller getVariable ["ACE_medical_medicClass", 0]);
_medic = if (_isMedic > 0) then { 2; } else { 1; };
_bloodVolume = [_caller, _target] call twc_medical_fnc_getBloodVolume;

_openWounds = _target getVariable ['ACE_Medical_openWounds', []];
_openWoundTime = (count _openWounds) * 20;

(((((180 - (120 * _bloodVolume)) / _medic) + _openWoundTime) max 0) min 180);