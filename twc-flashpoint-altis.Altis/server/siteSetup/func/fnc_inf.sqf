/*
*   AO Funtion for Flashpoint for use only on TWC by Jayman
*
*   Parameters
*
*   0 - Marker that is named with the name of the town it is placed over
*
*
*  returns
*
*  fuck all expect for one AO
*
*/

params["_marker"];

_pos = [getmarkerpos _marker,[100,250],random 360,0] call SHK_pos;
_group = [_pos, EAST, shilka] call BIS_fnc_spawnGroup;
{_x setVariable ["unitsHome",_marker,false]}forEach units _group;
sleep 1;

_pos = [getmarkerpos _marker,[0,300],random 360,0] call SHK_pos;
_PatrolBRDM = [_pos, EAST, BRDM] call BIS_fnc_spawnGroup;
[_PatrolBRDM, getmarkerpos _marker, 350] call CBA_fnc_taskPatrol;
sleep 1;

_pos = [getmarkerpos _marker,[0,300],random 360,0] call SHK_pos;
_group = [_pos, EAST, BRDMAT] call BIS_fnc_spawnGroup;
[_group, getmarkerpos _marker, 350] call CBA_fnc_taskPatrol;
{_x setVariable ["unitsHome",_marker,false]}forEach units _group;
sleep 1;

for "_i" from 0 to 1 do {
	sleep 2;
	_pos = [getmarkerpos _marker,[50,200],random 360,0] call SHK_pos;
	_group = [_pos, EAST, ATteam] call BIS_fnc_spawnGroup;
	[_group, getmarkerpos _marker, 200] call CBA_fnc_taskPatrol;
	{_x setVariable ["unitsHome",_marker,false]}forEach units _group;
};

for "_i" from 0 to 1 do {
	private ["_pos","_m"];
	_pos = [getmarkerpos _marker,[50,200],random 360,0] call SHK_pos;
	_group = [_pos, EAST, AAteam] call BIS_fnc_spawnGroup;
	[_group, getmarkerpos _marker, 200] call CBA_fnc_taskPatrol;
	{_x setVariable ["unitsHome",_marker,false]}forEach units _group;
	sleep 1;
};

for "_i" from 0 to 1 do {
	sleep 2;
	_pos = [getmarkerpos _marker,[50,200],random 360,0] call SHK_pos;
	_group = [_pos, EAST, squad] call BIS_fnc_spawnGroup;
	[_group, getmarkerpos _marker, 200] call CBA_fnc_taskDefend;
	{_x setVariable ["unitsHome",_marker,false]}forEach units _group;
};