//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for AgiaMarina
//delete itself
_AgiaMarinastart = createTrigger ["EmptyDetector", getMarkerPos "AgiaMarina"];
_AgiaMarinastart setTriggerArea [500, 500, 0, false];
_AgiaMarinastart setTriggerActivation ["West", "PRESENT", False];
_AgiaMarinastart setTriggerStatements ["this","['AgiaMarina',3,100,1,[600,700]] call twc_townSetup"
	,""
];

