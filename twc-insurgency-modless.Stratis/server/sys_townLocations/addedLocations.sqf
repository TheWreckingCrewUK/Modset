/*
* Creates extra locations in order to fill out the map more. To add or remove just simply edit the 
* _addedLocations array
* 
* It get the location off of a marker by the same name so add a marker then add to array
*/

_addedLocations = ["gasStation","MarinaSouth","KaminoNorth","kamino","jaycove"];

{
	_location = createLocation ["nameVillage",getMarkerPos _x,30,30];
	_location setText _x;
}forEach _addedLocations;