class CfgPatches
{
	class twc_ww2_faction {
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
	//Early
	class TWC_Infantry_EarlyWW2_Woodland {
		displayName = "Infantry (Early, Woodland)";
	};
	
	class TWC_Infantry_EarlyWW2_Desert {
		displayName = "Infantry (Early, Desert)";
	};
	
	class TWC_Infantry_EarlyWW2_Arctic {
		displayName = "Infantry (Early, Arctic)";
	};
	
	class TWC_Infantry_EarlyWW2_Tropic {
		displayName = "Infantry (Early, Tropic)";
	};
	
	class TWC_Infantry_EarlyWW2_Dismounted_Woodland {
		displayName = "Infantry (Early, Dismounted, Woodland)";
	};
	
	class TWC_Infantry_EarlyWW2_Dismounted_Desert {
		displayName = "Infantry (Early, Dismounted, Desert)";
	};
	
	class TWC_Infantry_EarlyWW2_Dismounted_Arctic {
		displayName = "Infantry (Early, Dismounted, Arctic)";
	};
	
	class TWC_Infantry_EarlyWW2_Dismounted_Tropic {
		displayName = "Infantry (Early, Dismounted, Tropic)";
	};
	
	//ANZAC
	class TWC_Infantry_ANZAC_Desert {
		displayName = "Infantry (ANZAC, Desert)";
	};
	
	class TWC_Infantry_ANZAC_Dismounted_Desert {
		displayName = "Infantry (ANZAC, Dismounted, Desert)";
	};
	
	class TWC_Infantry_ANZAC_Tropic {
		displayName = "Infantry (ANZAC, Tropic)";
	};
	
	class TWC_Infantry_ANZAC_Dismounted_Tropic {
		displayName = "Infantry (ANZAC, Dismounted, Tropic)";
	};
	
	//Canada
	class TWC_Infantry_Canada_Woodland {
		displayName = "Infantry (ANZAC, Woodland)";
	};
	
	class TWC_Infantry_Canada_Dismounted_Woodland {
		displayName = "Infantry (ANZAC, Dismounted, Woodland)";
	};
	
	//India
	class TWC_Infantry_India_Desert {
		displayName = "Infantry (India, Desert)";
	};
	
	class TWC_Infantry_India_Dismounted_Desert {
		displayName = "Infantry (India, Dismounted, Desert)";
	};
	
	class TWC_Infantry_India_Tropic {
		displayName = "Infantry (India, Tropic)";
	};
	
	class TWC_Infantry_India_Dismounted_Tropic {
		displayName = "Infantry (India, Dismounted, Tropic)";
	};
	
	//South Africa
	class TWC_Infantry_SAfrica_Woodland {
		displayName = "Infantry (South Africa, Woodland)";
	};
	
	class TWC_Infantry_SAfrica_Dismounted_Woodland {
		displayName = "Infantry (South Africa, Dismounted, Woodland)";
	};
	
	class TWC_Infantry_SAfrica_Desert {
		displayName = "Infantry (South Africa, Desert)";
	};
	
