class cwr3_b_soldier_sl;
	class TWC_Infantry_USA_CW_SquadLeader: cwr3_b_soldier_sl {
		backpack = "TWC_Backpack_USA_CW_SquadLeader" ;
		faction = "TWC_USA_CW";
		CATEGORY(TWC_Infantry_Regular_Woodland)
		class EventHandlers: EventHandlers {
			init = "(_this select 0) setVariable [""twc_keepMap"",true]";
		};
		
		items[] = {
			CW_ITEMS
		};

		respawnItems[] = {
			CW_ITEMS
		};
		
		
		magazines[] =
		{
			MAG_3("CUP_30Rnd_556x45_Stanag"),
			MAG_2("CUP_30Rnd_556x45_Stanag_Tracer_Red"),
			MAG_3("CUP_1Rnd_HE_M203"),
			MAG_2("CUP_1Rnd_SmokeGreen_M203"),
			MAG_2("CUP_1Rnd_SmokeYellow_M203"),
			MAG_2("CUP_1Rnd_SmokeRed_M203"),
			MAG_2("CUP_1Rnd_Smoke_M203"),
			"CUP_HandGrenade_M67",
			"SmokeShellBlue",
			"SmokeShellOrange",
			"SmokeShellPurple",
			MAG_2("SmokeShell")
		};
		respawnmagazines[] =
		{
			MAG_3("CUP_30Rnd_556x45_Stanag"),
			MAG_2("CUP_30Rnd_556x45_Stanag_Tracer_Red"),
			MAG_3("CUP_1Rnd_HE_M203"),
			MAG_2("CUP_1Rnd_SmokeGreen_M203"),
			MAG_2("CUP_1Rnd_SmokeYellow_M203"),
			MAG_2("CUP_1Rnd_SmokeRed_M203"),
			MAG_2("CUP_1Rnd_Smoke_M203"),
			"CUP_HandGrenade_M67",
			"SmokeShellBlue",
			"SmokeShellOrange",
			"SmokeShellPurple",
			MAG_2("SmokeShell")
		};
		
		nightItems[] = {
			MAG_2("Chemlight_green"),
			"ACE_Flashlight_MX991",
			"ACE_Flashlight_Maglite_ML300L"
		};

	};

