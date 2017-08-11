class CfgPatches
{
	class twc_weapons_ww2
	{
		units[]={
			"TWC_Operation_WW2_Ammobox"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"cup_weapons_ammoboxes"
		};
		version="1";
		projectName="TWC";
		author="jayman";
	};
};
class CfgWeapons
{
	class fow_w_bren;
	class LIB_FLARE_PISTOL;
	
	class VestItemclass;
	class VestItem;
	class ItemInfo;
	class fow_v_uk_base;
	class fow_v_uk_sten;
	class fow_v_uk_bren;
	class fow_v_uk_officer;
	
	class TWC_Bren: fow_w_bren
	{
		
		class WeaponSlotsInfo
 		{
 			displayName = "Bren Gun";
			mass = 200;
 			allowedSlots[] = {901};
 		};
	};
	class TWC_No1Mk3SignalGun: LIB_FLARE_PISTOL
	{
		displayName = "No. 1 MkIII Signal Pistol";
		magazines[] = {"UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	};
	class TWC_Vest_WW2_Base: fow_v_uk_base
	{
		scope = 1;
		class ItemInfo: VestItem
        {
			containerClass = Supply140;
            mass = 25;
			uniformModel = "\fow\fow_characters\uk\lodu_vest_brit_pouch_base.p3d";
        };
	};
	class TWC_Vest_WW2_Sten: fow_v_uk_sten
	{
		scope = 1;
		class ItemInfo: VestItem
        {
            containerClass = Supply140; 
            mass = 30;
			uniformModel = "\fow\fow_characters\uk\lodu_vest_brit_pouch_sten.p3d";
        };
	};
	class TWC_Vest_WW2_Bren: fow_v_uk_bren
	{
		scope = 1;
		class ItemInfo: VestItem
        {
            containerClass = Supply160; 
            mass = 30;
			uniformModel = "\fow\fow_characters\uk\lodu_vest_brit_pouch_bren.p3d";
        };
	};
	class TWC_Vest_WW2_Officer: fow_v_uk_officer
	{
		scope = 1;
		class ItemInfo: VestItem
        {
            containerClass = Supply140;
            mass = 25; 
			uniformModel = "\fow\fow_characters\uk\lodu_vest_brit_off.p3d";
        };
	};
};

class CfgVehicles
{
	class fow_b_uk_p37;
	class fow_b_us_radio;
	class B_LIB_SOV_RA_MedicalBag_Empty;
	
