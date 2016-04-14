//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Bahijah
//delete itself
_Bahijahstart = createTrigger ["EmptyDetector", getMarkerPos "Bahijah"];
_Bahijahstart setTriggerArea [400, 400, 0, false];
_Bahijahstart setTriggerActivation ["West", "PRESENT", False];
_Bahijahstart setTriggerStatements ["this","['Bahijah',5,100,1,[400,500]] call twc_townSetup"
	,""
];

