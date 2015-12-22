//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Bastam
//delete itself
_Bastamstart = createTrigger ["EmptyDetector", getMarkerPos "Bastam"];
_Bastamstart setTriggerArea [500, 500, 0, false];
_Bastamstart setTriggerActivation ["West", "PRESENT", False];
_Bastamstart setTriggerStatements ["this",
	"['Bastam'] execVM 'server\sys_townSetup\func\fnc_spawnDefend.sqf';
	['Bastam', 7] execVM 'server\sys_townSetup\func\fnc_spawnCiv.sqf'; 
	['Bastam',[300,400],(configfile >> 'CfgGroups' >> 'Indep' >> 'LOP_AM' >> 'Infantry' >> 'LOP_AM_Patrol_section')] execVM 'server\sys_townSetup\func\fnc_spawnAI.sqf';
	['Bastam'] execVM 'server\sys_townSetup\func\fnc_townClear.sqf';
	deletevehicle _Bastamstart"
	,""
];
