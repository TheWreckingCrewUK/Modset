{ deleteMarkerLocal _x; } forEach twc_map_temporaryMarkers;
twc_map_temporaryMarkers = [];

{
	private "_string";
	_string = toArray _x;
	_string resize 15;
	
	if (toString _string == "_USER_DEFINED #") then {
		_x setMarkerAlphaLocal 1;
	};
} forEach allMapMarkers;