/*
 */

 params["_group","_moveto"];
 if (isServer) then {
[_group,getmarkerpos _moveto, 10, "MOVE", "AWARE", "YELLOW", "FULL", "LINE"] call CBA_fnc_addwaypoint;
};