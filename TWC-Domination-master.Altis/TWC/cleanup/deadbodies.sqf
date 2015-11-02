
while {true} do{
	_Deadbodies = nearestObjects [getmarkerpos "respawn_west", ["man"], 550];
	{if (not alive _x) then {deleteVehicle _x};} forEach _Deadbodies;
	sleep 1;
};