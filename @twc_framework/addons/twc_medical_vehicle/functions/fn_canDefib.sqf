/*	pre-reqs:
 *	- must be in a medical vehicle
 *	- must not be bleeding
 *	- requires the patient to have some blood (about two thirds of their blood level?)
 */
params ["_caller", "_target"];

if !(_target isKindOf "CAManBase") exitWith { false };
if (_caller == _target) exitwith { false };

// same uncon check as cpr
_unCon = [_caller, _target] call ace_medical_treatment_fnc_canCPR;
_inMedVehicle = [_caller] call ace_medical_treatment_fnc_isInMedicalVehicle;
_isBleeding = _target getVariable ["ace_medical_woundBleeding", 0] > 0;
_bloodVolume = _target getVariable ["ace_medical_bloodVolume", 6];

// is in need of defibs
if (_unCon && _inMedVehicle && !(_isBleeding) && (_bloodVolume >= 2.4)) exitWith {
	true
};

false