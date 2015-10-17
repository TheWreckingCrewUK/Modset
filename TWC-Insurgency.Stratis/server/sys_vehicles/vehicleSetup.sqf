/*
work this script into one that can place vehicles into towns
that don't exactly have roads running right through them
*/
_spawnMarker = _this select 0;
_spawnRadius = _this select 1;
_amountToSpawn = _this select 2;

_vehicle = 0;
_vehicleList = ["C_Offroad_01_F", "rhs_uaz_open_chdkz", "C_SUV_01_F", "C_Quadbike_01_F", "C_Hatchback_01_F", "C_Hatchback_01_sport_F", "C_Van_01_transport_F"];

while {_vehicle < _amountToSpawn} do {
	_vehiclePos = [_spawnMarker, _spawnRadius] call CBA_fnc_randPos;
	
	if (_vehiclePos distance (nearestBuilding _vehiclePos) > 5 && _vehiclePos distance (nearestObject _vehiclePos) > 5) then {
		_selectVehicle = _vehicleList select (floor(random(count _vehicleList)));
		_newVehicle = _selectVehicle createVehicle _vehiclePos;
		_newVehicle setDir (random 360);
		_vehicle = _vehicle + 1;
	};	
};