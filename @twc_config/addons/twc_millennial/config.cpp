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
class CfgEditorSubcategories {
	//2000s
	class TWC_Infantry_2000_Regular_Woodland {
		displayName = "Infantry (2000s, Woodland)";
	};
	
	class TWC_Infantry_2000_Regular_Desert {
		displayName = "Infantry (2000s, Desert)";
	};
	
	class TWC_Infantry_2000_Regular_Arctic {
		displayName = "Infantry (2000s, Arctic)";
	};
	
	class TWC_Infantry_2000_Regular_Tropic {
		displayName = "Infantry (2000s, Tropic)";
	};
	
	class TWC_Infantry_2000_Regular_NBC {
		displayName = "Infantry (2000s, NBC)";
	};
	
	class TWC_Infantry_2000_Dismounted_Woodland {
		displayName = "Infantry (2000s, Dismounted, Woodland)";
	};
	
	class TWC_Infantry_2000_Dismounted_Desert {
		displayName = "Infantry (2000s, Dismounted, Desert)";
	};
	
	class TWC_Infantry_2000_Dismounted_Arctic {
		displayName = "Infantry (2000s, Dismounted, Arctic)";
	};
	
	class TWC_Infantry_2000_Dismounted_Tropic {
		displayName = "Infantry (2000s, Dismounted, Tropic)";
	};
	
	class TWC_Infantry_2000_Dismounted_NBC {
		displayName = "Infantry (2000s, Dismounted, NBC)";
	};
	
	class TWC_Infantry_2000_COIN_Woodland {
		displayName = "Infantry (2000s, COIN, Woodland)";
	};
	
	class TWC_Infantry_2000_COIN_Desert {
		displayName = "Infantry (2000s, COIN, Desert)";
	};
	
	class TWC_Infantry_2000_COIN_Arctic {
		displayName = "Infantry (2000s, COIN, Arctic)";
	};
	
	class TWC_Infantry_2000_COIN_Tropic {
		displayName = "Infantry (2000s, COIN, Tropic)";
	};
	
	class TWC_Infantry_2000_COIN_NBC {
		displayName = "Infantry (2000s, COIN, NBC)";
	};
	
	class TWC_Infantry_2000_COIN_Dismounted_Woodland {
		displayName = "Infantry (2000s, COIN, Dismounted, Woodland)";
	};
	
	class TWC_Infantry_2000_COIN_Dismounted_Desert {
		displayName = "Infantry (2000s, COIN, Dismounted, Desert)";
	};
	
	class TWC_Infantry_2000_COIN_Dismounted_Arctic {
		displayName = "Infantry (2000s, COIN, Dismounted, Arctic)";
	};
	
	class TWC_Infantry_2000_COIN_Dismounted_Tropic {
		displayName = "Infantry (2000s, COIN, Dismounted, Tropic)";
	};
	
	class TWC_Infantry_2000_COIN_Dismounted_NBC {
		displayName = "Infantry (2000s, COIN, Dismounted, NBC)";
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

	#define MEDICAL_LOADOUT "ACRE_PRC343","ACE_EarPlugs","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_tourniquet","ACE_tourniquet"
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
			MAG_2("Chemlight_green"),
			"ACE_Flashlight_MX991",
			"ACE_Flashlight_Maglite_ML300L"
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
	class TWC_Infantry_1990_Tank_Commander: TWC_Infantry_Millennial_Base
	{
		scope = 2;
		displayName = "Tank Commander 1990s";
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
			"ACE_Vector",
			"Throw",
			"Put"
		};
		respawnweapons[] =
		{
			"TWC_Weapon_L85A1",
			"ACE_Vector",
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
	class TWC_Infantry_1990_Tank_Crew: TWC_Infantry_1990_Tank_Commander
	{
		displayName = "Tank Crew 1990s";
		TWC_isCommandRole = 0;
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
	};
	class TWC_Infantry_2000_Tank_Commander: TWC_Infantry_Millennial_Base
	{
		scope = 2;
		displayName = "Tank Commander 2000s";
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
			"UK3CB_BAF_L22",
			"ACE_Vector",
			"Throw",
			"Put"
		};
		respawnweapons[] =
		{
			"UK3CB_BAF_L22",
			"ACE_Vector",
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
	class TWC_Infantry_2000_Tank_Crew: TWC_Infantry_2000_Tank_Commander
	{
		displayName = "Tank Crew 2000s";
		TWC_isCommandRole = 0;
		weapons[] =
		{
			"UK3CB_BAF_L22",
			"Throw",
			"Put"
		};
		respawnweapons[] =
		{
			"UK3CB_BAF_L22",
			"Throw",
			"Put"
		};
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

	#include "2000_regular\woodland.hpp"
	#include "2000_regular\woodland_dismounted.hpp"
	#include "2000_regular\desert.hpp"
	#include "2000_regular\desert_dismounted.hpp"
	#include "2000_regular\tropic.hpp"
	#include "2000_regular\tropic_dismounted.hpp"
	#include "2000_regular\arctic.hpp"
	#include "2000_regular\arctic_dismounted.hpp"
	#include "2000_regular\nbc.hpp"
	#include "2000_regular\nbc_dismounted.hpp"

	#include "2000_coin\woodland.hpp"
	#include "2000_coin\woodland_dismounted.hpp"
	#include "2000_coin\desert.hpp"
	#include "2000_coin\desert_dismounted.hpp"
	#include "2000_coin\tropic.hpp"
	#include "2000_coin\tropic_dismounted.hpp"
	#include "2000_coin\arctic.hpp"
	#include "2000_coin\arctic_dismounted.hpp"
	#include "2000_coin\nbc.hpp"
	#include "2000_coin\nbc_dismounted.hpp"
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
			#include "2000_regular\groups.hpp"
			#include "2000_coin\groups.hpp"
			class TWC_Groups_Millennial_Generic
			{
				name = "Generic";
				class Tank_Crew_1990
				{
					name = "Tank Crew 1990s";
					faction = "TWC_Millennial";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "TWC_Infantry_1990_Tank_Commander";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "TWC_Infantry_1990_Tank_Crew";
						rank = "PRIVATE";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "TWC_Infantry_1990_Tank_Crew";
						rank = "PRIVATE";
						position[] = {4,0,0};
					};
				};
				class Tank_Crew_2000
				{
					name = "Tank Crew 2000s";
					faction = "TWC_Millennial";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "TWC_Infantry_2000_Tank_Commander";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "TWC_Infantry_2000_Tank_Crew";
						rank = "PRIVATE";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "TWC_Infantry_2000_Tank_Crew";
						rank = "PRIVATE";
						position[] = {4,0,0};
					};
				};
			};
		};
	};
};