//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Kakaru
//delete itself
_Kakarustart = createTrigger ["EmptyDetector", getMarkerPos "Kakaru"];
_Kakarustart setTriggerArea [400, 400, 0, false];
_Kakarustart setTriggerActivation ["West", "PRESENT", False];
_Kakarustart setTriggerStatements ["this","['Kakaru',7,75,7,[400,500]] call twc_townSetup"
	,""
];

