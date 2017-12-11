params["_unit"];
[_unit] spawn{
	_bluClose = 1;
	while{_bluClose == 1}do{
		_obj = nearestObjects [(_this select 0),["Man","Car","Truck"],400];
		{
			if(side _x == West)exitWith{
				_bluClose = 1
			};
			_bluClose = 0;
		}forEach _obj;
		sleep 60;
	};
	deleteVehicle (_this select 0);
};