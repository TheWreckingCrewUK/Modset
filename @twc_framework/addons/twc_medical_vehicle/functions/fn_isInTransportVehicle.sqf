params ["_unit"];

private _vehicle = vehicle _unit;

_unit != _vehicle && {!(_unit in [driver _vehicle, gunner _vehicle, commander _vehicle])} && {[_vehicle] call TWC_Medical_Vehicle_fnc_isTransportVehicle}