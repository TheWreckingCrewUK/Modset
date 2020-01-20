/*	pre-reqs:
 *	- must be in a medical vehicle
 *	- must not be bleeding
 *	- requires the patient to have some blood (about two thirds of their blood level?)
 */
params ["_caller", "_target"];

if !(_target isKindOf "CAManBase") exitWith { false };
if (_caller == _target) exitwith { false };

// same uncon check as cpr
_unCon = [_target] call twc_medical_resuscitate_fnc_canCPR;
_isBleeding = _target getVariable ["ace_medical_isBleeding", false];
_bloodVolume = [_caller, _target] call twc_medical_fnc_getBloodVolume;

// is in need of defibs
if (_unCon && !(_isBleeding) && (_bloodVolume >= 0.4)) exitWith {
	true
};

false