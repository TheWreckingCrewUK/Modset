/*
* Details:
* 
* Creates a Civillian that will tak position in a house and will not flee.
*
* Required parameters:
*
* 0 - String     Marker name
*
* Addtional parameters:
*
* 1 - Interger   Amount of civillians   Default: 7
* 
*
* Example:
*
*["bastam",7] spawn twc_fnc_SpawnCiv
*
* Author: [TWC] Fakematty / [TWC] Jayman
*/

Private ["_marker","_civnum"];
params ["_marker",["_civnum",7]];

for "_i" from 1 to _civnum do {
	if (isServer) then {
		_groupSpawn = [getMarkerPos _marker, Civilian, ["LOP_Tak_Civ_Man_01"],[],[],[],[],[],180] call BIS_fnc_spawnGroup;
		[_groupSpawn] call CBA_fnc_TaskDefend;
		_groupSpawn allowfleeing 0;
	};
};