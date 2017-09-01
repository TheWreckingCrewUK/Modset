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
	class InventoryItem_Base_F;
	class ACE_ItemCore;
	class TWC_ForwardBase_Supplies: ACE_ItemCore
	{
		scope = 2;
		displayName = "Supplies";
		descriptionShort = "Supplies for the forward Base";
		class ItemInfo: InventoryItem_Base_F
		{
			mass = 1;
		};
	};
};
class CfgVehicles
{
	class B_supplyCrate_F;
	class Box_NATO_AmmoVeh_F;
	class Land_BagFence_Corner_F;
	class Land_BagFence_Long_F;
	class Land_BagFence_Short_F;
	class Land_BagFence_End_F;
	class Land_BagFence_Round_F;
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
				count = 1;
			};
		};
		class transportMagazines
		{
			class _xx_stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 20;
			};
			class _xx_stanagTracer
			{
				magazine = "UK3CB_BAF_556_30Rnd_T";
				count = 5;
			};
			class _xx_stanag_box
			{
				magazine = "UK3CB_BAF_556_200Rnd";
				count = 4;
			};
			class _xx_stanag_boxTracer
			{
				magazine ="UK3CB_BAF_556_200Rnd_T";
				count = 2;
			};
			class _xx_762_belt
			{
				magazine = "UK3CB_BAF_762_100Rnd";
				count = 2;
			};
			class _xx_762_beltTracer
			{
				magazine = "UK3CB_BAF_762_100Rnd_T";
				count = 1;
			};
			class _xx_762_mag
			{
				magazine = "UK3CB_BAF_762_L42A1_20Rnd";
				count = 2;
			};
			class _xx_762_magTracer
			{
				magazine = "UK3CB_BAF_762_L42A1_20Rnd_T";
				count = 1;
			};
			class _xx_1rnd_he
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 3;
			};
			class _xx_1rnd_smoke
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 2
			};
			class _xx_handgrenade
			{
				magazine = "CUP_HandGrenade_L109A2_HE";
				count = 2;
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
				count = 10;
			};
			class _xx_packingBandage
			{
				name = "ACE_packingBandage";
				count = 10;
			};
			class _xx_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 10;
			};
			class quickclot
			{
				name = "ACE_quickclot";
				count = 10;
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
				class twc_spawnSandbagCorner{
					displayName = "Sandbag Corner";
					condition = "true";
					statement = "_sandbag = ""Land_BagFence_Corner_F"" createVehicle (position this); [_sandbag,true] call ace_dragging_fnc_setCarryable";
                    icon = "";
				};
				class twc_spawnSandbagLong{
					displayName = "Sandbag Long";
					condition = "true";
					statement = "_sandbag = ""Land_BagFence_Long_F"" createVehicle (position this); [_sandbag,true] call ace_dragging_fnc_setCarryable";
                    icon = "";
				};
				class twc_spawnSandbagShort{
					displayName = "Sandbag Short";
					condition = "true";
					statement = "_sandbag = ""Land_BagFence_Short_F"" createVehicle (position this); [_sandbag,true] call ace_dragging_fnc_setCarryable";
                    icon = "";
				};
				class twc_spawnSandbagEnd{
					displayName = "Sandbag End";
					condition = "true";
					statement = "_sandbag = ""Land_BagFence_End_F"" createVehicle (position this); [_sandbag,true] call ace_dragging_fnc_setCarryable";
                    icon = "";
				};
				class twc_spawnSandbagRound{
					displayName = "Sandbag Round";
					condition = "true";
					statement = "_sandbag = ""Land_BagFence_Round_F"" createVehicle (position this); [_sandbag,true] call ace_dragging_fnc_setCarryable";
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
};