	class TWC_Infantry_SAfrica_Dismounted_Desert {
		displayName = "Infantry (South Africa, Dismounted, Desert)";
	};
};

class CfgMarkers
{
	class flag;
	class TWC_Marker_WW2_Australia_Flag {
		name = "Australia";
		icon = "twc_ww2_faction\anzac\australia.paa";
		texture = "twc_ww2_faction\anzac\australia.paa";
		size = 32;
		scope = 2;
		shadow = 0;
		color[] = {1,1,1,1};
		markerClass = "Flags";
	};
	class TWC_Marker_WW2_NewZealand_Flag {
		name = "New Zealand";
		icon = "twc_ww2_faction\anzac\new_zealand.paa";
		texture = "twc_ww2_faction\anzac\new_zealand.paa";
		size = 32;
		scope = 2;
		shadow = 0;
		color[] = {1,1,1,1};
		markerClass = "Flags";
	};
	class TWC_Marker_WW2_Canada_Flag {
		name = "Canada";
		icon = "twc_ww2_faction\canada\canada.paa";
		texture = "twc_ww2_faction\canada\canada.paa";
		size = 32;
		scope = 2;
		shadow = 0;
		color[] = {1,1,1,1};
		markerClass = "Flags";
	};
	class TWC_Marker_WW2_India_Flag {
		name = "British India";
		icon = "twc_ww2_faction\india\india.paa";
		texture = "twc_ww2_faction\india\india.paa";
		size = 32;
		scope = 2;
		shadow = 0;
		color[] = {1,1,1,1};
		markerClass = "Flags";
	};
	class TWC_Marker_WW2_SouthAfrica_Flag {
		name = "South Africa";
		icon = "twc_ww2_faction\south_africa\south_africa.paa";
		texture = "twc_ww2_faction\south_africa\south_africa.paa";
		size = 32;
		scope = 2;
		shadow = 0;
		color[] = {1,1,1,1};
		markerClass = "Flags";
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
	class TWC_Infantry_WW2_Base: I_Soldier_F
	{
		scope = 1;
		displayName = "Base";
		faction = "TWC_WW2";
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
	class TWC_Infantry_WW2_Plane_Pilot: TWC_Infantry_WW2_Base
	{
		scope = 2;
		displayName = "Plane Pilot";
		CATEGORY(TWC_ForceType_Airborne)
		uniformClass = "U_LIB_US_Pilot";
		TWC_isCommandRole = 1;
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
	class TWC_Infantry_WW2_Late_Tank_Commander: TWC_Infantry_WW2_Base
	{
		scope = 2;
		displayName = "Tank Commander (Late)";
		CATEGORY(TWC_ForceType_Armoured)
		uniformClass = "U_LIB_UK_P37";
		TWC_isCommandRole = 1;
		class EventHandlers: EventHandlers {
			init = "(_this select 0) setVariable ['twc_keepMap',true]";
		};
		linkedItems[] =
		{
			"V_LIB_UK_P37_Crew",
			"H_LIB_UK_Beret_Headset",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		respawnLinkedItems[] =
		{
			"V_LIB_UK_P37_Crew",
			"H_LIB_UK_Beret_Headset",
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
			"LIB_Sten_Mk2",
			"LIB_Binocular_UK",
			"Throw",
			"Put"
		};
		respawnweapons[] =
		{
			"LIB_Sten_Mk2",
			"LIB_Binocular_UK",
			"Throw",
			"Put"
		};
		magazines[] =
		{
			MAG_3("LIB_32Rnd_9x19_Sten"),
			MAG_2("SmokeShell")
		};
		respawnmagazines[] =
		{
			MAG_3("LIB_32Rnd_9x19_Sten"),
			MAG_2("SmokeShell")
		};
	};
	class TWC_Infantry_WW2_Late_Tank_Crew: TWC_Infantry_WW2_Late_Tank_Commander
	{
		displayName = "Tank Crew (Late)";
		TWC_isCommandRole = 0;
		class EventHandlers: EventHandlers {
			init = "(_this select 0) setVariable ['twc_keepMap',false]";
		};
		weapons[] =
		{
			"LIB_Sten_Mk2",
			"Throw",
			"Put"
		};
		respawnweapons[] =
		{
			"LIB_Sten_Mk2",
			"Throw",
			"Put"
		};
	};
	class TWC_Infantry_WW2_Early_Tank_Commander: TWC_Infantry_WW2_Late_Tank_Commander
	{
		displayName = "Tank Commander (Early)";
		weapons[] =
		{
			"LIB_M1928_Thompson",
			"LIB_Binocular_UK",
			"Throw",
			"Put"
		};
		respawnweapons[] =
		{
			"LIB_M1928_Thompson",
			"LIB_Binocular_UK",
			"Throw",
			"Put"
		};
		magazines[] =
		{
			MAG_3("LIB_30Rnd_45ACP"),
			MAG_2("SmokeShell")
		};
		respawnmagazines[] =
		{
			MAG_3("LIB_30Rnd_45ACP"),
			MAG_2("SmokeShell")
		};
	};
	class TWC_Infantry_WW2_Early_Tank_Crew: TWC_Infantry_WW2_Late_Tank_Crew
	{
		displayName = "Tank Crew (Early)";
		weapons[] =
		{
			"LIB_M1928_Thompson",
			"Throw",
			"Put"
		};
		respawnweapons[] =
		{
			"LIB_M1928_Thompson",
			"Throw",
			"Put"
		};
		magazines[] =
		{
			MAG_3("LIB_30Rnd_45ACP"),
			MAG_2("SmokeShell")
		};
		respawnmagazines[] =
		{
			MAG_3("LIB_30Rnd_45ACP"),
			MAG_2("SmokeShell")
		};
	};
	#include "uk_late\woodland.hpp"
	#include "uk_late\woodland_dismounted.hpp"
	#include "uk_late\desert.hpp"
	#include "uk_late\desert_dismounted.hpp"
	#include "uk_late\arctic.hpp"
	#include "uk_late\arctic_dismounted.hpp"
	#include "uk_late\tropic.hpp"
	#include "uk_late\tropic_dismounted.hpp"
	
