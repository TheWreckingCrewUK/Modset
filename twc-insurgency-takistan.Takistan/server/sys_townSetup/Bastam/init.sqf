//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Bastam
//delete itself
_Bastamstart = createTrigger ["EmptyDetector", getMarkerPos "Bastam"];
_Bastamstart setTriggerArea [500, 500, 0, false];
_Bastamstart setTriggerActivation ["West", "PRESENT", False];
_Bastamstart setTriggerStatements ["this","['Bastam',7,100,3,[600,700]] call twc_townSetup"
	,""
];

