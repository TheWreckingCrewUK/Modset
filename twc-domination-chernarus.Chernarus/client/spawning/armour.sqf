
armourSpawner addAction ["Spawn AMV-7 Marshall",
	{_veh = nearestObject [getPos armourSpawnPad, "LandVehicle"]; deleteVehicle _veh; _dir = getDir armourSpawnPad; _dir = _dir + 180; _veh = "B_APC_Wheeled_01_cannon_F" createVehicle (getPos armourSpawnpad); _veh setDir _dir;
	
	_veh addEventHandler ["Fired", {
		if ((_this select 0) distance2D getMarkerPos "respawn_west" < 200 && Russiancheck == 0) then
		{
			deleteVehicle (_this select 6);
			titleText["No Firing at Base", "BLACK IN", 5];
		};
	}];
	
	[_veh, 60, 120, 0, FALSE] execVM "server\vehicles\vehicleRespawn.sqf"},[],0,true,false,"",""];
	
armourSpawner addAction ["Spawn M2A4 Slammer UP",
	{_veh = nearestObject [getPos armourSpawnPad, "LandVehicle"]; deleteVehicle _veh; _dir = getDir armourSpawnPad; _dir = _dir + 180; _veh = "B_MBT_01_TUSK_F" createVehicle (getPos armourSpawnpad); _veh setPos (getPos armourSpawnPad); _veh setDir _dir;

	_veh addEventHandler ["Fired", {
		if ((_this select 0) distance2D getMarkerPos "respawn_west" < 200 && Russiancheck == 0) then
		{
			deleteVehicle (_this select 6);
			titleText["No Firing at Base", "BLACK IN", 5];
		};
	}];

	[_veh, 60, 120, 0, FALSE] execVM "server\vehicles\vehicleRespawn.sqf"},[],0,true,false,"",""];