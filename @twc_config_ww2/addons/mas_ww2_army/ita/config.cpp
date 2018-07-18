class CfgPatches
{
	class mas_ww2_army_ita
	{
		author = "massi & authors in credits";
		units[] = {};
		weapons[] = {};
		requiredversion = 1.56;
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F","A3_Characters_F","A3_Characters_F_BLUFOR","A3_Characters_F_OPFOR","mas_ww2_army","mas_ww2_weapons"};
	};
};
class UniformSlotInfo
{
	slotType = 0;
	linkProxy = "-";
};
class CfgVehicles
{
	class Man;
	class I_Soldier_F;
	class I_soldier_AR_F;
	class I_Soldier_lite_F;
	class I_Soldier_SL_F;
	class I_Soldier_TL_F;
	class I_soldier_M_F;
	class I_soldier_LAT_F;
	class I_medic_F;
	class I_soldier_repair_F;
	class I_soldier_exp_F;
	class I_sniper_F;
	class I_engineer_F;
	class I_officer_F;
	class O_mas_ww2_Soldier_F_ita: I_Soldier_F
	{
		author = "massi & authors in credits";
		_generalMacro = "O_mas_ww2_Soldier_F_ita";
		side = 1;
		modelSides[] = {0,3};
		faction = "mas_ww2_army_ita";
		displayname = "Rifleman";
		editorSubcategory = "mas_ww2_army_i";
		model = "mas_ww2_army\md\mas_ww2_ita_uniform.p3d";
		uniformClass = "U_mas_ww2_O_CombatUniform_ita";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"mas_ww2_army\unif\data\soldier_ww2ita_co.paa","mas_ww2_army\unif\data\acr_officer_co.paa"};
		identityTypes[] = {"LanguageGRE_F","Head_Euro"};
		linkedItems[] = {"V_mas_ww2_vest_ita","H_mas_ww2_helmet_ita_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_ww2_vest_ita","H_mas_ww2_helmet_ita_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		weapons[] = {"arifle_mas_ww2_m91","Throw","Put"};
		respawnWeapons[] = {"arifle_mas_ww2_m91","Throw","Put"};
		magazines[] = {"5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_kar98","SmokeShell","SmokeShell","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_kar98","SmokeShell","SmokeShell","HandGrenade","HandGrenade"};
		backpack = "";
		class Wounds
		{
			tex[] = {};
			mat[] = {"mas_ww2_army\unif\data\soldier_light.rvmat","mas_ww2_army\unif\data\soldier_light_injury.rvmat","mas_ww2_army\unif\data\soldier_light_injury.rvmat","mas_ww2_army\unif\data\acr_officer.rvmat","mas_ww2_army\unif\data\acr_officer_injury.rvmat","mas_ww2_army\unif\data\acr_officer_injury.rvmat"};
		};
	};
	class O_mas_ww2_Soldier_AR_F_ita: I_soldier_AR_F
	{
		author = "massi & authors in credits";
		_generalMacro = "O_mas_ww2_Soldier_AR_F_ita";
		side = 1;
		faction = "mas_ww2_army_ita";
		displayname = "Machinegunner";
		editorSubcategory = "mas_ww2_army_i";
		uniformClass = "U_mas_ww2_O_CombatUniform_ita";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"mas_ww2_army\unif\data\soldier_ww2ita_co.paa","mas_ww2_army\unif\data\acr_officer_co.paa"};
		identityTypes[] = {"LanguageGRE_F","Head_Euro"};
		linkedItems[] = {"V_mas_ww2_vest_ita","H_mas_ww2_helmet_ita_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_ww2_vest_ita","H_mas_ww2_helmet_ita_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		weapons[] = {"twc_breda30","Throw","Put"};
		respawnWeapons[] = {"twc_breda30","Throw","Put"};
		magazines[] = {"twc_20rnd_65x52_carcano","twc_20rnd_65x52_carcano","twc_20rnd_65x52_carcano","twc_20rnd_65x52_carcano","twc_20rnd_65x52_carcano","twc_20rnd_65x52_carcano","twc_20rnd_65x52_carcano","twc_20rnd_65x52_carcano","twc_20rnd_65x52_carcano","SmokeShell","SmokeShell","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"twc_20rnd_65x52_carcano","twc_20rnd_65x52_carcano","twc_20rnd_65x52_carcano","twc_20rnd_65x52_carcano","twc_20rnd_65x52_carcano","twc_20rnd_65x52_carcano","SmokeShell","SmokeShell","HandGrenade","HandGrenade"};
		backpack = "";
	};
	class O_mas_ww2_Soldier_off_F_ita: I_officer_F
	{
		author = "massi & authors in credits";
		_generalMacro = "O_mas_ww2_Soldier_off_F_ita";
		side = 1;
		faction = "mas_ww2_army_ita";
		displayname = "Officer";
		editorSubcategory = "mas_ww2_army_i";
		uniformClass = "U_mas_ww2_O_CombatUniform_ita";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"mas_ww2_army\unif\data\soldier_ww2ita_co.paa","mas_ww2_army\unif\data\acr_officer_co.paa"};
		identityTypes[] = {"LanguageGRE_F","Head_Euro"};
		linkedItems[] = {"V_mas_ww2_vest_ita","H_Beret_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_ww2_vest_ita","H_Beret_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		weapons[] = {"arifle_mas_ww2_mb38","hgun_mas_ww2_m34_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_mas_ww2_mb38","hgun_mas_ww2_m34_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_mas_ww2_mp40","30Rnd_mas_ww2_mp40","30Rnd_mas_ww2_mp40","30Rnd_mas_ww2_mp40","30Rnd_mas_ww2_mp40","30Rnd_mas_ww2_mp40","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","HandGrenade"};
		respawnMagazines[] = {"30Rnd_mas_ww2_mp40","30Rnd_mas_ww2_mp40","30Rnd_mas_ww2_mp40","30Rnd_mas_ww2_mp40","30Rnd_mas_ww2_mp40","30Rnd_mas_ww2_mp40","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","HandGrenade"};
		backpack = "";
	};
	class O_mas_ww2_Soldier_SL_F_ita: I_Soldier_SL_F
	{
		author = "massi & authors in credits";
		_generalMacro = "O_mas_ww2_Soldier_SL_F_ita";
		side = 1;
		faction = "mas_ww2_army_ita";
		displayname = "Squad Leader";
		editorSubcategory = "mas_ww2_army_i";
		uniformClass = "U_mas_ww2_O_CombatUniform_ita";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"mas_ww2_army\unif\data\soldier_ww2ita_co.paa","mas_ww2_army\unif\data\acr_officer_co.paa"};
		identityTypes[] = {"LanguageGRE_F","Head_Euro"};
		linkedItems[] = {"V_mas_ww2_vest_ita","H_mas_ww2_helmet_ita_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_ww2_vest_ita","H_mas_ww2_helmet_ita_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		weapons[] = {"arifle_mas_ww2_m91","hgun_mas_ww2_m34_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_mas_ww2_m91","hgun_mas_ww2_m34_F","Throw","Put","Binocular"};
		magazines[] = {"5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_kar98","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShellGreen","SmokeShellRed","SmokeShell","SmokeShell","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_kar98","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShellGreen","SmokeShellRed","SmokeShell","SmokeShell","HandGrenade","HandGrenade"};
		backpack = "";
	};
	class O_mas_ww2_Soldier_TL_F_ita: I_Soldier_TL_F
	{
		author = "massi & authors in credits";
		_generalMacro = "O_mas_ww2_Soldier_TL_F_ita";
		side = 1;
		faction = "mas_ww2_army_ita";
		displayname = "Team Leader";
		editorSubcategory = "mas_ww2_army_i";
		uniformClass = "U_mas_ww2_O_CombatUniform_ita";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"mas_ww2_army\unif\data\soldier_ww2ita_co.paa","mas_ww2_army\unif\data\acr_officer_co.paa"};
		identityTypes[] = {"LanguageGRE_F","Head_Euro"};
		linkedItems[] = {"V_mas_ww2_vest_ita","H_mas_ww2_helmet_ita_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_ww2_vest_ita","H_mas_ww2_helmet_ita_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		weapons[] = {"arifle_mas_ww2_mb38","hgun_mas_ww2_m34_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_mas_ww2_mb38","hgun_mas_ww2_m34_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_mas_ww2_mp40","30Rnd_mas_ww2_mp40","30Rnd_mas_ww2_mp40","30Rnd_mas_ww2_mp40","30Rnd_mas_ww2_mp40","30Rnd_mas_ww2_mp40","30Rnd_mas_ww2_mp40","30Rnd_mas_ww2_mp40","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShellGreen","SmokeShellRed","SmokeShell","SmokeShell","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"30Rnd_mas_ww2_mp40","30Rnd_mas_ww2_mp40","30Rnd_mas_ww2_mp40","30Rnd_mas_ww2_mp40","30Rnd_mas_ww2_mp40","30Rnd_mas_ww2_mp40","30Rnd_mas_ww2_mp40","30Rnd_mas_ww2_mp40","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShellGreen","SmokeShellRed","SmokeShell","SmokeShell","HandGrenade","HandGrenade"};
		backpack = "";
	};
	class O_mas_ww2_Soldier_M_F_ita: I_soldier_M_F
	{
		author = "massi & authors in credits";
		_generalMacro = "O_mas_ww2_Soldier_M_F_ita";
		side = 1;
		faction = "mas_ww2_army_ita";
		displayname = "Sniper";
		editorSubcategory = "mas_ww2_army_i";
		uniformClass = "U_mas_ww2_O_CombatUniform_ita";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"mas_ww2_army\unif\data\soldier_ww2ita_co.paa","mas_ww2_army\unif\data\acr_officer_co.paa"};
		identityTypes[] = {"LanguageGRE_F","Head_Euro"};
		linkedItems[] = {"V_mas_ww2_vest_ita","H_mas_ww2_helmet_ita_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_ww2_vest_ita","H_mas_ww2_helmet_ita_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		weapons[] = {"arifle_mas_ww2_m91_l","hgun_mas_ww2_m34_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_mas_ww2_m91_l","hgun_mas_ww2_m34_F","Throw","Put","Binocular"};
		magazines[] = {"5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_kar98","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","APERSMine_Range_Mag"};
		respawnMagazines[] = {"5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_kar98","5Rnd_mas_ww2_kar98","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShell","HandGrenade","APERSMine_Range_Mag"};
		backpack = "";
	};
	class O_mas_ww2_Soldier_med_F_ita: I_medic_F
	{
		author = "massi & authors in credits";
		_generalMacro = "O_mas_ww2_Soldier_med_F_ita";
		side = 1;
		faction = "mas_ww2_army_ita";
		displayname = "Medic";
		editorSubcategory = "mas_ww2_army_i";
		uniformClass = "U_mas_ww2_O_CombatUniform_ita";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"mas_ww2_army\unif\data\soldier_ww2ita_co.paa","mas_ww2_army\unif\data\acr_officer_co.paa"};
		identityTypes[] = {"LanguageGRE_F","Head_Euro"};
		linkedItems[] = {"V_mas_ww2_vest_ita","H_mas_ww2_helmet_ita_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_ww2_vest_ita","H_mas_ww2_helmet_ita_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		Items[] = {"FirstAidKit","FirstAidKit"};
		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
		weapons[] = {"arifle_mas_ww2_mb38","Throw","Put"};
		respawnWeapons[] = {"arifle_mas_ww2_mb38","Throw","Put"};
		magazines[] = {"30Rnd_mas_ww2_mp40","30Rnd_mas_ww2_mp40","30Rnd_mas_ww2_mp40","30Rnd_mas_ww2_mp40","30Rnd_mas_ww2_mp40","30Rnd_mas_ww2_mp40","30Rnd_mas_ww2_mp40","30Rnd_mas_ww2_mp40","SmokeShellRed","SmokeShell","SmokeShell","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"30Rnd_mas_ww2_mp40","30Rnd_mas_ww2_mp40","30Rnd_mas_ww2_mp40","30Rnd_mas_ww2_mp40","30Rnd_mas_ww2_mp40","30Rnd_mas_ww2_mp40","30Rnd_mas_ww2_mp40","30Rnd_mas_ww2_mp40","SmokeShellRed","SmokeShell","SmokeShell","HandGrenade","HandGrenade"};
		backpack = "";
	};
};
