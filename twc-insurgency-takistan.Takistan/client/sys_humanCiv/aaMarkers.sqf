_m = 0;

{
	_m = _m + 1;
	_marker = createMarkerLocal [format ["aagun%1", _m], getPosATL _x];
	_marker setMarkerTypeLocal "mil_triangle";
	_marker setMarkerColorLocal "ColorBlue";
	_marker setMarkerSizeLocal [0.7, 0.7];
} forEach InsP_aaGroup;