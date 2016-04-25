if((getMarkerColor "airbase1") != "ColorEAST")exitWith{ hint "Enemy Base Captured"};

_marker = capturedArray call BIS_fnc_selectRandom;

_startingPoint = "hostileAirSpawn";

if (getMarkerColor "commanderBase" == "colorWest")then{_marker = "commanderBase"};

_endMarker = getMarkerPos _marker;

_veh = transportPlane createVehicle getMarkerPos _startingPoint;

_MechInf = [getMarkerPos _startingPoint, EAST, squad] call BIS_fnc_spawnGroup;

{
_x addBackpack "B_Parachute";
_x moveInCargo _veh;
}forEach Units _MechInf;
_driver = leader _MechInf;
moveOut _driver;
_driver moveinDriver _veh;

_dir = [getMarkerPos _marker, getMarkerPos _startingPoint] call BIS_fnc_dirTo;
_pos = [getmarkerpos _marker,[400,500],_dir,0,[1,50]] call SHK_pos;

_MechVehWaypoint = _MechInf addWaypoint [_pos, 0];
_MechVehWaypoint setWaypointType "MOVE";
_MechVehWaypoint setWaypointBehaviour "CARELESS";
_MechVehWaypoint setWaypointSpeed "FULL";
_mechVehWaypoint setwaypointCompletionRadius 300;
_mechVehWaypoint setWaypointStatements ["True", format["{_x allowDamage false; moveOut _x; [_x] spawn {sleep 5; (_this select 0) allowDamage True};}foreach thisList; ['%1'] call twc_siteContestedCounter; deleteVehicle _veh", _marker]];

[_MechInf, _endMarker,20] call CBA_fnc_taskAttack;