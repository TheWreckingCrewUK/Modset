{
	_marker = createMarkerLocal [format ["aagun%1", _forEachIndex], getPosATL _x];
	_marker setMarkerTypeLocal "mil_triangle";
	_marker setMarkerColorLocal "ColorBlue";
	_marker setMarkerSizeLocal [0.7, 0.7];
} forEach InsP_aaGroup;

_iedList = (allMissionObjects "IEDLandBig_F") + (allMissionObjects "IEDLandSmall_F");
{
	_marker = createMarkerLocal [format ["ied%1", _forEachIndex], getPosATL _x];
	_marker setMarkerTypeLocal "mil_dot";
	_marker setMarkerColorLocal "ColorYellow";
	_marker setMarkerSizeLocal [0.5, 0.5];
} forEach _iedList;
