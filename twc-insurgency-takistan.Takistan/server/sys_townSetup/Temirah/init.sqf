//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Temirah
//delete itself
_Temirahstart = createTrigger ["EmptyDetector", getMarkerPos "Temirah"];
_Temirahstart setTriggerArea [400, 400, 0, false];
_Temirahstart setTriggerActivation ["West", "PRESENT", False];
_Temirahstart setTriggerStatements ["this","['Temirah',3,100,4,[400,500]] call twc_townSetup"
	,""
];

