//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for ZargabadSouth
//delete itself
_ZargabadSouthstart = createTrigger ["EmptyDetector", getMarkerPos "ZargabadSouth"];
_ZargabadSouthstart setTriggerArea [300, 300, 0, false];
_ZargabadSouthstart setTriggerActivation ["West", "PRESENT", False];
_ZargabadSouthstart setTriggerStatements ["this","['ZargabadSouth',4,100,1,[400,500]] call twc_townSetup"
	,""
];

