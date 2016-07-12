//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Falar
//delete itself
_Falarstart = createTrigger ["EmptyDetector", getMarkerPos "Falar"];
_Falarstart setTriggerArea [400, 400, 0, false];
_Falarstart setTriggerActivation ["West", "PRESENT", False];
_Falarstart setTriggerStatements ["this","['Falar',10,200,9,[400,600]] call twc_townSetup"
	,""
];

