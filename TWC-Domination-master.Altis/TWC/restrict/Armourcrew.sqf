if (player in [p34,p35,p36])then{
	while {true} do{
		_ArmourVeh = nearestObjects [getmarkerpos "respawn_west", ["RHS_M2A3_BUSKIII_wd"], 1000];
		_ArmourCrew = nearestObjects [getmarkerpos "respawn_west", ["Man"], 500];
		{
			if ((isNil "P34") or (isNil "P35")or (isNil "P36")) then{
			
			};
				
		sleep 1;
	};
}