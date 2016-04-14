//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Derya
//delete itself
_Deryastart = createTrigger ["EmptyDetector", getMarkerPos "Derya"];
_Deryastart setTriggerArea [500, 500, 0, false];
_Deryastart setTriggerActivation ["West", "PRESENT", False];
_Deryastart setTriggerStatements ["this","['Derya',3,100,3,[400,500]] call twc_townSetup"
	,""
];