	class CUP_BAF_VehicleBox;

//************************WW2*******************************
	class TWC_Backpack_WW2_Base: fow_b_uk_p37
	{
		scope = 1;
		maximumLoad = 200;
	};
	class TWC_Backpack_WW2_PlatoonCommand: fow_b_us_radio
	{
		scope = 1;
		mass = 29.7;
		maximumLoad = 400;
		class TransportMagazines
		{
			class _XX_Flare_white
			{
				magazine="UGL_FlareWhite_F";
				count=3;
			};
			class _XX_Flare_red
			{
				magazine="UGL_FlareRed_F";
				count=3;
			};
			class _XX_Flare_green
			{
				magazine="UGL_FlareGreen_F";
				count=3;
			};
			class _XX_Flare_yellow
			{
				magazine="UGL_FlareYellow_F";
				count=3;
			};
			class _XX_SmokeGrenade_White
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=3;
			};
			class _XX_SmokeGrenade_Red
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
				count=3;
			};
			class _XX_SmokeGrenade_Green
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=3;
			};
			class _XX_SmokeGrenade_Yellow
			{
				magazine="1Rnd_SmokeYellow_Grenade_shell";
				count=3;
			};
			class _XX_SmokeGrenade_Purple
			{
				magazine="1Rnd_SmokePurple_Grenade_shell";
				count=3;
			};
			class _XX_SmokeGrenade_Blue
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=3;
			};
			class _XX_SmokeGrenade_Orange
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=3;
			};
		};
	};
	class TWC_Backpack_WW2_Medic: B_LIB_SOV_RA_MedicalBag_Empty
	{
		scope = 1;
		class TransportItems
		{
            class _xx_Bandage
			{
				name = "ACE_fieldDressing";
				count = 12;
			};
			class _xx_Morphine
			{
				name = "ACE_morphine";
				count = 10;
			};
			class _xx_ACE_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 15;
			};
			class _xxACE_quikclot
			{
				name = "ACE_quikclot";
				count = 6;
			};
			class _xxACE_adenosine
			{
				name = "ACE_adenosine";
				count = 4;
			};
			class _xxACE_atropine
			{
				name = "ACE_atropine";
				count = 4;
			};
			class _xxACE_epinephrine
			{
				name = "ACE_epinephrine";
				count = 10;
			};
			class _xxACE_packingBandage
			{
				name = "ACE_packingBandage";
				count = 15;
			};
			class _xxACE_personalAidKit
			{
				name = "ACE_personalAidKit";
				count = 1;
			};
			class _xxACE_salineIV_500
			{
				name = "ACE_salineIV_500";
				count = 6;
			};
			class _xxACE_tourniquet
			{
				name = "ACE_tourniquet";
				count = 4;
			};
		};
	};
	class TWC_Backpack_WW2_SL: TWC_Backpack_WW2_Base
	{
		scope = 1;
		class TransportMagazines
		{
			class _XX_Flare_white
			{
				magazine="UGL_FlareWhite_F";
				count=3;
			};
			class _XX_Flare_red
			{
				magazine="UGL_FlareRed_F";
				count=3;
			};
			class _XX_Flare_green
			{
				magazine="UGL_FlareGreen_F";
				count=3;
			};
			class _XX_Flare_yellow
			{
				magazine="UGL_FlareYellow_F";
				count=3;
			};
			class _XX_SmokeGrenade_White
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=3;
			};
			class _XX_SmokeGrenade_Red
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
				count=3;
			};
			class _XX_SmokeGrenade_Green
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=3;
			};
			class _XX_SmokeGrenade_Yellow
			{
				magazine="1Rnd_SmokeYellow_Grenade_shell";
				count=3;
			};
			class _XX_SmokeGrenade_Purple
			{
				magazine="1Rnd_SmokePurple_Grenade_shell";
				count=3;
			};
			class _XX_SmokeGrenade_Blue
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=3;
			};
			class _XX_SmokeGrenade_Orange
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=3;
			};
		};
	};
	class TWC_Backpack_WW2_Sergeant:TWC_Backpack_WW2_Base
	{
		scope = 1;
		class TransportMagazines
		{
			class _XX_Enfield_Mag
			{
				magazine="fow_10Rnd_303";
				count= 10;
			};
			class _XX_Bren_Mag
			{
				magazine = "fow_30Rnd_303_bren";
				count = 3;
			};
			class _XX_Flare_white
			{
				magazine="LIB_1Rnd_flare_white";
				count=6;
			};
			class _XX_Flare_red
			{
				magazine="LIB_1Rnd_flare_red";
				count=6;
			};
			class _XX_Flare_green
			{
				magazine="LIB_1Rnd_flare_green";
				count=6;
			};
			class _XX_Flare_yellow
			{
				magazine="LIB_1Rnd_flare_yellow";
				count=6;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};	
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = 2;
			};
		};
	};
	class TWC_Backpack_WW2_2IC: TWC_Backpack_WW2_Base
	{
		scope = 1;
		class TransportMagazines
		{
			class _XX_Enfield_Mag
			{
				magazine="fow_10Rnd_303";
				count= 5;
			};
			class _XX_Bren_Mag
			{
				magazine = "fow_30Rnd_303_bren";
				count = 2;
			};
		};
	};
	class TWC_Backpack_WW2_MGASS: TWC_Backpack_WW2_Base
	{
		scope = 1;
		class TransportMagazines
		{
			class _XX_Bren_Mag
			{
				magazine = "fow_30Rnd_303_bren";
				count = 5;
			};
		};
	};
