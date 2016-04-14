//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Asra
//delete itself
_Asrastart = createTrigger ["EmptyDetector", getMarkerPos "Asra"];
_Asrastart setTriggerArea [400, 400, 0, false];
_Asrastart setTriggerActivation ["West", "PRESENT", False];
_Asrastart setTriggerStatements ["this","['Asra',3,100,4,[400,500]] call twc_townSetup"
	,""
];

