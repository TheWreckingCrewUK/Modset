class CfgPatches {
	class twc_faction_ww2 {
		units[] = {
			"WW2_British_Base",
			"WW2_British_Platoon_Commander",
			"WW2_British_Platoon_Sergeant",
			"WW2_British_Medic",
			"WW2_British_Section_Leader",
			"WW2_British_Rifleman",
			"WW2_British_2IC",
			"WW2_British_MG",
			"WW2_British_MGASS",
			"WW2_British_AT",
			"WW2_British_AAT",
			"WW2_British_Vehicle_Commander",
			"WW2_British_Vehicle_Crewman",
			
			"WW2_Para_British_Platoon_Commander",
			"WW2_Para_British_Platoon_Sergeant",
			"WW2_Para_British_Medic",
			"WW2_Para_British_Section_Commander",
			"WW2_Para_British_Rifleman",
			"WW2_Para_British_2IC",
			"WW2_Para_British_MG",
			"WW2_Para_British_MGASS",
			"WW2_Para_British_AT",
			"WW2_Para_British_AAT",
			"WW2_Para_British_Carrier_SMG",
			
			"WW2_British_Platoon_Commander_Early",
			"WW2_British_Medic_Early",
			"WW2_British_Section_Leader_Early"
		};

		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"A3_Characters_F_BLUFOR",
			"A3_Characters_F_OPFOR"
		};
	};
};

class EventHandlers;
class CfgEditorSubCategories {
	class TWC_Infantry_WW2_1956 {
		displayName = "Infantry (1956)";
	};

	class TWC_Infantry_WW2_Early {
		displayName = "Infantry (Pre 42)";
	};
};

class CfgFactionClasses {
	class twc_faction_independent {
		displayName = "TWC Operations - WW2";
		author = "Saxon, Bosenator, Rik";
		icon = "TWClogo.paa";
		priority = 2;
		side = 2;
	};
};

class CfgVehicles {
	class B_Soldier_base_F;
	class O_Soldier_base_F;
	class I_Soldier_F;

	#include "base_units.hpp"

	#include "early\infantry.hpp"
	#include "early\backpacks.hpp"
	#include "late\infantry.hpp"
	#include "late\backpacks.hpp"
	#include "late\paratroopers.hpp"
	#include "1956\infantry.hpp"
	
	#include "aussie\backpacks.hpp"
};

// class fow_b_uk_p37_blanco;
class CfgWeapons {
	class ItemCore;
	class VestItem;

	#include "aussie\vests.hpp"
};