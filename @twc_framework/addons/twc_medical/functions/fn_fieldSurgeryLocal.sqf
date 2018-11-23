params ["_caller", "_target"];

// first, let's make sure it should be happening.
_shouldRun = [_caller, _target] call twc_medical_fnc_canFieldSurgery;
if !(_shouldRun) exitWith {};

// TODO: Consume users Surgical Mask
// 

// TODO: Play sound loop for the duration, and put them in the on back animation

[_target] call twc_medical_fnc_fullHealWithoutLog;

[
	_target, "activity",
	localize "STR_TWC_FIELDSURGERY_COMPLETED",
	[
		[[_target, false, true] call ace_common_fnc_getName],
		[[_caller, false, true] call ace_common_fnc_getName]
	]
] call ace_medical_fnc_addToLog;

[
	_target, "activity_view",
	localize "STR_TWC_FIELDSURGERY_COMPLETED",
	[
		[[_target, false, true] call ace_common_fnc_getName],
		[[_caller, false, true] call ace_common_fnc_getName]
	]
] call ace_medical_fnc_addToLog;