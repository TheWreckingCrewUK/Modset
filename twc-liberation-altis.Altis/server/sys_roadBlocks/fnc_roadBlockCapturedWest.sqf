params["_location"];

[_location]spawn{
	sleep 5;
	[_this select 0, 100] call twc_fnc_collectWeapons;
	_bluClose = 1;
	while{_bluClose == 1}do{
		_obj = nearestObjects [(_this select 0),["Man","Car","Truck","Tank"],600];
		{
			if(side _x == West)exitWith{
				_bluClose = 1
			};
			_bluClose = 0;
		}forEach _obj;
	};
	_obj = nearestObjects [(_this select 0),["Man","Car","Truck","Tank","Static","StaticWeapon"],100];
	{
		if(isNil {_x getVariable "unitsHome"})then{
		
		}else{
			if(str (_x getVariable "unitsHome") == str (_this select 0))then{
				deleteVehicle _x;
				sleep 1;
			};
		};
	}forEach _obj;
	{
		deleteGroup _x
	}forEach allGroups;
};