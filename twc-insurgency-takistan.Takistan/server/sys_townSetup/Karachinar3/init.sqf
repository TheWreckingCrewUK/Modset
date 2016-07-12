//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Karachinar3
//delete itself
_Karachinar3start = createTrigger ["EmptyDetector", getMarkerPos "Karachinar3"];
_Karachinar3start setTriggerArea [400, 400, 0, false];
_Karachinar3start setTriggerActivation ["West", "PRESENT", False];
_Karachinar3start setTriggerStatements ["this","['Karachinar3',3,50,1,[400,500]] call twc_townSetup"
	,""
];

