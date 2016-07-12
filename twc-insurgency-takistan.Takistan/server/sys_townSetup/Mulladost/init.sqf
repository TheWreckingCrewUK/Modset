//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Mulladost
//delete itself
_Mulladoststart = createTrigger ["EmptyDetector", getMarkerPos "Mulladost"];
_Mulladoststart setTriggerArea [400, 400, 0, false];
_Mulladoststart setTriggerActivation ["West", "PRESENT", False];
_Mulladoststart setTriggerStatements ["this","['Mulladost',15,200,8,[500,550]] call twc_townSetup"
	,""
];

