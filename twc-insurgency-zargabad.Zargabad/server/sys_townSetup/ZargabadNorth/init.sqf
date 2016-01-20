//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for ZargabadNorth
//delete itself
_ZargabadNorthstart = createTrigger ["EmptyDetector", getMarkerPos "ZargabadNorth"];
_ZargabadNorthstart setTriggerArea [500, 500, 0, false];
_ZargabadNorthstart setTriggerActivation ["West", "PRESENT", False];
_ZargabadNorthstart setTriggerStatements ["this","['ZargabadNorth',4,100,0,[600,700]] call twc_townSetup"
	,""
];

