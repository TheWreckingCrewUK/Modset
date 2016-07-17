//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Nur1
//delete itself
_Nur1start = createTrigger ["EmptyDetector", getMarkerPos "Nur1"];
_Nur1start setTriggerArea [300, 300, 0, false];
_Nur1start setTriggerActivation ["West", "PRESENT", False];
_Nur1start setTriggerStatements ["this","['Nur1',5,50,3,[400,500]] call twc_townSetup"
	,""
];
