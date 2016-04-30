while {true} do{
	_deadbodies = nearestObjects [getmarkerpos "boatCrate", ["man"], 500];
	{if (not alive _x) then {deleteVehicle _x};} forEach _deadbodies;
	sleep 1;
};