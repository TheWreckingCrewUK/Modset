//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Feruz_Abad
//delete itself
Feruz_Abadstart = createTrigger ["EmptyDetector", getMarkerPos "Feruz_Abad"];
Feruz_Abadstart setTriggerArea [500, 500, 0, false];
Feruz_Abadstart setTriggerActivation ["West", "PRESENT", False];
Feruz_Abadstart setTriggerStatements ["this",
	"['Feruz_Abad'] execVM 'server\sys_townSetup\func\fnc_spawnDefend.sqf';
	['Feruz_Abad', 7] execVM 'server\sys_townSetup\func\fnc_spawnCiv.sqf'; 
	['Feruz_Abad',[400,500],(configfile >> 'CfgGroups' >> 'Indep' >> 'LOP_AM' >> 'Infantry' >> 'LOP_AM_Patrol_section')] execVM 'server\sys_townSetup\func\fnc_spawnAI.sqf';
	['Feruz_Abad'] execVM 'server\sys_townSetup\func\fnc_townClear.sqf';
	deletevehicle _Feruz_Abadstart"
	,""
];
