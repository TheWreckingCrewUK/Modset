/*
*
*
*/
Params ["_startingPoint","_endingPoint"];

_Squad = (configfile >> "CfgGroups" >> "East" >> "CUP_O_SLA" >> "Infantry" >> "CUP_O_SLA_InfantrySectionMG");
_Vehicle = "CUP_O_BMP2_SLA";
_CrewMember = "CUP_O_sla_Crew";

_veh = _Vehicle createVehicle _startingPoint;

_VehicleGroup = createGroup east;
for "_i" from 0 to 2 do{
_crewMemberAssign = _CrewMember Createunit[[0,0,0],_VehicleGroup];
};
(_VehicleGroup select 0) moveindriver _veh;
(_VehicleGroup select 1) moveingunner _veh;
(_VehicleGroup select 2) moveincommander _veh;

_MechInf = [[0,0,0], East,_Squad] call BIS_fnc_spawnGroup;
{
_x moveincargo _veh;
} foreach units _MechInf;

//Start moving.
_MechVehWaypoint = _VehicleGroup addWaypoint [_endingPoint, 0];
_MechVehWaypoint setWaypointType "MOVE";
_MechVehWaypoint setWaypointBehaviour "COMBAT";
_MechVehWaypoint setWaypointSpeed "FULL";

for "_y" from 0 to 360 do{
	if (_veh distance _endingPoint < 200) exitwith{
		deleteWaypoint [_VehicleGroup, 0];
		_MechVehStop = _VehicleGroup addWaypoint [getpos (_VehicleGroup select 0),0];
		_MechVehStop setWaypointType "MOVE";
		_MechVehStop setWaypointBehaviour "CARELESS";
		_MechVehStop setWaypointSpeed "FULL";
		{
			_unit action ["GetOut", _veh];
			sleep 0.2;
		}foreach units _MechInf;
		_MechInfMove = _MechInf addWaypoint [_endingPoint,0];
		_MechInfMove setWaypointType "DESTROY";
		_MechInfMove setWaypointBehaviour "COMBAT";
		_MechInfMove setWaypointSpeed "FULL";
		
		_MechVehWaypoint = _VehicleGroup addWaypoint [_endingPoint, 0];
		_MechVehWaypoint setWaypointType "MOVE";
		_MechVehWaypoint setWaypointBehaviour "COMBAT";
		_MechVehWaypoint setWaypointSpeed "FULL";
	};
	sleep 10;
};