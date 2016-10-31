params["_location","_type","_markerstr"];

[_location,_type,_markerstr] call twc_fnc_createSite;
[_location]spawn{
	_obj = nearestObjects [(_this select 0),["Man","Car","Truck","Tank"],600];
	{
		deleteVehicle _x;
		sleep 1;
	}forEach _obj;
	{
		deleteGroup _x
	}forEach allGroups;
};