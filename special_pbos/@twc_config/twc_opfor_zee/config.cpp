class CfgPatches {
	class twc_opfor_zee {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

class CfgVehicles {
	class RyanZombieCivilian_F;

	//Fast
	class TWC_OPFOR_Zee_Takistani_Fast_1: RyanZombieCivilian_F {
		scope = 2;
		scopeCurator = 2;
		identityTypes[] = {"CUP_D_Language_TK","Head_TK","CUP_G_CIVIL_TK"};
		displayName = "Takistani Zombie 1";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_meunit_1.p3d";
		headgearList[] = {"",1,"CUP_H_TKI_SkullCap_01",0.4,"CUP_H_TKI_SkullCap_02",0.4,"CUP_H_TKI_SkullCap_03",0.4,"CUP_H_TKI_SkullCap_04",0.4,"CUP_H_TKI_SkullCap_05",0.4,"CUP_H_TKI_Lungee_Open_02",0.4,"CUP_H_TKI_Lungee_Open_03",0.4,"CUP_H_TKI_Lungee_Open_05",0.4,"CUP_H_TKI_Lungee_Open_06",0.4,"CUP_H_TKI_Pakol_1_01",0.4,"CUP_H_TKI_Pakol_1_03",0.4,"CUP_H_TKI_Pakol_1_04",0.4,"CUP_H_TKI_Pakol_2_01",0.4,"CUP_H_TKI_Pakol_2_02",0.4,"CUP_H_TKI_Pakol_2_03",0.4};
		hiddenSelections[] = {"camo","clan","insignia"};
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\meunit_1_4_co.paa"};
		class Wounds
		{
			tex[] = {};
			mat[] = {
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"
			};
		};
	};
	class TWC_OPFOR_Zee_Takistani_Fast_2: TWC_OPFOR_Zee_Takistani_Fast_1 {
		displayName = "Takistani Zombie 2";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_meunit_2.p3d";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\meunit_2_3_co.paa"};
	};
	class TWC_OPFOR_Zee_Takistani_Fast_3: TWC_OPFOR_Zee_Takistani_Fast_1 {
		displayName = "Takistani Zombie 3";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_meunit_2.p3d";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\meunit_2_4_co.paa"};
	};
	class TWC_OPFOR_Zee_Takistani_Fast_4: TWC_OPFOR_Zee_Takistani_Fast_1 {
		displayName = "Takistani Zombie 4";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_meunit_2.p3d";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\meunit_2_1_co.paa"};
	};
	class TWC_OPFOR_Zee_Takistani_Fast_5: TWC_OPFOR_Zee_Takistani_Fast_1 {
		displayName = "Takistani Zombie 5";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\CUP_meunit_2.p3d";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\meunit_2_2_co.paa"};
	};
	class TWC_OPFOR_Zee_Takistani_Fast_6: TWC_OPFOR_Zee_Takistani_Fast_1 {
		displayName = "Takistani Zombie 6";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\meunit_1_2_co.paa"};
	};
	class TWC_OPFOR_Zee_Takistani_Fast_7: TWC_OPFOR_Zee_Takistani_Fast_1 {
		displayName = "Takistani Zombie 7";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\meunit_1_1_co.paa"};
	};
	class TWC_OPFOR_Zee_Takistani_Fast_8: TWC_OPFOR_Zee_Takistani_Fast_1 {
		displayName = "Takistani Zombie 8";
		hiddenSelectionsTextures[] = {"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_TakiInsurgents\data\meunit_1_3_co.paa"};
	};

	//Medium
	class TWC_OPFOR_Zee_Takistani_Medium_1: TWC_OPFOR_Zee_Takistani_Fast_1 {
		moves = "CfgRyanZombiesMovesMaleSdrMedium";
		vehicleClass = "Ryanzombiesmedium";
		editorSubcategory = "Ryanzombiesmedium";
	};
	class TWC_OPFOR_Zee_Takistani_Medium_2: TWC_OPFOR_Zee_Takistani_Fast_2 {
		moves = "CfgRyanZombiesMovesMaleSdrMedium";
		vehicleClass = "Ryanzombiesmedium";
		editorSubcategory = "Ryanzombiesmedium";
	};
	class TWC_OPFOR_Zee_Takistani_Medium_3: TWC_OPFOR_Zee_Takistani_Fast_3 {
		moves = "CfgRyanZombiesMovesMaleSdrMedium";
		vehicleClass = "Ryanzombiesmedium";
		editorSubcategory = "Ryanzombiesmedium";
	};
	class TWC_OPFOR_Zee_Takistani_Medium_4: TWC_OPFOR_Zee_Takistani_Fast_4 {
		moves = "CfgRyanZombiesMovesMaleSdrMedium";
		vehicleClass = "Ryanzombiesmedium";
		editorSubcategory = "Ryanzombiesmedium";
	};
	class TWC_OPFOR_Zee_Takistani_Medium_5: TWC_OPFOR_Zee_Takistani_Fast_5 {
		moves = "CfgRyanZombiesMovesMaleSdrMedium";
		vehicleClass = "Ryanzombiesmedium";
		editorSubcategory = "Ryanzombiesmedium";
	};
	class TWC_OPFOR_Zee_Takistani_Medium_6: TWC_OPFOR_Zee_Takistani_Fast_6 {
		moves = "CfgRyanZombiesMovesMaleSdrMedium";
		vehicleClass = "Ryanzombiesmedium";
		editorSubcategory = "Ryanzombiesmedium";
	};
	class TWC_OPFOR_Zee_Takistani_Medium_7: TWC_OPFOR_Zee_Takistani_Fast_7 {
		moves = "CfgRyanZombiesMovesMaleSdrMedium";
		vehicleClass = "Ryanzombiesmedium";
		editorSubcategory = "Ryanzombiesmedium";
	};
	class TWC_OPFOR_Zee_Takistani_Medium_8: TWC_OPFOR_Zee_Takistani_Fast_8 {
		moves = "CfgRyanZombiesMovesMaleSdrMedium";
		vehicleClass = "Ryanzombiesmedium";
		editorSubcategory = "Ryanzombiesmedium";
	};

	//Slow
	class TWC_OPFOR_Zee_Takistani_Slow_1: TWC_OPFOR_Zee_Takistani_Fast_1 {
		moves = "CfgRyanZombiesMovesMaleSdrSlow";
		vehicleClass = "Ryanzombiesslow";
		editorSubcategory = "Ryanzombiesslow";
	};
	class TWC_OPFOR_Zee_Takistani_Slow_2: TWC_OPFOR_Zee_Takistani_Fast_2 {
		moves = "CfgRyanZombiesMovesMaleSdrSlow";
		vehicleClass = "Ryanzombiesslow";
		editorSubcategory = "Ryanzombiesslow";
	};
	class TWC_OPFOR_Zee_Takistani_Slow_3: TWC_OPFOR_Zee_Takistani_Fast_3 {
		moves = "CfgRyanZombiesMovesMaleSdrSlow";
		vehicleClass = "Ryanzombiesslow";
		editorSubcategory = "Ryanzombiesslow";
	};
	class TWC_OPFOR_Zee_Takistani_Slow_4: TWC_OPFOR_Zee_Takistani_Fast_4 {
		moves = "CfgRyanZombiesMovesMaleSdrSlow";
		vehicleClass = "Ryanzombiesslow";
		editorSubcategory = "Ryanzombiesslow";
	};
	class TWC_OPFOR_Zee_Takistani_Slow_5: TWC_OPFOR_Zee_Takistani_Fast_5 {
		moves = "CfgRyanZombiesMovesMaleSdrSlow";
		vehicleClass = "Ryanzombiesslow";
		editorSubcategory = "Ryanzombiesslow";
	};
	class TWC_OPFOR_Zee_Takistani_Slow_6: TWC_OPFOR_Zee_Takistani_Fast_6 {
		moves = "CfgRyanZombiesMovesMaleSdrSlow";
		vehicleClass = "Ryanzombiesslow";
		editorSubcategory = "Ryanzombiesslow";
	};
	class TWC_OPFOR_Zee_Takistani_Slow_7: TWC_OPFOR_Zee_Takistani_Fast_7 {
		moves = "CfgRyanZombiesMovesMaleSdrSlow";
		vehicleClass = "Ryanzombiesslow";
		editorSubcategory = "Ryanzombiesslow";
	};
	class TWC_OPFOR_Zee_Takistani_Slow_8: TWC_OPFOR_Zee_Takistani_Fast_8 {
		moves = "CfgRyanZombiesMovesMaleSdrSlow";
		vehicleClass = "Ryanzombiesslow";
		editorSubcategory = "Ryanzombiesslow";
	};

	//Walker
	class TWC_OPFOR_Zee_Takistani_Walker_1: TWC_OPFOR_Zee_Takistani_Fast_1 {
		moves = "CfgRyanZombiesMovesMaleSdrWalker";
		vehicleClass = "RyanzombiesWalker";
		editorSubcategory = "RyanzombiesWalker";
	};
	class TWC_OPFOR_Zee_Takistani_Walker_2: TWC_OPFOR_Zee_Takistani_Fast_2 {
		moves = "CfgRyanZombiesMovesMaleSdrWalker";
		vehicleClass = "RyanzombiesWalker";
		editorSubcategory = "RyanzombiesWalker";
	};
	class TWC_OPFOR_Zee_Takistani_Walker_3: TWC_OPFOR_Zee_Takistani_Fast_3 {
		moves = "CfgRyanZombiesMovesMaleSdrWalker";
		vehicleClass = "RyanzombiesWalker";
		editorSubcategory = "RyanzombiesWalker";
	};
	class TWC_OPFOR_Zee_Takistani_Walker_4: TWC_OPFOR_Zee_Takistani_Fast_4 {
		moves = "CfgRyanZombiesMovesMaleSdrWalker";
		vehicleClass = "RyanzombiesWalker";
		editorSubcategory = "RyanzombiesWalker";
	};
	class TWC_OPFOR_Zee_Takistani_Walker_5: TWC_OPFOR_Zee_Takistani_Fast_5 {
		moves = "CfgRyanZombiesMovesMaleSdrWalker";
		vehicleClass = "RyanzombiesWalker";
		editorSubcategory = "RyanzombiesWalker";
	};
	class TWC_OPFOR_Zee_Takistani_Walker_6: TWC_OPFOR_Zee_Takistani_Fast_6 {
		moves = "CfgRyanZombiesMovesMaleSdrWalker";
		vehicleClass = "RyanzombiesWalker";
		editorSubcategory = "RyanzombiesWalker";
	};
	class TWC_OPFOR_Zee_Takistani_Walker_7: TWC_OPFOR_Zee_Takistani_Fast_7 {
		moves = "CfgRyanZombiesMovesMaleSdrWalker";
		vehicleClass = "RyanzombiesWalker";
		editorSubcategory = "RyanzombiesWalker";
	};
	class TWC_OPFOR_Zee_Takistani_Walker_8: TWC_OPFOR_Zee_Takistani_Fast_8 {
		moves = "CfgRyanZombiesMovesMaleSdrWalker";
		vehicleClass = "RyanzombiesWalker";
		editorSubcategory = "RyanzombiesWalker";
	};
};

