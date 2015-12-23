//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Zavarak
//delete itself
Zavarakstart = createTrigger ["EmptyDetector", getMarkerPos "Zavarak"];
Zavarakstart setTriggerArea [500, 500, 0, false];
Zavarakstart setTriggerActivation ["West", "PRESENT", False];
Zavarakstart setTriggerStatements ["this",
	"['Zavarak'] execVM 'server\sys_townSetup\func\fnc_spawnDefend.sqf';
	['Zavarak', 7] execVM 'server\sys_townSetup\func\fnc_spawnCiv.sqf'; 
	['Zavarak',[400,500],(configfile >> 'CfgGroups' >> 'Indep' >> 'LOP_AM' >> 'Infantry' >> 'LOP_AM_Patrol_section')] execVM 'server\sys_townSetup\func\fnc_spawnAI.sqf';
	['Zavarak'] execVM 'server\sys_townSetup\func\fnc_townClear.sqf';
	deletevehicle _Zavarakstart"
	,""
]
