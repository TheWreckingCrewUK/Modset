//REGULAR
#define BACKPACK_REGULAR_SECTIONCOMMANDER(CAMO, INHERIT) \
class TWC_Backpack_1990_Regular_##CAMO##_SectionCommander: INHERIT \
{ \
	scope = 1; \
	scopeArsenal = 1; \
	class TransportMagazines { \
		ADD_MAGA(SmokeShell,3); \
		ADD_MAGA(SmokeShellRed,2); \
		ADD_MAGA(SmokeShellBlue,2); \
	}; \
	class TransportItems { \
		ADD_ITEM(ACRE_PRC117F,1); \
	}; \
};

#define BACKPACK_REGULAR_2IC(CAMO, INHERIT) \
class TWC_Backpack_1990_Regular_##CAMO##_2iC: INHERIT \
{ \
	scope = 1; \
	scopeArsenal = 1; \
	class TransportMagazines { \
		ADD_MAGA(SmokeShell,3); \
		ADD_MAGA(UK3CB_BAF_556_30Rnd,10); \
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,4); \
	}; \
};

#define BACKPACK_REGULAR_PLATOON_COMMANDER(CAMO, INHERIT) \
class TWC_Backpack_1990_Regular_##CAMO##_Platoon_Commander: INHERIT \
{ \
	scope = 1; \
	scopeArsenal = 1; \
	class TransportItems { \
		ADD_ITEM(ACRE_PRC117F,1); \
	}; \
	class TransportMagazines { \
		ADD_MAGA(SmokeShell,3); \
		ADD_MAGA(SmokeShellRed,2); \
		ADD_MAGA(SmokeShellBlue,2); \
	}; \
};

#define BACKPACK_REGULAR_PLATOON_SERGEANT(CAMO, INHERIT) \
class TWC_Backpack_1990_Regular_##CAMO##_Platoon_Sergeant: INHERIT \
{ \
	scope = 1; \
	scopeArsenal = 1; \
	maximumLoad = 430; \
	class TransportItems { \
		ADD_ITEM(ACRE_PRC117F,1); \
	}; \
	class TransportMagazines { \
		ADD_MAGA(SmokeShell,3); \
		ADD_MAGA(SmokeShellRed,2); \
		ADD_MAGA(SmokeShellBlue,2); \
		ADD_MAGA(UK3CB_BAF_556_30Rnd,20); \
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,8); \
	}; \
};

#define BACKPACK_REGULAR_PLATOON_MEDIC(CAMO, INHERIT) \
class TWC_Backpack_1990_Regular_##CAMO##_Platoon_Medic: INHERIT \
{ \
	scope = 1; \
	scopeArsenal = 1; \
	class TransportItems { \
		ADD_ITEM(ACE_fieldDressing,20); \
		ADD_ITEM(ACE_morphine,10); \
		ADD_ITEM(ACE_elasticBandage,20); \
		ADD_ITEM(ACE_quikclot,20); \
		ADD_ITEM(ACE_packingBandage,20); \
		ADD_ITEM(ACE_adenosine,4); \
		ADD_ITEM(ACE_atropine,4); \
		ADD_ITEM(ACE_epinephrine,10); \
		ADD_ITEM(ACE_salineIV_500,6); \
		ADD_ITEM(ACE_tourniquet,4); \
		ADD_ITEM(ACE_personalAidKit,1); \
		ADD_ITEM(TWC_Item_Medical_SutureKit_25,1); \
	}; \
};

#define BACKPACK_REGULAR_SPOTTER(CAMO, INHERIT) \
class TWC_Backpack_1990_Regular_##CAMO##_Spotter: INHERIT \
{ \
	scope = 1; \
	scopeArsenal = 1; \
	class TransportItems { \
		ADD_ITEM(ACRE_PRC117F,1); \
		ADD_ITEM(ACE_Tripod,1); \
		ADD_ITEM(ACE_SpottingScope,1); \
	}; \
};

