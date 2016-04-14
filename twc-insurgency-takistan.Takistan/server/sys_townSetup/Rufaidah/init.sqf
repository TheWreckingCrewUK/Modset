//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Rufaidah
//delete itself
_Rufaidahstart = createTrigger ["EmptyDetector", getMarkerPos "Rufaidah"];
_Rufaidahstart setTriggerArea [500, 500, 0, false];
_Rufaidahstart setTriggerActivation ["West", "PRESENT", False];
_Rufaidahstart setTriggerStatements ["this","['Rufaidah',5,100,2,[400,500]] call twc_townSetup"
	,""
];

