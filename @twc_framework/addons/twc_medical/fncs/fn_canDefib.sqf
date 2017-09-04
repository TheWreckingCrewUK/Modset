/*
	pre-reqs:
	- must be in a medical vehicle
	- must not be bleeding
	- requires the patient to have some blood (about a third of their blood level?)
 */
params ["_caller", "_target"];

if !(_target isKindOf "CAManBase") exitWith { false };
if (_caller == _target) exitwith { false };

// same uncon check as cpr
private _unCon = [_caller, _target] call twc_medical_fnc_canCPR;
private _inMedVehicle = [_target] call ace_medical_fnc_isInMedicalVehicle;
private _isBleeding = [_target] call ace_medical_fnc_isInStableCondition;
private _bloodVolume = [_caller, _target] call twc_medical_fnc_getBloodLoss; // i should change the name some time

// is in need of defibs
if (_unCon && _inMedVehicle && !(_isBleeding) && (_bloodVolume >= 0.3)) exitWith {
	true;
};

false;