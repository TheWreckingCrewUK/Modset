params["_marker"];

hint "Blufor has captured _marker";
_marker setMarkerColor "colorWEST";


{ deleteVehicle _x } forEach allDead;

_marker = "warning1";
capturedArray pushback "warning1";
publicVariable "capturedArray";

remainingArray = remainingArray - ["warning1"];
publicVariable "capturedArray";