//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Nagara
//delete itself
_Nagarastart = createTrigger ["EmptyDetector", getMarkerPos "Nagara"];
_Nagarastart setTriggerArea [400, 400, 0, false];
_Nagarastart setTriggerActivation ["West", "PRESENT", False];
_Nagarastart setTriggerStatements ["this","['Nagara',4,50,3,[500,550]] call twc_townSetup"
	,""
];

