
armourSpawner addAction ["Spawn M2A2 Bradley",
	{_veh = nearestObject [getPos armourSpawnPad, "LandVehicle"]; deleteVehicle _veh; _dir = getDir armourSpawnPad; _dir = _dir + 180; _veh = "RHS_M2A3_BuskIII_WD" createVehicle (getPos armourSpawnpad); _veh setDir _dir;
	
	_veh addEventHandler ["Fired", {
		if ((_this select 0) distance2D getMarkerPos "respawn_west" < 200 && Russiancheck == 0) then
		{
			deleteVehicle (_this select 6);
			titleText["No Firing at Base", "BLACK IN", 5];
		};
	}];
	
	[_veh, 60, 120, 0, FALSE] execVM "server\vehicles\vehicleRespawn.sqf"},[],0,true,false,"",""];
	
armourSpawner addAction ["Spawn M1A2 Abrams",
	{_veh = nearestObject [getPos armourSpawnPad, "LandVehicle"]; deleteVehicle _veh; _dir = getDir armourSpawnPad; _dir = _dir + 180; _veh = "rhsusf_m1a2sep1tuskiwd_usarmy" createVehicle (getPos armourSpawnpad); _veh setPos (getPos armourSpawnPad); _veh setDir _dir;

	_veh addEventHandler ["Fired", {
		if ((_this select 0) distance2D getMarkerPos "respawn_west" < 200 && Russiancheck == 0) then
		{
			deleteVehicle (_this select 6);
			titleText["No Firing at Base", "BLACK IN", 5];
		};
	}];

	[_veh, 60, 120, 0, FALSE] execVM "server\vehicles\vehicleRespawn.sqf"},[],0,true,false,"",""];