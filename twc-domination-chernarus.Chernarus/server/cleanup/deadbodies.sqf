while {true} do{
	_deadbodies = nearestObjects [getMarkerPos "respawn_west", ["man"], 300];
	{if (not alive _x) then {deleteVehicle _x};} forEach _deadbodies;
	sleep 5;
};