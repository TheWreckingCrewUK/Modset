//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Feruz_Abad
//delete itself
Feruz_Abadstart = createTrigger ["EmptyDetector", getMarkerPos "Feruz_Abad"];
Feruz_Abadstart setTriggerArea [500, 500, 0, false];
Feruz_Abadstart setTriggerActivation ["West", "PRESENT", False];
Feruz_Abadstart setTriggerStatements ["this", "execVM 'server\sys_townSetup\Feruz_Abad\preSpawnEnemy.sqf'; execVM 'server\sys_townSetup\Feruz_Abad\spawnCiv.sqf'; execVM 'server\sys_townSetup\Feruz_Abad\spawnAI.sqf'; deleteMarker 'Feruz_Abadstart'",""
];
