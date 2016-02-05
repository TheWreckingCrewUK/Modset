/*
* Details
*
* Gives a 50-50 chance of spawning a squad around the marker and set them to cba defend.
*
* example ["Gospandi"] call twc_smallTown;
*/

params["_marker"];
_random = random 100;
/*
if (_random < 25) then {
	if (isServer) then {
		_groupSpawn = [getMarkerPos _marker, East, ["LOP_AM_Infantr_TL","LOP_AM_Infantry_Rifleman","LOP_AM_Infantry_AT","LOP_AM_Infantry_Rifleman"],[],[],[],[],[],180] call BIS_fnc_spawnGroup;
		[_groupSpawn] call CBA_fnc_TaskDefend;
	};
};
*/
HCPresent = if(isNil "HC") then{False} else {True};
if(HCPresent) then{
	if(!hasInterface && !isServer) then{
		_groupSpawn = [getMarkerPos _marker, East, ["LOP_AM_Infantr_TL","LOP_AM_Infantry_Rifleman","LOP_AM_Infantry_AT","LOP_AM_Infantry_Rifleman"],[],[],[],[],[],180] call BIS_fnc_spawnGroup;
		[_groupSpawn] call CBA_fnc_TaskDefend;
	};
	if(!isDedicated && isServer) then{
		_groupSpawn = [getMarkerPos _marker, East, ["LOP_AM_Infantr_TL","LOP_AM_Infantry_Rifleman","LOP_AM_Infantry_AT","LOP_AM_Infantry_Rifleman"],[],[],[],[],[],180] call BIS_fnc_spawnGroup;
		[_groupSpawn] call CBA_fnc_TaskDefend;
	};
} else{
	if(isDedicated) then{
		_groupSpawn = [getMarkerPos _marker, East, ["LOP_AM_Infantr_TL","LOP_AM_Infantry_Rifleman","LOP_AM_Infantry_AT","LOP_AM_Infantry_Rifleman"],[],[],[],[],[],180] call BIS_fnc_spawnGroup;
		[_groupSpawn] call CBA_fnc_TaskDefend;
	};
};