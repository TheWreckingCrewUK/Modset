/*

backpak texture classnames

alice tan: uk3cb_baf_equipment\backpacks\data\backpack_fast_ddpm_co.paa

alice green "uk3cb_baf_equipment\backpacks\data\backpack_oli_co.paa"
CUP_B_RPGPack_Khaki

alice dark green, pub only: "rhsgref\addons\rhsgref_infantry\data_tanoa\alicepack_co.paa"

uk3cb_baf_equipment\backpacks\data\backpack_ddpm_co.paa

uk3cb_baf_equipment\backpacks\data\backpack_tan_co.paa

uk3cb_baf_equipment\backpacks\data\backpack_dpm_co.paa

uk3cb_baf_equipment\uniform\data\uniform_dpm_co.paa

uk3cb_baf_equipment\uniform\data\uniform_ddpm_co.paa
*/

class rhsusf_assault_eagleaiii_ocp;
class twc_genbackPack_tan: rhsusf_assault_eagleaiii_ocp
{
	displayname = "Miltec Backpack Tan";
	hiddenselectionstextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_tan_co.paa"};
};
class twc_genbackPack_oli: rhsusf_assault_eagleaiii_ocp
{
	displayname = "Miltec Backpack Olive";
	hiddenselectionstextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_oli_co.paa"};
};
 
class B_AssaultPack_dgtl;
class twc_back_webbing: B_AssaultPack_dgtl
{
	displayname = "SPC";
	model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\CUP_USMC_Eagle_SPC_2.p3d";
	hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_tan_co.paa"};
};
class twc_dpm_belt: B_AssaultPack_dgtl
{
	displayname = "Webbing Belt (DPM)";
	picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\webbing\data\UI\osprey_mk4_webbing_ca.paa";
	transportMaxWeapons = 0;
	maximumLoad = 120;
	hiddenSelections[] = {"camo1","camo2"};
	model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\webbing\osprey_mk4_belt.p3d";
	hiddenSelectionsTextures[] = {"\UK3CB_BAF_Equipment\uniform\data\uniform_dpm_co.paa","\UK3CB_BAF_Equipment\uniform\data\uniform_dpm_co.paa"};
};
class twc_ddpm_belt: twc_dpm_belt
{
	displayname = "Webbing Belt (DDPM)";
	hiddenSelectionsTextures[] = {"\UK3CB_BAF_Equipment\uniform\data\uniform_ddpm_co.paa","\UK3CB_BAF_Equipment\uniform\data\uniform_ddpm_co.paa"};
};
class twc_mtp_belt: twc_dpm_belt
{
	displayname = "Webbing Belt (MTP)";
	hiddenSelectionsTextures[] = {"CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\data\equip_co.paa","CUP\Creatures\People\Military\CUP_Creatures_People_Military_BAF\CUP_vests\osprey_mk4\data\gear_co.paa"};
};
class twc_tan_belt: twc_dpm_belt
{
	displayname = "Webbing Belt (Tan)";
	hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_tan_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_tan_co.paa"};
};
class twc_oli_belt: twc_dpm_belt
{
	displayname = "Webbing Belt (Olive)";
	hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_oli_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_oli_co.paa"};
};
class twc_oli_belt_2: twc_dpm_belt
{
	displayname = "Webbing Belt (Olive ALICE)";
	model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USArmy\CUP_v_ALICE_webbing.p3d";
	hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_tan_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_oli_co.paa"};
};
class twc_tan_belt_2: twc_oli_belt_2
{
	displayname = "Webbing Belt (Tan ALICE)";
	hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_tan_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_tan_co.paa"};
};

class CUP_B_AlicePack_Khaki;
class twc_AlicePack_ddpm: CUP_B_AlicePack_Khaki
{
	displayname = "Alice Pack DDPM";
	hiddenselectionstextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_fast_ddpm_co.paa"};
	hiddenSelectionsMaterials[] = {"\A3\data_f\default.rvmat"};
};

