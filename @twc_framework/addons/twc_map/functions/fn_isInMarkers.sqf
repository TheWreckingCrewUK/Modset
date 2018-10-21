params ["_marker"];

if ((count allMapMarkers) == 0) exitWith { false; };

{
	if (_x isEqualTo _marker) exitWith { true };
} forEach allMapMarkers;

false;
