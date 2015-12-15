private ["_crew1", "_helicopter"];

params ["_spawnmarker", "_patrolmarker", "_radius"];

_crew1 = createGroup EAST;
_helicopter = [getMarkerPos _spawnmarker, 180, "RHS_Mi24V_AT_vdv",_crew1] call BIS_fnc_spawnVehicle;

[_crew1, getMarkerPos _patrolmarker, _radius] call CBA_fnc_taskPatrol;

hint "120";
