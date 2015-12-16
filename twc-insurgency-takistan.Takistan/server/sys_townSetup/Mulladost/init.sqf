//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Mulladost
//delete itself
nurstart = createTrigger ["EmptyDetector", getMarkerPos "Mulladost"];
nurstart setTriggerArea [500, 500, 0, false];
nurstart setTriggerActivation ["West", "PRESENT", False];
nurstart setTriggerStatements ["this", "execVM 'server\sys_townSetup\Mulladost\preSpawnEnemy.sqf'; execVM 'server\sys_townSetup\Mulladost\spawnCiv.sqf'; execVM 'server\sys_townSetup\Mulladost\spawnAI.sqf'; deleteMarker 'nurstart'",""
];
