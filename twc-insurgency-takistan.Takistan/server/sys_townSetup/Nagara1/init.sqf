//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Nagara1
//delete itself
_Nagara1start = createTrigger ["EmptyDetector", getMarkerPos "Nagara1"];
_Nagara1start setTriggerArea [500, 500, 0, false];
_Nagara1start setTriggerActivation ["West", "PRESENT", False];
_Nagara1start setTriggerStatements ["this","['Nagara1',5,50,2,[400,500]] call twc_townSetup"
	,""
];

