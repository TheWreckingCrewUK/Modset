//SECTION
class TWC_Backpack_IDF_ColdWar_ASSAT: SP_Backpack_CarlGustavCarrier {
	scope = 1;
	scopeCurator = 1;
	class TransportMagazines {
		ADD_MAGA(CUP_PG7V_M, 2);
		ADD_MAGA(CUP_OG7_M, 2);
	};
};
class TWC_Backpack_IDF_ColdWar_ASSMG: CUP_B_Kombat_Olive {
	scope = 1;
	scopeCurator = 1;
	class TransportMagazines {
		ADD_MAGA(150Rnd_762x51_Box, 3);
	};
};
class TWC_Backpack_IDF_ColdWar_2iC: CUP_B_Kombat_Radio_Olive {
	scope = 1;
	scopeCurator = 1;
	class TransportMagazines {
		ADD_MAGA(CUP_35Rnd_556x45_Galil_Mag, 8);
		ADD_MAGA(CUP_50Rnd_556x45_Galil_Mag, 4);
		ADD_MAGA(SmokeShell, 4);
		ADD_MAGA(150Rnd_762x51_Box, 2);
	};
};
class TWC_Backpack_IDF_ColdWar_SectionCommander: CUP_B_Kombat_Radio_Olive {
	scope = 1;
	scopeCurator = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC77, 1);
	};
	class TransportMagazines {
		ADD_MAGA(SmokeShell, 3);
		ADD_MAGA(SmokeShellRed, 2);
		ADD_MAGA(SmokeShellBlue, 2);
	};
};

//PLATOON
class TWC_Backpack_IDF_ColdWar_Platoon_Commander: CUP_B_Kombat_Radio_Olive {
	scope = 1;
	scopeCurator = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC77, 1);
	};
	class TransportMagazines {
		ADD_MAGA(SmokeShell, 3);
		ADD_MAGA(SmokeShellRed, 2);
		ADD_MAGA(SmokeShellBlue, 2);
	};
};
class TWC_Backpack_IDF_ColdWar_Platoon_Sergeant: CUP_B_Kombat_Radio_Olive {
	scope = 1;
	scopeCurator = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC77, 1);
		ADD_ITEM(ACE_wirecutter, 1);
	};
	class TransportMagazines {
		ADD_MAGA(SmokeShell, 3);
		ADD_MAGA(SmokeShellRed, 2);
		ADD_MAGA(SmokeShellBlue, 2);
		ADD_MAGA(CUP_35Rnd_556x45_Galil_Mag, 10);
		ADD_MAGA(150Rnd_762x51_Box, 2);
		ADD_MAGA(CUP_50Rnd_556x45_Galil_Mag, 4);
	};
};
class TWC_Backpack_IDF_ColdWar_Platoon_Medic: CUP_B_Kombat_Olive {
	scope = 1;
	scopeCurator = 1;
	class TransportItems {
		ADD_ITEM(ACE_fieldDressing,20);
		ADD_ITEM(ACE_morphine,10);
		ADD_ITEM(ACE_elasticBandage,20);
		ADD_ITEM(ACE_quikclot,20);
		ADD_ITEM(ACE_packingBandage,20);
		ADD_ITEM(ACE_adenosine,4);
		ADD_ITEM(ACE_atropine,4);
		ADD_ITEM(ACE_epinephrine,10);
		ADD_ITEM(ACE_salineIV_500,6);
		ADD_ITEM(ACE_tourniquet,4);
		ADD_ITEM(ACE_personalAidKit,1);
		ADD_ITEM(TWC_Item_Medical_SutureKit_25,1);
	};
};