if (!isNil "armour1" && {player == armour1}) then {
	g_class = "armour_co";
	execVM "client\restrictModded\fullCrew.sqf";
	player addEventHandler ["Respawn", {
		execVM "client\restrictModded\fullCrew.sqf";
	}];
};
if (!isNil "armour2" && {player == armour2}) then {
	g_class = "armour_cr";
	execVM "client\restrictModded\fullCrew.sqf";
	player addEventHandler ["Respawn", {
		execVM "client\restrictModded\fullCrew.sqf";
	}];
};
if (!isNil "armour3" && {player == armour3}) then {
	g_class = "armour_cr";
	execVM "client\restrictModded\fullCrew.sqf";
	player addEventHandler ["Respawn", {
		execVM "client\restrictModded\fullCrew.sqf";
	}];
};
if (!isNil "helo1" && {player == helo1}) then {
	g_class = "helo";
	//Ammo Spawner UK
	ammoCrateSpawner addAction ["Spawn Small UK Ammobox",
	{nul = [] execVM "client\boxesmodded\crates\smallCrateUK.sqf";},[],0,true,false,"",""];
	//Ammo Spawner US
	ammoCrateSpawner addAction ["Spawn Small US Ammobox",
	{nul = [] execVM "client\boxesmodded\crates\smallCrateUS.sqf";},[],0,true,false,"",""];
	//Ammo Spawner USMC
	ammoCrateSpawner addAction ["Spawn Small USMC Ammobox",
	{nul = [] execVM "client\boxesmodded\crates\smallCrateUSMC.sqf";},[],0,true,false,"",""];
	//Large Ammo Spawner UK
	ammoCrateSpawner addAction ["Spawn Large UK Ammobox",
	{nul = [] execVM "client\boxesmodded\crates\largeCrateUK.sqf";},[],0,true,false,"",""];
	//Large Ammo Spawner US Army
	ammoCrateSpawner addAction ["Spawn Large US Ammobox",
	{nul = [] execVM "client\boxesmodded\crates\largeCrateUS.sqf";},[],0,true,false,"",""];
	//Large Ammo Spawner USMC
	ammoCrateSpawner addAction ["Spawn Large USMC Ammobox",
	{nul = [] execVM "client\boxesmodded\crates\largeCrateUSMC.sqf";},[],0,true,false,"",""];
	//Medical Supplies
	ammoCrateSpawner addAction ["Spawn Medical Supplies",
	{nul = [] execVM "client\boxesmodded\crates\smallMedical.sqf";},[],0,true,false,"",""];	
	//Vehicle Ammo
	ammoCrateSpawner addAction ["Spawn BAF Vehicle Ammo",
	{nul = [] execVM "client\boxesmodded\crates\3CBVehicleAmmo.sqf";},[],0,true,false,"",""];	
	//Mortar Spawner
	ammoCrateSpawner addAction ["Spawn Mortar",
	{nul = [] execVM "client\boxesmodded\crates\smallMortar.sqf";},[],0,true,false,"",""];
	//L7A2 Spawner
	ammoCrateSpawner addAction ["Spawn L7A2",
	{nul = [] execVM "client\boxesmodded\crates\staticGPMG.sqf";},[],0,true,false,"",""];
	//L111A1 Spawner
	ammoCrateSpawner addAction ["Spawn L111A1",
	{nul = [] execVM "client\boxesmodded\crates\staticL111A1.sqf";},[],0,true,false,"",""];
	//L134A1 Spawner
	ammoCrateSpawner addAction ["Spawn L134A1",
	{nul = [] execVM "client\boxesmodded\crates\staticL134A1.sqf";},[],0,true,false,"",""];
	//L16 Spawner
	ammoCrateSpawner addAction ["Spawn L16",
	{nul = [] execVM "client\boxesmodded\crates\staticL16.sqf";},[],0,true,false,"",""];
	//Box Clearer
	ammoCrateSpawner addAction ["Clear Boxes",
	{nul = [] execVM "client\boxesmodded\crates\clearboxes.sqf";},[],0,true,false,"",""];
	};
