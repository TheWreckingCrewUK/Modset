/*
*
* Called after blufor capture
*
* Sends a hind to attack them
*/
params["_marker"];

_hind = ["CUP_O_Mi24_V_RU"];

_group = [getMarkerPos "mainHQ", Independent, _hind] call Bis_fnc_spawnGroup;

[_group, getMarkerPos _marker,25] call CBA_fnc_taskAttack;