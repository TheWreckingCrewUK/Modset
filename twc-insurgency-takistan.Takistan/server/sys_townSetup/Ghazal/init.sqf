//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Ghazal
//delete itself
_Ghazalstart = createTrigger ["EmptyDetector", getMarkerPos "Ghazal"];
_Ghazalstart setTriggerArea [400, 400, 0, false];
_Ghazalstart setTriggerActivation ["West", "PRESENT", False];
_Ghazalstart setTriggerStatements ["this","['Ghazal',3,100,4,[400,500]] call twc_townSetup"
	,""
];

