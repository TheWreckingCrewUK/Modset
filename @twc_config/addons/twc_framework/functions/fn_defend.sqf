/*
 * 
 * Patrol Function
 *
 * Public: No
 */
Waituntil {time >= 30};
 if (isServer || !(isServer or hasinterface)) then {
params ["_Unit","_marker",["_radius",500]];

[_Unit,getmarkerpos _marker,_radius] call CBA_fnc_taskDefend
};