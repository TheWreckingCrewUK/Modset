//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Bastam1
//delete itself
_Bastam1start = createTrigger ["EmptyDetector", getMarkerPos "Bastam1"];
_Bastam1start setTriggerArea [400, 400, 0, false];
_Bastam1start setTriggerActivation ["West", "PRESENT", False];
_Bastam1start setTriggerStatements ["this","['Bastam1',5,75,6,[400,500]] call twc_townSetup"
	,""
];