class CfgGroups {
	class Indep {
		class Ryanzombiesfaction {
			class Ryanzombiesgroupfast {
				class TWC_OPFOR_Zee_Takistani_Fast_Large
				{
					name = "Takistani - Large Horde";
					faction = "Ryanzombiesfaction";
					side = 2;
					rarityGroup = 0.75;
					class Unit0
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_1";
						rank = "COLONEL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_2";
						rank = "COLONEL";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_3";
						rank = "COLONEL";
						position[] = {-2,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_4";
						rank = "COLONEL";
						position[] = {0,-2,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_5";
						rank = "COLONEL";
						position[] = {2,2,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_6";
						rank = "COLONEL";
						position[] = {-2,2,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_7";
						rank = "COLONEL";
						position[] = {4,0,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_8";
						rank = "COLONEL";
						position[] = {-4,0,0};
					};
					class Unit8
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_1";
						rank = "COLONEL";
						position[] = {4,2,0};
					};
					class Unit9
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_2";
						rank = "COLONEL";
						position[] = {-4,2,0};
					};
					class Unit10
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_3";
						rank = "COLONEL";
						position[] = {2,-2,0};
					};
					class Unit11
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_4";
						rank = "COLONEL";
						position[] = {4,-2,0};
					};
					class Unit12
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_5";
						rank = "COLONEL";
						position[] = {-2,-2,0};
					};
					class Unit13
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_6";
						rank = "COLONEL";
						position[] = {-4,-2,0};
					};
					class Unit14
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_7";
						rank = "COLONEL";
						position[] = {-6,2,0};
					};
					class Unit15
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_8";
						rank = "COLONEL";
						position[] = {-6,0,0};
					};
					class Unit16
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_1";
						rank = "COLONEL";
						position[] = {-6,-2,0};
					};
					class Unit17
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_2";
						rank = "COLONEL";
						position[] = {6,2,0};
					};
					class Unit18
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_3";
						rank = "COLONEL";
						position[] = {6,0,0};
					};
					class Unit19
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_4";
						rank = "COLONEL";
						position[] = {6,-2,0};
					};
					class Unit20
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_5";
						rank = "COLONEL";
						position[] = {-5,-4,0};
					};
					class Unit21
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_6";
						rank = "COLONEL";
						position[] = {-3,-4,0};
					};
					class Unit22
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_7";
						rank = "COLONEL";
						position[] = {-1,-4,0};
					};
					class Unit23
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_8";
						rank = "COLONEL";
						position[] = {1,-4,0};
					};
					class Unit24
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_1";
						rank = "COLONEL";
						position[] = {3,-4,0};
					};
					class Unit25
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_2";
						rank = "COLONEL";
						position[] = {5,-4,0};
					};
					class Unit26
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_3";
						rank = "COLONEL";
						position[] = {-5,-6,0};
					};
					class Unit27
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_4";
						rank = "COLONEL";
						position[] = {-3,-6,0};
					};
					class Unit28
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_5";
						rank = "COLONEL";
						position[] = {-1,-6,0};
					};
					class Unit29
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_6";
						rank = "COLONEL";
						position[] = {1,-6,0};
					};
					class Unit30
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_7";
						rank = "COLONEL";
						position[] = {3,-6,0};
					};
					class Unit31
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_8";
						rank = "COLONEL";
						position[] = {5,-6,0};
					};
				};
				class TWC_OPFOR_Zee_Takistani_Fast_Medium
				{
					name = "Takistani - Medium Horde";
					faction = "Ryanzombiesfaction";
					side = 2;
					rarityGroup = 0.75;
					class Unit0
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_1";
						rank = "COLONEL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_2";
						rank = "COLONEL";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_3";
						rank = "COLONEL";
						position[] = {-2,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_4";
						rank = "COLONEL";
						position[] = {0,-2,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_5";
						rank = "COLONEL";
						position[] = {2,2,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_6";
						rank = "COLONEL";
						position[] = {-2,2,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_7";
						rank = "COLONEL";
						position[] = {4,0,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_8";
						rank = "COLONEL";
						position[] = {-4,0,0};
					};
					class Unit8
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_1";
						rank = "COLONEL";
						position[] = {4,2,0};
					};
					class Unit9
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_2";
						rank = "COLONEL";
						position[] = {-4,2,0};
					};
					class Unit10
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_3";
						rank = "COLONEL";
						position[] = {2,-2,0};
					};
					class Unit11
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_4";
						rank = "COLONEL";
						position[] = {4,-2,0};
					};
					class Unit12
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_5";
						rank = "COLONEL";
						position[] = {-2,-2,0};
					};
					class Unit13
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_6";
						rank = "COLONEL";
						position[] = {-4,-2,0};
					};
				};
				class TWC_OPFOR_Zee_Takistani_Fast_Small
				{
					name = "Takistani - Small Horde";
					faction = "Ryanzombiesfaction";
					side = 2;
					rarityGroup = 0.75;
					class Unit0
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_1";
						rank = "COLONEL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_2";
						rank = "COLONEL";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_3";
						rank = "COLONEL";
						position[] = {-2,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_4";
						rank = "COLONEL";
						position[] = {0,-2,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_5";
						rank = "COLONEL";
						position[] = {2,2,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_6";
						rank = "COLONEL";
						position[] = {-2,2,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_7";
						rank = "COLONEL";
						position[] = {2,-2,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Fast_8";
						rank = "COLONEL";
						position[] = {-2,-2,0};
					};
				};
			};
			class Ryanzombiesgroupmedium {
				class TWC_OPFOR_Zee_Takistani_Medium_Large
				{
					name = "Takistani - Large Horde";
					faction = "Ryanzombiesfaction";
					side = 2;
					rarityGroup = 0.75;
					class Unit0
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_1";
						rank = "COLONEL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_2";
						rank = "COLONEL";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_3";
						rank = "COLONEL";
						position[] = {-2,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_4";
						rank = "COLONEL";
						position[] = {0,-2,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_5";
						rank = "COLONEL";
						position[] = {2,2,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_6";
						rank = "COLONEL";
						position[] = {-2,2,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_7";
						rank = "COLONEL";
						position[] = {4,0,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_8";
						rank = "COLONEL";
						position[] = {-4,0,0};
					};
					class Unit8
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_1";
						rank = "COLONEL";
						position[] = {4,2,0};
					};
					class Unit9
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_2";
						rank = "COLONEL";
						position[] = {-4,2,0};
					};
					class Unit10
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_3";
						rank = "COLONEL";
						position[] = {2,-2,0};
					};
					class Unit11
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_4";
						rank = "COLONEL";
						position[] = {4,-2,0};
					};
					class Unit12
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_5";
						rank = "COLONEL";
						position[] = {-2,-2,0};
					};
					class Unit13
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_6";
						rank = "COLONEL";
						position[] = {-4,-2,0};
					};
					class Unit14
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_7";
						rank = "COLONEL";
						position[] = {-6,2,0};
					};
					class Unit15
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_8";
						rank = "COLONEL";
						position[] = {-6,0,0};
					};
					class Unit16
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_1";
						rank = "COLONEL";
						position[] = {-6,-2,0};
					};
					class Unit17
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_2";
						rank = "COLONEL";
						position[] = {6,2,0};
					};
					class Unit18
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_3";
						rank = "COLONEL";
						position[] = {6,0,0};
					};
					class Unit19
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_4";
						rank = "COLONEL";
						position[] = {6,-2,0};
					};
					class Unit20
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_5";
						rank = "COLONEL";
						position[] = {-5,-4,0};
					};
					class Unit21
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_6";
						rank = "COLONEL";
						position[] = {-3,-4,0};
					};
					class Unit22
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_7";
						rank = "COLONEL";
						position[] = {-1,-4,0};
					};
					class Unit23
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_8";
						rank = "COLONEL";
						position[] = {1,-4,0};
					};
					class Unit24
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_1";
						rank = "COLONEL";
						position[] = {3,-4,0};
					};
					class Unit25
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_2";
						rank = "COLONEL";
						position[] = {5,-4,0};
					};
					class Unit26
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_3";
						rank = "COLONEL";
						position[] = {-5,-6,0};
					};
					class Unit27
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_4";
						rank = "COLONEL";
						position[] = {-3,-6,0};
					};
					class Unit28
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_5";
						rank = "COLONEL";
						position[] = {-1,-6,0};
					};
					class Unit29
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_6";
						rank = "COLONEL";
						position[] = {1,-6,0};
					};
					class Unit30
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_7";
						rank = "COLONEL";
						position[] = {3,-6,0};
					};
					class Unit31
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_8";
						rank = "COLONEL";
						position[] = {5,-6,0};
					};
				};
				class TWC_OPFOR_Zee_Takistani_Medium_Medium
				{
					name = "Takistani - Medium Horde";
					faction = "Ryanzombiesfaction";
					side = 2;
					rarityGroup = 0.75;
					class Unit0
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_1";
						rank = "COLONEL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_2";
						rank = "COLONEL";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_3";
						rank = "COLONEL";
						position[] = {-2,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_4";
						rank = "COLONEL";
						position[] = {0,-2,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_5";
						rank = "COLONEL";
						position[] = {2,2,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_6";
						rank = "COLONEL";
						position[] = {-2,2,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_7";
						rank = "COLONEL";
						position[] = {4,0,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_8";
						rank = "COLONEL";
						position[] = {-4,0,0};
					};
					class Unit8
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_1";
						rank = "COLONEL";
						position[] = {4,2,0};
					};
					class Unit9
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_2";
						rank = "COLONEL";
						position[] = {-4,2,0};
					};
					class Unit10
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_3";
						rank = "COLONEL";
						position[] = {2,-2,0};
					};
					class Unit11
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_4";
						rank = "COLONEL";
						position[] = {4,-2,0};
					};
					class Unit12
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_5";
						rank = "COLONEL";
						position[] = {-2,-2,0};
					};
					class Unit13
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_6";
						rank = "COLONEL";
						position[] = {-4,-2,0};
					};
				};
				class TWC_OPFOR_Zee_Takistani_Medium_Small
				{
					name = "Takistani - Small Horde";
					faction = "Ryanzombiesfaction";
					side = 2;
					rarityGroup = 0.75;
					class Unit0
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_1";
						rank = "COLONEL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_2";
						rank = "COLONEL";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_3";
						rank = "COLONEL";
						position[] = {-2,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_4";
						rank = "COLONEL";
						position[] = {0,-2,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_5";
						rank = "COLONEL";
						position[] = {2,2,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_6";
						rank = "COLONEL";
						position[] = {-2,2,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_7";
						rank = "COLONEL";
						position[] = {2,-2,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Medium_8";
						rank = "COLONEL";
						position[] = {-2,-2,0};
					};
				};
			};
			class Ryanzombiesgroupslow {
				class TWC_OPFOR_Zee_Takistani_Slow_Large
				{
					name = "Takistani - Large Horde";
					faction = "Ryanzombiesfaction";
					side = 2;
					rarityGroup = 0.75;
					class Unit0
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_1";
						rank = "COLONEL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_2";
						rank = "COLONEL";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_3";
						rank = "COLONEL";
						position[] = {-2,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_4";
						rank = "COLONEL";
						position[] = {0,-2,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_5";
						rank = "COLONEL";
						position[] = {2,2,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_6";
						rank = "COLONEL";
						position[] = {-2,2,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_7";
						rank = "COLONEL";
						position[] = {4,0,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_8";
						rank = "COLONEL";
						position[] = {-4,0,0};
					};
					class Unit8
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_1";
						rank = "COLONEL";
						position[] = {4,2,0};
					};
					class Unit9
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_2";
						rank = "COLONEL";
						position[] = {-4,2,0};
					};
					class Unit10
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_3";
						rank = "COLONEL";
						position[] = {2,-2,0};
					};
					class Unit11
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_4";
						rank = "COLONEL";
						position[] = {4,-2,0};
					};
					class Unit12
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_5";
						rank = "COLONEL";
						position[] = {-2,-2,0};
					};
					class Unit13
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_6";
						rank = "COLONEL";
						position[] = {-4,-2,0};
					};
					class Unit14
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_7";
						rank = "COLONEL";
						position[] = {-6,2,0};
					};
					class Unit15
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_8";
						rank = "COLONEL";
						position[] = {-6,0,0};
					};
					class Unit16
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_1";
						rank = "COLONEL";
						position[] = {-6,-2,0};
					};
					class Unit17
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_2";
						rank = "COLONEL";
						position[] = {6,2,0};
					};
					class Unit18
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_3";
						rank = "COLONEL";
						position[] = {6,0,0};
					};
					class Unit19
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_4";
						rank = "COLONEL";
						position[] = {6,-2,0};
					};
					class Unit20
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_5";
						rank = "COLONEL";
						position[] = {-5,-4,0};
					};
					class Unit21
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_6";
						rank = "COLONEL";
						position[] = {-3,-4,0};
					};
					class Unit22
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_7";
						rank = "COLONEL";
						position[] = {-1,-4,0};
					};
					class Unit23
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_8";
						rank = "COLONEL";
						position[] = {1,-4,0};
					};
					class Unit24
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_1";
						rank = "COLONEL";
						position[] = {3,-4,0};
					};
					class Unit25
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_2";
						rank = "COLONEL";
						position[] = {5,-4,0};
					};
					class Unit26
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_3";
						rank = "COLONEL";
						position[] = {-5,-6,0};
					};
					class Unit27
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_4";
						rank = "COLONEL";
						position[] = {-3,-6,0};
					};
					class Unit28
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_5";
						rank = "COLONEL";
						position[] = {-1,-6,0};
					};
					class Unit29
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_6";
						rank = "COLONEL";
						position[] = {1,-6,0};
					};
					class Unit30
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_7";
						rank = "COLONEL";
						position[] = {3,-6,0};
					};
					class Unit31
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_8";
						rank = "COLONEL";
						position[] = {5,-6,0};
					};
				};
				class TWC_OPFOR_Zee_Takistani_Slow_Medium
				{
					name = "Takistani - Medium Horde";
					faction = "Ryanzombiesfaction";
					side = 2;
					rarityGroup = 0.75;
					class Unit0
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_1";
						rank = "COLONEL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_2";
						rank = "COLONEL";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_3";
						rank = "COLONEL";
						position[] = {-2,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_4";
						rank = "COLONEL";
						position[] = {0,-2,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_5";
						rank = "COLONEL";
						position[] = {2,2,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_6";
						rank = "COLONEL";
						position[] = {-2,2,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_7";
						rank = "COLONEL";
						position[] = {4,0,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_8";
						rank = "COLONEL";
						position[] = {-4,0,0};
					};
					class Unit8
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_1";
						rank = "COLONEL";
						position[] = {4,2,0};
					};
					class Unit9
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_2";
						rank = "COLONEL";
						position[] = {-4,2,0};
					};
					class Unit10
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_3";
						rank = "COLONEL";
						position[] = {2,-2,0};
					};
					class Unit11
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_4";
						rank = "COLONEL";
						position[] = {4,-2,0};
					};
					class Unit12
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_5";
						rank = "COLONEL";
						position[] = {-2,-2,0};
					};
					class Unit13
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_6";
						rank = "COLONEL";
						position[] = {-4,-2,0};
					};
				};
				class TWC_OPFOR_Zee_Takistani_Slow_Small
				{
					name = "Takistani - Small Horde";
					faction = "Ryanzombiesfaction";
					side = 2;
					rarityGroup = 0.75;
					class Unit0
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_1";
						rank = "COLONEL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_2";
						rank = "COLONEL";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_3";
						rank = "COLONEL";
						position[] = {-2,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_4";
						rank = "COLONEL";
						position[] = {0,-2,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_5";
						rank = "COLONEL";
						position[] = {2,2,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_6";
						rank = "COLONEL";
						position[] = {-2,2,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_7";
						rank = "COLONEL";
						position[] = {2,-2,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Slow_8";
						rank = "COLONEL";
						position[] = {-2,-2,0};
					};
				};
			};
			class RyanzombiesgroupWalker {
				class TWC_OPFOR_Zee_Takistani_Walker_Large
				{
					name = "Takistani - Large Horde";
					faction = "Ryanzombiesfaction";
					side = 2;
					rarityGroup = 0.75;
					class Unit0
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_1";
						rank = "COLONEL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_2";
						rank = "COLONEL";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_3";
						rank = "COLONEL";
						position[] = {-2,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_4";
						rank = "COLONEL";
						position[] = {0,-2,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_5";
						rank = "COLONEL";
						position[] = {2,2,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_6";
						rank = "COLONEL";
						position[] = {-2,2,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_7";
						rank = "COLONEL";
						position[] = {4,0,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_8";
						rank = "COLONEL";
						position[] = {-4,0,0};
					};
					class Unit8
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_1";
						rank = "COLONEL";
						position[] = {4,2,0};
					};
					class Unit9
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_2";
						rank = "COLONEL";
						position[] = {-4,2,0};
					};
					class Unit10
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_3";
						rank = "COLONEL";
						position[] = {2,-2,0};
					};
					class Unit11
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_4";
						rank = "COLONEL";
						position[] = {4,-2,0};
					};
					class Unit12
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_5";
						rank = "COLONEL";
						position[] = {-2,-2,0};
					};
					class Unit13
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_6";
						rank = "COLONEL";
						position[] = {-4,-2,0};
					};
					class Unit14
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_7";
						rank = "COLONEL";
						position[] = {-6,2,0};
					};
					class Unit15
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_8";
						rank = "COLONEL";
						position[] = {-6,0,0};
					};
					class Unit16
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_1";
						rank = "COLONEL";
						position[] = {-6,-2,0};
					};
					class Unit17
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_2";
						rank = "COLONEL";
						position[] = {6,2,0};
					};
					class Unit18
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_3";
						rank = "COLONEL";
						position[] = {6,0,0};
					};
					class Unit19
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_4";
						rank = "COLONEL";
						position[] = {6,-2,0};
					};
					class Unit20
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_5";
						rank = "COLONEL";
						position[] = {-5,-4,0};
					};
					class Unit21
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_6";
						rank = "COLONEL";
						position[] = {-3,-4,0};
					};
					class Unit22
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_7";
						rank = "COLONEL";
						position[] = {-1,-4,0};
					};
					class Unit23
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_8";
						rank = "COLONEL";
						position[] = {1,-4,0};
					};
					class Unit24
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_1";
						rank = "COLONEL";
						position[] = {3,-4,0};
					};
					class Unit25
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_2";
						rank = "COLONEL";
						position[] = {5,-4,0};
					};
					class Unit26
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_3";
						rank = "COLONEL";
						position[] = {-5,-6,0};
					};
					class Unit27
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_4";
						rank = "COLONEL";
						position[] = {-3,-6,0};
					};
					class Unit28
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_5";
						rank = "COLONEL";
						position[] = {-1,-6,0};
					};
					class Unit29
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_6";
						rank = "COLONEL";
						position[] = {1,-6,0};
					};
					class Unit30
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_7";
						rank = "COLONEL";
						position[] = {3,-6,0};
					};
					class Unit31
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_8";
						rank = "COLONEL";
						position[] = {5,-6,0};
					};
				};
				class TWC_OPFOR_Zee_Takistani_Walker_Medium
				{
					name = "Takistani - Medium Horde";
					faction = "Ryanzombiesfaction";
					side = 2;
					rarityGroup = 0.75;
					class Unit0
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_1";
						rank = "COLONEL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_2";
						rank = "COLONEL";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_3";
						rank = "COLONEL";
						position[] = {-2,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_4";
						rank = "COLONEL";
						position[] = {0,-2,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_5";
						rank = "COLONEL";
						position[] = {2,2,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_6";
						rank = "COLONEL";
						position[] = {-2,2,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_7";
						rank = "COLONEL";
						position[] = {4,0,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_8";
						rank = "COLONEL";
						position[] = {-4,0,0};
					};
					class Unit8
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_1";
						rank = "COLONEL";
						position[] = {4,2,0};
					};
					class Unit9
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_2";
						rank = "COLONEL";
						position[] = {-4,2,0};
					};
					class Unit10
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_3";
						rank = "COLONEL";
						position[] = {2,-2,0};
					};
					class Unit11
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_4";
						rank = "COLONEL";
						position[] = {4,-2,0};
					};
					class Unit12
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_5";
						rank = "COLONEL";
						position[] = {-2,-2,0};
					};
					class Unit13
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_6";
						rank = "COLONEL";
						position[] = {-4,-2,0};
					};
				};
				class TWC_OPFOR_Zee_Takistani_Walker_Small
				{
					name = "Takistani - Small Horde";
					faction = "Ryanzombiesfaction";
					side = 2;
					rarityGroup = 0.75;
					class Unit0
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_1";
						rank = "COLONEL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_2";
						rank = "COLONEL";
						position[] = {2,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_3";
						rank = "COLONEL";
						position[] = {-2,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_4";
						rank = "COLONEL";
						position[] = {0,-2,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_5";
						rank = "COLONEL";
						position[] = {2,2,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_6";
						rank = "COLONEL";
						position[] = {-2,2,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_7";
						rank = "COLONEL";
						position[] = {2,-2,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "TWC_OPFOR_Zee_Takistani_Walker_8";
						rank = "COLONEL";
						position[] = {-2,-2,0};
					};
				};
			};
		};
	};
};