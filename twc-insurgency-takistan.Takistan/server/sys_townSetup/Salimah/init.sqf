//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Salimah
//delete itself
_Salimahstart = createTrigger ["EmptyDetector", getMarkerPos "Salimah"];
_Salimahstart setTriggerArea [200, 200, 0, false];
_Salimahstart setTriggerActivation ["West", "PRESENT", False];
_Salimahstart setTriggerStatements ["this","['Salimah',7,100,3,[300,400]] call twc_townSetup"
	,""
];

