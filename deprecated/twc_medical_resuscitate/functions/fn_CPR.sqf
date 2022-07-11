params [["_caller", player, [objNull]],["_target", objNull, [objNull]]];

[_caller, _target] call {
	params ["_caller", "_target"];
	
	if (local _target) exitWith {
		["twc_medical_evh_CPR_Local", [_caller, _target]] call CBA_fnc_localEvent;
	};

	//cpr call:
	["twc_medical_evh_CPR_Local", [_caller, _target], _target] call CBA_fnc_targetEvent;
};