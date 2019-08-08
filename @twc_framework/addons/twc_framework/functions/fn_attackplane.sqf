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

params ["_spawnMarker", "_patrolMarker", "_radius", ["_planeType", "CUP_O_Su25_RU_2"]];

if (isServer) then {
	_pos = switch (typeName _spawnMarker) do {
		case "STRING": {getMarkerPos _spawnMarker};
		case "ARRAY": {_spawnMarker};
		default {throw "Invalid Spawn Marker"};
	};
	_pos set [2, 200];
	_patrolPos = switch (typeName _patrolMarker) do {
		case "STRING": {getMarkerPos _patrolMarker};
		case "ARRAY": {_patrolMarker};
		default {throw "Invalid Patrol Marker"};
	};
	_side = switch (getNumber (configFile >> "CfgVehicles" >> _planetype >> "side")) do {
		case 0: {east};
		case 1: {west};
		case 2: {resistance};
		case 3: {civilian};
	};
	_planeArray = [_pos, _pos getDir _patrolPos, _planeType, _side] call BIS_fnc_spawnVehicle;
	_planeArray params ["_plane", "_crew", "_group"];
	_plane setVelocityModelSpace [0, 300, 0];

	_group setVariable ["twc_cacheDisabled", true];
	_plane setVariable ["twc_cacheDisabled", true];

	_wp = _group addWaypoint [_patrolPos, 0];
	_wp setWaypointType "SAD";
};