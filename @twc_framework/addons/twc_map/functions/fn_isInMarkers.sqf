params ["_marker"];

if ((count allMapMarkers) == 0) exitWith { false; };
if (_marker in allMapMarkers) exitWith { true; };

false;
