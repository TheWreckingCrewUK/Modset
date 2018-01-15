// todo: THIS WHOLE ROTTEN THING ;)
openMap [true, false];

_friendlyGroups = [];

{
	if (!((group _x) in _friendlyGroups)) then {
		_friendlyGroups pushback (group _x);
	};
} forEach allPlayers;

_leaderMarkers = [];

{
	_markerText = groupId (group _x);
	
	if (!((leader _x) in (leader _x))) then {
		_markerText = _markerText + " (Mounted)";
	};
	
	_markerstr = createMarkerLocal [name (leader _x), getPos (leader _x)];
	_markerstr setMarkerShape "ICON";
	_markerstr setMarkerType "mil_triangle";
	_markerstr setMarkerDir (getDir (leader _x));
	_markerstr setMarkerText _markerText;
	_leaderMarkers pushback _markerstr;
} forEach _friendlyGroups;

waitUntil {!visibleMap};

{ deleteMarker _x; } forEach _leaderMarkers;