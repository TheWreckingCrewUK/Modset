//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Nur
//delete itself
_Nurstart = createTrigger ["EmptyDetector", getMarkerPos "Nur"];
_Nurstart setTriggerArea [300, 300, 0, false];
_Nurstart setTriggerActivation ["West", "PRESENT", False];
_Nurstart setTriggerStatements ["this","['Nur',5,75,3,[500,550]] call twc_townSetup"
	,""
];

