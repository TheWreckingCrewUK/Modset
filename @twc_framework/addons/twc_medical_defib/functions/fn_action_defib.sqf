params ["_caller", "_target", "_selectionName", "_className", "_items"];

if (local _target) then {
	["twc_medical_evh_addTime", [_caller, _target]] call CBA_fnc_localEvent;
} else {
	["twc_medical_evh_addTime", [_caller, _target], _target] call CBA_fnc_targetEvent;
}

[_caller, _target] call twc_medical_defib_fnc_defib;
true;