class CfgPatches
{
	class twc_weapons
	{
		units[]={
			"TWC_modern_Operation_Ammobox",
			"TWC_Coin_Operation_Ammobox",
			"TWC_ColdWar_Operation_Ammobox",
			"TWC_1990_Operation_Ammobox",
			"TWC_modern_USSR_Ammobox",
			"TWC_Vehicle_Ammo_ColdWar",
			"TWC_modern_Warrior_Ammobox"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"uk3cb_baf_weapons",
			"uk3cb_baf_equipment",
			"cup_weapons_ammoboxes"
		};
		version="1";
		projectName="TWC";
		author="jayman";
	};
};
class cfgMagazines
{
	class Default;
	class CA_Magazine;
	class CUP_7Rnd_45ACP_1911;
	
	class twc_13Rnd_40cal_Mag: CUP_7Rnd_45ACP_1911
	{
		scope = 2;
		displayName = "13 round 40cal Magazine";
		count = 13;
		descriptionShort = "Used in L9A1";
	};
};
class cfgWeapons
{
	class rhsusf_weap_m1911a1;
	class twc_browninghp:rhsusf_weap_m1911a1
	{
		scope = 2;
		author = "jayman";
		displayName = "Browning Hi Power";
		magazines[] = {twc_13Rnd_9mm_Mag};
	};
};
class cfgVehicles
{

	#include "ammoboxes.hpp"
};


