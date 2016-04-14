//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Rafiah
//delete itself
_Rafiahstart = createTrigger ["EmptyDetector", getMarkerPos "Rafiah"];
_Rafiahstart setTriggerArea [500, 500, 0, false];
_Rafiahstart setTriggerActivation ["West", "PRESENT", False];
_Rafiahstart setTriggerStatements ["this","['Rafiah',5,100,2,[400,500]] call twc_townSetup"
	,""
];