//*******************1956************************
	class TWC_Backpack_1956_SL:TWC_Backpack_WW2_Base
	{
		scope = 1;
		class TransportMagazines
		{
			class _XX_Flare_white
			{
				magazine="UGL_FlareWhite_F";
				count=3;
			};
			class _XX_Flare_red
			{
				magazine="UGL_FlareRed_F";
				count=3;
			};
			class _XX_Flare_green
			{
				magazine="UGL_FlareGreen_F";
				count=3;
			};
			class _XX_Flare_yellow
			{
				magazine="UGL_FlareYellow_F";
				count=3;
			};
			class _XX_SmokeGrenade_White
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=3;
			};
			class _XX_SmokeGrenade_Red
			{
				magazine="1Rnd_SmokeRed_Grenade_shell";
				count=3;
			};
			class _XX_SmokeGrenade_Green
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=3;
			};
			class _XX_SmokeGrenade_Yellow
			{
				magazine="1Rnd_SmokeYellow_Grenade_shell";
				count=3;
			};
			class _XX_SmokeGrenade_Purple
			{
				magazine="1Rnd_SmokePurple_Grenade_shell";
				count=3;
			};
			class _XX_SmokeGrenade_Blue
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=3;
			};
			class _XX_SmokeGrenade_Orange
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=3;
			};
		};
	};
	class TWC_Backpack_1956_Sergeant:TWC_Backpack_WW2_Base
	{
		scope = 1;
		class TransportMagazines
		{
			class _XX_Enfield_Mag
			{
				magazine="fow_10Rnd_303";
				count= 2;
			};
			class _xx_UK3CB_BAF_762_20Rnd
			{
				magazine = "UK3CB_BAF_762_20Rnd";
				count = 10;
			};
			class _XX_Bren_Mag
			{
				magazine = "fow_30Rnd_303_bren";
				count = 3;
			};
			class _XX_Flare_white
			{
				magazine="LIB_1Rnd_flare_white";
				count=6;
			};
			class _XX_Flare_red
			{
				magazine="LIB_1Rnd_flare_red";
				count=6;
			};
			class _XX_Flare_green
			{
				magazine="LIB_1Rnd_flare_green";
				count=6;
			};
			class _XX_Flare_yellow
			{
				magazine="LIB_1Rnd_flare_yellow";
				count=6;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};	
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = 2;
			};
		};
	};
	class TWC_Backpack_1956_2IC: TWC_Backpack_WW2_Base
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_UK3CB_BAF_762_20Rnd
			{
				magazine = "UK3CB_BAF_762_20Rnd";
				count = 5;
			};
			class _XX_Enfield_Mag
			{
				magazine="fow_10Rnd_303";
				count= 2;
			};
			class _XX_Bren_Mag
			{
				magazine = "fow_30Rnd_303_bren";
				count = 2;
			};
		};
	};
//Ammo Boxes
	class TWC_Operation_WW2_Ammobox: CUP_BAF_VehicleBox
	{
		author="FakeMatty";
		displayName="TWC WW2 AmmoBox";
		class TransportMagazines
		{
			class _XX_Enfield_Mag
			{
				magazine="fow_10Rnd_303";
				count=200;
			};
			class _XX_Bren_Mag
			{
				magazine="fow_30Rnd_303_bren";
				count=40;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=20;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 10;
			};	
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = 10;
			};
			class _xx_Grenade
			{
				magazine="fow_e_no36mk1";
				count=30;
			};
			class _XX_Flare_white
			{
				magazine="LIB_1Rnd_flare_white";
				count=15;
			};
			class _XX_Flare_red
			{
				magazine="LIB_1Rnd_flare_red";
				count=15;
			};
			class _XX_Flare_green
			{
				magazine="LIB_1Rnd_flare_green";
				count=15;
			};
			class _XX_Flare_yellow
			{
				magazine="LIB_1Rnd_flare_yellow";
				count=15;
			};
		};
		transportAmmo=100000;
		supplyRadius=3;
	};
};


