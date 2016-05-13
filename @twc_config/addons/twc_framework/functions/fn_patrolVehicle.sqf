/*
 * 
 * Patrol Function
 *
 * Public: No
 */
if !(isServer) exitwith {};
params ["_Unit","_marker",["_radius",500],["_speed","LIMITED"],["_formation","COLUMN"]];


_allRoads = GetMarkerpos _marker nearRoads _radius;
_group = group _unit;
	
_FirstRoad = _allRoads select (floor(random(count _allroads)));
	
_wpFirst = _group addwaypoint [getPos _FirstRoad, 1];
_wpFirst setWaypointBehaviour "AWARE";
_wpFirst setWaypointSpeed _speed;
_wpFirst setWaypointFormation _formation;
_wpFirst setWaypointType "MOVE"; 
_wpFirst setWaypointCombatMode "RED";

for "_i" from 2 to 6 do{
	if (count _allRoads > 0) then {
		_Road = _allRoads select (floor(random(count _allroads)));
		_wp = _group addwaypoint [getPos _Road, _i];
		_wp setWaypointBehaviour "AWARE";
		_wp setWaypointSpeed _speed;
		_wp setWaypointFormation _formation;
		_wp setWaypointType "MOVE"; 
		_wp setWaypointCombatMode "RED";
	};
};
_wpLast = _group addwaypoint [getPos _FirstRoad, 7];
_wpLast setWaypointBehaviour "AWARE";
_wpLast setWaypointSpeed _speed;
_wpLast setWaypointFormation _formation;
_wpLast setWaypointType "Cycle"; 
_wpLast setWaypointCombatMode "RED";