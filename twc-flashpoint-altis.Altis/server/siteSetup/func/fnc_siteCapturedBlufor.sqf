params["_marker"];

hint format["Blufor has captured %1",_marker];
_marker setMarkerColor "colorWEST";

{ deleteVehicle _x } forEach allDead;

capturedArray + [_marker];
publicVariable "capturedArray";

remainingArray = remainingArray - [_marker];
publicVariable "capturedArray";