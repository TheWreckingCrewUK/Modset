/*
*
*
*/

if((getMarkerColor "hq2") == "ColorWEST")exitWith{ hint "Enemy Base Captured"};

_marker = capturedArray call BIS_fnc_selectRandom;

_startingPoint = "hq2";

_startMarker = getMarkerPos _startingPoint;
_endMarker = getMarkerPos _marker;


_Squad = (configfile >> "CfgGroups" >> "East" >> "CUP_O_SLA" >> "Infantry" >> "CUP_O_SLA_InfantrySectionMG");
_Vehicle = "CUP_O_BMP2_SLA";
_crewArray = ["CUP_O_sla_Crew","CUP_O_sla_Crew","CUP_O_sla_Crew"];


_veh = _Vehicle createVehicle _startMarker;

_vehicleGroup = [[0,0,0], EAST,_crewArray] call BIS_fnc_spawnGroup;
_vehicleGrouparray = units _vehicleGroup;

(_VehicleGroupArray select 0) moveindriver _veh;
(_VehicleGroupArray select 1) moveingunner _veh;
(_VehicleGroupArray select 2) moveincommander _veh;


_MechInf = [[0,0,0], East,_Squad] call BIS_fnc_spawnGroup;
{
	_x moveincargo _veh;
	_x assignAsCargo _veh;
} foreach units _MechInf;

_pos = [_endMarker,[100,200],180,0,[1,50]] call SHK_pos;

//Start moving.
_MechVehWaypoint = _VehicleGroup addWaypoint [_pos, 0];
_MechVehWaypoint setWaypointType "TR UNLOAD";
_MechVehWaypoint setWaypointBehaviour "CARELESS";
_MechVehWaypoint setWaypointSpeed "FULL";
_MechVehWaypoint setWaypointStatements ["True", format["['%1'] call twc_siteContested", _marker]];


{
	_x action ["GetOut", _veh];
}foreach units _MechInf;

[_MechInf, _endMarker,20] call CBA_fnc_taskAttack;

_MechVehWaypoint = _VehicleGroup addWaypoint [_endMarker, 0];
_MechVehWaypoint setWaypointType "MOVE";
_MechVehWaypoint setWaypointBehaviour "COMBAT";
_MechVehWaypoint setWaypointSpeed "FULL";