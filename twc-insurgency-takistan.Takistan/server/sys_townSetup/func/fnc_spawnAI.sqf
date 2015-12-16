/*
* Details:
* 
* Creates a group of insurgents that spawn bewteen two radius then move to attack given marker.
*
* Required parameters:
*
* 0 - String     Marker name
*
* Addtional parameters:
*
* 1 - Array      inner and outer radius   Default: [600,700]
*          0 - Interger     inner raduis
*          1 - Interger     outer radius
*
* 2 - expression  Group that you would like to spawn   Default:(configfile >> "CfgGroups" >> "Indep" >> "LOP_AM" >> "Infantry" >> "LOP_AM_Patrol_section")
*
* Example:
*
*["bastam",[600,700],(configfile >> "CfgGroups" >> "Indep" >> "LOP_AM" >> "Infantry" >> "LOP_AM_Patrol_section")] spawn twc_fnc_SpawnAI
*
* Author: [TWC] Fakematty / [TWC] Jayman
*/


private ["_marker","_radius"];
params ["_marker",["_radius",[600,700]],["_Group",(configfile >> "CfgGroups" >> "Indep" >> "LOP_AM" >> "Infantry" >> "LOP_AM_Patrol_section")]];

if (isServer) then {
	_pos = [getMarkerPos _marker,_radius] call SHK_pos;
	_groupSpawn = [_pos, East, _Group] call BIS_fnc_spawnGroup;
    [_groupSpawn, (_marker), 40] call CBA_fnc_taskAttack;
};