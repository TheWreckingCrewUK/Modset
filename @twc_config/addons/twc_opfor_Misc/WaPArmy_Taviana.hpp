 		  //////////////////////////////////////
		  //////////     Infantry     //////////
		  //////////////////////////////////////
class TWC_WaPArmy_Taviana_Base: O_Soldier_base_F
{
	displayName="Base";
	faction="TWC_WaPArmy_Taviana";
	uniformClass="CUP_U_O_CHDKZ_Kam_02";
	genericNames = "CUP_Names_RussianMen";
	identityTypes[]=
	{
		"CUP_D_Language_RU",
		"Head_Euro",
		"G_GUERIL_default"
	};
	linkedItems[] =
	{
		"CUP_V_O_Ins_Carrier_Rig_Light",
		"CUP_H_SLA_Helmet",
		"ItemCompass",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"CUP_V_RUS_Smersh_1",
		"CUP_H_SLA_Helmet",
		"ItemCompass",
		"ItemWatch"
	};
	Items[]=
	{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_morphine",
		"ACE_tourniquet"
	};
	respawntems[]=
	{
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_fieldDressing",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_packingBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_elasticBandage",
		"ACE_morphine",
		"ACE_tourniquet"
	};
	weapons[]=
	{
		"Throw",
		"Put",
		"CUP_arifle_Sa58P"
	};
	respawnweapons[]=
	{
		"Throw",
		"Put",
		"CUP_arifle_Sa58P"
	};
	magazines[]=
	{
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5"
	};
	Respawnmagazines[]=
	{
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_HandGrenade_RGD5",
		"CUP_HandGrenade_RGD5"
	};
	
};
class TWC_WaPArmy_Taviana_Rifleman: TWC_WaPArmy_Taviana_Base
{
	scope = 2;
	displayName="Rifleman";
	linkedItems[] =
	{
		"CUP_V_RUS_Smersh_1",
		"CUP_H_SLA_Helmet",
		"ItemCompass",
		"ItemWatch"
	};
};
class TWC_WaPArmy_Taviana_Squadleader: TWC_WaPArmy_Taviana_Rifleman
{
	displayName="Squadleader";
	icon="iconManLeader";
	linkedItems[] =
	{
		"CUP_V_O_Ins_Carrier_Rig_Com",
		"CUP_H_SLA_Helmet",
		"ItemCompass",
		"ItemWatch",
		"ItemRadioAcreFlagged"
	};
	respawnLinkedItems[] =
	{
		"CUP_V_O_Ins_Carrier_Rig_Com",
		"CUP_H_SLA_Helmet",
		"ItemCompass",
		"ItemWatch",
		"ItemRadioAcreFlagged"
	};
	weapons[]=
	{
		"Throw",
		"Put",
		"CUP_arifle_Sa58P",
		"Binocular"
	};
	respawnweapons[]=
	{
		"Throw",
		"Put",
		"CUP_arifle_Sa58P",
		"Binocular"
	};
};
class TWC_WaPArmy_Taviana_Grenadier: TWC_WaPArmy_Taviana_Rifleman
{
	displayName="Grenadier";
	icon="iconManAT";
	backpack = "RPG_bag";
	weapons[]=
	{
		"Throw",
		"Put",
		"CUP_arifle_Sa58P",
		"CUP_launch_RPG7V"
	};
	respawnweapons[]=
	{
		"Throw",
		"Put",
		"CUP_arifle_Sa58P",
		"CUP_launch_RPG7V"
	};
	magazines[]=
	{
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_HandGrenade_RGD5"
	};
	Respawnmagazines[]=
	{
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_HandGrenade_RGD5"
	};
};
class TWC_WaPArmy_Taviana_Grenadier_Ass: TWC_WaPArmy_Taviana_Rifleman
{
	displayName="Grenadier Assistant";
	backpack = "RPG_bag";
};
class TWC_WaPArmy_Taviana_AutoRifleman: TWC_WaPArmy_Taviana_Base
{
	scope = 2;
	displayName="Auto-Rifleman";
	icon="iconManMG";
	backpack = "WaPAT_Backpack_RPK";
	weapons[]=
	{
		"Throw",
		"Put",
		"CUP_arifle_RPK74"
	};
	respawnweapons[]=
	{
		"Throw",
		"Put",
		"CUP_arifle_RPK74"
	};
	magazines[]=
	{
		"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
		"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
		"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
		"CUP_HandGrenade_RGD5"
	};
	Respawnmagazines[]=
	{
		"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
		"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
		"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
		"CUP_HandGrenade_RGD5"
	};
};
class TWC_WaPArmy_Taviana_MG: TWC_WaPArmy_Taviana_AutoRifleman
{
	displayName="Machine Gunner";
	backpack = "WaPAT_Backpack_UK59";
	weapons[]=
	{
		"Throw",
		"Put",
		"CUP_lmg_UK59"
	};
	respawnweapons[]=
	{
		"Throw",
		"Put",
		"CUP_lmg_UK59"
	};
	magazines[]=
	{
		"CUP_50Rnd_UK59_762x54R_Tracer",
		"CUP_50Rnd_UK59_762x54R_Tracer",
		"CUP_50Rnd_UK59_762x54R_Tracer",
		"CUP_50Rnd_UK59_762x54R_Tracer",
		"CUP_HandGrenade_RGD5"
	};
	Respawnmagazines[]=
	{
		"CUP_50Rnd_UK59_762x54R_Tracer",
		"CUP_50Rnd_UK59_762x54R_Tracer",
		"CUP_50Rnd_UK59_762x54R_Tracer",
		"CUP_50Rnd_UK59_762x54R_Tracer",
		"CUP_50Rnd_UK59_762x54R_Tracer",
		"CUP_50Rnd_UK59_762x54R_Tracer",
		"CUP_50Rnd_UK59_762x54R_Tracer",
		"CUP_50Rnd_UK59_762x54R_Tracer",
		"CUP_HandGrenade_RGD5"
	};
};
class TWC_WaPArmy_Taviana_Sniper: TWC_WaPArmy_Taviana_Rifleman
{
	scope = 2;
	displayName="Sniper";
	weapons[]=
	{
		"Throw",
		"Put",
		"CUP_srifle_SVD_pso",
		"Binocular"
	};
	respawnweapons[]=
	{
		"Throw",
		"Put",
		"CUP_srifle_SVD_pso",
		"Binocular"
	};
	magazines[]=
	{
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_HandGrenade_RGD5",
	};
	Respawnmagazines[]=
	{
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_10Rnd_762x54_SVD_M",
		"CUP_HandGrenade_RGD5",
	};
};
class TWC_WaPArmy_Taviana_AAGunner: TWC_WaPArmy_Taviana_Base
{
	displayName="Anti-Air Gunner";
	backpack="WaPAT_Backpack_AA";
	weapons[]=
	{
		"Throw",
		"Put",
		"CUP_launch_9K32Strela",
		"CUP_arifle_Sa58P"
	};
	respawnweapons[]=
	{
		"Throw",
		"Put",
		"CUP_launch_9K32Strela",
		"CUP_arifle_Sa58P"
	};
	magazines[]=
	{
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_HandGrenade_RGD5",
		"CUP_launch_9K32Strela"
	};
	Respawnmagazines[]=
	{
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_HandGrenade_RGD5",
		"CUP_launch_9K32Strela"
	};
};
class TWC_WaPArmy_Taviana_AAAssistant: TWC_WaPArmy_Taviana_Base
{
	displayName="Anti-Air Assistant";
	backpack="WaPAT_Backpack_AA";
};
class TWC_WaPArmy_Taviana_ATGunner: TWC_WaPArmy_Taviana_Base
{
	displayName="Anti-Tank Gunner";
	icon="iconManAT";
	backpack="WaPAT_Backpack_AT";
	weapons[]=
	{
		"Throw",
		"Put",
		"CUP_launch_Metis",
		"CUP_arifle_Sa58P"
	};
	respawnweapons[]=
	{
		"Throw",
		"Put",
		"CUP_launch_Metis",
		"CUP_arifle_Sa58P"
	};
	magazines[]=
	{
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_HandGrenade_RGD5",
		"CUP_AT13_M"
	};
	Respawnmagazines[]=
	{
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_HandGrenade_RGD5",
		"CUP_AT13_M"
	};
};
class TWC_WaPArmy_Taviana_ATAssistant: TWC_WaPArmy_Taviana_Base
{
	displayName="Anti-Tank Assistant";
	backpack="WaPAT_Backpack_AT";
};
class TWC_WaPArmy_Taviana_Crewman_Camo: TWC_WaPArmy_Taviana_Base
{
	scope = 2;
	displayName="Crewman (Camo)";
	linkedItems[]=
	{
		"CUP_V_O_TK_CrewBelt",
		"ItemCompass",
		"ItemWatch",
		"CUP_H_SLA_TankerHelmet"
	};
	respawnLinkedItems[]=
	{
		"CUP_V_O_TK_CrewBelt",
		"ItemCompass",
		"ItemWatch",
		"CUP_H_SLA_TankerHelmet"
	};
	weapons[]=
	{
		"Throw",
		"Put",
		"CUP_arifle_Sa58V"
	};
	respawnweapons[]=
	{
		"Throw",
		"Put",
		"CUP_arifle_Sa58V"
	};
	magazines[]=
	{
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
	Respawnmagazines[]=
	{
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_HandGrenade_RGD5",
		"SmokeShell"
	};
};
class TWC_WaPArmy_Taviana_Crewman_Black: TWC_WaPArmy_Taviana_Base
{
	displayName="Crewman (Black)";
	uniformClass="CUP_U_O_SLA_Overalls_Tank";
	linkedItems[]=
	{
		"CUP_V_O_TK_CrewBelt",
		"ItemCompass",
		"ItemWatch",
		"CUP_H_RUS_TSH_4_Brown"
	};
	respawnLinkedItems[]=
	{
		"CUP_V_O_TK_CrewBelt",
		"ItemCompass",
		"ItemWatch",
		"CUP_H_RUS_TSH_4_Brown"
	};
};
class TWC_WaPArmy_Taviana_Driver: TWC_WaPArmy_Taviana_Crewman_Camo
{
	displayName="Driver";
	linkedItems[]=
	{
		"CUP_V_O_TK_CrewBelt",
		"ItemCompass",
		"ItemWatch",
		"CUP_H_ChDKZ_Beret"
	};
	respawnLinkedItems[]=
	{
		"CUP_V_O_TK_CrewBelt",
		"ItemCompass",
		"ItemWatch",
		"CUP_H_ChDKZ_Beret"
	};
};	
class TWC_WaPArmy_Taviana_HPilot: TWC_WaPArmy_Taviana_Base
{
	scope = 2;
	displayName="Helicopter Pilot";
	uniformClass="CUP_U_O_SLA_Overalls_Pilot";
	linkedItems[]=
	{
		"CUP_V_O_TK_CrewBelt",
		"ItemCompass",
		"ItemWatch",
		"CUP_H_RUS_ZSH_Shield_Up"
	};
	respawnLinkedItems[]=
	{
		"CUP_V_O_TK_CrewBelt",
		"ItemCompass",
		"ItemWatch",
		"CUP_H_RUS_ZSH_Shield_Up"
	};
	weapons[]=
	{
		"Throw",
		"Put",
		"CUP_arifle_Sa58V"
	};
	respawnweapons[]=
	{
		"Throw",
		"Put",
		"CUP_arifle_Sa58V"
	};
	magazines[]=
	{
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"SmokeShell"
	};
	Respawnmagazines[]=
	{
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"CUP_30Rnd_Sa58_M",
		"SmokeShell"
	};
};
class TWC_WaPArmy_Taviana_JPilot: TWC_WaPArmy_Taviana_HPilot
{
	displayName="Plane Pilot";
	backpack = "CUP_T10_Parachute_backpack";
	linkedItems[]=
	{
		"CUP_V_O_TK_CrewBelt",
		"ItemCompass",
		"ItemWatch",
		"CUP_H_RUS_ZSH_Shield_Down"
	};
	respawnLinkedItems[]=
	{
		"CUP_V_O_TK_CrewBelt",
		"ItemCompass",
		"ItemWatch",
		"CUP_H_RUS_ZSH_Shield_Down"
	};
	weapons[]=
	{
		"Throw",
		"Put",
		"CUP_hgun_Makarov"
	};
	respawnweapons[]=
	{
		"Throw",
		"Put",
		"CUP_hgun_Makarov"
	};
	magazines[]=
	{
		"CUP_8Rnd_9x18_Makarov_M",
		"CUP_8Rnd_9x18_Makarov_M",
		"CUP_8Rnd_9x18_Makarov_M",
		"SmokeShell"
	};
	Respawnmagazines[]=
	{			
		"CUP_8Rnd_9x18_Makarov_M",
		"CUP_8Rnd_9x18_Makarov_M",
		"CUP_8Rnd_9x18_Makarov_M",
		"SmokeShell"
	};
};

//////////     Winter     //////////

class TWC_WaPArmy_Taviana_Rifleman_Winter: TWC_WaPArmy_Taviana_Rifleman
{
	displayName="Rifleman (Winter)";
	editorSubcategory = "TWC_WaPArmy_Taviana_Men_Winter";
	uniformClass="CUP_U_O_CHDKZ_Commander";
};
class TWC_WaPArmy_Taviana_Squadleader_Winter: TWC_WaPArmy_Taviana_Squadleader
{
	displayName="Squadleader (Winter)";
	editorSubcategory = "TWC_WaPArmy_Taviana_Men_Winter";
	uniformClass="CUP_U_O_CHDKZ_Commander";
};
class TWC_WaPArmy_Taviana_Grenadier_Winter: TWC_WaPArmy_Taviana_Grenadier
{
	displayName="Grenadier (Winter)";
	editorSubcategory = "TWC_WaPArmy_Taviana_Men_Winter";
	uniformClass="CUP_U_O_CHDKZ_Commander";
};
class TWC_WaPArmy_Taviana_Grenadier_Ass_Winter: TWC_WaPArmy_Taviana_Grenadier_Ass
{
	displayName="Grenadier Assistant (Winter)";
	editorSubcategory = "TWC_WaPArmy_Taviana_Men_Winter";
	uniformClass="CUP_U_O_CHDKZ_Commander";
};
class TWC_WaPArmy_Taviana_AutoRifleman_Winter: TWC_WaPArmy_Taviana_AutoRifleman
{
	displayName="Auto Rifleman (Winter)";
	editorSubcategory = "TWC_WaPArmy_Taviana_Men_Winter";
	uniformClass="CUP_U_O_CHDKZ_Commander";
};
class TWC_WaPArmy_Taviana_MG_Winter: TWC_WaPArmy_Taviana_MG
{
	displayName="Machine Gunner (Winter)";
	editorSubcategory = "TWC_WaPArmy_Taviana_Men_Winter";
	uniformClass="CUP_U_O_CHDKZ_Commander";
};
class TWC_WaPArmy_Taviana_Sniper_Winter: TWC_WaPArmy_Taviana_Sniper
{
	displayName="Sniper (Winter)";
	editorSubcategory = "TWC_WaPArmy_Taviana_Men_Winter";
	uniformClass="CUP_U_O_CHDKZ_Commander";
};
class TWC_WaPArmy_Taviana_AAGunner_Winter: TWC_WaPArmy_Taviana_AAGunner
{
	displayName="Anti-Air Gunner (Winter)";
	editorSubcategory = "TWC_WaPArmy_Taviana_Men_Winter";
	uniformClass="CUP_U_O_CHDKZ_Commander";
};
class TWC_WaPArmy_Taviana_AAAssistant_Winter: TWC_WaPArmy_Taviana_AAAssistant
{
	displayName="Anti-Air Assistant (Winter)";
	editorSubcategory = "TWC_WaPArmy_Taviana_Men_Winter";
	uniformClass="CUP_U_O_CHDKZ_Commander";
};
class TWC_WaPArmy_Taviana_ATGunner_Winter: TWC_WaPArmy_Taviana_ATGunner
{
	displayName="Anti-Tank Gunner (Winter)";
	editorSubcategory = "TWC_WaPArmy_Taviana_Men_Winter";
	uniformClass="CUP_U_O_CHDKZ_Commander";
};
class TWC_WaPArmy_Taviana_ATAssistant_Winter: TWC_WaPArmy_Taviana_ATGunner
{
	displayName="Anti-Tank Assistant (Winter)";
	editorSubcategory = "TWC_WaPArmy_Taviana_Men_Winter";
	uniformClass="CUP_U_O_CHDKZ_Commander";
};
class TWC_WaPArmy_Taviana_Crewman_Camo_Winter: TWC_WaPArmy_Taviana_Crewman_Camo
{
	displayName="Crewman (Winter)";
	editorSubcategory = "TWC_WaPArmy_Taviana_Men_Winter";
	uniformClass="CUP_U_O_CHDKZ_Commander";
};
class TWC_WaPArmy_Taviana_Driver_Winter: TWC_WaPArmy_Taviana_Driver
{
	displayName="Driver (Winter)";
	editorSubcategory = "TWC_WaPArmy_Taviana_Men_Winter";
	uniformClass="CUP_U_O_CHDKZ_Commander";
};

