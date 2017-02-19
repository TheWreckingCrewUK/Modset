/*
* Author: [TWC] jayman
* Forces run in the base or any named flag.
*
* Arguments:
* 0: Range <NUMBER>
* 1: Marker <STRING>
*
* Return Value:
* NOTHING
*
* Example:
* [400,"base"] call twc_fnc_run;
*
* Public: No
*/
params ["_range",["_marker","base"]];

if(!hasInterface)exitWith{};

if (_range == 0) exitWith {};

waitUntil { sleep 0.5; !(isNull player) };
waitUntil { sleep 1.271; time > 0 };

if (getMarkerColor _marker == "") exitWith {systemChat "No Running in base is enabled, but no base marker is defined"};

while { alive player } do {
	if (Player distance getmarkerpos _marker < _range) then {
			player forceWalk true;	
		};
	sleep .5;
	if (Player distance getmarkerpos _marker > _range) exitWith {player forceWalk false;};
};