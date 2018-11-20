params ["_caller", "_target"];

// first, let's make sure it should be happening.
_shouldRun = [_caller, _target] call twc_medical_fnc_canSurgery;
if !(_shouldRun) exitWith {};

// now, let's calculate how badly fucked up we are and sort out a time for that!
_timeTillWakeUp = [_caller, _target] call twc_medical_fnc_surgeryTime;

// Make sure they aren't moved away.
_startingLocation = position _target;

// Inform everyone that they've been administered, and reduce the available gurney count.
["twc_medical_server_gurneyUsed", [_caller, _target]] call CBA_fnc_serverEvent;

// TODO: Play sound loop for the duration, and put them in the on back animation

// Log them being handed over
[_target, "activity", localize "STR_TWC_SURGERY_HANDED", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;
[_target, "activity_view", localize "STR_TWC_SURGERY_HANDED", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;

[{
	params ["_caller", "_target", "_startingLocation"];
	
	if (((position _target) distance _startingLocation) >= 50) exitWith {
		// DEAD. LOL.
		["TWC_Unit_Perished", [_target, "removed_from_surgery"]] call CBA_fnc_globalEvent;
		[_unit, true, false] call ace_medical_fnc_setDead;
	};
	
	[_target] call twc_medical_fnc_fullHealWithoutLog;
	
	[_target, "activity", localize "STR_TWC_SURGERY_COMPLETED", [[_target, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;
	[_target, "activity_view", localize "STR_TWC_SURGERY_COMPLETED", [[_target, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;
}, [_caller, _target, _startingLocation], _timeTillWakeUp] call CBA_fnc_waitAndExecute;