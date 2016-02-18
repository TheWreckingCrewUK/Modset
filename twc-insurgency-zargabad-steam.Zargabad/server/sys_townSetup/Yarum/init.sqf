//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Yarum
//delete itself
_Yarumstart = createTrigger ["EmptyDetector", getMarkerPos "Yarum"];
_Yarumstart setTriggerArea [400, 400, 0, false];
_Yarumstart setTriggerActivation ["West", "PRESENT", False];
_Yarumstart setTriggerStatements ["this","['Yarum',5,100,1,[500,600]] call twc_townSetup"
	,""
];

