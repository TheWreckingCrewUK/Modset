//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Karachinar2
//delete itself
_Karachinar2start = createTrigger ["EmptyDetector", getMarkerPos "Karachinar2"];
_Karachinar2start setTriggerArea [400, 400, 0, false];
_Karachinar2start setTriggerActivation ["West", "PRESENT", False];
_Karachinar2start setTriggerStatements ["this","['Karachinar2',4,100,1,[400,500]] call twc_townSetup"
	,""
];

