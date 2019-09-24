class CfgPatches {
	class TWC_OPFOR_WARPAC {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"a3_characters_f",
			"a3_characters_f_blufor",
			"a3_characters_f_opfor",
			"a3_characters_f_common",
			"a3_characters_f_beta",
			"a3_characters_f_gamma",
			"CUP_Creatures_Military_Russia",
			"CUP_Creatures_Military_Taki"
		};
	};
};

class CfgFactionClasses {
	class TWC_OPFOR_Units_LWP {
		displayName = "Polish People's Army";
		author = "[TWC] Rik";
		icon = "TWClogo.paa";
		priority = 2;
		side = 0;
	};

	class TWC_OPFOR_Units_CSLA {
		displayName = "Czechoslovak People's Army";
		author = "[TWC] Rik";
		icon = "TWClogo.paa";
		priority = 2;
		side = 0;
	};

	class TWC_OPFOR_Units_NVA {
		displayName = "National People's Army";
		author = "[TWC] Rik";
		icon = "TWClogo.paa";
		priority = 2;
		side = 0;
	};
};

class CfgMarkers {
	class flag;
	class TWC_Flag_LWP: Flag {
		name = "Polish People's Republic";
		icon = "twc_opfor_warpac\lwp\data\lwp_flag_ca.paa";
		texture = "twc_opfor_warpac\lwp\data\lwp_flag_ca.paa";
		size = 32;
		scope = 2;
		shadow = 0;
		color[] = {1,1,1,1};
		markerClass = "Flags";
	};
	class TWC_Flag_CSLA: Flag {
		name = "Czechoslovak Socialist Republic";
		icon = "twc_opfor_warpac\csla\data\csla_flag_ca.paa";
		texture = "twc_opfor_warpac\csla\data\csla_flag_ca.paa";
		size = 32;
		scope = 2;
		shadow = 0;
		color[] = {1,1,1,1};
		markerClass = "Flags";
	};
	class TWC_Flag_NVA: Flag {
		name = "German Democratic Republic";
		icon = "twc_opfor_warpac\csla\data\nva_flag_ca.paa";
		texture = "twc_opfor_warpac\csla\data\nva_flag_ca.paa";
		size = 32;
		scope = 2;
		shadow = 0;
		color[] = {1,1,1,1};
		markerClass = "Flags";
	};
};

class CfgWeapons {
	class UniformItem;
	class ItemCore;

	//Uniforms
	#include "nva\uniform.hpp"
	#include "lwp\uniform.hpp"
};

class CfgVehicles {
	//Definitions
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
	#define CATEGORY(a) editorSubcategory = a; vehicleClass = a;

	#define ADD_MAGA(a,b) class _nc_##a {magazine = a; count = b;}
	#define ADD_WEAP(a,b) class _nc_##a {weapon = a; count = b;}
	#define ADD_ITEM(a,b) class _nc_##a {name = a; count = b;}

	//Backpacks
	class CUP_B_RPGPack_Khaki;
	class CUP_B_AlicePack_Khaki;
	#include "csla\backpacks.hpp"
	#include "lwp\backpacks.hpp"
	#include "nva\backpacks.hpp"

	//Units
	#include "csla\units.hpp"
	#include "lwp\units.hpp"
	#include "nva\units.hpp"

	//Vehicles
	class CUP_O_UAZ_Unarmed_SLA;
	class CUP_O_UAZ_Open_SLA;
	class CUP_O_UAZ_MG_SLA;
	class CUP_O_UAZ_AGS30_SLA;
	class CUP_O_UAZ_SPG9_SLA;
	class CUP_O_UAZ_METIS_SLA;

	class CUP_O_Ural_RU;
	class CUP_O_Ural_Open_RU;
	class CUP_O_Ural_Refuel_RU;
	class CUP_O_Ural_Repair_RU;
	class CUP_O_Ural_Reammo_RU;
	class CUP_O_Ural_Empty_RU;
	class CUP_O_Ural_ZU23_RU;
	class CUP_O_BM21_SLA;

	class CUP_BMP1_base;
	class CUP_O_BRDM2_SLA;
	class CUP_O_BRDM2_HQ_SLA;
	class CUP_O_BTR60_SLA;
	class CUP_I_T55_TK_GUE;
	class CUP_I_T72_NAPA;
	class CUP_O_ZSU23_SLA;
	class CUP_O_MTLB_pk_Green_RU;

	#include "csla\vehicles.hpp"
	#include "lwp\vehicles.hpp"
	#include "nva\vehicles.hpp"
};

class CfgGroups {
	class EAST
	{
		#include "csla\groups.hpp"
		#include "lwp\groups.hpp"
		#include "nva\groups.hpp"
	};
};