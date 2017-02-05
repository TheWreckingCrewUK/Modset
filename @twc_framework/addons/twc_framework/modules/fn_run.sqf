params ["_enabled"];

if(!hasInterface)exitWith{};

if (_enabled) exitWith {};

waitUntil { sleep 0.5; !(isNull player) };
waitUntil { sleep 1.271; time > 0 };

if (getMarkerColor "base" == "") exitWith {systemChat "No Running in base is enabled, but no base marker is defined"};

while { alive player } do {
	if (Player distance getmarkerpos "base" <125) then {
			player forceWalk true;	
		} else {
			player forceWalk false;
		};
	sleep .503;
};