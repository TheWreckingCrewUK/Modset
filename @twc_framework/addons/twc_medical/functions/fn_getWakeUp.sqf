/*
 * Returns whether or not the unit should wake up, given the many factors.
 * Utilised within CPR & Defib.
 * DO THIS FUNCTION LOCALLY!
 */
params ["_caller", "_target", ["_isCPR", true]];

// Should equate to around 80% of the time they stay uncon.
// Public sort of flips this, to facilitate the gameplay.
_probability = 20;
_diceRoll = floor (random 100);

_bloodLoss = [_caller, _target] call twc_medical_fnc_getBloodVolume;
_probability = _probability - (20 - (20 * _bloodLoss));

_isTargetCommandRole = [(configFile >> "CfgVehicles" >> typeOf (_target)), "TWC_isCommandRole", 0] call BIS_fnc_returnConfigEntry;

_probability = _probability + (20 * _isTargetCommandRole);

_isCallerMedic = _caller getVariable ["ACE_medical_medicClass", 0];
if (_isCallerMedic > 0) then { _probability = _probability + 20; };

_isTargetMedic = _target getVariable ["ACE_medical_medicClass", 0];
if (_isTargetMedic > 0) then { _probability = _probability + 20; };

_isPublic = missionNameSpace getVariable ["TWC_enablePublicCPRChance", false];
if (_isPublic) then { _probability = _probability + 80; };

if !(_isCPR) then { _probability = _probability + 10; };
if (_probability >= _diceRoll) exitWith { true; };

false;