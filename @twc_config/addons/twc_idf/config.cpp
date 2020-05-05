class CfgPatches {
	class twc_idf {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"A3_Characters_F_BLUFOR",
			"A3_Characters_F_OPFOR",
			"CUP_Creatures_Military_USArmy",
			"twc_faction",
			"twc_ai"
		};
	};
};

class CfgFactionClasses {
	class TWC_IDF_ColdWar {
		displayName = "Israel Defense Forces (1980)";
		author = "The Wrecking Crew";
		icon = "TWClogo.paa";
		priority = 2;
		side = 1;
	};
};

class EventHandlers;

class CfgWeapons {
	#include "weapons.hpp"
};

class CfgVehicles {
	#include "backpacks.hpp"
	#include "uniformsV.hpp"

	class B_Soldier_base_F;
	class O_Soldier_base_F;
	class I_Soldier_F;

	#define ITEMS(RADIO,ITEMS) RADIO,ITEMS
	#define CW_ITEMS "ACE_EarPlugs","ACRE_PRC343","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_morphine","ACE_morphine","ACE_epinephrine","ACE_tourniquet","ACE_tourniquet"
	#define MODERN_ITEMS ITEMS("ACRE_PRC343",CW_ITEMS)
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

	#include "coldwar\units.hpp"
};

/*class CfgGroups {
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
};*/