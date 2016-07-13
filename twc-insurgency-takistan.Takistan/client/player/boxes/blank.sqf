_house = nearestObjects [player, ["house"], 300]; 
{
	_rand = random 30;
	if (floor _rand < 2) then{
		_groupSpawn = [getpos _x, East, townSpawn,[],[],[],[],[],0] call BIS_fnc_spawnGroup;
		[_groupSpawn] call CBA_fnc_TaskDefend;
		{
			_x disableAI "ANIM";
			_x hideObject True;
		}foreach units _groupSpawn
	};
}forEach _house;

_enemy = nearestObjects [player, ["Man"], 50];
{
	_x enableAI "ANIM";
	_x hideObject False;
}forEach _enemy;


_enemy = nearestObjects [player, ["Man"], 300];
_count = 0;
{
	_count = _count + 1;
	hint str _count;
}forEach _enemy;

_house = nearestObjects [player, ["house"], 20000]; 
{
	_markerstr = createMarker [str random 10000,_x];
	_markerstr setMarkerShape "ICON";
	_markerstr setMarkerType "hd_dot";
		
}forEach _house;

_house = nearestObjects [player, ["house"], 20000]; 
{
	createVehicle ["CUP_I_GUE_Soldier_AKM", _x,[],0,"NONE"];	
		
}forEach _house;