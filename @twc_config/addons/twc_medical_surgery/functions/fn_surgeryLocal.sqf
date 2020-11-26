params ["_caller", "_target"];

// first, let's make sure it should be happening.
_shouldRun = [_caller, _target] call twc_medical_surgery_fnc_canSurgery;
if !(_shouldRun) exitWith {};

// now, let's calculate how badly fucked up we are and sort out a time for that!
_timeTillWakeUp = [_caller, _target] call twc_medical_surgery_fnc_surgeryTime;

// Make sure they aren't moved away.
_startingLocation = position _target;

// Inform everyone that they've been administered, and reduce the available gurney count.
["twc_medical_server_gurneyUsed", [_caller, _target]] call CBA_fnc_serverEvent;

// TODO: Play sound loop for the duration, and put them in the on back animation
_target setVariable ["TWC_Medical_forcedUncon", true, true];
_target setVariable ["ACE_isUnconscious", true, true];
_target setUnconscious true;

// play the audio locally, for the patient
missionNameSpace setVariable ["ace_hearing_disableVolumeUpdate", true];
// execute next frame, so the volumeUpdate can take effect
[{
	_hasEarPlugs = [player] call ace_hearing_fnc_hasEarPlugsIn;
	
	if (_hasEarPlugs) then {
		playSound "TWC_Sound_Medical_Surgery";
	} else {
		playSound "TWC_Sound_Medical_Surgery_NoEarPlugs";
	};
}] call CBA_fnc_execNextFrame;

// add time to their revive counter, to prevent them from dying during the surgery
_reviveStartTime = _target getVariable ["ace_medical_reviveStartTime", 0];
_timeToAdd = _reviveStartTime + 600;
_target setVariable ["ace_medical_reviveStartTime", _timeToAdd, true];

// Log them being handed over
[_target, "activity", localize "STR_TWC_SURGERY_HANDED", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;
[_target, "activity_view", localize "STR_TWC_SURGERY_HANDED", [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;

[{
	params ["_caller", "_target", "_startingLocation"];
	
	// stop the sound, regardless of circumstance
	missionNameSpace setVariable ["ace_hearing_disableVolumeUpdate", false];
	[] spawn {
		_sound = ASLToAGL [0,0,0] nearestObject "#soundonvehicle";
		deleteVehicle _sound;
	};
	
	if (((position _target) distance _startingLocation) >= 10) exitWith {
		// DEAD. LOL.
		["TWC_Unit_Perished", [_target, "removed_from_surgery"]] call CBA_fnc_globalEvent;
		[_unit, true, false] call ace_medical_fnc_setDead;
	};
	
	[_target] call twc_medical_fnc_fullHealWithoutLog;
	_target setVariable ["TWC_Medical_forcedUncon", false, true];
	_target setUnconscious false;
	
	[_target, "activity", localize "STR_TWC_SURGERY_COMPLETED", [[_target, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;
	[_target, "activity_view", localize "STR_TWC_SURGERY_COMPLETED", [[_target, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;
}, [_caller, _target, _startingLocation], _timeTillWakeUp] call CBA_fnc_waitAndExecute;