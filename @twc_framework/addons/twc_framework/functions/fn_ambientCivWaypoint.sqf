params ["_civ"];

_location = nearestLocation [getPos _civ, ""];
_movePos = [_location, [], {isOnRoad _this}] call BIS_fnc_randomPos;
_wp = (group _civ) addWaypoint [_movePos, 0];
_wp setWaypointType "MOVE";
_wp setWaypointStatements ["true", "[this] call twc_fnc_ambientCivWaypoint"];