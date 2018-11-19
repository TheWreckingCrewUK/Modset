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

[{
	params ["_caller", "_target", "_startingLocation"];
	
}, [_caller, _target, _startingLocation], _timeTillWakeUp] call CBA_fnc_waitAndExecute;