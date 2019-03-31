class CfgPatches
{
	class twc_ww2_faction_ussr {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"A3_Characters_F_BLUFOR",
			"A3_Characters_F_OPFOR",
			"twc_faction",
			"twc_ai"
		};
	};
};

class EventHandlers;

class CfgFactionClasses {
	class TWC_WW2_USSR {
		displayName = "TWC Operations - WW2 USSR";
		author = "The Wrecking Crew";
		icon = "TWClogo.paa";
		priority = 2;
		side = 2;
	};
};

class CfgVehicles
{
	#define ADD_MAGA(a,b) class _nc_##a {magazine = a; count = b;}
	#define ADD_WEAP(a,b) class _nc_##a {weapon = a; count = b;}
	#define ADD_ITEM(a,b) class _nc_##a {name = a; count = b;}

	#include "backpacks.hpp"
	#include "ammo_crates.hpp"

	class B_Soldier_base_F;
	class O_Soldier_base_F;
	class I_Soldier_F;

	#define MEDICAL_LOADOUT "ACE_EarPlugs","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_tourniquet","ACE_tourniquet"
	#define MAG_2(a) a, a
	#define MAG_3(a) a, a, a
	#define MAG_4(a) a, a, a, a
	#define MAG_5(a) a, a, a, a, a
	#define MAG_6(a) a, a, a, a, a, a
	#define MAG_7(a) a, a, a, a, a, a, a
	#define MAG_8(a) a, a, a, a, a, a, a, a
	#define MAG_9(a) a, a, a, a, a, a, a, a, a
	#define MAG_10(a) a, a, a, a, a, a, a, a, a, a
	#define MAG_11(a) a, a, a, a, a, a, a, a, a, a, a
	#define MAG_12(a) a, a, a, a, a, a, a, a, a, a, a, a
	#define CATEGORY(a) editorSubcategory = a;\
			vehicleClass = a;

	#include "units.hpp"
};

class CfgGroups
{
	class EAST
	{
		class TWC_Groups_WW2_USSR
		{
			name = "TWC Groups WW2 USSR";
			class TWC_Groups_WW2_USSR_Generic
			{
				name = "Generic";
				class Tank_Crew
				{
					name = "Tank Crew";
					faction = "TWC_WW2_USSR";
					side = 2;
					class Unit0
					{
							side = 2;
							vehicle = "TWC_Infantry_WW2_USSR_Tank_Commander";
							rank = "SERGEANT";
							position[] = {0,0,0};
					};
					class Unit1
					{
							side = 2;
							vehicle = "TWC_Infantry_WW2_USSR_Tank_Crew";
							rank = "PRIVATE";
							position[] = {2,0,0};
					};
					class Unit2
					{
							side = 2;
							vehicle = "TWC_Infantry_WW2_USSR_Tank_Crew";
							rank = "PRIVATE";
							position[] = {4,0,0};
					};
				};
			};
			class TWC_Groups_WW2_USSR_Infantry_Arctic
			{
				name = "Infantry (Arctic)";
				class Section
				{
					name = "Tank Crew";
					faction = "TWC_WW2_USSR";
					side = 2;
					class Unit0
					{
							side = 2;
							vehicle = "TWC_Infantry_WW2_USSR_SectionCommander";
							rank = "SERGEANT";
							position[] = {0,0,0};
					};
					class Unit1
					{
							side = 2;
							vehicle = "TWC_Infantry_WW2_USSR_SMG";
							rank = "PRIVATE";
							position[] = {2,0,0};
					};
					class Unit2
					{
							side = 2;
							vehicle = "TWC_Infantry_WW2_USSR_SMG";
							rank = "PRIVATE";
							position[] = {4,0,0};
					};
					class Unit3
					{
							side = 2;
							vehicle = "TWC_Infantry_WW2_USSR_Rifleman";
							rank = "PRIVATE";
							position[] = {6,0,0};
					};
					class Unit4
					{
							side = 2;
							vehicle = "TWC_Infantry_WW2_USSR_Rifleman";
							rank = "PRIVATE";
							position[] = {8,0,0};
					};
					class Unit5
					{
							side = 2;
							vehicle = "TWC_Infantry_WW2_USSR_Rifleman";
							rank = "PRIVATE";
							position[] = {10,0,0};
					};
					class Unit6
					{
							side = 2;
							vehicle = "TWC_Infantry_WW2_USSR_2iC";
							rank = "PRIVATE";
							position[] = {12,0,0};
					};
					class Unit7
					{
							side = 2;
							vehicle = "TWC_Infantry_WW2_USSR_MG";
							rank = "PRIVATE";
							position[] = {14,0,0};
					};
					class Unit8
					{
							side = 2;
							vehicle = "TWC_Infantry_WW2_USSR_ASSMG";
							rank = "PRIVATE";
							position[] = {16,0,0};
					};
				};
				class Platoon_Command
				{
					name = "Platoon Command";
					faction = "TWC_WW2_USSR";
					side = 2;
					class Unit0
					{
							side = 2;
							vehicle = "TWC_Infantry_WW2_USSR_Platoon_Commander";
							rank = "SERGEANT";
							position[] = {0,0,0};
					};
					class Unit1
					{
							side = 2;
							vehicle = "TWC_Infantry_WW2_USSR_Platoon_Sergeant";
							rank = "PRIVATE";
							position[] = {2,0,0};
					};
					class Unit2
					{
							side = 2;
							vehicle = "TWC_Infantry_WW2_USSR_Platoon_Medic";
							rank = "PRIVATE";
							position[] = {4,0,0};
					};
					class Unit3
					{
							side = 2;
							vehicle = "TWC_Infantry_WW2_USSR_Rifleman";
							rank = "PRIVATE";
							position[] = {6,0,0};
					};
				};
			};
		};
	};
};