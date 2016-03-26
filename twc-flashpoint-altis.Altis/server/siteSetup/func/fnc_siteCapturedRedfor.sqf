params["_marker"];

hint format["Redfor has captued %1", _marker];

_marker setMarkerColor "colorEAST";

{ deleteVehicle _x } forEach allDead;

capturedArray - [_marker];
publicVariable "capturedArray";

remainingArray + [_marker];
publicVariable "remainingArray";