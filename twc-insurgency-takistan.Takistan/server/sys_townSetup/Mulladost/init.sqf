//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Mulladost
//delete itself
_Mulladoststart = createTrigger ["EmptyDetector", getMarkerPos "Mulladost"];
_Mulladoststart setTriggerArea [700, 700, 0, false];
_Mulladoststart setTriggerActivation ["West", "PRESENT", False];
_Mulladoststart setTriggerStatements ["this","['Mulladost',7,100,2,[700,800]] call twc_townSetup"
	,""
];