#define BACKPACK_REGULAR_ARTILLERY_COMMANDER(CAMO, INHERIT) \
class TWC_Backpack_1990_Regular_##CAMO##_Artillery_Commander: INHERIT \
{ \
	scope = 1; \
	scopeArsenal = 1; \
	maximumLoad = 400; \
	class TransportItems { \
		ADD_ITEM(ACRE_PRC117F,1); \
	}; \
};

#define BACKPACK_REGULAR_FO(CAMO, INHERIT) \
class TWC_Backpack_1990_Regular_##CAMO##_FO: INHERIT \
{ \
	scope = 1; \
	scopeArsenal = 1; \
	class TransportItems { \
		ADD_ITEM(ACRE_PRC117F,1); \
	}; \
	class TransportMagazines { \
		ADD_MAGA(SmokeShell,3); \
		ADD_MAGA(SmokeShellRed,2); \
		ADD_MAGA(SmokeShellBlue,2); \
	}; \
};

#define BACKPACK_REGULAR_EOD_COMMANDER(CAMO, INHERIT) \
class TWC_Backpack_1990_Regular_##CAMO##_EOD_Commander: INHERIT \
{ \
	scope = 1; \
	scopeArsenal = 1; \
	class TransportItems { \
		ADD_ITEM(ACRE_PRC117F,1); \
	}; \
	class TransportMagazines { \
		ADD_MAGA(SmokeShell,3); \
		ADD_MAGA(SmokeShellRed,2); \
		ADD_MAGA(SmokeShellBlue,2); \
	}; \
};

#define BACKPACK_REGULAR_FAC(CAMO, INHERIT) \
class TWC_Backpack_1990_Regular_##CAMO##_FAC: INHERIT \
{ \
	scope = 1; \
	scopeArsenal = 1; \
	class TransportItems { \
		ADD_ITEM(ACRE_PRC117F,1); \
	}; \
	class TransportMagazines { \
		ADD_MAGA(SmokeShell, 5); \
		ADD_MAGA(SmokeShellGreen, 5); \
		ADD_MAGA(SmokeShellBlue, 5); \
		ADD_MAGA(SmokeShellOrange, 5); \
		ADD_MAGA(SmokeShellRed, 5); \
		ADD_MAGA(SmokeShellPurple, 5); \
	}; \
};

//REGULAR, DISMOUNTED
#define BACKPACK_REGULAR_DISMOUNTED_RIFLEMAN(CAMO, INHERIT) \
class TWC_Backpack_1990_Regular_Dismounted_##CAMO##_Rifleman: INHERIT \
{ \
	scope = 1; \
	scopeArsenal = 1; \
	class TransportMagazines { \
		ADD_MAGA(UK3CB_BAF_556_30Rnd,8); \
	}; \
};

#define BACKPACK_REGULAR_DISMOUNTED_AT(CAMO, INHERIT) \
class TWC_Backpack_1990_Regular_Dismounted_##CAMO##_AT: INHERIT \
{ \
	scope = 1; \
	scopeArsenal = 1; \
	class TransportMagazines { \
		ADD_MAGA(UK3CB_BAF_556_30Rnd,8); \
	}; \
};

#define BACKPACK_REGULAR_DISMOUNTED_GUNNER(CAMO, INHERIT) \
class TWC_Backpack_1990_Regular_Dismounted_##CAMO##_Gunner: INHERIT \
{ \
	scope = 1; \
	scopeArsenal = 1; \
	class TransportMagazines { \
		ADD_MAGA(UK3CB_BAF_556_30Rnd,10); \
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,6); \
	}; \
};

