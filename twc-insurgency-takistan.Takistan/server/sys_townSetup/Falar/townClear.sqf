//Written by [TWC]jayman
//checks if AI spawning has fired, checks if AI are alive, then changes marker to blue



Falarcolortrig = createTrigger ["EmptyDetector", getMarkerPos "Falar"];
Falarcolortrig setTriggerArea [500, 500, 0, false];
Falarcolortrig setTriggerActivation ["East", "PRESENT", True];
Falarcolortrig setTriggerStatements ["this", "'Falar' setMarkerColor 'Default'", "'Falar' SetMarkerColor 'ColorWest'"
];