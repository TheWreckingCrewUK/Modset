
// Random Marker
_RandomNumberMarker = floor (random count SideMissionsMarkerArray);
_RandomMarker = SideMissionsMarkerArray select _RandomNumberMarker;

_spawn = [_RandomMarker] spawn TWC_fnc_SideMissionArmoured;

SideMissionsMarkerArray = SideMissionsMarkerArray - [_RandomMarker];