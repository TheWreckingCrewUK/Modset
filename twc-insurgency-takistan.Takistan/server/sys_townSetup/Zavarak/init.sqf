//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Zavarak
//delete itself
Zavarakstart = createTrigger ["EmptyDetector", getMarkerPos "Zavarak"];
Zavarakstart setTriggerArea [500, 500, 0, false];
Zavarakstart setTriggerActivation ["West", "PRESENT", False];
Zavarakstart setTriggerStatements ["this", "execVM 'server\sys_townSetup\Zavarak\preSpawnEnemy.sqf'; execVM 'server\sys_townSetup\Zavarak\spawnCiv.sqf'; execVM 'server\sys_townSetup\Zavarak\spawnAI.sqf'; deleteMarker 'Zavarakstart'",""
];
