/*
* Author: [TWC] jayman
* Spawns a plane and has it patrol with cba task patrol.
*
* Arguments:
* 0: Spawn Marker <STRING>
* 1: Patrol Marker <STRING>
* 2: Patrol Radius <NUMBER>
*
* Optional Parameters:
* 3: Plane Type <STRING> <CLASS NAME>
*
* Return Value:
* NOTHING
*
* Example:
* ["planeSpawn1", "planePatrol1", 800, "CUP_O_Su25_RU_2"] call twc_fnc_attackHelicopter;
*
* Public: No
*/
params ["_spawnmarker", "_Patrolmarker", "_radius", ["_planetype", "CUP_O_Su25_RU_2"]];
if (isServer) then {
	_crew1 = creategroup EAST;
	_plane = [getMarkerPos _spawnmarker, 180, _planetype,_crew1] call BIS_fnc_spawnVehicle;
	_crew1 setVariable ["twc_cacheDisabled",true];
	(_plane select 0) setVariable ["twc_cacheDisabled",true];
	_wp = _crew1 addWaypoint [getMarkerPos _Patrolmarker,0];
	[_crew1,1] setWaypointType "SAD";
};