class CUP_B_ACRScout_m95;
class twc_scoutpack_olive: CUP_B_ACRScout_m95
{
	displayname = "CZ Scout Pack (Olive)";
	hiddenselectionstextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_oli_co.paa"};
	hiddenSelectionsMaterials[] = {"\A3\data_f\default.rvmat"};
};
class twc_scoutpack_tan: CUP_B_ACRScout_m95
{
	displayname = "CZ Scout Pack (Tan)";
	hiddenselectionstextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_tan_co.paa"};
	hiddenSelectionsMaterials[] = {"\A3\data_f\default.rvmat"};
};
class twc_scoutpack_dpm: CUP_B_ACRScout_m95
{
	displayname = "CZ Scout Pack (DPM)";
	hiddenselectionstextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_fast_cs95_dpm_co.paa"};
	hiddenSelectionsMaterials[] = {"\A3\data_f\default.rvmat"};
};
class twc_scoutpack_ddpm: CUP_B_ACRScout_m95
{
	displayname = "CZ Scout Pack (DDPM)";
	hiddenselectionstextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_ddpm_co.paa"};
	hiddenSelectionsMaterials[] = {"\A3\data_f\default.rvmat"};
};
class twc_scoutpack_wd: CUP_B_ACRScout_m95
{
	displayname = "CZ Scout Pack (Woodland)";
	hiddenselectionstextures[] = {"rhsgref\addons\rhsgref_infantry\data_cdf\alicepack_co_gref_woodland.paa"};
	hiddenSelectionsMaterials[] = {"\A3\data_f\default.rvmat"};
};
class twc_AlicePack_tan: CUP_B_AlicePack_Khaki
{
	displayname = "Alice Pack Tan";
	hiddenselectionstextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_tan_co.paa"};
	hiddenSelectionsMaterials[] = {"\A3\data_f\default.rvmat"};
};
class twc_AlicePack_green: CUP_B_AlicePack_Khaki
{
	displayname = "Alice Pack Green";
	hiddenselectionstextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_oli_co.paa"};
	hiddenSelectionsMaterials[] = {"\A3\data_f\default.rvmat"};
};


