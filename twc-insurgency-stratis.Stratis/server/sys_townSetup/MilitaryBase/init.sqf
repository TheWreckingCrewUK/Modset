//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for MilitaryBase
//delete itself
_MilitaryBasestart = createTrigger ["EmptyDetector", getMarkerPos "MilitaryBase"];
_MilitaryBasestart setTriggerArea [500, 500, 0, false];
_MilitaryBasestart setTriggerActivation ["West", "PRESENT", False];
_MilitaryBasestart setTriggerStatements ["this","['MilitaryBase',0,100,2,[400,500]] call twc_townSetup"
	,""
];

