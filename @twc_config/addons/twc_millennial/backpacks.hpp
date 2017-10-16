//////////////////////////////  Woodland Camo  //////////////////////////////
	
	class UK3CB_BAF_B_Bergen_DPMT_SL_A;
	class UK3CB_BAF_B_Bergen_DPMT_Rifleman_A;
	class UK3CB_BAF_B_Bergen_DPMT_Rifleman_B;
	class UK3CB_BAF_B_Carryall_DPMT;
	class UK3CB_BAF_B_Kitbag_DPMT;
	
	
	class TWC_Backpack_1990_Sectionlead: UK3CB_BAF_B_Bergen_DPMT_SL_A
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
	class TWC_Backpack_1990_2IC: UK3CB_BAF_B_Bergen_DPMT_Rifleman_B
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
	class TWC_Backpack_1990_2IC_Mounted: UK3CB_BAF_B_Kitbag_DPMT
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
	class TWC_Backpack_1990_Rifleman: UK3CB_BAF_B_Bergen_DPMT_Rifleman_B
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
	class TWC_Backpack_1990_Gunner: UK3CB_BAF_B_Bergen_DPMT_Rifleman_B
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
	class TWC_Backpack_2000_AutoRifleman: UK3CB_BAF_B_Bergen_DPMT_Rifleman_B
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
	class TWC_Backpack_2000_AutoRifleman_Kitbag: UK3CB_BAF_B_Kitbag_DPMT
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Box_Stanag
			{
				magazine = "UK3CB_BAF_556_200Rnd";
				count = 1;
			};
		};
	};
	class TWC_Backpack_1990_Platoon_Command: UK3CB_BAF_B_Bergen_DPMT_SL_A
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
	class TWC_Backpack_1990_Platoon_Sergeant: UK3CB_BAF_B_Carryall_DPMT
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
	class TWC_Backpack_1990_Medic: UK3CB_BAF_B_Bergen_DPMT_Rifleman_B
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
				count = 3;
			};
		};
	};
	class TWC_Backpack_1990_Milan: UK3CB_BAF_B_Bergen_DPMT_Rifleman_A
	{
		scope = 1;
		class TransportItems
		{
			class _xx_Milan
			{
				name = "TWC_MilanMissileItem";
				count = 1;
			};
		};
	};
	class TWC_Backpack_1990_Mortar:UK3CB_BAF_B_Bergen_DPMT_Rifleman_A
	{
		scope = 1;
		class TransportItems
		{
			class _xx_60MortarRound
			{
				name = "UK3CB_BAF_1Rnd_60mm_Mo_Shells";
				count = 10;
			};
		};
	};
	class TWC_Backpack_1990_CG: UK3CB_BAF_B_Bergen_DPMT_Rifleman_A		
	{		
		scope = 1;		
		class TransportMagazines		
		{		
			class _xx_tf47_m3maaws_HE		
			{		
				magazine = "tf47_m3maaws_HE";		
				count = 1;		
			};		
		};		
	};		
	class TWC_Backpack_1990_CGAss: UK3CB_BAF_B_Bergen_DPMT_Rifleman_A		
	{		
		scope = 1;		
		class TransportMagazines		
		{		
			class _xx_tf47_m3maaws_HEAT		
			{		
				magazine = "tf47_m3maaws_HEAT";		
				count = 1;		
			};		
			class _xx_tf47_m3maaws_HE		
			{		
				magazine = "tf47_m3maaws_HE";		
				count = 1;		
			};		
		};		
	};
	class TWC_Backpack_1990_Engineer: UK3CB_BAF_B_Carryall_DPMT
	{
		scope = 1;
		class TransportItems
		{
			class _xx_EntrenchingTool
			{
				name = "ACE_EntrenchingTool";
				count = 1;
			};
			class _xx_Wire_Cutters
			{
				name = "ACE_wirecutter";
				count = 1;
			};
		};
	};
//////////////////////////////  Desert Camo  //////////////////////////////
	
	class UK3CB_BAF_B_Bergen_DDPM_SL_A;
	class UK3CB_BAF_B_Bergen_DDPM_Rifleman_A;
	class UK3CB_BAF_B_Bergen_DDPM_Rifleman_B;
	class UK3CB_BAF_B_Carryall_DDPM;
	class UK3CB_BAF_B_Kitbag_DDPM;

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
	class TWC_Backpack_1990_2IC_Desert_Mounted: UK3CB_BAF_B_Kitbag_DDPM
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
	class TWC_Backpack_2000_AutoRifleman_Desert: UK3CB_BAF_B_Bergen_DDPM_Rifleman_B
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
	class TWC_Backpack_2000_AutoRifleman_Kitbag_Desert: UK3CB_BAF_B_Kitbag_DDPM
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_Box_Stanag
			{
				magazine = "UK3CB_BAF_556_200Rnd";
				count = 1;
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
	class TWC_Backpack_1990_Milan_Desert: UK3CB_BAF_B_Bergen_DDPM_Rifleman_A
	{
		scope = 1;
		class TransportItems
		{
			class _xx_Milan
			{
				name = "TWC_MilanMissileItem";
				count = 1;
			};
		};
	};
	class TWC_Backpack_1990_Mortar_Desert:UK3CB_BAF_B_Bergen_DDPM_Rifleman_A
	{
		scope = 1;
		class TransportItems
		{
			class _xx_60MortarRound
			{
				name = "UK3CB_BAF_1Rnd_60mm_Mo_Shells";
				count = 10;
			};
		};
	};
	class TWC_Backpack_1990_CG_Desert: UK3CB_BAF_B_Bergen_DDPM_Rifleman_A		
	{		
		scope = 1;		
		class TransportMagazines		
		{		
			class _xx_tf47_m3maaws_HE		
			{		
				magazine = "tf47_m3maaws_HE";		
				count = 1;		
			};		
		};		
	};		
	class TWC_Backpack_1990_CGAss_Desert: UK3CB_BAF_B_Bergen_DDPM_Rifleman_A		
	{		
		scope = 1;		
		class TransportMagazines		
		{		
			class _xx_tf47_m3maaws_HEAT		
			{		
				magazine = "tf47_m3maaws_HEAT";		
				count = 1;		
			};		
			class _xx_tf47_m3maaws_HE		
			{		
				magazine = "tf47_m3maaws_HE";		
				count = 1;		
			};		
		};		
	};