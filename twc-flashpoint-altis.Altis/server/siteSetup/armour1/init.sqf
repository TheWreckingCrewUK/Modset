/*

*/

armourstart = createTrigger ["EmptyDetector", getMarkerPos "armour1"];
armourstart  setTriggerArea [500, 500, 0, false];
armourstart  setTriggerActivation ["WEST", "PRESENT", true];
armourstart  setTriggerStatements ["this", "['armour1'] call twc_tank; ['armour1'] call twc_siteContested; deleteVehicle armourstart", ""];