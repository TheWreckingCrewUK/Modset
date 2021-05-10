class CfgPatches
{
	class twc_modern {
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
	class TWC_Infantry_Modern_Base: B_Soldier_base_F {
		scope = 1;
		displayName = "Base";
		faction = "TWC_Modern";
		CATEGORY(TWC_Infantry_Regular_Woodland)
		icon = "iconMan";
		nakedUniform = "U_BasicBody";
		uniformClass = "UK3CB_BAF_U_CombatUniform_MTP";
		backpack = "";

		class EventHandlers: EventHandlers {
			init = "(_this select 0) setVariable [""twc_keepMap"",true]";
		};

		linkedItems[] = {
			"UK3CB_BAF_V_Osprey_Rifleman_F",
			"UK3CB_BAF_H_Mk7_Scrim_F",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};

		respawnLinkedItems[] = {
			"UK3CB_BAF_V_Osprey_Rifleman_F",
			"UK3CB_BAF_H_Mk7_Scrim_F",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};

		items[] = {
			MEDICAL_LOADOUT
		};

		respawnItems[] = {
			MEDICAL_LOADOUT
		};

		weapons[] = {
			"Throw",
			"Put"
		};

		respawnweapons[] = {
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

	class TWC_Infantry_Modern_Plane_Pilot: TWC_Infantry_Modern_Base
	{
		scope = 2;
		displayName = "Jet Pilot";
		faction = "TWC_Modern";
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
	class TWC_Infantry_Modern_Tank_Commander: TWC_Infantry_Modern_Base
	{
		scope = 2;
		displayName = "Tank Commander";
		backpack = "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D";
		faction = "TWC_Modern";
		CATEGORY(TWC_ForceType_Armoured)
		uniformClass = "UK3CB_BAF_U_CombatUniform_MTP";
		TWC_isCommandRole = 1;
		engineer = 1;
		linkedItems[] =
		{
			"UK3CB_BAF_V_Osprey_Belt_A",
			"UK3CB_BAF_H_Beret_RTR_PRR",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		respawnLinkedItems[] =
		{
			"UK3CB_BAF_V_Osprey_Belt_A",
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
			"UK3CB_BAF_L22A2",
			"ACE_Vector",
			"Throw",
			"Put"
		};
		respawnweapons[] =
		{
			"UK3CB_BAF_L22A2",
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
	class TWC_Infantry_Modern_Tank_Crew: TWC_Infantry_Modern_Tank_Commander
	{
		displayName = "Tank Crew";
		TWC_isCommandRole = 0;
		weapons[] =
		{
			"UK3CB_BAF_L22A2",
			"Throw",
			"Put"
		};
		respawnweapons[] =
		{
			"UK3CB_BAF_L22A2",
			"Throw",
			"Put"
		};
	};
	#include "regular\woodland.hpp"
	#include "regular\woodland_dismounted.hpp"
	#include "regular\nbc.hpp"
	#include "regular\nbc_dismounted.hpp"
	#include "regular\arctic.hpp"
	#include "regular\arctic_dismounted.hpp"

	#include "coin\woodland.hpp"
	#include "coin\woodland_dismounted.hpp"
	#include "coin\nbc.hpp"
	#include "coin\nbc_dismounted.hpp"
	#include "coin\arctic.hpp"
	#include "coin\arctic_dismounted.hpp"
};

class CfgGroups
{
	class WEST
	{
		class TWC_Groups_Modern
		{
			name = "TWC Groups Modern";
			#include "regular\groups.hpp"
			#include "coin\groups.hpp"
			class TWC_Groups_Modern_Generic
			{
				name = "Generic";
				class Tank_Crew
				{
					name = "Tank Crew";
					faction = "TWC_Modern";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "TWC_Infantry_Modern_Tank_Commander";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "TWC_Infantry_Modern_Tank_Crew";
						rank = "PRIVATE";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "TWC_Infantry_Modern_Tank_Crew";
						rank = "PRIVATE";
						position[] = {4,0,0};
					};
				};
			};
		};
	};
};