//////////////////////////////  British Woodland Camo  //////////////////////////////
	
	class UK3CB_BAF_B_Bergen_DPMT_SL_A;
	class UK3CB_BAF_B_Bergen_DPMW_SL_A;
	class UK3CB_BAF_B_Bergen_DPMW_Rifleman_A;
	class UK3CB_BAF_B_Bergen_DPMW_Rifleman_B;
	class UK3CB_BAF_B_Carryall_DPMW;
	class UK3CB_BAF_B_Kitbag_DPMW;
	class UK3CB_BAF_B_Kitbag_OLI;
	class UK3CB_BAF_B_Kitbag_TAN;
	class UK3CB_BAF_B_Bergen_TAN_SL_A;
	class UK3CB_BAF_B_Bergen_DPMW_JTAC_H_A;
	class UK3CB_BAF_B_Carryall_TAN;
	class B_Carryall_cbr;
	class UK3CB_BAF_B_Bergen_OLI_Rifleman_A;
	class CUP_B_GER_Medic_Desert;
	

	class TWC_Backpack_1990_armourcrew_webbing: twc_oli_belt_2
	{
		scope = 1;
		class TransportItems
		{
			class _xx_PRC_117F
			{
				name = "ACRE_PRC117F";
				count = 1;
			};
		};
	};
	class TWC_Backpack_1990_armourcrew_webbing_d: twc_tan_belt_2
	{
		scope = 1;
		class TransportItems
		{
			class _xx_PRC_117F
			{
				name = "ACRE_PRC117F";
				count = 1;
			};
		};
	};
	class TWC_Backpack_1990_Sectionlead: UK3CB_BAF_B_Bergen_DPMW_SL_A
	{
		scope = 1;
		mass = 59.84;
		class TransportItems
		{
			class _xx_PRC_117F
			{
				name = "ACRE_PRC117F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 3;
			};
			class _xx_Smoke_Red
			{
				magazine = "SmokeShellRed";
				count = 2;
			};
			class _xx_Smoke_Green
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_Smoke_Yellow
			{
				magazine = "SmokeShellYellow";
				count = 2;
			};
		};
	};
	class TWC_Backpack_1990_Sectionlead_webbing: twc_dpm_belt
	{
		scope = 1;
		class TransportItems
		{
			class _xx_PRC_117F
			{
				name = "ACRE_PRC148";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 3;
			};
			class _xx_Smoke_Red
			{
				magazine = "SmokeShellRed";
				count = 2;
			};
			class _xx_Smoke_Green
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_Smoke_Yellow
			{
				magazine = "SmokeShellYellow";
				count = 2;
			};
		};
	};
	class TWC_Backpack_1990_Sectionlead_d_webbing: twc_ddpm_belt
	{
		scope = 1;
		class TransportItems
		{
			class _xx_PRC_117F
			{
				name = "ACRE_PRC148";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 3;
			};
			class _xx_Smoke_Red
			{
				magazine = "SmokeShellRed";
				count = 2;
			};
			class _xx_Smoke_Green
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_Smoke_Yellow
			{
				magazine = "SmokeShellYellow";
				count = 2;
			};
		};
	};
	class TWC_Backpack_1990_2IC: UK3CB_BAF_B_Carryall_DPMW
	{
		scope = 1;
		class TransportMagazines
		{
            class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 12;
			};
			            class _xx_Stanag_T
			{
				magazine = "UK3CB_BAF_556_30Rnd_T";
				count = 12;
			};
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 2;
			};			
		};
	};
	class TWC_Backpack_1990_2IC_Mounted: UK3CB_BAF_B_Kitbag_DPMW
	{
		scope = 1;
		class TransportMagazines
		{
            class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 16;
			};
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 2;
			};			
		};
	};
	class TWC_Backpack_1990_Rifleman: UK3CB_BAF_B_Bergen_DPMW_Rifleman_B
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 4;
			};
			class _xx_Stanag_T
			{
				magazine = "UK3CB_BAF_556_30Rnd_T";
				count = 3;
			};
		};
	};
	class TWC_Backpack_1990_Rifleman_webbing: twc_dpm_belt
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 4;
			};
			class _xx_Stanag_T
			{
				magazine = "UK3CB_BAF_556_30Rnd_T";
				count = 3;
			};
		};
	};
	class TWC_Backpack_1990_Rifleman_d_webbing: twc_ddpm_belt
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 4;
			};
			class _xx_Stanag_T
			{
				magazine = "UK3CB_BAF_556_30Rnd_T";
				count = 3;
			};
		};
	};
	class TWC_Backpack_1990_Gunner: UK3CB_BAF_B_Bergen_DPMW_Rifleman_A
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 7;
			};
			class _xx_Stanag_T
			{
				magazine = "UK3CB_BAF_556_30Rnd_T";
				count = 5;
			};
		};
	};
	
			class TWC_Backpack_1990_machineGunner: UK3CB_BAF_B_Bergen_DPMW_Rifleman_B
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Stanag
			{
				magazine = "UK3CB_BAF_762_200Rnd";
				count = 2;
			};
		};
	};
	
	class TWC_Backpack_1990_Platoon_Command: UK3CB_BAF_B_Bergen_DPMW_SL_A
	{
		scope = 1;
		mass = 59.84;
		class TransportMagazines
		{
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 3;
			};
			class _xx_Smoke_Red
			{
				magazine = "SmokeShellRed";
				count = 2;
			};
			class _xx_Smoke_Green
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_Smoke_Yellow
			{
				magazine = "SmokeShellYellow";
				count = 2;
			};
		};
		class TransportItems
		{
			class _xx_PRC_117F
			{
				name = "ACRE_PRC117F";
				count = 1;
			};
		};
	};
	class TWC_Backpack_1990_Platoon_Sergeant: UK3CB_BAF_B_Kitbag_OLI
	{
		scope = 1;
		mass = 59.84;
		 maximumLoad = 500;
		class TransportItems
		{
			class _xx_Wire_Cutters
			{
				name = "ACE_wirecutter";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 3;
			};
			class _xx_Smoke_Red
			{
				magazine = "SmokeShellRed";
				count = 2;
			};
			class _xx_Smoke_Green
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_Smoke_Yellow
			{
				magazine = "SmokeShellYellow";
				count = 2;
			};
			class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 20;
			};
		};
	};
	class TWC_Backpack_1990_Medic: UK3CB_BAF_B_Bergen_OLI_Rifleman_A
	{
		scope = 1;
		class TransportItems
		{
            class _xx_Bandage
			{
				name = "ACE_fieldDressing";
				count = 12;
			};
			class _xx_Morphine
			{
				name = "ACE_morphine";
				count = 10;
			};
			class _xx_ACE_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 15;
			};
			class _xxACE_quikclot
			{
				name = "ACE_quikclot";
				count = 6;
			};
			class _xxACE_adenosine
			{
				name = "ACE_adenosine";
				count = 4;
			};
			class _xxACE_atropine
			{
				name = "ACE_atropine";
				count = 4;
			};
			class _xxACE_epinephrine
			{
				name = "ACE_epinephrine";
				count = 10;
			};
			class _xxACE_packingBandage
			{
				name = "ACE_packingBandage";
				count = 15;
			};
			class _xxACE_surgKit
			{
				name = "TWC_Item_Medical_SutureKit_20";
				count = 1;
			};
			class _xxACE_personalAidKit
			{
				name = "ACE_personalAidKit";
				count = 1;
			};
			class _xxACE_salineIV_500
			{
				name = "ACE_salineIV_500";
				count = 6;
			};
			class _xxACE_salineIV_250
			{
				name = "ACE_salineIV_250";
				count = 6;
			};
			class _xxACE_tourniquet
			{
				name = "ACE_tourniquet";
				count = 4;
			};
		};
		class TransportMagazines
		{
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 3;
			};
		};
	};
	class TWC_Backpack_1990_Medic_webbing: twc_dpm_belt
	{
		scope = 1;
		class TransportItems
		{
            class _xx_Bandage
			{
				name = "ACE_fieldDressing";
				count = 12;
			};
			class _xx_Morphine
			{
				name = "ACE_morphine";
				count = 5;
			};
			class _xx_ACE_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 15;
			};
			class _xxACE_quikclot
			{
				name = "ACE_quikclot";
				count = 6;
			};
			class _xxACE_epinephrine
			{
				name = "ACE_epinephrine";
				count = 5;
			};
			class _xxACE_packingBandage
			{
				name = "ACE_packingBandage";
				count = 15;
			};
			class _xxACE_surgKit
			{
				name = "TWC_Item_Medical_SutureKit_20";
				count = 1;
			};
			class _xxACE_personalAidKit
			{
				name = "ACE_personalAidKit";
				count = 1;
			};
			class _xxACE_salineIV_500
			{
				name = "ACE_salineIV_500";
				count = 4;
			};
			class _xxACE_salineIV_250
			{
				name = "ACE_salineIV_250";
				count = 6;
			};
			class _xxACE_tourniquet
			{
				name = "ACE_tourniquet";
				count = 4;
			};
		};
	};
	class TWC_Backpack_1990_Medic_d_webbing: twc_ddpm_belt
	{
		scope = 1;
		class TransportItems
		{
            class _xx_Bandage
			{
				name = "ACE_fieldDressing";
				count = 12;
			};
			class _xx_Morphine
			{
				name = "ACE_morphine";
				count = 5;
			};
			class _xx_ACE_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 15;
			};
			class _xxACE_quikclot
			{
				name = "ACE_quikclot";
				count = 6;
			};
			class _xxACE_epinephrine
			{
				name = "ACE_epinephrine";
				count = 5;
			};
			class _xxACE_packingBandage
			{
				name = "ACE_packingBandage";
				count = 15;
			};
			class _xxACE_surgKit
			{
				name = "TWC_Item_Medical_SutureKit_20";
				count = 1;
			};
			class _xxACE_personalAidKit
			{
				name = "ACE_personalAidKit";
				count = 1;
			};
			class _xxACE_salineIV_500
			{
				name = "ACE_salineIV_500";
				count = 4;
			};
			class _xxACE_salineIV_250
			{
				name = "ACE_salineIV_250";
				count = 6;
			};
			class _xxACE_tourniquet
			{
				name = "ACE_tourniquet";
				count = 4;
			};
		};
	};

	class TWC_Backpack_1990_Minimi: UK3CB_BAF_B_Kitbag_DPMW
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Box_Stanag_T
			{
				magazine = "UK3CB_BAF_556_200Rnd_T";
				count = 3;
			};
		};
	};

	class TWC_Backpack_1990_Minimi_webbing: twc_dpm_belt
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Box_Stanag_T
			{
				magazine = "UK3CB_BAF_556_100Rnd_T";
				count = 3;
			};
		};
	};

	class TWC_Backpack_1990_Minimi_d_webbing: twc_ddpm_belt
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Box_Stanag_T
			{
				magazine = "UK3CB_BAF_556_100Rnd_T";
				count = 3;
			};
		};
	};

	class TWC_Backpack_2000_2IC: UK3CB_BAF_B_Carryall_DPMW
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Box_Stanag_T
			{
				magazine = "UK3CB_BAF_556_200Rnd_T";
				count = 2;
			};
			
            class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 8;
			};
		};
	};

	class TWC_Backpack_2000_machineGunner: twc_dpm_belt
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Belt_762
			{
				magazine = "UK3CB_BAF_762_100Rnd_T";
				count = 2;
			};
			
		};
	};

	class TWC_Backpack_2000_machineGunner_ass: UK3CB_BAF_B_Kitbag_DPMW
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Belt_762
			{
				magazine = "UK3CB_BAF_762_100Rnd_T";
				count = 4;
			};
			
		};
	};
	class TWC_Backpack_2000_grenadier_webbing: twc_dpm_belt
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 4;
			};
			class _xx_Stanag_T
			{
				magazine = "UK3CB_BAF_556_30Rnd_T";
				count = 2;
			};
			class _xx_40mm
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 10;
			};
		};
	};
	class TWC_Backpack_2000_grenadier_d_webbing: twc_ddpm_belt
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 4;
			};
			class _xx_Stanag_T
			{
				magazine = "UK3CB_BAF_556_30Rnd_T";
				count = 2;
			};
			class _xx_40mm
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 10;
			};
		};
	};

	class TWC_Backpack_2000_observer: UK3CB_BAF_B_Bergen_DPMW_JTAC_H_A
	{
		scope = 1;
		class TransportMagazines
		{
			
            class _xx_smoke_1
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 6;
			};
            class _xx_smoke_4
			{
				magazine = "1Rnd_SmokeRed_Grenade_shell";
				count = 5;
			};
			
            class _xx_smoke_5
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 5;
			};
			
            class _xx_smoke_6
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 5;
			};
		};
		class TransportItems
		{
			class _xx_PRC_117F
			{
				name = "ACRE_PRC117F";
				count = 1;
			};
		};
	};
	
