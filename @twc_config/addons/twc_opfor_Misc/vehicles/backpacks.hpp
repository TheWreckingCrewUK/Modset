class CUP_B_AlicePack_Khaki;
class CUP_B_RPGPack_Khaki;
class CUP_B_HikingPack_Civ;

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