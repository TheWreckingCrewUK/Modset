params ["_caller", "_target"];

if (local _target) exitWith { ["twc_medical_evh_fieldSurgery", [_caller, _target]] call CBA_fnc_localEvent; };

["twc_medical_evh_fieldSurgery", [_caller, _target], _target] call CBA_fnc_targetEvent;