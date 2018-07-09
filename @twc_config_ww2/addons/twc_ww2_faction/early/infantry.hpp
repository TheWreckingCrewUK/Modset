class WW2_British_Platoon_Commander_Early: WW2_British_Base {
	scope = 2;
	displayName = "Platoon Commander";
	editorSubcategory = "TWC_Infantry_WW2_Early";
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

	respawnWeapons[] = {
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

	respawnMagazines[] = {
		"LIB_30Rnd_45ACP",
		"LIB_30Rnd_45ACP",
		"LIB_30Rnd_45ACP",
		"LIB_30Rnd_45ACP",
		"LIB_30Rnd_45ACP",
		"SmokeShell",
		"SmokeShell",
		"SmokeShell"
	};
};

class WW2_British_Medic_Early: WW2_British_Base {
	scope = 2;
	displayName = "Medic";
	editorSubcategory = "TWC_Infantry_WW2_Early";
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

	respawnWeapons[] = {
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

	respawnMagazines[] = {
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
	editorSubcategory = "TWC_Infantry_WW2_Early";
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

	respawnWeapons[] = {
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

	respawnMagazines[] = {
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
};

class WW2_British_AT_Early: WW2_British_Base {
	scope = 2;
	displayName = "AT Rifleman";
	editorSubcategory = "TWC_Infantry_WW2_Early";
	uniformClass = "fow_u_uk_bd40_01_private";
	backpack = "TWC_Backpack_WW2_Boys";

	weapons[] = {
		"Throw",
		"Put",
		"twc_boys_at_rifle",
		"fow_w_webley"
	};

	respawnWeapons[] = {
		"Throw",
		"Put",
		"twc_boys_at_rifle",
		"fow_w_webley"
	};

	magazines[] = {
		"twc_boys_5rnd_mag",
		"twc_boys_5rnd_mag",
		"twc_boys_5rnd_mag",
		"twc_boys_5rnd_mag",
		"twc_boys_5rnd_mag",
		"twc_boys_5rnd_mag",
		"twc_boys_5rnd_mag",
		"twc_boys_5rnd_mag",
		"twc_boys_5rnd_mag",
		"fow_6Rnd_455",
		"fow_6Rnd_455",
		"twc_no82"
	};

	respawnMagazines[] = {
		"twc_boys_5rnd_mag",
		"twc_boys_5rnd_mag",
		"twc_boys_5rnd_mag",
		"twc_boys_5rnd_mag",
		"twc_boys_5rnd_mag",
		"twc_boys_5rnd_mag",
		"twc_boys_5rnd_mag",
		"twc_boys_5rnd_mag",
		"twc_boys_5rnd_mag",
		"fow_6Rnd_455",
		"fow_6Rnd_455",
		"twc_no82"
	};	
};