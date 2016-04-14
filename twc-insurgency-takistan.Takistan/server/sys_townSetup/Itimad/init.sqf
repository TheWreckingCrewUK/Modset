//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Itimad
//delete itself
_Itimadstart = createTrigger ["EmptyDetector", getMarkerPos "Itimad"];
_Itimadstart setTriggerArea [500, 500, 0, false];
_Itimadstart setTriggerActivation ["West", "PRESENT", False];
_Itimadstart setTriggerStatements ["this","['Itimad',0,100,-1,[400,500]] call twc_townSetup"
	,""
];

