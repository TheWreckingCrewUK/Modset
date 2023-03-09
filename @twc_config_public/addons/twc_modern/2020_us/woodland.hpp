class CUP_B_US_Soldier_SL_OEFCP;
	class TWC_Infantry_USA_Modern_SquadLeader: CUP_B_US_Soldier_SL_OEFCP {
		backpack = "TWC_Backpack_USA_Modern_SquadLeader" ;
		faction = "TWC_Modern";
		editorSubcategory = "TWC_Infantry_2020_US";
		class EventHandlers: EventHandlers {
			init = "(_this select 0) setVariable [""twc_keepMap"",true]";
		};
		
		items[] = {
			MEDICAL_LOADOUT,
			"ACRE_PRC148"
		};

		respawnItems[] = {
			MEDICAL_LOADOUT,
			"ACRE_PRC148"
		};

		magazines[] =
		{
			MAG_3("CUP_30Rnd_556x45_Stanag"),
			MAG_2("CUP_30Rnd_556x45_Stanag_Tracer_Red"),
			MAG_3("CUP_1Rnd_HEDP_M203"),
			MAG_2("CUP_1Rnd_SmokeGreen_M203"),
			MAG_2("CUP_1Rnd_SmokeYellow_M203"),
			MAG_2("CUP_1Rnd_SmokeRed_M203"),
			MAG_2("CUP_1Rnd_Smoke_M203"),
			"CUP_HandGrenade_M67",
			"SmokeShellBlue",
			"SmokeShellOrange",
			"SmokeShellPurple",
			"SmokeShell"
		};
		respawnmagazines[] =
		{
			MAG_3("CUP_30Rnd_556x45_Stanag"),
			MAG_2("CUP_30Rnd_556x45_Stanag_Tracer_Red"),
			MAG_3("CUP_1Rnd_HEDP_M203"),
			MAG_2("CUP_1Rnd_SmokeGreen_M203"),
			MAG_2("CUP_1Rnd_SmokeYellow_M203"),
			MAG_2("CUP_1Rnd_SmokeRed_M203"),
			MAG_2("CUP_1Rnd_Smoke_M203"),
			"CUP_HandGrenade_M67",
			"SmokeShellBlue",
			"SmokeShellOrange",
			"SmokeShellPurple",
			"SmokeShell"
		};
	};

class CUP_B_US_Soldier_TL_OEFCP;	
	class TWC_Infantry_USA_Modern_TeamLeader: CUP_B_US_Soldier_TL_OEFCP {
		backpack = "TWC_Backpack_USA_Modern_TeamLeader" ;
		faction = "TWC_Modern";
		editorSubcategory = "TWC_Infantry_2020_US";
		class EventHandlers: EventHandlers {
			init = "(_this select 0) setVariable [""twc_keepMap"",true]";
		};
		
		items[] = {
			MEDICAL_LOADOUT,
			"ACRE_PRC148"
		};

		respawnItems[] = {
			MEDICAL_LOADOUT,
			"ACRE_PRC148"
		};
	

		magazines[] =
		{
			MAG_5("CUP_30Rnd_556x45_Stanag"),
			MAG_3("CUP_30Rnd_556x45_Stanag_Tracer_Red"),
			MAG_2("CUP_15Rnd_9x19_M9"),
			MAG_2("CUP_HandGrenade_M67"),
			"SmokeShellRed",
			"SmokeShellYellow",
			"SmokeShellGreen",
			MAG_2("SmokeShell")
		};
		respawnmagazines[] =
		{
			MAG_5("CUP_30Rnd_556x45_Stanag"),
			MAG_3("CUP_30Rnd_556x45_Stanag_Tracer_Red"),
			MAG_2("CUP_15Rnd_9x19_M9"),
			MAG_2("CUP_HandGrenade_M67"),
			"SmokeShellRed",
			"SmokeShellYellow",
			"SmokeShellGreen",
			MAG_2("SmokeShell")
		};
	};

