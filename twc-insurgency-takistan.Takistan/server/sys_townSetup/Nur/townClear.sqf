//Written by [TWC]jayman
//checks if AI spawning has fired, checks if AI are alive, then changes marker to blue



nurcolortrig = createTrigger ["EmptyDetector", getMarkerPos "Nur"];
nurcolortrig setTriggerArea [500, 500, 0, false];
nurcolortrig setTriggerActivation ["East", "PRESENT", True];
nurcolortrig setTriggerStatements ["this", "'Nur' setMarkerColor 'Default'", "'Nur' SetMarkerColor 'ColorWest'"
];