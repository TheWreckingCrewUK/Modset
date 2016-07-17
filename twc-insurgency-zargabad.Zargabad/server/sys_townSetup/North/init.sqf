//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for North
//delete itself
_Northstart = createTrigger ["EmptyDetector", getMarkerPos "North"];
_Northstart setTriggerArea [300, 300, 0, false];
_Northstart setTriggerActivation ["West", "PRESENT", False];
_Northstart setTriggerStatements ["this","['North',4,50,2,[400,500]] call twc_townSetup"
	,""
];

