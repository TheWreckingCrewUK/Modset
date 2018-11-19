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
	
	// Full heal them, baby!
	_target setVariable ["ACE_Medical_pain", 0, true];
	_target setVariable ["ACE_Medical_morphine", 0, true];
	_target setVariable ["ACE_Medical_bloodVolume", 100, true];

	// tourniquets
	_target setVariable ["ACE_Medical_tourniquets", [0,0,0,0,0,0], true];

	// wounds and injuries
	_target setVariable ["ACE_Medical_openWounds", [], true];
	_target setVariable ["ACE_Medical_bandagedWounds", [], true];
	_target setVariable ["ACE_Medical_internalWounds", [], true];

	// vitals
	_target setVariable ["ACE_Medical_heartRate", 80];
	_target setVariable ["ACE_Medical_heartRateAdjustments", []];
	_target setVariable ["ACE_Medical_bloodPressure", [80, 120]];
	_target setVariable ["ACE_Medical_peripheralResistance", 100];

	// fractures
	_target setVariable ["ACE_Medical_fractures", []];

	// IVs
	_target setVariable ["ACE_Medical_ivBags", nil, true];

	// damage storage
	_target setVariable ["ACE_Medical_bodyPartStatus", [0,0,0,0,0,0], true];

	// airway
	_target setVariable ["ACE_Medical_airwayStatus", 100, true];
	_target setVariable ["ACE_Medical_airwayOccluded", false, true];
	_target setVariable ["ACE_Medical_airwayCollapsed", false, true];

	// generic medical admin
	_target setVariable ["ACE_Medical_inCardiacArrest", false, true];
	_target setVariable ["ACE_Medical_inReviveState", false, true];
	_target setVariable ["ACE_isUnconscious", false, true];
	_target setVariable ["ACE_Medical_hasLostBlood", 0, true];
	_target setVariable ["ACE_Medical_isBleeding", false, true];
	_target setVariable ["ACE_Medical_hasPain", false, true];
	_target setVariable ["ACE_Medical_painSuppress", 0, true];

	// medication
	private _allUsedMedication = _target getVariable ["ACE_Medical_allUsedMedication", []];
	{
		_target setVariable [_x select 0, nil];
	} forEach _allUsedMedication;

	// Resetting damage
	_target setDamage 0;
	
	[_target, "activity", localize "STR_TWC_SURGERY_COMPLETED", [[_target, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;
	[_target, "activity_view", localize "STR_TWC_SURGERY_COMPLETED", [[_target, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;
}, [_caller, _target, _startingLocation], _timeTillWakeUp] call CBA_fnc_waitAndExecute;