//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for CampRogain
//delete itself
_CampRogainstart = createTrigger ["EmptyDetector", getMarkerPos "CampRogain"];
_CampRogainstart setTriggerArea [500, 500, 0, false];
_CampRogainstart setTriggerActivation ["West", "PRESENT", False];
_CampRogainstart setTriggerStatements ["this","['CampRogain',4,100,3,[400,500]] call twc_townSetup"
	,""
];

