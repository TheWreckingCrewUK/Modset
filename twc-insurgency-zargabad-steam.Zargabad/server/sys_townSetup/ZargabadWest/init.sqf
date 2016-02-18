//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for ZargabadWest
//delete itself
_ZargabadWeststart = createTrigger ["EmptyDetector", getMarkerPos "ZargabadWest"];
_ZargabadWeststart setTriggerArea [400, 400, 0, false];
_ZargabadWeststart setTriggerActivation ["West", "PRESENT", False];
_ZargabadWeststart setTriggerStatements ["this","['ZargabadWest',7,100,1,[500,600]] call twc_townSetup"
	,""
];

