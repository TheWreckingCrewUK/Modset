class CfgPatches
{
	class mas_ww2_army
	{
		author = "";
		units[] = {};
		weapons[] = {};
		requiredversion = 1.56;
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F","A3_Characters_F","A3_Characters_F_BLUFOR","twc_breda30"};
	};
};
class UniformSlotInfo
{
	slotType = 0;
	linkProxy = "-";
};
class CfgFactionClasses
{
	class mas_ww2_army_ITA
	{
		displayName = "WW2 Italian Forces";
		priority = 2;
		side = 1;
		icon = "\mas_ww2_army\cfgfaction_mas_ww2_ita_ca.paa";
	};
	class mas_wwa_army_ITA
	{
		displayName = "WW2 Italian Forces (Africa)";
		priority = 2;
		side = 1;
		icon = "\mas_ww2_army\cfgfaction_mas_ww2_ita_ca.paa";
	};
};
class CfgEditorSubcategories
{
	class mas_ww2_army_i
	{
		displayName = "Italian Infantry";
	};
};
class CfgVehicleClasses
{
	class mas_ww2_army_i
	{
		displayName = "Italian Infantry";
	};
};
class cfgWeapons
{
	class InventoryItem_Base_F;
	class ItemCore;
	class ItemInfo;
	class UniformItem;
	class U_B_CombatUniform_mcam;
	class V_Chestrig_khk;
	class H_HelmetB;
	class H_Booniehat_khk;
	class U_mas_ww2_B_CombatUniform_us: U_B_CombatUniform_mcam
	{
		scope = 1;
		author = "massi & authors in credits";
		displayName = "WW2 Uniform US(101stAB)";
		//picture = "\mas_ww2_army\ui\icon_u_ww2us_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_mas_ww2_Soldier_F_us";
			containerClass = "Supply80";
			mass = 60;
		};
	};
	class U_mas_ww2_O_CombatUniform_ita: U_mas_ww2_B_CombatUniform_us
	{
		author = "massi & authors in credits";
		displayName = "WW2 Uniform Italian";
		picture = "\mas_ww2_army\ui\icon_u_ww2uk_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "O_mas_ww2_Soldier_F_ita";
			containerClass = "Supply80";
			mass = 40;
		};
	};
	class U_mas_wwa_O_CombatUniform_ita: U_mas_ww2_B_CombatUniform_us
	{
		author = "massi & authors in credits";
		displayName = "WW2 Uniform Italian(Afr)";
		picture = "\mas_ww2_army\ui\icon_u_ww2des_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "O_mas_wwa_Soldier_F_ita";
			containerClass = "Supply80";
			mass = 40;
		};
	};
	class V_mas_ww2_vest_US: V_Chestrig_khk
	{
		scope = 1;
		author = "massi & authors in credits";
		_generalMacro = "V_mas_ww2_vest_US";
		displayName = "WW2 US Webbing";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\mas_ww2_army\vest\mas_ww2_vest.p3d";
			containerClass = "Supply200";
			mass = 20;
			hiddenSelections[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 10;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 10;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 10;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
	};
	class V_mas_ww2_vest_ita: V_mas_ww2_vest_US
	{
		author = "massi & authors in credits";
		_generalMacro = "V_mas_ww2_vest_ita";
		displayName = "WW2 Italian Webbing";
		picture = "\mas_ww2_army\ui\icon_v_gerweb_ca.paa";
		model = "\mas_ww2_army\vest\mas_ww2_ita_vest.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\mas_ww2_army\vest\mas_ww2_ita_vest.p3d";
			containerClass = "Supply200";
			mass = 20;
			hiddenSelections[] = {};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 10;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 10;
					passThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 10;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
	};
	class H_mas_ww2_helmet_us_B: H_HelmetB
	{
		scope = 1;
		author = "massi & authors in credits";
		_generalMacro = "H_mas_ww2_helmet_us_B";
		displayName = "WW2 US Helmet(101stAB)";
		model = "\mas_ww2_army\hats\mas_ww2us_2.p3d";
		class ItemInfo: ItemInfo
		{
			mass = 30;
			uniformModel = "\mas_ww2_army\hats\mas_ww2us_2.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
		hiddenSelections[] = {"camo"};
	};
	class H_mas_ww2_helmet_ita_O: H_mas_ww2_helmet_us_B
	{
		author = "massi & authors in credits";
		_generalMacro = "H_mas_ww2_helmet_ita_O";
		displayName = "WW2 Italian Helmet";
		model = "\mas_ww2_army\hats\mas_ww2ita.p3d";
		picture = "\mas_ww2_army\ui\icon_h_helita_ca.paa";
		class ItemInfo: ItemInfo
		{
			mass = 30;
			uniformModel = "\mas_ww2_army\hats\mas_ww2ita.p3d";
			modelSides[] = {3,0};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mas_ww2_army\hats\data\ita_co.paa"};
	};
	class H_mas_wwa_helmet_ita_O: H_mas_ww2_helmet_ita_O
	{
		author = "massi & authors in credits";
		_generalMacro = "H_mas_wwa_helmet_ita_O";
		displayName = "WW2 Italian Helmet(Afr)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mas_ww2_army\hats\data\ita_cd.paa"};
	};
	class H_mas_wwa_helmet_pith_O: H_mas_ww2_helmet_us_B
	{
		author = "massi & authors in credits";
		_generalMacro = "H_mas_wwa_helmet_pith_O";
		displayName = "WW2 Pith Helmet";
		model = "\mas_ww2_army\hats\mas_ww2pith.p3d";
		picture = "\mas_ww2_army\ui\icon_h_helpith_ca.paa";
		class ItemInfo: ItemInfo
		{
			mass = 30;
			uniformModel = "\mas_ww2_army\hats\mas_ww2pith.p3d";
			modelSides[] = {3,0};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\mas_ww2_army\hats\data\pith_co.paa"};
	};
};
class CfgVehicles
{
	class Man;
	class B_Soldier_F;
};
class CfgGroups
{
	class WEST
	{
		name = "BLUFOR";
		side = 1;
		class Army
		{
			name = "WW2 Italian Units";
			class WW2_Italy_Europe
			{
				name = "Infantry, Europe";
				class Section
				{
					name = "Section"; //Name of Group
					faction = "mas_ww2_army_ITA"; //Faction
					side = 1; //Side
					class Unit0
					{
						side = 1;
						vehicle = "O_mas_ww2_Soldier_SL_F_ita"; //Class name of desired solider
						rank = "SERGEANT"; // Rank
						position[] = {0,3,0}; //Position in the formation
					};
					class Unit1
					{
						side = 1;
						vehicle = "O_mas_ww2_Soldier_F_ita";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "O_mas_ww2_Soldier_F_ita";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "O_mas_ww2_Soldier_F_ita";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "O_mas_ww2_Soldier_F_ita";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "O_mas_ww2_Soldier_TL_F_ita";
						rank = "CORPORAL";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "O_mas_ww2_Soldier_AR_F_ita";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "O_mas_ww2_Soldier_F_ita";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
				};
				class MG_Team
				{
					name = "MG Team";
					faction = "mas_ww2_army_ITA";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "O_mas_ww2_Soldier_TL_F_ita"; //Class name of desired solider
						rank = "CORPORAL"; // Rank
						position[] = {0,3,0}; //Position in the formation
					};
					class Unit1
					{
						side = 1;
						vehicle = "O_mas_ww2_Soldier_AR_F_ita";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "O_mas_ww2_Soldier_F_ita";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
				};
				class Platoon_Command
				{
					name = "Platoon Command";
					faction = "mas_ww2_army_ITA";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "O_mas_ww2_Soldier_off_F_ita"; //Class name of desired solider
						rank = "LIEUTENANT"; // Rank
						position[] = {0,3,0}; //Position in the formation
					};
					class Unit1
					{
						side = 1;
						vehicle = "O_mas_ww2_Soldier_SL_F_ita";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "O_mas_ww2_Soldier_med_F_ita";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
				};
			};
			class WW2_Italy_Africa
			{
				name = "Infantry, Africa";
				class Section
				{
					name = "Section"; //Name of Group
					faction = "mas_ww2_army_ITA"; //Faction
					side = 1; //Side
					class Unit0
					{
						side = 1;
						vehicle = "O_mas_wwa_Soldier_SL_F_ita"; //Class name of desired solider
						rank = "SERGEANT"; // Rank
						position[] = {0,3,0}; //Position in the formation
					};
					class Unit1
					{
						side = 1;
						vehicle = "O_mas_wwa_Soldier_F_ita";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "O_mas_wwa_Soldier_F_ita";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "O_mas_wwa_Soldier_F_ita";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "O_mas_wwa_Soldier_F_ita";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "O_mas_wwa_Soldier_TL_F_ita";
						rank = "CORPORAL";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "O_mas_wwa_Soldier_AR_F_ita";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "O_mas_wwa_Soldier_F_ita";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
				};
				class MG_Team
				{
					name = "MG Team";
					faction = "mas_ww2_army_ITA";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "O_mas_wwa_Soldier_TL_F_ita"; //Class name of desired solider
						rank = "CORPORAL"; // Rank
						position[] = {0,3,0}; //Position in the formation
					};
					class Unit1
					{
						side = 1;
						vehicle = "O_mas_wwa_Soldier_AR_F_ita";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "O_mas_wwa_Soldier_F_ita";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
				};
				class Platoon_Command
				{
					name = "Platoon Command";
					faction = "mas_ww2_army_ITA";
					side = 1;
					class Unit0
					{
						side = 1;
						vehicle = "O_mas_wwa_Soldier_off_F_ita"; //Class name of desired solider
						rank = "LIEUTENANT"; // Rank
						position[] = {0,3,0}; //Position in the formation
					};
					class Unit1
					{
						side = 1;
						vehicle = "O_mas_wwa_Soldier_SL_F_ita";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "O_mas_wwa_Soldier_med_F_ita";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
				};
			};
		};
	};
};