/*
 * 
 * Patrol Function
 *
 * Public: No
 */
 if (isServer) then {
params ["_Unit","_marker",["_radius",500]];

[_Unit,getmarkerpos _marker,_radius] call CBA_fnc_taskDefend
};