while {true} do{
	if (basemode == 0) then {
	_Deadbodies = nearestObjects [getmarkerpos "respawn_west", ["man"], 200];
	{if (not alive _x) then {deleteVehicle _x};} forEach _Deadbodies;
	sleep 5;
	};
};