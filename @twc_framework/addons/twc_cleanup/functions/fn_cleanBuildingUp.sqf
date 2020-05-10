params ["_buildingOld", "_buildingNew", "_isRuin"];

if (_isRuin) then {
	private _buildingPos = getPos _buildingOld;
	private _buildingSize = (sizeOf typeOf _buildingOld);

	private _radi = (_buildingSize / 2) + (_buildingSize / 10);
	private _entities = entities [["Thing"], ["Logic"], true] select {_x distance _buildingPos < _radi};
	private _objects = nearestObjects [_buildingPos, ["LandVehicle", "Strategic", "NonStrategic", "Thing"], _radi];
	
	// Don't delete the ruin itself
	_objects deleteAt (_objects find _buildingNew);
	
	{
		if !(isPlayer _x) then {
			if (_x isKindof "CAManBase") then {
				if (alive _x) then {
					_x setDamage 1;
				};
			} else {
				deleteVehicle _x;
			};
		};
	} forEach _entities;
	
	_buildingOld hideobjectglobal true; // BI only use hideobject in some cases
	{ deleteVehicle _x; } forEach _objects;
	
	diag_log format ["[TWC] Removed debris from building: %1", _buildingNew];
};