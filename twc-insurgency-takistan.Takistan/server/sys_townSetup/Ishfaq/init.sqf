//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Ishfaq
//delete itself
_Ishfaqstart = createTrigger ["EmptyDetector", getMarkerPos "Ishfaq"];
_Ishfaqstart setTriggerArea [500, 500, 0, false];
_Ishfaqstart setTriggerActivation ["West", "PRESENT", False];
_Ishfaqstart setTriggerStatements ["this","['Ishfaq',4,100,3,[400,500]] call twc_townSetup"
	,""
];

