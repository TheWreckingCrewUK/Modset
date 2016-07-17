//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Zavarak1
//delete itself
_Zavarak1start = createTrigger ["EmptyDetector", getMarkerPos "Zavarak1"];
_Zavarak1start setTriggerArea [400, 400, 0, false];
_Zavarak1start setTriggerActivation ["West", "PRESENT", False];
_Zavarak1start setTriggerStatements ["this","['Zavarak1',12,155,5,[300,800]] call twc_townSetup"
	,""
];

