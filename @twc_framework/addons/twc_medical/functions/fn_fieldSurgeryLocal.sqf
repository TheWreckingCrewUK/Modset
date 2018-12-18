params ["_caller", "_target"];

// first, let's make sure it should be happening.
_shouldRun = [_caller, _target] call twc_medical_fnc_canFieldSurgery;
if !(_shouldRun) exitWith {};

[_caller, "TWC_Item_Medical_SurgicalMasks_1"] call twc_medical_fnc_removeMedicalItem;
[_target] call twc_medical_fnc_fullHealWithoutLog;

[
	_target,
	"activity",
	localize "STR_TWC_FIELDSURGERY_COMPLETED",
	[
		[[_target, false, true] call ace_common_fnc_getName],
		[[_caller, false, true] call ace_common_fnc_getName]
	]
] call ace_medical_fnc_addToLog;

[
	_target,
	"activity_view",
	localize "STR_TWC_FIELDSURGERY_COMPLETED",
	[
		[[_target, false, true] call ace_common_fnc_getName],
		[[_caller, false, true] call ace_common_fnc_getName]
	]
] call ace_medical_fnc_addToLog;