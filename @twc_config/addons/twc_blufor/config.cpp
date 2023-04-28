class CfgPatches {
	class twc_chad {
		units[] = {};
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
	class TWC_Chad {
		displayName = "Chadian National Armed Forces";
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

	#include "backpacks.hpp"

	class B_Soldier_base_F;
	class O_Soldier_base_F;
	class I_Soldier_F;

	#define ITEMS(RADIO,ITEMS) RADIO,ITEMS
	#define CW_ITEMS "ACE_EarPlugs",,"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_tourniquet","ACE_tourniquet"
	#define MEDICAL_LOADOUT "ACRE_PRC343","ACE_EarPlugs","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_tourniquet","ACE_tourniquet"
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
	class TWC_AmmoBox_Chad_Group_Portable: TWC_AmmoBox_Portable {
		scope = 2;
		scopeCurator = 2;
		displayName = "Chad Group Resupply (Portable)";

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
			// AK
			ADD_MAGA(CUP_30Rnd_762x39_AK47_M, 25);

			// MG
			ADD_MAGA(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M, 8);

			// RPG
			ADD_MAGA(CUP_PG7V_M, 2);
			ADD_MAGA(CUP_OG7_M, 3);

			// Smoke Grenades
			ADD_MAGA(SmokeShell, 10);
			ADD_MAGA(SmokeShellRed, 2);
			ADD_MAGA(SmokeShellGreen, 2);
			ADD_MAGA(SmokeShellBlue, 2);
			ADD_MAGA(SmokeShellYellow, 2);
			
			// Hand Grenade HE
			ADD_MAGA(CUP_HandGrenade_RGO, 5);
		};
	};

	#include "chad\units.hpp"
};

class CfgGroups {
	class WEST {
		class TWC_Groups_Chad {
			name = "TWC Groups Chad";
			#include "groups.hpp"
		};
	};
};