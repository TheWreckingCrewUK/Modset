//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Feruz_Abad
//delete itself
_Feruz_Abadstart = createTrigger ["EmptyDetector", getMarkerPos "Feruz_Abad"];
_Feruz_Abadstart setTriggerArea [500, 500, 0, false];
_Feruz_Abadstart setTriggerActivation ["West", "PRESENT", False];
_Feruz_Abadstart setTriggerStatements ["this","['Feruz_Abad',7,100,3,[600,700]] call twc_townSetup"
	,""
];

