class CfgPatches {
	class twc_uds {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"A3_Characters_F_BLUFOR",
			"A3_Characters_F_OPFOR",
			"CUP_Creatures_Military_USArmy",
			"twc_faction",
			"twc_ai"
		};
	};
};

class CfgFactionClasses {
	class TWC_USA_Modern {
		displayName = "TWC Operations - USA";
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
	#define CW_ITEMS "ACE_EarPlugs","ACRE_PRC343","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_tourniquet","ACE_tourniquet"
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

	#include "modern\units.hpp"
	#include "modern\backpacks.hpp"
};