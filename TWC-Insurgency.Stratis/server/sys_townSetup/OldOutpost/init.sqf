//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for OldOutpost
//delete itself
_OldOutpoststart = createTrigger ["EmptyDetector", getMarkerPos "OldOutpost"];
_OldOutpoststart setTriggerArea [300, 300, 0, false];
_OldOutpoststart setTriggerActivation ["West", "PRESENT", False];
_OldOutpoststart setTriggerStatements ["this","['OldOutpost',4,100,1,[400,500]] call twc_townSetup"
	,""
];

