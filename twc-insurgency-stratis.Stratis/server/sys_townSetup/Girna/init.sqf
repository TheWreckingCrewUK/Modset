//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Girna
//delete itself
_Girnastart = createTrigger ["EmptyDetector", getMarkerPos "Girna"];
_Girnastart setTriggerArea [500, 500, 0, false];
_Girnastart setTriggerActivation ["West", "PRESENT", False];
_Girnastart setTriggerStatements ["this","['Girna',4,100,3,[400,500]] call twc_townSetup"
	,""
];

