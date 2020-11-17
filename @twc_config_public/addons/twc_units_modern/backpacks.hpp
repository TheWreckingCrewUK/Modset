	class UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D;
	class UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C;
	class UK3CB_BAF_B_Bergen_MTP_SL_L_A;
	class UK3CB_BAF_B_Kitbag_MTP;
	class UK3CB_BAF_B_Carryall_MTP;
	class UK3CB_BAF_B_Bergen_MTP_Medic_L_A;
	class UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A;
	class UK3CB_BAF_B_Bergen_MTP_JTAC_L_A;
	class UK3CB_BAF_B_Bergen_TAN_Rifleman_B;
	class UK3CB_BAF_B_Bergen_MTP_Radio_L_A;
	class B_AssaultPack_rgr;
	class UK3CB_BAF_B_Bergen_MTP_PointMan_L_A;
	class CUP_B_RPGPack_Khaki;
	class CUP_B_CivPack_WDL;
	class CUP_B_AlicePack_Khaki;
	class UK3CB_BAF_B_Bergen_OLI_SL_A;
	class CUP_B_SLA_Medicbag;
	class UK3CB_BAF_B_Carryall_OLI;
	class CUP_B_ACRScout_m95;
	class UK3CB_BAF_B_Kitbag_OLI;
	class CUP_B_Kombat_Radio_Olive;
	class CUP_B_GER_Medic_Tropentarn;
	class CUP_B_GER_Medic_FLecktarn;
	class UK3CB_BAF_B_Bergen_MTP_Medic_H_B;
	class UK3CB_BAF_B_Bergen_MTP_Rifleman_H_A;
	class UK3CB_BAF_B_Bergen_MTP_Rifleman_XL_A;
	class UK3CB_BAF_B_Bergen_MTP_SL_H_A;
	
	
	
	class ger_backpack_medic_trp: CUP_B_GER_Medic_Tropentarn
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
				count = 4;
			};
		};
	};
	
	class TWC_Backpack_UKSF_Medic_H: UK3CB_BAF_B_Bergen_MTP_Medic_H_B
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
				count = 4;
			};
		};
	};

	
	class TWC_Backpack_UKSF_SL_H: UK3CB_BAF_B_Bergen_MTP_SL_H_A
	{
		class TransportItems
		{
			class _xx_cabletie
			{
				name = "ACE_CableTie";
				count = 10;
			};
			class _xx_defusal
			{
				name = "ACE_DefusalKit";
				count = 1;
			};
			class _xx_chemblue
			{
				name = "Chemlight_blue";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_stanag
			{
				magazine = "CUP_30Rnd_556x45_Emag";
				count = 10;
			};
			class _xx_stanag_Red
			{
				magazine = "CUP_30Rnd_556x45_Emag_Tracer_Red";
				count = 5;
			};
		};
	};
	
	class TWC_Backpack_UKSF_Rifleman: UK3CB_BAF_B_Bergen_MTP_Rifleman_H_A
	{
		class TransportItems
		{
			class _xx_cabletie
			{
				name = "ACE_CableTie";
				count = 10;
			};
			class _xx_defusal
			{
				name = "ACE_DefusalKit";
				count = 1;
			};
			class _xx_chemblue
			{
				name = "Chemlight_blue";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_stanag
			{
				magazine = "CUP_30Rnd_556x45_Emag";
				count = 10;
			};
			class _xx_stanag_Red
			{
				magazine = "CUP_30Rnd_556x45_Emag_Tracer_Red";
				count = 5;
			};
		};
	};

	
	class TWC_Backpack_UKSF_Marksman: UK3CB_BAF_B_Bergen_MTP_Rifleman_H_A
	{
		class TransportItems
		{
			class _xx_cabletie
			{
				name = "ACE_CableTie";
				count = 10;
			};
			class _xx_defusal
			{
				name = "ACE_DefusalKit";
				count = 1;
			};
			class _xx_chemblue
			{
				name = "Chemlight_blue";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_stanag
			{
				magazine = "UK3CB_BAF_762_L42A1_20Rnd";
				count = 10;
			};
			class _xx_stanag_Red
			{
				magazine = "UK3CB_BAF_762_L42A1_20Rnd_T";
				count = 5;
			};
		};
	};

	
	class TWC_Backpack_UKSF_2IC: UK3CB_BAF_B_Carryall_OLI
	{
		class TransportItems
		{
			class _xx_cabletie
			{
				name = "ACE_CableTie";
				count = 10;
			};
			class _xx_defusal
			{
				name = "ACE_DefusalKit";
				count = 1;
			};
			class _xx_chemblue
			{
				name = "Chemlight_blue";
				count = 5;
			};
			class _xx_chemgreen
			{
				name = "Chemlight_green";
				count = 5;
			};
			class _xx_irstrobe
			{
				name = "ACE_IR_Strobe_Item";
				count = 2;
			};
			class _xx_shovel
			{
				name = "ACE_EntrenchingTool";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_762
			{
				magazine = "UK3CB_BAF_762_L42A1_20Rnd_T";
				count = 6;
			};
			class _xx_stanag
			{
				magazine = "CUP_30Rnd_556x45_Emag";
				count = 12;
			};
			class _xx_stanag_Red
			{
				magazine = "CUP_30Rnd_556x45_Emag_Tracer_Red";
				count = 5;
			};
			class _xx_Smoke_Green
			{
				magazine = "SmokeShellGreen";
				count = 3;
			};
		};
		class TransportWeapons
		{
			class _xx_vector
			{
				weapon = "ACE_Vector";
				count = 1;
			};
		};
	};

	
	class TWC_Backpack_UKSF_2IC_H: UK3CB_BAF_B_Bergen_MTP_Rifleman_XL_A
	{
		class TransportItems
		{
			class _xx_cabletie
			{
				name = "ACE_CableTie";
				count = 10;
			};
			class _xx_defusal
			{
				name = "ACE_DefusalKit";
				count = 1;
			};
			class _xx_chemblue
			{
				name = "Chemlight_blue";
				count = 5;
			};
			class _xx_chemgreen
			{
				name = "Chemlight_green";
				count = 5;
			};
			class _xx_irstrobe
			{
				name = "ACE_IR_Strobe_Item";
				count = 2;
			};
			class _xx_shovel
			{
				name = "ACE_EntrenchingTool";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_762
			{
				magazine = "UK3CB_BAF_762_L42A1_20Rnd_T";
				count = 6;
			};
			class _xx_stanag
			{
				magazine = "CUP_30Rnd_556x45_Emag";
				count = 12;
			};
			class _xx_stanag_Red
			{
				magazine = "CUP_30Rnd_556x45_Emag_Tracer_Red";
				count = 5;
			};
			class _xx_Smoke_Green
			{
				magazine = "SmokeShellGreen";
				count = 4;
			};
		};
	};
	
	
	class ger_backpack_medic_flk: CUP_B_GER_Medic_FLecktarn
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
				count = 4;
			};
		};
	};

	
		class ger_backpack_leader: CUP_B_Kombat_Radio_Olive
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
				count = 2;
			};
			class _xx_Smoke_Red
			{
				magazine = "SmokeShellRed";
				count = 3;
			};
			class _xx_Smoke_Green
			{
				magazine = "SmokeShellGreen";
				count = 3;
			};
			class _xx_Smoke_Blue
			{
				magazine = "SmokeShellBlue";
				count = 3;
			};
			class _xx_stanag
			{
				magazine = "CUP_30Rnd_556x45_G36";
				count = 10;
			};
		};
		
	};

	class UK3CB_BAF_B_Bergen_TAN_SL_A;
	class ger_backpack_leader_d: UK3CB_BAF_B_Bergen_TAN_SL_A
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
				count = 2;
			};
			class _xx_Smoke_Red
			{
				magazine = "SmokeShellRed";
				count = 3;
			};
			class _xx_Smoke_Green
			{
				magazine = "SmokeShellGreen";
				count = 3;
			};
			class _xx_Smoke_Blue
			{
				magazine = "SmokeShellBlue";
				count = 3;
			};
			class _xx_stanag
			{
				magazine = "CUP_30Rnd_556x45_G36";
				count = 10;
			};
		};
		
	};
	
	class ger_backpack_2ic: UK3CB_BAF_B_Carryall_OLI
	{
		scope = 1;
		

		class TransportMagazines
		{
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_Smoke_Red
			{
				magazine = "SmokeShellRed";
				count = 3;
			};
			class _xx_Smoke_Green
			{
				magazine = "SmokeShellGreen";
				count = 3;
			};
			class _xx_Smoke_Blue
			{
				magazine = "SmokeShellBlue";
				count = 3;
			};
			class _xx_stanag
			{
				magazine = "CUP_30Rnd_556x45_G36";
				count = 15;
			};
			class _xx_40mm
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 10;
			};
		};
		
	};
	class UK3CB_BAF_B_Carryall_TAN;
	class ger_backpack_2ic_d: UK3CB_BAF_B_Carryall_TAN
	{
		scope = 1;
		

		class TransportMagazines
		{
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_Smoke_Red
			{
				magazine = "SmokeShellRed";
				count = 3;
			};
			class _xx_Smoke_Green
			{
				magazine = "SmokeShellGreen";
				count = 3;
			};
			class _xx_Smoke_Blue
			{
				magazine = "SmokeShellBlue";
				count = 3;
			};
			class _xx_stanag
			{
				magazine = "CUP_30Rnd_556x45_G36";
				count = 15;
			};
			class _xx_40mm
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 10;
			};
		};
		
	};

	class CUP_B_GER_Pack_Tropentarn;
	class ger_backpack_rif_trp: CUP_B_GER_Pack_Tropentarn
	{
		scope = 1;
		
		class TransportMagazines
		{
			class _xx_mag
			{
				magazine = "CUP_30Rnd_556x45_G36";
				count = 8;
			};

		};
		class TransportItems
		{
			class _xx_shovel
			{
				name = "ACE_EntrenchingTool";
				count = 1;
			};
		};
		
	};
	class ger_backpack_at_trp: CUP_B_GER_Pack_Tropentarn
	{
		scope = 1;
		
		class TransportMagazines
		{
			class _xx_mag
			{
				magazine = "CUP_30Rnd_556x45_G36";
				count = 5;
			};
			class _xx_rocket
			{
				magazine = "rhs_mag_maaws_HEDP";
				count = 2;
			};

		};
		
	};

	class CUP_B_GER_Pack_Flecktarn;
	class ger_backpack_rif_flk: CUP_B_GER_Pack_Flecktarn
	{
		scope = 1;
		
		class TransportMagazines
		{
			class _xx_mag
			{
				magazine = "CUP_30Rnd_556x45_G36";
				count = 5;
			};
			class _xx_rocket
			{
				magazine = "rhs_mag_maaws_HEDP";
				count = 2;
			};

		};
		
	};
	class ger_backpack_at_flk: CUP_B_GER_Pack_Flecktarn
	{
		scope = 1;
		
		class TransportMagazines
		{
			class _xx_mag
			{
				magazine = "rhs_mag_maaws_HEDP";
				count = 2;
			};

		};
		
	};
	
	
	class ger_backpack_mg: UK3CB_BAF_B_Kitbag_OLI
	{
		scope = 1;
		
		class TransportMagazines
		{
			class _xx_pkm
			{
				magazine = "UK3CB_BAF_762_200Rnd_T";
				count = 2;
			};
			
		};
		
	};
	
	class twc_genbackPack_tan;
	class ger_backpack_mg_d: twc_genbackPack_tan
	{
		scope = 1;
		
		class TransportMagazines
		{
			class _xx_pkm
			{
				magazine = "UK3CB_BAF_762_200Rnd_T";
				count = 2;
			};
			
		};
		
	};
	
	
	
	class twc_ussf_scoutpack: CUP_B_ACRScout_m95
	{
		hiddenselectionstextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_mtp_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\data_f\default.rvmat"};
		displayname = "Scout Pack (Multicam)";
		class TransportItems
		{
			class _xx_cabletie
			{
				name = "ACE_CableTie";
				count = 5;
			};
			class _xx_fdressing
			{
				name = "ACE_fieldDressing";
				count = 5;
			};
			class _xx_pdressing
			{
				name = "ACE_packingBandage";
				count = 5;
			};
			class _xx_chemblue
			{
				name = "Chemlight_blue";
				count = 3;
			};
			class _xx_chemred
			{
				name = "Chemlight_red";
				count = 3;
			};
			class _xx_chemgreen
			{
				name = "Chemlight_green";
				count = 3;
			};
			class _xx_torch
			{
				name = "ACE_Flashlight_XL50";
				count = 1;
			};
			class _xx_shovel
			{
				name = "ACE_EntrenchingTool";
				count = 1;
			};
			class _xx_defusal
			{
				name = "ACE_DefusalKit";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_Smoke_blue
			{
				magazine = "SmokeShellBlue";
				count = 2;
			};
		};
	};
	
	
	class pol_backpack_rif: CUP_B_ACRScout_m95
	{
	scope = 1;
	hiddenselectionstextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_oli_co.paa"};
	hiddenSelectionsMaterials[] = {"\A3\data_f\default.rvmat"};
		
		class TransportMagazines
		{
			class _xx_mag
			{
				magazine = "twc_rhsgref_30rnd_556x45_m21";
				count = 5;
			};

		};
		
	};
	
	class rus_backpack_rif: CUP_B_ACRScout_m95
	{
	scope = 1;
	hiddenselectionstextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_oli_co.paa"};
	hiddenSelectionsMaterials[] = {"\A3\data_f\default.rvmat"};
		
		class TransportMagazines
		{
			class _xx_mag
			{
				magazine = "twc_rhsgref_30rnd_556x45_m21";
				count = 5;
			};

		};
		
	};
	
	
	class pol_backpack_rpg: CUP_B_RPGPack_Khaki
	{
		scope = 1;
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_oli_co.paa","uk3cb_baf_equipment\backpacks\data\backpack_oli_co.paa"};
		
		class TransportMagazines
		{
			class _xx_og7
			{
				magazine = "rhs_rpg7_PG7VL_mag";
				count = 1;
			};
			
			class _xx_pg7
			{
				magazine = "rhs_rpg7_TBG7V_mag";
				count = 1;
			};
		};
		
	};
	
	
	
	
	class pol_backpack_mg: UK3CB_BAF_B_Kitbag_OLI
	{
		scope = 1;
		
		class TransportMagazines
		{
			class _xx_pkm
			{
				magazine = "rhs_100Rnd_762x54mmR_green";
				count = 4;
			};
			
		};
		
	};
	
		class pol_backpack_leader: UK3CB_BAF_B_Bergen_OLI_SL_A
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
				count = 2;
			};
			class _xx_Smoke_Red
			{
				magazine = "SmokeShellRed";
				count = 3;
			};
			class _xx_Smoke_Green
			{
				magazine = "SmokeShellGreen";
				count = 3;
			};
			class _xx_Smoke_Blue
			{
				magazine = "SmokeShellBlue";
				count = 3;
			};
		};
		
	};
	
	class rus_backpack_2ic: UK3CB_BAF_B_Carryall_OLI
	{
		scope = 1;
		

		class TransportMagazines
		{
			class _xx_stanag
			{
				magazine = "rhs_30Rnd_545x39_7N6M_plum_AK";
				count = 5;
			};
			class _xx_m21
			{
				magazine = "rhs_100Rnd_762x54mmR_green";
				count = 2;
			};
			class _xx_40mm_smoke_white
			{
				magazine = "rhs_GRD40_White";
				count = 5;
			};
			class _xx_40mm_smoke_red
			{
				magazine = "rhs_GRD40_Red";
				count = 5;
			};
			class _xx_40mm_smoke_green
			{
				magazine = "rhs_GRD40_Green";
				count = 5;
			};
			class _xx_40mm
			{
				magazine = "rhs_VOG25";
				count = 20;
			};
		};
		
	};
	
	class rus_backpack_sniper: CUP_B_CivPack_WDL
	{
		scope = 1;
		

		class TransportWeapons
		{
			class _xx_rifle
			{
				weapon = "twc_weap_ak105_sniper";
				count = 1;
			};
		};

		class TransportMagazines
		{
			class _xx_stanag
			{
				magazine = "CUP_20Rnd_545x39_AKSU_M";
				count = 7;
			};
			class _xx_svd
			{
				magazine = "10Rnd_762x54_Mag";
				count = 10;
			};
		};
		
	};
	class rhs_assault_umbts;
	class rus_backpack_MG: rhs_assault_umbts
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_stanag
			{
				magazine = "rhs_100Rnd_762x54mmR_green";
				count = 3;
			};
		};
	};
	
	class rus_backpack_spotter: CUP_B_CivPack_WDL
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_stanag
			{
				magazine = "10Rnd_762x54_Mag";
				count = 10;
			};
			class _xx_stanag_t
			{
				magazine = "ACE_10Rnd_762x54_Tracer_mag";
				count = 10;
			};
		};
	};
	
	class twc_scoutpack_olive;
	class rus_scoutpack_rifleman: twc_scoutpack_olive
	{
		scope = 1;
		

		class TransportMagazines
		{
			class _xx_stanag
			{
				magazine = "rhs_30Rnd_545x39_AK_plum_green";
				count = 3;
			};
		};
		class TransportItems
		{
			class _xx_defusal
			{
				name = "ACE_DefusalKit";
				count = 1;
			};
			class _xx_bandage
			{
				name = "ACE_fieldDressing";
				count = 7;
			};
			class _xx_quikclot
			{
				name = "ACE_quikclot";
				count = 7;
			};
		};
		
	};
	class rus_scoutpack_marksman: twc_scoutpack_olive
	{
		scope = 1;
		

		class TransportItems
		{
			class _xx_defusal
			{
				name = "ACE_DefusalKit";
				count = 1;
			};
			class _xx_cutters
			{
				name = "ACE_wirecutter";
				count = 1;
			};
			class _xx_sswt
			{
				name = "ACE_Tripod";
				count = 1;
			};
		};
		
	};
	class rus_sso_backpack_2ic: UK3CB_BAF_B_Carryall_OLI
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_stanag
			{
				magazine = "rhs_30Rnd_545x39_7N6M_plum_AK";
				count = 8;
			};
			class _xx_stanag_t
			{
				magazine = "rhs_30Rnd_545x39_AK_plum_green";
				count = 8;
			};
		};
		class TransportItems
		{
			class _xx_defusal
			{
				name = "ACE_DefusalKit";
				count = 1;
			};
			class _xx_bandage
			{
				name = "ACE_fieldDressing";
				count = 10;
			};
			class _xx_quikclot
			{
				name = "ACE_quikclot";
				count = 10;
			};
		};
		
	};
	
	class pol_backpack_2ic: UK3CB_BAF_B_Carryall_OLI
	{
		scope = 1;
		

		class TransportMagazines
		{
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_Smoke_Red
			{
				magazine = "SmokeShellRed";
				count = 3;
			};
			class _xx_Smoke_Green
			{
				magazine = "SmokeShellGreen";
				count = 3;
			};
			class _xx_Smoke_Blue
			{
				magazine = "SmokeShellBlue";
				count = 3;
			};
			class _xx_stanag
			{
				magazine = "twc_rhsgref_30rnd_556x45_m21";
				count = 5;
			};
			class _xx_m21
			{
				magazine = "rhs_100Rnd_762x54mmR_green";
				count = 2;
			};
			class _xx_40mm
			{
				magazine = "rhs_VOG25";
				count = 10;
			};
		};
		
	};

	
	class rhs_medic_bag;
	class rus_backpack_medic: rhs_medic_bag
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
	};
	
	
		class pol_backpack_medic: UK3CB_BAF_B_Kitbag_OLI
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
				count = 4;
			};
		};
	};

	
	
		class nac_backpack_medic: CUP_B_SLA_Medicbag
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
				count = 4;
			};
		};
	};

	
	
	class nac_backpack_rif: CUP_B_CivPack_WDL
	{
		scope = 1;
		
		class TransportMagazines
		{
			class _xx_og7
			{
				magazine = "rhsgref_30rnd_556x45_m21";
				count = 15;
			};

		};
		
	};
	
	class nac_backpack_mg: CUP_B_CivPack_WDL
	{
		scope = 1;
		
		class TransportMagazines
		{
			class _xx_pkm
			{
				magazine = "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
				count = 4;
			};
			
		};
		
	};
	
		class nac_backpack_leader: UK3CB_BAF_B_Bergen_OLI_SL_A
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
				count = 2;
			};
			class _xx_Smoke_Red
			{
				magazine = "SmokeShellRed";
				count = 3;
			};
			class _xx_Smoke_Green
			{
				magazine = "SmokeShellGreen";
				count = 3;
			};
			class _xx_Smoke_Blue
			{
				magazine = "SmokeShellBlue";
				count = 3;
			};
		};
		
	};
	
			class nac_backpack_2ic: UK3CB_BAF_B_Carryall_OLI
	{
		scope = 1;
		

		class TransportMagazines
		{
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_Smoke_Red
			{
				magazine = "SmokeShellRed";
				count = 3;
			};
			class _xx_Smoke_Green
			{
				magazine = "SmokeShellGreen";
				count = 3;
			};
			class _xx_Smoke_Blue
			{
				magazine = "SmokeShellBlue";
				count = 3;
			};
			class _xx_stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 5;
			};
			class _xx_m21
			{
				magazine = "rhsgref_30rnd_556x45_m21";
				count = 15;
			};
			class _xx_40mm
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 10;
			};
		};
		
	};

	
	class ANA_Backpack_Modern_terp: CUP_B_SLA_Medicbag
	{
		scope = 1;
		class TransportItems
		{
			class _xx_PRC_117F
			{
				name = "ACRE_PRC152";
				count = 1;
			};
		};
	};

	class ana_backpack_medic: CUP_B_SLA_Medicbag
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
				count = 4;
			};
		};
	};

	
	class ana_backpack_rpg: CUP_B_RPGPack_Khaki
	{
		scope = 1;
		
		class TransportMagazines
		{
			class _xx_og7
			{
				magazine = "rhs_rpg7_OG7V_mag";
				count = 3;
			};
			
			class _xx_pg7
			{
				magazine = "rhs_rpg7_PG7V_mag";
				count = 2;
			};
		};
		
	};
	
	class ana_backpack_mg: CUP_B_AlicePack_Khaki
	{
		scope = 1;
		
		class TransportMagazines
		{
			class _xx_pkm
			{
				magazine = "rhs_100Rnd_762x54mmR_green";
				count = 4;
			};
			
		};
		
	};
	
		class ana_backpack_leader: CUP_B_AlicePack_Khaki
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
				count = 2;
			};
			class _xx_Smoke_Red
			{
				magazine = "SmokeShellRed";
				count = 3;
			};
			class _xx_Smoke_Green
			{
				magazine = "SmokeShellGreen";
				count = 3;
			};
			class _xx_Smoke_Blue
			{
				magazine = "SmokeShellBlue";
				count = 3;
			};
		};
		
	};
	
			class ana_backpack_2ic: UK3CB_BAF_B_Carryall_OLI
	{
		scope = 1;
		

		class TransportMagazines
		{
			class _xx_mags
			{
				magazine = "rhs_30Rnd_762x39mm";
				count = 10;
			};
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_Smoke_Red
			{
				magazine = "SmokeShellRed";
				count = 3;
			};
			class _xx_Smoke_Green
			{
				magazine = "SmokeShellGreen";
				count = 3;
			};
			class _xx_Smoke_Blue
			{
				magazine = "SmokeShellBlue";
				count = 3;
			};
		};
		
	};

	
	
	class TWC_Backpack_Modern_Sectionlead: UK3CB_BAF_B_Bergen_MTP_SL_L_A
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
				count = 2;
			};
			class _xx_Smoke_Red
			{
				magazine = "SmokeShellRed";
				count = 3;
			};
			class _xx_Smoke_Green
			{
				magazine = "SmokeShellGreen";
				count = 3;
			};
			class _xx_Smoke_Blue
			{
				magazine = "SmokeShellBlue";
				count = 3;
			};
		};
	};
	
	class TWC_Backpack_Modern_quartermaster: UK3CB_BAF_B_Bergen_TAN_Rifleman_B
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
				count = 2;
			};
			class _xx_Smoke_Red
			{
				magazine = "SmokeShellRed";
				count = 3;
			};
			class _xx_Smoke_Green
			{
				magazine = "SmokeShellGreen";
				count = 3;
			};
			class _xx_Smoke_Blue
			{
				magazine = "SmokeShellBlue";
				count = 3;
			};
		};
	};
	
	class TWC_Backpack_Modern_Rifleman_heavy: UK3CB_BAF_B_Bergen_MTP_Rifleman_H_A
	{
		scope = 1;
		mass = 64;
		class TransportItems
		{
			class _xx_satchel
			{
				name = "SatchelCharge_Remote_Mag";
				count = 1;
			};
			class _xx_det
			{
				name = "ACE_Clacker";
				count = 1;
			};
			class _xx_wirecutter
			{
				name = "ACE_wirecutter";
				count = 1;
			};
			class _xx_shovel
			{
				name = "ACE_EntrenchingTool";
				count = 1;
			};
			class _xx_scope
			{
				name = "ACE_SpottingScope";
				count = 1;
			};
			class _xx_sswt
			{
				name = "ACE_Tripod";
				count = 1;
			};
			class _xx_kite
			{
				name = "UK3CB_BAF_Kite";
				count = 1;
			};
			class _xx_chemlight_ir
			{
				name = "ACE_G_Chemlight_IR";
				count = 2;
			};
			class _xx_chemlight_red
			{
				name = "Chemlight_Red";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 1;
			};
		};
	};
	
	class UK3CB_BAF_B_Bergen_MTP_Rifleman_H_B;
	class TWC_Backpack_Modern_AutoRifleman_heavy: UK3CB_BAF_B_Bergen_MTP_Rifleman_H_B
	{
		scope = 1;
		mass = 61;
		class TransportItems
		{
			class _xx_satchel
			{
				name = "SatchelCharge_Remote_Mag";
				count = 1;
			};
			class _xx_det
			{
				name = "ACE_Clacker";
				count = 1;
			};
			class _xx_shovel
			{
				name = "ACE_EntrenchingTool";
				count = 1;
			};
			class _xx_scope
			{
				name = "ACE_SpottingScope";
				count = 1;
			};
			class _xx_sswt
			{
				name = "ACE_Tripod";
				count = 1;
			};
			class _xx_kite
			{
				name = "UK3CB_BAF_Kite";
				count = 1;
			};
			class _xx_chemlight_ir
			{
				name = "ACE_G_Chemlight_IR";
				count = 2;
			};
			class _xx_chemlight_red
			{
				name = "Chemlight_Red";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_box
			{
				magazine = "UK3CB_BAF_556_100Rnd_T";
				count = 2;
			};
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 1;
			};
		};
	};
	
	
	class TWC_Backpack_Modern_Rifleman: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 4;
			};
			class _xx_Stanag_Tracer
			{
				magazine = "UK3CB_BAF_556_30Rnd_T";
				count = 3;
			};
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 1;
			};
			class _xx_Grenade
			{
				magazine = "HandGrenade";
				count = 1;
			};
		};
	};
	class TWC_Backpack_Modern_Grenadier: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C
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
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 1;
			};
			class _xx_Grenade
			{
				magazine = "HandGrenade";
				count = 1;
			};
			class _xx_HE
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 10;
			};
			class _xx_Smoke_White
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 5;
			};
			class _xx_Smoke_Green
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 3;
			};
			class _xx_Smoke_Red
			{
				magazine = "1Rnd_SmokeRed_Grenade_shell";
				count = 3;
			};
			class _xx_Smoke_Blue
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 3;
			};
		};
	};
	class TWC_Backpack_Modern_Autorifleman_Kitbag: UK3CB_BAF_B_Kitbag_MTP
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Box_Stanag_T
			{
				magazine = "UK3CB_BAF_556_200Rnd_T";
				count = 1;
			};
		};
	};
	class TWC_Backpack_Modern_Autorifleman: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Box_Stanag
			{
				magazine = "UK3CB_BAF_556_200Rnd";
				count = 2;
			};
			class _xx_Box_Stanag_T
			{
				magazine = "UK3CB_BAF_556_200Rnd_T";
				count = 1;
			};
		};
	};
	class TWC_Backpack_Modern_2IC_Kitbag: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_Box_Stanag
			{
				magazine = "UK3CB_BAF_556_200Rnd";
				count = 1;
			};
			class _xx_Belt
			{
				magazine = "UK3CB_BAF_762_100Rnd";
				count = 1;
			};
            class _xx_MarksmanMag
			{
				magazine = "UK3CB_BAF_762_L42A1_20Rnd";
				count = 2;
			};
            class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 8;
			};
			class _xx_Stanag_Tracer
			{
				magazine = "UK3CB_BAF_556_30Rnd_T";
				count = 3;
			};			
		};
	};
	class TWC_Backpack_Modern_2IC: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_Box_Stanag
			{
				magazine = "UK3CB_BAF_556_200Rnd";
				count = 1;
			};
			class _xx_Belt
			{
				magazine = "UK3CB_BAF_762_100Rnd";
				count = 1;
			};
            class _xx_MarksmanMag
			{
				magazine = "UK3CB_BAF_762_L42A1_20Rnd";
				count = 2;
			};
            class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 4;
			};			
		};
	};
	class TWC_Backpack_Modern_MachineGunner_Kitbag: UK3CB_BAF_B_Kitbag_MTP
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Belt_T
			{
				magazine = "UK3CB_BAF_762_100Rnd_T";
				count = 2;
			};
		};
	};
	class TWC_Backpack_Modern_MachineGunner: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Belt_T
			{
				magazine = "UK3CB_BAF_762_100Rnd_T";
				count = 2;
			};
		};
	};
	class TWC_Backpack_Marksman: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C
	{
		scope = 1;
		class TransportMagazines
		{
			class TransportMagazines
			{
				class _xx_Belt
				{
					magazine = "UK3CB_BAF_762_100Rnd";
					count = 1;
				};
			};
		};
	};
	class TWC_Backpack_Modern_Platoon_Sergeant: UK3CB_BAF_B_Carryall_MTP
	{
		scope = 1;
		maximumLoad = 500;
		mass = 59.84;
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
				count = 3;
			};
			class _xx_Smoke_Green
			{
				magazine = "SmokeShellGreen";
				count = 3;
			};
			class _xx_Smoke_Blue
			{
				magazine = "SmokeShellBlue";
				count = 3;
			};
		};
	};
	class TWC_Backpack_Platoon_Mortar: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Mortar
			{
				magazine = "UK3CB_BAF_1Rnd_60mm_Mo_Shells";
				count = 9;
			};
		};
	};
	class TWC_Backpack_Modern_Medic: UK3CB_BAF_B_Bergen_MTP_Medic_L_A
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
				count = 4;
			};
		};
	};
	class TWC_Backpack_Modern_MortarGunner: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 5;
			};		
		};
	};
	class TWC_Backpack_Modern_MortarAssistant: UK3CB_BAF_B_Bergen_MTP_SL_L_A
	{
		scope = 1;
		class TransportMagazines
		{
            class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 5;
			};
		};
	};
	
	class twc_mtp_belt;
	class TWC_Backpack_Modern_Sniper: twc_mtp_belt
	{
		scope = 1;
		class TransportItems
		{
			class _xx_rangecard
			{
				name = "ACE_RangeCard";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_Lapua
			{
				magazine = "TWC_5Rnd_338_300gr_HPBT_Mag";
				count = 3;
			};
			class _xx_LapuaAP
			{
				magazine = "TWC_5Rnd_338_API526_Mag";
				count = 2;
			};
		};
	};
	class TWC_Backpack_Modern_Spotter: twc_mtp_belt
	{
		scope = 1;
		class TransportItems
		{

		};
		class TransportMagazines
		{
			class _xx_MarksmanMag
			{
				magazine = "UK3CB_BAF_762_L42A1_20Rnd";
				count = 2;
			};
		};
	};
	class TWC_Backpack_Modern_FAC: UK3CB_BAF_B_Bergen_MTP_JTAC_L_A
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
			class _xx_HE
			{
				magazine = "UK3CB_BAF_1Rnd_HE_Grenade_Shell";
				count = 3;
			};
			class _xx_SmokeShell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 3;
			};
			class _xx_SmokeShell_Red
			{
				magazine = "1Rnd_SmokeRed_Grenade_shell";
				count = 3;
			};
			class _xx_SmokeShell_Green
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 3;
			};
			class _xx_Smoke_Blue
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 3;
			};
			class _xx_SmokeShellPurple
			{
				magazine = "1Rnd_SmokePurple_Grenade_shell";
				count = 3;
			};
		};
	};
	class TWC_Backpack_Modern_HeloPilot: B_AssaultPack_rgr
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
	class TWC_Backpack_Modern_FSTForwardObserver: UK3CB_BAF_B_Bergen_MTP_Radio_L_A
	{
		scope = 1;
		class TransportItems
		{
			class _xx_SpottingScope
			{
				name = "ACE_SpottingScope";
				count = 1;
			};
		};
	};
