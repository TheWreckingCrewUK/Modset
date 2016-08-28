/*
 * 
 * Patrol Function
 *
 * Public: No
 */
if (!isServer) exitwith {};
params ["_Unit","_markers",["_speed","LIMITED"],["_formation","COLUMN"],["_behaviour","AWARE"]];

_group = group _unit;

{
_wp =_group addWaypoint [getmarkerpos _x, 0];
_wp setWaypointType "move";
_wp setWaypointBehaviour _behaviour;
_wp setWaypointSpeed _speed;
_wp setWaypointFormation _formation;
}foreach _markers;	

_lastmarker = _markers select 0;
_wplast =_group addWaypoint [getmarkerpos _lastmarker , 0];
_wplast setWaypointType "Cycle";
_wplast setWaypointBehaviour _behaviour;
_wplast setWaypointSpeed _speed;
_wplast setWaypointFormation _formation;
