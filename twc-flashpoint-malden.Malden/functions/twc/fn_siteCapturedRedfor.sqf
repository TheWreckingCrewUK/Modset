params["_marker"];

[_marker] call twc_fnc_createSite;
{
	deleteVehicle _x;
	sleep 0.1;
	
}forEach (nearestObjects [(getMarkerPos _marker),["man","Car","Tank","Boat"],600]);

{
	deleteGroup _x
}forEach allGroups;