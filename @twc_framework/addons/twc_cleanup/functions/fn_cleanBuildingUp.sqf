params ["_buildingOld", "_buildingNew", "_isRuin"];

if (_isRuin) then {
	private _buildingPos = getPos _buildingOld;
	private _radi = sizeOf typeOf _buildingOld / 2;
	private _objects = nearestObjects [_buildingPos, ["Strategic", "NonStrategic", "Thing"], _radi];

	// Don't delete the ruin itself
	_objects deleteAt (_objects find _buildingNew);
	{ deleteVehicle _x; } forEach _objects;
};