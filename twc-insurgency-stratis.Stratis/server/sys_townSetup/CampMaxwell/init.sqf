//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for CampMaxwell
//delete itself
_CampMaxwellstart = createTrigger ["EmptyDetector", getMarkerPos "CampMaxwell"];
_CampMaxwellstart setTriggerArea [200, 200, 0, false];
_CampMaxwellstart setTriggerActivation ["West", "PRESENT", False];
_CampMaxwellstart setTriggerStatements ["this","['CampMaxwell',7,100,3,[300,400]] call twc_townSetup"
	,""
];

