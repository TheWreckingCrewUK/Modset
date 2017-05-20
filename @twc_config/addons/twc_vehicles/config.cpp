class CfgPatches
{
	class twc_vehicles
	{
		units[]={
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
			"TWC_burnes_foxhound_w_a"
			
			
		};
		weapons[]=
		{
			"TWC_30mm_HE_item",
			"TWC_30mm_AP_item"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Armor_F_Beta",
			"Burnes_crew_CTRG",
			"cup_wheeledvehicles_lr",
			"cup_trackedvehicles_fv510",
			"uk3cb_baf_vehicles_wildcat",
			"cup_airvehicles_c130j"
		};
	};
};
#include "defines.hpp"
class CfgFunctions
{
	class twc_vehicles
	{
		tag="TWC";
		class FunctionsWarrior
		{
			file="twc_vehicles\functions";
			class AddAP
			{
			};
			class AddHE
			{
			};
			class RemoveAP
			{
			};
			class RemoveHE
			{
			};
			class RemoveAmmoInventory
			{
			};
			class ShowAmmo
			{
			};
		};
	};
};
class Extended_PostInit_EventHandlers
{
	class twc_vehicles_Init
	{
		init="execVM '\twc_vehicles\init.sqf';";
	};
};
class CfgMagazines
{
	class 140Rnd_30mm_MP_shells_Tracer_Yellow;
	class 60Rnd_30mm_APFSDS_shells;
	class TWC_30mm_3rnd_HE: 140Rnd_30mm_MP_shells_Tracer_Yellow
	{
		author="FakeMatty";
		scope=1;
		scopeArsenal=0;
		displayName="30mm HE";
		count=3;
	};
	class TWC_30mm_3rnd_AP: 60Rnd_30mm_APFSDS_shells
	{
		author="FakeMatty";
		scope=1;
		scopeArsenal=0;
		displayName="30mm AP";
		count=3;
	};
};
class CfgWeapons
{
	class HE;
	class AP;
	class autocannon_30mm;
	class CUP_Vlmg_L94A1_Coax;
	class ACE_ItemCore;
	class InventoryItem_Base_F;
	class TWC_GPMG: CUP_Vlmg_L94A1_Coax
	{
		displayname="L94A1";
	};
	class TWC_Rarden: autocannon_30mm
	{
		class AP: AP
		{
			displayname="L121A1 Rarden";
			magazineReloadTime=1.2;
			magazines[]=
			{
				"TWC_30mm_3rnd_AP",
				"TWC_30mm_3rnd_HE"
			};
		};
	};
	class TWC_30mm_HE_item: ACE_ItemCore
	{
		scope=2;
		picture="\twc_vehicles\pictures\30mmHE.paa";
		displayName="30mm HE";
		descriptionShort="Adds 1 magazine of HE ammo to a warrior.";
		descriptionUse="";
		class ItemInfo: InventoryItem_Base_F
		{
			mass=30;
		};
	};
	class TWC_30mm_AP_item: ACE_ItemCore
	{
		scope=2;
		picture="\twc_vehicles\pictures\30mmAP.paa";
		displayName="30mm AP";
		descriptionShort="Adds 1 magazine of AP ammo to a warrior.";
		descriptionUse="";
		class ItemInfo: InventoryItem_Base_F
		{
			mass=30;
		};
	};
};
class DefaultEventhandlers;
class CfgVehicles
{
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
		faction="twc_faction";
		displayname = "Landrover Woodland (Modern)";
		GearModern;
	};
	class twc_landrover_D: CUP_B_LR_Transport_GB_D
	{
		scope = 2;
		side = 1;
		faction="twc_faction";
		displayname = "Landrover Desert (Modern)";
		GearModern;
	};
	class twc_landrover_Special_W: CUP_B_LR_Special_M2_GB_W
	{
		scope = 2;
		side = 1;
		faction="twc_faction";
		displayname = "Landrover Special Woodland (Modern)";
		GearModern;
	};
	class twc_landrover_Special_D: CUP_B_LR_Special_M2_GB_D
	{
		scope = 2;
		side = 1;
		faction="twc_faction";
		displayname = "Landrover Special Desert (Modern)";
		GearModern;
	};
		class twc_Foxhound_D: burnes_foxhound_d_a
	{
		scope = 2;
		side = 1;
		faction="twc_faction";
		displayname = "Foxhound (Desert)";
		GearModern;
	};
		class twc_Foxhound_W: burnes_foxhound_w_a
	{
		scope = 2;
		side = 1;
		faction="twc_faction";
		displayname = "Foxhound (Woodland)";
		GearModern;
	};
	class twc_landrover_W_1990: CUP_B_LR_Transport_GB_W
	{
		scope = 2;
		side = 1;
		faction="twc_faction";
		displayname = "Landrover Woodland (90`s)";
		Gear1990;
	};
	class twc_landrover_D_1990: CUP_B_LR_Transport_GB_D
	{
		scope = 2;
		side = 1;
		faction="twc_faction";
		displayname = "Landrover Desert (90`s)";
		Gear1990;
	};
	class twc_landrover_Special_W_1990: CUP_B_LR_Special_M2_GB_W
	{
		scope = 2;
		side = 1;
		faction="twc_faction";
		displayname = "Landrover Special Woodland (1990)";
		Gear1990;
	};
	class twc_landrover_Special_D_1990: CUP_B_LR_Special_M2_GB_D
	{
		scope = 2;
		side = 1;
		faction="twc_faction";
		displayname = "Landrover Special Desert (1990)";
		GearModern;
	};
	class twc_landrover_W_ColdWar: CUP_B_LR_Transport_GB_W
	{
		scope = 2;
		side = 1;
		faction="twc_faction";
		displayname = "Landrover Woodland (ColdWar)";
		GearColdwar;
	};
	class twc_landrover_D_ColdWar: CUP_B_LR_Transport_GB_D
	{
		scope = 2;
		side = 1;
		faction="twc_faction";
		displayname = "Landrover Desert (Coldwar)";
		GearColdwar;
	};
	class twc_landrover_Special_W_ColdWar: CUP_B_LR_Special_M2_GB_W
	{
		scope = 2;
		side = 1;
		faction="twc_faction";
		displayname = "Landrover Special Woodland (Coldwar)";
		GearColdwar;
	};
	class twc_landrover_Special_D_ColdWar: CUP_B_LR_Special_M2_GB_D
	{
		scope = 2;
		side = 1;
		faction="twc_faction";
		displayname = "Landrover Special Desert (ColdWar)";
		GearModern;
	};
	class TWC_fv432: ukcw_fv432
	{
		scope = 2;
		side = 1;
		faction="twc_faction";
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
				Weapon = "HAFM_LAW";
				count = 2;
			};
		};
	};
	class twc_wildcat: UK3CB_BAF_Wildcat_AH1_CAS_8A
	{
		scope = 2;
		side = 1;
		faction="twc_faction";
		author = "3CB";
		displayname = "Wildcat";
		GearModern;
		class TransportBackpacks
		{
		};
	};
	class twc_wildcat_1990: UK3CB_BAF_Wildcat_AH1_CAS_8A
	{
		scope = 2;
		side = 1;
		faction="twc_faction";
		author = "3CB";
		displayname = "Lynx";
		Gear1990;
		class TransportBackpacks
		{
		};
	};
	class twc_puma: CUP_B_SA330_Puma_HC1_BAF
	{
		scope = 2;
		side = 1;
		faction="twc_faction";
		author = "DG";
		displayname = "Puma HC1";
		GearColdwar;
	};
	class twc_c5_hercules: CUP_B_C130J_GB
	{
		scope=2;
		side=1;
		faction="twc_faction";
		author="CUP";
		displayname="C5 Hercules";
		class TransportMagazines
		{
			
		};
		class TransportItems
		{
		
		};
		class TransportWeapons
		{
			
		};
	};
};