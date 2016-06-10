/*
*
* Script teleports nearby to the caller to a selected location
*
*/

fnc_clickToSpawn = { 
	_closetunits = nearestObjects [player, ["Man"], 20];

	{vehicle _x setpos [_this select 0,_this select 1,_this select 2];}foreach _closetunits;
};

openMap [true, false] 
onMapSingleClick "_pos spawn fnc_clickToSpawn; onMapSingleClick """"";
