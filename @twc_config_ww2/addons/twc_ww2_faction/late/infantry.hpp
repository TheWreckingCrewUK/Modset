class WW2_British_Platoon_Commander: WW2_British_Base {
	scope = 2;
	displayName = "Platoon Commander";
	uniformClass = "fow_u_uk_bd40_01_lieutenant";
	backpack = "TWC_Backpack_WW2_SL";
	class EventHandlers: EventHandlers {
		init = "(_this select 0) setVariable [""twc_keepMap"",true]";
	};
	
	linkedItems[] = {
		"TWC_Vest_WW2_Officer",
		"fow_h_uk_mk3",
		"ItemMap",
		"ItemCompass",
		"ItemWatch"
	};
	
	respawnLinkedItems[] = {
		"TWC_Vest_WW2_Officer",
		"fow_h_uk_mk3",
		"ItemMap",
		"ItemCompass",
		"ItemWatch"
	};

	weapons[] = {
		"Throw",
		"Put",
		"Binocular",
		"fow_w_sten_mk2",
		"TWC_No1Mk3SignalGun"
	};

	respawnWeapons[] = {
		"Throw",
		"Put",
		"Binocular",
		"fow_w_sten_mk2",
		"TWC_No1Mk3SignalGun"
	};

	magazines[] = {
		"fow_32Rnd_9x19_sten",
		"fow_32Rnd_9x19_sten",
		"fow_32Rnd_9x19_sten",
		"fow_32Rnd_9x19_sten",
		"SmokeShell",
		"SmokeShell",
		"SmokeShell"
	};

	respawnMagazines[] = {
		"fow_32Rnd_9x19_sten",
		"fow_32Rnd_9x19_sten",
		"fow_32Rnd_9x19_sten",
		"fow_32Rnd_9x19_sten",
		"SmokeShell",
		"SmokeShell",
		"SmokeShell"
	};
};

class WW2_British_Platoon_Sergeant: WW2_British_Platoon_Commander {
	scope = 2;
	displayName = "Platoon Sergeant";
	uniformClass = "fow_u_uk_bd40_01_sergeant";
	backpack = "TWC_Backpack_WW2_Sergeant";
	
	weapons[] = {
		"Throw",
		"Put",
		"Binocular",
		"bnae_mk1_virtual",
		"TWC_No1Mk3SignalGun"
	};

	respawnWeapons[] = {
		"Throw",
		"Put",
		"Binocular",
		"bnae_mk1_virtual",
		"TWC_No1Mk3SignalGun"
	};

	magazines[] = {
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"fow_e_no36mk1",
		"fow_e_no36mk1"
	};
	
	respawnMagazines[] = {
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"fow_e_no36mk1",
		"fow_e_no36mk1"
	};
};

class WW2_British_Medic: WW2_British_Base {
	scope = 2;
	displayName = "Medic";
	uniformClass = "fow_u_uk_bd40_01_private";
	backpack = "TWC_Backpack_WW2_Medic";
	attendant = 1;

	linkedItems[] = {
		"TWC_Vest_WW2_Sten",
		"fow_h_uk_mk2",
		"ItemMap",
		"ItemCompass",
		"ItemWatch"
	};

	respawnLinkedItems[] = {
		"TWC_Vest_WW2_Sten",
		"fow_h_uk_mk2",
		"ItemMap",
		"ItemCompass",
		"ItemWatch"
	};

	weapons[] = {
		"Throw",
		"Put",
		"fow_w_sten_mk2"
	};

	respawnWeapons[] = {
		"Throw",
		"Put",
		"fow_w_sten_mk2"
	};

	magazines[] = {
		"fow_32Rnd_9x19_sten",
		"fow_32Rnd_9x19_sten",
		"SmokeShell",
		"SmokeShell",
		"SmokeShell"
	};

	respawnMagazines[] = {
		"fow_32Rnd_9x19_sten",
		"fow_32Rnd_9x19_sten",
		"SmokeShell",
		"SmokeShell",
		"SmokeShell"
	};
};

class WW2_British_Section_Commander: WW2_British_Base {
	scope = 2;
	displayName = "Section Commander";
	icon = "iconManLeader";
	nakedUniform = "U_BasicBody";
	uniformClass = "fow_u_uk_bd40_01_corporal";
	backpack = "TWC_Backpack_WW2_SL";

	linkedItems[] = {
		"TWC_Vest_WW2_Sten",
		"fow_h_uk_mk2_net",
		"ItemMap",
		"ItemCompass",
		"ItemWatch"
	};

