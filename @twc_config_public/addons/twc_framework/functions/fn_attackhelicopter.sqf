/*
* Author: [TWC] jayman
* Spawns a helicopter and has it patrol with cba task patrol.
*
* Arguments:
* 0: Spawn Marker <STRING>
* 1: Patrol Marker <STRING>
*
* Optional Parameters:
* 2: Patrol Radius <NUMBER>
* 3: Helicopter Type <STRING> <CLASS NAME>
*
* Return Value:
* NOTHING
*
* Example:
* ["heliSpawn1", "heliPatrol1", 800, "CUP_O_Mi24_V_RU"] call twc_fnc_attackHelicopter;
*
* Public: No
*/

Params ["_spawnmarker", "_patrolmarker", ["_radius", 400], ["_helitype", "CUP_O_Mi24_V_RU"]];
if (isServer) then {
	_crew1 = creategroup EAST;
	_helicopter = [getMarkerPos _spawnmarker, 180, _helitype,_crew1] call BIS_fnc_spawnVehicle;
	_crew1 setVariable ["twc_cacheDisabled",true];
	_helicopter setVariable ["twc_cacheDisabled",true];
	[_crew1, getmarkerpos _patrolmarker, _radius] call CBA_fnc_taskPatrol;
};