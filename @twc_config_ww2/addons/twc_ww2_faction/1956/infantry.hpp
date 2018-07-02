class Early_ColdWar_Platoon_Commander: Early_ColdWar_Base {
	scope = 2;
	displayName = "Platoon Commander";
	uniformClass = "fow_u_uk_bd40_01_lieutenant";
	backpack = "TWC_Backpack_1956_SL";

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

class Early_ColdWar_Sergeant: Early_ColdWar_Platoon_Commander {
	scope = 2;
	displayName = "Platoon Sergeant";
	uniformClass = "fow_u_uk_bd40_01_sergeant";
	backpack = "TWC_Backpack_1956_Sergeant";

	weapons[] = {
		"Throw",
		"Put",
		"Binocular",
		"bnae_mk1_virtual"
	};

	respawnWeapons[] = {
		"Throw",
		"Put",
		"Binocular",
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

class Early_ColdWar_Medic: Early_ColdWar_Base {
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

class Early_ColdWar_Section_Leader: Early_ColdWar_Base {
	scope = 2;
	displayName = "Section Commander";
	icon = "iconManLeader";
	nakedUniform = "U_BasicBody";
	uniformClass = "fow_u_uk_bd40_01_corporal";
	backpack = "TWC_Backpack_1956_SL";

	class EventHandlers: EventHandlers {
		init = "(_this select 0) setVariable [""twc_keepMap"",true]";
	};

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
		"fow_30Rnd_303_bren",
		"fow_30Rnd_303_bren",
		"fow_e_no36mk1",
		"fow_e_no36mk1",
		"SmokeShell",
		"SmokeShell",
		"SmokeShell"
	};

	respawnMagazines[] = {
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"fow_30Rnd_303_bren",
		"fow_30Rnd_303_bren",
		"fow_e_no36mk1",
		"fow_e_no36mk1",
		"SmokeShell",
		"SmokeShell",
		"SmokeShell"
	};
};

class EarlyColdWar_Rifleman: Early_ColdWar_Base {
	scope = 2;
	displayName = "Rifleman";
	uniformClass = "fow_u_uk_bd40_01_private";

	weapons[] = {
		"Throw",
		"Put",
		"UK3CB_BAF_L1A1_Wood"
	};

	respawnWeapons[] = {
		"Throw",
		"Put",
		"UK3CB_BAF_L1A1_Wood"
	};

	magazines[] = {
		"UK3CB_BAF_762_20Rnd",
		"UK3CB_BAF_762_20Rnd",
		"UK3CB_BAF_762_20Rnd",
		"UK3CB_BAF_762_20Rnd",
		"UK3CB_BAF_762_20Rnd",
		"UK3CB_BAF_762_20Rnd",
		"fow_e_no36mk1",
		"fow_e_no36mk1",
		"fow_30Rnd_303_bren",
		"fow_30Rnd_303_bren"
	};

	respawnMagazines[] = {
		"UK3CB_BAF_762_20Rnd",
		"UK3CB_BAF_762_20Rnd",
		"UK3CB_BAF_762_20Rnd",
		"UK3CB_BAF_762_20Rnd",
		"UK3CB_BAF_762_20Rnd",
		"UK3CB_BAF_762_20Rnd",
		"UK3CB_BAF_762_20Rnd",
		"fow_e_no36mk1",
		"fow_e_no36mk1",
		"fow_30Rnd_303_bren",
		"fow_30Rnd_303_bren"
	};
};

class Early_ColdWar_2IC: Early_ColdWar_Base {
	displayName = "2iC";
	uniformClass = "fow_u_uk_bd40_01_lance_corporal";
	backpack = "TWC_Backpack_1956_2IC";

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
		"fow_e_no36mk1",
		"fow_e_no36mk1",
		"fow_30Rnd_303_bren",
		"fow_30Rnd_303_bren"
	};

	respawnMagazines[] = {
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"fow_e_no36mk1",
		"fow_e_no36mk1",
		"fow_30Rnd_303_bren",
		"fow_30Rnd_303_bren"
	};
};

class Early_ColdWar_MG: Early_ColdWar_Base {
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
		"fow_30Rnd_303_bren",
		"fow_30Rnd_303_bren",
		"fow_30Rnd_303_bren",
		"fow_30Rnd_303_bren",
		"fow_30Rnd_303_bren",
		"fow_30Rnd_303_bren"
	};
};

class Early_ColdWar_MG_AS: Early_ColdWar_Base {
	displayName = "Machine Gunner Assistant";
	backpack = "TWC_Backpack_WW2_MGASS";

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

	magazines[] = {
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"fow_e_no36mk1",
		"fow_e_no36mk1",
		"fow_30Rnd_303_bren",
		"fow_30Rnd_303_bren"
	};

	respawnMagazines[] = {
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"10Rnd_303_Magazine",
		"fow_e_no36mk1",
		"fow_e_no36mk1",
		"fow_30Rnd_303_bren",
		"fow_30Rnd_303_bren"
	};
};

class Early_ColdWar_AT: Early_ColdWar_Base {
	scope = 2;
	displayName = "AT Gunner";
	uniformClass = "fow_u_uk_bd40_01_private";
	backpack = "TWC_Backpack_1956_AT";

	weapons[] = {
		"Throw",
		"Put",
		"fow_w_sten_mk2",
		"fow_w_m1a1_bazooka"
	};

	respawnWeapons[] = {
		"Throw",
		"Put",
		"fow_w_sten_mk2",
		"fow_w_m1a1_bazooka"
	};

	magazines[] = {
		"fow_32Rnd_9x19_sten",
		"fow_32Rnd_9x19_sten",
		"fow_32Rnd_9x19_sten",
		"fow_32Rnd_9x19_sten",
		"fow_1Rnd_m6a1"
	};

	respawnMagazines[] = {
		"fow_32Rnd_9x19_sten",
		"fow_32Rnd_9x19_sten",
		"fow_32Rnd_9x19_sten",
		"fow_32Rnd_9x19_sten",
		"fow_1Rnd_m6a1"
	};
};

class Early_ColdWar_AT_Ass: EarlyColdWar_Rifleman {
	scope = 2;
	displayName = "AT Gunner Assistant";
	uniformClass = "fow_u_uk_bd40_01_private";
	backpack = "TWC_Backpack_1956_AT";

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
		"fow_32Rnd_9x19_sten"
	};

	respawnMagazines[] = {
		"fow_32Rnd_9x19_sten",
		"fow_32Rnd_9x19_sten",
		"fow_32Rnd_9x19_sten",
		"fow_32Rnd_9x19_sten"
	};
};