//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Karachinar
//delete itself
_Karachinarstart = createTrigger ["EmptyDetector", getMarkerPos "Karachinar"];
_Karachinarstart setTriggerArea [700, 700, 0, false];
_Karachinarstart setTriggerActivation ["West", "PRESENT", False];
_Karachinarstart setTriggerStatements ["this","['Karachinar',6,100,2,[700,800]] call twc_townSetup"
	,""
];

