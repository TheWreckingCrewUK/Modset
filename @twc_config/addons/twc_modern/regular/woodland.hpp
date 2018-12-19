//REGULAR, WOODLAND
//Section
class TWC_Infantry_Modern_Regular_Woodland_Rifleman: TWC_Infantry_Modern_Base
{
	scope = 2;
	displayName = "Rifleman";
	weapons[] =
	{
		"UK3CB_BAF_L85A2_RIS_ELCAN3D",
		"launch_NLAW_F",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"UK3CB_BAF_L85A2_RIS_ELCAN3D",
		"launch_NLAW_F",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_7("UK3CB_BAF_556_30Rnd"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_7("UK3CB_BAF_556_30Rnd"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_Modern_Regular_Woodland_Grenadier: TWC_Infantry_Modern_Regular_Woodland_Rifleman
{
	displayName = "Grenadier";
	linkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_Grenadier_B",
		"UK3CB_BAF_H_Mk7_Scrim_F",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_Grenadier_B",
		"UK3CB_BAF_H_Mk7_Scrim_F",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[]=
	{
		"UK3CB_BAF_L85A2_UGL_ELCAN3D",
		"CUP_launch_M72A6",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"UK3CB_BAF_L85A2_UGL_ELCAN3D",
		"CUP_launch_M72A6",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_7("UK3CB_BAF_556_30Rnd"),
		MAG_10("1Rnd_HE_Grenade_shell"),
		MAG_4("1Rnd_Smoke_Grenade_shell"),
		MAG_2("1Rnd_SmokeGreen_Grenade_shell"),
		MAG_2("1Rnd_SmokeRed_Grenade_shell"),
		MAG_2("1Rnd_SmokeBlue_Grenade_shell"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_7("UK3CB_BAF_556_30Rnd"),
		MAG_10("1Rnd_HE_Grenade_shell"),
		MAG_4("1Rnd_Smoke_Grenade_shell"),
		MAG_2("1Rnd_SmokeGreen_Grenade_shell"),
		MAG_2("1Rnd_SmokeRed_Grenade_shell"),
		MAG_2("1Rnd_SmokeBlue_Grenade_shell"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_Modern_Regular_Woodland_Autorifleman: TWC_Infantry_Modern_Regular_Woodland_Rifleman
{
	displayName = "Autorifleman";
	linkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_MG_A",
		"UK3CB_BAF_H_Mk7_Scrim_F",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_MG_A",
		"UK3CB_BAF_H_Mk7_Scrim_F",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"UK3CB_BAF_L110A2_ELCAN3D",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"UK3CB_BAF_L110A2_ELCAN3D",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_2("UK3CB_BAF_556_200Rnd"),
		"UK3CB_BAF_556_200Rnd_T",
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_2("UK3CB_BAF_556_200Rnd"),
		"UK3CB_BAF_556_200Rnd_T",
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_Modern_Regular_Woodland_MG: TWC_Infantry_Modern_Regular_Woodland_Rifleman
{
	displayName = "Machine Gunner";
	linkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_MG_A",
		"UK3CB_BAF_H_Mk7_Scrim_F",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_MG_A",
		"UK3CB_BAF_H_Mk7_Scrim_F",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"twc_L7A2",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"twc_L7A2",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_2("UK3CB_BAF_762_100Rnd"),
		"UK3CB_BAF_762_100Rnd_T",
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_2("UK3CB_BAF_762_100Rnd"),
		"UK3CB_BAF_762_100Rnd_T",
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_Modern_Regular_Woodland_Marksman: TWC_Infantry_Modern_Regular_Woodland_Rifleman
{
	displayName = "Marksman";
	linkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_Marksman_A",
		"UK3CB_BAF_H_Mk7_Scrim_F",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_Marksman_A",
		"UK3CB_BAF_H_Mk7_Scrim_F",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"UK3CB_BAF_L129A1_Grippod_TA648",
		"launch_NLAW_F",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"UK3CB_BAF_L129A1_Grippod_TA648",
		"launch_NLAW_F",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_5("UK3CB_BAF_762_L42A1_20Rnd"),
		MAG_2("UK3CB_BAF_762_L42A1_20Rnd_T"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_5("UK3CB_BAF_762_L42A1_20Rnd"),
		MAG_2("UK3CB_BAF_762_L42A1_20Rnd_T"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_Modern_Regular_Woodland_SectionCommander: TWC_Infantry_Modern_Regular_Woodland_Rifleman
{
	displayName = "Section Commander";
	linkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_SL_B",
		"UK3CB_BAF_H_Mk7_Scrim_F",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"UK3CB_BAF_V_Osprey_SL_B",
		"UK3CB_BAF_H_Mk7_Scrim_F",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"UK3CB_BAF_L85A2_RIS_ELCAN3D",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"UK3CB_BAF_L85A2_RIS_ELCAN3D",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_5("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_556_30Rnd_T"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_5("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_556_30Rnd_T"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_Modern_Regular_Woodland_2iC: TWC_Infantry_Modern_Regular_Woodland_Rifleman
{
	displayName = "2iC";
	weapons[] =
	{
		"UK3CB_BAF_L85A2_RIS_ELCAN3D",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"UK3CB_BAF_L85A2_RIS_ELCAN3D",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_5("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_556_30Rnd_T"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_5("UK3CB_BAF_556_30Rnd"),
		MAG_2("UK3CB_BAF_556_30Rnd_T"),
		MAG_2("CUP_HandGrenade_L109A2_HE"),
		MAG_2("SmokeShell")
	};
};

//Platoon
class TWC_Infantry_Modern_Regular_Woodland_Platoon_Commander
class TWC_Infantry_Modern_Regular_Woodland_Platoon_Sergeant
class TWC_Infantry_Modern_Regular_Woodland_Platoon_Medic
class TWC_Infantry_Modern_Regular_Woodland_CSM

//AT + AA
class TWC_Infantry_Modern_Regular_Woodland_Javelin_Gunner
class TWC_Infantry_Modern_Regular_Woodland_Javelin_Ass

class TWC_Infantry_Modern_Regular_Woodland_Starstreak_Gunner
class TWC_Infantry_Modern_Regular_Woodland_Starstreak_Ass

//Sniper Team
class TWC_Infantry_Modern_Regular_Woodland_Sniper
class TWC_Infantry_Modern_Regular_Woodland_Spotter

//Artillery Crew
class TWC_Infantry_Modern_Regular_Woodland_Artillery_Commander
class TWC_Infantry_Modern_Regular_Woodland_Artillery_Crew
class TWC_Infantry_Modern_Regular_Woodland_FO

//Aircraft
class TWC_Infantry_Modern_Regular_Woodland_FAC
class TWC_Infantry_Modern_Regular_Woodland_Helicopter_Pilot

//FVs
class TWC_Infantry_Modern_Regular_Woodland_Vehicle_Commander
class TWC_Infantry_Modern_Regular_Woodland_Vehicle_Crew