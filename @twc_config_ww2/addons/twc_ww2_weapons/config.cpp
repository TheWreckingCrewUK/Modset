class CfgPatches
{
	class Addons_config
	{
		units[]={};
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

class CfgVehicles
{
	
	class fow_b_uk_p37;
	class fow_b_us_radio;

	class Box_NATO_AmmoVeh_F;

//************************WW2*******************************
	class TWC_Backpack_WW2_PlatoonCommand:fow_b_us_radio
	{
		scope = 1;
		mass = 29.7;
		maximumLoad = 400;
	};
	class TWC_Backpack_WW2_Medic:fow_b_uk_p37
	{
		scope = 1;
		maximumLoad = 200;
		class TransportItems
		{
           class _xx_Bandage
			{
				name = "ACE_fieldDressing";
				count = 25;
			};
			class _xx_Morphine
			{
				name = "ACE_morphine";
				count = 15;
			};
			class _xx_ACE_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 25;
			};
			class _xxACE_quikclot
			{
				name = "ACE_quikclot";
				count = 25;
			};
			class _xxACE_epinephrine
			{
				name = "ACE_epinephrine";
				count = 10;
			};
			class _xxACE_packingBandage
			{
				name = "ACE_packingBandage";
				count = 25;
			};
			class _xxACE_personalAidKit
			{
				name = "ACE_personalAidKit";
				count = 1;
			};
			class _xxACE_salineIV_500
			{
				name = "ACE_salineIV_500";
				count = 8;
			};
			class _xxACE_tourniquet
			{
				name = "ACE_tourniquet";
				count = 6;
			};
		};
	};
	class TWC_Backpack_WW2_SectionCommander:fow_b_uk_p37
	{
		scope = 1;
		maximumLoad = 200;
		class TransportMagazines
		{
			class _XX_Sten_Mag
			{
				magazine="fow_32Rnd_9x19_sten";
				count=7;
			};
		};
	};
	class TWC_Backpack_WW2_Rifleman:fow_b_uk_p37
	{
		scope = 1;
		maximumLoad = 200;
		class TransportMagazines
		{
			class _XX_Enfield_Mag
			{
				magazine="fow_10Rnd_303";
				count=7;
			};
		};
	};
	class TWC_Backpack_WW2_2IC:fow_b_uk_p37
	{
		scope = 1;
		maximumLoad = 200;
		class TransportMagazines
		{
			class _XX_Enfield_Mag
			{
				magazine="fow_10Rnd_303";
				count=15;
			};
			class _XX_Bren_Mag
			{
				magazine = "fow_30Rnd_303_bren";
				count = 5;
			};
		};
	};
	class TWC_Backpack_WW2_MG:fow_b_uk_p37
	{
		scope = 1;
		maximumLoad = 200;
		class TransportMagazines
		{
			class _XX_Bren_Mag
			{
				magazine = "fow_30Rnd_303_bren";
				count = 10;
			};
		};
	};
	class TWC_Backpack_WW2_MGASS:fow_b_uk_p37
	{
		scope = 1;
		maximumLoad = 200;
		class TransportMagazines
		{
			class _XX_Enfield_Mag
			{
				magazine="fow_10Rnd_303";
				count=5;
			};
			class _XX_Bren_Mag
			{
				magazine = "fow_30Rnd_303_bren";
				count = 10;
			};
		};
	};
//Ammo Boxes
	class TWC_Operation_WW2_Ammobox:CUP_BAF_VehicleBox
	{
		author="FakeMatty";
		displayName="TWC WW2 Symetrical AmmoBox";
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
				count=200;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=60;
			};
			class _xx_Grenade
			{
				magazine="fow_e_no36mk1";
				count=50;
			};
		};
		class TransportItems
		{
			class _xx_Bandage
			{
				name = "ACE_fieldDressing";
				count = 100;
			};
			class _xx_Morphine
			{
				name = "ACE_morphine";
				count = 50;
			};
			class _xx_ACE_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 100;
			};
			class _xxACE_quikclot
			{
				name = "ACE_quikclot";
				count = 100;
			};
			class _xxACE_adenosine
			{
				name = "ACE_adenosine";
				count = 30;
			};
			class _xxACE_atropine
			{
				name = "ACE_atropine";
				count = 30;
			};
			class _xxACE_epinephrine
			{
				name = "ACE_epinephrine";
				count = 30;
			};
			class _xxACE_packingBandage
			{
				name = "ACE_packingBandage";
				count = 100;
			};
			class _xxACE_salineIV_500
			{
				name = "ACE_salineIV_500";
				count = 50;
			};
			class _xxACE_tourniquet
			{
				name = "ACE_tourniquet";
				count = 50;
			};
		};	
		transportAmmo=1000000;
		supplyRadius=3;
	};
};


