/*
Written by WiredTiger 28/04/2015
////////////////////////////////
Function to spawn a small group of soldiers in the area when blufor gets near
////////////////////////////////
Marker name
Radius to spawn
*/

//if (!isDedicated) exitWith {};

_spawnMarker = _this select 0;
_areaRadius = _this select 1;
_groupSpawn = ["I_mas_med_Rebel8a_F","I_mas_med_Rebel5_F","I_mas_med_Rebel6_F","I_mas_med_Rebel4_F"];

{
	_groupSide = createGroup opfor;
	_placedSoldier = _groupSide createUnit [_x, (getMarkerPos _spawnMarker), [], _areaRadius, "NONE"];
	[_placedSoldier, (getMarkerPos _spawnMarker), 30] call CBA_fnc_taskDefend;
} forEach _groupSpawn;