/*
* Created by [TWC] jayman
*
* Spawns the town start trigger with whatever params are given
*
* ARGUMENTS

*/
params["_marker"];

[_marker,250] spawn twc_fnc_spawnEnemy;
[_marker] spawn twc_fnc_spawnCiv;

_trg = createTrigger ["EmptyDetector", (getMarkerPos _marker)];
_trg setTriggerArea [2000, 2000, 0, false];
_trg setTriggerTimeout [5,5,5,true];
_trg setTriggerActivation ["ANY", "PRESENT", false];
_trg setTriggerStatements ["{(_x getVariable 'unitsHome') == (thisTrigger getVariable 'triggerMarker') && side _x == EAST}count thisList < 5 || {isPlayer _x}count ThisList == 0","[(thisTrigger getVariable 'triggerMarker'),thisList] call twc_fnc_siteDeciding",""];

_trg setVariable ["triggerMarker",_marker];