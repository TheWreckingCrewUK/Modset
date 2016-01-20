//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for ZargabadCenter
//delete itself
_ZargabadCenterstart = createTrigger ["EmptyDetector", getMarkerPos "ZargabadCenter"];
_ZargabadCenterstart setTriggerArea [200, 200, 0, false];
_ZargabadCenterstart setTriggerActivation ["West", "PRESENT", False];
_ZargabadCenterstart setTriggerStatements ["this","['ZargabadCenter',7,100,0,[300,400]] call twc_townSetup"
	,""
];

