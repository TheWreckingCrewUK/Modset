params["_marker"];

_marker setMarkerColor "colorWest";

waitUntil{(west countSide (nearestObjects [(getMarkerPos _marker),["man","Car","Tank"],2000])) == 0};

{
	deleteVehicle _x;
	sleep 0.1;
	
}forEach (nearestObjects [(getMarkerPos _marker),["man","Car","Tank"],500]);

{
	deleteGroup _x
}forEach allGroups;
/*
if(getMarkerType _marker == "c_unknown")then{
	[_marker] call twc_fnc_createTown;
}else{
	[_marker] call twc_fnc_createBluforSite;
};