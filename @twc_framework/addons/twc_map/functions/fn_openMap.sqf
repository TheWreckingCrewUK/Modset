params ["_mapObject"];

_mapID = _mapObject getVariable ["twc_map_owner", 0];
_mapOwnersMarkers = _mapObject getVariable ["twc_map_tempMarkers", []];

// dim all our own markers, so the common & map owner ones are prominent
// { _x setMarkerAlphaLocal 0.4; } forEach allMapMarkers;

{
	if !([_x] call twc_map_hasMarker) then {
		["twc_map_newMarker", [player, _x]] call CBA_fnc_localEvent;
		twc_map_temporaryMarkers pushBack _x;
	};
} forEach _mapOwnersMarkers;

["twc_map_opened", [_mapID]] call CBA_fnc_localEvent;