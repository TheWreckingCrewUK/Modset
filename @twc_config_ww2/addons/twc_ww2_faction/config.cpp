class CfgPatches
{
	class twc_faction_ww2
	{
		units[]=
		{
			"WW2_British_Base",
			"WW2_British_Platoon_Commander",
			"WW2_British_Platoon_Sergeant",
			"WW2_British_Medic",
			"WW2_British_Section_Leader",
			"WW2_British_Rifleman",
			"WW2_British_2IC",
			"WW2_British_MG",
			"WW2_British_MGASS",
			"WW2_British_AT",
			"WW2_British_AAT",
			"WW2_British_Vehicle_Commander",
			"WW2_British_Vehicle_Crewman",
			
			"WW2_Para_British_Platoon_Commander",
			"WW2_Para_British_Platoon_Sergeant",
			"WW2_Para_British_Medic",
			"WW2_Para_British_Section_Commander",
			"WW2_Para_British_Rifleman",
			"WW2_Para_British_2IC",
			"WW2_Para_British_MG",
			"WW2_Para_British_MGASS",
			"WW2_Para_British_AT",
			"WW2_Para_British_AAT",
			"WW2_Para_British_Carrier_SMG"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F_BLUFOR",
			"A3_Characters_F_OPFOR"
		};
	};
};
class EventHandlers;
class CfgEditorSubCategories
{
	class Men_WW2
	{
		displayName = "Men (WW2)";
	};
	class Men_WW2_Para
	{
		displayName = "Paratroopers (WW2)";
	};
	class Men_1956
	{
		displayName = "Men (1956)";
	};
};
class CfgFactionClasses
{
	class twc_faction_independent
	{
		displayName="TWC WW2 Operation Units";
		author="FakeMatty";
		icon="TWClogo.paa";
		priority=2;
		side=2;
	};
};
class CfgVehicles
{
	
	class B_Soldier_base_F;
	class O_Soldier_base_F;
	class I_Soldier_F;
	
	#include "ww2.hpp"
	#include "1956.hpp"
	#include "ww2_para.hpp"
};