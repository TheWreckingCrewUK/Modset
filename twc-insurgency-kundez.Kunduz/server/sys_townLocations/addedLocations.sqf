_addedLocations = ["Eastern_Chahar_Dara","Eastern_Gerdan","Eastern_Tanpeh","NorthEastern_Chahar_Dara","Northern_Kamar","NorthWestern_Kar_Shek","Southern_Darya_Yu","Southern_Gerdan","Southern_Tal_Gozar","Western_Chahar_Dara","Western_Tal_Gozar"];

{
	_location = createLocation ["nameVillage",getMarkerPos _x,30,30];
	_location setText _x;
}forEach _addedLocations;