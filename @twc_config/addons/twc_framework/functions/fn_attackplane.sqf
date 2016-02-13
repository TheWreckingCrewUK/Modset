private ["_spawnmarker","_radius","_crew1","_plane"
];
if (isServer) then {
params ["_spawnmarker","_Patrolmarker","_radius",["_planetype","RHS_Su25SM_KH29_vvsc"]];

_crew1 = creategroup EAST;
 _plane = [getMarkerPos _spawnmarker, 180, _planetype,_crew1] call BIS_fnc_spawnVehicle;

[_crew1, getmarkerpos _Patrolmarker, _radius] call CBA_fnc_taskPatrol;
 
};