class CfgPatches
{
	class twc_ww2_faction_usa {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"A3_Characters_F_BLUFOR",
			"A3_Characters_F_OPFOR",
			"twc_faction",
			"twc_ai",
			"WW2_Assets_c_Weapons_InfantryWeapons_c",
			"WW2_Assets_c_Weapons_Sounds_c"
		};
	};
};

class EventHandlers;

class CfgFactionClasses {
	class TWC_WW2_USA {
		displayName = "TWC Operations - WW2 USA";
		author = "The Wrecking Crew";
		icon = "TWClogo.paa";
		priority = 2;
		side = 2;
	};
};
class CfgEditorSubcategories {
	//Airborne
	class TWC_Infantry_US_Airborne_Woodland {
		displayName = "Infantry (Airborne, Woodland)";
	};
	//Rangers
	class TWC_Infantry_US_Ranger_Woodland {
		displayName = "Infantry (Rangers, Woodland)";
	};
};
class CfgVehicles
{
	#include "backpacks.hpp"
	
	class B_Soldier_base_F;
	class O_Soldier_base_F;
	class I_Soldier_F;

	#define MEDICAL_LOADOUT "ACE_EarPlugs","TWC_Item_Clicker_25","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_tourniquet","ACE_tourniquet"
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
	#define CATEGORY(a) editorSubcategory = a;\
			vehicleClass = a;

	class TWC_Infantry_WW2_USA_Base: I_Soldier_F {
		scope = 1;
		displayName = "Base";
		faction = "TWC_WW2_USA";
		CATEGORY(TWC_Infantry_Woodland)
		icon = "iconMan";
		nakedUniform = "U_BasicBody";
		uniformClass = "U_LIB_US_AB_Uniform_M42_506";
		backpack = "";
		
		linkedItems[] =
		{
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		respawnLinkedItems[] =
		{
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
	#include "airborne\woodland.hpp"
	#include "ranger\woodland.hpp"
};
	class CfgGroups
{
	class INDEP
	{
		class TWC_Groups_WW2_USA
		{
			name = "TWC Groups WW2 USA";
			#include "groups.hpp"
			#include "airborne\groups.hpp"
			#include "ranger\groups.hpp"
		};
	};
};