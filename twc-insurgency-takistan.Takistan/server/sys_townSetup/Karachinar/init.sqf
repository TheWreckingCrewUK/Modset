//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Karachinar
//delete itself
_Karachinarstart = createTrigger ["EmptyDetector", getMarkerPos "Karachinar"];
_Karachinarstart setTriggerArea [500, 500, 0, false];
_Karachinarstart setTriggerActivation ["West", "PRESENT", False];
_Karachinarstart setTriggerStatements ["this","['Karachinar',7,100,3,[600,700]] call twc_townSetup"
	,""
];

