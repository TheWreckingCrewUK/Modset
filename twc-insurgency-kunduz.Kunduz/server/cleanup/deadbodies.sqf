while {true} do{
	_Deadbodies = nearestObjects [getmarkerpos "nofire", ["man"], 200];
	{if (not alive _x) then {deleteVehicle _x};} forEach _Deadbodies;
	sleep 5;
};