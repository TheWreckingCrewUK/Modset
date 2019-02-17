class CfgPatches
{
	class twc_faction_ww2_usmc
	{
		units[]=
		{
			"TWC_WW2_USMC_Base",
			"TWC_WW2_USMC_Platoon_Commander",
			"TWC_WW2_USMC_Platoon_Sergeant",
			"TWC_WW2_USMC_Medic",
			"TWC_WW2_USMC_Squad_Leader",
			"TWC_WW2_USMC_Rifleman",
			"TWC_WW2_USMC_Team_Leader",
			"TWC_WW2_USMC_Gunner",
			"TWC_WW2_USMC_Gunner_Ass",
			"TWC_WW2_USMC_AT",
			"TWC_WW2_USMC_AAT",
			"TWC_WW2_USMC_Pointman",
			"TWC_AmmoBox_TWC_USMC_Squad",
			"TWC_AmmoBox_TWC_USMC_Rockets"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F_BLUFOR",
			"A3_Characters_F_OPFOR",
			"twc_faction_ww2",
			"TWC_WW2_AmmoBoxes" 
		};
	};
};
class Eventhandlers;
class Extended_PostInit_EventHandlers
{
    class twc_faction_ww2_usmc_postinit
    {
		init = "_action = ['Assemble_M1919A4', 'Assemble M1919A4', '', {[_target, _player] call TWC_WW2_fnc_assemble_m1919}, {(primaryWeapon _player == 'fow_w_m1919a4') && (((getBackpackCargo _target select 0) select 0) == 'fow_b_usa_m1919_support')}, {}, '', [0, -0.5, 0]] call ace_interact_menu_fnc_createAction; ['GroundWeaponHolder', 0, ['ACE_MainActions'], _action] call ace_interact_menu_fnc_addActionToClass;";
    };
};
class CfgFunctions
{
	class TWC_WW2
	{
		class functions
		{
			file = "twc_faction_ww2_usmc\functions";
			class assemble_m1919 {};
			class disassemble_m1919 {};
			class reload_m1919 {};
		};
	};
};
class CfgEditorSubCategories
{
	class Men_WW2_USMC
	{
		displayName = "Men (USMC)";
	};
};
class CfgWeapons 
{
	class fow_w_m1919a4_mounted;
	class fow_w_m1919a4_static: fow_w_m1919a4_mounted
	{
		magazineReloadTime=8;
	};
};
class CfgVehicles
{
	class B_Soldier_base_F;
	class O_Soldier_base_F;
	class I_Soldier_F;

	class fow_w_m1919_tripod_usmc;
	/*class twc_m1919a4_static: fow_w_m1919_tripod_usmc
	{
		scope = 1;
		ace_dragging_canCarry = 1;
		ace_dragging_canDrag  = 1;
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {};
			displayName = "";
		};
        class ACE_Actions 
		{
			class ACE_MainActions 
			{
                distance = 5;
                condition = "(true)";
				class Disassemble_M1919A4 
				{
					displayName = "Disassemble M1919A4";
					condition = "true";
					exceptions[] = {};
					statement = "[_target, _player] call TWC_WW2_fnc_disassemble_m1919";
					icon = "";
				};
				class Reload
				{
					displayName = "Reload";
					condition = "((count (magazines _target)) == 0) && ('fow_100Rnd_762x63' in (magazineCargo _player) || 'fow_50Rnd_762x63' in (magazineCargo _player) || 'fow_30Rnd_762x63' in (magazineCargo _player))";
					exceptions[] = {};
					statement = "[_target, _player] call TWC_WW2_fnc_reload_m1919";
					icon = "";
				};
			};
		};
	};*/
	
	#include "usmc.hpp"
	#include "backpacks.hpp"
	#include "ammo_crates.hpp"
};
class CfgGroups
{
	class INDEP
	{
		name = "Independent"; // Name of Faction Side
		side = 2; // 0 = Opfor , 1 = Blufor , Independent = 2 ,   I think
		class Army //Faction Class name
		{
			name = "TWC Operation Groups Independent"; //Faction Name
			class TWC_WW2_USMC
			{
				name = "TWC WW2 USMC"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
				class TWC_WW2_USMC_Squad
				{
					name = "Squad"; //Name of Group
					faction = "twc_faction"; //Faction
					side = 1; //Side
					class Unit0
					{
							side = 1;
							vehicle = "TWC_WW2_USMC_Squad_Leader"; //Class name of desired solider
							rank = "SERGEANT"; // Rank
							position[] = {0,3,0}; //Position in the formation
					};
					class Unit1
					{
							side = 1;
							vehicle = "TWC_WW2_USMC_Team_Leader";
							rank = "CORPORAL";
							position[] = {3,0,0};
					};
					class Unit2
					{
							side = 1;
							vehicle = "TWC_WW2_USMC_Rifleman";
							rank = "PRIVATE";
							position[] = {5,0,0};
					};
					class Unit3
					{
							side = 1;
							vehicle = "TWC_WW2_USMC_Gunner";
							rank = "PRIVATE";
							position[] = {7,0,0};
					};
					class Unit4
					{
							side = 1;
							vehicle = "TWC_WW2_USMC_Gunner_Ass";
							rank = "PRIVATE";
							position[] = {9,0,0};
					};
					class Unit6
					{
							side = 1;
							vehicle = "TWC_WW2_USMC_Team_Leader";
							rank = "CORPORAL";
							position[] = {11,0,0};
					};
					class Unit7
					{
							side = 1;
							vehicle = "TWC_WW2_USMC_Rifleman";
							rank = "PRIVATE";
							position[] = {13,0,0};
					};
					class Unit8
					{
							side = 1;
							vehicle = "TWC_WW2_USMC_Gunner";
							rank = "PRIVATE";
							position[] = {15,0,0};
					};
					class Unit9
					{
							side = 1;
							vehicle = "TWC_WW2_USMC_Gunner_Ass";
							rank = "PRIVATE";
							position[] = {17,0,0};
					};
					class Unit10
					{
							side = 1;
							vehicle = "TWC_WW2_USMC_Team_Leader";
							rank = "CORPORAL";
							position[] = {19,0,0};
					};
					class Unit11
					{
							side = 1;
							vehicle = "TWC_WW2_USMC_Rifleman";
							rank = "PRIVATE";
							position[] = {21,0,0};
					};
					class Unit12
					{
							side = 1;
							vehicle = "TWC_WW2_USMC_Gunner";
							rank = "PRIVATE";
							position[] = {23,0,0};
					};
					class Unit13
					{
							side = 1;
							vehicle = "TWC_WW2_USMC_Gunner_Ass";
							rank = "PRIVATE";
							position[] = {25,0,0};
					};
				};
				class TWC_WW2_USMC_Platoon_Command
				{
					name = "Platoon Command"; //Name of Group
					faction = "twc_faction"; //Faction
					side = 1; //Side
					class Unit0
					{
							side = 1;
							vehicle = "TWC_WW2_USMC_Platoon_Commander"; //Class name of desired solider
							rank = "LIEUTENANT"; // Rank
							position[] = {0,3,0}; //Position in the formation
					};
					class Unit1
					{
							side = 1;
							vehicle = "TWC_WW2_USMC_Platoon_Sergeant";
							rank = "SERGEANT";
							position[] = {3,0,0};
					};
					class Unit2
					{
							side = 1;
							vehicle = "TWC_WW2_USMC_Medic";
							rank = "PRIVATE";
							position[] = {5,0,0};
					};
				};				
			};
		};
	};
};