//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Khushab
//delete itself
_Khushabstart = createTrigger ["EmptyDetector", getMarkerPos "Khushab"];
_Khushabstart setTriggerArea [400, 400, 0, false];
_Khushabstart setTriggerActivation ["West", "PRESENT", False];
_Khushabstart setTriggerStatements ["this","['Khushab',8,100,7,[400,600]] call twc_townSetup"
	,""
];

