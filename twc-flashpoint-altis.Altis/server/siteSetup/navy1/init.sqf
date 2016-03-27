/*

*/

navystart = createTrigger ["EmptyDetector", getMarkerPos "navy1"];
navystart setTriggerArea [1000, 1000, 0, false];
navystart setTriggerActivation ["WEST", "PRESENT", true];
navystart setTriggerStatements ["this", "['navy1'] call twc_town; ['navy1'] call twc_siteContested; [thisList] call twc_mortarAttack; deleteVehiclenavystart", ""];