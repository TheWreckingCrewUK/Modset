/*
* Unused because it is not possible to call other functions from this. Or it isn't any easier than just having each town have its own INIT
* Details:
* 
* Creates a Trigger which is activated by blufor this then Spawns 3 functions to spawn civs/AI
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
* 2 - Array      inner and outer radius   Default: [600,700]
*          0 - Interger     inner raduis
*          1 - Interger     outer radius
*
* 3 - expression  Group that you would like to spawn   Default:(configfile >> "CfgGroups" >> "Indep" >> "LOP_AM" >> "Infantry" >> "LOP_AM_Patrol_section")
*
* Example:
*
*["bastam",7,[600,700],(configfile >> "CfgGroups" >> "Indep" >> "LOP_AM" >> "Infantry" >> "LOP_AM_Patrol_section")] spawn twc_fnc_SpawnTownSetup
*
* Author: [TWC] Fakematty / [TWC] Jayman 
*/
/*
_marker = _this select 0;
_civ = _this select 1;
_radius = _this select 2;
_group = _this select 3;
*/
/*
Private["_marker","_civ","_radius","_group"];
params ["_marker",["_civ",7],["_radius",[600,700]],["_group",(configfile >> "CfgGroups" >> "Indep" >> "LOP_AM" >> "Infantry" >> "LOP_AM_Patrol_section")]];



	_Trigger = createTrigger ["EmptyDetector", getMarkerPos _marker];
	_Trigger setTriggerArea [500, 500, 0, false];
	_Trigger setTriggerActivation ["West", "PRESENT", False];
	_Trigger setTriggerStatements ["this",	
									  "[_marker] execVM 'server\sys_townSetup\func\fnc_spawnDefend.sqf';
									  [_marker,_civ] execVM 'server\sys_townSetup\func\fnc_spawnCiv.sqf';
									  [_marker,_radius,_group] execVM 'server\sys_townSetup\func\fnc_spawnAI.sqf';
									  [_marker,_radius] execVM 'server\sys_townSetup\func\fnc_townClear.sqf';
									  deleteVehicle '_Trigger'",
									  ""
									  ];
