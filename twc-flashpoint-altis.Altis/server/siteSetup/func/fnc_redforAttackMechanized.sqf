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
_MechVehMove setWaypointSpeed "LIMITED";

_InfVehMove = _MechInf addWaypoint [_endingPoint, 0];
_InfVehMove setWaypointType "MOVE";
_InfVehMove setWaypointBehaviour "COMBAT";
_InfVehMove setWaypointSpeed "FULL";
_InfVehMove setWaypointStatements ["true", "[this,getpos this, 20] call CBA_fnc_taskDefend;"];