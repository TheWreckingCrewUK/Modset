private ["_spawnmarker","_radius","_crew1","_plane"
];

_spawnmarker = _this select 0;
_radius = _this select 1;


_crew1 = creategroup EAST;
 _plane = [getMarkerPos _spawnmarker, 180, "RHS_Su25SM_KH29_vvsc",_crew1] call BIS_fnc_spawnVehicle;

[_crew1, getmarkerpos _spawnmarker, _radius] call CBA_fnc_taskPatrol;
 
