if((getMarkerColor "mainHQ") == "ColorWEST")exitWith{ hint "Enemy Base Captured"};

_marker = capturedArray call BIS_fnc_selectRandom;

_startingPoint = "mainHQ";

_endMarker = getMarkerPos _marker;


_Squad = (configfile >> "CfgGroups" >> "East" >> "CUP_O_SLA" >> "Infantry" >> "CUP_O_SLA_InfantrySectionMG");
_Vehicle = "CUP_O_C130J_Cargo_TKA";

_veh = _Vehicle createVehicle getMarkerPos _startingPoint;

_MechInf = [getMarkerPos _startingPoint, East,_Squad] call BIS_fnc_spawnGroup;

{
_x addBackpack "B_Parachute"
}forEach Units _MechInf;
_driver = leader _MechInf;
_driver moveinDriver _veh;

_MechVehWaypoint = _MechInf addWaypoint [_endMarker, 0];
_MechVehWaypoint setWaypointType "MOVE";
_MechVehWaypoint setWaypointBehaviour "CARELESS";
_MechVehWaypoint setWaypointSpeed "FULL";
_mechVehWaypoint setwaypointCompletionRadius 300;
_mechVehWaypoint setWaypointStatements ["True", format["{moveOut _x}foreach thisList; ['%1'] call twc_siteContestedCounter", _marker]];

[_MechInf, _endMarker,20] call CBA_fnc_taskAttack;