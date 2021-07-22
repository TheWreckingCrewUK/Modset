class CfgPatches
{
	class twc_unsc {
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
	class TWC_Infantry_ODST_Base: B_Soldier_base_F {
		scope = 1;
		displayName = "Base";
		faction = "TWC_UNSC";
		CATEGORY(TWC_Infantry_ODST)
		icon = "iconMan";
		nakedUniform = "U_BasicBody";
		uniformClass = "OPTRE_UNSC_Army_Uniform_BLK";
		backpack = "";

		class EventHandlers: EventHandlers {
			init = "(_this select 0) setVariable [""twc_keepMap"",true]";
		};

		linkedItems[] = {
			"OPTRE_UNSC_M52D_Armor_Rifleman",
			"OPTRE_UNSC_CH252D_Helmet",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};

		respawnLinkedItems[] = {
			"OPTRE_UNSC_M52D_Armor_Rifleman",
			"OPTRE_UNSC_CH252D_Helmet",
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
			"ACE_Flashlight_Maglite_ML300L"
		};

		nightLinkedItems[] = {
			"OPTRE_NVG"
		};
	};

	class TWC_Infantry_UNSC_Pilot: B_Soldier_base_F
	{
		scope = 2;
		displayName = "Pilot";
		faction = "TWC_UNSC";
		CATEGORY(TWC_Infantry_AirForce)
		uniformClass = "OPTRE_UNSC_Airforce_Uniform";
		TWC_isCommandRole = 1;
		engineer = 1;
		linkedItems[] =
		{
			"OPTRE_UNSC_M52A_Armor_Pilot_AF",
			"OPTRE_UNSC_CH252_Helmet2_Vacuum_MAR",
			"ItemCompass",
			"ItemcTab",
			"itemMap",
			"ItemWatch"
		};
		respawnLinkedItems[] =
		{
			"CUP_V_B_PilotVest",
			"OPTRE_UNSC_CH252_Helmet2_Vacuum_MAR",
			"ItemCompass",
			"ItemcTab",
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
			"TWC_Weapon_M7"
			"Throw",
			"Put"
		};
		respawnweapons[] =
		{
			"TWC_Weapon_M7"
			"Throw",
			"Put"
		};
		magazines[] =
		{
			"OPTRE_60Rnd_5x23mm_Mag"
			"OPTRE_60Rnd_5x23mm_Mag"
			"OPTRE_60Rnd_5x23mm_Mag"
			"SmokeShell",
			"SmokeShell"
		};
		respawnmagazines[] =
		{
			"OPTRE_60Rnd_5x23mm_Mag"
			"OPTRE_60Rnd_5x23mm_Mag"
			"OPTRE_60Rnd_5x23mm_Mag"
			"SmokeShell",
			"SmokeShell"
		};
			nightItems[] = {
			MAG_2("Chemlight_green"),
			"ACE_Flashlight_Maglite_ML300L"
		};

		nightLinkedItems[] = {
			"OPTRE_NVG"
		};
	};
	class TWC_Infantry_Spartan_Base: OPTRE_Spartan2_Soldier
	{
		scope = 1;
		displayName = "Spartan Base";
		faction = "TWC_UNSC";
		CATEGORY(TWC_Infantry_Spartan)
		uniformClass = "OPTRE_MJOLNIR_Undersuit";
		linkedItems[] =
		{
			"OPTRE_MJOLNIR_Mk4Armor",
			"OPTRE_MJOLNIR_Mk4Helmet",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		respawnLinkedItems[] =
		{
			"OPTRE_MJOLNIR_Mk4Armor",
			"OPTRE_MJOLNIR_Mk4Helmet",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		Items[] =
		{
			MEDICAL_LOADOUT,
		};
		respawnItems[] =
		{
			MEDICAL_LOADOUT,
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
		};
		respawnmagazines[] =
		{
		};
	};
	#include "regular\odst.hpp"
	#include "regular\spartan.hpp"
};

