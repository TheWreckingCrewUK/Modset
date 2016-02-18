//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for YarumEast
//delete itself
_YarumEaststart = createTrigger ["EmptyDetector", getMarkerPos "YarumEast"];
_YarumEaststart setTriggerArea [400, 400, 0, false];
_YarumEaststart setTriggerActivation ["West", "PRESENT", False];
_YarumEaststart setTriggerStatements ["this","['YarumEast',3,100,0,[500,600]] call twc_townSetup"
	,""
];

