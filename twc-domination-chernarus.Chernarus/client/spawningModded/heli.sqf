
heliSpawner addAction ["Spawn Wilcat AH1",
	{_veh = nearestObject [getPos heliSpawnPad, "air"]; deleteVehicle _veh; _dir = getDir heliSpawnPad; _dir = _dir + 180; _veh = "UK3CB_BAF_Wildcat_AH1_CAS_8A" createVehicle (getPos heliSpawnpad); _veh setPos (getPos heliSpawnPad); _veh setDir _dir;

	_veh addEventHandler ["Fired", {
		if ((_this select 0) distance2D getMarkerPos "respawn_west" < 200 && Russiancheck == 0) then
		{
			deleteVehicle (_this select 6);
			titleText["No Firing at Base", "BLACK IN", 5];
		};
	}];

	[_veh, 60, 120, 0, FALSE] execVM "server\vehicles\vehicleRespawn.sqf"},[],0,true,false,"",""];
	
heliSpawner addAction ["Spawn UH60M Blackhawk",
	{_veh = nearestObject [getPos heliSpawnPad, "air"]; deleteVehicle _veh; _dir = getDir heliSpawnPad; _dir = _dir + 180; _veh = "RHS_UH60M" createVehicle (getPos heliSpawnpad); _veh setPos (getPos heliSpawnPad); _veh setDir _dir;

	_veh addEventHandler ["Fired", {
		if ((_this select 0) distance2D getMarkerPos "respawn_west" < 200 && Russiancheck == 0) then
		{
			deleteVehicle (_this select 6);
			titleText["No Firing at Base", "BLACK IN", 5];
		};
	}];

	[_veh, 60, 120, 0, FALSE] execVM "server\vehicles\vehicleRespawn.sqf"},[],0,true,false,"",""];