private ["_spawnmarker","_radius","_crew1","_helicopter","_patrolmarker"
];

_spawnmarker = _this select 0;
_patrolmarker = _this select 1;
_radius = _this select 2;


_crew1 = creategroup EAST;
 _helicopter = [getMarkerPos _spawnmarker, 180, "RHS_Mi24V_AT_vdv",_crew1] call BIS_fnc_spawnVehicle;

[_crew1, getmarkerpos _patrolmarker, _radius] call CBA_fnc_taskPatrol;
 
hint "120";