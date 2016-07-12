//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for North
//delete itself
_Northstart = createTrigger ["EmptyDetector", getMarkerPos "North"];
_Northstart setTriggerArea [500, 500, 0, false];
_Northstart setTriggerActivation ["West", "PRESENT", False];
_Northstart setTriggerStatements ["this","['North',8,75,7,[400,500]] call twc_townSetup"
	,""
];

