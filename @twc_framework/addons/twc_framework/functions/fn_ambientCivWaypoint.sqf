params ["_civ"];

_pos = _civ getVariable "TWC_AmbientCiv_Pos";
_radius = _civ getVariable "TWC_AmbientCiv_Radius";
_movePos = [[[_pos, _radius]], [], {isOnRoad _this}] call BIS_fnc_randomPos;
_wp = (group _civ) addWaypoint [_movePos, 0];
_wp setWaypointType "MOVE";
_wp setWaypointStatements ["true", "[this] call twc_fnc_ambientCivWaypoint"];