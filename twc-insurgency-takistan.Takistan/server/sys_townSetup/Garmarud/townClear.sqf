//Written by [TWC]jayman
//checks if AI spawning has fired, checks if AI are alive, then changes marker to blue



Garmarudcolortrig = createTrigger ["EmptyDetector", getMarkerPos "Garmarud"];
Garmarudcolortrig setTriggerArea [500, 500, 0, false];
Garmarudcolortrig setTriggerActivation ["East", "PRESENT", True];
Garmarudcolortrig setTriggerStatements ["this", "'Garmarud' setMarkerColor 'Default'", "'Garmarud' SetMarkerColor 'ColorWest'"
];