#define BACKPACK_REGULAR_DISMOUNTED_SECTIONCOMMANDER(CAMO, INHERIT) \
class TWC_Backpack_1990_Regular_Dismounted_##CAMO##_SectionCommander: INHERIT \
{ \
	scope = 1; \
	scopeArsenal = 1; \
	class TransportMagazines { \
		ADD_MAGA(SmokeShell,3); \
		ADD_MAGA(SmokeShellRed,2); \
		ADD_MAGA(SmokeShellBlue,2); \
		ADD_MAGA(UK3CB_BAF_556_30Rnd,10); \
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,6); \
	}; \
	class TransportItems { \
		ADD_ITEM(ACRE_PRC117F,1); \
	}; \
};

#define BACKPACK_REGULAR_DISMOUNTED_2IC(CAMO, INHERIT) \
class TWC_Backpack_1990_Regular_Dismounted_##CAMO##_2iC: INHERIT \
{ \
	scope = 1; \
	scopeArsenal = 1; \
	class TransportMagazines { \
		ADD_MAGA(SmokeShell,3); \
		ADD_MAGA(UK3CB_BAF_556_30Rnd,20); \
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,8); \
	}; \
};

#define BACKPACK_REGULAR_DISMOUNTED_PLATOON_COMMANDER(CAMO, INHERIT) \
class TWC_Backpack_1990_Regular_Dismounted_##CAMO##_Platoon_Commander: INHERIT \
{ \
	scope = 1; \
	scopeArsenal = 1; \
	class TransportMagazines { \
		ADD_MAGA(SmokeShell,3); \
		ADD_MAGA(SmokeShellRed,2); \
		ADD_MAGA(SmokeShellBlue,2); \
		ADD_MAGA(UK3CB_BAF_556_30Rnd,6); \
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,2); \
	}; \
	class TransportItems { \
		ADD_ITEM(ACRE_PRC117F,1); \
	}; \
};

#define BACKPACK_REGULAR_DISMOUNTED_PLATOON_SERGEANT(CAMO, INHERIT) \
class TWC_Backpack_1990_Regular_Dismounted_##CAMO##_Platoon_Sergeant: INHERIT \
{ \
	scope = 1; \
	scopeArsenal = 1; \
	maximumLoad = 430; \
	class TransportItems { \
		ADD_ITEM(ACRE_PRC117F,1); \
	}; \
	class TransportMagazines { \
		ADD_MAGA(SmokeShell,3); \
		ADD_MAGA(SmokeShellRed,2); \
		ADD_MAGA(SmokeShellBlue,2); \
		ADD_MAGA(UK3CB_BAF_556_30Rnd,20); \
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,8); \
	}; \
};

#define BACKPACK_REGULAR_DISMOUNTED_PLATOON_MEDIC(CAMO, INHERIT) \
class TWC_Backpack_1990_Regular_Dismounted_##CAMO##_Platoon_Medic: INHERIT \
{ \
	scope = 1; \
	scopeArsenal = 1; \
	class TransportItems { \
		ADD_ITEM(ACE_fieldDressing,20); \
		ADD_ITEM(ACE_morphine,10); \
		ADD_ITEM(ACE_elasticBandage,20); \
		ADD_ITEM(ACE_quikclot,20); \
		ADD_ITEM(ACE_packingBandage,20); \
		ADD_ITEM(ACE_adenosine,4); \
		ADD_ITEM(ACE_atropine,4); \
		ADD_ITEM(ACE_epinephrine,10); \
		ADD_ITEM(ACE_salineIV_500,6); \
		ADD_ITEM(ACE_tourniquet,4); \
		ADD_ITEM(ACE_personalAidKit,1); \
		ADD_ITEM(TWC_Item_Medical_SutureKit_25,1); \
	}; \
};

#define BACKPACK_REGULAR_DISMOUNTED_MG(CAMO, INHERIT) \
class TWC_Backpack_1990_Regular_Dismounted_##CAMO##_MG: INHERIT \
{ \
	scope = 1; \
	class TransportMagazines { \
		ADD_MAGA(UK3CB_BAF_762_100Rnd_T,1); \
		ADD_MAGA(UK3CB_BAF_762_100Rnd,1); \
	}; \
};

