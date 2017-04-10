class CfgPatches
{
	class twc_coldwar
	{
		units[]=
		{
			"ColdWar_Base",
			"ColdWar_Rifleman",
			"ColdWar_Rifleman_SUIT",
			"ColdWar_AT",
			"ColdWar_AT_ASS",
			"ColdWar_2IC",
			"ColdWar_MG",
			"ColdWar_MG_AS",
			"ColdWar_Section_Leader",
			"ColdWar_Platoon_Commander",
			"ColdWar_Sergeant",
			"ColdWar_Medic",
			"ColdWar_FAC",
			"ColdWar_HeliPilot",
			"ColdWar_JetPilot",
			"ColdWar_AA_Gunner",
			"ColdWar_AA_Assistant",
			"ColdWar_MilanGunner",
			"ColdWar_MilanAssistant",
			"ColdWar_Vehicle_Commander",
			"ColdWar_Vehicle_Crewman"
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
			"a3_characters_f_gamma",
			"ukcw_man",
			"ukcw_l4",
			"ukcw_sterling",
			"ukcw_hipower",
			"ukcw_blowpipe"
		};
	};
};
class EventHandlers;
class CfgEditorSubCategories
{
	class Men_ColdWar
	{
		displayName = "Men (ColdWar)";
	};
};
class CfgFactionClasses
{
	class twc_faction
	{
		displayName="TWC Operation Units";
		author="FakeMatty";
		icon="TWClogo.paa";
		priority=2;
		side=1;
	};
};
#include "compositions.hpp"
class CfgVehicles
{
	class B_Soldier_base_F;
	
	#include "coldwar.hpp"
	
	#include "backpacks.hpp"
};
#include "weapons.hpp"