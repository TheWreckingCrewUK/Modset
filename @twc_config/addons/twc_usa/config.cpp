class CfgPatches {
	class twc_usa {
		units[] = {
			"TWC_Infantry_USA_CW_SquadLeader",
			"TWC_Infantry_USA_CW_TeamLeader",
			"TWC_Infantry_USA_CW_TeamLeader_MG",
			"TWC_Infantry_USA_CW_AutoRifleman",
			"TWC_Infantry_USA_CW_MachineGunner",
			"TWC_Infantry_USA_CW_Grenadier",
			"TWC_Infantry_USA_CW_Rifleman",
			"TWC_Infantry_USA_CW_Medic",
			"TWC_Infantry_USA_CW_Crew",
			"TWC_Infantry_USA_CW_D6C_SquadLeader",
			"TWC_Infantry_USA_CW_D6C_TeamLeader",
			"TWC_Infantry_USA_CW_D6C_TeamLeader_MG",
			"TWC_Infantry_USA_CW_D6C_AutoRifleman",
			"TWC_Infantry_USA_CW_D6C_MachineGunner",
			"TWC_Infantry_USA_CW_D6C_Grenadier",
			"TWC_Infantry_USA_CW_D6C_Rifleman",
			"TWC_Infantry_USA_CW_D6C_Medic",
			"TWC_Vehicle_USA_AAV",
			"TWC_AmmoBox_USA_Modern_Section_Portable",
			"TWC_AmmoBox_USA_CW_Section_Portable"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"A3_Characters_F_BLUFOR",
			"A3_Characters_F_OPFOR",
			"CUP_Creatures_Military_USArmy",
			"twc_faction",
			"twc_ai_skill"
		};
	};
};

class CfgFactionClasses {
	class TWC_USA_Modern {
		displayName = "TWC Operations USA - Modern";
		author = "The Wrecking Crew";
		icon = "TWClogo.paa";
		priority = 2;
		side = 1;
	};
	
	class TWC_USA_CW {
		displayName = "TWC Operations USA - Cold War";
		author = "The Wrecking Crew";
		icon = "TWClogo.paa";
		priority = 2;
		side = 1;
	};
};

class EventHandlers;

class CfgVehicles {
	#define ADD_MAGA(a,b) class _nc_##a {magazine = a; count = b;}
	#define ADD_WEAP(a,b) class _nc_##a {weapon = a; count = b;}
	#define ADD_ITEM(a,b) class _nc_##a {name = a; count = b;}

	class B_Soldier_base_F;

	#define ITEMS(RADIO,ITEMS) RADIO,ITEMS
	#define CW_ITEMS "ACE_EarPlugs","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_tourniquet","ACE_tourniquet"
	#define MODERN_ITEMS ITEMS("ACRE_PRC343",CW_ITEMS)
	#define MAG_2(a) a, a
	#define MAG_3(a) a, a, a
	#define MAG_4(a) a, a, a, a
	#define MAG_5(a) a, a, a, a, a
	#define MAG_6(a) a, a, a, a, a, a
	#define MAG_7(a) a, a, a, a, a, a, a
	#define MAG_8(a) a, a, a, a, a, a, a, a
	#define MAG_9(a) a, a, a, a, a, a, a, a, a
	#define MAG_10(a) a, a, a, a, a, a, a, a, a, a
	#define MAG_11(a) a, a, a, a, a, a, a, a, a, a, a
	#define MAG_12(a) a, a, a, a, a, a, a, a, a, a, a, a
	#define CATEGORY(a) editorSubcategory = a;\
			vehicleClass = a;

	class TWC_AmmoBox_Portable;
	class TWC_AmmoBox_USA_Modern_Section_Portable: TWC_AmmoBox_Portable {
		scope = 2;
		scopeCurator = 2;
		displayName = "USA (Modern) Section Resupply (Portable)";

		editorSubcategory = "TWC_Crates_Other";

		class TransportItems {
			ADD_ITEM(ACE_fieldDressing, 12);
			ADD_ITEM(ACE_elasticBandage, 12);
			ADD_ITEM(ACE_quikclot, 12);
			ADD_ITEM(ACE_packingBandage, 12);
			
			ADD_ITEM(ACE_morphine, 12);
			ADD_ITEM(ACE_epinephrine, 12);
			ADD_ITEM(ACE_tourniquet, 6);
		};

		class TransportMagazines {
			// AR
			ADD_MAGA(CUP_30Rnd_556x45_Stanag, 20);
			ADD_MAGA(CUP_30Rnd_556x45_Stanag_Tracer_Red, 10);
			
			// GL
			ADD_MAGA(CUP_1Rnd_HE_M203, 5);

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
	class TWC_AmmoBox_USA_CW_Section_Portable: TWC_AmmoBox_Portable {
		scope = 2;
		scopeCurator = 2;
		displayName = "USA (Cold War) Section Resupply (Portable)";

		editorSubcategory = "TWC_Crates_Other";

		class TransportItems {
			ADD_ITEM(ACE_fieldDressing, 12);
			ADD_ITEM(ACE_elasticBandage, 12);
			ADD_ITEM(ACE_quikclot, 12);
			ADD_ITEM(ACE_packingBandage, 12);
			
			ADD_ITEM(ACE_morphine, 12);
			ADD_ITEM(ACE_epinephrine, 12);
			ADD_ITEM(ACE_tourniquet, 6);
		};

		class TransportMagazines {
			// AR
			ADD_MAGA(CUP_30Rnd_556x45_Stanag, 20);
			ADD_MAGA(CUP_30Rnd_556x45_Stanag_Tracer_Red, 10);
			
			// GL
			ADD_MAGA(CUP_1Rnd_HE_M203, 5);

			// Minimi
			ADD_MAGA(CUP_200Rnd_TE4_Red_Tracer_556x45_M249, 2);
			
			// M60
			ADD_MAGA(CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M, 4);

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

	#include "modern\units.hpp"
	#include "modern\backpacks.hpp"
	
	#include "coldwar\units.hpp"
	#include "coldwar\backpacks.hpp"
};