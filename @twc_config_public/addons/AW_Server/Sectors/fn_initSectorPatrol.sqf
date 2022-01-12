/*
	File: fn_initSectorPatrol.sqf
	Author: Dom
	Description: Sets up patrolling AI
*/
params [
	["_groups",[],[[]]],
	["_position",[],[[]]],
	["_radius",150,[0]]
];
if (_groups isEqualTo []) exitWith {};

{
	if !(isNull _x) then {
		private _leader = leader _x;
		if (AW_isLambsEnabled && {isNull objectParent _leader && {side _x isNotEqualTo civilian}}) then {
			if (_forEachIndex in [1,3,6]) then {
				if (([_position,_radius,false] call lambs_main_fnc_findBuildings) isEqualTo []) then {
					[_x,(_position getPos [random 25,random 360]),_radius,[],true,false,-1] remoteExecCall ["lambs_wp_fnc_taskCamp",_leader];
				} else {
					[_x,_position,_radius,[],false,false,-2,false] remoteExecCall ["lambs_wp_fnc_taskGarrison",_leader];
				};
			} else {
				[_x,_position,_radius] remoteExecCall ["lambs_wp_fnc_taskPatrol",_leader];
			};
		} else {
			private _waypoints = [];
			while {count _waypoints < 7} do { //produce 7 waypoints for units to randomly walk to
				private _newPos = _position getPos [random _radius,random 360];
				if !(surfaceIsWater _newPos) then {
					_waypoints pushBack _newPos;
				};
			};
			[_waypoints,true] call CBA_fnc_shuffle;

			private _waypoint = _x addWaypoint [_waypoints select 0,10];
			_waypoint setWaypointType "MOVE";
			_waypoint setWaypointBehaviour "SAFE";
			_waypoint setWaypointCombatMode "YELLOW";
			_waypoint setWaypointSpeed "LIMITED";
			_waypoint setWaypointCompletionRadius 10;

			for "_i" from 1 to 5 do {
				_waypoint = _x addWaypoint [_waypoints select _i,10];
				_waypoint setWaypointType "MOVE";
				_waypoint setWaypointBehaviour "SAFE";
				_waypoint setWaypointCombatMode "YELLOW";
				_waypoint setWaypointSpeed "LIMITED";
			};

			_waypoint = _x addWaypoint [_waypoints select 6,10];
			_waypoint setWaypointType "CYCLE";
		};
	};
} forEach _groups;