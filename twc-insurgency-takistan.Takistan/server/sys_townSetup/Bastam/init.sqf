//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Bastam
//delete itself
_Bastamstart = createTrigger ["EmptyDetector", getMarkerPos "Bastam"];
_Bastamstart setTriggerArea [700, 700, 0, false];
_Bastamstart setTriggerActivation ["West", "PRESENT", False];
_Bastamstart setTriggerStatements ["this","['Bastam',9,100,2,[700,800]] call twc_townSetup"
	,""
];

