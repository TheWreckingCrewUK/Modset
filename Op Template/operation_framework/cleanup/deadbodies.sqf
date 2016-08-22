while {true} do{
	_Deadbodies = nearestObjects [getmarkerpos "base", ["man"], 200];
	{if (not alive _x) then {deleteVehicle _x};} forEach _Deadbodies;
	sleep 1;
};