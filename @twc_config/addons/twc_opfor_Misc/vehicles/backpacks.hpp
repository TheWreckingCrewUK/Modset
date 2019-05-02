class CUP_B_AlicePack_Khaki;
class CUP_B_RPGPack_Khaki;
class CUP_B_HikingPack_Civ;
class CUP_B_AlicePack_OD;
class SP_Backpack_BlowpipeCarrier;

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
		maga_nc(CUP_PG7V_M, 3);
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