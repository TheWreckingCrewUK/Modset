//Special Forces
//Section
class TWC_Infantry_Modern_SF_Rifleman: TWC_Infantry_2020_Base
{
	scope = 2;
	displayName = "Rifleman";
	CATEGORY(TWC_Infantry_Modern_SF)
	uniformClass = "CUP_I_B_PARA_Unit_1";
	backpack = "TWC_Backpack_Modern_SF_Rifleman";
	linkedItems[] =
	{
		"CFP_LBT6094_operator_OGA_OD",
		"CUP_H_OpsCore_Covered_MCAM_SF",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"CFP_LBT6094_operator_OGA_OD",
		"CUP_H_OpsCore_Covered_MCAM_SF",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"TWC_Weapon_C8_SF",
		"TWC_Weapon_L105A2_SF",
		"CUP_launch_M72A6",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_C8_SF",
		"TWC_Weapon_L105A2_SF",
		"CUP_launch_M72A6",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_8("CUP_30Rnd_556x45_PMAG_BLACK_PULL"),
		MAG_6("CUP_30Rnd_556x45_PMAG_BLACK_PULL_Tracer_Red"),
		MAG_2("UK3CB_BAF_9_15Rnd"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		MAG_2("ACE_M84"),
		MAG_2("B_IR_Grenade"),
		MAG_2("Chemlight_blue"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_8("CUP_30Rnd_556x45_PMAG_BLACK_PULL"),
		MAG_6("CUP_30Rnd_556x45_PMAG_BLACK_PULL_Tracer_Red"),
		MAG_2("UK3CB_BAF_9_15Rnd"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		MAG_2("ACE_M84"),
		MAG_2("B_IR_Grenade"),
		MAG_2("Chemlight_blue"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_Modern_SF_Grenadier: TWC_Infantry_Modern_SF_Rifleman
{
	displayName = "Grenadier";
	backpack = "TWC_Backpack_Modern_SF_Grenadier";
	weapons[]=
	{
		"TWC_Weapon_C8_SF_GL",
		"TWC_Weapon_L105A2_SF",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_C8_SF_GL",
		"TWC_Weapon_L105A2_SF",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_8("CUP_30Rnd_556x45_PMAG_BLACK_PULL"),
		MAG_6("CUP_30Rnd_556x45_PMAG_BLACK_PULL_Tracer_Red"),
		MAG_2("UK3CB_BAF_9_15Rnd"),
		MAG_5("UK3CB_BAF_1Rnd_HE_Grenade_Shell"),
		MAG_4("1Rnd_Smoke_Grenade_shell"),
		MAG_2("1Rnd_SmokeGreen_Grenade_shell"),
		MAG_2("1Rnd_SmokeRed_Grenade_shell"),
		MAG_2("1Rnd_SmokeBlue_Grenade_shell"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		MAG_2("ACE_M84"),
		MAG_2("B_IR_Grenade"),
		MAG_2("Chemlight_blue"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_8("CUP_30Rnd_556x45_PMAG_BLACK_PULL"),
		MAG_6("CUP_30Rnd_556x45_PMAG_BLACK_PULL_Tracer_Red"),
		MAG_2("UK3CB_BAF_9_15Rnd"),
		MAG_5("UK3CB_BAF_1Rnd_HE_Grenade_Shell"),
		MAG_4("1Rnd_Smoke_Grenade_shell"),
		MAG_2("1Rnd_SmokeGreen_Grenade_shell"),
		MAG_2("1Rnd_SmokeRed_Grenade_shell"),
		MAG_2("1Rnd_SmokeBlue_Grenade_shell"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		MAG_2("ACE_M84"),
		MAG_2("B_IR_Grenade"),
		MAG_2("Chemlight_blue"),
		MAG_2("SmokeShell")
	};
};

class TWC_Infantry_Modern_SF_Marksman: TWC_Infantry_Modern_SF_Rifleman
{
	displayName = "Marksman";
	backpack = "TWC_Backpack_Modern_SF_Marksman";
	weapons[] =
	{
		"TWC_Weapon_HK417_SF",
		"TWC_Weapon_L105A2_SF",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_HK417_SF",
		"TWC_Weapon_L105A2_SF",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_8("20Rnd_762x51_Mag"),
		MAG_4("ACE_20Rnd_762x51_Mag_Tracer"),
		MAG_2("UK3CB_BAF_9_15Rnd"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		MAG_2("ACE_M84"),
		MAG_2("B_IR_Grenade"),
		MAG_2("Chemlight_blue"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_8("20Rnd_762x51_Mag"),
		MAG_4("ACE_20Rnd_762x51_Mag_Tracer"),
		MAG_2("UK3CB_BAF_9_15Rnd"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		MAG_2("ACE_M84"),
		MAG_2("B_IR_Grenade"),
		MAG_2("Chemlight_blue"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_Modern_SF_SectionCommander: TWC_Infantry_Modern_SF_Rifleman
{
	displayName = "Section Commander";
	backpack = "TWC_Backpack_Modern_SF_Commander";
	TWC_isCommandRole = 1;
	linkedItems[] =
	{
		"CFP_LBT6094_operator_OGA_OD",
		"CUP_H_OpsCore_Covered_MCAM_SF",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"CFP_LBT6094_operator_OGA_OD",
		"CUP_H_OpsCore_Covered_MCAM_SF",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"TWC_Weapon_C8_SF",
		"TWC_Weapon_L105A2_SF",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_C8_SF",
		"TWC_Weapon_L105A2_SF",
		"ACE_Vector",
		"Throw",
		"Put"
	};
};
class TWC_Infantry_Modern_SF_2iC: TWC_Infantry_Modern_SF_Rifleman
{
	displayName = "Team Leader";
	backpack = "TWC_Backpack_Modern_SF_TeamLead";
	TWC_isCommandRole = 1;	
	weapons[] =
	{
		"TWC_Weapon_C8_SF",
		"TWC_Weapon_L105A2_SF",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_C8_SF",
		"TWC_Weapon_L105A2_SF",
		"ACE_Vector",
		"Throw",
		"Put"
	};
};

class TWC_Infantry_Modern_SF_Medic: TWC_Infantry_Modern_SF_Rifleman
{
	displayName = "Team Medic";
	backpack = "TWC_Backpack_Modern_SF_Medic";
	attendant = 1;
	weapons[] =
	{
		"TWC_Weapon_C8_SF",
		"TWC_Weapon_L105A2_SF",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_C8_SF",
		"TWC_Weapon_L105A2_SF",
		"ACE_Vector",
		"Throw",
		"Put"
	};
};

//Aircraft
class TWC_Infantry_Modern_SF_FAC: TWC_Infantry_Modern_SF_Grenadier
{
	displayName = "JTAC";
	backpack = "TWC_Backpack_Modern_SF_JTAC";
	linkedItems[] =
	{
		"CFP_LBT6094_operator_OGA_OD",
		"CUP_H_OpsCore_Covered_MCAM_SF",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"CFP_LBT6094_operator_OGA_OD",
		"CUP_H_OpsCore_Covered_MCAM_SF",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"TWC_Weapon_C8_SF_GL",
		"TWC_Weapon_L105A2_SF",
		"UK3CB_BAF_Soflam_Laserdesignator",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_Weapon_C8_SF_GL",
		"TWC_Weapon_L105A2_SF",
		"UK3CB_BAF_Soflam_Laserdesignator",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_8("CUP_30Rnd_556x45_PMAG_BLACK_PULL"),
		MAG_6("CUP_30Rnd_556x45_PMAG_BLACK_PULL_Tracer_Red"),
		MAG_2("UK3CB_BAF_9_15Rnd"),
		MAG_5("UK3CB_BAF_1Rnd_HE_Grenade_Shell"),
		MAG_4("1Rnd_Smoke_Grenade_shell"),
		MAG_2("1Rnd_SmokeGreen_Grenade_shell"),
		MAG_2("1Rnd_SmokeRed_Grenade_shell"),
		MAG_2("1Rnd_SmokeBlue_Grenade_shell"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		MAG_2("ACE_M84"),
		MAG_2("B_IR_Grenade"),
		MAG_2("Chemlight_blue"),
		MAG_2("SmokeShell"),
		"Laserbatteries"
	};
	respawnmagazines[] =
	{
		MAG_8("CUP_30Rnd_556x45_PMAG_BLACK_PULL"),
		MAG_6("CUP_30Rnd_556x45_PMAG_BLACK_PULL_Tracer_Red"),
		MAG_2("UK3CB_BAF_9_15Rnd"),
		MAG_5("UK3CB_BAF_1Rnd_HE_Grenade_Shell"),
		MAG_4("1Rnd_Smoke_Grenade_shell"),
		MAG_2("1Rnd_SmokeGreen_Grenade_shell"),
		MAG_2("1Rnd_SmokeRed_Grenade_shell"),
		MAG_2("1Rnd_SmokeBlue_Grenade_shell"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		MAG_2("ACE_M84"),
		MAG_2("B_IR_Grenade"),
		MAG_2("Chemlight_blue"),
		MAG_2("SmokeShell"),
		"Laserbatteries"
	};
};

