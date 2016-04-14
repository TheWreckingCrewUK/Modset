if((getMarkerColor "mainHQ") == "ColorWEST")exitWith{ hint "Enemy Base Captured"};

_marker = capturedArray call BIS_fnc_selectRandom;

_startingPoint = "mainHQ";


_endMarker = getMarkerPos _marker;

_Squad = (configfile >> "CfgGroups" >> "Independent" >> "CUP_O_SLA" >> "Infantry" >> "CUP_O_SLA_InfantrySectionMG");
_pilot = "CUP_O_sla_Pilot";
_Vehicle = "CUP_O_C130J_Cargo_TKA";

_pilot = (createGroup Independent) createUnit [_pilot, (getMarkerPos _startingPoint), [], 0, "NONE"]; //grpNull might need to be changed to EAST
_veh = _Vehicle createVehicle getMarkerPos _startingPoint;

_MechInf = [getMarkerPos _startingPoint, Independent,_Squad] call BIS_fnc_spawnGroup;

_pilot moveinDriver _veh;
{
_x addBackpack "B_Parachute";
_x moveInCargo _veh;
}forEach Units _MechInf;

_dir = [getMarkerPos _marker, getMarkerPos _startingPoint] call BIS_fnc_dirTo;
_pos = [getmarkerpos _marker,[200,300],_dir,0,[1,50]] call SHK_pos;
_MechVehWaypoint = _pilot addWaypoint [_pos, 0];
_MechVehWaypoint setWaypointType "MOVE";
_MechVehWaypoint setWaypointBehaviour "CARELESS";
_MechVehWaypoint setWaypointSpeed "FULL";
_mechVehWaypoint setwaypointCompletionRadius 300;
_mechVehWaypoint setWaypointStatements ["True", format["{moveOut _x}foreach _MechInf; ['%1'] call twc_siteContestedCounter", _marker]];

[_MechInf, _endMarker,20] call CBA_fnc_taskAttack;

//send helo back and delete
_dir = [getMarkerPos _startingPoint, getMarkerPos _marker] call BIS_fnc_dirTo;
_pos = [getmarkerpos _startingPoint,[200,300],_dir,0,[1,50]] call SHK_pos;
_MechVehWaypoint = _pilot addWaypoint [_pos, 0];
_MechVehWaypoint setWaypointType "MOVE";
_MechVehWaypoint setWaypointBehaviour "CARELESS";
_MechVehWaypoint setWaypointSpeed "FULL";
_mechVehWaypoint setwaypointCompletionRadius 300;
_mechVehWaypoint setWaypointStatements ["True", deleteVehicle this; deleteVehicle _veh;];
