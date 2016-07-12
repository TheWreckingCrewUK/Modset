//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for shamali
//delete itself
_shamalistart = createTrigger ["EmptyDetector", getMarkerPos "shamali"];
_shamalistart setTriggerArea [400, 400, 0, false];
_shamalistart setTriggerActivation ["West", "PRESENT", False];
_shamalistart setTriggerStatements ["this","['shamali',10,75,9,[500,600]] call twc_townSetup"
	,""
];

