class CfgPatches
{
	class twc_ammoboxes
	{
		units[]=
		{
			"twc_forwardBase_BritishAmmoBox"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F"
		};
	};
};
class cfgWeapons
{
	class ItemCore;
	class CBA_MiscItem_ItemInfo;
	class ACE_ItemCore;
	class TWC_ForwardBase_Supplies: ACE_ItemCore
	{
		scope = 2;
		displayName = "Supplies";
		descriptionShort = "Supplies for the forward Base";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
};
class CfgVehicles
{
	class B_supplyCrate_F;
	class Box_NATO_AmmoVeh_F;
	class twc_forwardBase_BritishAmmoBox:B_supplyCrate_F
	{
		displayname = "British Ammobox (Large)";
		ace_dragging_canDrag = 1;
		class transportWeapons
		{
			class _xx_nlaw
			{
				weapon = "launch_NLAW_F";
				count = 2;
			};
			class _xx_law
			{
				weapon = "CUP_launch_M72A6";
				count = 4;
			};
		};
		class transportMagazines
		{
			class _xx_stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 40;
			};
			class _xx_stanagTracer
			{
				magazine = "UK3CB_BAF_556_30Rnd_T";
				count = 15;
			};
			class _xx_stanag_boxTracer
			{
				magazine ="UK3CB_BAF_556_200Rnd_T";
				count = 20;
			};
			class _xx_762_100beltTracer
			{
				magazine = "UK3CB_BAF_762_100Rnd_T";
				count = 7;
			};
			class _xx_762_beltTracer
			{
				magazine = "UK3CB_BAF_762_200Rnd_T";
				count = 7;
			};
			class _xx_762_mag
			{
				magazine = "UK3CB_BAF_762_L42A1_20Rnd";
				count = 10;
			};
			class _xx_762_magTracer
			{
				magazine = "UK3CB_BAF_762_L42A1_20Rnd_T";
				count = 6;
			};
			class _xx_1rnd_he
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 40;
			};
			class _xx_1rnd_smoke
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 15;
			};
			class _xx_handgrenade
			{
				magazine = "CUP_HandGrenade_L109A2_HE";
				count = 4;
			};
			class _xx_smokeshell
			{
				magazine = "SmokeShell";
				count = 8;
			};
		};
		class transportItems
		{
			class _xx_fieldDressing
			{
				name = "ACE_fieldDressing";
				count = 40;
			};
			class _xx_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 15;
			};
			class quickclot
			{
				name = "ACE_quickclot";
				count = 15;
			};
			class morphine
			{
				name = "ACE_morphine";
				count = 10;
			};
			class epinephrine
			{
				name = "ACE_epinephrine";
				count = 5;
			};
			class saline
			{
				name = "ACE_salineIV_500";
				count = 6;
			};
		};
		class transportbackpacks
		{
			
		};
	};
	class twc_forwardBase_CharlieAmmoBox:B_supplyCrate_F
	{
		displayname = "US Ammobox (Large)";
		ace_dragging_canDrag = 1;
		class transportWeapons
		{
			class _xx_at4
			{
				weapon = "UK3CB_BAF_AT4_CS_AP_Launcher";
				count = 2;
			};
			class _xx_law
			{
				weapon = "CUP_launch_M72A6";
				count = 1;
			};
		};
		class transportMagazines
		{
			class _xx_stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 50;
			};
			class _xx_stanagTracer
			{
				magazine = "30Rnd_556x45_Stanag_Tracer_Red";
				count = 10;
			};
			class _xx_stanag_box
			{
				magazine = "CUP_200Rnd_TE4_Red_Tracer_556x45_M249";
				count = 15;
			};
			class _xx_762_boxTracer
			{
				magazine = "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
				count = 15;
			};
			class _xx_1rnd_he
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 40;
			};
			class _xx_1rnd_smoke
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 5;
			};
			class _xx_handgrenade
			{
				magazine = "CUP_HandGrenade_L109A2_HE";
				count = 4;
			};
			class _xx_smokeshell
			{
				magazine = "SmokeShell";
				count = 6;
			};
		};
		class transportItems
		{
			class _xx_fieldDressing
			{
				name = "ACE_fieldDressing";
				count = 50;
			};
			class _xx_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 15;
			};
			class quickclot
			{
				name = "ACE_quickclot";
				count = 15;
			};
			class morphine
			{
				name = "ACE_morphine";
				count = 5;
			};
			class epinephrine
			{
				name = "ACE_epinephrine";
				count = 5;
			};
			class saline
			{
				name = "ACE_salineIV_500";
				count = 10;
			};
		};
		class transportbackpacks
		{
			
		};
	};
	class twc_SuppliesBox: Box_NATO_AmmoVeh_F
	{
		displayName = "TWC Supply Box";
		ace_dragging_canDrag = 1;
		scope = 2;
		class ACE_Actions{
			class ACE_MainActions{
				selection = "";
				distance = 2;
				condition = "true";
				position = "[0,0,0.4]";
				ace_dragging_dragPosition[] = {0,4,0};
				class twc_spawnSandbagCorner{
					displayName = "Spawn Defenses";
					condition = "true";
					statement = "[_player,_target] spawn twc_fnc_showSandBagItems";
                    icon = "";
				};
				
			};
		};
		class transportItems
		{
			class _xx_supplies
			{
				name = "TWC_ForwardBase_Supplies";
				count = 2000;
			};
		};
	};
	class twc_SuppliesBox_Large: Box_NATO_AmmoVeh_F
	{
		displayName = "Large supply Box";
		ace_dragging_canDrag = 1;
		scope = 2;
		class ACE_Actions{
			class ACE_MainActions{
				selection = "";
				distance = 2;
				condition = "true";
				position = "[0,0,0.4]";
				ace_dragging_dragPosition[] = {0,4,0};				
			};
		};
		class transportItems
		{
			class _xx_supplies
			{
				name = "TWC_ForwardBase_Supplies";
				count = 2000;
			};
		};
	};
	
	class Box_NATO_Ammo_F;
	class TWC_Public_AmmoBox_Hobbs_Precious: Box_NATO_Ammo_F {
		scope = 2;
		scopeCurator = 1; // hide from zeus
		displayName = "Storage Box (Hobbs Trick Box)";
		author      = "Bosenator";
		model = "a3\structures_f\Items\Tools\DustMask_F.p3d";

		class TransportMagazines { };
		class TransportItems     { };
		class TransportWeapons   { };
		class TransportBackpacks { };

		maximumLoad = 1000;

		// ACE Defines
		ace_cargo_canLoad     = 0;
		ace_cargo_hasCargo    = 0;

		ace_dragging_canCarry = 0;
		ace_dragging_canDrag  = 0;
	};
	//basically a placeholder for when loose ammo comes in just to remember the model
	class TWC_Public_AmmoBox_stanag_box: Box_NATO_Ammo_F {
		scope = 2;
		displayName = "Ammunition Can";
		author      = "Hobbs";
		model = "A3\structures_f_epb\Items\Military\Ammobox_rounds_F.p3d";

		class transportMagazines
		{
			class _xx_stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 15;
			};
		};
		class TransportItems     { };
		class TransportWeapons   { };
		class TransportBackpacks { };

		maximumLoad = 140;

		// ACE Defines
		ace_cargo_canLoad     = 1;
		ace_cargo_size     = 0.2;
		ace_cargo_hasCargo    = 0;

		ace_dragging_canCarry = 1;
		ace_dragging_canDrag  = 1;
	};
	class TWC_Public_AmmoBox_medium: Box_NATO_Ammo_F 
	{
		scope = 2;
		displayName = "Ammunition Box";
		author      = "Hobbs";

		class transportMagazines { };
		class TransportItems     { };
		class TransportWeapons   { };
		class TransportBackpacks { };

		maximumLoad = 300;

		// ACE Defines
		ace_cargo_canLoad     = 1;
		ace_cargo_size     = 0.5;
		ace_cargo_hasCargo    = 0;

		ace_dragging_canCarry = 1;
		ace_dragging_canDrag  = 1;
	};
	class British_Resupply_Section:Box_NATO_Ammo_F
	{
		scope = 2;
		displayname = "Section Resupply Box";
		ace_dragging_canDrag = 1;
		class transportWeapons
		{};
		class transportMagazines
		{
			class _xx_stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 16;
			};
			class _xx_stanagTracer
			{
				magazine = "UK3CB_BAF_556_30Rnd_T";
				count = 4;
			};
			class _xx_stanag_boxTracer
			{
				magazine ="UK3CB_BAF_556_200Rnd_T";
				count = 6;
			};
			class _xx_762_100beltTracer
			{
				magazine = "UK3CB_BAF_762_100Rnd_T";
				count = 4;
			};
			class _xx_762_mag
			{
				magazine = "UK3CB_BAF_762_L42A1_20Rnd";
				count = 3;
			};
			class _xx_762_magTracer
			{
				magazine = "UK3CB_BAF_762_L42A1_20Rnd_T";
				count = 1;
			};
			class _xx_1rnd_he
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 8;
			};
			class _xx_1rnd_smoke
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 2;
			};
			class _xx_handgrenade
			{
				magazine = "CUP_HandGrenade_L109A2_HE";
				count = 6;
			};
			class _xx_smokeshell
			{
				magazine = "SmokeShell";
				count = 10;
			};
		};
		class transportItems
	{
			class _xx_fieldDressing
			{
				name = "ACE_fieldDressing";
				count = 12;
			};
			class _xx_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 12;
			};
			class quickclot
			{
				name = "ACE_quickclot";
				count = 12;
			};
			class morphine
			{
				name = "ACE_morphine";
				count = 12;
			};
			class epinephrine
			{
				name = "ACE_epinephrine";
				count = 8;
			};

		};
		class transportbackpacks
		{};
	};
		class British_Resupply_Launcher:Box_NATO_Ammo_F
	{
		scope = 2;
		displayname = "Section Launchers Resupply Box";
		ace_dragging_canDrag = 1;
		class transportWeapons
		{
			class _xx_nlaw
			{
				weapon = "launch_NLAW_F";
				count = 2;
			};
			class _xx_law
			{
				weapon = "CUP_launch_M72A6";
				count = 1;
			};	
		};
		class transportMagazines
		{};
		class transportItems
		{};
		class transportbackpacks
		{};
	};
		class British_60mm:Box_NATO_Ammo_F
	{
		scope = 2;
		displayname = "60mm Mortar";
		ace_dragging_canDrag = 1;
		class transportWeapons
		{
			class _xx_60mm
			{
				weapon = "UK3CB_BAF_M6";
				count = 1;
			};
		};
		class transportMagazines
		{			
		class HE
			{
				name = "UK3CB_BAF_1Rnd_60mm_Mo_Shells";
				count = 12;
			};
		class AB
			{
				name = "UK3CB_BAF_1Rnd_60mm_Mo_AB_Shells";
				count = 5;
			};
		class Smoke
			{
				name = "UK3CB_BAF_1Rnd_60mm_Mo_Shells_Smoke_White";
				count = 5;
			};
		};
		class transportItems
		{};
		class transportbackpacks
		{};
	};
		class British_60mm_Resupply:Box_NATO_Ammo_F
	{
		scope = 2;
		displayname = "60mm Mortar Ammo Box";
		ace_dragging_canDrag = 1;
		class transportWeapons
		{};
		class transportMagazines
		{
		class HE
			{
				name = "UK3CB_BAF_1Rnd_60mm_Mo_Shells";
				count = 12;
			};
		class AB
			{
				name = "UK3CB_BAF_1Rnd_60mm_Mo_AB_Shells";
				count = 5;
			};
		class Smoke
			{
				name = "UK3CB_BAF_1Rnd_60mm_Mo_Shells_Smoke_White";
				count = 5;
			};
		};
		class transportItems
		{};
		class transportbackpacks
		{};
	};
		class British_81mm:Box_NATO_Ammo_F
	{
		scope = 2;
		displayname = "60mm Mortar";
		ace_dragging_canDrag = 1;
		class transportWeapons
		{
			class _xx_81mm
			{
				weapon = "UK3CB_BAF_L16";
				count = 1;
			};
			class _xx_81mm_Tripod
			{
				weapon = "UK3CB_BAF_L16_Tripod";
				count = 1;
			};
		};
		class transportMagazines
		{			
		class HE
			{
				name = "UK3CB_BAF_1Rnd_81mm_Mo_Shells";
				count = 12;
			};
		class AB
			{
				name = "UK3CB_BAF_1Rnd_81mm_Mo_AB_Shells";
				count = 5;
			};
		class Smoke
			{
				name = "UK3CB_BAF_1Rnd_81mm_Mo_Shells_Smoke_White";
				count = 5;
			};
		};
		class transportItems
		{};
		class transportbackpacks
		{};
	};
		class British_81mm_Resupply:Box_NATO_Ammo_F
	{
		scope = 2;
		displayname = "81mm Mortar Ammo Box";
		ace_dragging_canDrag = 1;
		class transportWeapons
		{};
		class transportMagazines
		{
		class HE
			{
				name = "UK3CB_BAF_1Rnd_81mm_Mo_Shells";
				count = 12;
			};
		class AB
			{
				name = "UK3CB_BAF_1Rnd_81mm_Mo_AB_Shells";
				count = 5;
			};
		class Smoke
			{
				name = "UK3CB_BAF_1Rnd_81mm_Mo_Shells_Smoke_White";
				count = 5;
			};
		};
		class transportItems
		{};
		class transportbackpacks
		{};
	};
		class British_Javelin:Box_NATO_Ammo_F
	{
		scope = 2;
		displayname = "Javelin Box";
		ace_dragging_canDrag = 1;
		class transportWeapons
		{		
		class Tube
			{
				name = "UK3CB_BAF_Javelin_Slung_Tube";
				count = 1;
			};
		};
		class transportMagazines
		{};
		class transportItems
		{
		class CLU
			{
				name = "UK3CB_BAF_Javelin_CLU";
				count = 1;
			};
		};
		class transportbackpacks
		{};
	};
		class British_Javelin_Ammo:Box_NATO_Ammo_F
	{
		scope = 2;
		displayname = "Javelin Ammo Box";
		ace_dragging_canDrag = 1;
		class transportWeapons
		{		
		class Tube
			{
				name = "UK3CB_BAF_Javelin_Slung_Tube";
				count = 4;
			};
		};
		class transportMagazines
		{};
		class transportItems
		{};
		class transportbackpacks
		{};
	};
		class British_Medical:Box_NATO_Ammo_F
	{
		scope = 2;
		displayname = "Medical Box";
		ace_dragging_canDrag = 1;
		class transportWeapons
		{};
		class transportMagazines
		{};
		class transportItems
		{			
		class _xx_fieldDressing
			{
				name = "ACE_fieldDressing";
				count = 15;
			};
			class _xx_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 15;
			};
			class quickclot
			{
				name = "ACE_quickclot";
				count = 15;
			};
			class morphine
			{
				name = "ACE_morphine";
				count = 6;
			};
			class epinephrine
			{
				name = "ACE_epinephrine";
				count = 6;
			};
			class saline500
			{
				name = "ACE_salineIV_500";
				count = 12;
			};
			class saline250
			{
				name = "ACE_salineIV_250";
				count = 12;
			};
			class tourniquet
			{
				name = "ACE_tourniquet";
				count = 4;
			};
			class SutureKit
			{
				name = "TWC_Item_Medical_SutureKit_25";
				count = 1;
			};
			class Bodybag
			{
				name = "ACE_bodyBag";
				count = 6;
			};
			};
		class transportbackpacks
		{};
	};
};