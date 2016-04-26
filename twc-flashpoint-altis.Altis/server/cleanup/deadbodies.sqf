while {true} do{
	if(getMarkerColor "airBase2" == "colorWEST" || getMarkerColor "commanderBase" == "colorWEST") then{
		_Deadbodies = nearestObjects [getmarkerpos "crate", ["man"], 300];
		{if (not alive _x) then {deleteVehicle _x};} forEach _Deadbodies;
	};
	sleep 5;
};