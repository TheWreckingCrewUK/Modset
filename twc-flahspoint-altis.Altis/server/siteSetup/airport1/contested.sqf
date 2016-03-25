/*

*/

airporttrg1 = createTrigger ["EmptyDetector", getMarkerPos "airport1"];
airporttrg1 setTriggerArea [500, 500, 0, false];
airporttrg1 setTriggerActivation ["WEST", "NOT PRESENT", true];
airporttrg1 setTriggerTimeout [5,5,5,True];
airporttrg1 setTriggerStatements ["this", "['airport1'] call twc_attackFailed; execVM 'server\siteSetup\airport1\init.sqf'; deleteVehicle airporttrg2; deleteVehicle airporttrg1", ""];

airporttrg2 = createTrigger ["EmptyDetector", getMarkerPos "airport1"];
airporttrg2 setTriggerArea [500, 500, 0, false];
airporttrg2 setTriggerActivation ["EAST", "NOT PRESENT", true];
airporttrg2 setTriggerTimeout [5,5,5,True];
airporttrg2 setTriggerStatements ["this", "['airport1'] call twc_siteCapturedBlufor; deleteVehicle airporttrg1; deleteVehicle airporttrg2", ""];