#define BACKPACK_REGULAR_DISMOUNTED_ASSMG(CAMO, INHERIT) \
class TWC_Backpack_1990_Regular_Dismounted_##CAMO##_ASSMG: INHERIT \
{ \
	scope = 1; \
	maximumLoad = 300; \
	class TransportMagazines { \
		ADD_MAGA(UK3CB_BAF_762_100Rnd_T,2); \
		ADD_MAGA(UK3CB_BAF_762_100Rnd,1); \
		ADD_MAGA(UK3CB_BAF_556_30Rnd,8); \
	}; \
};

//WOODLAND, REGULAR
//Section
BACKPACK_REGULAR_SECTIONCOMMANDER(Woodland, UK3CB_BAF_B_Bergen_DPMW_SL_A)
BACKPACK_REGULAR_2IC(Woodland, UK3CB_BAF_B_Bergen_DPMW_Rifleman_A)

//Platoon Command
BACKPACK_REGULAR_PLATOON_COMMANDER(Woodland, UK3CB_BAF_B_Bergen_DPMW_SL_A)
BACKPACK_REGULAR_PLATOON_SERGEANT(Woodland, UK3CB_BAF_B_Bergen_DPMW_SL_A)
BACKPACK_REGULAR_PLATOON_MEDIC(Woodland, UK3CB_BAF_B_Bergen_DPMW_Rifleman_B)

//Attachments
BACKPACK_REGULAR_L14A1_ASS(Woodland, UK3CB_BAF_B_Bergen_DPMW_Rifleman_B)
BACKPACK_REGULAR_SPOTTER(Woodland, UK3CB_BAF_B_Bergen_DPMW_SL_A)
BACKPACK_REGULAR_ARTILLERY_COMMANDER(Woodland, UK3CB_BAF_B_Bergen_DPMW_SL_A)
BACKPACK_REGULAR_FO(Woodland, UK3CB_BAF_B_Bergen_DPMW_SL_A)
BACKPACK_REGULAR_EOD_COMMANDER(Woodland, UK3CB_BAF_B_Bergen_DPMW_SL_A)
BACKPACK_REGULAR_FAC(Woodland, UK3CB_BAF_B_Bergen_DPMW_JTAC_H_A)

//WOODLAND, REGULAR, DISMOUNTED
//Section
BACKPACK_REGULAR_DISMOUNTED_RIFLEMAN(Woodland, UK3CB_BAF_B_Bergen_DPMW_Rifleman_A)
BACKPACK_REGULAR_DISMOUNTED_AT(Woodland, UK3CB_BAF_B_Bergen_DPMW_Rifleman_A)
BACKPACK_REGULAR_DISMOUNTED_GUNNER(Woodland, UK3CB_BAF_B_Bergen_DPMW_Rifleman_A)
BACKPACK_REGULAR_DISMOUNTED_SECTIONCOMMANDER(Woodland, UK3CB_BAF_B_Bergen_DPMW_SL_A)
BACKPACK_REGULAR_DISMOUNTED_2IC(Woodland, UK3CB_BAF_B_Bergen_DPMW_Rifleman_B)
BACKPACK_REGULAR_DISMOUNTED_MG(Woodland, UK3CB_BAF_B_Bergen_DPMW_Rifleman_A)
BACKPACK_REGULAR_DISMOUNTED_ASSMG(Woodland, UK3CB_BAF_B_Bergen_DPMW_Rifleman_A)

//Platoon Command
BACKPACK_REGULAR_DISMOUNTED_PLATOON_COMMANDER(Woodland, UK3CB_BAF_B_Bergen_DPMW_SL_A)
BACKPACK_REGULAR_DISMOUNTED_PLATOON_SERGEANT(Woodland, UK3CB_BAF_B_Bergen_DPMW_SL_A)
BACKPACK_REGULAR_DISMOUNTED_PLATOON_MEDIC(Woodland, UK3CB_BAF_B_Bergen_DPMW_Rifleman_B)