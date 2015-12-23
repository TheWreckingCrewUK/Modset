//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Nur
//delete itself
Nurstart = createTrigger ["EmptyDetector", getMarkerPos "Nur"];
Nurstart setTriggerArea [500, 500, 0, false];
Nurstart setTriggerActivation ["West", "PRESENT", False];
Nurstart setTriggerStatements ["this",
	"['Nur'] execVM 'server\sys_townSetup\func\fnc_spawnDefend.sqf';
	['Nur', 7] execVM 'server\sys_townSetup\func\fnc_spawnCiv.sqf'; 
	['Nur',[400,500],(configfile >> 'CfgGroups' >> 'Indep' >> 'LOP_AM' >> 'Infantry' >> 'LOP_AM_Patrol_section')] execVM 'server\sys_townSetup\func\fnc_spawnAI.sqf';
	['Nur'] execVM 'server\sys_townSetup\func\fnc_townClear.sqf';
	deletevehicle _Nurstart"
	,""
]
