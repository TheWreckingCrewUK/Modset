params ["_caller", "_target", "_selectionName", "_className", "_items"];

[_caller, _target] call {
	params ["_caller", "_target"];
	
	if (local _target) exitWith {
		["twc_medical_evh_addTime", [_caller, _target]] call CBA_fnc_localEvent;
	};
	
	// else remote
	["twc_medical_evh_addTime", [_caller, _target], _target] call CBA_fnc_targetEvent;
};

[_caller, _target] call twc_medical_resuscitate_fnc_CPR;
true;
