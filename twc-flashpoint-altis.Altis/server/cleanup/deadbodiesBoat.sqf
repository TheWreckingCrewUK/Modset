while {true} do{
	_Deadbodies = nearestObjects [getmarkerpos "boatCrate", ["man"], 500];
	{if (not alive _x) then {deleteVehicle _x};} forEach _Deadbodies;
	sleep 1;
};