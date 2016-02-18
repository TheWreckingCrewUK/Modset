//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Nango
//delete itself
_Nangostart = createTrigger ["EmptyDetector", getMarkerPos "Nango"];
_Nangostart setTriggerArea [500, 500, 0, false];
_Nangostart setTriggerActivation ["West", "PRESENT", False];
_Nangostart setTriggerStatements ["this","['Nango',3,100,1,[600,700]] call twc_townSetup"
	,""
];

