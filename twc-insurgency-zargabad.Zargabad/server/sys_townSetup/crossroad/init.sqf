//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for  crossroad1
//delete itself
_crossroad1start = createTrigger ["EmptyDetector", getMarkerPos "crossroad1"];
_crossroad1start setTriggerArea [400, 400, 0, false];
_crossroad1start setTriggerActivation ["West", "PRESENT", False];
_crossroad1start setTriggerStatements ["this","['crossroad',5,75,4,[500,600]] call twc_townSetup"
	,""
];

