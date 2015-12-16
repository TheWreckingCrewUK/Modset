//Written by [TWC]jayman
//checks if AI spawning has fired, checks if AI are alive, then changes marker to blue



Zavarakcolortrig = createTrigger ["EmptyDetector", getMarkerPos "Zavarak"];
Zavarakcolortrig setTriggerArea [500, 500, 0, false];
Zavarakcolortrig setTriggerActivation ["East", "PRESENT", True];
Zavarakcolortrig setTriggerStatements ["this", "'Zavarak' setMarkerColor 'Default'", "'Zavarak' SetMarkerColor 'ColorWest'"
];