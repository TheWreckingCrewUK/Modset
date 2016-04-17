/*
*
* Called after blufor capture
*
* Sends a hind to attack them
*/
params["_marker"];

_group = [getMarkerPos "mainHQ", EAST, hind] call Bis_fnc_spawnGroup;

[_group, getMarkerPos _marker,25] call CBA_fnc_taskAttack;