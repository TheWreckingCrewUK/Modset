//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Nagara
//delete itself
nurstart = createTrigger ["EmptyDetector", getMarkerPos "Nagara"];
nurstart setTriggerArea [500, 500, 0, false];
nurstart setTriggerActivation ["West", "PRESENT", False];
nurstart setTriggerStatements ["this", "execVM 'server\sys_townSetup\Nagara\preSpawnEnemy.sqf'; execVM 'server\sys_townSetup\Nagara\spawnCiv.sqf'; execVM 'server\sys_townSetup\Nagara\spawnAI.sqf'; deleteMarker 'nurstart'",""
];
