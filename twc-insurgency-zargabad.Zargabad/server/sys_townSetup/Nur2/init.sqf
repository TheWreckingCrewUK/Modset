//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Nur2
//delete itself
_Nur2start = createTrigger ["EmptyDetector", getMarkerPos "Nur2"];
_Nur2start setTriggerArea [400, 400, 0, false];
_Nur2start setTriggerActivation ["West", "PRESENT", False];
_Nur2start setTriggerStatements ["this","['Nur2',4,50,3,[400,500]] call twc_townSetup"
	,""
];

