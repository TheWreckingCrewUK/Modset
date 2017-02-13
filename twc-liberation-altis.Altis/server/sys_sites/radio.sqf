_radioMarker = "loc_Transmitter";
_radioNames = ["radio_1","radio_2","radio_3","radio_4"];

{
	_location = createLocation ["NameLocal",getMarkerPos _x,30,30];
	_location setText "Radio Site";
	[_location, _radioMarker,"placeHolder",1] call twc_fnc_createSite;
}forEach _radioNames;