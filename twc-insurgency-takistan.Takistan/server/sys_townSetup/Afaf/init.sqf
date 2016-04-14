//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Afaf
//delete itself
_Afafstart = createTrigger ["EmptyDetector", getMarkerPos "Afaf"];
_Afafstart setTriggerArea [400, 400, 0, false];
_Afafstart setTriggerActivation ["West", "PRESENT", False];
_Afafstart setTriggerStatements ["this","['Afaf',3,100,4,[400,500]] call twc_townSetup"
	,""
];

