//SECTION
class TWC_Backpack_IDF_Millenial_ASSAT: CUP_B_IDF_Backpack {
	scope = 1;
	scopeCurator = 1;
	class TransportMagazines {
		ADD_MAGA(CUP_PG7V_M, 2);
		ADD_MAGA(CUP_OG7_M, 2);
	};
};
class TWC_Backpack_IDF_Millenial_ASSMG: CUP_B_IDF_Backpack {
	scope = 1;
	scopeCurator = 1;
	class TransportMagazines {
		ADD_MAGA(150Rnd_762x51_Box, 3);
	};
};
class TWC_Backpack_IDF_Millenial_SAW: CUP_B_IDF_Backpack {
	scope = 1;
	scopeCurator = 1;
	class TransportMagazines {
		ADD_MAGA(ACE_150Rnd_762x54_Box_red, 2);
	};
};
class TWC_Backpack_IDF_Millenial_2iC: CUP_B_IDF_Backpack {
	scope = 1;
	scopeCurator = 1;
	class TransportMagazines {
		ADD_MAGA(CUP_30Rnd_556x45_Stanag, 8);
		ADD_MAGA(CUP_30Rnd_556x45_Stanag_Tracer_Red, 2);
		ADD_MAGA(ACE_150Rnd_762x54_Box_red, 2);
		ADD_MAGA(1Rnd_HE_Grenade_shell, 4);
		ADD_MAGA(SmokeShell, 4);
	};
};
class TWC_Backpack_IDF_Millenial_SectionCommander: CUP_B_IDF_Backpack {
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
class TWC_Backpack_IDF_Millenial_Platoon_Commander: CUP_B_IDF_Backpack {
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
class TWC_Backpack_IDF_Millenial_Platoon_Sergeant: CUP_B_IDF_Backpack {
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
		ADD_MAGA(CUP_30Rnd_556x45_Stanag, 10);
		ADD_MAGA(CUP_30Rnd_556x45_Stanag_Tracer_Red, 4);
		ADD_MAGA(ACE_150Rnd_762x54_Box_red, 2);
		ADD_MAGA(1Rnd_HE_Grenade_shell, 8);
	};
};
class TWC_Backpack_IDF_Millenial_Platoon_Medic: CUP_B_IDF_Backpack {
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
		ADD_ITEM(ACE_surgicalKit,1);
	};
};