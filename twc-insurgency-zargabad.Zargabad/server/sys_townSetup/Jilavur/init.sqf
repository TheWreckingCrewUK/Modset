//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Jilavur
//delete itself
_Jilavurstart = createTrigger ["EmptyDetector", getMarkerPos "Jilavur"];
_Jilavurstart setTriggerArea [400, 400, 0, false];
_Jilavurstart setTriggerActivation ["West", "PRESENT", False];
_Jilavurstart setTriggerStatements ["this","['Jilavur',12,75,5,[400,600]] call twc_townSetup"
	,""
];

