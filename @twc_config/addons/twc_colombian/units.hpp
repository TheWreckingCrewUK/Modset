// Squad
class TWC_Infantry_Colombia_Rifleman: TWC_Infantry_Colombia_Base {
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman";
	linkedItems[] =
	{
		"SP_P58_FightingOrder",
		"CUP_H_Ger_M92",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"SP_P58_FightingOrder",
		"CUP_H_Ger_M92",
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
		"CUP_arifle_Galil_SAR_black",
		"Throw",
		"Put"
	};
	respawnWeapons[] =
	{
		"CUP_arifle_Galil_SAR_black",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_7("CUP_35Rnd_556x45_Galil_Mag"),
		MAG_2("CUP_HandGrenade_M67"),
		MAG_2("SmokeShell")
	};
	respawnMagazines[] =
	{
		MAG_7("CUP_35Rnd_556x45_Galil_Mag"),
		MAG_2("CUP_HandGrenade_M67"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_Colombia_RiflemanAT: TWC_Infantry_Colombia_Rifleman {
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman (AT)";
	weapons[] =
	{
		"CUP_arifle_Galil_SAR_black",
		"CUP_launch_M72A6",
		"Throw",
		"Put"
	};
	respawnWeapons[] =
	{
		"CUP_arifle_Galil_SAR_black",
		"CUP_launch_M72A6",
		"Throw",
		"Put"
	};
};

class TWC_Infantry_Colombia_Grenadier: TWC_Infantry_Colombia_Rifleman {
	displayName = "Grenadier";
	weapons[] =
	{
		"CUP_arifle_M16A2_GL",
		"Throw",
		"Put"
	};
	respawnWeapons[] =
	{
		"CUP_arifle_M16A2_GL",
		"Throw",
		"Put"
	};
	linkedItems[] =
	{
		"TWC_Vest_Colombia_Grenadier",
		"CUP_H_Ger_M92",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"TWC_Vest_Colombia_Grenadier",
		"CUP_H_Ger_M92",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	magazines[] =
	{
		MAG_7("CUP_30Rnd_556x45_Stanag"),
		MAG_10("1Rnd_HE_Grenade_shell"),
		MAG_4("1Rnd_Smoke_Grenade_shell"),
		MAG_2("1Rnd_SmokeGreen_Grenade_shell"),
		MAG_2("1Rnd_SmokeRed_Grenade_shell"),
		MAG_2("1Rnd_SmokeBlue_Grenade_shell"),
		MAG_2("CUP_HandGrenade_M67"),
		MAG_2("SmokeShell")
	};
	respawnMagazines[] =
	{
		MAG_7("CUP_30Rnd_556x45_Stanag"),
		MAG_10("1Rnd_HE_Grenade_shell"),
		MAG_4("1Rnd_Smoke_Grenade_shell"),
		MAG_2("1Rnd_SmokeGreen_Grenade_shell"),
		MAG_2("1Rnd_SmokeRed_Grenade_shell"),
		MAG_2("1Rnd_SmokeBlue_Grenade_shell"),
		MAG_2("CUP_HandGrenade_M67"),
		MAG_2("SmokeShell")
	};
};

class TWC_Infantry_Colombia_MG: TWC_Infantry_Colombia_Rifleman {
	displayName = "Machine Gunner";
	uniformClass = "CUP_U_B_BDUv2_roll_M81";
	linkedItems[] =
	{
		"TWC_Vest_Colombia_MG",
		"CUP_H_Ger_M92",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"TWC_Vest_Colombia_MG",
		"CUP_H_Ger_M92",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"CUP_lmg_M60",
		"Throw",
		"Put"
	};
	respawnWeapons[] =
	{
		"CUP_lmg_M60",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_3("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
	};
	respawnMagazines[] =
	{
		MAG_3("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
	};
};

class TWC_Infantry_Colombia_TeamLeader: TWC_Infantry_Colombia_Rifleman {
	displayName = "Team Leader";
	backpack = "TWC_Backpack_Colombia_TeamLeader";
	magazines[] =
	{
		MAG_5("CUP_35Rnd_556x45_Galil_Mag"),
		MAG_2("CUP_35Rnd_556x45_Red_Tracer_Galil_Mag"),
		MAG_2("CUP_HandGrenade_M67"),
		MAG_2("SmokeShell")
	};
	respawnMagazines[] =
	{
		MAG_5("CUP_35Rnd_556x45_Galil_Mag"),
		MAG_2("CUP_35Rnd_556x45_Red_Tracer_Galil_Mag"),
		MAG_2("CUP_HandGrenade_M67"),
		MAG_2("SmokeShell")
	};
};

class TWC_Infantry_Colombia_SquadLeader: TWC_Infantry_Colombia_TeamLeader {
	displayName = "Squad Leader";
	backpack = "TWC_Backpack_Colombia_SquadLeader";
	magazines[] =
	{
		MAG_5("CUP_35Rnd_556x45_Galil_Mag"),
		MAG_2("CUP_35Rnd_556x45_Red_Tracer_Galil_Mag"),
		MAG_2("SmokeShell")
	};
	respawnMagazines[] =
	{
		MAG_5("CUP_35Rnd_556x45_Galil_Mag"),
		MAG_2("CUP_35Rnd_556x45_Red_Tracer_Galil_Mag"),
		MAG_2("SmokeShell")
	};
};

class TWC_Infantry_Colombia_PlatoonLeader: TWC_Infantry_Colombia_SquadLeader {
	displayName = "Platoon Leader";
	backpack = "TWC_Backpack_Colombia_PlatoonLeader";
	linkedItems[] =
	{
		"SP_P58_FightingOrder",
		"CUP_H_US_patrol_cap_WDL",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"SP_P58_FightingOrder",
		"CUP_H_US_patrol_cap_WDL",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	magazines[] =
	{
		MAG_3("CUP_35Rnd_556x45_Galil_Mag"),
		MAG_2("CUP_35Rnd_556x45_Red_Tracer_Galil_Mag"),
		MAG_2("SmokeShell")
	};
	respawnMagazines[] =
	{
		MAG_3("CUP_35Rnd_556x45_Galil_Mag"),
		MAG_2("CUP_35Rnd_556x45_Red_Tracer_Galil_Mag"),
		MAG_2("SmokeShell")
	};
};

class TWC_Infantry_Colombia_PlatoonSergeant: TWC_Infantry_Colombia_PlatoonLeader {
	displayName = "Platoon Sergeant";
	backpack = "TWC_Backpack_Colombia_PlatoonSergeant";
};

class TWC_Infantry_Colombia_PlatoonMedic: TWC_Infantry_Colombia_Rifleman {
	displayName = "Platoon Medic";
	backpack = "TWC_Backpack_Colombia_PlatoonMedic";
	attendant = 1;
	magazines[] =
	{
		MAG_3("CUP_35Rnd_556x45_Galil_Mag"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_3("CUP_35Rnd_556x45_Galil_Mag"),
		MAG_2("SmokeShell")
	};
};