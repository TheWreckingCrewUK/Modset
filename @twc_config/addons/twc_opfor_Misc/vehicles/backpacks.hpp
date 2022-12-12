class CUP_B_AlicePack_Khaki;
class CUP_B_RPGPack_Khaki;
class CUP_B_HikingPack_Civ;
class CUP_B_AlicePack_OD;
class SP_Backpack_BlowpipeCarrier;
class CUP_B_TK_CivPack_WDL_RPK;
class CUP_B_USMC_MOLLE_WDL;
class B_Kitbag_cbr;

class Afr_Backpack_Rifleman: CUP_B_AlicePack_Khaki {
	class TransportMagazines {
		maga_nc(CUP_30Rnd_762x39_AK47_M, 6);
		maga_nc(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M, 1);
	};
};

class Afr_Backpack_MG: CUP_B_AlicePack_Khaki {
	class TransportMagazines {
		maga_nc(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M, 2);
	};
};

class Afr_Backpack_AT: CUP_B_RPGPack_Khaki {
	class TransportMagazines {
		maga_nc(CUP_30Rnd_762x39_AK47_M, 2);
		maga_nc(CUP_PG7V_M, 2);
	};
};

class USSR_RPG_bag: CUP_B_RPGPack_Khaki {
	class TransportMagazines {
		maga_nc(CUP_PG7V_M, 3);
	};
};

class WaPAT_Backpack_RPK: CUP_B_HikingPack_Civ {
	scope = 1;

	class TransportMagazines {
		maga_nc(CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M, 3);
	};
};

class WaPAT_Backpack_UK59: CUP_B_HikingPack_Civ {
	scope = 1;

	class TransportMagazines {
		maga_nc(CUP_50Rnd_UK59_762x54R_Tracer, 4);
	};
};

class WaPAT_Backpack_AT: CUP_B_HikingPack_Civ {
	scope = 1;

	class TransportMagazines {
		maga_nc(CUP_AT13_M, 2);
	};
};

class TWC_Backpack_USA_1980_SectionCommander: CUP_B_AlicePack_OD
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		maga_nc(SmokeShell,3);
		maga_nc(SmokeShellRed,2);
		maga_nc(SmokeShellBlue,2);
	};
	class TransportItems {
		item_nc(ACRE_PRC77,1);
	};
};
class TWC_Backpack_USA_1980_TeamLeader: CUP_B_AlicePack_OD
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		maga_nc(SmokeShell,3);
		maga_nc(CUP_30Rnd_556x45_Stanag, 6);
		maga_nc(CUP_30Rnd_556x45_Stanag_Tracer_Red, 4);
	};
};

class TWC_Backpack_Argentina_1980_SectionCommander: CUP_B_AlicePack_OD
{
	scope = 1;
	scopeArsenal = 1;
	class TransportItems {
		item_nc(ACRE_PRC117F,1);
	};
};
class TWC_Backpack_Argentina_1980_2iC: CUP_B_AlicePack_OD
{
	class TransportMagazines {
		maga_nc(CUP_20Rnd_762x51_FNFAL_M, 6);
		maga_nc(UK3CB_BAF_762_100Rnd_T, 1);
	};
};
class TWC_Backpack_Argentina_1980_AA: SP_Backpack_BlowpipeCarrier
{
	class TransportMagazines {
		maga_nc(SP_Blowpipe_round, 1);
	};
};
class CUP_B_TK_AT_CarlGustav: CUP_B_TK_CivPack_WDL_RPK
{
	class TransportMagazines {
		maga_nc(CUP_MAAWS_HEAT_M, 4);
	};
};
class PLA_CW_Backpack_Rifleman: CUP_B_USMC_MOLLE_WDL {
	class TransportMagazines {
		maga_nc(CUP_30Rnd_762x39_AK47_M, 6);
		maga_nc(CUP_50Rnd_UK59_762x54R_Tracer, 2);
	};
};
class PLA_CW_Backpack_Marksman: CUP_B_USMC_MOLLE_WDL {
	class TransportMagazines {
		maga_nc(CUP_10Rnd_762x39_SKS_M, 6);
		maga_nc(CUP_50Rnd_UK59_762x54R_Tracer, 2);
	};
};
class PLA_CW_Backpack_MG: CUP_B_USMC_MOLLE_WDL {
	class TransportMagazines {
		maga_nc(CUP_50Rnd_UK59_762x54R_Tracer, 4);
	};
};

