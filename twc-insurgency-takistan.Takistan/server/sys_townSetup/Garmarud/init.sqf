//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Garmarud
//delete itself
_Garmarudstart = createTrigger ["EmptyDetector", getMarkerPos "Garmarud"];
_Garmarudstart setTriggerArea [500, 500, 0, false];
_Garmarudstart setTriggerActivation ["West", "PRESENT", False];
_Garmarudstart setTriggerStatements ["this","['Garmarud',9,75,9,[500,550]] call twc_townSetup"
	,""
];

