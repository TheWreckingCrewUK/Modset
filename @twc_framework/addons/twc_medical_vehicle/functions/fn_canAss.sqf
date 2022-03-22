/*	pre-reqs:
 *	- must be in an ambulance or medical transport vehicle
 *	- can't be on IV drip
 *	- obv can't be already on it
 */
params ["_caller", "_target"];

if !(alive _target) exitWith { false };
if !(_target isKindOf "CAManBase") exitWith { false };
if (_caller == _target) exitwith { false };
if (_target getVariable ["TWC_Medical_receivingIV", false]) exitWith { false };
if (_target getVariable ["TWC_Medical_receivingAss", false]) exitWith { false };

private _medicInMedVehicle = [_caller] call ace_medical_treatment_fnc_isInMedicalVehicle;
private _patientInMedVehicle = [_target] call ace_medical_treatment_fnc_isInTransportVehicle;

private _medicInTransVehicle = [_caller] call twc_medical_vehicle_fnc_isInMedicalVehicle;
private _patientInTransVehicle = [_target] call twc_medical_vehicle_fnc_isInTransportVehicle;

if ((_medicInMedVehicle && _patientInMedVehicle) || (_medicInTransVehicle && _patientInTransVehicle)) exitWith { true };

false