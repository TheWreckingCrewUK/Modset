//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Nagara
//delete itself
_Nagarastart = createTrigger ["EmptyDetector", getMarkerPos "Nagara"];
_Nagarastart setTriggerArea [600, 600, 0, false];
_Nagarastart setTriggerActivation ["West", "PRESENT", False];
_Nagarastart setTriggerStatements ["this","['Nagara',5,100,1,[600,700]] call twc_townSetup"
	,""
];

