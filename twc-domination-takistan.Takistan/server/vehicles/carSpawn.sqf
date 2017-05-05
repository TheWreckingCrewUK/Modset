_dir = 0;
if(whatMap == "Altis")then{_dir = 136.25};
if(whatMap == "Sahrani")then{_dir = 0};
if(whatMap == "Chernarus")then{_dir = 240};
if(whatMap == "Staszow")then{_dir = 330};
if(whatMap == "Takistan")then{_dir = 150};
_abandenTime = 1800;
_deadTime = 120;

if(isModded == 0)then{

	_veh1 = "B_MRAP_01_F" createVehicle (getMarkerPos "veh1");
	_veh1 setdir _dir;
	clearItemCargoGlobal _veh1;
	clearMagazineCargoGlobal _veh1;
	clearWeaponCargoGlobal _veh1;
	clearBackpackCargoGlobal _veh1;
	[_veh1, _deadTime, _abandenTime, -1, FALSE] execVM "server\vehicles\vehicleRespawn.sqf";
	
	_veh2 = "B_MRAP_01_F" createVehicle (getMarkerPos "veh2");
	_veh2 setdir _dir;
	clearItemCargoGlobal _veh2;
	clearMagazineCargoGlobal _veh2;
	clearWeaponCargoGlobal _veh2;
	clearBackpackCargoGlobal _veh2;
	[_veh2, _deadTime, _abandenTime, -1, FALSE] execVM "server\vehicles\vehicleRespawn.sqf";
	
	_veh3 = "B_MRAP_01_hmg_F" createVehicle (getMarkerPos "veh3");
	_veh3 setdir _dir;
	clearItemCargoGlobal _veh3;
	clearMagazineCargoGlobal _veh3;
	clearWeaponCargoGlobal _veh3;
	clearBackpackCargoGlobal _veh3;
	[_veh3, _deadTime, _abandenTime, -1, FALSE] execVM "server\vehicles\vehicleRespawn.sqf";
	
	_veh4 = "B_MRAP_01_hmg_F" createVehicle (getMarkerPos "veh4");
	_veh4 setdir _dir;
	clearItemCargoGlobal _veh4;
	clearMagazineCargoGlobal _veh4;
	clearWeaponCargoGlobal _veh4;
	clearBackpackCargoGlobal _veh4;
	[_veh4, _deadTime, _abandenTime, -1, FALSE] execVM "server\vehicles\vehicleRespawn.sqf";
	
	_veh5 = "B_MRAP_01_gmg_F" createVehicle (getMarkerPos "veh5");
	_veh5 setdir _dir;
	clearItemCargoGlobal _veh5;
	clearMagazineCargoGlobal _veh5;
	clearWeaponCargoGlobal _veh5;
	clearBackpackCargoGlobal _veh5;
	[_veh5, _deadTime, _abandenTime, -1, FALSE] execVM "server\vehicles\vehicleRespawn.sqf";
	
	_veh6 = "B_MRAP_01_gmg_F" createVehicle (getMarkerPos "veh6");
	_veh6 setdir _dir;
	clearItemCargoGlobal _veh6;
	clearMagazineCargoGlobal _veh6;
	clearWeaponCargoGlobal _veh6;
	clearBackpackCargoGlobal _veh6;
	[_veh6, _deadTime, _abandenTime, -1, FALSE] execVM "server\vehicles\vehicleRespawn.sqf";
	
	_veh7 = "B_APC_Tracked_01_rcws_F" createVehicle (getMarkerPos "veh7");
	_veh7 setdir _dir;
	clearItemCargoGlobal _veh7;
	clearMagazineCargoGlobal _veh7;
	clearWeaponCargoGlobal _veh7;
	clearBackpackCargoGlobal _veh7;
	[_veh7, _deadTime, _abandenTime, -1, FALSE] execVM "server\vehicles\vehicleRespawn.sqf";
	
	_veh8 = "B_APC_Tracked_01_rcws_F" createVehicle (getMarkerPos "veh8");
	_veh8 setdir _dir;
	clearItemCargoGlobal _veh8;
	clearMagazineCargoGlobal _veh8;
	clearWeaponCargoGlobal _veh8;
	clearBackpackCargoGlobal _veh8;
	[_veh8, _deadTime, _abandenTime, -1, FALSE] execVM "server\vehicles\vehicleRespawn.sqf";
	
	_veh15 = "B_Truck_01_Repair_F" createVehicle (getMarkerPos "veh15");
	_veh15 setdir 60;
	clearItemCargoGlobal _veh15;
	clearMagazineCargoGlobal _veh15;
	clearWeaponCargoGlobal _veh15;
	clearBackpackCargoGlobal _veh15;
	[_veh15, _deadTime, _abandenTime, -1, FALSE] execVM "server\vehicles\vehicleRespawn.sqf";
	
	_veh16 = "B_Truck_01_Fuel_F" createVehicle (getMarkerPos "veh16");
	_veh16 setdir 60;
	clearItemCargoGlobal _veh16;
	clearMagazineCargoGlobal _veh16;
	clearWeaponCargoGlobal _veh16;
	clearBackpackCargoGlobal _veh16;
	[_veh16, _deadTime, _abandenTime, -1, FALSE] execVM "server\vehicles\vehicleRespawn.sqf";
	
	_veh17 = "B_Truck_01_Ammo_F" createVehicle (getMarkerPos "veh17");
	_veh17 setdir 60;
	clearItemCargoGlobal _veh17;
	clearMagazineCargoGlobal _veh17;
	clearWeaponCargoGlobal _veh17;
	clearBackpackCargoGlobal _veh17;
	[_veh17, _deadTime, _abandenTime, -1, FALSE] execVM "server\vehicles\vehicleRespawn.sqf";
};

