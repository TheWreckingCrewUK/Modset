class TWC_Infantry_WW2_US_Ranger_Woodland_Rifleman: TWC_Infantry_WW2_USA_Base {
	scope = 2;
	scopeCurator = 2;
	CATEGORY(TWC_Infantry_US_Ranger_Woodland)
	displayName = "Rifleman";
	uniformClass = "U_LIB_US_Rangers_Uniform";
	linkedItems[] =
	{
		"V_LIB_US_Assault_Vest",
		"H_LIB_US_Rangers_Helmet_os",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_US_Assault_Vest",
		"H_LIB_US_Rangers_Helmet_os",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	Items[] =
	{
		MEDICAL_LOADOUT,
		"LIB_ACC_M1_Bayo"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
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
class TWC_Infantry_WW2_US_Ranger_Woodland_Grenadier: TWC_Infantry_WW2_US_Ranger_Woodland_Rifleman{
	displayName = "Grenadier";
	uniformClass = "U_LIB_US_Rangers_Private_1st";
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
		MAG_6("LIB_US_Mk_2"),
		MAG_4("LIB_1Rnd_G_M9A1")
	};
};
class TWC_Infantry_WW2_US_Ranger_Woodland_SMG: TWC_Infantry_WW2_US_Ranger_Woodland_Rifleman {
	displayName = "Submachine Gunner";
	linkedItems[] =
	{
		"V_LIB_US_Assault_Vest_Thompson",
		"H_LIB_US_Rangers_Helmet_os",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_US_Assault_Vest_Thompson",
		"H_LIB_US_Rangers_Helmet_os",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	Items[] =
	{
		MEDICAL_LOADOUT
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT
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
		MAG_10("LIB_30Rnd_45ACP"),
		MAG_4("LIB_US_Mk_2")
	};
	respawnMagazines[] =
	{
		MAG_10("LIB_30Rnd_45ACP"),
		MAG_4("LIB_US_Mk_2")
	};
};
class TWC_Infantry_WW2_US_Ranger_Woodland_MG: TWC_Infantry_WW2_US_Ranger_Woodland_Rifleman {
	displayName = "Machine Gunner";
	uniformClass = "U_LIB_US_Rangers_Private_1st";
	weapons[] =
	{
		"LIB_M1919A4",
		"Throw",
		"Put"
	};
	respawnWeapons[] =
	{
		"LIB_M1919A4",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_3("LIB_100Rnd_762x63")
	};
	respawnMagazines[] =
	{
		MAG_3("LIB_100Rnd_762x63")
	};
};
class TWC_Infantry_WW2_US_Ranger_Woodland_MGASS: TWC_Infantry_WW2_US_Ranger_Woodland_Rifleman {
	displayName = "Assistant Machine Gunner";
	weapons[] =
	{
		"LIB_M1A1_Carbine",
		"LIB_M2_Tripod",
		"Throw",
		"Put"
	};
	respawnWeapons[] =
	{
		"LIB_M1A1_Carbine",
		"LIB_M2_Tripod",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_3("LIB_15Rnd_762x33"),
		MAG_5("LIB_100Rnd_762x63")
	};
	respawnMagazines[] =
	{
		MAG_3("LIB_15Rnd_762x33"),
		MAG_5("LIB_100Rnd_762x63")
	};
};
class TWC_Infantry_WW2_US_Ranger_Woodland_AutoRifleman: TWC_Infantry_WW2_US_Ranger_Woodland_Rifleman {
	displayName = "Autorifleman";
	uniformClass = "U_LIB_US_Rangers_Private_1st";
	weapons[] =
	{
		"LIB_M1918A2_BAR",
		"Throw",
		"Put"
	};
	respawnWeapons[] =
	{
		"LIB_M1918A2_BAR",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_11("LIB_20Rnd_762x63")
	};
	respawnMagazines[] =
	{
		MAG_11("LIB_20Rnd_762x63")
	};
};
class TWC_Infantry_WW2_US_Ranger_Woodland_TeamLeader: TWC_Infantry_WW2_US_Ranger_Woodland_MGASS {
	displayName = "Team Leader";
	TWC_isCommandRole = 1;
	uniformClass = "U_LIB_US_Rangers_Corp";
	backpack = "TWC_Backpack_WW2_US_Ranger_TeamLeader";
	linkedItems[] =
	{
		"V_LIB_US_Assault_Vest",
		"H_LIB_US_Rangers_Helmet_NCO",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_US_Assault_Vest",
		"H_LIB_US_Rangers_Helmet_NCO",
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
		MAG_13("LIB_15Rnd_762x33"),
		MAG_2("LIB_US_Mk_2"),
		MAG_2("LIB_US_M18")
	};
	respawnMagazines[] =
	{
		MAG_13("LIB_15Rnd_762x33"),
		MAG_2("LIB_US_Mk_2"),
		MAG_2("LIB_US_M18")
	};
};
class TWC_Infantry_WW2_US_Ranger_Woodland_SquadLeader: TWC_Infantry_WW2_US_Ranger_Woodland_SMG {
	displayName = "Squad Leader";
	TWC_isCommandRole = 1;
	uniformClass = "U_LIB_US_Rangers_Sergeant";
	linkedItems[] =
	{
		"V_LIB_US_Assault_Vest_Thompson",
		"H_LIB_US_Rangers_Helmet_NCO",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_US_Assault_Vest_Thompson",
		"H_LIB_US_Rangers_Helmet_NCO",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	Items[] =
    {
        MEDICAL_LOADOUT,
        "fow_i_whistle"
    };
    respawnItems[] =
    {
        MEDICAL_LOADOUT,
        "fow_i_whistle"
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
	magazines[] =
	{
		MAG_7("LIB_30Rnd_45ACP"),
		MAG_2("LIB_US_M18"),
		MAG_3("TWC_Magazine_SignalSmoke_Green"),
	    MAG_3("TWC_Magazine_SignalSmoke_Red"),
		MAG_3("TWC_Magazine_SignalSmoke_Yellow"),
		MAG_3("TWC_Magazine_SignalSmoke_Blue")
	
	};
	respawnMagazines[] =
	{
		MAG_7("LIB_30Rnd_45ACP"),
		MAG_2("LIB_US_M18"),
		MAG_3("TWC_Magazine_SignalSmoke_Green"),
	    MAG_3("TWC_Magazine_SignalSmoke_Red"),
		MAG_3("TWC_Magazine_SignalSmoke_Yellow"),
		MAG_3("TWC_Magazine_SignalSmoke_Blue")
	};
};

class TWC_Infantry_WW2_US_Ranger_Woodland_Platoon_Leader: TWC_Infantry_WW2_US_Ranger_Woodland_SquadLeader {
	displayName = "Platoon Leader";
	uniformClass = "U_LIB_US_Rangers_Uniform";
	class EventHandlers: EventHandlers {
		init = "(_this select 0) setVariable ['twc_keepMap',true]";
	};
	linkedItems[] =
	{
		"V_LIB_US_Assault_Vest_Light",
		"H_LIB_US_Rangers_Helmet_First_lieutenant",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_US_Assault_Vest_Light",
		"H_LIB_US_Rangers_Helmet_First_lieutenant",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	Items[] =
	{
		MEDICAL_LOADOUT,
		"ACE_MapTools",
		"fow_i_whistle"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
		"ACE_MapTools",
		"fow_i_whistle"
	};
};
class TWC_Infantry_WW2_US_Ranger_Woodland_Platoon_Sergeant: TWC_Infantry_WW2_US_Ranger_Woodland_Rifleman {
	displayName = "Platoon Sergeant";
	uniformClass = "U_LIB_US_Rangers_Sergeant";
	backpack = "TWC_Backpack_WW2_US_Ranger_Platoon_Sergeant";
	linkedItems[] =
	{
		"V_LIB_US_Assault_Vest",
		"H_LIB_US_Rangers_Helmet_NCO",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_US_Assault_Vest",
		"H_LIB_US_Rangers_Helmet_NCO",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"LIB_M1_Carbine",
		"LIB_Binocular_US",
		"TWC_No1Mk3SignalGun",
		"Throw",
		"Put"
	};
	respawnWeapons[] =
	{
		"LIB_M1_Carbine",
		"LIB_Binocular_US",
		"TWC_No1Mk3SignalGun",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_13("LIB_8Rnd_762x63"),
		MAG_2("LIB_US_M18"),
		MAG_3("TWC_Magazine_SignalSmoke_Green"),
	    MAG_3("TWC_Magazine_SignalSmoke_Red"),
		MAG_3("TWC_Magazine_SignalSmoke_Yellow"),
		MAG_3("TWC_Magazine_SignalSmoke_Blue")
	};
	respawnMagazines[] =
	{
		MAG_13("LIB_8Rnd_762x63"),
		MAG_2("LIB_US_M18"),
		MAG_3("TWC_Magazine_SignalSmoke_Green"),
	    MAG_3("TWC_Magazine_SignalSmoke_Red"),
		MAG_3("TWC_Magazine_SignalSmoke_Yellow"),
		MAG_3("TWC_Magazine_SignalSmoke_Blue")
	};
};
class TWC_Infantry_WW2_US_Ranger_Woodland_Platoon_Medic: TWC_Infantry_WW2_US_Ranger_Woodland_Rifleman {
	displayName = "Platoon Medic";
	uniformClass = "U_LIB_US_Med";
	backpack = "TWC_Backpack_WW2_US_Ranger_Platoon_Medic";
	linkedItems[] =
	{
		"V_LIB_US_Assault_Vest_Light",
		"H_LIB_US_Helmet_Med_ns",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_US_Assault_Vest_Light",
		"H_LIB_US_Rangers_Helmet_Med_os",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	Items[] =
	{
		MEDICAL_LOADOUT
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT
	};
	weapons[] =
	{
		"Throw",
		"Put"
	};
	respawnWeapons[] =
	{
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_4("LIB_US_M18")
	};
	respawnMagazines[] =
	{
		MAG_4("LIB_US_M18")
	};
};
class TWC_Infantry_WW2_US_Ranger_Woodland_Messenger: TWC_Infantry_WW2_US_Ranger_Woodland_Rifleman{
	displayName = "Messenger";
};
class TWC_Infantry_WW2_US_Ranger_Woodland_AT: TWC_Infantry_WW2_US_Ranger_Woodland_Rifleman {
	displayName = "Bazooka Operator";
	uniformClass = "U_LIB_US_Rangers_Private_1st";
	backpack = "TWC_Backpack_WW2_US_Ranger_Platoon_AT";
	linkedItems[] =
	{
		"V_LIB_US_Assault_Vest",
		"H_LIB_US_Rangers_Helmet_os",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_US_Assault_Vest",
		"H_LIB_US_Rangers_Helmet_os",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	Items[] =
	{
		MEDICAL_LOADOUT
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT
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
		MAG_5("LIB_15Rnd_762x33"),
		"LIB_1Rnd_60mm_M6"
	};
	respawnMagazines[] =
	{
		MAG_5("LIB_15Rnd_762x33"),
		"LIB_1Rnd_60mm_M6"
	};
};
class TWC_Infantry_WW2_US_Ranger_Woodland_ATASS: TWC_Infantry_WW2_US_Ranger_Woodland_AT {
	displayName = "Bazooka Assistant";
	uniformClass = "U_LIB_US_Rangers_Uniform";
	backpack = "TWC_Backpack_WW2_US_Ranger_Platoon_AT";
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
		MAG_3("LIB_15Rnd_762x33"),
		"LIB_1Rnd_60mm_M6"
	};
	respawnMagazines[] =
	{
		MAG_3("LIB_15Rnd_762x33"),
		"LIB_1Rnd_60mm_M6"
	};
};
class TWC_Infantry_WW2_US_Ranger_Woodland_Mortar: TWC_Infantry_WW2_US_Ranger_Woodland_ATASS {
	displayName = "Mortarman";
	backpack = "TWC_Backpack_WW2_US_Ranger_Mortar";
	init = "(_this select 0) setVariable ['twc_keepMap',true]";
	weapons[] =
	{
		"LIB_M1A1_Carbine",
		"TWC_Weapon_M2_Mortar",
		"Throw",
		"Put"
	};
	respawnWeapons[] =
	{
		"LIB_M1A1_Carbine",
		"TWC_Weapon_M2_Mortar",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_3("LIB_15Rnd_762x33"),
		"LIB_1Rnd_60mm_M6"
	};
	respawnMagazines[] =
	{
		MAG_3("LIB_15Rnd_762x33"),
		"LIB_1Rnd_60mm_M6"
	};
};
class TWC_Infantry_WW2_US_Ranger_Woodland_Platoon_MortarAss: TWC_Infantry_WW2_US_Ranger_Woodland_Mortar {
	displayName = "Assistant Mortarman";
	backpack = "TWC_Backpack_WW2_US_Ranger_Mortar";
	weapons[] =
	{
		"LIB_M1A1_Carbine",
		"LIB_Binocular_US",
		"Throw",
		"Put"
	};
	respawnWeapons[] =
	{
		"LIB_M1A1_Carbine",
		"LIB_Binocular_US",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_13("LIB_15Rnd_762x33")
	};
	respawnMagazines[] =
	{
		MAG_13("LIB_15Rnd_762x33")
	};
};