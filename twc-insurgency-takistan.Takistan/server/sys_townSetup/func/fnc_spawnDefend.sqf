/*
* Details:
* 
* Creates a enemy squad to defend around a given marker
*
* Required parameters:
*
* 0 - String     Marker name
*
* Example:
*
*["bastam"] spawn twc_fnc_SpawnDefend
*
* Author: [TWC] Fakematty / [TWC] Jayman
*/

//_marker = _this select 0;

/*
Private ["_marker"];
params ["_marker"];
*/

params["_marker"];
_random = random 100;
if (_random < 50) then {
	if (isServer) then {
		_groupSpawn = [getMarkerPos _marker, East, ["LOP_AM_Infantr_TL","LOP_AM_Infantry_Rifleman","LOP_AM_Infantry_AT","LOP_AM_Infantry_Rifleman","LOP_AM_Infantry_Rifleman","LOP_AM_Infantry_AT","LOP_AM_Infantry_AT"],[],[],[],[],[],180] call BIS_fnc_spawnGroup;
		[_groupSpawn] call CBA_fnc_TaskDefend;
	};
};
