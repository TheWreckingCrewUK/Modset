//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for AgiosCephas
//delete itself
_AgiosCephasstart = createTrigger ["EmptyDetector", getMarkerPos "AgiosCephas"];
_AgiosCephasstart setTriggerArea [400, 400, 0, false];
_AgiosCephasstart setTriggerActivation ["West", "PRESENT", False];
_AgiosCephasstart setTriggerStatements ["this","['AgiosCephas',7,100,1,[500,600]] call twc_townSetup"
	,""
];

