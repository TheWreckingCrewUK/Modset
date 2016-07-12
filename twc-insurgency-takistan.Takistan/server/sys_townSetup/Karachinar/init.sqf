//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Karachinar
//delete itself
_Karachinarstart = createTrigger ["EmptyDetector", getMarkerPos "Karachinar"];
_Karachinarstart setTriggerArea [400, 400, 0, false];
_Karachinarstart setTriggerActivation ["West", "PRESENT", False];
_Karachinarstart setTriggerStatements ["this","['Karachinar',3,100,8,[400,500]] call twc_townSetup"
	,""
];