class PLA_CW_Backpack_AT: CUP_B_USMC_MOLLE_WDL {
	class TransportMagazines {
		maga_nc(CUP_30Rnd_762x39_AK47_M, 2);
		maga_nc(CUP_PG7V_M, 4);
	};
};

class Taliban_Backpack_MG: CUP_B_AlicePack_OD {
	class TransportMagazines {
		maga_nc(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M, 3);
	};
};

class Taliban_Backpack_AT: CUP_B_RPGPack_Khaki {
	class TransportMagazines {
		maga_nc(CUP_PG7VL_M, 2);
	};
};

class TWC_Backpack_GRUP_Modern_Rifleman: B_Kitbag_cbr {
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		maga_nc(CUP_30Rnd_545x39_AK12_Tan_M, 12);
	};
};
class TWC_Backpack_GRUP_Modern_Breacher: B_Kitbag_cbr {
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		maga_nc(CUP_12Rnd_B_Saiga12_Slug, 8);
		maga_nc(CUP_12Rnd_B_Saiga12_Buck_00, 8);
		maga_nc(CUP_12Rnd_B_Saiga12_HE, 4);
	};
};
class TWC_Backpack_GRUP_Modern_MG: B_Kitbag_cbr {
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		maga_nc(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M, 5);
	};
};
class TWC_Backpack_GRUP_Modern_ASSMG: B_Kitbag_cbr {
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		maga_nc(CUP_30Rnd_545x39_AK12_Tan_M, 10);
		maga_nc(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M, 4);
	};
};
class TWC_Backpack_GRUP_Modern_2iC: B_Kitbag_cbr {
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		maga_nc(CUP_30Rnd_545x39_AK12_Tan_M, 14);
		maga_nc(CUP_12Rnd_B_Saiga12_Slug, 2);
		maga_nc(CUP_12Rnd_B_Saiga12_Buck_00, 2);
		maga_nc(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M, 2);
	};
};
class TWC_Backpack_GRUP_Modern_GroupCommander: B_Kitbag_cbr {
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		maga_nc(CUP_30Rnd_545x39_AK12_Tan_M, 12);
	};
	class TransportItems {
		item_nc(ACRE_BF888S,1);
	};
};
class TWC_Backpack_GRUP_Modern_PlatoonSergeant: B_Kitbag_cbr {
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		maga_nc(CUP_30Rnd_545x39_AK12_Tan_M, 14);
		maga_nc(CUP_12Rnd_B_Saiga12_Slug, 2);
		maga_nc(CUP_12Rnd_B_Saiga12_Buck_00, 2);
		maga_nc(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M, 2);
	};
	class TransportItems {
		item_nc(ACRE_BF888S,1);
	};
};
class TWC_Backpack_GRUP_Modern_PlatoonMedic: B_Kitbag_cbr {
	scope = 1;
	scopeArsenal = 1;
	class TransportItems {
		item_nc(ACE_fieldDressing,20);
		item_nc(ACE_morphine,10);
		item_nc(ACE_elasticBandage,20);
		item_nc(ACE_quikclot,20);
		item_nc(ACE_packingBandage,20);
		item_nc(ACE_adenosine,4);
		item_nc(ACE_atropine,4);
		item_nc(ACE_epinephrine,10);
		item_nc(ACE_salineIV_500,6);
		item_nc(ACE_tourniquet,4);
		item_nc(ACE_personalAidKit,1);
		item_nc(TWC_Item_Medical_SutureKit_25,1);
	};
};