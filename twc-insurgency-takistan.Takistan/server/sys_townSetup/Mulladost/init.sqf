//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Mulladost
//delete itself
Mulladoststart = createTrigger ["EmptyDetector", getMarkerPos "Mulladost"];
Mulladoststart setTriggerArea [500, 500, 0, false];
Mulladoststart setTriggerActivation ["West", "PRESENT", False];
Mulladoststart setTriggerStatements ["this",
	"['Mulladost'] execVM 'server\sys_townSetup\func\fnc_spawnDefend.sqf';
	['Mulladost', 7] execVM 'server\sys_townSetup\func\fnc_spawnCiv.sqf'; 
	['Mulladost',[400,500],(configfile >> 'CfgGroups' >> 'Indep' >> 'LOP_AM' >> 'Infantry' >> 'LOP_AM_Patrol_section')] execVM 'server\sys_townSetup\func\fnc_spawnAI.sqf';
	['Mulladost'] execVM 'server\sys_townSetup\func\fnc_townClear.sqf';
	deletevehicle _Mulladoststart"
	,""
]
