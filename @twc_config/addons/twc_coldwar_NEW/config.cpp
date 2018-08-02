class CfgPatches {
	class twc_coldwar {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"A3_Characters_F_BLUFOR",
			"A3_Characters_F_OPFOR",
			"twc_faction",
			"uk3cb_baf_weapons_l1a1"
		};
	};
};

class EventHandlers;

class CfgWeapons
{
	#include "weapons.hpp"
};

class CfgVehicles {
	#include "backpacks.hpp"
	
	class B_Soldier_base_F;
	class O_Soldier_base_F;
	class I_Soldier_F;
	
	#define MEDICAL_LOADOUT "ACE_EarPlugs","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_epinephrine","ACE_tourniquet","ACE_tourniquet"
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
						vehicleClass= a;
	
	//GENERIC
	class TWC_Infantry_ColdWar_Plane_Pilot: B_Soldier_base_F
	{
		scope=2;
		displayName="Jet Pilot";
		faction="TWC_ColdWar";
		editorSubcategory = "TWC_ForceType_Airborne";
		vehicleClass="TWC_ForceType_Airborne";
		icon="iconMan";
		nakedUniform="U_BasicBody";
		uniformClass="UK3CB_BAF_U_HeliPilotCoveralls_RAF";
		backpack="";
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
			MEDICAL_LOADOUT
		};
		respawnItems[]=
		{
			MEDICAL_LOADOUT
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
	};
	class TWC_Infantry_ColdWar_Tank_Commander: B_Soldier_base_F
	{
		scope=2;
		displayName="Tank Commander";
		faction="TWC_ColdWar";
		editorSubcategory = "TWC_ForceType_Armoured";
		vehicleClass="TWC_ForceType_Armoured";
		icon="iconMan";
		nakedUniform="U_BasicBody";
		uniformClass="UK3CB_BAF_U_CrewmanCoveralls_RTR";
		backpack="";
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setVariable [""twc_keepMap"",true]";
		};
		linkedItems[]=
		{
			"SP_P58_UrbanPatrol",
			"UK3CB_BAF_H_Beret_RTR_PRR",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"SP_P58_UrbanPatrol",
			"UK3CB_BAF_H_Beret_RTR_PRR",
			"ItemCompass",
			"itemMap",
			"ItemWatch"
		};
		Items[]=
		{
			MEDICAL_LOADOUT
		};
		respawnItems[]=
		{
			MEDICAL_LOADOUT
		};
		weapons[]=
		{
			"sp_smg_sterling",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"sp_smg_sterling",
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
	};
	class TWC_Infantry_ColdWar_Tank_Crew: TWC_Infantry_ColdWar_Tank_Commander
	{
		displayName="Tank Crew";
		class EventHandlers: EventHandlers
		{
			init = "";
		};
		
	};
	#include "regular\woodland.hpp"
	#include "regular\woodland_dismounted.hpp"
	#include "regular\desert.hpp"
	#include "regular\desert_dismounted.hpp"
	
	/*#include "coin\woodland.hpp"
	#include "coin\woodland_dismounted.hpp"
	#include "coin\desert.hpp"
	#include "coin\desert_dismounted.hpp"*/
	
	#include "airborne\woodland.hpp"
	#include "airborne\desert.hpp"
};