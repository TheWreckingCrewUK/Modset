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
	
	
	class pol_backpack_rif: CUP_B_ACRScout_m95
	{
		scope = 1;
	hiddenselectionstextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_small_oli_co.paa"};
		
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
				magazine = "rhs_100Rnd_762x54mmR_7N26";
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
				magazine = "rhsgref_30rnd_556x45_m21";
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
			class _xxACE_surgKit
			{
				name = "ACE_surgicalKit";
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
			class _xxACE_surgKit
			{
				name = "ACE_surgicalKit";
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

	

	class ana_backpack_medic: CUP_B_AlicePack_Khaki
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
			class _xxACE_surgKit
			{
				name = "ACE_surgicalKit";
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
	
			class ana_backpack_2ic: CUP_B_AlicePack_Khaki
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
	
	class UK3CB_BAF_B_Bergen_MTP_Rifleman_H_A;
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
		};
	};
	class TWC_Backpack_Modern_MachineGunner: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D
	{
		scope = 1;
		class TransportMagazines
		{
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
			class _xxACE_surgKit
			{
				name = "ACE_surgicalKit";
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
	class TWC_Backpack_Modern_Sniper: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Lapua
				{
					magazine = "UK3CB_BAF_762_100Rnd";
					count = 5;
				};
		};
	};
	class TWC_Backpack_Modern_Spotter: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A
	{
		scope = 1;
		class TransportItems
		{

		};
		class TransportMagazines
		{
			class _xx_Lapua
			{
				magazine = "UK3CB_BAF_762_100Rnd";
				count = 5;
			};
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
				magazine = "UK3CB_BAF_12G_Slugs";
				count = 5;
			};
            class _xx_Buck
			{
				magazine = "UK3CB_BAF_12G_Pellets";
				count = 7;
			};
		};
		class TransportWeapons
		{
            class _xx_Shotgun
			{
				weapon = "UK3CB_BAF_L128A1_Eotech";
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
				magazine = "UK3CB_BAF_12G_Slugs";
				count = 2;
			};
            class _xx_Buck
			{
				magazine = "UK3CB_BAF_12G_Pellets";
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
				magazine = "ACE_10Rnd_338_300gr_HPBT_Mag";
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