class CUP_B_US_Soldier_AR_OEFCP;	
	class TWC_Infantry_USA_Modern_AutoRifleman: CUP_B_US_Soldier_AR_OEFCP {
		faction = "TWC_Modern";
		editorSubcategory = "TWC_Infantry_2020_US";
		backpack = "CUP_B_USPack_SL_OEFCP";
		class EventHandlers: EventHandlers {
			init = "(_this select 0) setVariable [""twc_keepMap"",true]";
		};
		items[] = {
			MEDICAL_LOADOUT,
			"ACRE_PRC148"
		};

		respawnItems[] = {
			MEDICAL_LOADOUT,
			"ACRE_PRC148"
		};
		
		
		magazines[] =
		{
			MAG_2("CUP_200Rnd_TE4_Red_Tracer_556x45_M249"),
			"CUP_HandGrenade_M67",
			MAG_2("SmokeShell")
		};
		respawnmagazines[] =
		{
			MAG_2("CUP_200Rnd_TE4_Red_Tracer_556x45_M249"),
			"CUP_HandGrenade_M67",
			MAG_2("SmokeShell")
		};
	};

class CUP_B_US_Soldier_GL_OEFCP;	
	class TWC_Infantry_USA_Modern_Grenadier: CUP_B_US_Soldier_GL_OEFCP {
		faction = "TWC_Modern";
		editorSubcategory = "TWC_Infantry_2020_US";
		backpack = "CUP_B_USPack_SL_OEFCP";
		class EventHandlers: EventHandlers {
			init = "(_this select 0) setVariable [""twc_keepMap"",true]";
		};
		weapons[] = 
		{
			"CUP_arifle_M4A1_M203_ACOG_Laser",
			"Throw",
			"Put"
		};
		respawnWeapons[] = 
		{
			"CUP_arifle_M4A1_M203_ACOG_Laser",
			"Throw",
			"Put"
		};
		items[] = {
			MEDICAL_LOADOUT,
			"ACRE_PRC148"
		};

		respawnItems[] = {
			MEDICAL_LOADOUT,
			"ACRE_PRC148"
		};
		
		magazines[] =
		{
			MAG_5("CUP_30Rnd_556x45_Stanag"),
			MAG_3("CUP_30Rnd_556x45_Stanag_Tracer_Red"),
			MAG_10("CUP_1Rnd_HEDP_M203"),
			MAG_2("CUP_HandGrenade_M67"),
			MAG_2("SmokeShell")
		};
		respawnmagazines[] =
		{
			MAG_5("CUP_30Rnd_556x45_Stanag"),
			MAG_3("CUP_30Rnd_556x45_Stanag_Tracer_Red"),
			MAG_10("CUP_1Rnd_HEDP_M203"),
			MAG_2("CUP_HandGrenade_M67"),
			MAG_2("SmokeShell")
		};
	};

class CUP_B_US_Soldier_ACOG_OEFCP;	
	class TWC_Infantry_USA_Modern_Rifleman: CUP_B_US_Soldier_ACOG_OEFCP {
		faction = "TWC_Modern";
		editorSubcategory = "TWC_Infantry_2020_US";
		backpack = "CUP_B_USPack_SL_OEFCP";
		class EventHandlers: EventHandlers {
			init = "(_this select 0) setVariable [""twc_keepMap"",true]";
		};
		
		items[] = {
			MEDICAL_LOADOUT,
			"ACRE_PRC148"
		};

		respawnItems[] = {
			MEDICAL_LOADOUT,
			"ACRE_PRC148"
		};
		
		weapons[] = {
			"CUP_arifle_M4A3_ACOG_Laser",
			"CUP_launch_M136",
			"Throw",
			"Put"
		};
		
		respawnweapons[] = {
			"CUP_arifle_M4A3_ACOG_Laser",
			"CUP_launch_M126",
			"Throw",
			"Put"
		};
		
		magazines[] =
		{
			MAG_5("CUP_30Rnd_556x45_Stanag"),
			MAG_3("CUP_30Rnd_556x45_Stanag_Tracer_Red"),
			MAG_3("CUP_HandGrenade_M67"),
			MAG_3("SmokeShell")
		};
		respawnmagazines[] =
		{
			MAG_5("CUP_30Rnd_556x45_Stanag"),
			MAG_3("CUP_30Rnd_556x45_Stanag_Tracer_Red"),
			MAG_3("CUP_HandGrenade_M67"),
			MAG_3("SmokeShell")
		};
	};
	
	class TWC_Infantry_USA_Modern_Medic: TWC_Infantry_USA_Modern_Rifleman {
		displayName = "Medic";
		attendant = 1;
		backpack = "TWC_Backpack_USA_Modern_Medic" ;
	};