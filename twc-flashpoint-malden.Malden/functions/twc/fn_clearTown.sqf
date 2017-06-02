params["_location"];
_name = nearestLocation [_location,""];
[_location,_name]spawn{
	_obj = nearestObjects [(_this select 0),["Man","Car","Truck","Tank"],600];
	{
		deleteVehicle _x;
		sleep 0.25;
	}forEach _obj;
	{
		deleteGroup _x
	}forEach allGroups;
};