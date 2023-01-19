class CUP_B_USMC_Soldier_SL_des;
	class TWC_Infantry_USMC_Modern_SquadLeader: CUP_B_USMC_Soldier_SL_des {
		backpack = "TWC_Backpack_USMC_Modern_SquadLeader" ;
		faction = "TWC_USMC_Modern";
		CATEGORY(TWC_Infantry_Regular_Woodland)
		displayName = "Squad Leader";
		class EventHandlers: EventHandlers {
			init = "(_this select 0) setVariable [""twc_keepMap"",true]";
		};
		items[] = {
			MEDICAL_LOADOUT
		};
		respawnItems[] = {
			MEDICAL_LOADOUT
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
		
		nightItems[] = {
			MAG_2("Chemlight_green"),
			"ACE_Flashlight_MX991",
			"ACE_Flashlight_Maglite_ML300L"
		};

		nightLinkedItems[] = {
			"twc_nightvision_gen3"
		};
	};

class CUP_B_USMC_Soldier_TL_des;	
	class TWC_Infantry_USMC_Modern_TeamLeader: CUP_B_USMC_Soldier_TL_des {
		backpack = "TWC_Backpack_USMC_Modern_TeamLeader";
		faction = "TWC_USMC_Modern";
		CATEGORY(TWC_Infantry_Regular_Woodland)
		displayName = "Team Leader";
		class EventHandlers: EventHandlers {
			init = "(_this select 0) setVariable [""twc_keepMap"",true]";
		};
		
		items[] = {
			MEDICAL_LOADOUT
		};

		respawnItems[] = {
			MEDICAL_LOADOUT
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
		
		nightItems[] = {
			MAG_2("Chemlight_green"),
			"ACE_Flashlight_MX991",
			"ACE_Flashlight_Maglite_ML300L"
		};

		nightLinkedItems[] = {
			"twc_nightvision_gen3"
		};
	};

class CUP_B_USMC_Soldier_AR_des;	
	class TWC_Infantry_USMC_Modern_AutoRifleman: CUP_B_USMC_Soldier_AR_des {
		faction = "TWC_USMC_Modern";
		CATEGORY(TWC_Infantry_Regular_Woodland)
		displayName = "Autorifleman";
		backpack = "TWC_Backpack_USMC_Modern_AR";
		class EventHandlers: EventHandlers {
			init = "(_this select 0) setVariable [""twc_keepMap"",true]";
		};
		
		items[] = {
			MEDICAL_LOADOUT
		};

		respawnItems[] = {
			MEDICAL_LOADOUT
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
		
		nightItems[] = {
			MAG_2("Chemlight_green"),
			"ACE_Flashlight_MX991",
			"ACE_Flashlight_Maglite_ML300L"
		};

		nightLinkedItems[] = {
			"twc_nightvision_gen3"
		};
	};

class CUP_B_USMC_Soldier_GL_des;	
	class TWC_Infantry_USMC_Modern_Grenadier: CUP_B_USMC_Soldier_GL_des {
		faction = "TWC_USMC_Modern";
		CATEGORY(TWC_Infantry_Regular_Woodland)
		displayName = "Grenadier";
		class EventHandlers: EventHandlers {
			init = "(_this select 0) setVariable [""twc_keepMap"",true]";
		};
		
		items[] = {
			MEDICAL_LOADOUT
		};

		respawnItems[] = {
			MEDICAL_LOADOUT
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
		
		nightItems[] = {
			MAG_2("Chemlight_green"),
			"ACE_Flashlight_MX991",
			"ACE_Flashlight_Maglite_ML300L"
		};

		nightLinkedItems[] = {
			"twc_nightvision_gen3"
		};
	};

class CUP_B_USMC_Soldier_LAT_des;	
	class TWC_Infantry_USMC_Modern_Rifleman: CUP_B_USMC_Soldier_LAT_des {
		faction = "TWC_USMC_Modern";
		CATEGORY(TWC_Infantry_Regular_Woodland)
		displayName = "Rifleman";
		class EventHandlers: EventHandlers {
			init = "(_this select 0) setVariable [""twc_keepMap"",true]";
		};
		
		items[] = {
			MEDICAL_LOADOUT
		};

		respawnItems[] = {
			MEDICAL_LOADOUT
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
		
		nightItems[] = {
			MAG_2("Chemlight_green"),
			"ACE_Flashlight_MX991",
			"ACE_Flashlight_Maglite_ML300L"
		};

		nightLinkedItems[] = {
			"twc_nightvision_gen3"
		};
	};
	
	class CUP_B_USMC_Soldier_AT_des;	
	class TWC_Infantry_USMC_Modern_AT: CUP_B_USMC_Soldier_AT_des {
		faction = "TWC_USMC_Modern";
		backpack = "TWC_Backpack_USMC_Modern_AT" ;
		CATEGORY(TWC_Infantry_Regular_Woodland)
		displayName = "Rifleman AT";
		class EventHandlers: EventHandlers {
			init = "(_this select 0) setVariable [""twc_keepMap"",true]";
		};
		
		items[] = {
			MEDICAL_LOADOUT
		};

		respawnItems[] = {
			MEDICAL_LOADOUT
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
		
		nightItems[] = {
			MAG_2("Chemlight_green"),
			"ACE_Flashlight_MX991",
			"ACE_Flashlight_Maglite_ML300L"
		};

		nightLinkedItems[] = {
			"twc_nightvision_gen3"
		};
	};
	class CUP_B_USMC_Soldier_MG_des;	
	class TWC_Infantry_USMC_Modern_MG: CUP_B_USMC_Soldier_MG_des {
		faction = "TWC_USMC_Modern";
		backpack = "TWC_Backpack_USMC_Modern_AssMG" ;
		CATEGORY(TWC_Infantry_Regular_Woodland)
		displayName = "Machine Gunner";
		class EventHandlers: EventHandlers {
			init = "(_this select 0) setVariable [""twc_keepMap"",true]";
		};
		
		items[] = {
			MEDICAL_LOADOUT
		};

		respawnItems[] = {
			MEDICAL_LOADOUT
		};
		magazines[] =
		{
			MAG_3("150Rnd_762x51_Box"),
			MAG_2("CUP_HandGrenade_M67"),
			MAG_3("SmokeShell")
		};
		respawnmagazines[] =
		{
			MAG_3("150Rnd_762x51_Box"),
			MAG_2("CUP_HandGrenade_M67"),
			MAG_3("SmokeShell")
		};
		
		nightItems[] = {
			MAG_2("Chemlight_green"),
			"ACE_Flashlight_MX991",
			"ACE_Flashlight_Maglite_ML300L"
		};

		nightLinkedItems[] = {
			"twc_nightvision_gen3"
		};
	};
	class CUP_B_USMC_SpecOps_SD_des;	
	class TWC_Infantry_USMC_Modern_Breacher: CUP_B_USMC_SpecOps_SD_des {
		faction = "TWC_USMC_Modern";
		displayName = "Breacher";
		backpack = "TWC_Backpack_USMC_Modern_Breacher" ;
		CATEGORY(TWC_Infantry_Regular_Woodland)
		class EventHandlers: EventHandlers {
			init = "(_this select 0) setVariable [""twc_keepMap"",true]";
		};
	weapons[] =
	{
		"TWC_L128A1_Eotech",
		"ACE_VMM3",
		"Throw",
		"Put"
	};
	respawnweapons[] =
	{
		"TWC_L128A1_Eotech",
		"ACE_VMM3",
		"Throw",
		"Put"
	};
		items[] = {
			MEDICAL_LOADOUT
		};

		respawnItems[] = {
			MEDICAL_LOADOUT
		};
		magazines[] =
		{
			MAG_8("CUP_8Rnd_B_Beneli_74Slug"),
			MAG_8("CUP_8Rnd_B_Beneli_74Pellets"),
			MAG_3("CUP_HandGrenade_M67"),
			MAG_3("SmokeShell")
		};
		respawnmagazines[] =
		{
			MAG_8("CUP_8Rnd_B_Beneli_74Slug"),
			MAG_8("CUP_8Rnd_B_Beneli_74Pellets"),
			MAG_3("CUP_HandGrenade_M67"),
			MAG_3("SmokeShell")
		};
		
		nightItems[] = {
			MAG_2("Chemlight_green"),
			"ACE_Flashlight_MX991",
			"ACE_Flashlight_Maglite_ML300L"
		};

		nightLinkedItems[] = {
			"twc_nightvision_gen3"
		};
	};
	class TWC_Infantry_USMC_Modern_PlatoonCommander: TWC_Infantry_USMC_Modern_SquadLeader {
		displayName = "Platoon Commander";
	};
	class TWC_Infantry_USMC_Modern_PlatoonSergeant: TWC_Infantry_USMC_Modern_SquadLeader {
		displayName = "Platoon First Sergeant";
	};

	class TWC_Infantry_USMC_Modern_AMG: TWC_Infantry_USMC_Modern_Rifleman {
		displayName = "Assistant Machine Gunner";
		attendant = 1;
		backpack = "TWC_Backpack_USMC_Modern_AssMG" ;
				class EventHandlers: EventHandlers {
			init = "(_this select 0) setVariable [""twc_keepMap"",true]";
		};
		weapons[] =
		{
			"CUP_arifle_M16A4_Aim_Laser",
			"Throw",
			"Put"
		};
		respawnweapons[] =
		{
			"CUP_arifle_M16A4_Aim_Laser",
			"Throw",
			"Put"
		};
		items[] = {
			MEDICAL_LOADOUT
		};

		respawnItems[] = {
			MEDICAL_LOADOUT
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
		
		nightItems[] = {
			MAG_2("Chemlight_green"),
			"ACE_Flashlight_MX991",
			"ACE_Flashlight_Maglite_ML300L"
		};

		nightLinkedItems[] = {
			"twc_nightvision_gen3"
		};
	};
	class TWC_Infantry_USMC_Modern_Medic: TWC_Infantry_USMC_Modern_AMG {
		displayName = "Platoon Medic";
		attendant = 1;
		backpack = "TWC_Backpack_USMC_Modern_Medic" ;
	};
	class TWC_Infantry_USMC_Modern_AAR: TWC_Infantry_USMC_Modern_AMG {
		displayName = "Assistant Autorifleman";
		attendant = 1;
		backpack = "TWC_Backpack_USMC_Modern_AR" ;
	};
