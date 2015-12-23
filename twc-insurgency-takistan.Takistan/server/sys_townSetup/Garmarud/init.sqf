//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Garmarud
//delete itself
_Garmarudstart = createTrigger ["EmptyDetector", getMarkerPos "Garmarud"];
_Garmarudstart setTriggerArea [500, 500, 0, false];
_Garmarudstart setTriggerActivation ["West", "PRESENT", False];
_Garmarudstart setTriggerStatements ["this",
	"['Garmarud'] execVM 'server\sys_townSetup\func\fnc_spawnDefend.sqf';
	['Garmarud', 7] execVM 'server\sys_townSetup\func\fnc_spawnCiv.sqf'; 
	['Garmarud',[400,500],(configfile >> 'CfgGroups' >> 'Indep' >> 'LOP_AM' >> 'Infantry' >> 'LOP_AM_Patrol_section')] execVM 'server\sys_townSetup\func\fnc_spawnAI.sqf';
	['Garmarud'] execVM 'server\sys_townSetup\func\fnc_townClear.sqf';
	deletevehicle _Garmarudstart"
	,""
];
