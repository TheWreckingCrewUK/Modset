params["_location"];

_buildings = nearestObjects [_location,["house","buildings"],200];
[_buildings,_location]spawn{
	for "_i" from 1 to 3 do{
		_spawnPos = (_this select 0) call BIS_fnc_selectRandom;
		_spawnPos = getPos _spawnPos;
		_groupSpawn = [_spawnPos, Independent,squad,[],[],[],[],[],180] call BIS_fnc_spawnGroup;
		{
			_x setVariable ["unitsHome",(_this select 1),false];
		}forEach units _groupSpawn;
		sleep 8;
	};
	_spawnPos = (_this select 0) call BIS_fnc_selectRandom;
	_spawnPos = getPos _spawnPos;
	_groupSpawn = [_spawnPos, Independent,squadAT,[],[],[],[],[],180] call BIS_fnc_spawnGroup;
	{
			_x setVariable ["unitsHome",(_this select 1),false];
		}forEach units _groupSpawn;
	
};