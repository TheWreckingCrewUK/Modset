//3CB vehicle ammo direct loading

	_veh = (getPos BAFVehiclePost) nearestObject 'UK3CB_BAF_Jackal2_L111A1_D';
	clearMagazineCargoGlobal _veh;
	_veh addMagazineCargoGlobal ["UK3CB_BAF_762_200Rnd_T", 7];
	_veh addMagazineCargoGlobal ["UK3CB_BAF_127_100Rnd", 7];
	
	_veh = (getPos BAFVehiclePost) nearestObject 'UK3CB_BAF_Jackal2_L134A1_D';
	clearMagazineCargoGlobal _veh;
	_veh addMagazineCargoGlobal ["UK3CB_BAF_762_200Rnd_T", 7];
	_veh addMagazineCargoGlobal ["UK3CB_BAF_32Rnd_40mm_G_Box", 7];
	
	_veh = (getPos BAFVehiclePost) nearestObject 'UK3CB_BAF_Coyote_Passenger_L111A1_D';
	clearMagazineCargoGlobal _veh;
	_veh addMagazineCargoGlobal ["UK3CB_BAF_762_200Rnd_T", 7];
	_veh addMagazineCargoGlobal ["UK3CB_BAF_127_100Rnd", 7];
	
	_veh = (getPos BAFVehiclePost) nearestObject 'UK3CB_BAF_Coyote_Passenger_L134A1_D';
	clearMagazineCargoGlobal _veh;
	_veh addMagazineCargoGlobal ["UK3CB_BAF_762_200Rnd_T", 7];
	_veh addMagazineCargoGlobal ["UK3CB_BAF_32Rnd_40mm_G_Box", 7];
	
	hint "Ammunition has been loaded in";