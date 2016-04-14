//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Ahlam
//delete itself
_Ahlamstart = createTrigger ["EmptyDetector", getMarkerPos "Ahlam"];
_Ahlamstart setTriggerArea [400, 400, 0, false];
_Ahlamstart setTriggerActivation ["West", "PRESENT", False];
_Ahlamstart setTriggerStatements ["this","['Ahlam',7,100,2,[400,500]] call twc_townSetup"
	,""
];

