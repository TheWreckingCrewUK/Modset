//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Ravanay
//delete itself
Ravanaystart = createTrigger ["EmptyDetector", getMarkerPos "Ravanay"];
Ravanaystart setTriggerArea [500, 500, 0, false];
Ravanaystart setTriggerActivation ["West", "PRESENT", False];
Ravanaystart setTriggerStatements ["this",
	"['Ravanay'] execVM 'server\sys_townSetup\func\fnc_spawnDefend.sqf';
	['Ravanay', 7] execVM 'server\sys_townSetup\func\fnc_spawnCiv.sqf'; 
	['Ravanay',[400,500],(configfile >> 'CfgGroups' >> 'Indep' >> 'LOP_AM' >> 'Infantry' >> 'LOP_AM_Patrol_section')] execVM 'server\sys_townSetup\func\fnc_spawnAI.sqf';
	['Ravanay'] execVM 'server\sys_townSetup\func\fnc_townClear.sqf';
	deletevehicle _Ravanaystart"
	,""
]