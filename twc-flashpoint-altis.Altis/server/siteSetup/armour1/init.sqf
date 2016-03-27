/*

*/

armourstart = createTrigger ["EmptyDetector", getMarkerPos "armour1"];
armourstart  setTriggerArea [1000, 1000, 0, false];
armourstart  setTriggerActivation ["WEST", "PRESENT", true];
armourstart  setTriggerStatements ["this", "['armour1'] call twc_tank; ['armour1'] call twc_siteContested; [thisList] call twc_mortarAttack; deleteVehicle armourstart", ""];