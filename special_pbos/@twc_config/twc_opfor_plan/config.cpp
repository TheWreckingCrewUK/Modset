class CfgPatches
{
	class twc_opfor_plan {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"A3_Characters_F_BLUFOR",
			"A3_Characters_F_OPFOR",
			"A3_Characters_F_INDEP",
			"twc_faction",
			"twc_ai"
		};
	};
};

class EventHandlers;
class CfgFactionClasses {
	class TWC_PLAN {
		displayName = "TWC Operations - PLAN";
		author = "The Wrecking Crew";
		icon = "TWClogo.paa";
		priority = 2;
		side = 2;
	};
};

class CfgWeapons
{
	#include "weapons.hpp"
};

class CfgVehicles
{
	#define maga_nc(a,b) class _nc_##a {magazine = a; count = b;}
	#define weap_nc(a,b) class _nc_##a {weapon = a; count = b;}
	#define item_nc(a,b) class _nc_##a {name = a; count = b;}
	
	#include "backpacks.hpp"
	#include "ammocrates.hpp"

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
	class TWC_Infantry_PLAN_Base: I_Soldier_F {
		scope = 1;
		displayName = "Base";
		faction = "TWC_PLAN";
		CATEGORY(TWC_Infantry_Regular_Woodland)
		icon = "iconMan";
		nakedUniform = "U_BasicBody";
		uniformClass = "PLA_Uniform_PLAN";
		backpack = "";
		identityTypes[] = {"LanguageCHI_F","Head_VME","G_GUERIL_default"};
		class EventHandlers: EventHandlers {
			init = "(_this select 0) setVariable [""twc_keepMap"",true]";
		};

		linkedItems[] = {
			"PLAN_Vest",
			"VME_PLAN_Helmet",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};

		respawnLinkedItems[] = {
			"PLAN_Vest",
			"VME_PLAN_Helmet",
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
			"ACE_Flashlight_MX991",
			"Chemlight_green",
			"Chemlight_green"
		};

		nightLinkedItems[] = {
			"twc_nightvision_gen3"
		};
	};

	class TWC_Infantry_PLAN_Plane_Pilot: TWC_Infantry_PLAN_Base
	{
		scope = 2;
		displayName = "Jet Pilot";
		CATEGORY(TWC_ForceType_Airborne)
		uniformClass = "PLA_Pilot_Green_Coveralls";
		linkedItems[] =
		{
			"CUP_V_B_PilotVest",
			"VME_Pilot_Helmet",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		respawnLinkedItems[] =
		{
			"CUP_V_B_PilotVest",
			"VME_Pilot_Helmet",
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
	#include "units.hpp"
};

class CfgGroups
{
	class INDEP
	{
		class TWC_Groups_PLAN
		{
			name = "TWC Groups PLAN";
			#include "groups.hpp"
		};
	};
};