class CfgPatches
{
	class twc_coldwar {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"A3_Characters_F_BLUFOR",
			"A3_Characters_F_OPFOR",
			"twc_weapons",
			"twc_faction",
			"twc_ai_skill",
			"uk3cb_baf_weapons_l1a1",
			"sp_backpacks",
			"sp_effects",
			"sp_grenades",
			"sp_hipower",
			"sp_iws",
			"sp_launchers",
			"sp_lmg",
			"sp_mk3hsat",
			"sp_mk5",
			"sp_no32",
			"sp_pattern60",
			"sp_pattern68",
			"sp_uniformaccessories",
			"sp_units_80_desert",
			"sp_units_80_temperate",
			"sp_units_80_tropical",
			"sp_webbing",
			"sp_webbing_58pattern",
			"sp_facewear",
			"sp_headgear",
			"sp_uniforms",
			"sp_weapons",
			"sp_enfield",
			"sp_sterling"
		};
	};
};
class EventHandlers;

class CfgWeapons
{
	#include "weapons.hpp"
};

class CfgAmmo
{
	#include "ammo.hpp"
};
class CfgMagazines
{
	#include "magazines.hpp"
};

class CfgVehicles
{
	#include "backpacks.hpp"
	
	class B_Soldier_base_F;
	class O_Soldier_base_F;
	class I_Soldier_F;
	
	#define MEDICAL_LOADOUT "ACE_EarPlugs","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_tourniquet","ACE_tourniquet"
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
	class TWC_Infantry_ColdWar_Plane_Pilot: B_Soldier_base_F
	{
		scope=2;
		displayName = "Jet Pilot";
		faction = "TWC_ColdWar";
		CATEGORY("TWC_ForceType_Airborne")
		icon = "iconMan";
		nakedUniform = "U_BasicBody";
		uniformClass = "UK3CB_BAF_U_HeliPilotCoveralls_RAF";
		backpack = "";
		engineer = 1;
		linkedItems[]=
		{
			"CUP_V_B_PilotVest",
			"UK3CB_BAF_H_PilotHelmetHeli_A",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"CUP_V_B_PilotVest",
			"UK3CB_BAF_H_PilotHelmetHeli_A",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		Items[]=
		{
			MEDICAL_LOADOUT,
			"ACE_MapTools"
		};
		respawnItems[]=
		{
			MEDICAL_LOADOUT,
			"ACE_MapTools"
		};
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"SmokeShell",
			"SmokeShell"
		};
		respawnmagazines[]=
		{
			"SmokeShell",
			"SmokeShell"
		};
		
		nightItems[] = {
			MAG_2("Chemlight_green"),
			"ACE_Flashlight_Maglite_ML300L",
			"ACE_Flashlight_MX991"
		};
		
		nightLinkedItems[] = {
			"twc_nightvision_gen2"
		};
	};
	class TWC_Infantry_ColdWar_Tank_Commander: B_Soldier_base_F
	{
		scope = 2;
		displayName = "Tank Commander";
		faction = "TWC_ColdWar";
		CATEGORY("TWC_ForceType_Armoured")
		icon = "iconMan";
		nakedUniform = "U_BasicBody";
		uniformClass = "UK3CB_BAF_U_CrewmanCoveralls_RTR";
		backpack = "";
		TWC_isCommandRole = 1;
		engineer = 1;
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setVariable [""twc_keepMap"",true]";
		};
		linkedItems[]=
		{
			"sp_webbing_58pattern_beltorder",
			"UK3CB_BAF_H_Beret_RTR_PRR",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"sp_webbing_58pattern_beltorder",
			"UK3CB_BAF_H_Beret_RTR_PRR",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		Items[]=
		{
			MEDICAL_LOADOUT,
			"ACE_MapTools"
		};
		respawnItems[]=
		{
			MEDICAL_LOADOUT,
			"ACE_MapTools"
		};
		weapons[]=
		{
			"SP_smg_sterling",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"SP_smg_sterling",
			"Binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			MAG_3("SP_30Rnd_9x19_L2A3_Sterling"),
			MAG_2("SmokeShell")
		};
		respawnmagazines[]=
		{
			MAG_3("SP_30Rnd_9x19_L2A3_Sterling"),
			MAG_2("SmokeShell")
		};
		
		nightItems[] = {
			MAG_2("Chemlight_green"),
			"ACE_Flashlight_Maglite_ML300L",
			"ACE_Flashlight_MX991"
		};
	};
	class TWC_Infantry_ColdWar_Tank_Crew: TWC_Infantry_ColdWar_Tank_Commander
	{
		displayName="Tank Crew";
		TWC_isCommandRole = 0;
		class EventHandlers: EventHandlers
		{
			init = "";
		};
		weapons[]=
		{
			"SP_smg_sterling",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"SP_smg_sterling",
			"Throw",
			"Put"
		};
		nightItems[] = {
			MAG_2("Chemlight_green")
		};
	};
	#include "regular\woodland.hpp"
	#include "regular\woodland_dismounted.hpp"
	#include "regular\desert.hpp"
	#include "regular\desert_dismounted.hpp"
	#include "regular\tropic.hpp"
	#include "regular\tropic_dismounted.hpp"
	#include "regular\arctic.hpp"
	#include "regular\arctic_dismounted.hpp"
	#include "regular\nbc.hpp"
	#include "regular\nbc_dismounted.hpp"
	
	#include "coin\woodland.hpp"
	#include "coin\woodland_dismounted.hpp"
	#include "coin\desert.hpp"
	#include "coin\desert_dismounted.hpp"
	#include "coin\tropic.hpp"
	#include "coin\tropic_dismounted.hpp"
	#include "coin\arctic.hpp"
	#include "coin\arctic_dismounted.hpp"
	#include "coin\nbc.hpp"
	#include "coin\nbc_dismounted.hpp"
	
	#include "airborne\woodland.hpp"
	#include "airborne\desert.hpp"
};

class CfgGroups
{
	class WEST
	{
		class TWC_Groups_ColdWar
		{
			name = "TWC Groups Cold War";
			#include "regular\groups.hpp"
			#include "airborne\groups.hpp"
			#include "coin\groups.hpp"
			class TWC_Groups_ColdWar_Generic
			{
				name = "Generic";
				class Tank_Crew
				{
					name = "Tank Crew";
					faction = "TWC_ColdWar";
					side = 1;
					class Unit0
					{
							side = 1;
							vehicle = "TWC_Infantry_ColdWar_Tank_Commander";
							rank = "SERGEANT";
							position[] = {0,0,0};
					};
					class Unit1
					{
							side = 1;
							vehicle = "TWC_Infantry_ColdWar_Tank_Crew";
							rank = "PRIVATE";
							position[] = {2,0,0};
					};
					class Unit2
					{
							side = 1;
							vehicle = "TWC_Infantry_ColdWar_Tank_Crew";
							rank = "PRIVATE";
							position[] = {4,0,0};
					};
				};
			};
		};
	};
};