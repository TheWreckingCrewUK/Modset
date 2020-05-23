class CfgPatches
{
	class twc_colombia {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"A3_Characters_F_BLUFOR",
			"A3_Characters_F_OPFOR",
			"twc_faction",
			"twc_ai"
		};
	};
};

class EventHandlers;

class CfgFactionClasses {
	class TWC_Colombia {
		displayName = "TWC Operations - Colombia";
		author = "The Wrecking Crew";
		icon = "TWClogo.paa";
		priority = 2;
		side = 1;
	};
};

class CfgWeapons
{
	#include "weapons.hpp"
};

class CfgVehicles
{
	#define ADD_MAGA(a,b) class _nc_##a {magazine = a; count = b;}
	#define ADD_WEAP(a,b) class _nc_##a {weapon = a; count = b;}
	#define ADD_ITEM(a,b) class _nc_##a {name = a; count = b;}
	
	#include "backpacks.hpp"
	#include "ammocrates.hpp"
	
	class B_Soldier_base_F;
	class O_Soldier_base_F;
	class I_Soldier_F;

	#define MEDICAL_LOADOUT "ACE_EarPlugs","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_tourniquet","ACE_tourniquet"
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
	#define MAG_13(a) a, a, a, a, a, a, a, a, a, a, a, a, a
	#define CATEGORY(a) editorSubcategory = a;\
			vehicleClass = a;

	//GENERIC
	class TWC_Infantry_Colombia_Base: B_Soldier_base_F {
		scope = 1;
		displayName = "Base";
		faction = "TWC_Colombia";
		CATEGORY(TWC_Infantry_Regular_Woodland)
		icon = "iconMan";
		nakedUniform = "U_BasicBody";
		uniformClass = "CUP_U_B_BDUv2_M81";
		backpack = "";

		linkedItems[] = {
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};

		respawnLinkedItems[] = {
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};

		items[] = {
			MEDICAL_LOADOUT
		};

		respawnItems[] = {
			MEDICAL_LOADOUT
		};

		weapons[] = {
			"Throw",
			"Put"
		};

		respawnweapons[] = {
			"Throw",
			"Put"
		};

		magazines[] = {};
		respawnmagazines[] = {};

		nightItems[] = {
			"ACE_Flashlight_MX991",
			"Chemlight_green",
			"Chemlight_green"
		};
	};
	#include "units.hpp"
	
	// Nyala config
	
	class CUP_B_RG31E_M2_USA;
	class CUP_B_RG31_M2_USA;
	class CUP_B_RG31_M2_GC_USA;
	
	class TWC_Vehicle_Colombia_Nyala_Mk5E: CUP_B_RG31E_M2_USA
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "TWC_Colombia";
		armor = 600;
		
		displayname = "RG-31 Nyala - Mk5E";
		editorSubcategory = "TWC_ForceType_HeavyMobility";

		class TransportItems {
			ADD_ITEM(ACE_fieldDressing, 20);
			ADD_ITEM(ACE_elasticBandage, 20);
			ADD_ITEM(ACE_quikclot, 20);
			ADD_ITEM(ACE_packingBandage, 20);
			
			ADD_ITEM(ACE_morphine, 16);
			ADD_ITEM(ACE_epinephrine, 16);
			ADD_ITEM(ACE_tourniquet, 10);
		}; 
		
		class TransportMagazines {
			ADD_MAGA(CUP_35Rnd_556x45_Galil_Mag, 20);
			ADD_MAGA(CUP_35Rnd_556x45_Red_Tracer_Galil_Mag, 6);
			ADD_MAGA(CUP_30Rnd_556x45_Stanag, 11);
			
			ADD_MAGA(CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M, 16);
			
			ADD_MAGA(1Rnd_HE_Grenade_shell, 16);
			ADD_MAGA(UGL_FlareWhite_F, 4);
			ADD_MAGA(1Rnd_Smoke_Grenade_shell, 4);
			ADD_MAGA(1Rnd_SmokeGreen_Grenade_shell, 4);
			ADD_MAGA(1Rnd_SmokeRed_Grenade_shell, 4);
			ADD_MAGA(1Rnd_SmokeBlue_Grenade_shell, 4);
			
			ADD_MAGA(SmokeShell, 14);
			ADD_MAGA(SmokeShellRed, 4);
			ADD_MAGA(SmokeShellGreen, 4);
			ADD_MAGA(SmokeShellBlue, 4);
			ADD_MAGA(SmokeShellYellow, 4);
			
