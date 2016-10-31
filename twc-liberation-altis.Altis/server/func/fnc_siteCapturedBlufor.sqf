params["_location","_type","_markerstr"];
_markerstr setMarkerColor "ColorWest";
_town = nearestLocation [_location,""];
_town = text _town;
[_location,_town]spawn{
	sleep 5;
	[_this select 0] call twc_fnc_collectWeapons;
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
	_obj = nearestObjects [(_this select 0),["Man","Car","Truck","Tank"],600];
	{
		if(isNil {_x getVariable "unitsHome"} || typename (_x getVariable "unitsHome") == "ARRAY")then{
		
		}else{
			if((_x getVariable "unitsHome") == (_this select 1))then{
				deleteVehicle _x;
				sleep 1;
			};
		};
	}forEach _obj;
	{
		deleteGroup _x
	}forEach allGroups;
};