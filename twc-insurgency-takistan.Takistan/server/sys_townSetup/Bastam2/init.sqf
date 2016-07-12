//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Bastam2
//delete itself
_Bastam2start = createTrigger ["EmptyDetector", getMarkerPos "Bastam2"];
_Bastam2start setTriggerArea [400, 400, 0, false];
_Bastam2start setTriggerActivation ["West", "PRESENT", False];
_Bastam2start setTriggerStatements ["this","['Bastam2',7,75,7,[400,500]] call twc_townSetup"
	,""
];

