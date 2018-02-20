OpenMap [true, false]; 

_friendlyGroups = []; 

{
	if (!((group _x) in _friendlyGroups)) then {
		_friendlyGroups pushback (group _x);
	};
} forEach allPlayers;

leaderMarkers = []; 

{
	_markerText = groupId _x; 

	if (!((leader _x) in (leader _x))) then {
		_markerText = _markerText + " (Mounted)";
	};

	_markerstr = createMarkerLocal [name (leader _x) + str random 1000, getPos (leader _x)];
	_markerstr setMarkerShapeLocal "ICON";
	_markerstr setMarkerTypeLocal "mil_triangle";
	_markerstr setMarkerDirLocal (getDir (leader _x));
	_markerstr setMarkerTextLocal _markerText;
	leaderMarkers pushback _markerstr;
} forEach _friendlyGroups;

[] spawn {
	waitUntil { !visibleMap };
	{ deleteMarkerLocal _x; } forEach leaderMarkers;
};