//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for ZargabadEast
//delete itself
_ZargabadEaststart = createTrigger ["EmptyDetector", getMarkerPos "ZargabadEast"];
_ZargabadEaststart setTriggerArea [500, 500, 0, false];
_ZargabadEaststart setTriggerActivation ["West", "PRESENT", False];
_ZargabadEaststart setTriggerStatements ["this","['ZargabadEast',5,100,1,[600,700]] call twc_townSetup"
	,""
];

