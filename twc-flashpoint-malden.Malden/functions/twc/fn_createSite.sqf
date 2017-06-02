params ["_marker"];
	
_trg = createTrigger ["EmptyDetector", (getMarkerPos _marker)];
_trg setTriggerArea [2000, 2000, 0, false];
_trg setTriggerTimeout [2,2,2,false];
_trg setTriggerActivation ["WEST", "PRESENT", false];
_trg setTriggerStatements ["{isPlayer _x}count ThisList > 0","[(thisTrigger getVariable 'triggerMarker')] spawn twc_fnc_siteSetup",""];

_trg setVariable ["triggerMarker",_marker];