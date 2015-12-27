//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Nur
//delete itself
_Nurstart = createTrigger ["EmptyDetector", getMarkerPos "Nur"];
_Nurstart setTriggerArea [500, 500, 0, false];
_Nurstart setTriggerActivation ["West", "PRESENT", False];
_Nurstart setTriggerStatements ["this","['Nur',7,100,3,[600,700]] call twc_townSetup"
	,""
];

