//Written by [TWC]jayman
//checks if AI spawning has fired, checks if AI are alive, then changes marker to blue



Ravanaycolortrig = createTrigger ["EmptyDetector", getMarkerPos "Ravanay"];
Ravanaycolortrig setTriggerArea [500, 500, 0, false];
Ravanaycolortrig setTriggerActivation ["East", "PRESENT", True];
Ravanaycolortrig setTriggerStatements ["this", "'Ravanay' setMarkerColor 'Default'", "'Ravanay' SetMarkerColor 'ColorWest'"
];