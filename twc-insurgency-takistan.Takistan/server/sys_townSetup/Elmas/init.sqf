//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Elmas
//delete itself
_Elmasstart = createTrigger ["EmptyDetector", getMarkerPos "Elmas"];
_Elmasstart setTriggerArea [400, 400, 0, false];
_Elmasstart setTriggerActivation ["West", "PRESENT", False];
_Elmasstart setTriggerStatements ["this","['Elmas',3,100,4,[400,500]] call twc_townSetup"
	,""
];

