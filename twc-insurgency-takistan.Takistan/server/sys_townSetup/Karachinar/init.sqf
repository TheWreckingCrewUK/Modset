//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Karachinar
//delete itself
Karachinarstart = createTrigger ["EmptyDetector", getMarkerPos "Karachinar"];
Karachinarstart setTriggerArea [500, 500, 0, false];
Karachinarstart setTriggerActivation ["West", "PRESENT", False];
Karachinarstart setTriggerStatements ["this", "execVM 'server\sys_townSetup\Karachinar\preSpawnEnemy.sqf'; execVM 'server\sys_townSetup\Karachinar\spawnCiv.sqf'; execVM 'server\sys_townSetup\Karachinar\spawnAI.sqf'; deleteMarker 'Karachinarstart'",""
];
