class UK3CB_BAF_B_Carryall_OLI;

class TWC_Backpack_Colombia_TeamLeader: UK3CB_BAF_B_Carryall_OLI {
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(CUP_35Rnd_556x45_Galil_Mag,6);
		ADD_MAGA(CUP_30Rnd_556x45_Stanag,2);
		ADD_MAGA(CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M,2);
		ADD_MAGA(SmokeShell,4);
	};
};

class TWC_Backpack_Colombia_SquadLeader: UK3CB_BAF_B_Carryall_OLI {
	scope = 1;
	scopeArsenal = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC77,1);
	};
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
	};
};

class TWC_Backpack_Colombia_PlatoonLeader: UK3CB_BAF_B_Carryall_OLI {
	scope = 1;
	scopeArsenal = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC77,1);
	};
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
	};
};

class TWC_Backpack_Colombia_PlatoonSergeant: UK3CB_BAF_B_Carryall_OLI {
	scope = 1;
	scopeArsenal = 1;
	maximumLoad = 480;
	class TransportItems {
		ADD_ITEM(ACRE_PRC77,1);
	};
	class TransportMagazines {
		ADD_MAGA(CUP_35Rnd_556x45_Galil_Mag, 8);
		ADD_MAGA(CUP_30Rnd_556x45_Stanag,4);
		ADD_MAGA(CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M,2);
		ADD_MAGA(SmokeShell,4);
	};
};

class TWC_Backpack_Colombia_PlatoonMedic: UK3CB_BAF_B_Carryall_OLI {
	scope = 1;
	scopeArsenal = 1;
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