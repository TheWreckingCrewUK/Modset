//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Sakhe1
//delete itself
_Sakhe1start = createTrigger ["EmptyDetector", getMarkerPos "Sakhe1"];
_Sakhe1start setTriggerArea [400, 400, 0, false];
_Sakhe1start setTriggerActivation ["West", "PRESENT", False];
_Sakhe1start setTriggerStatements ["this","['Sakhe1',6,75,3,[400,500]] call twc_townSetup"
	,""
];

