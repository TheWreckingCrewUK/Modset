//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Karachinar4
//delete itself
_Karachinar4start = createTrigger ["EmptyDetector", getMarkerPos "Karachinar4"];
_Karachinar4start setTriggerArea [400, 400, 0, false];
_Karachinar4start setTriggerActivation ["West", "PRESENT", False];
_Karachinar4start setTriggerStatements ["this","['Karachinar4',7,100,5,[400,500]] call twc_townSetup"
	,""
];

