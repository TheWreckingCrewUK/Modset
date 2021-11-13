class CUP_B_US_Soldier_SL_OEFCP;
	class TWC_Infantry_USA_Modern_SquadLeader: CUP_B_US_Soldier_SL_OEFCP {
		backpack = "TWC_Backpack_USA_Modern_SquadLeader" ;
		faction = "TWC_USA_Modern";
		CATEGORY(TWC_Infantry_Regular_Woodland)
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
			MAG_1("CUP_HandGrenade_M67"),
			MAG_1("SmokeShellBlue"),
			MAG_1("SmokeShellOrange"),
			MAG_1("SmokeShellPurple"),
			MAG_2("SmokeShell")
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
			MAG_1("CUP_HandGrenade_M67"),
			MAG_1("SmokeShellBlue"),
			MAG_1("SmokeShellOrange"),
			MAG_1("SmokeShellPurple"),
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

class CUP_B_US_Soldier_TL_OEFCP;	
	class TWC_Infantry_USA_Modern_TeamLeader: CUP_B_US_Soldier_TL_OEFCP {
		backpack = "TWC_Backpack_USA_Modern_TeamLeader" ;
		faction = "TWC_USA_Modern";
		CATEGORY(TWC_Infantry_Regular_Woodland)
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
			MAG_1("SmokeShellRed"),
			MAG_1("SmokeShellYellow"),
			MAG_1("SmokeShellGreen"),
			MAG_2("SmokeShell")
		};
		respawnmagazines[] =
		{
			MAG_5("CUP_30Rnd_556x45_Stanag"),
			MAG_3("CUP_30Rnd_556x45_Stanag_Tracer_Red"),
			MAG_2("CUP_15Rnd_9x19_M9"),
			MAG_2("CUP_HandGrenade_M67"),
			MAG_1("SmokeShellRed"),
			MAG_1("SmokeShellYellow"),
			MAG_1("SmokeShellGreen"),
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

class CUP_B_US_Soldier_AR_OEFCP;	
	class TWC_Infantry_USA_Modern_AutoRifleman: CUP_B_US_Soldier_AR_OEFCP {
		faction = "TWC_USA_Modern";
		CATEGORY(TWC_Infantry_Regular_Woodland)
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
			MAG_1("CUP_HandGrenade_M67"),
			MAG_2("SmokeShell")
		};
		respawnmagazines[] =
		{
			MAG_2("CUP_200Rnd_TE4_Red_Tracer_556x45_M249"),
			MAG_1("CUP_HandGrenade_M67"),
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

class CUP_B_US_Soldier_GL_OEFCP;	
	class TWC_Infantry_USA_Modern_Grenadier: CUP_B_US_Soldier_GL_OEFCP {
		faction = "TWC_USA_Modern";
		CATEGORY(TWC_Infantry_Regular_Woodland)
		class EventHandlers: EventHandlers {
			init = "(_this select 0) setVariable [""twc_keepMap"",true]";
		};
		
		items[] = {
			MEDICAL_LOADOUT
		};

		respawnItems[] = {
			MEDICAL_LOADOUT
		};
		
		weapons[] = {
			"CUP_arifle_M4A3_M203_ACOG_Laser",
			"Throw",
			"Put"
		};
		
		respawnweapons[] = {
			"CUP_arifle_M4A3_M203_ACOG_Laser",
			"Throw",
			"Put"
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

class CUP_B_US_Soldier_ACOG_OEFCP;	
	class TWC_Infantry_USA_Modern_Rifleman: CUP_B_US_Soldier_ACOG_OEFCP {
		faction = "TWC_USA_Modern";
		CATEGORY(TWC_Infantry_Regular_Woodland)
		class EventHandlers: EventHandlers {
			init = "(_this select 0) setVariable [""twc_keepMap"",true]";
		};
		
		items[] = {
			MEDICAL_LOADOUT
		};

		respawnItems[] = {
			MEDICAL_LOADOUT
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
		
		nightItems[] = {
			MAG_2("Chemlight_green"),
			"ACE_Flashlight_MX991",
			"ACE_Flashlight_Maglite_ML300L"
		};

		nightLinkedItems[] = {
			"twc_nightvision_gen3"
		};
	};
	
	class TWC_Infantry_USA_Modern_Medic: TWC_Infantry_USA_Modern_Rifleman {
		displayName = "Medic";
		attendant = 1;
		backpack = "TWC_Backpack_USA_Modern_Medic" ;
	};

class CUP_B_US_Crew_OEFCP;	
	class TWC_Infantry_USA_Modern_Crew: CUP_B_US_Crew_OEFCP {
		faction = "TWC_USA_Modern";
		CATEGORY(TWC_Infantry_Regular_Woodland)
		class EventHandlers: EventHandlers {
			init = "(_this select 0) setVariable [""twc_keepMap"",true]";
		};
		
		items[] = {
			MEDICAL_LOADOUT
		};

		respawnItems[] = {
			MEDICAL_LOADOUT
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

class CUP_B_M1126_ICV_M2_Desert;
	class TWC_Vehicle_USA_M1126_ICV_M2_Desert: CUP_B_M1126_ICV_M2_Desert {
		faction = "TWC_USA_Modern";
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
	
class CUP_B_M1128_MGS_Desert;
	class TWC_Vehicle_USA_M1128_MGS_Desert: CUP_B_M1128_MGS_Desert {
		faction = "TWC_USA_Modern";
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
	};
