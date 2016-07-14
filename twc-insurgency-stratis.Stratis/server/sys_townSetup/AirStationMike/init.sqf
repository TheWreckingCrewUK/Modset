//Made by [TWC]jayman
//checks if blufor enters the area
//calls all of the files specific for AirStationMike
//delete itself
_AirStationMikestart = createTrigger ["EmptyDetector", getMarkerPos "AirStationMike"];
_AirStationMikestart setTriggerArea [400, 400, 0, false];
_AirStationMikestart setTriggerActivation ["West", "PRESENT", False];
_AirStationMikestart setTriggerStatements ["this","['AirStationMike',3,100,4,[400,500]] call twc_townSetup"
	,""
];