////////////////////////////// British Desert Camo  //////////////////////////////
	
	class UK3CB_BAF_B_Bergen_DDPM_SL_A;
	class UK3CB_BAF_B_Bergen_DDPM_Rifleman_A;
	class UK3CB_BAF_B_Bergen_DDPM_Rifleman_B;
	class UK3CB_BAF_B_Carryall_DDPM;
	class UK3CB_BAF_B_Kitbag_DDPM;
	class rhsusf_assault_eagleaiii_ucp;
	class CUP_B_Bergen_BAF;
	class B_Kitbag_cbr;
	
	class TWC_Backpack_1990_Sectionlead_Desert: twc_genbackPack_tan
	{
		scope = 1;
		mass = 59.84;
		class TransportItems
		{
			class _xx_PRC_117F
			{
				name = "ACRE_PRC117F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 3;
			};
			class _xx_Smoke_Red
			{
				magazine = "SmokeShellRed";
				count = 2;
			};
			class _xx_Smoke_Green
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_Smoke_Yellow
			{
				magazine = "SmokeShellYellow";
				count = 2;
			};
		};
	};
	class TWC_Backpack_1990_2IC_Desert: B_Carryall_cbr
	{
		scope = 1;
		class TransportMagazines
		{
            class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 8;
			};
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 2;
			};			
		};
	};
	class TWC_Backpack_1990_Rifleman_Desert: UK3CB_BAF_B_Bergen_DDPM_Rifleman_B
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 4;
			};
			class _xx_Stanag_T
			{
				magazine = "UK3CB_BAF_556_30Rnd_T";
				count = 3;
			};
		};
	};
	class TWC_Backpack_1990_Gunner_Desert: twc_AlicePack_tan
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 12;
			};
			class _xx_Stanag_T
			{
				magazine = "UK3CB_BAF_556_30Rnd_T";
				count = 8;
			};
		};
	};
		class TWC_Backpack_1990_machineGunner_Desert: UK3CB_BAF_B_Bergen_DDPM_Rifleman_B
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Stanag
			{
				magazine = "UK3CB_BAF_762_200Rnd";
				count = 2;
			};
		};
	};
	class TWC_Backpack_1990_Platoon_Command_Desert: UK3CB_BAF_B_Bergen_DDPM_SL_A
	{
		scope = 1;
		mass = 59.84;
		class TransportItems
		{
			class _xx_PRC_117F
			{
				name = "ACRE_PRC117F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 3;
			};
			class _xx_Smoke_Red
			{
				magazine = "SmokeShellRed";
				count = 2;
			};
			class _xx_Smoke_Green
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_Smoke_Yellow
			{
				magazine = "SmokeShellYellow";
				count = 2;
			};
		};
	};
	class TWC_Backpack_1990_Platoon_Sergeant_Desert: UK3CB_BAF_B_Kitbag_TAN
	{
		scope = 1;
		mass = 59.84;
		maximumLoad = 500;
		class TransportItems
		{
			class _xx_PRC_117F
			{
				name = "ACRE_PRC117F";
				count = 1;
			};
			class _xx_Wire_Cutters
			{
				name = "ACE_wirecutter";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 3;
			};
			class _xx_Smoke_Red
			{
				magazine = "SmokeShellRed";
				count = 2;
			};
			class _xx_Smoke_Green
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_Smoke_Yellow
			{
				magazine = "SmokeShellYellow";
				count = 2;
			};
			class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 20;
			};
		};
	};
	class TWC_Backpack_1990_Medic_Desert: CUP_B_GER_Medic_Desert
	{
		scope = 1;
		class TransportItems
		{
            class _xx_Bandage
			{
				name = "ACE_fieldDressing";
				count = 12;
			};
			class _xx_Morphine
			{
				name = "ACE_morphine";
				count = 10;
			};
			class _xx_ACE_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 15;
			};
			class _xxACE_quikclot
			{
				name = "ACE_quikclot";
				count = 6;
			};
			class _xxACE_adenosine
			{
				name = "ACE_adenosine";
				count = 4;
			};
			class _xxACE_atropine
			{
				name = "ACE_atropine";
				count = 4;
			};
			class _xxACE_epinephrine
			{
				name = "ACE_epinephrine";
				count = 10;
			};
			class _xxACE_packingBandage
			{
				name = "ACE_packingBandage";
				count = 15;
			};
			class _xxACE_surgKit
			{
				name = "TWC_Item_Medical_SutureKit_20";
				count = 1;
			};
			class _xxACE_personalAidKit
			{
				name = "ACE_personalAidKit";
				count = 1;
			};
			class _xxACE_salineIV_500
			{
				name = "ACE_salineIV_500";
				count = 6;
			};
			class _xxACE_tourniquet
			{
				name = "ACE_tourniquet";
				count = 4;
			};
		};
		class TransportMagazines
		{
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 3;
			};
		};
	};
	
	class TWC_Backpack_2000_quartermaster: twc_dpm_belt
	{
		scope = 1;
		class TransportItems
		{
			class _xx_PRC_117F
			{
				name = "ACRE_PRC117F";
				count = 1;
			};

		};
	};
	
	class TWC_Backpack_1990_quartermaster: twc_oli_belt
	{
		scope = 1;
		class TransportItems
		{
			class _xx_PRC_117F
			{
				name = "ACRE_PRC117F";
				count = 1;
			};

		};
	};
	
	class TWC_Backpack_1990_quartermaster_desert: twc_tan_belt
	{
		scope = 1;
		class TransportItems
		{
			class _xx_PRC_117F
			{
				name = "ACRE_PRC117F";
				count = 1;
			};

		};
	};

