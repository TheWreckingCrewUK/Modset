//Written by [TWC]jayman
//checks if AI spawning has fired, checks if AI are alive, then changes marker to blue



Feruz_Abadcolortrig = createTrigger ["EmptyDetector", getMarkerPos "Feruz_Abad"];
Feruz_Abadcolortrig setTriggerArea [500, 500, 0, false];
Feruz_Abadcolortrig setTriggerActivation ["East", "PRESENT", True];
Feruz_Abadcolortrig setTriggerStatements ["this", "'Feruz_Abad' setMarkerColor 'Default'", "'Feruz_Abad' SetMarkerColor 'ColorWest'"
];