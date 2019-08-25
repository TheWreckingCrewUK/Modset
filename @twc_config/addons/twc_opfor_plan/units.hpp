//Section
class TWC_Infantry_PLAN_Regular_Rifleman: TWC_Infantry_PLAN_Base
{
	scope = 2;
	displayName = "Rifleman";
	weapons[] =
	{
		"vme_pla_qbz95_1",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"vme_pla_qbz95_1",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_7("VME_QBZ95_1_30Rnd_DBP10"),
		MAG_2("HandGrenade"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_7("VME_QBZ95_1_30Rnd_DBP10"),
		MAG_2("HandGrenade"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_PLAN_Regular_Rifleman_AT: TWC_Infantry_PLAN_Regular_Rifleman
{
	displayName = "Rifleman (AT)";
	weapons[] =
	{
		"vme_pla_qbz95_1",
		"vme_pla_PF89B",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"vme_pla_qbz95_1",
		"vme_pla_PF89B",
		"Throw",
		"Put"
	};
};
class TWC_Infantry_PLAN_Regular_Grenadier: TWC_Infantry_PLAN_Regular_Rifleman
{
	displayName = "Grenadier";
	weapons[]=
	{
		"vme_pla_qbz95_1GL",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"vme_pla_qbz95_1GL",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_7("VME_QBZ95_1_30Rnd_DBP10"),
		MAG_8("VME_1Rnd_HE_GL"),
		MAG_2("VME_1Rnd_Smoke_GL")
	};
	respawnmagazines[] =
	{
		MAG_7("VME_QBZ95_1_30Rnd_DBP10"),
		MAG_8("VME_1Rnd_HE_GL"),
		MAG_2("VME_1Rnd_Smoke_GL")
	};
};
class TWC_Infantry_PLAN_Regular_Autorifleman: TWC_Infantry_PLAN_Regular_Rifleman
{
	displayName = "Autorifleman";
	weapons[] =
	{
		"vme_pla_qjb95_1_mix",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"vme_pla_qjb95_1_mix",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_4("VME_QJB95_1_75Rnd_DBP10"),
		MAG_2("VME_QJB95_1_75Rnd_DBP10_Tracer_Green"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_4("VME_QJB95_1_75Rnd_DBP10"),
		MAG_2("VME_QJB95_1_75Rnd_DBP10_Tracer_Green"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_PLAN_Regular_MG: TWC_Infantry_PLAN_Regular_Rifleman
{
	displayName = "Machine Gunner";
	weapons[] =
	{
		"vme_pla_qjb95_1_mix",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"vme_pla_qjb95_1_mix",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_3("VME_QJY88_200Rnd_DVP88_Heavy"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_3("VME_QJY88_200Rnd_DVP88_Heavy"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_PLAN_Regular_SectionCommander: TWC_Infantry_PLAN_Regular_Rifleman
{
	displayName = "Section Commander";
	backpack = "TWC_Backpack_PLAN_Regular_SectionCommander";
	TWC_isCommandRole = 1;
	linkedItems[] =
	{
		"PLAN_Vest",
		"VME_PLAN_Helmet",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"PLAN_Vest",
		"VME_PLAN_Helmet",
		"ItemCompass",
		"ItemcTab",
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
		"vme_pla_qbz95_1GL_mix",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"vme_pla_qbz95_1GL_mix",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_5("VME_QBZ95_1_30Rnd_DBP10"),
		MAG_2("VME_QBZ95_1_30Rnd_DBP10_Tracer_Green"),
		MAG_3("VME_1Rnd_HE_GL"),
		MAG_3("VME_1Rnd_Smoke_GL")
	};
	respawnmagazines[] =
	{
		MAG_5("VME_QBZ95_1_30Rnd_DBP10"),
		MAG_2("VME_QBZ95_1_30Rnd_DBP10_Tracer_Green"),
		MAG_3("VME_1Rnd_HE_GL"),
		MAG_3("VME_1Rnd_Smoke_GL")
	};
};
class TWC_Infantry_PLAN_Regular_2iC: TWC_Infantry_PLAN_Regular_Rifleman
{
	displayName = "2iC";
	backpack = "TWC_Backpack_PLAN_Regular_2iC";
	TWC_isCommandRole = 1;
	weapons[] =
	{
		"vme_pla_qbz95_1_mix",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"vme_pla_qbz95_1_mix",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_5("VME_QBZ95_1_30Rnd_DBP10"),
		MAG_2("VME_QBZ95_1_30Rnd_DBP10_Tracer_Green"),
		MAG_2("HandGrenade"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_5("VME_QBZ95_1_30Rnd_DBP10"),
		MAG_2("VME_QBZ95_1_30Rnd_DBP10_Tracer_Green"),
		MAG_2("HandGrenade"),
		MAG_2("SmokeShell")
	};
};

//Platoon
class TWC_Infantry_PLAN_Regular_Platoon_Commander: TWC_Infantry_PLAN_Regular_SectionCommander
{
	displayName = "Platoon Commander";
	backpack = "TWC_Backpack_PLAN_Regular_Platoon_Commander";
	magazines[] =
	{
		MAG_3("VME_QBZ95_1_30Rnd_DBP10"),
		MAG_2("VME_QBZ95_1_30Rnd_DBP10_Tracer_Green"),
		MAG_3("VME_1Rnd_HE_GL"),
		MAG_3("VME_1Rnd_Smoke_GL")
	};
	respawnmagazines[] =
	{
		MAG_3("VME_QBZ95_1_30Rnd_DBP10"),
		MAG_2("VME_QBZ95_1_30Rnd_DBP10_Tracer_Green"),
		MAG_3("VME_1Rnd_HE_GL"),
		MAG_3("VME_1Rnd_Smoke_GL")
	};
	
	nightItems[] = {
		"B_IR_Grenade",
		"ACE_HandFlare_White",
		"ACE_HandFlare_White",
		"Chemlight_green",
		"Chemlight_green"
	};
};
class TWC_Infantry_PLAN_Regular_Platoon_Sergeant: TWC_Infantry_PLAN_Regular_Platoon_Commander
{
	displayName = "Platoon Sergeant";
	backpack = "TWC_Backpack_PLAN_Regular_Platoon_Sergeant";
};
class TWC_Infantry_PLAN_Regular_Platoon_Medic: TWC_Infantry_PLAN_Regular_Rifleman
{
	displayName = "Platoon Medic";
	backpack = "TWC_Backpack_PLAN_Regular_Platoon_Medic";
	attendant = 1;
	weapons[] =
	{
		"vme_pla_qbz95_1",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"vme_pla_qbz95_1",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_3("VME_QBZ95_1_30Rnd_DBP10"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_3("VME_QBZ95_1_30Rnd_DBP10"),
		MAG_2("SmokeShell")
	};
};

//Aircraft
class TWC_Infantry_PLAN_Regular_FAC: TWC_Infantry_PLAN_Regular_Platoon_Commander
{
	displayName = "Forward Air Controller";
	backpack = "TWC_Backpack_PLAN_Regular_FAC";
	TWC_isCommandRole = 0;
	weapons[] =
	{
		"vme_pla_qbz95_1_mix",
		"UK3CB_BAF_Soflam_Laserdesignator",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"vme_pla_qbz95_1_mix",
		"UK3CB_BAF_Soflam_Laserdesignator",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_5("VME_QBZ95_1_30Rnd_DBP10"),
		MAG_3("VME_1Rnd_HE_GL"),
		MAG_3("VME_1Rnd_Smoke_GL"),
		MAG_2("SmokeShell"),
		"Laserbatteries"
	};
	respawnmagazines[] =
	{
		MAG_5("VME_QBZ95_1_30Rnd_DBP10"),
		MAG_3("VME_1Rnd_HE_GL"),
		MAG_3("VME_1Rnd_Smoke_GL"),
		MAG_2("SmokeShell"),
		"Laserbatteries"
	};
	
	nightItems[] = {
		"B_IR_Grenade",
		"ACE_HandFlare_White",
		"ACE_HandFlare_White",
		"Chemlight_green",
		"Chemlight_green"
	};
};

//FVs
class TWC_Infantry_PLAN_Regular_Vehicle_Commander: TWC_Infantry_PLAN_Regular_Rifleman
{
	displayName = "Vehicle Commander";
	linkedItems[] =
	{
		"PLAN_Vest",
		"VME_PLAN_Helmet",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"PLAN_Vest",
		"VME_PLAN_Helmet",
		"ItemCompass",
		"ItemcTab",
		"itemMap",
		"ItemWatch"
	};
	weapons[] =
	{
		"vme_pla_qbz95B_1",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"vme_pla_qbz95B_1",
		"ACE_Vector",
		"Throw",
		"Put"
	};
	magazines[] =
	{
		MAG_3("VME_QBZ95_1_30Rnd_DBP10"),
		MAG_2("SmokeShell")
	};
	respawnmagazines[] =
	{
		MAG_3("VME_QBZ95_1_30Rnd_DBP10"),
		MAG_2("SmokeShell")
	};
};
class TWC_Infantry_PLAN_Regular_Vehicle_Crew: TWC_Infantry_PLAN_Regular_Vehicle_Commander
{
	displayName = "Vehicle Crew";
	TWC_isCommandRole = 0;
	linkedItems[] =
	{
		"PLAN_Vest",
		"VME_PLAN_Helmet",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"PLAN_Vest",
		"VME_PLAN_Helmet",
		"ItemCompass",
		"itemMap",
		"ItemWatch"
	};
};