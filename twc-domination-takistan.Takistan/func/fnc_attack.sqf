
private ["_group","_position","_groupwp","_deletemove"];
_group = _this select 0;
_position = _this select 1;

_groupwp = _group call CBA_fnc_getGroup;

_attackLoc = [_groupwp, getMarkerPos _position, 50] call CBA_fnc_taskAttack;



/*
if (_count < 4) exitWith {_waypoint};
_waypoint setWaypointType (_this select 3);
if (_count < 5) exitWith {_waypoint};
_waypoint setWaypointBehaviour (_this select 4);
if (_count < 6) exitWith {_waypoint};
_waypoint setWaypointCombatMode (_this select 5);
if (_count < 7) exitWith {_waypoint};
_waypoint setWaypointSpeed (_this select 6);
if (_count < 8) exitWith {_waypoint};
_waypoint setWaypointFormation (_this select 7);
if (_count < 9) exitWith {_waypoint};
_waypoint setWaypointStatements ["TRUE", (_this select 8)];
if (_count < 10) exitWith {_waypoint};
_waypoint setWaypointTimeout (_this select 9);
if (_count < 11) exitWith {_waypoint};
_waypoint setWaypointHousePosition (_this select 10);
if (_count < 12) exitWith {_waypoint};
_waypoint setWaypointCompletionRadius (_this select 11);
*/
// 