	#include "uk_early\woodland.hpp"
	#include "uk_early\woodland_dismounted.hpp"
	#include "uk_early\desert.hpp"
	#include "uk_early\desert_dismounted.hpp"
	#include "uk_early\arctic.hpp"
	#include "uk_early\arctic_dismounted.hpp"
	#include "uk_early\tropic.hpp"
	#include "uk_early\tropic_dismounted.hpp"
	
	#include "uk_airborne\woodland.hpp"
	#include "uk_airborne\arctic.hpp"
	
	#include "anzac\desert.hpp"
	#include "anzac\desert_dismounted.hpp"
	#include "anzac\tropic.hpp"
	#include "anzac\tropic_dismounted.hpp"
	
	#include "canada\woodland.hpp"
	#include "canada\woodland_dismounted.hpp"
	
	#include "india\desert.hpp"
	#include "india\desert_dismounted.hpp"
	#include "india\tropic.hpp"
	#include "india\tropic_dismounted.hpp"
	
	#include "south_africa\woodland.hpp"
	#include "south_africa\woodland_dismounted.hpp"
	#include "south_africa\desert.hpp"
	#include "south_africa\desert_dismounted.hpp"
};

class CfgGroups
{
	class INDEP
	{
		class TWC_Groups_WW2
		{
			name = "TWC Groups WW2";
			#include "groups.hpp"
			#include "uk_late\groups.hpp"
			#include "uk_early\groups.hpp"
			#include "uk_airborne\groups.hpp"
			#include "anzac\groups.hpp"
			#include "canada\groups.hpp"
			#include "india\groups.hpp"
			#include "south_africa\groups.hpp"
			class TWC_Groups_WW2_Generic
			{
				name = "Generic";
				class Tank_Crew_Late
				{
					name = "Tank Crew (Late)";
					faction = "TWC_WW2";
					side = 2;
					class Unit0
					{
						side = 2;
						vehicle = "TWC_Infantry_WW2_Late_Tank_Commander";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "TWC_Infantry_WW2_Late_Tank_Crew";
						rank = "PRIVATE";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "TWC_Infantry_WW2_Late_Tank_Crew";
						rank = "PRIVATE";
						position[] = {4,0,0};
					};
				};
				class Tank_Crew_Early
				{
					name = "Tank Crew (Early)";
					faction = "TWC_WW2";
					side = 2;
					class Unit0
					{
						side = 2;
						vehicle = "TWC_Infantry_WW2_Early_Tank_Commander";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "TWC_Infantry_WW2_Early_Tank_Crew";
						rank = "PRIVATE";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "TWC_Infantry_WW2_Early_Tank_Crew";
						rank = "PRIVATE";
						position[] = {4,0,0};
					};
				};
			};
		};
	};
};