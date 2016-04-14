//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Kallista
//delete itself
_Kallistastart = createTrigger ["EmptyDetector", getMarkerPos "Kallista"];
_Kallistastart setTriggerArea [500, 500, 0, false];
_Kallistastart setTriggerActivation ["West", "PRESENT", False];
_Kallistastart setTriggerStatements ["this","['Kallista',4,100,3,[400,500]] call twc_townSetup"
	,""
];

