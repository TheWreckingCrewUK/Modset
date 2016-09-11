
heliSpawner addAction ["Spawn UH-80 Ghost Hawk",
	{_veh = nearestObject [getPos heliSpawnPad, "air"]; deleteVehicle _veh; _dir = getDir heliSpawnPad; _dir = _dir + 180; _veh = "B_heli_Transport_01_F" createVehicle (getPos heliSpawnpad); _veh setPos (getPos heliSpawnPad); _veh setDir _dir;

	_veh addEventHandler ["Fired", {
		if ((_this select 0) distance2D getMarkerPos "respawn_west" < 200 && Russiancheck == 0) then
		{
			deleteVehicle (_this select 6);
			titleText["No Firing at Base", "BLACK IN", 5];
		};
	}];

	[_veh, 60, 120, 0, FALSE] execVM "server\vehicles\vehicleRespawn.sqf"},[],0,true,false,"",""];
	
heliSpawner addAction ["Spawn CH-67 Huron",
	{_veh = nearestObject [getPos heliSpawnPad, "air"]; deleteVehicle _veh; _dir = getDir heliSpawnPad; _dir = _dir + 180; _veh = "B_Heli_Transport_03_F" createVehicle (getPos heliSpawnpad); _veh setPos (getPos heliSpawnPad); _veh setDir _dir;

	_veh addEventHandler ["Fired", {
		if ((_this select 0) distance2D getMarkerPos "respawn_west" < 200 && Russiancheck == 0) then
		{
			deleteVehicle (_this select 6);
			titleText["No Firing at Base", "BLACK IN", 5];
		};
	}];

	[_veh, 60, 120, 0, FALSE] execVM "server\vehicles\vehicleRespawn.sqf"},[],0,true,false,"",""];