class CfgPatches
{
	class twc_faction
	{
		units[]=
		{
			"usa_1970_medic",
			"usa_1970_leader",
			"usa_1970_grenadier",
			"usa_1970_pilot"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F_BLUFOR",
			"A3_Characters_F_OPFOR",
			"A3_Characters_F_Common",
			"A3_Characters_F",
			"a3_characters_f_beta",
			"a3_characters_f_gamma"
		};
	};
};
class CfgEditorSubCategories
{
	class TWC_usa_1970
	{
		displayName = "USA (1970)";
	};
};
class CfgVehicles
{
	class B_Soldier_base_F;
	class O_Soldier_base_F;
	class I_Soldier_F;
	
	#include "backpacks.hpp"
	#include "usa_1970.hpp"
};