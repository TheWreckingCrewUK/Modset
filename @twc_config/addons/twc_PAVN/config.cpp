class CfgPatches
{
	class twc_coldwar
	{
		units[]=
		{
			"PAVN_Base",
			"PAVN_SquadCommander",
			"PAVN_CellLeader_AT",
			"PAVN_ATRifleman",
			"PAVN_ATAssistant",
			"PAVN_CellLeader_MG",
			"PAVN_Machinegunner",
			"PAVN_MG-Assistant",
			"PAVN_PlatoonCommander",
			"PAVN_PlatoonSergeant",
			"PAVN_Medic",
			"PAVN_TankCommander",
			"PAVN_TankCrew",
			"PAVN_T54"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F_BLUFOR",
			"TWC_Faction"
		};
	};
};
class EventHandlers;
class CfgEditorSubCategories
{
	class Men_PAVN
	{
		displayName = "Men";
	};
	class Armour_PAVN
	{
		displayName = "Armour";
	};
};
class CfgVehicles
{
	class O_Soldier_base_F;
	
	#include "PAVN.hpp"
	
	#include "backpacks.hpp"
	
	#include "armour.hpp"
};
class cfgWeapons
{
	class CUP_Vcannon_2A46_Txx;
	
	class Totally_a_D10: CUP_Vcannon_2A46_Txx
	{
		displayName="SPG-9";
		class StandardSound
		{
			soundSetShot[]=
			{
				"CUP_autocannon_Shot_SoundSet",
				"CUP_autocannon_Tail_SoundSet"
			};
		};
		reloadsound[]=
		{
		};
	};
};
	