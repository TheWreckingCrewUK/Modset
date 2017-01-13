_addedLocations = ["gasStation","MarinaSouth","KaminoNorth","kamino","jaycove"];

{
	_location = createLocation ["nameVillage",getMarkerPos _x,30,30];
	_location setText _x;
}forEach _addedLocations;