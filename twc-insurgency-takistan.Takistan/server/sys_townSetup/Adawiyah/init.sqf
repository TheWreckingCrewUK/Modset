//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Adawiyah
//delete itself
_Adawiyahstart = createTrigger ["EmptyDetector", getMarkerPos "Adawiyah"];
_Adawiyahstart setTriggerArea [400, 400, 0, false];
_Adawiyahstart setTriggerActivation ["West", "PRESENT", False];
_Adawiyahstart setTriggerStatements ["this","['Adawiyah',3,100,4,[400,500]] call twc_townSetup"
	,""
];

