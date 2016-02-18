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
_groupSpawn = ["LOP_AM_Infantr_TL","LOP_AM_Infantry_Rifleman","LOP_AM_Infantry_Rifleman","LOP_AM_Infantry_AT"];

{
	_groupSide = createGroup opfor;
	_placedSoldier = _groupSide createUnit [_x, (getMarkerPos _spawnMarker), [], _areaRadius, "NONE"];
	[_placedSoldier, (getMarkerPos _spawnMarker), 30] call CBA_fnc_taskDefend;
} forEach _groupSpawn;