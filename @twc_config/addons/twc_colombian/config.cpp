class CfgPatches
{
	class twc_colombia {
		units[] = {};
		weapons[] = {
			"TWC_CUP_glaunch_M79",
		};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"A3_Characters_F_BLUFOR",
			"A3_Characters_F_OPFOR",
			"twc_faction",
			"twc_ai"
		};
	};
};

class CfgWeapons {
	class CUP_glaunch_M79;
	class TWC_CUP_glaunch_M79: CUP_glaunch_M79
	{
		scope=2;
		author="Sarge";
		_generalMacro="TWC_CUP_glaunch_M79";
		baseWeapon="TWC_CUP_glaunch_M79";
		displayName="M79 (short)";
		descriptionShort="M79 as a secondary";
		type = 2;
	};
};

class EventHandlers;

class CfgFactionClasses {
	class TWC_Colombia {
		displayName = "TWC Operations - Colombia";
		author = "The Wrecking Crew";
		icon = "TWClogo.paa";
		priority = 2;
		side = 1;
	};
};

class CfgVehicles
{
	#include "backpacks.hpp"

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
	#define MAG_13(a) a, a, a, a, a, a, a, a, a, a, a, a, a
	#define CATEGORY(a) editorSubcategory = a;\
			vehicleClass = a;

	//GENERIC
	class TWC_Infantry_Colombia_Base: B_Soldier_base_F {
		scope = 1;
		displayName = "Base";
		faction = "TWC_Colombia";
		CATEGORY(TWC_Infantry_Colombia)
		icon = "iconMan";
		nakedUniform = "U_BasicBody";
		uniformClass = "CUP_U_B_BDUv2_M81";
		backpack = "";

		linkedItems[] = {
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};

		respawnLinkedItems[] = {
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
	};
};

class CfgGroups
{
	class WEST
	{
		class TWC_Groups_Colombia
		{
			name = "TWC Groups Colombia";
			#include "groups.hpp"
		};
	};
};