	respawnLinkedItems[] = {
		"TWC_Vest_WW2_Sten",
		"fow_h_uk_mk2_net",
		"ItemMap",
		"ItemCompass",
		"ItemWatch"
	};

	weapons[] = {
		"Throw",
		"Put",
		"fow_w_sten_mk2",
		"TWC_No1Mk3SignalGun"
	};

	respawnWeapons[] = {
		"Throw",
		"Put",
		"fow_w_sten_mk2",
		"TWC_No1Mk3SignalGun"
	};

	magazines[] = {
		"fow_32Rnd_9x19_sten",
		"fow_32Rnd_9x19_sten",
		"fow_32Rnd_9x19_sten",
		"fow_32Rnd_9x19_sten",
		"fow_32Rnd_9x19_sten",
		"fow_32Rnd_9x19_sten",
		"fow_30Rnd_303_bren",
		"fow_30Rnd_303_bren",
		"fow_e_no36mk1",
		"fow_e_no36mk1",
		"SmokeShell",
		"SmokeShell",
		"SmokeShell"
	};

	respawnMagazines[] = {
		"fow_32Rnd_9x19_sten",
		"fow_32Rnd_9x19_sten",
		"fow_32Rnd_9x19_sten",
		"fow_32Rnd_9x19_sten",
		"fow_32Rnd_9x19_sten",
		"fow_32Rnd_9x19_sten",
		"fow_30Rnd_303_bren",
		"fow_30Rnd_303_bren",
		"fow_e_no36mk1",
		"fow_e_no36mk1",
		"SmokeShell",
		"SmokeShell",
		"SmokeShell"
	};
};

class WW2_British_Rifleman: WW2_British_Base {
	scope = 2;
	displayName = "Rifleman";
	uniformClass = "fow_u_uk_bd40_01_private";
	weapons[] = {
		"Throw",
		"Put",
		"bnae_mk1_virtual"
	};

	respawnWeapons[] = {
		"Throw",
		"Put",
		"bnae_mk1_virtual"
	};

	magazines[] = {
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"twc_no82",
		"fow_e_no36mk1"
	};

	respawnMagazines[] = {
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"twc_no82",
		"fow_e_no36mk1"
	};
};

class WW2_British_2IC: WW2_British_Rifleman {
	displayName = "2iC";
	uniformClass = "fow_u_uk_bd40_01_lance_corporal";
	backpack = "TWC_Backpack_WW2_2IC";

	weapons[] = {
		"Throw",
		"Put",
		"bnae_mk1_virtual"
	};

	respawnWeapons[] = {
		"Throw",
		"Put",
		"bnae_mk1_virtual"
	};
};

class WW2_British_MG: WW2_British_Base {
	scope = 2;
	displayName = "Machine Gunner";
	icon = "iconManMG";
	uniformClass = "fow_u_uk_bd40_01_private";
	
	linkedItems[] = {
		"TWC_Vest_WW2_Bren",
		"fow_h_uk_mk2",
		"ItemMap",
		"ItemCompass",
		"ItemWatch"
	};

	respawnLinkedItems[] = {
		"TWC_Vest_WW2_Bren",
		"fow_h_uk_mk2",
		"ItemMap",
		"ItemCompass",
		"ItemWatch"
	};

	weapons[] = {
		"Throw",
		"Put",
		"TWC_Bren"
	};

	respawnWeapons[] = {
		"Throw",
		"Put",
		"TWC_Bren"
	};

	magazines[] = {
		"fow_30Rnd_303_bren",
		"fow_30Rnd_303_bren",
		"fow_30Rnd_303_bren",
		"fow_30Rnd_303_bren",
		"fow_30Rnd_303_bren",
		"fow_30Rnd_303_bren"
	};

	respawnMagazines[] = {
		"fow_30Rnd_303_bren",
		"fow_30Rnd_303_bren",
		"fow_30Rnd_303_bren",
		"fow_30Rnd_303_bren",
		"fow_30Rnd_303_bren",
		"fow_30Rnd_303_bren"
	};
};

class WW2_British_MGASS: WW2_British_Rifleman {
	displayName = "Machine Gunner Assistant";
	backpack = "TWC_Backpack_WW2_MGASS";

	linkedItems[] = {
		"TWC_Vest_WW2_Bren",
		"fow_h_uk_mk2",
		"ItemMap",
		"ItemCompass",
		"ItemWatch"
	};

	respawnLinkedItems[] = {
		"fow_v_uk_bren",
		"fow_h_uk_mk2",
		"ItemMap",
		"ItemCompass",
		"ItemWatch"
	};

	weapons[] = {
		"Throw",
		"Put",
		"bnae_mk1_virtual"
	};

