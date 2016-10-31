params["_location"];

_town = nearestLocation[_location,""];
_town = text _town;
[_location,_town]spawn{
	for "_i" from 1 to 2 do{
	
		_groupSpawn = [(_this select 0), Independent,squad,[],[],[],[],[],180] call BIS_fnc_spawnGroup;
		{
			_x setVariable ["unitsHome",(_this select 1),false];
		}forEach units _groupSpawn;
		sleep 8;
	};	
};