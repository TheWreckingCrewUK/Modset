class CUP_B_USMC_Soldier_SL_des;
	class TWC_Infantry_USMC_Modern_SquadLeader: CUP_B_USMC_Soldier_SL_des {
		backpack = "TWC_Backpack_USMC_Modern_SquadLeader" ;
		faction = "TWC_USMC_Modern";
		CATEGORY(TWC_Infantry_Regular_Desert)
		displayName = "Squad Leader";
		class EventHandlers: EventHandlers {
			init = "(_this select 0) setVariable [""twc_keepMap"",true]";
		};
		weapons[] =
	{
		"CUP_arifle_M16A4_ACOG_Laser",
		"Binocular",
		"Throw",
		"Put"
	};
		respawnweapons[] =
	{
		"CUP_arifle_M16A4_ACOG_Laser",
		"Binocular",
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
			MAG_3("CUP_30Rnd_556x45_Stanag"),
			MAG_2("CUP_30Rnd_556x45_Stanag_Tracer_Red"),
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
		CATEGORY(TWC_Infantry_Regular_Desert)
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
			MAG_5("CUP_1Rnd_HEDP_M203"),
			MAG_2("CUP_1Rnd_SmokeGreen_M203"),
			MAG_2("CUP_1Rnd_SmokeYellow_M203"),
			MAG_2("CUP_1Rnd_SmokeRed_M203"),
			MAG_2("CUP_1Rnd_Smoke_M203"),
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
			MAG_5("CUP_1Rnd_HEDP_M203"),
			MAG_2("CUP_1Rnd_SmokeGreen_M203"),
			MAG_2("CUP_1Rnd_SmokeYellow_M203"),
			MAG_2("CUP_1Rnd_SmokeRed_M203"),
			MAG_2("CUP_1Rnd_Smoke_M203"),
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
		CATEGORY(TWC_Infantry_Regular_Desert)
		displayName = "Autorifleman";
		backpack = "TWC_Backpack_USMC_Modern_AR";
		class EventHandlers: EventHandlers {
			init = "(_this select 0) setVariable [""twc_keepMap"",true]";
		};
		weapons[] =
	{
		"CUP_lmg_M249_ElcanM145",
		"Throw",
		"Put"
	};
		respawnweapons[] =
	{
		"CUP_lmg_M249_ElcanM145",
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
		CATEGORY(TWC_Infantry_Regular_Desert)
		displayName = "Grenadier";
		backpack = "TWC_Backpack_USMC_Modern_Grenadier";
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
		CATEGORY(TWC_Infantry_Regular_Desert)
		displayName = "Rifleman";
		backpack = "TWC_Backpack_USMC_Modern_Rifleman";
		class EventHandlers: EventHandlers {
			init = "(_this select 0) setVariable [""twc_keepMap"",true]";
		};
		weapons[] =
	{
		"CUP_arifle_M16A4_ACOG_Laser",
		"CUP_launch_M136",
		"Throw",
		"Put"
	};
		respawnweapons[] =
	{
		"CUP_arifle_M16A4_ACOG_Laser",
		"CUP_launch_M136",
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
	class CUP_B_USMC_Soldier_MG_des;	
	class TWC_Infantry_USMC_Modern_MG: CUP_B_USMC_Soldier_MG_des {
		faction = "TWC_USMC_Modern";
		backpack = "TWC_Backpack_USMC_Modern_AssMG" ;
		CATEGORY(TWC_Infantry_Regular_Desert)
		displayName = "Machine Gunner";
		class EventHandlers: EventHandlers {
			init = "(_this select 0) setVariable [""twc_keepMap"",true]";
		};
		weapons[] =
	{
		"CUP_lmg_M240",
		"Throw",
		"Put"
	};
		respawnweapons[] =
	{
		"CUP_lmg_M240",
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
		CATEGORY(TWC_Infantry_Regular_Desert)
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
		"CUP_arifle_M16A4_ACOG_Laser",
		"Binocular",
		"Throw",
		"Put"
	};
		respawnweapons[] =
	{
		"CUP_arifle_M16A4_ACOG_Laser",
		"Binocular",
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
class CUP_B_FR_Soldier_TL_DES;	
	class TWC_Infantry_USMC_Modern_FRTeamLeader: CUP_B_FR_Soldier_TL_DES {
		backpack = "TWC_Backpack_USMC_Modern_TeamLeader";
		faction = "TWC_USMC_Modern";
		CATEGORY(TWC_Infantry_Regular_Desert)
		displayName = "Force Recon Team Leader";
		class EventHandlers: EventHandlers {
			init = "(_this select 0) setVariable [""twc_keepMap"",true]";
		};
		weapons[] =
	{
		"TWC_Weapon_M4_SF",
		"CUP_hgun_Mk23",
		"Binocular"
	};
		respawnweapons[] =
	{
		"TWC_Weapon_M4_SF",
		"CUP_hgun_Mk23",
		"Binocular"
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
			MAG_2("CUP_17Rnd_9x19_glock17"),
			MAG_2("CUP_HandGrenade_M67"),
			MAG_5("CUP_1Rnd_HEDP_M203"),
			MAG_2("CUP_1Rnd_SmokeGreen_M203"),
			MAG_2("CUP_1Rnd_SmokeYellow_M203"),
			MAG_2("CUP_1Rnd_SmokeRed_M203"),
			MAG_2("CUP_1Rnd_Smoke_M203"),
			"SmokeShellRed",
			"SmokeShellYellow",
			"SmokeShellGreen",
			MAG_2("SmokeShell")
		};
		respawnmagazines[] =
		{
			MAG_5("CUP_30Rnd_556x45_Stanag"),
			MAG_3("CUP_30Rnd_556x45_Stanag_Tracer_Red"),
			MAG_2("CUP_17Rnd_9x19_glock17"),
			MAG_2("CUP_HandGrenade_M67"),
			MAG_5("CUP_1Rnd_HEDP_M203"),
			MAG_2("CUP_1Rnd_SmokeGreen_M203"),
			MAG_2("CUP_1Rnd_SmokeYellow_M203"),
			MAG_2("CUP_1Rnd_SmokeRed_M203"),
			MAG_2("CUP_1Rnd_Smoke_M203"),
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
	class TWC_Infantry_USMC_Modern_FRGrenadier: TWC_Infantry_USMC_Modern_FRTeamLeader {
		faction = "TWC_USMC_Modern";
		CATEGORY(TWC_Infantry_Regular_Desert)
		displayName = "Force Recon Grenadier";
		backpack = "";
	};
	class TWC_Infantry_USMC_Modern_FRRifleman: TWC_Infantry_USMC_Modern_FRGrenadier {
		faction = "TWC_USMC_Modern";
		CATEGORY(TWC_Infantry_Regular_Desert)
		displayName = "Force Recon Rifleman";
		weapons[] =
	{
		"CUP_arifle_M4A1_Standard_Black_ACOG_Laser_snds",
		"CUP_hgun_Mk23",
		"Binocular"
	};
		respawnweapons[] =
	{
		"CUP_arifle_M4A1_Standard_Black_ACOG_Laser_snds",
		"CUP_hgun_Mk23",
		"Binocular"
	};
		magazines[] =
		{
			MAG_5("CUP_30Rnd_556x45_Stanag"),
			MAG_3("CUP_30Rnd_556x45_Stanag_Tracer_Red"),
			MAG_2("CUP_17Rnd_9x19_glock17"),
			MAG_2("CUP_HandGrenade_M67"),
			MAG_2("SmokeShell")
		};
		respawnmagazines[] =
		{
			MAG_5("CUP_30Rnd_556x45_Stanag"),
			MAG_3("CUP_30Rnd_556x45_Stanag_Tracer_Red"),
			MAG_2("CUP_17Rnd_9x19_glock17"),
			MAG_2("CUP_HandGrenade_M67"),
			MAG_2("SmokeShell")
		};
	};
	class CUP_B_FR_Soldier_Marksman_DES;	
	class TWC_Infantry_USMC_Modern_FRMarksman: CUP_B_FR_Soldier_Marksman_DES {
		faction = "TWC_USMC_Modern";
		CATEGORY(TWC_Infantry_Regular_Desert)
		displayName = "Force Recon Marksman";
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
			MAG_8("CUP_20Rnd_762x51_B_M110"),
			MAG_2("CUP_17Rnd_9x19_glock17"),
			MAG_2("CUP_HandGrenade_M67"),
			MAG_2("SmokeShell")
		};
		respawnmagazines[] =
		{
			MAG_8("CUP_20Rnd_762x51_B_M110"),
			MAG_2("CUP_17Rnd_9x19_glock17"),
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
		class TWC_Infantry_USMC_Modern_FRAutoRifleman: TWC_Infantry_USMC_Modern_FRRifleman {
		faction = "TWC_USMC_Modern";
		CATEGORY(TWC_Infantry_Regular_Desert)
		displayName = "Force Recon AutoRifleman";
		weapons[] = 
	{
		"TWC_Weapon_Minimi_SF",
		"CUP_hgun_Mk23",
		"Binocular"
	};
		respawnweapons[] =
	{
		"TWC_Weapon_Minimi_SF",
		"CUP_hgun_Mk23",
		"Binocular"
	};
		magazines[] =
		{
			MAG_5("CUP_200Rnd_TE4_Red_Tracer_556x45_M249"),
			MAG_2("CUP_17Rnd_9x19_glock17"),
			MAG_2("CUP_HandGrenade_M67"),
			MAG_2("SmokeShell")
		};
		respawnmagazines[] =
		{
			MAG_5("CUP_200Rnd_TE4_Red_Tracer_556x45_M249"),
			MAG_2("CUP_17Rnd_9x19_glock17"),
			MAG_2("CUP_HandGrenade_M67"),
			MAG_2("SmokeShell")
		};
	};