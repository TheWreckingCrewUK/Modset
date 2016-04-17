/*
*
*
*/


_startingPoint = remainingArray call BIS_fnc_selectRandom;
_marker = remainingArray call BIS_fnc_selectRandom;

while{_startingPoint == _marker}do{
_marker = remainingArray call BIS_fnc_selectRandom
};

if isServer then {
	private ["_pos","_m"];
	_pos = [getmarkerpos _startingPoint,[300,400],random 360,0,[0,200],[300, "Air"]] call SHK_pos;
	_PatrolSquad = [_pos, Independent, squad] call BIS_fnc_spawnGroup;


	_dir = [getMarkerPos _marker, getMarkerPos _startingPoint] call BIS_fnc_dirTo;
	_pos = [getMarkerpos _marker,[50,100],_dir,0,[0,200],[300, "Air"]] call SHK_pos;
	
	_wp = _PatrolSquad addWaypoint [_pos, 0];
	_wp setWaypointType "MOVE";
	_wp setWaypointBehaviour "SAFE";
	_wp setWaypointSpeed "NORMAL";
	_wp setWaypointTimeout [30,30,30];
	_wp setWaypointStatements ["True","{deleteVehicle _x}foreach thisList"];
};