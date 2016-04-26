/*
*
*
*/

if((getMarkerColor "hq1") != "ColorEAST")exitWith{hint "enemy base not colorEAST"};

_marker = capturedArray call BIS_fnc_selectRandom;

if (getMarkerColor "commanderBase" == "colorWest")then{_marker = "commanderBase"};

format["An enemy mechanized unit has left their HQ heading for %1", _marker] remoteExec ["hint"]; 

_startingPoint = "hq1";

_pos = [getmarkerpos _startingPoint,[300,400],random 360,0,[1],[300, "Air"]] call SHK_pos;
_endMarker = getMarkerPos _marker;

_veh = bmpString createVehicle _pos;

_vehicleGroup = [[0,0,0], EAST,mechCrew] call BIS_fnc_spawnGroup;
_vehicleGrouparray = units _vehicleGroup;

(_VehicleGroupArray select 0) moveindriver _veh;
(_VehicleGroupArray select 1) moveingunner _veh;
(_VehicleGroupArray select 2) moveincommander _veh;


_MechInf = [[0,0,0], EAST,squadMG] call BIS_fnc_spawnGroup;
{
	_x moveincargo _veh;
	_x assignAsCargo _veh;
} foreach units _MechInf;
_dir = [getMarkerPos _marker, getMarkerPos _startingPoint] call BIS_fnc_dirTo;
_pos = [_endMarker,[100,200],_dir,0,[1,50]] call SHK_pos;

_MechVehWaypoint = _VehicleGroup addWaypoint [_pos, 0];
_MechVehWaypoint setWaypointType "TR UNLOAD";
_MechVehWaypoint setWaypointBehaviour "CARELESS";
_MechVehWaypoint setWaypointSpeed "FULL";
_MechVehWaypoint setWaypointStatements ["True", format["['%1'] call twc_siteContestedCounter", _marker]];


{
	_x action ["GetOut", _veh];
}foreach units _MechInf;

[_MechInf, _endMarker,20] call CBA_fnc_taskAttack;

_MechVehWaypoint = _VehicleGroup addWaypoint [_endMarker, 0];
_MechVehWaypoint setWaypointType "MOVE";
_MechVehWaypoint setWaypointBehaviour "COMBAT";
_MechVehWaypoint setWaypointSpeed "FULL";