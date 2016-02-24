class CfgPatches
{
	class unit_config
	{
		units[]=
		{
			"twc_c130"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"cup_airvehicles_c130j",
			"A3_Air_F",
			"A3_Weapons_F",
			"A3_Soft_F",
			"A3_data_F"
		};
	};
};
class CfgVehicles
{
	class CUP_B_C130J_GB;
	class twc_c130: CUP_B_C130J_GB
	{
		scope=2;
		side=1;
		faction="Veh_units";
		author="CUP";
		displayname="C-130";
		class TransportMagazines
		{
			class _xx_UK3CB_BAF_30Rnd
			{
				magazine="UK3CB_BAF_30Rnd";
				count=8;
			};
			class _xx_UK3CB_BAF_30Rnd_T
			{
				magazine="UK3CB_BAF_30Rnd_T";
				count=2;
			};
			class _xx_UK3CB_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=2;
			};
			class _xx_UK3CB_UGL_FlareWhite_F
			{
				magazine="UGL_FlareWhite_F";
				count=2;
			};
			class _xx_UK3CB_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
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
				count=2;
			};
			class _xx_UK3CB_BAF_20Rnd
			{
				magazine="UK3CB_BAF_20Rnd";
				count=2;
			};
			class _xx_UK3CB_BAF_20Rnd_T
			{
				magazine="UK3CB_BAF_20Rnd_T";
				count=1;
			};
			class _xx_UK3CB_BAF_200Rnd
			{
				magazine="UK3CB_BAF_200Rnd";
				count=2;
			};
			class _xx_UK3CB_BAF_200Rnd_T
			{
				magazine="UK3CB_BAF_200Rnd_T";
				count=1;
			};
			class _xx_Belt
			{
				magazine="UK3CB_BAF_75Rnd";
				count=1;
			};
			class _xx_Belt_T
			{
				magazine="UK3CB_BAF_75Rnd_T";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_Bandage
			{
				name="ACE_fieldDressing";
				count=5;
			};
			class _xx_Morphine
			{
				name="ACE_morphine";
				count=2;
			};
		};
		class TransportWeapons
		{
			class _xx_NLAW
			{
				Weapon="UK3CB_BAF_NLAW_Launcher";
				count=1;
			};
			class _xx_LAW
			{
				Weapon="HAFM_LAW";
				count=1;
			};
		};
	};
};
