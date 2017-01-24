class CfgPatches
{
	class TWC_Weapons
	{
		units[]={"TWC_modern_Operation_Ammobox","TWC_modern_Operation_Coin_Ammobox","TWC_modern_Operation_ColdWar_Ammobox","TWC_modern_Operation_1990_Ammobox","TWC_modern_USSR_Ammobox","TWC_modern_Warrior_Ammobox"};
		weapons[]={"twc_browninghp","twc_l115a3_wd","twc_l129a1_spotter","twc_L1A1_SUIT","TWC_Carl_Gustav","UK3CB_BAF_L85A2_RIS_AFG_ELCAN3D","UK3CB_BAF_L110A2_ELCAN3D","UK3CB_BAF_L129A1_Grippod_TA648","UK3CB_BAF_L128A1_Eotech","UK3CB_BAF_L85A2_UGL_ELCAN3D","UK3CB_BAF_L7A2_ELCAN3D","UK3CB_BAF_L22A2_SUSAT3D","FIMStingerA","UK3CB_BAF_L86A1","UK3CB_BAF_L86A1_SUSAT3D","UK3CB_BAF_L85A1","UK3CB_BAF_L85A1_SUSAT3D","UK3CB_BAF_L85A1_SUSAT3D_Lazer","USSR_AK74_1p29"};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"uk3cb_baf_weapons",
			"uk3cb_baf_equipment",
			"cup_weapons_ammoboxes",
			"ace_dragging"
		};
		version="1";
		projectName="TWC";
		author="jayman";
	};
};
#include "cfgMagazines.hpp"
#include "cfgWeapons.hpp"
#include "cfgVehicles.hpp"