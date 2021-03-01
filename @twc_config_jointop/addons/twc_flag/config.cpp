class CfgPatches {
	class twc_flags {
		units[] = {
			"TWC_Vehicle_Accessory_Flag",
			"TWC_Vehicle_Accessory_Flag_British",
			"TWC_Vehicle_Accessory_Flag_EU"
		};
		
		weapons[] = {};
		requiredVersion = 0.1;
		
		requiredAddons[] = {
			"A3_Structures_F_Mil_Flags"
		};
	};
};

class CfgFunctions {
	class twc_flag {
		tag = "twc_flag";
		class init {
			file = "twc_flag\fncs";
			class add {};
		};
	};
};

class DefaultEventhandlers;
class Default_Extended_Eventhandlers: DefaultEventhandlers{};

class CfgVehicles {
	class FlagCarrierCore;
	class TWC_Vehicle_Accessory_Flag: FlagCarrierCore {
		author = "TWC - Bosenator";
		_generalMacro = "TWC_Vehicle_Accessory_Flag";
		scope = 0;
		scopeCurator = 0;
		displayName = "";
		model = "\twc_flag\flag_model.p3d";
		icon = "iconObject_circle";
		vehicleClass = "Flag";
		cost = 1000;
		keepHorizontalPlacement = 1;
		accuracy = 1000;
		animated = 0;
		nameSound = "obj_flag";
		supplyRadius = 2;
		hiddenSelections[] = {"vlajka"};
		hiddenSelectionsTextures[] = {"\A3\Structures_F\Mil\Flags\Data\Mast_civ_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3\Structures_F\Mil\Flags\Data\Mast_civ.rvmat"};
	};
	
	class TWC_Vehicle_Accessory_Flag_British: TWC_Vehicle_Accessory_Flag {
		author = "TWC - Bosenator";
		_generalMacro = "TWC_Vehicle_Accessory_Flag_British";
		scope = 2;
		scopeCurator = 2;
		displayName = "British Flag";
		
		class EventHandlers {
			class TWC_EventHandlers {
				init = "(_this select 0) setFlagTexture '\twc_flag\flags\flag_british_co.paa'";
			};
		};
	};
	
	class TWC_Vehicle_Accessory_Flag_EU: TWC_Vehicle_Accessory_Flag {
		author = "TWC - Bosenator";
		_generalMacro = "TWC_Vehicle_Accessory_Flag_EU";
		scope = 2;
		scopeCurator = 2;
		displayName = "European Union Flag";
		
		class EventHandlers {
			class TWC_EventHandlers {
				init = "(_this select 0) setFlagTexture '\twc_flag\flags\flag_eu_co.paa'";
			};
		};
	};
};
