class CfgPatches
{
	class mas_ww2_army_afr
	{
		author = "massi & authors in credits";
		units[] = {"B_mas_wwa_Soldier_F_uk","B_mas_wwa_Soldier_AR_F_uk","B_mas_wwa_Soldier_off_F_uk","B_mas_wwa_Soldier_lite_F_uk","B_mas_wwa_Soldier_una_F_uk","B_mas_wwa_Soldier_SL_F_uk","B_mas_wwa_Soldier_TL_F_uk","B_mas_wwa_Soldier_M_F_uk","B_mas_wwa_Soldier_LAT_F_uk","B_mas_wwa_Soldier_med_F_uk","B_mas_wwa_Soldier_eng_F_uk","B_mas_wwa_Soldier_exp_F_uk","B_mas_wwa_Soldier_MortG_F_uk","B_mas_wwa_Soldier_MortT_F_uk","B_mas_wwa_Soldier_F_uks","B_mas_wwa_Soldier_AR_F_uks","B_mas_wwa_Soldier_SL_F_uks","B_mas_wwa_Soldier_TL_F_uks","B_mas_wwa_Soldier_M_F_uks","B_mas_wwa_Soldier_LAT_F_uks","B_mas_wwa_Soldier_med_F_uks","B_mas_wwa_Soldier_eng_F_uks","B_mas_wwa_Soldier_exp_F_uks","O_mas_wwa_Soldier_F_ita","O_mas_wwa_Soldier_AR_F_ita","O_mas_wwa_Soldier_lite_F_ita","O_mas_wwa_Soldier_una_F_ita","O_mas_wwa_Soldier_off_F_ita","O_mas_wwa_Soldier_SL_F_ita","O_mas_wwa_Soldier_TL_F_ita","O_mas_wwa_Soldier_M_F_ita","O_mas_wwa_Soldier_LAT_F_ita","O_mas_wwa_Soldier_med_F_ita","O_mas_wwa_Soldier_eng_F_ita","O_mas_wwa_Soldier_exp_F_ita","O_mas_wwa_Soldier_MortG_F_ita","O_mas_wwa_Soldier_MortT_F_ita","O_mas_wwa_Soldier_F_ger","O_mas_wwa_Soldier_AR_F_ger","O_mas_wwa_Soldier_lite_F_ger","O_mas_wwa_Soldier_una_F_ger","O_mas_wwa_Soldier_off_F_ger","O_mas_wwa_Soldier_SL_F_ger","O_mas_wwa_Soldier_TL_F_ger","O_mas_wwa_Soldier_M_F_ger","O_mas_wwa_Soldier_LAT_F_ger","O_mas_wwa_Soldier_med_F_ger","O_mas_wwa_Soldier_eng_F_ger","O_mas_wwa_Soldier_exp_F_ger","O_mas_wwa_Soldier_MortG_F_ger","O_mas_wwa_Soldier_MortT_F_ger"};
		weapons[] = {};
		requiredversion = 1.56;
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F","A3_Characters_F","A3_Characters_F_BLUFOR","A3_Characters_F_OPFOR","mas_ww2_army","mas_ww2_weapons","mas_ww2_army_ita"};
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
	class O_mas_ww2_Soldier_F_ita;
	class O_mas_ww2_Soldier_AR_F_ita;
	class O_mas_ww2_Soldier_off_F_ita;
	class O_mas_ww2_Soldier_SL_F_ita;
	class O_mas_ww2_Soldier_TL_F_ita;
	class O_mas_ww2_Soldier_M_F_ita;
	class O_mas_ww2_Soldier_med_F_ita;
	class O_mas_wwa_Soldier_F_ita: O_mas_ww2_Soldier_F_ita
	{
		author = "massi & authors in credits";
		_generalMacro = "O_mas_wwa_Soldier_F_ita";
		faction = "mas_wwa_army_ita";
		model = "mas_ww2_army\md\mas_ww2_ita_uniform.p3d";
		uniformClass = "U_mas_wwa_O_CombatUniform_ita";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"mas_ww2_army\unif\data\soldier_ww2ger_ca.paa","mas_ww2_army\unif\data\acr_officer_cd.paa"};
		linkedItems[] = {"V_mas_ww2_vest_ita","H_mas_wwa_helmet_ita_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_ww2_vest_ita","H_mas_wwa_helmet_ita_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"mas_ww2_army\unif\data\soldier_light.rvmat","mas_ww2_army\unif\data\soldier_light_injury.rvmat","mas_ww2_army\unif\data\soldier_light_injury.rvmat","mas_ww2_army\unif\data\acr_officer.rvmat","mas_ww2_army\unif\data\acr_officer_injury.rvmat","mas_ww2_army\unif\data\acr_officer_injury.rvmat"};
		};
	};
	class O_mas_wwa_Soldier_AR_F_ita: O_mas_ww2_Soldier_AR_F_ita
	{
		author = "massi & authors in credits";
		_generalMacro = "O_mas_wwa_Soldier_AR_F_ita";
		faction = "mas_wwa_army_ita";
		uniformClass = "U_mas_wwa_O_CombatUniform_ita";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"mas_ww2_army\unif\data\soldier_ww2ger_ca.paa","mas_ww2_army\unif\data\acr_officer_cd.paa"};
		linkedItems[] = {"V_mas_ww2_vest_ita","H_mas_wwa_helmet_ita_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_ww2_vest_ita","H_mas_wwa_helmet_ita_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class O_mas_wwa_Soldier_off_F_ita: O_mas_ww2_Soldier_off_F_ita
	{
		author = "massi & authors in credits";
		_generalMacro = "O_mas_wwa_Soldier_off_F_ita";
		faction = "mas_wwa_army_ita";
		uniformClass = "U_mas_wwa_O_CombatUniform_ita";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"mas_ww2_army\unif\data\soldier_ww2ger_ca.paa","mas_ww2_army\unif\data\acr_officer_cd.paa"};
		linkedItems[] = {"V_mas_ww2_vest_ita","H_mas_wwa_helmet_pith_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_ww2_vest_ita","H_mas_wwa_helmet_pith_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class O_mas_wwa_Soldier_SL_F_ita: O_mas_ww2_Soldier_SL_F_ita
	{
		author = "massi & authors in credits";
		_generalMacro = "O_mas_wwa_Soldier_SL_F_ita";
		faction = "mas_wwa_army_ita";
		uniformClass = "U_mas_wwa_O_CombatUniform_ita";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"mas_ww2_army\unif\data\soldier_ww2ger_ca.paa","mas_ww2_army\unif\data\acr_officer_cd.paa"};
		linkedItems[] = {"V_mas_ww2_vest_ita","H_mas_wwa_helmet_ita_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_ww2_vest_ita","H_mas_wwa_helmet_ita_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class O_mas_wwa_Soldier_TL_F_ita: O_mas_ww2_Soldier_TL_F_ita
	{
		author = "massi & authors in credits";
		_generalMacro = "O_mas_wwa_Soldier_TL_F_ita";
		faction = "mas_wwa_army_ita";
		uniformClass = "U_mas_wwa_O_CombatUniform_ita";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"mas_ww2_army\unif\data\soldier_ww2ger_ca.paa","mas_ww2_army\unif\data\acr_officer_cd.paa"};
		linkedItems[] = {"V_mas_ww2_vest_ita","H_mas_wwa_helmet_ita_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_ww2_vest_ita","H_mas_wwa_helmet_ita_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class O_mas_wwa_Soldier_M_F_ita: O_mas_ww2_Soldier_M_F_ita
	{
		author = "massi & authors in credits";
		_generalMacro = "O_mas_wwa_Soldier_M_F_ita";
		faction = "mas_wwa_army_ita";
		uniformClass = "U_mas_wwa_O_CombatUniform_ita";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"mas_ww2_army\unif\data\soldier_ww2ger_ca.paa","mas_ww2_army\unif\data\acr_officer_cd.paa"};
		linkedItems[] = {"V_mas_ww2_vest_ita","H_mas_wwa_helmet_ita_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_ww2_vest_ita","H_mas_wwa_helmet_ita_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class O_mas_wwa_Soldier_med_F_ita: O_mas_ww2_Soldier_med_F_ita
	{
		author = "massi & authors in credits";
		_generalMacro = "O_mas_wwa_Soldier_med_F_ita";
		faction = "mas_wwa_army_ita";
		uniformClass = "U_mas_wwa_O_CombatUniform_ita";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = {"mas_ww2_army\unif\data\soldier_ww2ger_ca.paa","mas_ww2_army\unif\data\acr_officer_cd.paa"};
		linkedItems[] = {"V_mas_ww2_vest_ita","H_mas_wwa_helmet_ita_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_mas_ww2_vest_ita","H_mas_wwa_helmet_ita_O","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
};