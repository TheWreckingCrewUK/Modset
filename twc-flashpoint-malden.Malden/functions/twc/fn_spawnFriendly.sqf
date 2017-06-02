/*
* Created by [TWC] jayman
*
* Spawns the enemies in the position
*
* ARGUMENTS

*/
params["_pos"];

_buildings = nearestObjects [_pos,["Building"],200];

_group = createGroup West;
_building = _buildings call bis_fnc_selectRandom;
for "_i" from 0 to ((count friendlyInf) - 1) do {
	_unit = _group createUnit [(friendlyInf select _i),(getPos _building),[],0,"FORM"];
	_unit setVariable ["unitsHome",_pos,false];
	sleep 0.1;
};
[_group,getPos (leader _group),200,5] call CBA_fnc_taskPatrol;