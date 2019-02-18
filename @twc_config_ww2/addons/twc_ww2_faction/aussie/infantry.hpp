class WW2_British_Platoon_Commander_Early: WW2_British_Base {
	scope = 2;
	displayName = "Platoon Commander";
	editorSubcategory = "Regular_Early_WW2";
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
		"LIB_M1928_Thompson",
		"TWC_No1Mk3SignalGun"
	};

	respawnweapons[] = {
		"Throw",
		"Put",
		"Binocular",
		"LIB_M1928_Thompson",
		"TWC_No1Mk3SignalGun"
	};

	magazines[] = {
		"LIB_30Rnd_45ACP",
		"LIB_30Rnd_45ACP",
		"LIB_30Rnd_45ACP",
		"LIB_30Rnd_45ACP",
		"LIB_30Rnd_45ACP",
		"SmokeShell",
		"SmokeShell",
		"SmokeShell"
	};

	Respawnmagazines[] = {
		"LIB_30Rnd_45ACP",
		"LIB_30Rnd_45ACP",
		"LIB_30Rnd_45ACP",
		"LIB_30Rnd_45ACP",
		"LIB_30Rnd_45ACP",
		"SmokeShell",
		"SmokeShell",
		"SmokeShell"
	};
	
	nightItems[] = {
		"ACE_HandFlare_White",
		"ACE_HandFlare_White"
	};
};

class WW2_British_Medic_Early: WW2_British_Base {
	scope = 2;
	displayName = "Medic";
	editorSubcategory = "Regular_Early_WW2";
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
		"LIB_M1928_Thompson"
	};

	respawnweapons[] = {
		"Throw",
		"Put",
		"LIB_M1928_Thompson"
	};

	magazines[] = {
		"LIB_50Rnd_45ACP",
		"LIB_30Rnd_45ACP",
		"LIB_30Rnd_45ACP",
		"SmokeShell",
		"SmokeShell",
		"SmokeShell"
	};

	Respawnmagazines[] = {
		"LIB_50Rnd_45ACP",
		"LIB_30Rnd_45ACP",
		"LIB_30Rnd_45ACP",
		"SmokeShell",
		"SmokeShell",
		"SmokeShell"
	};
};

class WW2_British_Section_Commander_Early: WW2_British_Base {
	scope = 2;
	displayName = "Section Commander";
	editorSubcategory = "Regular_Early_WW2";
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
		"LIB_M1928_Thompson",
		"TWC_No1Mk3SignalGun"
	};

	respawnweapons[] = {
		"Throw",
		"Put",
		"LIB_M1928_Thompson",
		"TWC_No1Mk3SignalGun"
	};

	magazines[] = {
		"LIB_30Rnd_45ACP",
		"LIB_30Rnd_45ACP",
		"LIB_30Rnd_45ACP",
		"LIB_30Rnd_45ACP",
		"LIB_30Rnd_45ACP",
		"LIB_30Rnd_45ACP",
		"fow_30Rnd_303_bren",
		"fow_30Rnd_303_bren",
		"fow_e_no36mk1",
		"fow_e_no36mk1",
		"SmokeShell",
		"SmokeShell",
		"SmokeShell"
	};

	Respawnmagazines[] = {
		"LIB_30Rnd_45ACP",
		"LIB_30Rnd_45ACP",
		"LIB_30Rnd_45ACP",
		"LIB_30Rnd_45ACP",
		"LIB_30Rnd_45ACP",
		"LIB_30Rnd_45ACP",
		"fow_30Rnd_303_bren",
		"fow_30Rnd_303_bren",
		"fow_e_no36mk1",
		"fow_e_no36mk1",
		"SmokeShell",
		"SmokeShell",
		"SmokeShell"
	};
	
	nightItems[] = {
		"ACE_HandFlare_White",
		"ACE_HandFlare_White"
	};
};