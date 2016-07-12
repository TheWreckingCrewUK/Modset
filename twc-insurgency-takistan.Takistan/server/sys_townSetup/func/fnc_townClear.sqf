params["_marker"];
[_marker]spawn{
	sleep 300;
	{
		deleteVehicle _x
	}forEach allDead;

	_gear = nearestObjects [getMarkerPos (_this select 0), ["WeaponHolder","GroundWeaponHolder"], 500];
	{
		deleteVehicle _x
	}forEach _gear;
};