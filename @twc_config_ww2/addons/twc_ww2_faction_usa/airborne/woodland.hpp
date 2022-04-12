class TWC_Infantry_WW2_US_Airborne_Woodland_Rifleman: TWC_Infantry_WW2_USA_Base {
	scope = 2;
	scopeCurator = 2;
	CATEGORY(TWC_Infantry_US_Airborne_Woodland)
	displayName = "Rifleman";
	backpack = "TWC_Backpack_WW2_US_Airborne_Rifleman";
	linkedItems[] =
	{
		"V_LIB_US_AB_Vest_Garand",
		"H_LIB_US_AB_Helmet_4",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_US_AB_Vest_Garand",
		"H_LIB_US_AB_Helmet_4",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	Items[] =
	{
		MEDICAL_LOADOUT,
		"TWC_Item_Clicker_25",
		"LIB_ACC_M1_Bayo"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		"TWC_Item_Clicker_25",
		"LIB_ACC_M1_Bayo"
	};
	weapons[] =
	{
		"LIB_M1_Garand",
		"Throw",
		"Put"
	};
	respawnWeapons[] =
	{
		"LIB_M1_Garand",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_13("LIB_8Rnd_762x63"),
		MAG_2("LIB_US_Mk_2")
	};
	respawnMagazines[] =
	{
		MAG_13("LIB_8Rnd_762x63"),
		MAG_2("LIB_US_Mk_2")
	};
};
class TWC_Infantry_WW2_US_Airborne_Woodland_Scout: TWC_Infantry_WW2_US_Airborne_Woodland_Rifleman {
	displayName = "Scout";
};
class TWC_Infantry_WW2_US_Airborne_Woodland_Grenadier: TWC_Infantry_WW2_US_Airborne_Woodland_Rifleman{
	displayName = "Grenadier";
	backpack = "TWC_Backpack_WW2_US_Airborne_Grenadier";
	linkedItems[] =
	{
		"V_LIB_US_AB_Vest_Grenadier",
		"H_LIB_US_AB_Helmet_4",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_US_AB_Vest_Grenadier",
		"H_LIB_US_AB_Helmet_4",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"LIB_M1_Garand_M7",
		"Throw",
		"Put"
	};
	respawnWeapons[] =
	{
		"LIB_M1_Garand_M7",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_13("LIB_8Rnd_762x63"),
		MAG_4("LIB_1Rnd_G_Mk2"),
		MAG_2("LIB_1Rnd_G_M9A1")
	};
	respawnMagazines[] =
	{
		MAG_13("LIB_8Rnd_762x63"),
		MAG_4("LIB_US_Mk_2"),
		MAG_2("LIB_1Rnd_G_M9A1")
	};
};
class TWC_Infantry_WW2_US_Airborne_Woodland_SMG: TWC_Infantry_WW2_US_Airborne_Woodland_Rifleman {
	displayName = "Submachine Gunner";
	backpack = "TWC_Backpack_WW2_US_Airborne_SMG";
	linkedItems[] =
	{
		"V_LIB_US_AB_Vest_Thompson",
		"H_LIB_US_AB_Helmet_4",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_US_AB_Vest_Thompson",
		"H_LIB_US_AB_Helmet_4",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	Items[] =
	{
		MEDICAL_LOADOUT,
		"TWC_Item_Clicker_25"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		"TWC_Item_Clicker_25"
	};
	weapons[] =
	{
		"LIB_M1A1_Thompson",
		"Throw",
		"Put"
	};
	respawnWeapons[] =
	{
		"LIB_M1A1_Thompson",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_7("LIB_30Rnd_45ACP"),
		MAG_2("LIB_US_Mk_2")
	};
	respawnMagazines[] =
	{
		MAG_7("LIB_30Rnd_45ACP"),
		MAG_2("LIB_US_Mk_2")
	};
};
class TWC_Infantry_WW2_US_Airborne_Woodland_MG: TWC_Infantry_WW2_US_Airborne_Woodland_SMG {
	displayName = "Machine Gunner";
	backpack = "TWC_Backpack_WW2_US_Airborne_MG";
	linkedItems[] =
	{
		"V_LIB_US_AB_Vest_M1919",
		"H_LIB_US_AB_Helmet_4",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_US_AB_Vest_M1919",
		"H_LIB_US_AB_Helmet_4",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"LIB_M1919A6",
		"Throw",
		"Put"
	};
	respawnWeapons[] =
	{
		"LIB_M1919A6",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_4("LIB_50Rnd_762x63")
	};
	respawnMagazines[] =
	{
		MAG_4("LIB_50Rnd_762x63")
	};
};
class TWC_Infantry_WW2_US_Airborne_Woodland_MGASS: TWC_Infantry_WW2_US_Airborne_Woodland_SMG {
	displayName = "Assistant Machine Gunner";
	backpack = "TWC_Backpack_WW2_US_Airborne_MGASS";
	linkedItems[] =
	{
		"V_LIB_US_AB_Vest_Carbine",
		"H_LIB_US_AB_Helmet_4",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_US_AB_Vest_Carbine",
		"H_LIB_US_AB_Helmet_4",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"LIB_M1A1_Carbine",
		"Throw",
		"Put"
	};
	respawnWeapons[] =
	{
		"LIB_M1A1_Carbine",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_9("LIB_15Rnd_762x33")
	};
	respawnMagazines[] =
	{
		MAG_9("LIB_15Rnd_762x33")
	};
};
class TWC_Infantry_WW2_US_Airborne_Woodland_Ammobearer: TWC_Infantry_WW2_US_Airborne_Woodland_Rifleman {
	displayName = "Ammobearer";
	backpack = "TWC_Backpack_WW2_US_Airborne_Ammobearer";
	weapons[] =
	{
		"LIB_M1_Garand",
		"Throw",
		"Put"
	};
	respawnWeapons[] =
	{
		"LIB_M1_Garand",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_13("LIB_8Rnd_762x63")
	};
	respawnMagazines[] =
	{
		MAG_13("LIB_8Rnd_762x63")
	};
};
class TWC_Infantry_WW2_US_Airborne_Woodland_SeniorRifleman: TWC_Infantry_WW2_US_Airborne_Woodland_Rifleman {
	displayName = "Senior Rifleman";
	uniformClass = "U_LIB_US_AB_Uniform_M42_FC";
	linkedItems[] =
	{
		"V_LIB_US_AB_Vest_Carbine",
		"H_LIB_US_AB_Helmet_4",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_US_AB_Vest_Carbine",
		"H_LIB_US_AB_Helmet_4",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
};
class TWC_Infantry_WW2_US_Airborne_Woodland_2iC: TWC_Infantry_WW2_US_Airborne_Woodland_Rifleman {
	displayName = "Assistant Squad Leader";
	TWC_isCommandRole = 1;
	uniformClass = "U_LIB_US_AB_Uniform_M42_corporal";
	backpack = "TWC_Backpack_WW2_US_Airborne_2iC";
	linkedItems[] =
	{
		"V_LIB_US_AB_Vest_Carbine",
		"H_LIB_US_AB_Helmet_NCO_1",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_US_AB_Vest_Carbine",
		"H_LIB_US_AB_Helmet_NCO_1",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
};
class TWC_Infantry_WW2_US_Airborne_Woodland_SquadLeader: TWC_Infantry_WW2_US_Airborne_Woodland_SMG {
	displayName = "Squad Leader";
	TWC_isCommandRole = 1;
	uniformClass = "U_LIB_US_AB_Uniform_M42_NCO";
	backpack = "TWC_Backpack_WW2_US_Airborne_SquadLeader";
	linkedItems[] =
	{
		"V_LIB_US_AB_Vest_Thompson_nco",
		"H_LIB_US_AB_Helmet_NCO_1",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_US_AB_Vest_Thompson_nco",
		"H_LIB_US_AB_Helmet_NCO_1",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"LIB_M1A1_Thompson",
		"LIB_Colt_M1911",
		"LIB_Binocular_US",
		"Throw",
		"Put"
	};
	respawnWeapons[] =
	{
		"LIB_M1A1_Thompson",
		"LIB_Colt_M1911",
		"LIB_Binocular_US",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_7("LIB_30Rnd_45ACP"),
		MAG_2("LIB_7Rnd_45ACP"),
		MAG_2("LIB_US_M18")
	};
	respawnMagazines[] =
	{
		MAG_7("LIB_30Rnd_45ACP"),
		MAG_2("LIB_7Rnd_45ACP"),
		MAG_2("LIB_US_M18")
	};
};

class TWC_Infantry_WW2_US_Airborne_Woodland_Platoon_Leader: TWC_Infantry_WW2_US_Airborne_Woodland_SquadLeader {
	displayName = "Platoon Leader";
	uniformClass = "U_LIB_US_AB_Uniform_M42_506";
	backpack = "TWC_Backpack_WW2_US_Airborne_Platoon_Leader";
	class EventHandlers: EventHandlers {
		init = "(_this select 0) setVariable ['twc_keepMap',true]";
	};
	linkedItems[] =
	{
		"V_LIB_US_AB_Vest_Thompson_nco_Radio",
		"H_LIB_US_AB_Helmet_CO_1",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_US_AB_Vest_Thompson_nco_Radio",
		"H_LIB_US_AB_Helmet_CO_1",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	Items[] =
	{
		MEDICAL_LOADOUT,
		"TWC_Item_Clicker_25",
		"ACE_MapTools"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		"TWC_Item_Clicker_25",
		"ACE_MapTools"
	};
	weapons[] =
	{
		"LIB_M1A1_Thompson",
		"TWC_No1Mk3SignalGun",
		"LIB_Binocular_US",
		"Throw",
		"Put"
	};
	respawnWeapons[] =
	{
		"LIB_M1A1_Thompson",
		"TWC_No1Mk3SignalGun",
		"LIB_Binocular_US",
		"Throw",
		"Put"
	};
};
class TWC_Infantry_WW2_US_Airborne_Woodland_Platoon_Sergeant: TWC_Infantry_WW2_US_Airborne_Woodland_Platoon_Leader {
	displayName = "Platoon Sergeant";
	uniformClass = "U_LIB_US_AB_Uniform_M42_NCO";
	backpack = "TWC_Backpack_WW2_US_Airborne_Platoon_Sergeant";
	linkedItems[] =
	{
		"V_LIB_US_AB_Vest_Thompson_nco_Radio",
		"H_LIB_US_AB_Helmet_NCO_1",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_US_AB_Vest_Thompson_nco_Radio",
		"H_LIB_US_AB_Helmet_NCO_1",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"LIB_M1_Garand",
		"LIB_Binocular_US",
		"Throw",
		"Put"
	};
	respawnWeapons[] =
	{
		"LIB_M1_Garand",
		"LIB_Binocular_US",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_13("LIB_8Rnd_762x63"),
		MAG_2("LIB_US_M18")
	};
	respawnMagazines[] =
	{
		MAG_13("LIB_8Rnd_762x63"),
		MAG_2("LIB_US_M18")
	};
};
class TWC_Infantry_WW2_US_Airborne_Woodland_Platoon_Medic: TWC_Infantry_WW2_US_Airborne_Woodland_Rifleman {
	displayName = "Platoon Medic";
	uniformClass = "U_LIB_US_AB_Uniform_M42_Medic";
	backpack = "TWC_Backpack_WW2_US_Airborne_Platoon_Medic";
	linkedItems[] =
	{
		"V_LIB_US_AB_Vest_Carbine",
		"H_LIB_US_AB_Helmet_Medic_1",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_US_AB_Vest_Carbine",
		"H_LIB_US_AB_Helmet_Medic_1",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	Items[] =
	{
		MEDICAL_LOADOUT,
		"TWC_Item_Clicker_25"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		"TWC_Item_Clicker_25"
	};
	weapons[] =
	{
		"LIB_M1A1_Carbine",
		"Throw",
		"Put"
	};
	respawnWeapons[] =
	{
		"LIB_M1A1_Carbine",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_5("LIB_15Rnd_762x33"),
		MAG_2("LIB_US_M18")
	};
	respawnMagazines[] =
	{
		MAG_5("LIB_15Rnd_762x33"),
		MAG_2("LIB_US_M18")
	};
};
class TWC_Infantry_WW2_US_Airborne_Woodland_Platoon_AT: TWC_Infantry_WW2_US_Airborne_Woodland_Rifleman {
	displayName = "AT Rifleman";
	backpack = "TWC_Backpack_WW2_US_Airborne_Platoon_AT";
	linkedItems[] =
	{
		"V_LIB_US_AB_Vest_Carbine",
		"H_LIB_US_AB_Helmet_4",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_US_AB_Vest_Carbine",
		"H_LIB_US_AB_Helmet_4",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	Items[] =
	{
		MEDICAL_LOADOUT,
		"TWC_Item_Clicker_25"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		"TWC_Item_Clicker_25"
	};
	weapons[] =
	{
		"LIB_M1A1_Carbine",
		"LIB_M1A1_Bazooka",
		"Throw",
		"Put"
	};
	respawnWeapons[] =
	{
		"LIB_M1A1_Carbine",
		"LIB_M1A1_Bazooka",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_11("LIB_15Rnd_762x33"),
		"LIB_1Rnd_60mm_M6"
	};
	respawnMagazines[] =
	{
		MAG_11("LIB_15Rnd_762x33"),
		"LIB_1Rnd_60mm_M6"
	};
};