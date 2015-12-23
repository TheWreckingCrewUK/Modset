//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Falar
//delete itself
_Falarstart = createTrigger ["EmptyDetector", getMarkerPos "Falar"];
_Falarstart setTriggerArea [500, 500, 0, false];
_Falarstart setTriggerActivation ["West", "PRESENT", False];
_Falarstart setTriggerStatements ["this",
	"['Falar'] execVM 'server\sys_townSetup\func\fnc_spawnDefend.sqf';
	['Falar', 7] execVM 'server\sys_townSetup\func\fnc_spawnCiv.sqf'; 
	['Falar',[400,500],(configfile >> 'CfgGroups' >> 'Indep' >> 'LOP_AM' >> 'Infantry' >> 'LOP_AM_Patrol_section')] execVM 'server\sys_townSetup\func\fnc_spawnAI.sqf';
	['Falar'] execVM 'server\sys_townSetup\func\fnc_townClear.sqf';
	deletevehicle _Falarstart"
	,""
];
