//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for CampTempest
//delete itself
_CampTempeststart = createTrigger ["EmptyDetector", getMarkerPos "CampTempest"];
_CampTempeststart setTriggerArea [500, 500, 0, false];
_CampTempeststart setTriggerActivation ["West", "PRESENT", False];
_CampTempeststart setTriggerStatements ["this","['CampTempest',5,100,2,[600,700]] call twc_townSetup"
	,""
];

