//////////////////////////////  British Woodland Camo  //////////////////////////////
	
	class UK3CB_BAF_B_Bergen_DPMT_SL_A;
	class UK3CB_BAF_B_Bergen_DPMW_SL_A;
	class UK3CB_BAF_B_Bergen_DPMW_Rifleman_A;
	class UK3CB_BAF_B_Bergen_DPMW_Rifleman_B;
	class UK3CB_BAF_B_Carryall_DPMW;
	class UK3CB_BAF_B_Kitbag_DPMW;
	class UK3CB_BAF_B_Bergen_TAN_SL_A;
	class UK3CB_BAF_B_Bergen_DPMW_JTAC_H_A;
	
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
	class TWC_Backpack_1990_2IC: UK3CB_BAF_B_Bergen_DPMW_Rifleman_B
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
	class TWC_Backpack_1990_Gunner: UK3CB_BAF_B_Bergen_DPMW_Rifleman_B
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
	class TWC_Backpack_1990_Platoon_Sergeant: UK3CB_BAF_B_Carryall_DPMW
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
			class _xx_Stanag
			{
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 20;
			};
		};
	};
	class TWC_Backpack_1990_Medic: UK3CB_BAF_B_Kitbag_DPMW
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

	class TWC_Backpack_2000_2IC: UK3CB_BAF_B_Kitbag_DPMW
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

	class TWC_Backpack_2000_machineGunner: UK3CB_BAF_B_Kitbag_DPMW
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Belt_762
			{
				magazine = "UK3CB_BAF_762_100Rnd";
				count = 4;
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

	class TWC_Backpack_1990_Sectionlead_Desert: UK3CB_BAF_B_Bergen_DDPM_SL_A
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
	class TWC_Backpack_1990_2IC_Desert: UK3CB_BAF_B_Bergen_DDPM_Rifleman_B
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
	class TWC_Backpack_1990_Gunner_Desert: UK3CB_BAF_B_Bergen_DDPM_Rifleman_B
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
	class TWC_Backpack_1990_Platoon_Sergeant_Desert: UK3CB_BAF_B_Carryall_DDPM
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
	class TWC_Backpack_1990_Medic_Desert: UK3CB_BAF_B_Bergen_DDPM_Rifleman_B
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
				count = 3;
			};
		};
	};
	
	class TWC_Backpack_1990_quartermaster_desert: UK3CB_BAF_B_Bergen_TAN_SL_A
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
	};

////////////////////////////// US Woodland Camo  //////////////////////////////
	class rhsgref_wdl_alicepack;
	class twc_men_1990_us_w_backpack_squadlead: rhsgref_wdl_alicepack
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
	class twc_men_1990_us_w_backpack_teamlead: rhsgref_wdl_alicepack
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
	class twc_men_1990_us_w_backpack_rifleman: rhsgref_wdl_alicepack
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
	class twc_men_1990_us_w_backpack_autorifleman: rhsgref_wdl_alicepack
	{
		scope = 1;
		class TransportMagazines
		{
            class _xx_Stanag
			{
				magazine = "rhs_200rnd_556x45_B_SAW";
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
	
	
		class TWC_Backpack_2000_2IC_Desert: UK3CB_BAF_B_Bergen_DDPM_Rifleman_A
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

		class TWC_Backpack_2000_Minimi_D: UK3CB_BAF_B_Bergen_DDPM_Rifleman_A
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
	
	