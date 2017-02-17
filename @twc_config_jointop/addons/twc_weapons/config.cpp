class CfgPatches
{
	class twc_weapons
	{
		units[]={
			"TWC_ColdWar_Operation_Ammobox",
			"TWC_Vehicle_Ammo_ColdWar"
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
class cfgVehicles
{

	#include "ammoboxes.hpp"
};


