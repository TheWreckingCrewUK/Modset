//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Karachinar
//delete itself
Karachinarstart = createTrigger ["EmptyDetector", getMarkerPos "Karachinar"];
Karachinarstart setTriggerArea [500, 500, 0, false];
Karachinarstart setTriggerActivation ["West", "PRESENT", False];
Karachinarstart setTriggerStatements ["this",
	"['Karachinar'] execVM 'server\sys_townSetup\func\fnc_spawnDefend.sqf';
	['Karachinar', 7] execVM 'server\sys_townSetup\func\fnc_spawnCiv.sqf'; 
	['Karachinar',[400,500],(configfile >> 'CfgGroups' >> 'Indep' >> 'LOP_AM' >> 'Infantry' >> 'LOP_AM_Patrol_section')] execVM 'server\sys_townSetup\func\fnc_spawnAI.sqf';
	['Karachinar'] execVM 'server\sys_townSetup\func\fnc_townClear.sqf';
	deletevehicle _Karachinarstart"
	,""
];
