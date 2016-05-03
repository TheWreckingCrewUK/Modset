while {true} do{
	if(getMarkerColor "airBase2" == "colorWEST" || getMarkerColor "commanderBase" == "colorWEST") then{
		_deadbodies = nearestObjects [getmarkerpos "crateDefault", ["man"], 300];
		{if (not alive _x) then {deleteVehicle _x};} forEach _deadbodies;
	};
	sleep 5;
};