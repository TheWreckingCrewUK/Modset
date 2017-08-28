/*
* Author: [TWC] jayman
* Same as patrol, but forces units to stay on roads
*
* Arguments:
* 0: Unit <OBJECT>
* 1: POSITION <MARKER>
*
* Optional Parameters:
* 2: Radius <NUMBER>
* 3: Speed <STRING>
* 4: Formatin <STRING>
* 5: Behavior <STRING>
*
* Return Value:
* NOTHING
*
* Example:
* [unit1,"patrolMarker1",500,"LIMITED","COLUMN","AWARE"] call twc_fnc_patrolRoads;
*
* Public: no
*/
params ["_Unit","_marker",["_radius",500],["_speed","LIMITED"],["_formation","COLUMN"]];

if (isServer || !hasInterface) then {
	_allRoads = GetMarkerpos _marker nearRoads _radius;
	_group = group _unit;
	
	_FirstRoad = _allRoads select (floor(random(count _allroads)));
	
	_wpFirst = _group addwaypoint [getPos _FirstRoad, 1];
	_wpFirst setWaypointBehaviour "SAFE";
	_wpFirst setWaypointSpeed _speed;
	_wpFirst setWaypointFormation _formation;
	_wpFirst setWaypointType "MOVE"; 
	_wpFirst setWaypointCombatMode "RED";

	for "_i" from 2 to 6 do{
		if (count _allRoads > 0) then {
			_Road = _allRoads select (floor(random(count _allroads)));
			_wp = _group addwaypoint [getPos _Road, _i];
			_wp setWaypointBehaviour "SAFE";
			_wp setWaypointSpeed _speed;
			_wp setWaypointFormation _formation;
			_wp setWaypointType "MOVE"; 
			_wp setWaypointCombatMode "RED";
		};
	};
	_wpLast = _group addwaypoint [getPos _FirstRoad, 7];
	_wpLast setWaypointBehaviour "SAFE";
	_wpLast setWaypointSpeed _speed;
	_wpLast setWaypointFormation _formation;
	_wpLast setWaypointType "Cycle"; 
	_wpLast setWaypointCombatMode "RED";
};