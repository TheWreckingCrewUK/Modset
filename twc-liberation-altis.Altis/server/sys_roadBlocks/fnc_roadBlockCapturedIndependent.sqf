params["_location","_dir"];

[_location,_dir] call twc_fnc_createRoadBlock;
[_location]spawn{
	_obj = nearestObjects [(_this select 0),["Man","Car","Truck","Tank","Static","StaticWeapon"],100];
	{
		deleteVehicle _x;
		sleep 1;
	}forEach _obj;
	{
		deleteGroup _x
	}forEach allGroups;
};