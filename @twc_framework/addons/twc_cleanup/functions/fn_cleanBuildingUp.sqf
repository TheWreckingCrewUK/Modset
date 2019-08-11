params ["_buildingOld", "_buildingNew", "_isRuin"];

if (_isRuin) then {
	private _buildingPos = getPos _buildingOld;
	private _radi = sizeOf typeOf _buildingOld;
	private _objects = nearestObjects [_buildingPos, ["Strategic", "NonStrategic", "Thing"], _radi];

	// Don't delete the ruin itself
	_objects deleteAt (_objects find _buildingNew);
	_objects deleteAt (_objects find _buildingOld);
	_buildingOld hideobjectglobal true; // BI only use hideobject in some cases
	{ deleteVehicle _x; } forEach _objects;
	
	diag_log format ["[TWC] Removed debris from building: %1", _buildingNew];
};