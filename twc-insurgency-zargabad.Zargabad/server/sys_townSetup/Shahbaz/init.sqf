//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Shahbaz
//delete itself
_Shahbazstart = createTrigger ["EmptyDetector", getMarkerPos "Shahbaz"];
_Shahbazstart setTriggerArea [500, 500, 0, false];
_Shahbazstart setTriggerActivation ["West", "PRESENT", False];
_Shahbazstart setTriggerStatements ["this","['Shahbaz',4,100,1,[600,700]] call twc_townSetup"
	,""
];