			ADD_MAGA(CUP_HandGrenade_M67, 10);
		};
		
		class TransportWeapons { };
		class TransportBackpacks { };
	};
	
	class TWC_Vehicle_Colombia_Nyala: CUP_B_RG31_M2_USA
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "TWC_Colombia";
		armor = 600;
		
		displayname = "RG-31 Nyala";
		editorSubcategory = "TWC_ForceType_HeavyMobility";

		class TransportItems {
			ADD_ITEM(ACE_fieldDressing, 20);
			ADD_ITEM(ACE_elasticBandage, 20);
			ADD_ITEM(ACE_quikclot, 20);
			ADD_ITEM(ACE_packingBandage, 20);
			
			ADD_ITEM(ACE_morphine, 16);
			ADD_ITEM(ACE_epinephrine, 16);
			ADD_ITEM(ACE_tourniquet, 10);
		}; 
		
		class TransportMagazines {
			ADD_MAGA(CUP_35Rnd_556x45_Galil_Mag, 10);
			ADD_MAGA(CUP_35Rnd_556x45_Red_Tracer_Galil_Mag, 5);
			ADD_MAGA(CUP_30Rnd_556x45_Stanag, 5);
			
			ADD_MAGA(CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M, 8);
			
			ADD_MAGA(1Rnd_HE_Grenade_shell, 8);
			ADD_MAGA(UGL_FlareWhite_F, 4);
			ADD_MAGA(1Rnd_Smoke_Grenade_shell, 4);
			ADD_MAGA(1Rnd_SmokeGreen_Grenade_shell, 4);
			ADD_MAGA(1Rnd_SmokeRed_Grenade_shell, 4);
			ADD_MAGA(1Rnd_SmokeBlue_Grenade_shell, 4);
			
			ADD_MAGA(SmokeShell, 8);
			ADD_MAGA(SmokeShellRed, 4);
			ADD_MAGA(SmokeShellGreen, 4);
			ADD_MAGA(SmokeShellBlue, 4);
			ADD_MAGA(SmokeShellYellow, 4);
			
			ADD_MAGA(CUP_HandGrenade_M67, 5);
		};
		
		class TransportWeapons { };
		class TransportBackpacks { };
	};
	
	class TWC_Vehicle_Colombia_Nyala_GC: CUP_B_RG31_M2_GC_USA
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "TWC_Colombia";
		armor = 600;
		
		displayname = "RG-31 Nyala (GC)";
		editorSubcategory = "TWC_ForceType_HeavyMobility";

		class TransportItems {
			ADD_ITEM(ACE_fieldDressing, 20);
			ADD_ITEM(ACE_elasticBandage, 20);
			ADD_ITEM(ACE_quikclot, 20);
			ADD_ITEM(ACE_packingBandage, 20);
			
			ADD_ITEM(ACE_morphine, 16);
			ADD_ITEM(ACE_epinephrine, 16);
			ADD_ITEM(ACE_tourniquet, 10);
		}; 
		
		class TransportMagazines {
			ADD_MAGA(CUP_35Rnd_556x45_Galil_Mag, 15);
			ADD_MAGA(CUP_35Rnd_556x45_Red_Tracer_Galil_Mag, 5);
			ADD_MAGA(CUP_30Rnd_556x45_Stanag, 5);
			
			ADD_MAGA(CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M, 8);
			
			ADD_MAGA(1Rnd_HE_Grenade_shell, 8);
			ADD_MAGA(UGL_FlareWhite_F, 4);
			ADD_MAGA(1Rnd_Smoke_Grenade_shell, 4);
			ADD_MAGA(1Rnd_SmokeGreen_Grenade_shell, 4);
			ADD_MAGA(1Rnd_SmokeRed_Grenade_shell, 4);
			ADD_MAGA(1Rnd_SmokeBlue_Grenade_shell, 4);
			
			ADD_MAGA(SmokeShell, 8);
			ADD_MAGA(SmokeShellRed, 4);
			ADD_MAGA(SmokeShellGreen, 4);
			ADD_MAGA(SmokeShellBlue, 4);
			ADD_MAGA(SmokeShellYellow, 4);
			
			ADD_MAGA(CUP_HandGrenade_M67, 10);
		};
		
		class TransportWeapons { };
		class TransportBackpacks { };
	};
};

class CfgGroups
{
	class WEST
	{
		class TWC_Groups_Colombia
		{
			name = "TWC Groups Colombia";
			#include "groups.hpp"
		};
	};
};

#include "CfgMarkers.hpp"