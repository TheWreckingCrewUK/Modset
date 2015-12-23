//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Nagara
//delete itself
Nagarastart = createTrigger ["EmptyDetector", getMarkerPos "Nagara"];
Nagarastart setTriggerArea [500, 500, 0, false];
Nagarastart setTriggerActivation ["West", "PRESENT", False];
Nagarastart setTriggerStatements ["this",
	"['Nagara'] execVM 'server\sys_townSetup\func\fnc_spawnDefend.sqf';
	['Nagara', 7] execVM 'server\sys_townSetup\func\fnc_spawnCiv.sqf'; 
	['Nagara',[400,500],(configfile >> 'CfgGroups' >> 'Indep' >> 'LOP_AM' >> 'Infantry' >> 'LOP_AM_Patrol_section')] execVM 'server\sys_townSetup\func\fnc_spawnAI.sqf';
	['Nagara'] execVM 'server\sys_townSetup\func\fnc_townClear.sqf';
	deletevehicle _Nagarastart"
	,""
]