if(isModded == 1)then{

	_veh1 = "UK3CB_BAF_LandRover_Hard_Green_B" createVehicle (getMarkerPos "veh1");
	_veh1 setdir _dir;
	clearItemCargoGlobal _veh1;
	clearMagazineCargoGlobal _veh1;
	clearWeaponCargoGlobal _veh1;
	clearBackpackCargoGlobal _veh1;
	[_veh1, _deadTime, _abandenTime, -1, FALSE] execVM "server\vehicles\vehicleRespawn.sqf";
	
	_veh2 = "UK3CB_BAF_LandRover_Hard_FFR_Green_B" createVehicle (getMarkerPos "veh2");
	_veh2 setdir _dir;
	clearItemCargoGlobal _veh2;
	clearMagazineCargoGlobal _veh2;
	clearWeaponCargoGlobal _veh2;
	clearBackpackCargoGlobal _veh2;
	[_veh2, _deadTime, _abandenTime, -1, FALSE] execVM "server\vehicles\vehicleRespawn.sqf";
	
	_veh3 = "UK3CB_BAF_Jackal2_L2A1_W" createVehicle (getMarkerPos "veh3");
	_veh3 setdir _dir;
	clearItemCargoGlobal _veh3;
	clearMagazineCargoGlobal _veh3;
	clearWeaponCargoGlobal _veh3;
	clearBackpackCargoGlobal _veh3;
	[_veh3, _deadTime, _abandenTime, -1, FALSE] execVM "server\vehicles\vehicleRespawn.sqf";
	
	_veh4 = "UK3CB_BAF_Jackal2_GMG_W" createVehicle (getMarkerPos "veh4");
	_veh4 setdir _dir;
	clearItemCargoGlobal _veh4;
	clearMagazineCargoGlobal _veh4;
	clearWeaponCargoGlobal _veh4;
	clearBackpackCargoGlobal _veh4;
	[_veh4, _deadTime, _abandenTime, -1, FALSE] execVM "server\vehicles\vehicleRespawn.sqf";
	
	_veh5 = "rhsusf_m1025_w_m2" createVehicle (getMarkerPos "veh5");
	_veh5 setdir _dir;
	clearItemCargoGlobal _veh5;
	clearMagazineCargoGlobal _veh5;
	clearWeaponCargoGlobal _veh5;
	clearBackpackCargoGlobal _veh5;
	[_veh5, _deadTime, _abandenTime, -1, FALSE] execVM "server\vehicles\vehicleRespawn.sqf";
	
	_veh6 = "rhsusf_m1025_w_m2" createVehicle (getMarkerPos "veh6");
	_veh6 setdir _dir;
	clearItemCargoGlobal _veh6;
	clearMagazineCargoGlobal _veh6;
	clearWeaponCargoGlobal _veh6;
	clearBackpackCargoGlobal _veh6;
	[_veh6, _deadTime, _abandenTime, -1, FALSE] execVM "server\vehicles\vehicleRespawn.sqf";
	
	_veh7 = "rhsusf_m1025_w_mk19" createVehicle (getMarkerPos "veh7");
	_veh7 setdir _dir;
	clearItemCargoGlobal _veh7;
	clearMagazineCargoGlobal _veh7;
	clearWeaponCargoGlobal _veh7;
	clearBackpackCargoGlobal _veh7;
	[_veh7, _deadTime, _abandenTime, -1, FALSE] execVM "server\vehicles\vehicleRespawn.sqf";
	
	_veh8 = "rhsusf_m1025_w_mk19" createVehicle (getMarkerPos "veh8");
	_veh8 setdir _dir;
	clearItemCargoGlobal _veh8;
	clearMagazineCargoGlobal _veh8;
	clearWeaponCargoGlobal _veh8;
	clearBackpackCargoGlobal _veh8;
	[_veh8, _deadTime, _abandenTime, -1, FALSE] execVM "server\vehicles\vehicleRespawn.sqf";
	
	_veh9 = "rhsusf_m113_usarmy" createVehicle (getMarkerPos "veh9");
	_veh9 setdir _dir;
	clearItemCargoGlobal _veh9;
	clearMagazineCargoGlobal _veh9;
	clearWeaponCargoGlobal _veh9;
	clearBackpackCargoGlobal _veh9;
	[_veh9, _deadTime, _abandenTime, -1, FALSE] execVM "server\vehicles\vehicleRespawn.sqf";
	
	_veh10 = "rhsusf_m113_usarmy_MK19" createVehicle (getMarkerPos "veh10");
	_veh10 setdir _dir;
	clearItemCargoGlobal _veh10;
	clearMagazineCargoGlobal _veh10;
	clearWeaponCargoGlobal _veh10;
	clearBackpackCargoGlobal _veh10;
	[_veh10, _deadTime, _abandenTime, -1, FALSE] execVM "server\vehicles\vehicleRespawn.sqf";
	
	_veh11 = "rhsusf_rg33_m2_usmc_wd" createVehicle (getMarkerPos "veh11");
	_veh11 setdir _dir;
	clearItemCargoGlobal _veh11;
	clearMagazineCargoGlobal _veh11;
	clearWeaponCargoGlobal _veh11;
	clearBackpackCargoGlobal _veh11;
	[_veh11, _deadTime, _abandenTime, -1, FALSE] execVM "server\vehicles\vehicleRespawn.sqf";
	
	_veh12 = "rhsusf_rg33_m2_usmc_wd" createVehicle (getMarkerPos "veh12");
	_veh12 setdir _dir;
	clearItemCargoGlobal _veh12;
	clearMagazineCargoGlobal _veh12;
	clearWeaponCargoGlobal _veh12;
	clearBackpackCargoGlobal _veh12;
	[_veh12, _deadTime, _abandenTime, -1, FALSE] execVM "server\vehicles\vehicleRespawn.sqf";
	
	_veh13 = "CUP_B_FV432_Bulldog_GB_W" createVehicle (getMarkerPos "veh13");
	_veh13 setdir _dir;
	clearItemCargoGlobal _veh13;
	clearMagazineCargoGlobal _veh13;
	clearWeaponCargoGlobal _veh13;
	clearBackpackCargoGlobal _veh13;
	[_veh13, _deadTime, _abandenTime, -1, FALSE] execVM "server\vehicles\vehicleRespawn.sqf";
	
	_veh14 = "CUP_B_FV432_Bulldog_GB_W" createVehicle (getMarkerPos "veh14");
	_veh14 setdir _dir;
	clearItemCargoGlobal _veh14;
	clearMagazineCargoGlobal _veh14;
	clearWeaponCargoGlobal _veh14;
	clearBackpackCargoGlobal _veh14;
	[_veh14, _deadTime, _abandenTime, -1, FALSE] execVM "server\vehicles\vehicleRespawn.sqf";
};

