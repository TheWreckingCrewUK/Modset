/*
*
*
*/

params["_target","_spawn"];

_jet = ["CUP_O_Su34_AGM_SLA"];
_spawn = _spawn vectorAdd [0,0,1000];
_dir = [_spawn, _target] call BIS_fnc_dirTo;
_group = [_spawn, Independent, _jet,[],[],[],[],[],_dir] call Bis_fnc_spawnGroup;

_wp = _group addWaypoint [_target, 0];
_wp setWaypointType "Destroy";
_wp setWaypointBehaviour "COMBAT";
_wp setWaypointSpeed "Normal";