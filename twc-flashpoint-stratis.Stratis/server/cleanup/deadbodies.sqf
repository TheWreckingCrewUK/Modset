while {true} do{
	_deadbodies = nearestObjects [getPos RussianCheckTrigger, ["man"], 300];
	{if (not alive _x) then {deleteVehicle _x};} forEach _deadbodies;
	sleep 5;
};