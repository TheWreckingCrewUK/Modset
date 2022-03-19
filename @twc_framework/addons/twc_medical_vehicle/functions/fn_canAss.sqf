/*	pre-reqs:
 *	- must be in an ambulance or medical transport vehicle
 *	- can't be on IV drip
 */
params ["_caller", "_target"];

if !(alive _target) exitWith { false };
if !(_target isKindOf "CAManBase") exitWith { false };
if (_caller == _target) exitwith { false };
if (_target getVariable ["TWC_Medical_receivingIV", false]) exitWith { false };
if (_target getVariable ["TWC_Medical_receivingAss", false]) exitWith { false };

// potential future option is to have a "BLOOD BANK" variable, so there's a limited supply if necessary
private _medicInVehicle = [_caller] call ace_medical_treatment_fnc_isInMedicalVehicle;
private _patientInVehicle = [_target] call ace_medical_treatment_fnc_isInMedicalVehicle;

if (!_medicInVehicle || !_patientInVehicle) exitWith { false };

true