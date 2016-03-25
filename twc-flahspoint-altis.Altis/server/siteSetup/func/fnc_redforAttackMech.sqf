/*
*
*
*/


_startingPoint = "hq2";

_endingPoint = capturedArray call BIS_fnc_selectRandom;

_CentralMarker = format ["%1",_startingPoint];

_mechsquad = (configfile >> "CfgGroups" >> "East" >> "CUP_O_SLA" >> "Mechanized" >> "CUP_O_SLA_MechInfSquad");

_squad = (configfile >> "CfgGroups" >> "East" >> "CUP_O_SLA" >> "Infantry" >> "CUP_O_SLA_InfantrySectionMG");

if isServer then {
	private ["_pos","_m"];
	_pos = [getmarkerpos _CentralMarker,[0,0],random 360,0,[1]] call SHK_pos;
	_PatrolSquad = [_pos, EAST, _mechsquad] call BIS_fnc_spawnGroup;

	
	_vehicle = nearestObject [_pos, "Tank"];
	_men = nearestObjects [_pos, ["Man"], 200];
	_crew = crew _vehicle;
	_men = _men - _crew;
	{
	deleteVehicle _x
	}forEach _men;
	
	_PatrolInf = [_pos, EAST, _squad] call BIS_fnc_spawnGroup;
	_count = 0;
	{
		_count = _count + 1;
		_x assignAsCargo _vehicle;
		_x moveInCargo [_vehicle, _count];
	}forEach units _PatrolInf;
	
	while{(count (waypoints (_PatrolInf))) > 0} do
	{
		deleteWaypoint ((waypoints (_PatrolInf)) select 0);
	};
	while{(count (waypoints (_PatrolSquad))) > 0} do
	{
		deleteWaypoint ((waypoints (_PatrolSquad)) select 0);
	};
	
	_pos = [getmarkerpos _endingPoint,[0,0],random 360,0,[1]] call SHK_pos;
	
	_wp = _PatrolSquad addWaypoint [_pos, 0];
	_wp setWaypointType "TR UNLOAD";
	_wp setwaypointCompletionRadius 15;
	_wp setWaypointBehaviour "CARELESS";
	_wp setWaypointSpeed "FULL";
	

	_wp2 = _PatrolInf addWaypoint [_pos, 0];
	_wp2 setWaypointType "UNLOAD";
	_wp2 setWaypointBehaviour "COMBAT";
	_wp2 setWaypointSpeed "FULL";

	_wp2 synchronizeWaypoint [_wp];
	
	_wp3 = _PatrolSquad addWaypoint [getMarkerPos _startingPoint,1];
	_wp3 setWaypointType "DESTROY";
	_wp3 setWaypointBehaviour "COMBAT";
	_wp3 setWaypointSpeed "FULL";
	
	_wp4 = _PatrolInf addWaypoint [getMarkerPos _startingPoint,1];
	_wp4 setWaypointType "DESTROY";
	_wp4 setWaypointBehaviour "COMBAT";
	_wp4 setWaypointSpeed "FULL";
};