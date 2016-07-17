//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Garmsar
//delete itself
_Garmsarstart = createTrigger ["EmptyDetector", getMarkerPos "Garmsar"];
_Garmsarstart setTriggerArea [500, 500, 0, false];
_Garmsarstart setTriggerActivation ["West", "PRESENT", False];
_Garmsarstart setTriggerStatements ["this","['Garmsar',3,300,2,[500,550]] call twc_townSetup"
	,""
];

