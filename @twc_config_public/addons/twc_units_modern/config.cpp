class CfgPatches {
	class twc_modern {
		units[]= {
			"Modern_British_Base",
			"Modern_British_Squadleader",
			"Modern_British_Rifleman",
			"Modern_British_Grenadier",
			"Modern_British_Autorifleman",
			"Modern_British_2IC",
			"Modern_British_Machinegunner",
			"Modern_British_Marksman",
			"Modern_British_Platoon_Commander",
			"Modern_British_Platoon_Sergeant",
			"Modern_British_Medic",
			"Modern_British_Pointman",
			"Modern_British_Grenadier_COIN",
			"Modern_British_Autorifleman_COIN",
			"Modern_British_2IC_COIN",
			"Modern_British_Marksman_COIN",
			"Modern_British_PlatoonMortar",
			"Modern_British_HeliPilot",
			"Modern_British_JetPilot",
			"Modern_British_MortarGunner",
			"Modern_British_MortarAssistant",
			"Modern_British_Sniper",
			"Modern_British_Spotter",
			"Modern_British_FAC",
			"Modern_British_Blank",
			"Modern_British_Quartermaster",
			"Modern_British_VehicleCrew",
			"Modern_British_VehicleCommander",
			"Modern_British_FSTCommander",
			"Modern_British_FSTForwardObserver",
			"Modern_British_FSTAssistant",
			"twc_ana_base",
			"twc_ana_commander",
			"twc_ana_subcommander",
			"twc_ana_rifleman_at",
			"twc_ana_mg",
			"twc_ana_mg_as",
			"twc_ana_marksman",
			"twc_ana_medic",
			
			"Modern_UKSF_Base",
			"Modern_UKSF_Squadleader",
			"Modern_UKSF_Pointman",
			"Modern_UKSF_Grenadier",
			"Modern_UKSF_Marksman",
			"Modern_UKSF_Medic",
			"Modern_UKSF_2IC",
			
			"Modern_pol_Base",
			"Modern_pol_rifleman_at",
			"Modern_pol_grenadier",
			"Modern_pol_mg",
			"Modern_pol_commander",
			"Modern_pol_subcommander",
			"Modern_pol_medic",
			
			"Modern_pol_Base_d",
			"Modern_pol_rifleman_at_d",
			"Modern_pol_grenadier_d",
			"Modern_pol_mg_d",
			"Modern_pol_commander_d",
			"Modern_pol_subcommander_d",
			"Modern_pol_medic_d",
			
			"modern_ger_Base",
			"Modern_ger_rif_AT",
			"modern_ger_grenadier",
			"modern_ger_mg",
			"modern_ger_commander",
			"modern_ger_subcommander",
			"modern_ger_medic",
			
			"modern_ger_Base_d",
			"Modern_ger_rif_AT_d",
			"modern_ger_grenadier_d",
			"modern_ger_mg_d",
			"modern_ger_commander_d",
			"modern_ger_subcommander_d",
			"modern_ger_medic_d"
		};

		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]= {
			"A3_Characters_F_BLUFOR",
			"A3_Characters_F_Common",
			"A3_Characters_F",
			"a3_characters_f_beta",
			"a3_characters_f_gamma",
			"A3_Data_F",
			"cup_weapons_m16",
			"cup_wheeledvehicles_uphmmwv",
			"rhsusf_c_Caiman",
			"rhsusf_c_Cougar",
			"cup_wheeledvehicles_wolfhound",
			"cup_wheeledvehicles_mastiff",
			"rhsusf_vehicles",
			"rhs_c_weapons",
			"cup_weapons_ak",
			"rhsusf_c_mrzr",
			"rhsgref_c_weapons",
			"rhsusf_c_weapons",
			"rhsusf_hmmwv",
			"uk3cb_baf_vehicles_landrover",
			"uk3cb_baf_weapons_smallarms"
		};
	};
};

class EventHandlers;

class CfgEditorSubCategories {
	class Men_Modern {
		displayName = "Men (Modern)";
	};

	class Men_Modern_Mounted {
		displayName = "Men (Modern Dismounted)";
	};

	class Men_Modern_Light {
		displayName = "Men (Light Mobility)";
	};

	class Men_ModernCoin {
		displayName = "Men (Modern COIN)";
	};
};

class CfgFactionClasses {
	class twc_public_baf {
		displayName="TWC Public BAF Units";
		author="FakeMatty";
		icon="TWClogo.paa";
		priority=2;
		side=1;
	};
};

class CfgFunctions {
	class twc_fnc_mortarwalk {
		class functions {
			tag = "twc_fnc_mortarwalk";
			file = "twc_units_modern\functions";
			class mortarwalk{};
		};
	};
	class twc_fnc_gunwalk {
		class functions {
			tag = "twc_fnc_gunwalk";
			file = "twc_units_modern\functions";
			class gunwalk{};
		};
	};
};

#include "compositions.hpp"
class CfgVehicles
{
	class B_Soldier_base_F;
	class CUP_B_C130J_GB;
	
	#include "modern.hpp"
	#include "poland.hpp"
	#include "russia.hpp"
	#include "germany.hpp"
	
	#include "insurgency\units.hpp"
	
	#include "backpacks.hpp"
	
	#include "vehicles.hpp"
	
};
#include "weapons.hpp"

class CfgGesturesMale
{
	class states
	{
		class GestureReloadBase;
		class GestureReloadSPAR_01: GestureReloadBase
		{
			speed = -3;
		};
	};
};
