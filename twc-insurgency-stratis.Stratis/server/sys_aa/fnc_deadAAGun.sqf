private ["_intelPos", "_marker"];

params ["_deadAAGun"];

_intelPos = getPosATL _deadAAGun;

InsP_aagDestroyed = InsP_aagDestroyed - .1;
publicVariable "InsP_aagDestroyed";

InsP_civTrust = InsP_civTrust + .35;
publicVariable "InsP_civTrust";

InsP_aaGroup = InsP_aaGroup - [_deadAAGun];
publicVariable "InsP_aaGroup";

_marker = createMarker [format ["%1", _deadAAGun], _intelPos];
_marker setMarkerType "mil_triangle";
_marker setMarkerColor "ColorBlue";
_marker setMarkerText ("AA Gun Destroyed");
_marker setMarkerSize [0.6, 0.6];
[_marker, true] call CBA_fnc_setMarkerPersistent;
