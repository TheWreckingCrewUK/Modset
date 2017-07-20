class CfgPatches {
	class twc_vehicles {
		units[] = {
			/* 
			// OLD CLASS NAMES, DO NOT REUSE!
			"twc_landrover_W",
			"twc_landrover_D",
			"twc_landrover_Special_W",
			"twc_landrover_Special_D",
			"twc_landrover_W_1990",
			"twc_landrover_D_1990",
			"twc_landrover_Special_W_1990",
			"twc_landrover_Special_D_1900",
			"twc_landrover_W_ColdWar",
			"twc_landrover_D_ColdWar",
			"twc_landrover_Special_W_ColdWar",
			"twc_landrover_Special_D_ColdWar",
			"TWC_Warrior_D",
			"TWC_Warrior_W",
			"twc_wildcat",
			"twc_wildcat_1990",
			"twc_puma",
			"twc_c5_hercules",
			"TWC_fv432",
			"TWC_burnes_foxhound_d_a",
			"TWC_burnes_foxhound_w_a" */

			"TWC_Vehicle_Generic_LandRoverAmbulance_Woodland",
			"TWC_Vehicle_Generic_LandRoverAmbulance_Desert",
			"TWC_Vehicle_Generic_LandRoverAmbulance_UN",
			"TWC_Vehicle_Generic_Hercules_RAF",
			"TWC_Vehicle_Generic_Chinook_RAF",
			"TWC_Vehicle_Generic_Chinook_RAF_VIV",
			
			"TWC_Vehicle_ColdWar_LandRover_Woodland",
			"TWC_Vehicle_ColdWar_LandRover_Desert",
			"TWC_Vehicle_ColdWar_LandRover_UN",
			"TWC_Vehicle_ColdWar_LandRover_Woodland_COIN",
			"TWC_Vehicle_ColdWar_LandRover_Desert_COIN",
			"TWC_Vehicle_ColdWar_LandRover_UN_COIN",
			"TWC_Vehicle_ColdWar_Puma_RAF",
			"TWC_Vehicle_ColdWar_Puma_RAF_COIN"
		};

		weapons[] = {
			/* 
			// OLD CLASS NAMES, DO NOT REUSE!
			"TWC_30mm_HE_item",
			"TWC_30mm_AP_item" */

			"TWC_Item_30mm_3rd_HET",
			"TWC_Item_30mm_3rd_APDS"
		};

		requiredVersion = 0.1;
		requiredAddons[] = {
			"A3_Armor_F_Beta",
			"Burnes_crew_CTRG",
			"cup_wheeledvehicles_lr",
			"cup_trackedvehicles_fv510",
			"uk3cb_baf_vehicles_wildcat",
			"cup_airvehicles_c130j"
		};
		
		version = "2";
		projectName = "TWC";
		author = "Bosenator, Saxon, jayman, FakeMatty";
	};
};

class CfgFunctions {
	class twc_vehicles {
		tag = "TWC";
		
		class FunctionsWarrior {
			file = "twc_vehicles\xtra";
			class AddAP { };
			class AddHE { };
			class RemoveAP { };
			class RemoveHE { };
			class RemoveAmmoInventory { };
			class ShowAmmo { };
		};
	};
};

class Extended_PostInit_EventHandlers {
	class twc_vehicles_Init {
		init = "execVM 'twc_vehicles\init.sqf';";
	};
};

class CfgMagazines {
	class 140Rnd_30mm_MP_shells_Tracer_Yellow;
	class TWC_Magazine_30mm_3rd_HET: 140Rnd_30mm_MP_shells_Tracer_Yellow {
		author = "FakeMatty, Bosenator";
		scope = 1;
		scopeArsenal = 0;
		displayName = "L13A1 30mm 3rd HE-T";
		count = 3;
	};
	
	class 60Rnd_30mm_APFSDS_shells;
	class TWC_Magazine_30mm_3rd_APDS: 60Rnd_30mm_APFSDS_shells {
		author = "FakeMatty, Bosenator";
		scope = 1;
		scopeArsenal = 0;
		displayName = "L14A1 30mm 3rd APDS";
		count = 3;
	};
};

