/*

*/

navystart = createTrigger ["EmptyDetector", getMarkerPos "navy1"];
navystart setTriggerArea [500, 500, 0, false];
navystart setTriggerActivation ["WEST", "PRESENT", true];
navystart setTriggerStatements ["this", "['navy1'] call twc_town; ['navy1'] call twc_siteContested; deleteVehiclenavystart", ""];