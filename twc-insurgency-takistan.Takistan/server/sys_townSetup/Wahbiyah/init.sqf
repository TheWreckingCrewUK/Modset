//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for Wahbiyah
//delete itself
_Wahbiyahstart = createTrigger ["EmptyDetector", getMarkerPos "Wahbiyah"];
_Wahbiyahstart setTriggerArea [400, 400, 0, false];
_Wahbiyahstart setTriggerActivation ["West", "PRESENT", False];
_Wahbiyahstart setTriggerStatements ["this","['Wahbiyah',3,100,4,[400,500]] call twc_townSetup"
	,""
];

