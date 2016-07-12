/*
work this script into one that can place vehicles into towns
that don't exactly have roads running right through them
*/
_spawnMarker = _this select 0;
_spawnRadius = _this select 1;
_amountToSpawn = _this select 2;

_vehicle = 0;

while {_vehicle < _amountToSpawn} do {
	_vehiclePos = [_spawnMarker, _spawnRadius] call CBA_fnc_randPos;
	
	if (_vehiclePos distance (nearestBuilding _vehiclePos) > 5 && _vehiclePos distance (nearestObject _vehiclePos) > 5) then {
		_selectVehicle = vehicleList select (floor(random(count vehicleList)));
		_newVehicle = _selectVehicle createVehicle _vehiclePos;
		_newVehicle setDir (random 360);
		_vehicle = _vehicle + 1;
	};	
};