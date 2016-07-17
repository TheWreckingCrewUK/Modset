//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Bastam
//delete itself
_Bastamstart = createTrigger ["EmptyDetector", getMarkerPos "Bastam"];
_Bastamstart setTriggerArea [400, 400, 0, false];
_Bastamstart setTriggerActivation ["West", "PRESENT", False];
_Bastamstart setTriggerStatements ["this","['Bastam',5,100,3,[400,500]] call twc_townSetup"
	,""
];

