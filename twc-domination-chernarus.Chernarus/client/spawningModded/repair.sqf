while {true} do{
	_veh = nearestObjects [getPos repairPad, ["AllVehicles"], 10];
	{_x setDamage 0; _x setFuel 1; _x setVehicleAmmo 1;} forEach _veh;
	sleep 5;
};