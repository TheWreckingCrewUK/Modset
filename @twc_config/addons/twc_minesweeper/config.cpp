class CfgPatches
{
	class sys_minesweeper
	{
		units[]={};
		weapons[]=
		{
			"TWC_Vallon"
		};
		requiredAddons[]={};
		author[]=
		{
			"Rocko"
		};
	};
};

class Mode_SemiAuto;
class CfgWeapons
{
	class Rifle;
	class TWC_Vallon: Rifle
	{
		scope=2;
		displayName="VMH3 Vallon";
		descriptionShort="";
		model="\twc_minesweeper\ace_anpss14";
		picture="\twc_minesweeper\data\equip\w_anpss14_ca.paa";
		magazines[]={};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			displayName="AN PSS-14";
			begin1[]=
			{
				"",
				1.77828,
				1,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			reloadTime=0.075000003;
			recoil="recoil_single_primary_3outof10";
			recoilProne="recoil_single_primary_prone_3outof10";
			dispersion=0.001;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.050000001;
		};
		class M203Muzzle
		{
		};
		ACE_Weight=3.8;
		ACE_Size=4000;
	};
};

