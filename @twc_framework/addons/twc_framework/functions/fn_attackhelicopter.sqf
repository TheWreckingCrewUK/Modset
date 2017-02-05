private ["_spawnmarker","_radius","_crew1","_helicopter","_patrolmarker"
];
if (isServer) then {
Params ["_spawnmarker","_patrolmarker",["_radius",400],["_helitype","RHS_Mi24P_CAS_vdv"]];

_crew1 = creategroup EAST;
 _helicopter = [getMarkerPos _spawnmarker, 180, _helitype,_crew1] call BIS_fnc_spawnVehicle;

[_crew1, getmarkerpos _patrolmarker, _radius] call CBA_fnc_taskPatrol;
 };
