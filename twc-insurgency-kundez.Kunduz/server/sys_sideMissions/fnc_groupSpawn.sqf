params["_pos","_waves"];

for "_i" from 1 to _waves do{
	_spawnPos = [getPos _pos,30,[0,360]] call SHK_pos;
	_groupSpawn = [_spawnPos, East, townSquadWave] call BIS_fnc_spawnGroup;
	[_groupSpawn] call CBA_fnc_taskPatrol;
};