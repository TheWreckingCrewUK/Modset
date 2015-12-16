/*
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
* Author: [TWC] Fakematty / [TWC] Jayman <-- him sort of
*/
Private["_marker","_civ","_radius","_group"];
params ["_marker",["_civ",7],["_radius",[600,700]],["_group",(configfile >> "CfgGroups" >> "Indep" >> "LOP_AM" >> "Infantry" >> "LOP_AM_Patrol_section")]];


	_Trigger = createTrigger ["EmptyDetector", getMarkerPos _x];
	_Trigger setTriggerArea [500, 500, 0, false];
	_Trigger setTriggerActivation ["West", "PRESENT", False];
	_Trigger setTriggerStatements ["this",	
									  "_defend = [_marker] spawn twc_fnc_SpawnDefend; _civ = [_marker,_civ] spawn twc_fnc_SpawnCiv; _Attack = [_marker,_radius,_group] spawn twc_fnc_SpawnAttack;_Townclear =[_marker,_radius] spawn twc_fnc_SpawnTownClear; deleteVehicle '_Trigger'",
									  ""
									  ];
