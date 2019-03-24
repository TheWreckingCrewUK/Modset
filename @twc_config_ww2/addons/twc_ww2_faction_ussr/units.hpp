class TWC_Infantry_WW2_USSR_Base: O_Soldier_base_F
{
	scope = 1;
	displayName = "Base";
	faction = "TWC_WW2_USSR";
	CATEGORY(TWC_Infantry_Regular_Arctic)
	icon = "iconMan";
	nakedUniform = "U_BasicBody";
	uniformClass = "U_LIB_SOV_Strelok_w";
	backpack = "";
	
	linkedItems[] =
	{
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
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
	respawnweapons[] =
	{
		"Throw",
		"Put"
	};
	magazines[] = {};
	respawnmagazines[] = {};
	
	nightItems[] = {
		"Chemlight_green",
		"Chemlight_green"
	};
};
class TWC_Infantry_WW2_USSR_Rifleman: TWC_Infantry_WW2_USSR_Base
{
	scope = 2;
	displayName = "Rifleman";
	linkedItems[] +=
	{
		"V_LIB_SOV_RA_SVTBelt",
		"H_LIB_SOV_RA_Helmet"
	};
	respawnLinkedItems[] +=
	{
		"V_LIB_SOV_RA_SVTBelt",
		"H_LIB_SOV_RA_Helmet"
	};
	weapons[] +=
	{
		"LIB_SVT_40"
	};
	respawnweapons[] +=
	{
		"LIB_SVT_40"
	};
	magazines[] +=
	{
		MAG_12("LIB_10Rnd_762x54"),
		"LIB_Rg42"
	};
	respawnmagazines[] +=
	{
		MAG_12("LIB_10Rnd_762x54"),
		"LIB_Rg42"
	};
};
class TWC_Infantry_WW2_USSR_SMG: TWC_Infantry_WW2_USSR_Base
{
	scope = 2;
	displayName = "Submachine Gunner";
	linkedItems[] +=
	{
		"V_LIB_SOV_RA_PPShBelt",
		"H_LIB_SOV_RA_Helmet"
	};
	respawnLinkedItems[] +=
	{
		"V_LIB_SOV_RA_PPShBelt",
		"H_LIB_SOV_RA_Helmet"
	};
	weapons[] +=
	{
		"LIB_PPSh41_m"
	};
	respawnweapons[] +=
	{
		"LIB_PPSh41_m"
	};
	magazines[] +=
	{
		MAG_5("LIB_71Rnd_762x25"),
		MAG_3("LIB_Rg42")
	};
	respawnmagazines[] +=
	{
		MAG_5("LIB_71Rnd_762x25"),
		MAG_3("LIB_Rg42")
	};
};
class TWC_Infantry_WW2_USSR_MG: TWC_Infantry_WW2_USSR_Base
{
	scope = 2;
	displayName = "Machine Gunner";
	linkedItems[] +=
	{
		"V_LIB_SOV_RA_PPShBelt",
		"H_LIB_SOV_RA_Helmet"
	};
	respawnLinkedItems[] +=
	{
		"V_LIB_SOV_RA_PPShBelt",
		"H_LIB_SOV_RA_Helmet"
	};
	weapons[] +=
	{
		"LIB_DP28"
	};
	respawnweapons[] +=
	{
		"LIB_DP28"
	};
	magazines[] +=
	{
		MAG_5("LIB_47Rnd_762x54")
	};
	respawnmagazines[] +=
	{
		MAG_5("LIB_47Rnd_762x54")
	};
};
class TWC_Infantry_WW2_USSR_ASSMG: TWC_Infantry_WW2_USSR_Rifleman
{
	displayName = "Assistant Machine Gunner";
	backpack = "TWC_Backpack_WW2_USSR_ASSMG";
	magazines[] +=
	{
		MAG_10("LIB_10Rnd_762x54"),
		"LIB_Rg42"
	};
	respawnmagazines[] +=
	{
		MAG_10("LIB_10Rnd_762x54"),
		"LIB_Rg42"
	};
};
class TWC_Infantry_WW2_USSR_2iC: TWC_Infantry_WW2_USSR_Rifleman
{
	displayName = "2iC";
	backpack = "TWC_Backpack_WW2_USSR_2iC";
};
class TWC_Infantry_WW2_USSR_SectionCommander: TWC_Infantry_WW2_USSR_Base
{
	scope = 2;
	displayName = "Section Commander";
	linkedItems[] +=
	{
		"V_LIB_SOV_RA_PPShBelt",
		"H_LIB_SOV_RA_Helmet"
	};
	respawnLinkedItems[] +=
	{
		"V_LIB_SOV_RA_PPShBelt",
		"H_LIB_SOV_RA_Helmet"
	};
	weapons[] +=
	{
		"LIB_PPSh41_m"
	};
	respawnweapons[] +=
	{
		"LIB_PPSh41_m"
	};
	magazines[] +=
	{
		MAG_5("LIB_35Rnd_762x25")
	};
	respawnmagazines[] +=
	{
		MAG_5("LIB_35Rnd_762x25")
	};
};

class TWC_Infantry_WW2_USSR_Platoon_Commander: TWC_Infantry_WW2_USSR_Base
{
	scope = 2;
	displayName = "Platoon Commander";
	class EventHandlers: EventHandlers {
		init = "(_this select 0) setVariable [""twc_keepMap"",true]";
	};
	backpack = "TWC_Backpack_WW2_USSR_Platoon_Commander";
	linkedItems[] +=
	{
		"V_LIB_SOV_RA_TankOfficerSet",
		"H_LIB_SOV_RA_OfficerCap"
	};
	respawnLinkedItems[] +=
	{
		"V_LIB_SOV_RA_TankOfficerSet",
		"H_LIB_SOV_RA_OfficerCap"
	};
	weapons[] +=
	{
		"LIB_PPSh41_m"
	};
	respawnweapons[] +=
	{
		"LIB_PPSh41_m"
	};
	magazines[] +=
	{
		MAG_5("LIB_35Rnd_762x25")
	};
	respawnmagazines[] +=
	{
		MAG_5("LIB_35Rnd_762x25")
	};
};
class TWC_Infantry_WW2_USSR_Platoon_Sergeant: TWC_Infantry_WW2_USSR_Base
{
	scope = 2;
	displayName = "Platoon Sergeant";
	class EventHandlers: EventHandlers {
		init = "(_this select 0) setVariable [""twc_keepMap"",true]";
	};
	backpack = "TWC_Backpack_WW2_USSR_Platoon_Sergeant";
	linkedItems[] +=
	{
		"V_LIB_SOV_RA_SVTBelt",
		"H_LIB_SOV_Ushanka"
	};
	respawnLinkedItems[] +=
	{
		"V_LIB_SOV_RA_SVTBelt",
		"H_LIB_SOV_Ushanka"
	};
	weapons[] +=
	{
		"LIB_SVT_40"
	};
	respawnweapons[] +=
	{
		"LIB_SVT_40"
	};
	magazines[] +=
	{
		MAG_12("LIB_10Rnd_762x54")
	};
	respawnmagazines[] +=
	{
		MAG_12("LIB_10Rnd_762x54")
	};
};
class TWC_Infantry_WW2_USSR_Platoon_Medic: TWC_Infantry_WW2_USSR_Base
{
	scope = 2;
	displayName = "Platoon Medic";
	backpack = "TWC_Backpack_WW2_USSR_Platoon_Medic";
	linkedItems[] +=
	{
		"V_LIB_SOV_RA_SVTBelt",
		"H_LIB_SOV_Ushanka"
	};
	respawnLinkedItems[] +=
	{
		"V_LIB_SOV_RA_SVTBelt",
		"H_LIB_SOV_Ushanka"
	};
	weapons[] +=
	{
		"LIB_PPSh41_m"
	};
	respawnweapons[] +=
	{
		"LIB_PPSh41_m"
	};
	magazines[] +=
	{
		MAG_5("LIB_35Rnd_762x25")
	};
	respawnmagazines[] +=
	{
		MAG_5("LIB_35Rnd_762x25")
	};
};

class TWC_Infantry_WW2_USSR_Tank_Commander: TWC_Infantry_WW2_USSR_Base
{
	scope = 2;
	displayName = "Tank Commander";
	uniformClass = "U_LIB_SOV_Tank_sergeant";
	class EventHandlers: EventHandlers {
		init = "(_this select 0) setVariable [""twc_keepMap"",true]";
	};
	linkedItems[] +=
	{
		"V_LIB_SOV_RA_Belt",
		"H_LIB_SOV_TankHelmet"
	};
	respawnLinkedItems[] +=
	{
		"V_LIB_SOV_RA_Belt",
		"H_LIB_SOV_TankHelmet"
	};
	weapons[] +=
	{
		"LIB_PPSh41_m"
	};
	respawnweapons[] +=
	{
		"LIB_PPSh41_m"
	};
	magazines[] +=
	{
		MAG_3("LIB_35Rnd_762x25")
	};
	respawnmagazines[] +=
	{
		MAG_3("LIB_35Rnd_762x25")
	};
};
class TWC_Infantry_WW2_USSR_Tank_Crew: TWC_Infantry_WW2_USSR_Base
{
	scope = 2;
	displayName = "Tank Crew";
	uniformClass = "U_LIB_SOV_Tank_ryadovoi";
	linkedItems[] +=
	{
		"V_LIB_SOV_RA_Belt",
		"H_LIB_SOV_TankHelmet"
	};
	respawnLinkedItems[] +=
	{
		"V_LIB_SOV_RA_Belt",
		"H_LIB_SOV_TankHelmet"
	};
	weapons[] +=
	{
		"LIB_PPSh41_m"
	};
	respawnweapons[] +=
	{
		"LIB_PPSh41_m"
	};
	magazines[] +=
	{
		MAG_3("LIB_35Rnd_762x25")
	};
	respawnmagazines[] +=
	{
		MAG_3("LIB_35Rnd_762x25")
	};
};