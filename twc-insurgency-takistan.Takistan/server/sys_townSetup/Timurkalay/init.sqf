//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Timurkalay
//delete itself
_Timurkalaystart = createTrigger ["EmptyDetector", getMarkerPos "Timurkalay"];
_Timurkalaystart setTriggerArea [400, 400, 0, false];
_Timurkalaystart setTriggerActivation ["West", "PRESENT", False];
_Timurkalaystart setTriggerStatements ["this","['Timurkalay',8,100,9,[500,600]] call twc_townSetup"
	,""
];

