/*
* Created by [TWC] jayman
*
* Spawns the town start trigger with whatever params are given
*
* ARGUMENTS

*/
params["_location","_pos","_type","_markerstr"];

[_location,_pos] spawn twc_fnc_spawnCiv;

if(getMarkerColor _markerstr == "colorEAST")then{
	[_pos,400] call twc_fnc_spawnEnemy;
	
	_trg = createTrigger ["EmptyDetector", _pos];
	_trg setTriggerArea [2000, 2000, 0, false];
	_trg setTriggerTimeout [5,5,5];
	_trg setTriggerActivation ["ANY", "PRESENT", false];
	_trg setTriggerStatements [format["{str (_x getVariable 'unitsHome') == (str %1) && side _x == EAST}count thisList < 5 || {isPlayer _x}count ThisList == 0",_pos], format["[(thisTrigger getVariable 'location'),%1,'%2','%3',thisList] call twc_fnc_siteDeciding",_pos,_type,_markerstr],""];

	_trg setVariable ["location",_location];
}else{
	_trg = createTrigger ["EmptyDetector", _pos];
	_trg setTriggerArea [2000, 2000, 0, false];
	_trg setTriggerTimeout [5,5,5];
	_trg setTriggerActivation ["WEST", "PRESENT", false];
	_trg setTriggerStatements ["{isPlayer _x}count ThisList == 0", format["[(thisTrigger getVariable 'location'),%1,'%2','%3'] spawn twc_fnc_siteCapturedBlufor",_pos,_type,_markerstr],""];

	_trg setVariable ["location",_location];
	
};