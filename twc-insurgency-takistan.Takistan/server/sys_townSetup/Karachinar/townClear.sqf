//Written by [TWC]jayman
//checks if AI spawning has fired, checks if AI are alive, then changes marker to blue



Karachinarcolortrig = createTrigger ["EmptyDetector", getMarkerPos "Karachinar"];
Karachinarcolortrig setTriggerArea [500, 500, 0, false];
Karachinarcolortrig setTriggerActivation ["East", "PRESENT", True];
Karachinarcolortrig setTriggerStatements ["this", "'Karachinar' setMarkerColor 'Default'", "'Karachinar' SetMarkerColor 'ColorWest'"
];