if(isModded == 2)then{

	_veh1 = "LIB_US_Willys_MB" createVehicle (getMarkerPos "veh1");
	_veh1 setdir _dir;
	clearItemCargoGlobal _veh1;
	clearMagazineCargoGlobal _veh1;
	clearWeaponCargoGlobal _veh1;
	clearBackpackCargoGlobal _veh1;
	[_veh1, _deadTime, _abandenTime, -1, FALSE] execVM "server\vehicles\vehicleRespawn.sqf";
	
	_veh2 = "LIB_US_Willys_MB" createVehicle (getMarkerPos "veh2");
	_veh2 setdir _dir;
	clearItemCargoGlobal _veh2;
	clearMagazineCargoGlobal _veh2;
	clearWeaponCargoGlobal _veh2;
	clearBackpackCargoGlobal _veh2;
	[_veh2, _deadTime, _abandenTime, -1, FALSE] execVM "server\vehicles\vehicleRespawn.sqf";
	
	_veh3 = "LIB_US_GMC_Tent" createVehicle (getMarkerPos "veh3");
	_veh3 setdir _dir;
	clearItemCargoGlobal _veh3;
	clearMagazineCargoGlobal _veh3;
	clearWeaponCargoGlobal _veh3;
	clearBackpackCargoGlobal _veh3;
	[_veh3, _deadTime, _abandenTime, -1, FALSE] execVM "server\vehicles\vehicleRespawn.sqf";
	
	_veh4 = "LIB_US_GMC_Tent" createVehicle (getMarkerPos "veh4");
	_veh4 setdir _dir;
	clearItemCargoGlobal _veh4;
	clearMagazineCargoGlobal _veh4;
	clearWeaponCargoGlobal _veh4;
	clearBackpackCargoGlobal _veh4;
	[_veh4, _deadTime, _abandenTime, -1, FALSE] execVM "server\vehicles\vehicleRespawn.sqf";
	
	_veh5 = "LIB_US_M3_Halftrack" createVehicle (getMarkerPos "veh5");
	_veh5 setdir _dir;
	clearItemCargoGlobal _veh5;
	clearMagazineCargoGlobal _veh5;
	clearWeaponCargoGlobal _veh5;
	clearBackpackCargoGlobal _veh5;
	[_veh5, _deadTime, _abandenTime, -1, FALSE] execVM "server\vehicles\vehicleRespawn.sqf";
	
	_veh6 = "LIB_US_M3_Halftrack" createVehicle (getMarkerPos "veh6");
	_veh6 setdir _dir;
	clearItemCargoGlobal _veh6;
	clearMagazineCargoGlobal _veh6;
	clearWeaponCargoGlobal _veh6;
	clearBackpackCargoGlobal _veh6;
	[_veh6, _deadTime, _abandenTime, -1, FALSE] execVM "server\vehicles\vehicleRespawn.sqf";
	
	_veh7 = "LIB_zis5v" createVehicle (getMarkerPos "veh7");
	_veh7 setdir _dir;
	clearItemCargoGlobal _veh7;
	clearMagazineCargoGlobal _veh7;
	clearWeaponCargoGlobal _veh7;
	clearBackpackCargoGlobal _veh7;
	[_veh7, _deadTime, _abandenTime, -1, FALSE] execVM "server\vehicles\vehicleRespawn.sqf";
	
	_veh8 = "LIB_zis5v" createVehicle (getMarkerPos "veh8");
	_veh8 setdir _dir;
	clearItemCargoGlobal _veh8;
	clearMagazineCargoGlobal _veh8;
	clearWeaponCargoGlobal _veh8;
	clearBackpackCargoGlobal _veh8;
	[_veh8, _deadTime, _abandenTime, -1, FALSE] execVM "server\vehicles\vehicleRespawn.sqf";
	
	_veh9 = "LIB_Sdkfz251_captured_FFV" createVehicle (getMarkerPos "veh9");
	_veh9 setdir _dir;
	clearItemCargoGlobal _veh9;
	clearMagazineCargoGlobal _veh9;
	clearWeaponCargoGlobal _veh9;
	clearBackpackCargoGlobal _veh9;
	[_veh9, _deadTime, _abandenTime, -1, FALSE] execVM "server\vehicles\vehicleRespawn.sqf";
	
	_veh10 = "LIB_Sdkfz251_captured_FFV" createVehicle (getMarkerPos "veh10");
	_veh10 setdir _dir;
	clearItemCargoGlobal _veh10;
	clearMagazineCargoGlobal _veh10;
	clearWeaponCargoGlobal _veh10;
	clearBackpackCargoGlobal _veh10;
	[_veh10, _deadTime, _abandenTime, -1, FALSE] execVM "server\vehicles\vehicleRespawn.sqf";
	
};