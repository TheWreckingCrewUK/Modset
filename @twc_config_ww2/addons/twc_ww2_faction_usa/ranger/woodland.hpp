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
		MAG_7("LIB_30Rnd_45ACP"),
		MAG_2("LIB_US_Mk_2")
	};
	respawnMagazines[] =
	{
		MAG_7("LIB_30Rnd_45ACP"),
		MAG_2("LIB_US_Mk_2")
	};
};
class TWC_Infantry_WW2_US_Ranger_Woodland_MG: TWC_Infantry_WW2_US_Ranger_Woodland_SMG {
	displayName = "Machine Gunner";
	uniformClass = "U_LIB_US_Rangers_Private_1st";
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
		MAG_2("LIB_100Rnd_762x63")
	};
	respawnMagazines[] =
	{
		MAG_2("LIB_100Rnd_762x63")
	};
};
class TWC_Infantry_WW2_US_Ranger_Woodland_MGASS: TWC_Infantry_WW2_US_Ranger_Woodland_SMG {
	displayName = "Assistant Machine Gunner";
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
class TWC_Infantry_WW2_US_Ranger_Woodland_Ammobearer: TWC_Infantry_WW2_US_Ranger_Woodland_Rifleman {
	displayName = "Ammobearer";
	backpack = "TWC_Backpack_WW2_US_Ranger_Ammobearer";
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
class TWC_Infantry_WW2_US_Ranger_Woodland_SeniorRifleman: TWC_Infantry_WW2_US_Ranger_Woodland_Rifleman {
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
class TWC_Infantry_WW2_US_Ranger_Woodland_2iC: TWC_Infantry_WW2_US_Ranger_Woodland_MGASS {
	displayName = "Team Leader";
	TWC_isCommandRole = 1;
	uniformClass = "U_LIB_US_Rangers_Corp";
	backpack = "TWC_Backpack_WW2_US_Ranger_TeamLeader;"
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
		"V_LIB_US_Assault_Vest_Thompson",
		"H_LIB_US_Rangers_Helmet_First_lieutenant",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_US_Assault_Vest_Thompson",
		"H_LIB_US_Rangers_Helmet_First_lieutenant",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	Items[] =
	{
		MEDICAL_LOADOUT,
		"ACE_MapTools"
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT,
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
class TWC_Infantry_WW2_US_Ranger_Woodland_Platoon_Sergeant: TWC_Infantry_WW2_US_Ranger_Woodland_MGASS {
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
		"TWC_No1Mk3SignalGun"
		"Throw",
		"Put"
	};
	respawnWeapons[] =
	{
		"LIB_M1_Carbine",
		"LIB_Binocular_US",
		"TWC_No1Mk3SignalGun"
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_13("LIB_8Rnd_762x63"),
		MAG_2("LIB_US_M18")
		MAG_3("TWC_Magazine_SignalSmoke_Green"),
	    MAG_3("TWC_Magazine_SignalSmoke_Red"),
		MAG_3("TWC_Magazine_SignalSmoke_Yellow"),
		MAG_3("TWC_Magazine_SignalSmoke_Blue")
	};
	respawnMagazines[] =
	{
		MAG_13("LIB_8Rnd_762x63"),
		MAG_2("LIB_US_M18")
		MAG_3("TWC_Magazine_SignalSmoke_Green"),
	    MAG_3("TWC_Magazine_SignalSmoke_Red"),
		MAG_3("TWC_Magazine_SignalSmoke_Yellow"),
		MAG_3("TWC_Magazine_SignalSmoke_Blue")
	};
};
class TWC_Infantry_WW2_US_Ranger_Woodland_Platoon_Medic: TWC_Infantry_WW2_US_Ranger_Woodland_Rifleman {
	displayName = "Platoon Medic";
	uniformClass = "U_LIB_US_Med";
	linkedItems[] =
	{
		"V_LIB_US_Assault_Vest",
		"H_LIB_US_Rangers_Helmet_Med_os",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"V_LIB_US_Assault_Vest",
		"H_LIB_US_Rangers_Helmet_Med_os",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	Items[] =
	{
		MEDICAL_LOADOUT
		MAG_20(ACE_fieldDressing),
        MAG_10(ACE_morphine),
        MAG_20(ACE_elasticBandage),
        MAG_20(ACE_quikclot),
        MAG_20(ACE_packingBandage),
        MAG_4(ACE_adenosine),
        MAG_4(ACE_atropine),
        MAG_10(ACE_epinephrine),
        MAG_6(ACE_salineIV_500),
        MAG_4(ACE_tourniquet),
        MAG_1(ACE_personalAidKit),
        MAG_1(TWC_Item_Medical_SutureKit_25),
	};
	respawnItems[] =
	{
		MEDICAL_LOADOUT
		MAG_20(ACE_fieldDressing),
        MAG_10(ACE_morphine),
        MAG_20(ACE_elasticBandage),
        MAG_20(ACE_quikclot),
        MAG_20(ACE_packingBandage),
        MAG_4(ACE_adenosine),
        MAG_4(ACE_atropine),
        MAG_10(ACE_epinephrine),
        MAG_6(ACE_salineIV_500),
        MAG_4(ACE_tourniquet),
        MAG_1(ACE_personalAidKit),
        MAG_1(TWC_Item_Medical_SutureKit_25),
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
		MAG_2("LIB_US_M18")
	};
	respawnMagazines[] =
	{
		MAG_2("LIB_US_M18")
	};
};
class TWC_Infantry_WW2_US_Ranger_Woodland_Platoon_AT: TWC_Infantry_WW2_US_Ranger_Woodland_Rifleman {
	displayName = "AT Rifleman";
	uniformClass = "U_LIB_US_Rangers_Private_1st";
	backpack = "";
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
		MAG_3("LIB_15Rnd_762x33"),
		"LIB_1Rnd_60mm_M6"
	};
	respawnMagazines[] =
	{
		MAG_3("LIB_15Rnd_762x33"),
		"LIB_1Rnd_60mm_M6"
	};
};
class TWC_Infantry_WW2_US_Ranger_Woodland_Platoon_ATASS: TWC_Infantry_WW2_US_Ranger_Woodland_AT {
	displayName = "AT Assistant";
	uniformClass = "U_LIB_US_Rangers_Uniform";
	backpack = ""
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