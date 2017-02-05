/*
 * 
 * Patrol Function
 *
 * Public: No
 */
 if (isServer) then {
params ["_Unit","_marker",["_radius",500],["_speed","LIMITED"],["_formation","COLUMN"],["_behaviour","AWARE"]];

[_Unit,getmarkerpos _marker, _radius, 7, "MOVE", _behaviour, "YELLOW", _speed, _formation] call CBA_fnc_taskPatrol;
};
