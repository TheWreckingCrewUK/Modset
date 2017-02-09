params ["_enabled","_range"];

if(!hasInterface)exitWith{};

if (_range == 0) exitWith {};

waitUntil { sleep 0.5; !(isNull player) };
waitUntil { sleep 1.271; time > 0 };

if (getMarkerColor "base" == "") exitWith {systemChat "No Running in base is enabled, but no base marker is defined"};

while { alive player } do {
	if (Player distance getmarkerpos "base" < _range) then {
			player forceWalk true;	
		};
	sleep .5;
	if (Player distance getmarkerpos "base" > _range) exitWith {player forceWalk false;};
};