class CfgWeapons {
	class HE;
	class AP;
	class autocannon_30mm;
	class CUP_Vlmg_L94A1_Coax;
	class ACE_ItemCore;
	class InventoryItem_Base_F;
	
	class TWC_GPMG: CUP_Vlmg_L94A1_Coax {
		displayname = "L94A1";
	};
	
	class TWC_Rarden: autocannon_30mm {
		displayname = "L21A1 Rarden";
		magazineReloadTime = 1.2;
		magazines[] = {
			"TWC_Magazine_30mm_3rd_APDS",
			"TWC_Magazine_30mm_3rd_HET"
		};
	};
	
	// Items, so they come up in the inventory for the reload system
	class TWC_Item_30mm_3rd_HET: ACE_ItemCore {
		scope = 2;
		picture = "twc_vehicles\ui\30mmHE.paa";
		displayName = "L13A1 30mm 3rd HE-T";
		descriptionShort = "Used in the FV510 Warrior";
		descriptionUse = "";
		
		class ItemInfo: InventoryItem_Base_F {
			mass = 30;
		};
	};
	
	class TWC_Item_30mm_3rd_APDS: ACE_ItemCore {
		scope = 2;
		picture = "twc_vehicles\ui\30mmAP.paa";
		displayName = "L14A1 30mm 3rd APDS";
		descriptionShort = "Used in the FV510 Warrior";
		descriptionUse = "";
		
		class ItemInfo: InventoryItem_Base_F {
			mass = 30;
		};
	};
};

class DefaultEventhandlers;

class CfgVehicles {
	// Non-Conflict Add Macros for TransportMagazine, TransportWeapon & TransportItem
	#define ADD_MAGA(a,b) class _nc_##a {magazine = a; count = b;}
	#define ADD_WEAP(a,b) class _nc_##a {weapon = a; count = b;}
	#define ADD_ITEM(a,b) class _nc_##a {name = a; count = b;}
	#define ADD_QNTY(a) __EVAL(round a * CURRENT_VEHICLE)
	#define ADD_FACTION faction = "TWC_General"

	/*
		An explanation on how the macros in each era works.

		The files below include all the vehicles, and a MACRO for each vehicle called NAME_MOD. This is a modifier, which multiples the amount specified. So 0.5 will halve the amount, and 2 will double. Useful for things like a section being split amongst two vehicles, or a chinhook housing 3 sections.
		
		They also use the MACRO defines as defined in twc_defines. These define the quantity of each item. Edits there will be reflected amongst all loadouts, like their backpacks, vehicles and ammmoboxes.
		
		Before the change of vehicle, be sure to define CURRENT_VEHICLE to the new vehicle MOD MACRO. This makes copy and pasting a lot easier, ideal for situations where you're just changing the camo.
	*/

	class UK3CB_BAF_LandRover_Soft_Green_B;
	class UK3CB_BAF_LandRover_Soft_Sand_A;
	class UK3CB_BAF_LandRover_Soft_UN_A;
	
	#include "generic\generic.hpp";
	#include "modern\modern.hpp";
	#include "millenial\millenial.hpp";
	#include "coldwar\coldwar.hpp";
};

