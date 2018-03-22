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
		displayname = "TWC forwardBase BritishAmmobox";
		ace_dragging_canDrag = 1;
		class transportWeapons
		{
			class _xx_nlaw
			{
				weapon = "launch_NLAW_F";
				count = 1;
			};
			class _xx_law
			{
				weapon = "rhs_weap_m72a7";
				count = 2;
			};
		};
		class transportMagazines
		{
			class _xx_stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 30;
			};
			class _xx_stanagTracer
			{
				magazine = "UK3CB_BAF_556_30Rnd_T";
				count = 15;
			};
			class _xx_stanag_box
			{
				magazine = "UK3CB_BAF_556_200Rnd";
				count = 10;
			};
			class _xx_stanag_boxTracer
			{
				magazine ="UK3CB_BAF_556_200Rnd_T";
				count = 5;
			};
			class _xx_762_belt
			{
				magazine = "UK3CB_BAF_762_100Rnd";
				count = 10;
			};
			class _xx_762_beltTracer
			{
				magazine = "UK3CB_BAF_762_100Rnd_T";
				count = 3;
			};
			class _xx_762_mag
			{
				magazine = "UK3CB_BAF_762_L42A1_20Rnd";
				count = 10;
			};
			class _xx_762_magTracer
			{
				magazine = "UK3CB_BAF_762_L42A1_20Rnd_T";
				count = 4;
			};
			class _xx_1rnd_he
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 20;
			};
			class _xx_1rnd_smoke
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 4;
			};
			class _xx_handgrenade
			{
				magazine = "CUP_HandGrenade_L109A2_HE";
				count = 4;
			};
			class _xx_smokeshell
			{
				magazine = "SmokeShell";
				count = 4;
			};
		};
		class transportItems
		{
			class _xx_fieldDressing
			{
				name = "ACE_fieldDressing";
				count = 15;
			};
			class _xx_packingBandage
			{
				name = "ACE_packingBandage";
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
				count = 10;
			};
			class epinephrine
			{
				name = "ACE_epinephrine";
				count = 2;
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
		displayname = "TWC PatrolBase Charlie Ammobox";
		ace_dragging_canDrag = 1;
		class transportWeapons
		{
			class _xx_at4
			{
				weapon = "rhs_weap_M136_hedp";
				count = 1;
			};
			class _xx_law
			{
				weapon = "rhs_weap_m72a7";
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
				magazine = "rhsusf_200Rnd_556x45_soft_pouch";
				count = 15;
			};
			class _xx_762_box
			{
				magazine = "rhsusf_100Rnd_762x51";
				count = 10;
			};
			class _xx_762_boxTracer
			{
				magazine = "rhsusf_100Rnd_762x51_m62_tracer";
				count = 3;
			};
			class _xx_1rnd_he
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 20;
			};
			class _xx_1rnd_smoke
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 2;
			};
			class _xx_handgrenade
			{
				magazine = "CUP_HandGrenade_L109A2_HE";
				count = 4;
			};
			class _xx_smokeshell
			{
				magazine = "SmokeShell";
				count = 4;
			};
		};
		class transportItems
		{
			class _xx_fieldDressing
			{
				name = "ACE_fieldDressing";
				count = 15;
			};
			class _xx_packingBandage
			{
				name = "ACE_packingBandage";
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
				count = 5;
			};
			class epinephrine
			{
				name = "ACE_epinephrine";
				count = 2;
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
	
	class rhs_3Ya40_1_single;
	class TWC_Public_AmmoBox_Hobbs_Precious: rhs_3Ya40_1_single {
		scope = 2;
		scopeCurator = 1; // hide from zeus
		displayName = "Storage Box (Hobbs Trick Box)";
		author      = "Bosenator";

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
};