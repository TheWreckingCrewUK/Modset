//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for KaminoFireingRange
//delete itself
_KaminoFireingRangestart = createTrigger ["EmptyDetector", getMarkerPos "KaminoFireingRange"];
_KaminoFireingRangestart setTriggerArea [400, 400, 0, false];
_KaminoFireingRangestart setTriggerActivation ["West", "PRESENT", False];
_KaminoFireingRangestart setTriggerStatements ["this","['KaminoFireingRange',5,100,1,[500,600]] call twc_townSetup"
	,""
];