if (!isNil "helo2" && {player == helo2}) then {
	g_class = "helo2";
	//Ammo Spawner UK
	ammoCrateSpawner addAction ["Spawn Small UK Ammobox",
	{nul = [] execVM "client\boxesmodded\crates\smallCrateUK.sqf";},[],0,true,false,"",""];
	//Ammo Spawner US
	ammoCrateSpawner addAction ["Spawn Small US Ammobox",
	{nul = [] execVM "client\boxesmodded\crates\smallCrateUS.sqf";},[],0,true,false,"",""];
	//Ammo Spawner USMC
	ammoCrateSpawner addAction ["Spawn Small USMC Ammobox",
	{nul = [] execVM "client\boxesmodded\crates\smallCrateUSMC.sqf";},[],0,true,false,"",""];
	//Large Ammo Spawner UK
	ammoCrateSpawner addAction ["Spawn Large UK Ammobox",
	{nul = [] execVM "client\boxesmodded\crates\largeCrateUK.sqf";},[],0,true,false,"",""];
	//Large Ammo Spawner US Army
	ammoCrateSpawner addAction ["Spawn Large US Ammobox",
	{nul = [] execVM "client\boxesmodded\crates\largeCrateUS.sqf";},[],0,true,false,"",""];
	//Large Ammo Spawner USMC
	ammoCrateSpawner addAction ["Spawn Large USMC Ammobox",
	{nul = [] execVM "client\boxesmodded\crates\largeCrateUSMC.sqf";},[],0,true,false,"",""];
	//Medical Supplies
	ammoCrateSpawner addAction ["Spawn Medical Supplies",
	{nul = [] execVM "client\boxesmodded\crates\smallMedical.sqf";},[],0,true,false,"",""];	
	//Vehicle Ammo
	ammoCrateSpawner addAction ["Spawn BAF Vehicle Ammo",
	{nul = [] execVM "client\boxesmodded\crates\3CBVehicleAmmo.sqf";},[],0,true,false,"",""];	
	//Mortar Spawner
	ammoCrateSpawner addAction ["Spawn Mortar",
	{nul = [] execVM "client\boxesmodded\crates\smallMortar.sqf";},[],0,true,false,"",""];
	//L111A1 Spawner
	ammoCrateSpawner addAction ["Spawn M2",
	{nul = [] execVM "client\boxesmodded\crates\staticL111A1.sqf";},[],0,true,false,"",""];
	//L134A1 Spawner
	ammoCrateSpawner addAction ["Spawn GMG",
	{nul = [] execVM "client\boxesmodded\crates\staticL134A1.sqf";},[],0,true,false,"",""];
	//Box Clearer
	ammoCrateSpawner addAction ["Clear Boxes",
	{nul = [] execVM "client\boxesmodded\crates\clearboxes.sqf";},[],0,true,false,"",""];
};
if (!isNil "helo3" && {player == helo3}) then {
	g_class = "helo3";
	//Ammo Spawner UK
	ammoCrateSpawner addAction ["Spawn Small UK Ammobox",
	{nul = [] execVM "client\boxesmodded\crates\smallCrateUK.sqf";},[],0,true,false,"",""];
	//Ammo Spawner US
	ammoCrateSpawner addAction ["Spawn Small US Ammobox",
	{nul = [] execVM "client\boxesmodded\crates\smallCrateUS.sqf";},[],0,true,false,"",""];
	//Ammo Spawner USMC
	ammoCrateSpawner addAction ["Spawn Small USMC Ammobox",
	{nul = [] execVM "client\boxesmodded\crates\smallCrateUSMC.sqf";},[],0,true,false,"",""];
	//Large Ammo Spawner UK
	ammoCrateSpawner addAction ["Spawn Large UK Ammobox",
	{nul = [] execVM "client\boxesmodded\crates\largeCrateUK.sqf";},[],0,true,false,"",""];
	//Large Ammo Spawner US Army
	ammoCrateSpawner addAction ["Spawn Large US Ammobox",
	{nul = [] execVM "client\boxesmodded\crates\largeCrateUS.sqf";},[],0,true,false,"",""];
	//Large Ammo Spawner USMC
	ammoCrateSpawner addAction ["Spawn Large USMC Ammobox",
	{nul = [] execVM "client\boxesmodded\crates\largeCrateUSMC.sqf";},[],0,true,false,"",""];
	//Medical Supplies
	ammoCrateSpawner addAction ["Spawn Medical Supplies",
	{nul = [] execVM "client\boxesmodded\crates\smallMedical.sqf";},[],0,true,false,"",""];	
	//Vehicle Ammo
	ammoCrateSpawner addAction ["Spawn BAF Vehicle Ammo",
	{nul = [] execVM "client\boxesmodded\crates\3CBVehicleAmmo.sqf";},[],0,true,false,"",""];	
	//Mortar Spawner
	ammoCrateSpawner addAction ["Spawn Mortar",
	{nul = [] execVM "client\boxesmodded\crates\smallMortar.sqf";},[],0,true,false,"",""];
	//L111A1 Spawner
	ammoCrateSpawner addAction ["Spawn M2",
	{nul = [] execVM "client\boxesmodded\crates\staticL111A1.sqf";},[],0,true,false,"",""];
	//L134A1 Spawner
	ammoCrateSpawner addAction ["Spawn GMG",
	{nul = [] execVM "client\boxesmodded\crates\staticL134A1.sqf";},[],0,true,false,"",""];
	//Box Clearer
	ammoCrateSpawner addAction ["Clear Boxes",
	{nul = [] execVM "client\boxesmodded\crates\clearboxes.sqf";},[],0,true,false,"",""];
};
if (!isNil "jet1" && {player == jet1}) then {
	g_class = "jet";
	execVM "client\restrictModded\fullJet.sqf";
	player addEventHandler ["Respawn", {
		execVM "client\restrictModded\fullJet.sqf";
	}];
};
if (!isNil "jtac1" && {player == jtac1}) then {
	g_class = "jtac";
	execVM "client\restrictModded\fullJet.sqf";
	player addEventHandler ["Respawn", {
		execVM "client\restrictModded\fullJet.sqf";
	}];
};
if (!isNil "fac1" && {player == fac1}) then {
	g_class = "fac";
	execVM "client\restrictModded\fullJet.sqf";
	player addEventHandler ["Respawn", {
		execVM "client\restrictModded\fullJet.sqf";
	}];
};
if (!isNil "p1" && {player == p1}) then {
	g_class = "alpha_sl";
	//Ammo Spawner
	ammoCrateSpawner addAction ["Spawn Small Ammobox",
	{nul = [] execVM "client\boxesmodded\crates\smallCrateUK.sqf";},[],0,true,false,"",""];
	//Large Ammo Spawner
	ammoCrateSpawner addAction ["Spawn Large Ammobox",
	{nul = [] execVM "client\boxesmodded\crates\largeCrateUK.sqf";},[],0,true,false,"",""];
	//Vehicle Ammo
	ammoCrateSpawner addAction ["Spawn BAF Vehicle Ammo",
	{nul = [] execVM "client\boxesmodded\crates\3CBVehicleAmmo.sqf";},[],0,true,false,"",""];	
	//Mortar Spawner
	ammoCrateSpawner addAction ["Spawn Mortar",
	{nul = [] execVM "client\boxesmodded\crates\smallMortar.sqf";},[],0,true,false,"",""];
	//M32 Spawner
	ammoCrateSpawner addAction ["Spawn M32",
	{nul = [] execVM "client\boxesmodded\crates\smallM32.sqf";},[],0,true,false,"",""];
	//L7A2 Spawner
	ammoCrateSpawner addAction ["Spawn L7A2",
	{nul = [] execVM "client\boxesmodded\crates\staticGPMG.sqf";},[],0,true,false,"",""];
	//L111A1 Spawner
	ammoCrateSpawner addAction ["Spawn L111A1",
	{nul = [] execVM "client\boxesmodded\crates\staticL111A1.sqf";},[],0,true,false,"",""];
	//L134A1 Spawner
	ammoCrateSpawner addAction ["Spawn L134A1",
	{nul = [] execVM "client\boxesmodded\crates\staticL134A1.sqf";},[],0,true,false,"",""];
	//Box Clearer
	ammoCrateSpawner addAction ["Clear Boxes",
	{nul = [] execVM "client\boxesmodded\crates\clearboxes.sqf";},[],0,true,false,"",""];
};
if (!isNil "p2" && {player == p2}) then {
	g_class = "alpha_rf";
};
if (!isNil "p3" && {player == p3}) then {
	g_class = "alpha_grn";
};
if (!isNil "p4" && {player == p4}) then {
	g_class = "alpha_ar";
};
if (!isNil "p5" && {player == p5}) then {
	g_class = "alpha_2ic";
	//Ammo Spawner
	ammoCrateSpawner addAction ["Spawn Small Ammobox",
	{nul = [] execVM "client\boxesmodded\crates\smallCrateUK.sqf";},[],0,true,false,"",""];
	//Mortar Spawner
	ammoCrateSpawner addAction ["Spawn Mortar",
	{nul = [] execVM "client\boxesmodded\crates\smallMortar.sqf";},[],0,true,false,"",""];
	//Vehicle Ammo
	ammoCrateSpawner addAction ["Spawn BAF Vehicle Ammo",
	{nul = [] execVM "client\boxesmodded\crates\3CBVehicleAmmo.sqf";},[],0,true,false,"",""];	
	//M32 Spawner
	ammoCrateSpawner addAction ["Spawn M32",
	{nul = [] execVM "client\boxesmodded\crates\smallM32.sqf";},[],0,true,false,"",""];
	//L7A2 Spawner
	ammoCrateSpawner addAction ["Spawn L7A2",
	{nul = [] execVM "client\boxesmodded\crates\staticGPMG.sqf";},[],0,true,false,"",""];
	//L111A1 Spawner
	ammoCrateSpawner addAction ["Spawn L111A1",
	{nul = [] execVM "client\boxesmodded\crates\staticL111A1.sqf";},[],0,true,false,"",""];
	//L134A1 Spawner
	ammoCrateSpawner addAction ["Spawn L134A1",
	{nul = [] execVM "client\boxesmodded\crates\staticL134A1.sqf";},[],0,true,false,"",""];
	//Box Clearer
	ammoCrateSpawner addAction ["Clear Boxes",
	{nul = [] execVM "client\boxesmodded\crates\clearboxes.sqf";},[],0,true,false,"",""];
};
if (!isNil "p6" && {player == p6}) then {
	g_class = "alpha_mg";
};
if (!isNil "p7" && {player == p7}) then {
	g_class = "alpha_mark";
};
if (!isNil "p8" && {player == p8}) then {
	g_class = "alpha_med";
	//Medical Supplies
	ammoCrateSpawner addAction ["Spawn Medical Supplies",
	{nul = [] execVM "client\boxesmodded\crates\smallMedical.sqf";},[],0,true,false,"",""];
	//Box Clearer
	ammoCrateSpawner addAction ["Clear Boxes",
	{nul = [] execVM "client\boxesmodded\crates\clearboxes.sqf";},[],0,true,false,"",""];
};
if (!isNil "p9" && {player == p9}) then {
	g_class = "bravo_sl";
	//Ammo Spawner US
	ammoCrateSpawner addAction ["Spawn Small Ammobox",
	{nul = [] execVM "client\boxesmodded\crates\smallCrateUS.sqf";},[],0,true,false,"",""];
	//Large Ammo Spawner US Army
	ammoCrateSpawner addAction ["Spawn Large Ammobox",
	{nul = [] execVM "client\boxesmodded\crates\largeCrateUS.sqf";},[],0,true,false,"",""];
	//Mortar Spawner
	ammoCrateSpawner addAction ["Spawn Mortar",
	{nul = [] execVM "client\boxesmodded\crates\smallMortar.sqf";},[],0,true,false,"",""];
	//M32 Spawner
	ammoCrateSpawner addAction ["Spawn M32",
	{nul = [] execVM "client\boxesmodded\crates\smallM32.sqf";},[],0,true,false,"",""];
	//L111A1 Spawner
	ammoCrateSpawner addAction ["Spawn M2",
	{nul = [] execVM "client\boxesmodded\crates\staticL111A1.sqf";},[],0,true,false,"",""];
	//Box Clearer
	ammoCrateSpawner addAction ["Clear Boxes",
	{nul = [] execVM "client\boxesmodded\crates\clearboxes.sqf";},[],0,true,false,"",""];
};
if (!isNil "p10" && {player == p10}) then {
	g_class = "bravo_tl";
	//Ammo Spawner US
	ammoCrateSpawner addAction ["Spawn Small Ammobox",
	{nul = [] execVM "client\boxesmodded\crates\smallCrateUS.sqf";},[],0,true,false,"",""];
	//Mortar Spawner
	ammoCrateSpawner addAction ["Spawn Mortar",
	{nul = [] execVM "client\boxesmodded\crates\smallMortar.sqf";},[],0,true,false,"",""];
	//L111A1 Spawner
	ammoCrateSpawner addAction ["Spawn M2",
	{nul = [] execVM "client\boxesmodded\crates\staticL111A1.sqf";},[],0,true,false,"",""];
	//Box Clearer
	ammoCrateSpawner addAction ["Clear Boxes",
	{nul = [] execVM "client\boxesmodded\crates\clearboxes.sqf";},[],0,true,false,"",""];
};
if (!isNil "p11" && {player == p11}) then {
	g_class = "bravo_rf";
};
if (!isNil "p12" && {player == p12}) then {
	g_class = "bravo_grn";
};
if (!isNil "p13" && {player == p13}) then {
	g_class = "bravo_ar";
};
if (!isNil "p14" && {player == p14}) then {
	g_class = "bravo_tl";
	//Ammo Spawner US
	ammoCrateSpawner addAction ["Spawn Small Ammobox",
	{nul = [] execVM "client\boxesmodded\crates\smallCrateUS.sqf";},[],0,true,false,"",""];
	//Mortar Spawner
	ammoCrateSpawner addAction ["Spawn Mortar",
	{nul = [] execVM "client\boxesmodded\crates\smallMortar.sqf";},[],0,true,false,"",""];
	//L111A1 Spawner
	ammoCrateSpawner addAction ["Spawn M2",
	{nul = [] execVM "client\boxesmodded\crates\staticL111A1.sqf";},[],0,true,false,"",""];
	//Box Clearer
	ammoCrateSpawner addAction ["Clear Boxes",
	{nul = [] execVM "client\boxesmodded\crates\clearboxes.sqf";},[],0,true,false,"",""];
};
if (!isNil "p15" && {player == p15}) then {
	g_class = "bravo_ar";
};
if (!isNil "p16" && {player == p16}) then {
	g_class = "bravo_mark";
};
if (!isNil "p17" && {player == p17}) then {
	g_class = "bravo_med";
	//Medical Supplies
	ammoCrateSpawner addAction ["Spawn Medical Supplies",
	{nul = [] execVM "client\boxesmodded\crates\smallMedical.sqf";},[],0,true,false,"",""];
	//Box Clearer
	ammoCrateSpawner addAction ["Clear Boxes",
	{nul = [] execVM "client\boxesmodded\crates\clearboxes.sqf";},[],0,true,false,"",""];
};
if (!isNil "p18" && {player == p18}) then {
	g_class = "charlie_sl";
	//Ammo Spawner USMC
	ammoCrateSpawner addAction ["Spawn Small Ammobox",
	{nul = [] execVM "client\boxesmodded\crates\smallCrateUSMC.sqf";},[],0,true,false,"",""];
	//Large Ammo Spawner USMC
	ammoCrateSpawner addAction ["Spawn Large Ammobox",
	{nul = [] execVM "client\boxesmodded\crates\largeCrateUSMC.sqf";},[],0,true,false,"",""];
	//Mortar Spawner
	ammoCrateSpawner addAction ["Spawn Mortar",
	{nul = [] execVM "client\boxesmodded\crates\smallMortar.sqf";},[],0,true,false,"",""];
	//M32 Spawner
	ammoCrateSpawner addAction ["Spawn M32",
	{nul = [] execVM "client\boxesmodded\crates\smallM32.sqf";},[],0,true,false,"",""];
	//L111A1 Spawner
	ammoCrateSpawner addAction ["Spawn M2",
	{nul = [] execVM "client\boxesmodded\crates\staticL111A1.sqf";},[],0,true,false,"",""];
	//L134A1 Spawner
	ammoCrateSpawner addAction ["Spawn GMG",
	{nul = [] execVM "client\boxesmodded\crates\staticL134A1.sqf";},[],0,true,false,"",""];
	//Box Clearer
	ammoCrateSpawner addAction ["Clear Boxes",
	{nul = [] execVM "client\boxesmodded\crates\clearboxes.sqf";},[],0,true,false,"",""];
};
if (!isNil "p19" && {player == p19}) then {
	g_class = "charlie_tl";
	//Ammo Spawner USMC
	ammoCrateSpawner addAction ["Spawn Small Ammobox",
	{nul = [] execVM "client\boxesmodded\crates\smallCrateUSMC.sqf";},[],0,true,false,"",""];
	//M32 Spawner
	ammoCrateSpawner addAction ["Spawn M32",
	{nul = [] execVM "client\boxesmodded\crates\smallM32.sqf";},[],0,true,false,"",""];
	//L111A1 Spawner
	ammoCrateSpawner addAction ["Spawn M2",
	{nul = [] execVM "client\boxesmodded\crates\staticL111A1.sqf";},[],0,true,false,"",""];
	//L134A1 Spawner
	ammoCrateSpawner addAction ["Spawn GMG",
	{nul = [] execVM "client\boxesmodded\crates\staticL134A1.sqf";},[],0,true,false,"",""];
	//Box Clearer
	ammoCrateSpawner addAction ["Clear Boxes",
	{nul = [] execVM "client\boxesmodded\crates\clearboxes.sqf";},[],0,true,false,"",""];
};
if (!isNil "p20" && {player == p20}) then {
	g_class = "charlie_rf";
};
if (!isNil "p21" && {player == p21}) then {
	g_class = "charlie_ar";
};
if (!isNil "p22" && {player == p22}) then {
	g_class = "charlie_aar";
};
if (!isNil "p23" && {player == p23}) then {
	g_class = "charlie_tl";
	//Ammo Spawner USMC
	ammoCrateSpawner addAction ["Spawn Small Ammobox",
	{nul = [] execVM "client\boxesmodded\crates\smallCrateUSMC.sqf";},[],0,true,false,"",""];
	//M32 Spawner
	ammoCrateSpawner addAction ["Spawn M32",
	{nul = [] execVM "client\boxesmodded\crates\smallM32.sqf";},[],0,true,false,"",""];
	//L111A1 Spawner
	ammoCrateSpawner addAction ["Spawn M2",
	{nul = [] execVM "client\boxesmodded\crates\staticL111A1.sqf";},[],0,true,false,"",""];
	//L134A1 Spawner
	ammoCrateSpawner addAction ["Spawn GMG",
	{nul = [] execVM "client\boxesmodded\crates\staticL134A1.sqf";},[],0,true,false,"",""];
	//Box Clearer
	ammoCrateSpawner addAction ["Clear Boxes",
	{nul = [] execVM "client\boxesmodded\crates\clearboxes.sqf";},[],0,true,false,"",""];
};
if (!isNil "p24" && {player == p24}) then {
	g_class = "charlie_rf";
};
if (!isNil "p25" && {player == p25}) then {
	g_class = "charlie_ar";
};
if (!isNil "p26" && {player == p26}) then {
	g_class = "charlie_aar";
};
if (!isNil "p27" && {player == p27}) then {
	g_class = "charlie_tl";
	//Ammo Spawner USMC
	ammoCrateSpawner addAction ["Spawn Small Ammobox",
	{nul = [] execVM "client\boxesmodded\crates\smallCrateUSMC.sqf";},[],0,true,false,"",""];
	//M32 Spawner
	ammoCrateSpawner addAction ["Spawn M32",
	{nul = [] execVM "client\boxesmodded\crates\smallM32.sqf";},[],0,true,false,"",""];
	//L111A1 Spawner
	ammoCrateSpawner addAction ["Spawn M2",
	{nul = [] execVM "client\boxesmodded\crates\staticL111A1.sqf";},[],0,true,false,"",""];
	//L134A1 Spawner
	ammoCrateSpawner addAction ["Spawn GMG",
	{nul = [] execVM "client\boxesmodded\crates\staticL134A1.sqf";},[],0,true,false,"",""];
	//Box Clearer
	ammoCrateSpawner addAction ["Clear Boxes",
	{nul = [] execVM "client\boxesmodded\crates\clearboxes.sqf";},[],0,true,false,"",""];
};
if (!isNil "p28" && {player == p28}) then {
	g_class = "charlie_mg";
};
if (!isNil "p29" && {player == p29}) then {
	g_class = "charlie_mgass";
};
if (!isNil "p30" && {player == p30}) then {
	g_class = "charlie_med";
	//Medical Supplies
	ammoCrateSpawner addAction ["Spawn Medical Supplies",
	{nul = [] execVM "client\boxesmodded\crates\smallMedical.sqf";},[],0,true,false,"",""];
	//Box Clearer
	ammoCrateSpawner addAction ["Clear Boxes",
	{nul = [] execVM "client\boxesmodded\crates\clearboxes.sqf";},[],0,true,false,"",""];
};

twc_fnc_vehicleRepair = compile preprocessfilelinenumbers "client\boxesModded\fnc_vehicleRepair.sqf";

//Action at repairpoint
ammoCrateSpawner addAction ["Repair/Rearm/Refuel Vehicle",
	{[] execVM  "client\boxesModded\fnc_vehicleRepair.sqf"},[],0,true,false,"",""];

execVM "client\boxesModded\crates\init.sqf";

_name = name player;
_text = format["%1 joined in as %2",_name,g_class];
[TWCServer,_text] remoteExec ["twc_fnc_globalChat", 2]; 

if (g_class != "") then {
	execVM format["client\boxesModded\loadout\%1.sqf", g_class];
};