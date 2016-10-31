params["_location", "_dir"];

["comp_roadBlock", _dir, _location] execVM "compositions\createcomposition.sqf";

for "_i" from 1 to 1 do{
	_groupSpawn = [_location, Independent,squad,[],[],[],[],[],180] call BIS_fnc_spawnGroup;
	{
		_x setVariable ["unitsHome",_location,false];
	}forEach units _groupSpawn;
};

_trg = createTrigger ["EmptyDetector", _location];
_trg setTriggerArea [600, 600, 0, false];
_trg setTriggerActivation ["Any", "PRESENT", true];
_trg setTriggerStatements ["West countSide thisList  == 0 || Independent countSide thisList < 2", format["[%1,thisList, %2] call twc_fnc_spawnRoadBlockDeciding", _location, _dir],""];