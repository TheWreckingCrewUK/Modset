_outpostMarker = "n_installation";
_outpostNames = ["outpost_1","outpost_2","outpost_3","outpost_4","outpost_5","outpost_6","outpost_7","outpost_8"];

{
	_location = createLocation ["NameLocal",getMarkerPos _x,30,30];
	_location setText "AAF Outpost";
	[getMarkerPos _x, _outpostMarker,"placeHolder",1] call twc_fnc_createSite;
}forEach _outpostNames;