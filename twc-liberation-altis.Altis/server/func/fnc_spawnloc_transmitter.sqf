params["_location"];

_buildings = nearestObjects [_location,["house","buildings"],50];
_town = nearestLocation[_location,""];
_town = text _town;
[_buildings,_town]spawn{
	for "_i" from 1 to 2 do{
		_spawnPos = (_this select 0) call BIS_fnc_selectRandom;
		_spawnPos = getPos _spawnPos;
		_groupSpawn = [_spawnPos, Independent,squad,[],[],[],[],[],180] call BIS_fnc_spawnGroup;
		_wp =_groupSpawn addWaypoint [_spawnPos, 0];
		_wp setWaypointType "LOITER";
		{
			_x setVariable ["unitsHome",(_this select 1),false];
		}forEach units _groupSpawn;
		sleep 8;
	};	
};