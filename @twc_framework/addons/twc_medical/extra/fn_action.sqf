params ["_caller", "_target", "_selectionName", "_className", "_items"];

call {
	if (local _target) exitWith {
		["twc_cpr_evh_addTime", [_caller, _target]] call CBA_fnc_localEvent;
	};
	
	// else remote
	["twc_cpr_evh_addTime", [_caller, _target], _target] call CBA_fnc_targetEvent;
};

if ((missionNamespace getVariable ["ace_medical_enableRevive",0]) > 0 ) exitWith {
	[_caller, _target] call twc_cpr_fnc_CPR;
	true;
};

[_caller,_target,_selectionName,_className,_items] call ace_medical_fnc_treatmentAdvanced_CPR;
false;