	respawnWeapons[] = {
		"Throw",
		"Put",
		"bnae_mk1_virtual"
	};

	magazines[] = {
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine"
	};

	respawnMagazines[] = {
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine"
	};
};

class WW2_British_AT: WW2_British_Base {
	scope = 2;
	displayName = "PIAT Gunner";
	uniformClass = "fow_u_uk_bd40_01_private";
	backpack = "TWC_Backpack_PIAT";

	weapons[] = {
		"Throw",
		"Put",
		"fow_w_piat",
		"fow_w_webley"
	};

	respawnWeapons[] = {
		"Throw",
		"Put",
		"fow_w_piat",
		"fow_w_webley"
	};

	magazines[] = {
		"fow_1Rnd_piat_HEAT",
		"fow_6Rnd_455",
		"fow_6Rnd_455",
		"twc_no82"
	};

	respawnMagazines[] = {
		"fow_1Rnd_piat_HEAT",
		"fow_6Rnd_455",
		"fow_6Rnd_455",
		"twc_no82"
	};
};

class WW2_British_AAT: WW2_British_Base {
	scope = 2;
	displayName = "Assistant PIAT Gunner";
	uniformClass = "fow_u_uk_bd40_01_private";
	backpack = "TWC_Backpack_PIAT";

	weapons[] = {
		"Throw",
		"Put",
		"bnae_mk1_virtual"
	};

	respawnWeapons[] = {
		"Throw",
		"Put",
		"bnae_mk1_virtual"
	};

	magazines[] = {
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"twc_no82",
		"twc_no82"
	};

	respawnMagazines[] = {
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"twc_no82",
		"twc_no82"
	};
};

class WW2_British_Carrier_SMG: WW2_British_Rifleman {
	displayName = "Auxiliary (SMG)";
	backpack = "TWC_Backpack_WW2_Base";

	weapons[] = {
		"Throw",
		"Put",
		"fow_w_sten_mk2"
	};

	respawnWeapons[] = {
		"Throw",
		"Put",
		"fow_w_sten_mk2"
	};

	magazines[] = {
		"fow_32Rnd_9x19_sten",
		"fow_32Rnd_9x19_sten",
		"fow_32Rnd_9x19_sten",
		"fow_32Rnd_9x19_sten",
		"fow_32Rnd_9x19_sten",
		"fow_32Rnd_9x19_sten",
		"fow_e_no36mk1"
	};

	respawnMagazines[] = {
		"fow_32Rnd_9x19_sten",
		"fow_32Rnd_9x19_sten",
		"fow_32Rnd_9x19_sten",
		"fow_32Rnd_9x19_sten",
		"fow_32Rnd_9x19_sten",
		"fow_32Rnd_9x19_sten",
		"fow_e_no36mk1"
	};
};

class WW2_British_Vehicle_Commander: WW2_British_Base {
	scope = 2;
	displayName = "Vehicle Commander (WW2)";
	icon = "iconManLeader";
	nakedUniform = "U_BasicBody";
	uniformClass = "fow_u_uk_bd40_01_sergeant";
	backpack = "TWC_Backpack_WW2_PlatoonCommand";

	class EventHandlers: EventHandlers {
		init = "(_this select 0) setVariable [""twc_keepMap"",true]";
	};

	linkedItems[] = {
		"H_Beret_blk",
		"V_LIB_SOV_RA_Belt",
		"ItemMap",
		"ItemCompass",
		"ItemWatch"
	};

	respawnLinkedItems[] = {
		"H_Beret_blk",
		"V_LIB_SOV_RA_Belt",
		"ItemMap",
		"ItemCompass",
		"ItemWatch"
	};

	weapons[] = {
		"Throw",
		"Put",
		"Binocular",
		"fow_w_sten_mk2"
	};

	respawnWeapons[] = {
		"Throw",
		"Put",
		"Binocular",
		"fow_w_sten_mk2"
	};

	magazines[] = {
		"fow_32Rnd_9x19_sten",
		"fow_32Rnd_9x19_sten"
	};

	respawnMagazines[] = {
		"fow_32Rnd_9x19_sten",
		"fow_32Rnd_9x19_sten"
	};
};

class WW2_British_Vehicle_Crewman: WW2_British_Vehicle_Commander {
	displayName = "Vehicle Crewman (WW2)";
	icon = "iconMan";
	uniformClass = "fow_u_uk_bd40_01_private";
	backpack = "";

	weapons[] = {
		"Throw",
		"Put",
		"fow_w_sten_mk2"
	};

	respawnWeapons[] = {
		"Throw",
		"Put",
		"fow_w_sten_mk2"
	};
};