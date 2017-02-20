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
			"cup_weapons_ammoboxes",
			"ace_medical"
		};
		version="1";
		projectName="TWC";
		author="jayman";
	};
};
class cfgVehicles
{
	#include "ammoboxes.hpp"
};