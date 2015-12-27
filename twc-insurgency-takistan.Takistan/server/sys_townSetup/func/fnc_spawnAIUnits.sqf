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
/*
_marker = _this select 0;
_radius = _this select 1;
_group = (configfile >> "CfgGroups" >> "Indep" >> "LOP_AM" >> "Infantry" >> "LOP_AM_AT_section";)
_spawnedWaves = 0;
_amountWaves = 4 + (floor Insp_enemyMorale);
sleep 60;
*/
params ["_marker","_waves","_groupradius"];
_waves = _waves + floor InsP_enemyMorale;
/*
private ["_marker","_radius"];
params ["_marker",["_radius",[600,700]],["_Group",(configfile >> "CfgGroups" >> "Indep" >> "LOP_AM" >> "Infantry" >> "LOP_AM_Patrol_section")]];
*/

for "_i" from 1 to _waves do {
	_pos = [getMarkerPos _marker,_groupradius] call SHK_pos;
	_groupSpawned = [_pos, East, ["LOP_AM_Infantry_TL","LOP_AM_Infantry_AT","LOP_AM_Infantry_AT","LOP_AM_Infantry_Rifleman","LOP_AM_Infantry_AT"]] call BIS_fnc_spawnGroup;
    [_groupSpawned, (_marker), 40] call CBA_fnc_taskAttack;
	
};	
	
	