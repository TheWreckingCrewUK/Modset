params["_pos"];
	if (basemode == 0) then {
[_pos]spawn{
	sleep 300;
	_enemy = nearestObjects [(_this select 0), ["Man","WeaponHolder","GroundWeaponHolder"], 800];
	{
		if(alive _x) then{
			_enemy = _enemy - [_x];
		};
	}forEach _enemy;

	{
		deleteVehicle _x
	}forEach _enemy;

	{
		deleteGroup _x
	}forEach allGroups;
};
};