 		  //////////////////////////////////////
		  //////////     Vehicles     //////////
		  //////////////////////////////////////
		  
//////////     Cars     //////////
class CUP_O_UAZ_Unarmed_SLA;
class CUP_O_UAZ_Open_SLA;
class CUP_O_UAZ_MG_SLA;
class CUP_O_UAZ_AGS30_SLA;
class CUP_O_UAZ_SPG9_SLA;
class CUP_O_UAZ_METIS_SLA;

class CUP_O_Ural_RU;
class CUP_O_Ural_Open_RU;
class CUP_O_Ural_Refuel_RU;
class CUP_O_Ural_Repair_RU;
class CUP_O_Ural_Reammo_RU;
class CUP_O_Ural_Empty_RU;
class CUP_O_Ural_ZU23_RU;
class CUP_O_BM21_SLA;

class TWC_WaPArmy_Taviana_UAZ_Unarmed: CUP_O_UAZ_Unarmed_SLA
{
	faction="TWC_WaPArmy_Taviana";
	crew="TWC_WaPArmy_Taviana_Rifleman";
	typicalCargo[]=
	{
		"TWC_WaPArmy_Taviana_Rifleman"
	};
};
class TWC_WaPArmy_Taviana_UAZ_Open: CUP_O_UAZ_Open_SLA
{
	faction="TWC_WaPArmy_Taviana";
	crew="TWC_WaPArmy_Taviana_Rifleman";
	typicalCargo[]=
	{
		"TWC_WaPArmy_Taviana_Rifleman"
	};
};
class TWC_WaPArmy_Taviana_UAZ_MG: CUP_O_UAZ_MG_SLA
{
	faction="TWC_WaPArmy_Taviana";
	crew="TWC_WaPArmy_Taviana_Rifleman";
	typicalCargo[]=
	{
		"TWC_WaPArmy_Taviana_Rifleman"
	};
};
class TWC_WaPArmy_Taviana_UAZ_AGS30: CUP_O_UAZ_AGS30_SLA
{
	faction="TWC_WaPArmy_Taviana";
	crew="TWC_WaPArmy_Taviana_Rifleman";
	typicalCargo[]=
	{
		"TWC_WaPArmy_Taviana_Rifleman"
	};
};
class TWC_WaPArmy_Taviana_UAZ_SPG9: CUP_O_UAZ_SPG9_SLA
{
	faction="TWC_WaPArmy_Taviana";
	crew="TWC_WaPArmy_Taviana_Rifleman";
	typicalCargo[]=
	{
		"TWC_WaPArmy_Taviana_Rifleman"
	};
};
class TWC_WaPArmy_Taviana_UAZ_METIS: CUP_O_UAZ_METIS_SLA
{
	faction="TWC_WaPArmy_Taviana";
	crew="TWC_WaPArmy_Taviana_Rifleman";
	typicalCargo[]=
	{
		"TWC_WaPArmy_Taviana_Rifleman"
	};
};
class TWC_WaPArmy_Taviana_Ural: CUP_O_Ural_RU
{
	faction="TWC_WaPArmy_Taviana";
	crew="TWC_WaPArmy_Taviana_Driver";
	typicalCargo[]=
	{
		"TWC_WaPArmy_Taviana_Driver"
	};
};
class TWC_WaPArmy_Taviana_Ural_Open: CUP_O_Ural_Open_RU
{
	faction="TWC_WaPArmy_Taviana";
	crew="TWC_WaPArmy_Taviana_Driver";
	typicalCargo[]=
	{
		"TWC_WaPArmy_Taviana_Driver"
	};
};
class TWC_WaPArmy_Taviana_Ural_Repair: CUP_O_Ural_Repair_RU
{
	faction="TWC_WaPArmy_Taviana";
	crew="TWC_WaPArmy_Taviana_Driver";
	typicalCargo[]=
	{
		"TWC_WaPArmy_Taviana_Driver"
	};
};
class TWC_WaPArmy_Taviana_Ural_Reammo: CUP_O_Ural_Reammo_RU
{
	faction="TWC_WaPArmy_Taviana";
	crew="TWC_WaPArmy_Taviana_Driver";
	typicalCargo[]=
	{
		"TWC_WaPArmy_Taviana_Driver"
	};
};
class TWC_WaPArmy_Taviana_Ural_Empty: CUP_O_Ural_RU
{
	faction="TWC_WaPArmy_Taviana";
	crew="TWC_WaPArmy_Taviana_Driver";
	typicalCargo[]=
	{
		"TWC_WaPArmy_Taviana_Driver"
	};
};
class TWC_WaPArmy_Taviana_Ural_ZU23: CUP_O_Ural_RU
{
	faction="TWC_WaPArmy_Taviana";
	crew="TWC_WaPArmy_Taviana_Driver";
	typicalCargo[]=
	{
		"TWC_WaPArmy_Taviana_Driver"
	};
};
class TWC_WaPArmy_Taviana_BM21: CUP_O_BM21_SLA
{
	faction="TWC_WaPArmy_Taviana";
	crew="TWC_WaPArmy_Taviana_Driver";
	typicalCargo[]=
	{
		"TWC_WaPArmy_Taviana_Driver"
	};
};
//////////     Armour     //////////
		 
class CUP_BMP1_base;
class CUP_I_BMP2_NAPA;
class CUP_I_BMP_HQ_NAPA;
class CUP_I_BMP2_AMB_NAPA;
class CUP_O_BMP2_ZU_TKA;
class CUP_O_BRDM2_SLA;
class CUP_O_BRDM2_ATGM_SLA;
class CUP_O_BRDM2_HQ_SLA;
class CUP_I_BTR40_TKG;
class CUP_I_BTR40_MG_TKG;
class CUP_O_BTR60_SLA;
class CUP_I_T55_TK_GUE;
class CUP_I_T72_NAPA;
class CUP_O_T72_RU;
class CUP_O_ZSU23_SLA;

class TWC_WaPArmy_Taviana_BMP1: CUP_BMP1_base
{
	scope=2;
	side=0;
	faction="TWC_WaPArmy_Taviana";
	crew="TWC_WaPArmy_Taviana_Crewman_Black";
	typicalCargo[]=
	{
		"TWC_WaPArmy_Taviana_Crewman_Black"
	};
	author="$STR_CUP_AUTHOR_STRING";
	dlc="CUP_Vehicles";
	hiddenSelectionsTextures[]=
	{
		"cup\TrackedVehicles\CUP_TrackedVehicles_BMP\bmp\data\trup_ext0_co.paa",
		"cup\TrackedVehicles\CUP_TrackedVehicles_BMP\bmp\data\veza0_co.paa"
	};
	editorPreview="CUP\TrackedVehicles\CUP_TrackedVehicles_BMP\Data\preview\CUP_I_BMP1_TK_GUE.jpg";
};
class TWC_WaPArmy_Taviana_BMP2: CUP_I_BMP2_NAPA
{
	side=0;
	faction="TWC_WaPArmy_Taviana";
	crew="TWC_WaPArmy_Taviana_Crewman_Black";
	typicalCargo[]=
	{
		"TWC_WaPArmy_Taviana_Crewman_Black"
	};
};
class TWC_WaPArmy_Taviana_BMP2_HQ: CUP_I_BMP_HQ_NAPA
{
	side=0;
	faction="TWC_WaPArmy_Taviana";
	crew="TWC_WaPArmy_Taviana_Crewman_Black";
	typicalCargo[]=
	{
		"TWC_WaPArmy_Taviana_Crewman_Black"
	};
};
class TWC_WaPArmy_Taviana_BMP2_Amb: CUP_I_BMP2_AMB_NAPA
{
	side=0;
	faction="TWC_WaPArmy_Taviana";
	crew="TWC_WaPArmy_Taviana_Crewman_Black";
	typicalCargo[]=
	{
		"TWC_WaPArmy_Taviana_Crewman_Black"
	};
};
class TWC_WaPArmy_Taviana_BMP2_ZU23: CUP_O_BMP2_ZU_TKA
{
	faction="TWC_WaPArmy_Taviana";
	crew="TWC_WaPArmy_Taviana_Crewman_Black";
	typicalCargo[]=
	{
		"TWC_WaPArmy_Taviana_Crewman_Black"
	};
	hiddenSelectionsTextures[]=
	{
		"cup\TrackedVehicles\CUP_TrackedVehicles_BMP\bmp2\data\bmp2_khk_01_co.paa",
		"cup\TrackedVehicles\CUP_TrackedVehicles_BMP\bmp2\data\bmp2_khk_02_co.paa"
	};
};
class TWC_WaPArmy_Taviana_BRDM: CUP_O_BRDM2_SLA
{
	faction="TWC_WaPArmy_Taviana";
	crew="TWC_WaPArmy_Taviana_Crewman_Black";
	typicalCargo[]=
	{
		"TWC_WaPArmy_Taviana_Crewman_Black"
	};
};
class TWC_WaPArmy_Taviana_BRDM_ATGM: CUP_O_BRDM2_ATGM_SLA
{
	faction="TWC_WaPArmy_Taviana";
	crew="TWC_WaPArmy_Taviana_Crewman_Black";
	typicalCargo[]=
	{
		"TWC_WaPArmy_Taviana_Crewman_Black"
	};
};
class TWC_WaPArmy_Taviana_BRDM_HQ: CUP_O_BRDM2_HQ_SLA
{
	faction="TWC_WaPArmy_Taviana";
	crew="TWC_WaPArmy_Taviana_Crewman_Black";
	typicalCargo[]=
	{
		"TWC_WaPArmy_Taviana_Crewman_Black"
	};
};
class TWC_WaPArmy_Taviana_BTR40: CUP_I_BTR40_TKG
{
	side=0;
	faction="TWC_WaPArmy_Taviana";
	crew="TWC_WaPArmy_Taviana_Crewman_Camo";
	typicalCargo[]=
	{
		"TWC_WaPArmy_Taviana_Crewman_Camo"
	};
};
class TWC_WaPArmy_Taviana_BTR40MG: CUP_I_BTR40_MG_TKG
{
	side=0;
	faction="TWC_WaPArmy_Taviana";
	crew="TWC_WaPArmy_Taviana_Crewman_Camo";
	typicalCargo[]=
	{
		"TWC_WaPArmy_Taviana_Crewman_Camo"
	};
};
class TWC_WaPArmy_Taviana_BTR60: CUP_O_BTR60_SLA
{
	faction="TWC_WaPArmy_Taviana";
	crew="TWC_WaPArmy_Taviana_Crewman_Camo";
	typicalCargo[]=
	{
		"TWC_WaPArmy_Taviana_Crewman_Camo"
	};
};
class TWC_WaPArmy_Taviana_T55: CUP_I_T55_TK_GUE
{
	side=0;
	faction="TWC_WaPArmy_Taviana";
	crew="TWC_WaPArmy_Taviana_Crewman_Black";
	typicalCargo[]=
	{
		"TWC_WaPArmy_Taviana_Crewman_Black"
	};
};
class TWC_WaPArmy_Taviana_T72: CUP_I_T72_NAPA
{
	side=0;
	faction="TWC_WaPArmy_Taviana";
	crew="TWC_WaPArmy_Taviana_Crewman_Black";
	typicalCargo[]=
	{
		"TWC_WaPArmy_Taviana_Crewman_Black"
	};
	armor=650;
};
class TWC_WaPArmy_Taviana_T72A: CUP_O_T72_RU
{
	displayName="T-72A";
	faction="TWC_WaPArmy_Taviana";
	crew="TWC_WaPArmy_Taviana_Crewman_Black";
	typicalCargo[]=
	{
		"TWC_WaPArmy_Taviana_Crewman_Black"
	};
};
class TWC_WaPArmy_Taviana_ZSU23: CUP_O_ZSU23_SLA
{
	faction="TWC_WaPArmy_Taviana";
	crew="TWC_WaPArmy_Taviana_Crewman_Black";
	typicalCargo[]=
	{
		"TWC_WaPArmy_Taviana_Crewman_Black"
	};
};