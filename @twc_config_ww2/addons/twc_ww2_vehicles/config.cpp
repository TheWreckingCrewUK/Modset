class CfgPatches
{
	class twc_vehicles_ww2
	{
		units[]={
			"TWC_HADRIAN","TWC_HORSA"
		};
		weapons[]=
		{

		};
		requiredVersion=0.1;
		requiredAddons[]=
		{

		};
	};
};
class CfgVehicles
{
	class LIB_MKI_HADRIAN;
	class LIB_HORSA_RAF;
	class TWC_HADRIAN: LIB_MKI_HADRIAN
	{
		faction = "twc_faction_independent";
		class TransportMagazines
		{
			class _xx_fow_32Rnd_9x19_sten
			{
				magazine="fow_32Rnd_9x19_sten";
				count=9;
			};
			class _xx_fow_10Rnd_303
			{
				magazine="fow_10Rnd_303";
				count=36;
			};
			class _xx_fow_30Rnd_303_bren
			{
				magazine="fow_30Rnd_303_bren";
				count=16;
			};
			class _xx_fow_e_no36mk1
			{
				magazine="fow_e_no36mk1";
				count=12;
			};
			class _xx_ACE_fieldDressing
			{
				magazine="ACE_fieldDressing";
				count=15;
			};
			class _xx_ACE_elasticBandage
			{
				magazine="ACE_elasticBandage";
				count=15;
			};
			class _xx_ACE_quikclot
			{
				magazine="ACE_quikclot";
				count=15;
			};
			class _xx_ACE_packingBandage
			{
				magazine="ACE_packingBandage";
				count=15;
			};
			class _xx_ACE_morphine
			{
				magazine="ACE_morphine";
				count=6;
			};
			class _xx_ACE_epinephrine
			{
				magazine="ACE_epinephrine";
				count=6;
			};
			class _xx_ACE_tourniquet
			{
				magazine="ACE_tourniquet";
				count=4;
			};
		};
	};
	class TWC_HORSA: LIB_HORSA_RAF
	{
		faction = "twc_faction_independent";
		class TransportMagazines
		{
			class _xx_fow_32Rnd_9x19_sten
			{
				magazine="fow_32Rnd_9x19_sten";
				count=12;
			};
			class _xx_fow_10Rnd_303
			{
				magazine="fow_10Rnd_303";
				count=54;
			};
			class _xx_fow_30Rnd_303_bren
			{
				magazine="fow_30Rnd_303_bren";
				count=24;
			};
			class _xx_fow_e_no36mk1
			{
				magazine="fow_e_no36mk1";
				count=18;
			};
			class _xx_ACE_fieldDressing
			{
				magazine="ACE_fieldDressing";
				count=30;
			};
			class _xx_ACE_elasticBandage
			{
				magazine="ACE_elasticBandage";
				count=30;
			};
			class _xx_ACE_quikclot
			{
				magazine="ACE_quikclot";
				count=30;
			};
			class _xx_ACE_packingBandage
			{
				magazine="ACE_packingBandage";
				count=30;
			};
			class _xx_ACE_morphine
			{
				magazine="ACE_morphine";
				count=12;
			};
			class _xx_ACE_epinephrine
			{
				magazine="ACE_epinephrine";
				count=12;
			};
			class _xx_ACE_tourniquet
			{
				magazine="ACE_tourniquet";
				count=8;
			};
		};		
	};
};