/*
class CfgVehicles {
	#include "twcWarriorAndChallenger.hpp"
	
	class CUP_B_LR_Transport_GB_W;
	class CUP_B_LR_Transport_GB_D;
	class CUP_B_LR_Special_M2_GB_W;
	class CUP_B_LR_Special_M2_GB_D;
	class burnes_foxhound_d_a;
	class burnes_foxhound_w_a;
	class UK3CB_BAF_Wildcat_AH1_CAS_8A;
	class CUP_B_SA330_Puma_HC1_BAF;
	class CUP_B_C130J_GB;
	class ukcw_fv432;
	class twc_landrover_W: CUP_B_LR_Transport_GB_W
	{
		scope = 2;
		side = 1;
		faction="TWC_Modern";
		displayname = "Landrover Woodland (Modern)";
		GearModern;
	};
	class twc_landrover_D: CUP_B_LR_Transport_GB_D
	{
		scope = 2;
		side = 1;
		faction="TWC_Modern";
		displayname = "Landrover Desert (Modern)";
		GearModern;
	};
	class twc_landrover_Special_W: CUP_B_LR_Special_M2_GB_W
	{
		scope = 2;
		side = 1;
		faction="TWC_Modern";
		displayname = "Landrover Special Woodland (Modern)";
		GearModern;
	};
	class twc_landrover_Special_D: CUP_B_LR_Special_M2_GB_D
	{
		scope = 2;
		side = 1;
		faction="TWC_Modern";
		displayname = "Landrover Special Desert (Modern)";
		GearModern;
	};
		class twc_Foxhound_D: burnes_foxhound_d_a
	{
		scope = 2;
		side = 1;
		faction="TWC_Modern";
		displayname = "Foxhound (Desert)";
		GearModern;
	};
		class twc_Foxhound_W: burnes_foxhound_w_a
	{
		scope = 2;
		side = 1;
		faction="TWC_Modern";
		displayname = "Foxhound (Woodland)";
		GearModern;
	};
	class twc_landrover_W_1990: CUP_B_LR_Transport_GB_W
	{
		scope = 2;
		side = 1;
		faction="TWC_Millenial";
		displayname = "Landrover Woodland (90`s)";
		Gear1990;
	};
	class twc_landrover_D_1990: CUP_B_LR_Transport_GB_D
	{
		scope = 2;
		side = 1;
		faction="TWC_Millenial";
		displayname = "Landrover Desert (90`s)";
		Gear1990;
	};
	class twc_landrover_Special_W_1990: CUP_B_LR_Special_M2_GB_W
	{
		scope = 2;
		side = 1;
		faction="TWC_Millenial";
		displayname = "Landrover Special Woodland (1990)";
		Gear1990;
	};
	class twc_landrover_Special_D_1990: CUP_B_LR_Special_M2_GB_D
	{
		scope = 2;
		side = 1;
		faction="TWC_Millenial";
		displayname = "Landrover Special Desert (1990)";
		GearModern;
	};
	class twc_landrover_W_ColdWar: CUP_B_LR_Transport_GB_W
	{
		scope = 2;
		side = 1;
		faction="TWC_ColdWar";
		displayname = "Landrover Woodland (ColdWar)";
		GearColdwar;
	};
	class twc_landrover_D_ColdWar: CUP_B_LR_Transport_GB_D
	{
		scope = 2;
		side = 1;
		faction="TWC_ColdWar";
		displayname = "Landrover Desert (Coldwar)";
		GearColdwar;
	};
	class twc_landrover_Special_W_ColdWar: CUP_B_LR_Special_M2_GB_W
	{
		scope = 2;
		side = 1;
		faction="TWC_ColdWar";
		displayname = "Landrover Special Woodland (Coldwar)";
		GearColdwar;
	};
	class twc_landrover_Special_D_ColdWar: CUP_B_LR_Special_M2_GB_D
	{
		scope = 2;
		side = 1;
		faction="TWC_ColdWar";
		displayname = "Landrover Special Desert (ColdWar)";
		GearModern;
	};
	class TWC_fv432: ukcw_fv432
	{
		scope = 2;
		side = 1;
		faction="TWC_ColdWar";
		displayname = "FV432";
		class TransportMagazines
		{
			class _xx_UK3CB_20Rnd_762x51_B_fal
			{
				magazine="UK3CB_BAF_762_20Rnd";
				count=40;
			};
			class _xx_ukcw_34_rnd_sterling_mag
			{
				magazine="ukcw_34_rnd_sterling_mag";
				count=10;
			};
			class _xx_UK3CB_BAF_75Rnd
			{
				magazine="UK3CB_BAF_762_100Rnd";
				count=3;
			};
			class _xx_UK3CB_BAF_75Rnd_T
			{
				magazine="UK3CB_BAF_762_100Rnd";
				count=3;
			};
			class _xx_ACE_HandFlare_White
			{
				magazine="ACE_HandFlare_White";
				count=2;
			};
			class _xx_ukcw_m3maaws_HEAT
			{
				magazine="ukcw_l14a1_HEAT";
				count=2;
			};
			class _xx_ukcw_m3maaws_HE
			{
				magazine="ukcw_l14a1_HE";
				count=2;
			};
			class _xx_ukcw_m3maaws_SMOKE
			{
				magazine="ukcw_l14a1_SMOKE";
				count=2;
			};
			class _xx_ukcw_m3maaws_ILLUM
			{
				magazine="ukcw_l14a1_ILLUM";
				count=2;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
			class _xx_Grenade
			{
				magazine="CUP_HandGrenade_L109A2_HE";
				count=6;
			};
		};
		class TransportItems
		{
			class _xx_Bandage
			{
				name = "ACE_fieldDressing";
				count = 8;
			};
			class _xx_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 10;
			};
			class _xx_quickclot
			{
				name = "ACE_quikclot";
				count = 4;
			};
			class _xx_packing
			{
				name = "ACE_packingBandage";
				count = 10;
			};
			class _xx_Morphine
			{
				name = "ACE_morphine";
				count = 2;
			};
		};
		class TransportWeapons
		{
			class _xx_LAW
			{
				Weapon = "ukcw_L1A1_law";
				count = 2;
			};
		};
	};
	
	class twc_wildcat: UK3CB_BAF_Wildcat_AH1_CAS_8A {
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction="TWC_Modern";
		author = "3CB";
		displayname = "Wildcat";
		
		GearModern;
		
		class TransportBackpacks { };
		
		/* class Components {
			class VehicleSystemsDisplayManagerComponentLeft {
				componentType = "VehicleSystemsDisplayManager"; //mandatory
				x = (safezoneX + 0.5 * (((safezoneW / safezoneH) min 1.2) / 40));
				y = (safezoneY + safezoneH - 21 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25));
				left = 1;
				defaultDisplay = "EmptyDisplayComponent";

				class Components
				{
					class SlingLoadDisplay {
						componentType = "SlingLoadDisplayComponent";
						resource = "RscCustomInfoSlingLoad";
					};
					
					class SensorsDisplay {
						componentType = "SensorsDisplayComponent";
						range[] = {4000,2000,1000};
						showTargetTypes = 1+2+4+8+16+32+64+128+256+512+1024;
						resource = "RscCustomInfoSensors";
					};
					
					class EmptyDisplay {
						componentType = "EmptyDisplayComponent";
					};
				};
			};
		 
			class VehicleSystemsDisplayManagerComponentRight : VehicleSystemsDisplayManagerComponentLeft {
				x = (safezoneX + safezoneW) - ((10 * (((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * (((safezoneW / safezoneH) min 1.2) / 40));
				left = 0;
				right = 1;
				forcedDisplay = "SensorsDisplay";
			};
		}; 
	};
	
	class twc_wildcat_1990: UK3CB_BAF_Wildcat_AH1_CAS_8A {
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction="TWC_Millenial";
		author = "3CB";
		displayname = "Lynx";

		Gear1990;

		class TransportBackpacks { };
	};
	
	class twc_puma: CUP_B_SA330_Puma_HC1_BAF {
		scope = 2;
		side = 1;
		faction="TWC_ColdWar";
		author = "DG";
		displayname = "Puma HC1";
		GearColdwar;
	};
	
	class twc_c5_hercules: CUP_B_C130J_GB {
		scope=2;
		side=1;
		faction="TWC_General";
		author="CUP";
		displayname="C5 Hercules";
		
		class TransportMagazines { };
		class TransportItems { };
		class TransportWeapons { };
	};
}; */ 