_installationMarker =  "n_maint";
_installationNames = ["factory_1","factory_2","factory_3","factory_4"];

{
	_location = createLocation ["NameLocal",getMarkerPos _x,30,30];
	_location setText "Factory";
	[getMarkerPos _x, _installationMarker,"placeHolder",1] call twc_fnc_createSite;
}forEach _installationNames;