/* Fully heals target, without a log entry. Best used locally. */
params ["_target"];

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