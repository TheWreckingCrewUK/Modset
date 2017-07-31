	class UNS_NVA_RTO;
	class UNS_NVA_RPG;
	class UNS_NVA_R1;
	class rhs_medic_bag;
	
	class Backpack_PAVN_Radio: UNS_NVA_RTO
	{
		scope = 1;
		class TransportItems
		{
			class _xx_PRC_77
			{
				name = "ACRE_PRC77";
				count = 1;
			};
		};
	};
	class Backpack_PAVN_Sergeant: UNS_NVA_R1
	{
		scope = 1;
		class TransportItems
		{
			class _xx_ACRE_PRC77
			{
				name = "ACRE_PRC77";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_uns_ppshmag
			{
				magazine = "uns_ppshmag";
				count = 3;
			};
			class _xx_CUP_30Rnd_762x39_AK47_M
			{
				magazine = "CUP_30Rnd_762x39_AK47_M";
				count = 5;
			};
			class _xx_uns_sksmag_NT
			{
				magazine = "uns_sksmag_NT";
				count = 8;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M";
				count = 2;
			};
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 6;
			};
			class _xx_uns_t67gren
			{
				magazine = "CUP_PG7V_M";
				count = 4;
			};
		};
	};
	class Backpack_PAVN_CellLeader_Ass: UNS_NVA_R1
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_uns_ppshmag
			{
				magazine = "uns_ppshmag";
				count = 4;
			};
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_uns_t67gren
			{
				magazine = "CUP_PG7V_M";
				count = 6;
			};
		};
	};
	class Backpack_PAVN_CellLeader_AT: UNS_NVA_RPG
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_CUP_30Rnd_762x39_AK47_M
			{
				magazine = "CUP_30Rnd_762x39_AK47_M";
				count = 5;
			};
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_RPG_Round
			{
				magazine = "CUP_PG7V_M";
				count = 1;
			};
		};
	};
	class Backpack_PAVN_CellLeader_MG: UNS_NVA_R1
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_uns_sksmag_NT
			{
				magazine = "uns_sksmag_NT";
				count = 8;
			};
			class _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M";
				count = 2;
			};
			class _xx_Smoke
			{
				magazine = "SmokeShell";
				count = 2;
			};
		};
	};
	class Backpack_PAVN_RPG: UNS_NVA_RPG
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_RPG_Round
			{
				magazine = "CUP_PG7V_M";
				count = 5;
			};
		};
	};
	class Backpack_PAVN_MG: UNS_NVA_R1
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M
			{
				magazine = "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M";
				count = 4;
			};
		};
	};
	class Backpack_PAVN_Medic: rhs_medic_bag
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