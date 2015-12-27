//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Falar
//delete itself
_Falarstart = createTrigger ["EmptyDetector", getMarkerPos "Falar"];
_Falarstart setTriggerArea [500, 500, 0, false];
_Falarstart setTriggerActivation ["West", "PRESENT", False];
_Falarstart setTriggerStatements ["this","['Falar',7,100,3,[600,700]] call twc_townSetup"
	,""
];

