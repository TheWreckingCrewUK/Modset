/*
*
* Called after blufor capture
*
* Sends a hind to attack them
*/
params["_marker"];
if((getMarkerColor "airbase1") != "ColorEAST")exitWith{ hint "Enemy Base Captured"};

_group = [getMarkerPos "airbase1", EAST, hind] call Bis_fnc_spawnGroup;

[_group, getMarkerPos _marker,25] call CBA_fnc_taskAttack;