////////////////////////////// US Woodland Camo  //////////////////////////////
	
	class twc_men_1990_us_w_backpack_squadlead: twc_AlicePack_green
	{
		scope = 1;
		class TransportItems
		{
			class _xx_PRC_117F
			{
				name = "ACRE_PRC117F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 3;
			};
			class _xx_Smoke_Red
			{
				magazine = "SmokeShellRed";
				count = 2;
			};
			class _xx_Smoke_Green
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_Smoke_Yellow
			{
				magazine = "SmokeShellYellow";
				count = 2;
			};
			class _xx_CUP_1Rnd_HE_M203
			{
				magazine = "CUP_1Rnd_HE_M203";
				count = 14;				
			};
			class _xx_CUP_1Rnd_SmokeRed_M203
			{
				magazine = "CUP_1Rnd_SmokeRed_M203";
				count = 2;				
			};
			class _xx_CUP_1Rnd_SmokeGreen_M203
			{
				magazine = "CUP_1Rnd_SmokeGreen_M203";
				count = 2;				
			};
			class _xx_CUP_1Rnd_SmokeYellow_M203
			{
				magazine = "CUP_1Rnd_SmokeYellow_M203";
				count = 2;				
			};
			class _xx_CUP_1Rnd_Smoke_M203
			{
				magazine = "CUP_1Rnd_Smoke_M203";
				count = 6;				
			};
		};		
	};
	class CUP_B_AlicePack_OD;
	class twc_men_1990_us_w_backpack_teamlead: CUP_B_AlicePack_OD
	{
		scope = 1;
		class TransportMagazines
		{
            class _xx_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 8;
			};
			class _xx_Stanag_T
			{
				magazine = "30Rnd_556x45_Stanag_Tracer_Red";
				count = 4;
			};
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_CUP_1Rnd_HE_M203
			{
				magazine = "CUP_1Rnd_HE_M203";
				count = 14;				
			};
			class _xx_CUP_1Rnd_SmokeRed_M203
			{
				magazine = "CUP_1Rnd_SmokeRed_M203";
				count = 2;				
			};
			class _xx_CUP_1Rnd_SmokeGreen_M203
			{
				magazine = "CUP_1Rnd_SmokeGreen_M203";
				count = 2;				
			};
			class _xx_CUP_1Rnd_SmokeYellow_M203
			{
				magazine = "CUP_1Rnd_SmokeYellow_M203";
				count = 2;				
			};
			class _xx_CUP_1Rnd_Smoke_M203
			{
				magazine = "CUP_1Rnd_Smoke_M203";
				count = 6;				
			};			
		};		
	};
	class twc_men_1990_us_w_backpack_rifleman: CUP_B_AlicePack_OD
	{
		scope = 1;
		class TransportMagazines
		{
            class _xx_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 16;
			};
			class _xx_Stanag_T
			{
				magazine = "30Rnd_556x45_Stanag_Tracer_Red";
				count = 8;
			};
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 2;
			};	
		};
	};
	class twc_men_1990_us_w_backpack_autorifleman: CUP_B_AlicePack_OD
	{
		scope = 1;
		class TransportMagazines
		{
            class _xx_Stanag
			{
				magazine = "rhs_200rnd_556x45_T_SAW";
				count = 6;
			};
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 2;
			};	
		};
	};
	
	
	// 2000's

	class TWC_Backpack_2000_Sectionlead_Desert: UK3CB_BAF_B_Kitbag_TAN
	{
		scope = 1;
		mass = 59.84;
		class TransportItems
		{
			class _xx_PRC_117F
			{
				name = "ACRE_PRC117F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 3;
			};
			class _xx_Smoke_Red
			{
				magazine = "SmokeShellRed";
				count = 2;
			};
			class _xx_Smoke_Green
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_Smoke_Yellow
			{
				magazine = "SmokeShellYellow";
				count = 2;
			};
		};
	};
	
	
		class TWC_Backpack_2000_2IC_Desert: UK3CB_BAF_B_Carryall_TAN
	{
		scope = 1;
		class TransportMagazines
		{
            class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 4;
			};
			            class _xx_Stanag_T
			{
				magazine = "UK3CB_BAF_556_30Rnd_T";
				count = 4;
			};
			class _xx_Box_Stanag_T
			{
				magazine = "UK3CB_BAF_556_200Rnd_T";
				count = 2;
			};
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 2;
			};	
			class _xx_40mm
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 3;
			};		
		};
	};

		class TWC_Backpack_2000_Minimi_D: UK3CB_BAF_B_Kitbag_TAN
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Box_Stanag_T
			{
				magazine = "UK3CB_BAF_556_200Rnd_T";
				count = 4;
			};
		};
	};

		class TWC_Backpack_2000_gren_D: UK3CB_BAF_B_Kitbag_DDPM
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Stanag_T
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 6;
			};
			class _xx_40mm
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 10;
			};
		};
	};

		class TWC_Backpack_2000_rif_D: twc_AlicePack_tan
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Stanag_T
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 12;
			};
			class _xx_Box_Stanag_T
			{
				magazine = "UK3CB_BAF_556_200Rnd_T";
				count = 2;
			};
			class _xx_Belt_762_t
			{
				magazine = "UK3CB_BAF_762_100Rnd_T";
				count = 2;
			};
		};
	};
	
		class TWC_Backpack_2000_GPMG_D: twc_AlicePack_tan
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Belt_762_t
			{
				magazine = "UK3CB_BAF_762_100Rnd_T";
				count = 5;
			};
		};
	};
	
			class TWC_Backpack_2000_GPMG_ass_d: UK3CB_BAF_B_Kitbag_TAN
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Belt_762_t
			{
				magazine = "UK3CB_BAF_762_100Rnd_T";
				count = 4;
			};
		};
	};
	
		class TWC_Backpack_2000_sniper_D: twc_back_webbing
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_mag_762
			{
				magazine = "UK3CB_BAF_762_L42A1_10Rnd";
				count = 6;
			};
		};
		class TransportItems
		{
			class _xx_PRC_117F
			{
				name = "ACRE_PRC117F";
				count = 1;
			};
		};
	};
	
	class TWC_Backpack_2000_Medic: UK3CB_BAF_B_Kitbag_TAN
	{
		scope = 1;
		class TransportItems
		{
            class _xx_Bandage
			{
				name = "ACE_fieldDressing";
				count = 12;
			};
			class _xx_Morphine
			{
				name = "ACE_morphine";
				count = 10;
			};
			class _xx_ACE_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 15;
			};
			class _xxACE_quikclot
			{
				name = "ACE_quikclot";
				count = 6;
			};
			class _xxACE_adenosine
			{
				name = "ACE_adenosine";
				count = 4;
			};
			class _xxACE_atropine
			{
				name = "ACE_atropine";
				count = 4;
			};
			class _xxACE_epinephrine
			{
				name = "ACE_epinephrine";
				count = 10;
			};
			class _xxACE_packingBandage
			{
				name = "ACE_packingBandage";
				count = 15;
			};
			class _xxACE_surgKit
			{
				name = "TWC_Item_Medical_SutureKit_20";
				count = 1;
			};
			class _xxACE_personalAidKit
			{
				name = "ACE_personalAidKit";
				count = 1;
			};
			class _xxACE_salineIV_500
			{
				name = "ACE_salineIV_500";
				count = 6;
			};
			class _xxACE_salineIV_250
			{
				name = "ACE_salineIV_250";
				count = 6;
			};
			class _xxACE_tourniquet
			{
				name = "ACE_tourniquet";
				count = 4;
			};
		};
		class TransportMagazines
		{
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 3;
			};
		};
	};


			class TWC_Backpack_2000_vehicle: rhsusf_assault_eagleaiii_ucp
	{
		scope = 1;
		class TransportItems
		{
			class _xx_PRC_117F
			{
				name = "ACRE_PRC117F";
				count = 1;
			};
		};
	};
	
	