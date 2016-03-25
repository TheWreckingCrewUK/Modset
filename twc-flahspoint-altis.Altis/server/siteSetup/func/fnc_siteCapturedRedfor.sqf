params["_marker"];

hint "Redfor has captued _marker";

_marker setMarkerColor "colorEAST";

{ deleteVehicle _x } forEach allDead;

capturedArray - [_marker];
publicVariable "capturedArray";

remainingArray + [_marker];
publicVariable "remainingArray";