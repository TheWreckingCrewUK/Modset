//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Garmarud
//delete itself
Garmarudstart = createTrigger ["EmptyDetector", getMarkerPos "Garmarud"];
Garmarudstart setTriggerArea [500, 500, 0, false];
Garmarudstart setTriggerActivation ["West", "PRESENT", False];
Garmarudstart setTriggerStatements ["this", "execVM 'server\sys_townSetup\Garmarud\preSpawnEnemy.sqf'; execVM 'server\sys_townSetup\Garmarud\spawnCiv.sqf'; execVM 'server\sys_townSetup\Garmarud\spawnAI.sqf'; deleteMarker 'Garmarudstart'",""
];
