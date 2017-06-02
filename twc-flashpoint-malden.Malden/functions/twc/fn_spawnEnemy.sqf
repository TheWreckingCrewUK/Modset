/*
* Created by [TWC] jayman
*
* Spawns the enemies in the position
*
* ARGUMENTS

*/
params["_marker","_radius"];

systemChat _marker;
_pos = (getMarkerPos _marker);

_buildings = nearestObjects [_pos,["Building"],_radius];

_group = createGroup EAST;
_building = _buildings call bis_fnc_selectRandom;

for "_i" from 0 to ((count infSquad) - 1) do {
	_unit = _group createUnit [(infSquad select _i),(getPos _building),[],0,"FORM"];
	_unit setVariable ["unitsHome",_marker,false];
	sleep 0.1;
};
[_group] call CBA_fnc_taskDefend;

_group = createGroup EAST;
_building = _buildings call bis_fnc_selectRandom;
for "_i" from 0 to ((count infSquad) - 1) do {
	_unit = _group createUnit [(infSquad select _i),(getPos _building),[],0,"FORM"];
	_unit setVariable ["unitsHome",_marker,false];
	sleep 0.1;
};
[_group] call CBA_fnc_taskDefend;

_group = createGroup EAST;
_building = _buildings call bis_fnc_selectRandom;
for "_i" from 0 to ((count infSquad) - 1) do {
	_unit = _group createUnit [(infSquad select _i),(getPos _building),[],0,"FORM"];
	_unit setVariable ["unitsHome",_marker,false];
	sleep 0.1;
};
[_group] call CBA_fnc_taskDefend;

_group = createGroup EAST;
_building = _buildings call bis_fnc_selectRandom;
for "_i" from 0 to ((count infAT) - 1) do {
	_unit = _group createUnit [(infAT select _i),(getPos _building),[],0,"FORM"];
	_unit setVariable ["unitsHome",_marker,false];
	sleep 0.1;
};
[_group,getPos (leader _group),200,5] call CBA_fnc_taskPatrol;

_group = createGroup EAST;
_building = _buildings call bis_fnc_selectRandom;
for "_i" from 0 to ((count infAA) - 1) do {
	_unit = _group createUnit [(infAA select _i),(getPos _building),[],0,"FORM"];
	_unit setVariable ["unitsHome",_marker,false];
	sleep 0.1;
};
[_group,getPos (leader _group),200,5] call CBA_fnc_taskPatrol;

_pos = [(getMarkerPos _marker),[0,600],[0,360],2,[0,200]] call SHK_pos;
_veh = "O_Boat_Armed_01_hmg_F" createVehicle _pos;
createVehicleCrew _veh;