class cwr3_b_soldier_tl;	
	class TWC_Infantry_USA_CW_TeamLeader: cwr3_b_soldier_tl {
		backpack = "TWC_Backpack_USA_CW_TeamLeader" ;
		faction = "TWC_USA_CW";
		CATEGORY(TWC_Infantry_Regular_Woodland)
		class EventHandlers: EventHandlers {
			init = "(_this select 0) setVariable [""twc_keepMap"",true]";
		};
		
		items[] = {
			CW_ITEMS
		};

		respawnItems[] = {
			CW_ITEMS
		};
		
		
		magazines[] =
		{
			MAG_6("CUP_30Rnd_556x45_Stanag"),
			MAG_2("CUP_30Rnd_556x45_Stanag_Tracer_Red"),
			MAG_2("CUP_15Rnd_9x19_M9"),
			MAG_2("CUP_HandGrenade_M67"),
			"SmokeShellRed",
			"SmokeShellYellow",
			"SmokeShellGreen",
			MAG_2("SmokeShell")
		};
		respawnmagazines[] =
		{
			MAG_6("CUP_30Rnd_556x45_Stanag"),
			MAG_2("CUP_30Rnd_556x45_Stanag_Tracer_Red"),
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

	};
	
class TWC_Infantry_USA_CW_TeamLeader_MG: TWC_Infantry_USA_CW_TeamLeader {
		displayName = "Team Leader (MG)";
		backpack = "TWC_Backpack_USA_CW_TeamLeader_MG" ;
	};
	
class cwr3_b_soldier_ar;	
	class TWC_Infantry_USA_CW_AutoRifleman: cwr3_b_soldier_ar {
		faction = "TWC_USA_CW";
		CATEGORY(TWC_Infantry_Regular_Woodland)
		class EventHandlers: EventHandlers {
			init = "(_this select 0) setVariable [""twc_keepMap"",true]";
		};
		
		items[] = {
			CW_ITEMS
		};

		respawnItems[] = {
			CW_ITEMS
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

	};
	
class cwr3_b_soldier_mg;	
	class TWC_Infantry_USA_CW_MachineGunner: cwr3_b_soldier_mg {
		faction = "TWC_USA_CW";
		CATEGORY(TWC_Infantry_Regular_Woodland)
		backpack = "TWC_Backpack_USA_CW_MG" ;
		class EventHandlers: EventHandlers {
			init = "(_this select 0) setVariable [""twc_keepMap"",true]";
		};
		
		items[] = {
			CW_ITEMS
		};

		respawnItems[] = {
			CW_ITEMS
		};
		
		
		magazines[] =
		{
			MAG_3("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"),
			"CUP_HandGrenade_M67",
			MAG_2("SmokeShell")
		};
		respawnmagazines[] =
		{
			MAG_3("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"),
			"CUP_HandGrenade_M67",
			MAG_2("SmokeShell")
		};
		
		nightItems[] = {
			MAG_2("Chemlight_green"),
			"ACE_Flashlight_MX991",
			"ACE_Flashlight_Maglite_ML300L"
		};

	};

class cwr3_b_soldier_gl;	
	class TWC_Infantry_USA_CW_Grenadier: cwr3_b_soldier_gl {
		faction = "TWC_USA_CW";
		CATEGORY(TWC_Infantry_Regular_Woodland)
		class EventHandlers: EventHandlers {
			init = "(_this select 0) setVariable [""twc_keepMap"",true]";
		};
		
		items[] = {
			CW_ITEMS
		};

		respawnItems[] = {
			CW_ITEMS
		};
		
		magazines[] =
		{
			MAG_6("CUP_30Rnd_556x45_Stanag"),
			MAG_2("CUP_30Rnd_556x45_Stanag_Tracer_Red"),
			MAG_10("CUP_1Rnd_HE_M203"),
			MAG_2("CUP_HandGrenade_M67"),
			MAG_2("SmokeShell")
		};
		respawnmagazines[] =
		{
			MAG_6("CUP_30Rnd_556x45_Stanag"),
			MAG_2("CUP_30Rnd_556x45_Stanag_Tracer_Red"),
			MAG_10("CUP_1Rnd_HE_M203"),
			MAG_2("CUP_HandGrenade_M67"),
			MAG_2("SmokeShell")
		};
		
		nightItems[] = {
			MAG_2("Chemlight_green"),
			"ACE_Flashlight_MX991",
			"ACE_Flashlight_Maglite_ML300L"
		};

	};

class cwr3_b_soldier_at_law;	
	class TWC_Infantry_USA_CW_Rifleman_LAW: cwr3_b_soldier_at_law {
		faction = "TWC_USA_CW";
		CATEGORY(TWC_Infantry_Regular_Woodland)
		class EventHandlers: EventHandlers {
			init = "(_this select 0) setVariable [""twc_keepMap"",true]";
		};
		
		items[] = {
			CW_ITEMS
		};

		respawnItems[] = {
			CW_ITEMS
		};
		
		magazines[] =
		{
			MAG_6("CUP_30Rnd_556x45_Stanag"),
			MAG_2("CUP_30Rnd_556x45_Stanag_Tracer_Red"),
			MAG_2("CUP_HandGrenade_M67"),
			MAG_3("SmokeShell")
		};
		respawnmagazines[] =
		{
			MAG_6("CUP_30Rnd_556x45_Stanag"),
			MAG_2("CUP_30Rnd_556x45_Stanag_Tracer_Red"),
			MAG_2("CUP_HandGrenade_M67"),
			MAG_3("SmokeShell")
		};
		
		nightItems[] = {
			MAG_2("Chemlight_green"),
			"ACE_Flashlight_MX991",
			"ACE_Flashlight_Maglite_ML300L"
		};

	};
	
	class cwr3_b_soldier_medic;
	class TWC_Infantry_USA_CW_Medic: cwr3_b_soldier_medic {
		displayName = "Medic";
		attendant = 1;
		backpack = "TWC_Backpack_USA_CW_Medic" ;
		faction = "TWC_USA_CW";
		CATEGORY(TWC_Infantry_Regular_Woodland)
		class EventHandlers: EventHandlers {
			init = "(_this select 0) setVariable [""twc_keepMap"",true]";
		};
		
		items[] = {
			CW_ITEMS
		};

		respawnItems[] = {
			CW_ITEMS
		};
		
		nightItems[] = {
			MAG_2("Chemlight_green"),
			"ACE_Flashlight_MX991",
			"ACE_Flashlight_Maglite_ML300L"
		};

	};

class cwr3_b_soldier_crew;	
	class TWC_Infantry_USA_CW_Crew: cwr3_b_soldier_crew {
		faction = "TWC_USA_CW";
		CATEGORY(TWC_Infantry_Regular_Woodland)
		class EventHandlers: EventHandlers {
			init = "(_this select 0) setVariable [""twc_keepMap"",true]";
		};
		
		items[] = {
			CW_ITEMS
		};

		respawnItems[] = {
			CW_ITEMS
		};
		
		nightItems[] = {
			MAG_2("Chemlight_green"),
			"ACE_Flashlight_MX991",
			"ACE_Flashlight_Maglite_ML300L"
		};

	};

class CUP_B_AAV_USMC;
	class TWC_Vehicle_USA_AAV: CUP_B_AAV_USMC {
		faction = "TWC_USA_CW";
		CATEGORY(TWC_ForceType_Mechanised)

		class AcreIntercoms {
			class Intercom_1 {
				displayName = "Crew Intercom";
				shortName = "Crew";
				allowedPositions[] = {"crew"};
				disabledPositions[] = {};
				limitedPositions[] = {{"cargo", "all"}};
				numLimitedPositions = 1;
				masterPositions[] = {"crew"};
				connectedByDefault = 1;
			};
			class Intercom_2 {
				displayName = "Cargo Intercom";
				shortName = "Cargo";
				allowedPositions[] = {"commander", {"cargo", "all"}};
				disabledPositions[] = {};
				limitedPositions[] = {};
				numLimitedPositions = 0;
				masterPositions[] = {"commander"};
				connectedByDefault = 1;
			};
		};
		class AcreRacks {
			class Rack_1 {
				displayName = "Vehicle Radio";
				shortName = "Vehicle Radio";
				componentName = "ACRE_VRC64";
				allowedPositions[] = {"driver", "gunner"};
				disabledPositions[] = {};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC77";
				isRadioRemovable = 0;
				intercom[] = {"intercom_1"};
			};
		};

		class TransportItems {
			ADD_ITEM(ACE_fieldDressing, 20);
			ADD_ITEM(ACE_elasticBandage, 20);
			ADD_ITEM(ACE_quikclot, 20);
			ADD_ITEM(ACE_packingBandage, 20);
			ADD_ITEM(ACE_tourniquet, 6);
			ADD_ITEM(ACE_morphine, 10);
			ADD_ITEM(ACE_epinephrine, 6);
		};

		class TransportMagazines {
			// AR
			ADD_MAGA(CUP_30Rnd_556x45_Stanag, 20);
			ADD_MAGA(CUP_30Rnd_556x45_Stanag_Tracer_Red, 10);

			// Minimi
			ADD_MAGA(CUP_200Rnd_TE4_Red_Tracer_556x45_M249, 3);

			// Smoke Grenades
			ADD_MAGA(SmokeShell, 5);
			ADD_MAGA(SmokeShellRed, 2);
			ADD_MAGA(SmokeShellGreen, 2);
			ADD_MAGA(SmokeShellBlue, 2);
			ADD_MAGA(SmokeShellYellow, 2);
			
			// Hand Grenade HE
			ADD_MAGA(CUP_HandGrenade_M67, 6);
		};
	};