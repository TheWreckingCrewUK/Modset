//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for  crossroad2
//delete itself
_crossroad2start = createTrigger ["EmptyDetector", getMarkerPos "crossroad2"];
_crossroad2start setTriggerArea [400, 400, 0, false];
_crossroad2start setTriggerActivation ["West", "PRESENT", False];
_crossroad2start setTriggerStatements ["this","['crossroad2',6,100,5,[400,500]] call twc_townSetup"
	,""
];

