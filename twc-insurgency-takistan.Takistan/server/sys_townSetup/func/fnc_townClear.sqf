/*
* Details:
* 
* Creates a Trigger Which checks if east is not present and if there is no cache in a given area if not turns the given marker blue
*
* Required parameters:
*
* 0 - String     Marker name
*
* Additional parameters:
*
* 1 - Array    radius inner/outer Default:[600,700]
*
* Example:
*
*["bastam",[600,700]] spawn twc_fnc_SpawnTownClear
*
* Author: [TWC] Fakematty / [TWC] Jayman
*/

_marker = _this select 0;
/*
Private ["_marker"];
params [["_marker"],["_radius",[600,700]]];
*/
sleep 3;

//_max = _radius select 1;

_Trigger = createTrigger ["EmptyDetector", getMarkerPos _marker];
_Trigger setTriggerArea [500, 500, 0, false];
_Trigger setTriggerActivation ["East", "NOT PRESENT", False];
_Trigger setTriggerStatements ["this",
									  "'Bastam' SetMarkerColor 'ColorWEST'; hint 'Town Captured'", 		
									  ""
									  ];
									  
									  
									  
//Removed While caches are gone because matty needs to fix
//_Trigger setTriggerStatements ["this && (count(nearestObjects [getMarkerPos _marker, ['Box_FIA_Wps_F'], 500]) == 0)",