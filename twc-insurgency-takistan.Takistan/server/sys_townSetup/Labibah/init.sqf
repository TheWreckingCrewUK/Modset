//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Labibah
//delete itself
_Labibahstart = createTrigger ["EmptyDetector", getMarkerPos "Labibah"];
_Labibahstart setTriggerArea [400, 400, 0, false];
_Labibahstart setTriggerActivation ["West", "PRESENT", False];
_Labibahstart setTriggerStatements ["this","['Labibah',3,100,4,[400,500]] call twc_townSetup"
	,""
];

