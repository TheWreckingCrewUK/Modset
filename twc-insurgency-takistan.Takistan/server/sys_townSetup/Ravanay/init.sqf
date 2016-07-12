//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Ravanay
//delete itself
_Ravanaystart = createTrigger ["EmptyDetector", getMarkerPos "Ravanay"];
_Ravanaystart setTriggerArea [500, 500, 0, false];
_Ravanaystart setTriggerActivation ["West", "PRESENT", False];
_Ravanaystart setTriggerStatements ["this","['Ravanay',7,100,8,[400,500]] call twc_townSetup"
	,""
];

