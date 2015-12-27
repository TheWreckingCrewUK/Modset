//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Zavarak
//delete itself
_Zavarakstart = createTrigger ["EmptyDetector", getMarkerPos "Zavarak"];
_Zavarakstart setTriggerArea [500, 500, 0, false];
_Zavarakstart setTriggerActivation ["West", "PRESENT", False];
_Zavarakstart setTriggerStatements ["this","['Zavarak',7,100,3,[600,700]] call twc_townSetup"
	,""
];

