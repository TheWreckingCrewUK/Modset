//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Ravanay
//delete itself
Ravanaystart = createTrigger ["EmptyDetector", getMarkerPos "Ravanay"];
Ravanaystart setTriggerArea [500, 500, 0, false];
Ravanaystart setTriggerActivation ["West", "PRESENT", False];
Ravanaystart setTriggerStatements ["this", "execVM 'server\sys_townSetup\Ravanay\preSpawnEnemy.sqf'; execVM 'server\sys_townSetup\Ravanay\spawnCiv.sqf'; execVM 'server\sys_townSetup\Ravanay\spawnAI.sqf'; deleteMarker 'Ravanaystart'",""
];
