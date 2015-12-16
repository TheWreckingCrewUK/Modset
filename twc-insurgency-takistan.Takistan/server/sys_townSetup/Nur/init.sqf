//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Nur
//delete itself
nurstart = createTrigger ["EmptyDetector", getMarkerPos "Nur"];
nurstart setTriggerArea [500, 500, 0, false];
nurstart setTriggerActivation ["West", "PRESENT", False];
nurstart setTriggerStatements ["this", "execVM 'server\sys_townSetup\Nur\preSpawnEnemy.sqf'; execVM 'server\sys_townSetup\Nur\spawnCiv.sqf'; execVM 'server\sys_townSetup\Nur\spawnAI.sqf'; deleteMarker 'nurstart'",""
];
