//reset your own Markers
_ownArray = player getVariable ["twc_map_hiddenMarkers",[]];
{
	(_x select 0) setMarkerAlphaLocal (_x select 1);
}forEach _ownArray;

//delete the borrowed markers
_mapOwnerMarkers = player getVariable ["twc_map_borrowedMarkers",[]];
{
	deleteMarkerLocal _x; 
}forEach _mapOwnerMarkers;

//resets who you borrowed from
player setVariable ["twc_map_borrowedMarkers",[]];
player setVariable ["twc_map_hiddenMarkers",[]];