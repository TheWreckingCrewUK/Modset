class CfgPatches
{
	class twc_millennial {
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

class CfgWeapons
{
	#include "weapons.hpp"
};

class CfgVehicles
{
	#include "backpacks.hpp"

	class B_Soldier_base_F;
	class O_Soldier_base_F;
	class I_Soldier_F;

	#define MEDICAL_LOADOUT "ACE_EarPlugs","ACRE_PRC343","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_tourniquet","ACE_tourniquet"
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

	//GENERIC
	class TWC_Infantry_Millennial_Base: B_Soldier_base_F
	{
		scope = 1;
		displayName = "Base";
		faction = "TWC_Millennial";
		CATEGORY(TWC_Infantry_Regular_Woodland)
		icon = "iconMan";
		nakedUniform = "U_BasicBody";
		uniformClass = "UK3CB_BAF_U_Smock_DPMW";
		backpack = "";
		
		class EventHandlers: EventHandlers {
			init = "(_this select 0) setVariable [""twc_keepMap"",true]";
		};
		
		linkedItems[] =
		{
			"UK3CB_BAF_V_PLCE_Webbing_Plate_DPMW",
			"UK3CB_BAF_H_Mk6_DPMW_A",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		respawnLinkedItems[] =
		{
			"UK3CB_BAF_V_PLCE_Webbing_Plate_DPMW",
			"UK3CB_BAF_H_Mk6_DPMW_A",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		Items[] =
		{
			MEDICAL_LOADOUT
		};
		respawnItems[] =
		{
			MEDICAL_LOADOUT
		};
		weapons[] =
		{
			"Throw",
			"Put"
		};
		respawnweapons[] =
		{
			"Throw",
			"Put"
		};
		magazines[] = {};
		respawnmagazines[] = {};
		
		nightItems[] = {
			"ACE_Flashlight_MX991",
			"Chemlight_green",
			"Chemlight_green"
		};

		nightLinkedItems[] = {
			"twc_nightvision_gen3"
		};
	};
	class TWC_Infantry_Millennial_Plane_Pilot: TWC_Infantry_Millennial_Base
	{
		scope = 2;
		displayName = "Jet Pilot";
		faction = "TWC_Millennial";
		CATEGORY(TWC_ForceType_Airborne)
		uniformClass = "UK3CB_BAF_U_HeliPilotCoveralls_RAF";
		TWC_isCommandRole = 1;
		engineer = 1;
		linkedItems[] =
		{
			"CUP_V_B_PilotVest",
			"UK3CB_BAF_H_PilotHelmetHeli_A",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		respawnLinkedItems[] =
		{
			"CUP_V_B_PilotVest",
			"UK3CB_BAF_H_PilotHelmetHeli_A",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		Items[] =
		{
			MEDICAL_LOADOUT,
			"ACE_MapTools"
		};
		respawnItems[] =
		{
			MEDICAL_LOADOUT,
			"ACE_MapTools"
		};
		weapons[] =
		{
			"Throw",
			"Put"
		};
		respawnweapons[] =
		{
			"Throw",
			"Put"
		};
		magazines[] =
		{
			"SmokeShell",
			"SmokeShell"
		};
		respawnmagazines[] =
		{
			"SmokeShell",
			"SmokeShell"
		};
	};
	class TWC_Infantry_Millennial_Tank_Commander: TWC_Infantry_Millennial_Base
	{
		scope = 2;
		displayName = "Tank Commander";
		faction = "TWC_Millennial";
		CATEGORY(TWC_ForceType_Armoured)
		uniformClass = "UK3CB_BAF_U_CrewmanCoveralls_RTR";
		TWC_isCommandRole = 1;
		engineer = 1;
		linkedItems[] =
		{
			"SP_P58_UrbanPatrol",
			"UK3CB_BAF_H_Beret_RTR_PRR",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		respawnLinkedItems[] =
		{
			"SP_P58_UrbanPatrol",
			"UK3CB_BAF_H_Beret_RTR_PRR",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		Items[] =
		{
			MEDICAL_LOADOUT,
			"ACE_MapTools"
		};
		respawnItems[] =
		{
			MEDICAL_LOADOUT,
			"ACE_MapTools"
		};
		weapons[] =
		{
			"TWC_Weapon_L85A1",
			"Throw",
			"Put"
		};
		respawnweapons[] =
		{
			"TWC_Weapon_L85A1",
			"Throw",
			"Put"
		};
		magazines[] =
		{
			MAG_3("UK3CB_BAF_556_30Rnd"),
			MAG_2("SmokeShell")
		};
		respawnmagazines[] =
		{
			MAG_3("UK3CB_BAF_556_30Rnd"),
			MAG_2("SmokeShell")
		};
	};
	class TWC_Infantry_Millennial_Tank_Crew: TWC_Infantry_Millennial_Tank_Commander
	{
		displayName = "Tank Crew";
		TWC_isCommandRole = 0;
	};
	#include "1990_regular\woodland.hpp"
	#include "1990_regular\woodland_dismounted.hpp"
	#include "1990_regular\desert.hpp"
	#include "1990_regular\desert_dismounted.hpp"
	#include "1990_regular\arctic.hpp"
	#include "1990_regular\arctic_dismounted.hpp"
	#include "1990_regular\tropic.hpp"
	#include "1990_regular\tropic_dismounted.hpp"
	#include "1990_regular\nbc.hpp"
	#include "1990_regular\nbc_dismounted.hpp"

	#include "1990_coin\woodland.hpp"
	#include "1990_coin\woodland_dismounted.hpp"
	#include "1990_coin\desert.hpp"
	#include "1990_coin\desert_dismounted.hpp"
	#include "1990_coin\arctic.hpp"
	#include "1990_coin\arctic_dismounted.hpp"
	#include "1990_coin\tropic.hpp"
	#include "1990_coin\tropic_dismounted.hpp"
	#include "1990_coin\nbc.hpp"
	#include "1990_coin\nbc_dismounted.hpp"

	/*#include "2000_regular\woodland.hpp"
	#include "2000_regular\woodland_dismounted.hpp"
	#include "2000_regular\desert.hpp"
	#include "2000_regular\desert_dismounted.hpp"

	#include "2000_coin\woodland.hpp"
	#include "2000_coin\woodland_dismounted.hpp"
	#include "2000_coin\desert.hpp"
	#include "2000_coin\desert_dismounted.hpp"*/
};

class CfgGroups
{
	class WEST
	{
		class TWC_Groups_Millennial
		{
			name = "TWC Groups Millennial";
			#include "1990_regular\groups.hpp"
			#include "1990_coin\groups.hpp"
			class TWC_Groups_Millennial_Generic
			{
				name = "Generic";
				class Tank_Crew
				{
					name = "Tank Crew";
					faction = "TWC_Millennial";
					side = 1;
					class Unit0
					{
							side = 1;
							vehicle = "TWC_Infantry_Millennial_Tank_Commander";
							rank = "SERGEANT";
							position[] = {0,0,0};
					};
					class Unit1
					{
							side = 1;
							vehicle = "TWC_Infantry_Millennial_Tank_Crew";
							rank = "PRIVATE";
							position[] = {2,0,0};
					};
					class Unit2
					{
							side = 1;
							vehicle = "TWC_Infantry_Millennial_Tank_Crew";
							rank = "PRIVATE";
							position[] = {4,0,0};
					};
				};
			};
		};
	};
};