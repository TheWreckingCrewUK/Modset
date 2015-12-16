//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Falar
//delete itself
Falarstart = createTrigger ["EmptyDetector", getMarkerPos "Falar"];
Falarstart setTriggerArea [500, 500, 0, false];
Falarstart setTriggerActivation ["West", "PRESENT", False];
Falarstart setTriggerStatements ["this", "execVM 'server\sys_townSetup\Falar\preSpawnEnemy.sqf'; execVM 'server\sys_townSetup\Falar\spawnCiv.sqf'; execVM 'server\sys_townSetup\Falar\spawnAI.sqf'; deleteMarker 'Falarstart'",""
];
