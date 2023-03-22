class CfgPatches
{
	class twc_ww2_faction_1950 {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"A3_Characters_F_BLUFOR",
			"A3_Characters_F_OPFOR",
			"twc_faction",
			"twc_ai_skill",
			"WW2_Assets_c_Weapons_InfantryWeapons_c",
			"WW2_Assets_c_Weapons_Sounds_c"
		};
	};
};
class CfgFactionClasses {
	class TWC_1950 {
		displayName = "TWC Operations - 1950s";
		author = "The Wrecking Crew";
		icon = "TWClogo.paa";
		priority = 2;
		side = 2;
		ace_nametags_rankIcons[] = {
			"\twc_framework\ranks\private.paa",
			"\twc_framework\ranks\lance_corporal.paa",
			"\twc_framework\ranks\corporal.paa",
			"\twc_framework\ranks\sergeant.paa",
			"\twc_framework\ranks\staff_sergeant.paa",
			"\twc_framework\ranks\second_lieutenant.paa",
			"\twc_framework\ranks\major.paa"
		};
	};
};
class CfgEditorSubcategories {
	//1950s COIN
	class TWC_Infantry_1950_COIN_Tropic {
		displayName = "Infantry (COIN Tropic)";
	};
	class TWC_Infantry_1950_COIN_Dismounted_Tropic {
		displayName = "Infantry (COIN, Dismounted, Tropic)";
	};
	//1950s Regular
	class TWC_Infantry_1950_Regular_Arctic {
		displayName = "Infantry (Arctic)";
	};
	class TWC_Infantry_1950_Regular_Dismounted_Arctic {
		displayName = "Infantry (Dismounted, Arctic)";
	};
		class TWC_Infantry_1950_Regular_Desert{
		displayName = "Infantry (Desert)";
	};
	class TWC_Infantry_1950_Regular_Dismounted_Desert {
		displayName = "Infantry (Dismounted, Desert)";
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

	#define MEDICAL_LOADOUT "ACE_EarPlugs","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_splint","ACE_splint","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_tourniquet","ACE_tourniquet"
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
	#define MAG_13(a) a, a, a, a, a, a, a, a, a, a, a, a, a
	#define MAG_14(a) a, a, a, a, a, a, a, a, a, a, a, a, a
	#define MAG_15(a) a, a, a, a, a, a, a, a, a, a, a, a, a
	#define CATEGORY(a) editorSubcategory = a;\
			vehicleClass = a;

	//GENERIC
	class TWC_Infantry_1950_Base: I_Soldier_F
	{
		scope = 1;
		displayName = "Base";
		faction = "TWC_1950";
		CATEGORY(TWC_Infantry_Regular_Woodland)
		identityTypes[] = {"LanguageENGB_F","Head_NATO","G_NATO_default"};
		icon = "iconMan";
		nakedUniform = "U_BasicBody";
		uniformClass = "U_LIB_UK_P37";
		backpack = "";
		
		linkedItems[] =
		{
			"V_LIB_UK_P37_Rifleman",
			"H_LIB_UK_Helmet_Mk2",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		respawnLinkedItems[] =
		{
			"V_LIB_UK_P37_Rifleman",
			"H_LIB_UK_Helmet_Mk2",
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
			"Chemlight_green",
			"Chemlight_green"
		};
	};
	class TWC_Infantry_WW2_Plane_Pilot: TWC_Infantry_1950_Base
	{
		scope = 2;
		displayName = "Plane Pilot";
		CATEGORY(TWC_ForceType_Airborne)
		uniformClass = "U_LIB_US_Pilot";
		TWC_isCommandRole = 1;
		engineer = 1;
		linkedItems[] =
		{
			"V_LIB_US_LifeVest",
			"H_LIB_UK_Pilot_Cap",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		respawnLinkedItems[] =
		{
			"V_LIB_US_LifeVest",
			"H_LIB_UK_Pilot_Cap",
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
			"LIB_Webley_mk6",
			"Throw",
			"Put"
		};
		respawnweapons[] =
		{
			"LIB_Webley_mk6",
			"Throw",
			"Put"
		};
		magazines[] =
		{
			MAG_3("LIB_6Rnd_455"),
			MAG_2("SmokeShell")
		};
		respawnmagazines[] =
		{
			MAG_3("LIB_6Rnd_455"),
			MAG_2("SmokeShell")
		};
	};
	#include "coin\tropic.hpp"
	#include "coin\tropic_dismounted.hpp"
	#include "regular\arctic.hpp"
	#include "regular\arctic_dismounted.hpp"
	#include "regular\desert.hpp"
	#include "regular\desert_dismounted.hpp"
};
	class CfgGroups
{
	class INDEP
	{
		class TWC_Groups_1950
		{
			name = "TWC Groups 1950s";
			#include "coin\groups.hpp"
			#include "regular\groups.hpp"
		};
	};
};