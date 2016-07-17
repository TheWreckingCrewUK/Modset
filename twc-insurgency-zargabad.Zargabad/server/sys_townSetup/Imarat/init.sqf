//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Imarat
//delete itself
_Imaratstart = createTrigger ["EmptyDetector", getMarkerPos "Imarat"];
_Imaratstart setTriggerArea [400, 400, 0, false];
_Imaratstart setTriggerActivation ["West", "PRESENT", False];
_Imaratstart setTriggerStatements ["this","['Imarat',8,100,5,[500,600]] call twc_townSetup"
	,""
];

