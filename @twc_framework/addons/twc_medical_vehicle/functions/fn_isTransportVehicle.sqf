params ["_vehicle"];

_vehicle getVariable ["TWC_Medical_Vehicle_isMedicalVehicle", getNumber (configOf _vehicle >> "TWC_isTransportVehicle") > 0]