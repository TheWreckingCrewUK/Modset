Params ["_startingPoint","_endingPoint"];

_Squad = (configfile >> "CfgGroups" >> "East" >> "CUP_O_SLA" >> "Infantry" >> "CUP_O_SLA_InfantrySectionMG");
_Vehicle = "CUP_O_BMP2_SLA";
_CrewMember = "CUP_O_sla_Crew";

_veh = _Vehicle createVehicle _startingPoint;

_VehicleGroup = createGroup east;
for "_i" from 0 to 2 do{
_crewMemberAssign = _CrewMember Createunit[[0,0,0],_VehicleGroup];
};
((units _VehicleGroup) select 0) moveindriver _veh;
((units _VehicleGroup) select 1) moveingunner _veh;
((units _VehicleGroup) select 2) moveincommander _veh;

_MechInf = [[0,0,0], East,_Squad] call BIS_fnc_spawnGroup;
{
_x moveincargo _veh;
} foreach units _MechInf;

//Start moving.
_pos = [_endingPoint,[150,200],[(_veh getdir _endingPoint) + 180,(_veh getdir _endingPoint) + 180],0,[1,5]] call SHK_pos;

_MechVehUnload = _VehicleGroup addWaypoint [_pos, 0];
_MechVehUnload setWaypointType "TR UNLOAD";
_MechVehUnload setWaypointBehaviour "COMBAT";
_MechVehUnload setWaypointSpeed "FULL";

_MechVehMove = _VehicleGroup addWaypoint [_endingPoint, 1];
_MechVehMove setWaypointType "MOVE";
_MechVehMove setWaypointBehaviour "COMBAT";
_MechVehMove setWaypointSpeed "FULL";

_InfVehMove = _MechInf addWaypoint [_endingPoint, 0];
_InfVehMove setWaypointType "MOVE";
_InfVehMove setWaypointBehaviour "COMBAT";
_InfVehMove setWaypointSpeed "FULL";
_InfVehMove setWaypointStatements ["true", "[this,getpos this, 20] call CBA_fnc_taskDefend;"];





















/*
_startingPoint = "hq2";

_endingPoint = capturedArray call BIS_fnc_selectRandom;

_CentralMarker = format ["%1",_startingPoint];



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