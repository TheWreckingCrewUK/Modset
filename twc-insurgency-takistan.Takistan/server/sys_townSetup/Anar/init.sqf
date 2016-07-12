//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Anar
//delete itself
_Anarstart = createTrigger ["EmptyDetector", getMarkerPos "Anar"];
_Anarstart setTriggerArea [200, 200, 0, false];
_Anarstart setTriggerActivation ["West", "PRESENT", False];
_Anarstart setTriggerStatements ["this","['Anar',12,300,8,[500,700]] call twc_townSetup"
	,""
];