//////////////////////////////  COIN  //////////////////////////////	
	class TWC_Backpack_Modern_Pointman: UK3CB_BAF_B_Bergen_MTP_PointMan_L_A
	{
		transportMaxWeapons = 2;
		scope = 1;
		class TransportMagazines
		{
            class _xx_Slug
			{
				magazine = "CUP_8Rnd_B_Beneli_74Slug";
				count = 5;
			};
            class _xx_Buck
			{
				magazine = "CUP_8Rnd_B_Beneli_74Pellets";
				count = 7;
			};
		};
		class TransportWeapons
		{
            class _xx_Shotgun
			{
				weapon = "TWC_L128A1_Eotech";
				count = 1;
			};
		};
	};
	class TWC_Backpack_Modern_Coin_2IC: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_Box_Stanag
			{
				magazine = "UK3CB_BAF_556_200Rnd";
				count = 1;
			};
			class _xx_Belt
			{
				magazine = "UK3CB_BAF_762_100Rnd";
				count = 1;
			};
			class _xx_Belt_T
			{
				magazine = "UK3CB_BAF_762_100Rnd_T";
				count = 1;
			};
            class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 2;
			};	
            class _xx_Slug
			{
				magazine = "CUP_8Rnd_B_Beneli_74Slug";
				count = 2;
			};
            class _xx_Buck
			{
				magazine = "CUP_8Rnd_B_Beneli_74Pellets";
				count = 2;
			};		
		};
	};
	
	class TWC_Backpack_Modern_Spotter_coin: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C {
		scope = 1;
		
		class TransportItems {
			class _xx_PRC_117F {
				name = "ACRE_PRC117F";
				count = 1;
			};
			
			class _xx_tripod {
				name = "ACE_Tripod";
				count = 1;
			};
			
			class _xx_Spotting {
				name = "ACE_SpottingScope";
				count = 1;
			};
		};

		class TransportMagazines
		{
			class _xx_338
			{
				magazine = "TWC_5Rnd_338_300gr_HPBT_Mag";
				count = 5;
			};
			class _xx_762
			{
				magazine = "UK3CB_BAF_762_L42A1_20Rnd";
				count = 3;
			};
			class _xx_762_t
			{
				magazine = "UK3CB_BAF_762_L42A1_20Rnd_T";
				count = 1;
			};
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 1;
			};
			class _xx_Grenade
			{
				magazine = "HandGrenade";
				count = 1;
			};
		};
	};