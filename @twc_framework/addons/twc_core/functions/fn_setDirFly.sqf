/*
 * EXAMPLE:
 * _plane = createVehicle ["O_Plane_CAS_02_F", position player, [], 0, "FLY"];
 * [_plane, -45] call TWC_fnc_setDirFLY;
 * createVehicleCrew _plane;
 */
params ["_veh", "_dir"];

_v = velocity _veh;
_veh setDir _dir;

_veh setVelocity [
	(_v select 1) * sin _dir - (_v select 0) * cos _dir,
	(_v select 0) * sin _dir + (_v select 1) * cos _dir,
	_v select 2
];