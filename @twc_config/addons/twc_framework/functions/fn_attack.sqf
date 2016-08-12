/*
 */

  if !(isServer)exitWith{};
 params["_group","_moveto","_Cached"];
 
[_group,getmarkerpos _moveto, 10, "MOVE", "AWARE", "YELLOW", "FULL", "LINE"] call CBA_fnc_addwaypoint;
