
heliSpawner addAction ["Spawn A-164 Wipeout",
	{_veh = nearestObject [getPos heliSpawnPad, "air"]; deleteVehicle _veh; _dir = getDir heliSpawnPad; _dir = _dir + 180; _veh = "B_Plane_CAS_01_F" createVehicle (getPos heliSpawnpad); _veh setPos (getPos heliSpawnPad); _veh setDir _dir;

	_veh addEventHandler ["Fired", {
		if ((_this select 0) distance2D getMarkerPos "respawn_west" < 400 && Russiancheck == 0) then
		{
			deleteVehicle (_this select 6);
			titleText["No Firing at Base", "BLACK IN", 5];
		};
	}];

	[_veh, 60, 120, 0, FALSE] execVM "server\vehicles\vehicleRespawn.sqf"},[],0,true,false,"",""];