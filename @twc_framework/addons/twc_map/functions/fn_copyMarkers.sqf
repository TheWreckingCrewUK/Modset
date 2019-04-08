params ["_mapObject"];

_mapOwnersMarkers = _mapObject getVariable ["twc_map_tempMarkers", []];

{
	if !([_x] call twc_map_fnc_isInMarkers) then {
		["twc_map_newMarker", [player, _x]] call CBA_fnc_localEvent;
	};
} forEach _mapOwnersMarkers;