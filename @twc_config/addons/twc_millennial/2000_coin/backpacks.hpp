//COIN
#define 2000_BACKPACK_COIN_SECTIONCOMMANDER(CAMO, INHERIT) \
class TWC_Backpack_2000_COIN_##CAMO##_SectionCommander: INHERIT \
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

#define 2000_BACKPACK_COIN_2IC(CAMO, INHERIT) \
class TWC_Backpack_2000_COIN_##CAMO##_2iC: INHERIT \
{ \
	scope = 1; \
	scopeArsenal = 1; \
	class TransportMagazines { \
		ADD_MAGA(SmokeShell,3); \
		ADD_MAGA(UK3CB_BAF_556_30Rnd,6); \
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,4); \
		ADD_MAGA(UK3CB_BAF_556_200Rnd, 3); \
	}; \
};

#define 2000_BACKPACK_COIN_PLATOON_COMMANDER(CAMO, INHERIT) \
class TWC_Backpack_2000_COIN_##CAMO##_Platoon_Commander: INHERIT \
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

#define 2000_BACKPACK_COIN_PLATOON_SERGEANT(CAMO, INHERIT) \
class TWC_Backpack_2000_COIN_##CAMO##_Platoon_Sergeant: INHERIT \
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

#define 2000_BACKPACK_COIN_PLATOON_MEDIC(CAMO, INHERIT) \
class TWC_Backpack_2000_COIN_##CAMO##_Platoon_Medic: INHERIT \
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

#define 2000_BACKPACK_COIN_JAVELIN_ASS(CAMO, INHERIT) \
class TWC_Backpack_2000_COIN_##CAMO##_Javelin_Assistant: INHERIT \
{ \
	scope = 1; \
	scopeArsenal = 1; \
	class TransportWeapons { \
		ADD_WEAP(UK3CB_BAF_Javelin_Slung_Tube,1); \
	}; \
};

/*class TWC_Backpack_2000_Regular_Woodland_Starstreak_Assistant: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D 
{
	scope = 1;
	scopeArsenal = 1;
	maximumLoad = 600;
};*/

#define 2000_BACKPACK_COIN_SPOTTER(CAMO, INHERIT) \
class TWC_Backpack_2000_COIN_##CAMO##_Spotter: INHERIT \
{ \
	scope = 1; \
	scopeArsenal = 1; \
	class TransportItems { \
		ADD_ITEM(ACRE_PRC117F,1); \
		ADD_ITEM(ACE_Tripod,1); \
		ADD_ITEM(ACE_SpottingScope,1); \
	}; \
};

#define 2000_BACKPACK_COIN_ARTILLERY_COMMANDER(CAMO, INHERIT) \
class TWC_Backpack_2000_COIN_##CAMO##_Artillery_Commander: INHERIT \
{ \
	scope = 1; \
	scopeArsenal = 1; \
	maximumLoad = 400; \
	class TransportItems { \
		ADD_ITEM(ACRE_PRC117F,1); \
	}; \
};

#define 2000_BACKPACK_COIN_FO(CAMO, INHERIT) \
class TWC_Backpack_2000_COIN_##CAMO##_FO: INHERIT \
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

#define 2000_BACKPACK_COIN_EOD_COMMANDER(CAMO, INHERIT) \
class TWC_Backpack_2000_COIN_##CAMO##_EOD_Commander: INHERIT \
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

#define 2000_BACKPACK_COIN_FAC(CAMO, INHERIT) \
class TWC_Backpack_2000_COIN_##CAMO##_FAC: INHERIT \
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

//COIN, DISMOUNTED
#define 2000_BACKPACK_COIN_DISMOUNTED_RIFLEMAN(CAMO, INHERIT) \
class TWC_Backpack_2000_COIN_Dismounted_##CAMO##_Rifleman: INHERIT \
{ \
	scope = 1; \
	scopeArsenal = 1; \
	class TransportMagazines { \
		ADD_MAGA(UK3CB_BAF_556_30Rnd,6); \
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,4); \
		ADD_MAGA(UK3CB_BAF_556_200Rnd, 2); \
	}; \
};

#define 2000_BACKPACK_COIN_DISMOUNTED_MARKSMAN(CAMO, INHERIT) \
class TWC_Backpack_2000_COIN_Dismounted_##CAMO##_Marksman: INHERIT \
{ \
	scope = 1; \
	scopeArsenal = 1; \
	class TransportMagazines { \
		ADD_MAGA(UK3CB_BAF_556_30Rnd,6); \
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,4); \
		ADD_MAGA(UK3CB_BAF_556_200Rnd, 2); \
	}; \
};

#define 2000_BACKPACK_COIN_DISMOUNTED_AUTORIFLEMAN(CAMO, INHERIT) \
class TWC_Backpack_2000_COIN_Dismounted_##CAMO##_Autorifleman: INHERIT \
{ \
	scope = 1; \
	scopeArsenal = 1; \
	class TransportMagazines { \
		ADD_MAGA(UK3CB_BAF_556_200Rnd, 3); \
	}; \
};

#define 2000_BACKPACK_COIN_DISMOUNTED_GRENADIER(CAMO, INHERIT) \
class TWC_Backpack_2000_COIN_Dismounted_##CAMO##_Grenadier: INHERIT \
{ \
	scope = 1; \
	scopeArsenal = 1; \
	class TransportMagazines { \
		ADD_MAGA(UK3CB_BAF_556_30Rnd,8); \
		ADD_MAGA(UK3CB_BAF_1Rnd_HE_Grenade_Shell,16); \
		ADD_MAGA(1Rnd_Smoke_Grenade_shell,4); \
		ADD_MAGA(1Rnd_SmokeRed_Grenade_shell,2); \
		ADD_MAGA(1Rnd_SmokeBlue_Grenade_shell,2); \
	}; \
};

#define 2000_BACKPACK_COIN_DISMOUNTED_SECTIONCOMMANDER(CAMO, INHERIT) \
class TWC_Backpack_2000_COIN_Dismounted_##CAMO##_SectionCommander: INHERIT \
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

#define 2000_BACKPACK_COIN_DISMOUNTED_2IC(CAMO, INHERIT) \
class TWC_Backpack_2000_COIN_Dismounted_##CAMO##_2iC: INHERIT \
{ \
	scope = 1; \
	scopeArsenal = 1; \
	class TransportMagazines { \
		ADD_MAGA(UK3CB_BAF_556_30Rnd,6); \
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,4); \
		ADD_MAGA(UK3CB_BAF_556_200Rnd, 2); \
	}; \
};

#define 2000_BACKPACK_COIN_DISMOUNTED_PLATOON_COMMANDER(CAMO, INHERIT) \
class TWC_Backpack_2000_COIN_Dismounted_##CAMO##_Platoon_Commander: INHERIT \
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

#define 2000_BACKPACK_COIN_DISMOUNTED_PLATOON_SERGEANT(CAMO, INHERIT) \
class TWC_Backpack_2000_COIN_Dismounted_##CAMO##_Platoon_Sergeant: INHERIT \
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

#define 2000_BACKPACK_COIN_DISMOUNTED_PLATOON_MEDIC(CAMO, INHERIT) \
class TWC_Backpack_2000_COIN_Dismounted_##CAMO##_Platoon_Medic: INHERIT \
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

//WOODLAND, COIN
//Section
2000_BACKPACK_COIN_SECTIONCOMMANDER(Woodland, UK3CB_BAF_B_Bergen_DPMW_SL_A)
2000_BACKPACK_COIN_2IC(Woodland, UK3CB_BAF_B_Bergen_DPMW_Rifleman_A)

//Platoon Command
2000_BACKPACK_COIN_PLATOON_COMMANDER(Woodland, UK3CB_BAF_B_Bergen_DPMW_SL_A)
2000_BACKPACK_COIN_PLATOON_SERGEANT(Woodland, UK3CB_BAF_B_Bergen_DPMW_SL_A)
2000_BACKPACK_COIN_PLATOON_MEDIC(Woodland, UK3CB_BAF_B_Bergen_DPMW_Rifleman_B)

//Attachments
2000_BACKPACK_COIN_JAVELIN_ASS(Woodland, UK3CB_BAF_B_Bergen_DPMW_Rifleman_B)
2000_BACKPACK_COIN_SPOTTER(Woodland, UK3CB_BAF_B_Bergen_DPMW_SL_A)
2000_BACKPACK_COIN_ARTILLERY_COMMANDER(Woodland, UK3CB_BAF_B_Bergen_DPMW_SL_A)
2000_BACKPACK_COIN_FO(Woodland, UK3CB_BAF_B_Bergen_DPMW_SL_A)
2000_BACKPACK_COIN_EOD_COMMANDER(Woodland, UK3CB_BAF_B_Bergen_DPMW_SL_A)
2000_BACKPACK_COIN_FAC(Woodland, UK3CB_BAF_B_Bergen_DPMW_JTAC_H_A)

//WOODLAND, COIN, DISMOUNTED
//Section
2000_BACKPACK_COIN_DISMOUNTED_RIFLEMAN(Woodland, UK3CB_BAF_B_Bergen_DPMW_Rifleman_A)
2000_BACKPACK_COIN_DISMOUNTED_AUTORIFLEMAN(Woodland, UK3CB_BAF_B_Bergen_DPMW_Rifleman_A)
2000_BACKPACK_COIN_DISMOUNTED_MARKSMAN(Woodland, UK3CB_BAF_B_Bergen_DPMW_Rifleman_A)
2000_BACKPACK_COIN_DISMOUNTED_GRENADIER(Woodland, UK3CB_BAF_B_Bergen_DPMW_Rifleman_A)
2000_BACKPACK_COIN_DISMOUNTED_SECTIONCOMMANDER(Woodland, UK3CB_BAF_B_Bergen_DPMW_SL_A)
2000_BACKPACK_COIN_DISMOUNTED_2IC(Woodland, UK3CB_BAF_B_Bergen_DPMW_Rifleman_B)

//Platoon Command
2000_BACKPACK_COIN_DISMOUNTED_PLATOON_COMMANDER(Woodland, UK3CB_BAF_B_Bergen_DPMW_SL_A)
2000_BACKPACK_COIN_DISMOUNTED_PLATOON_SERGEANT(Woodland, UK3CB_BAF_B_Bergen_DPMW_SL_A)
2000_BACKPACK_COIN_DISMOUNTED_PLATOON_MEDIC(Woodland, UK3CB_BAF_B_Bergen_DPMW_Rifleman_B)

//DESERT, COIN
//Section
2000_BACKPACK_COIN_SECTIONCOMMANDER(Desert, UK3CB_BAF_B_Bergen_DDPM_SL_A)
2000_BACKPACK_COIN_2IC(Desert, UK3CB_BAF_B_Bergen_DDPM_Rifleman_A)

//Platoon Command
2000_BACKPACK_COIN_PLATOON_COMMANDER(Desert, UK3CB_BAF_B_Bergen_DDPM_SL_A)
2000_BACKPACK_COIN_PLATOON_SERGEANT(Desert, UK3CB_BAF_B_Bergen_DDPM_SL_A)
2000_BACKPACK_COIN_PLATOON_MEDIC(Desert, UK3CB_BAF_B_Bergen_DDPM_Rifleman_B)

//Attachments
2000_BACKPACK_COIN_JAVELIN_ASS(Desert, UK3CB_BAF_B_Bergen_DDPM_Rifleman_B)
2000_BACKPACK_COIN_SPOTTER(Desert, UK3CB_BAF_B_Bergen_DDPM_SL_A)
2000_BACKPACK_COIN_ARTILLERY_COMMANDER(Desert, UK3CB_BAF_B_Bergen_DDPM_SL_A)
2000_BACKPACK_COIN_FO(Desert, UK3CB_BAF_B_Bergen_DDPM_SL_A)
2000_BACKPACK_COIN_EOD_COMMANDER(Desert, UK3CB_BAF_B_Bergen_DDPM_SL_A)
2000_BACKPACK_COIN_FAC(Desert, UK3CB_BAF_B_Bergen_DDPM_JTAC_H_A)

//DESERT, COIN, DISMOUNTED
//Section
2000_BACKPACK_COIN_DISMOUNTED_RIFLEMAN(Desert, UK3CB_BAF_B_Bergen_DDPM_Rifleman_A)
2000_BACKPACK_COIN_DISMOUNTED_AUTORIFLEMAN(Desert, UK3CB_BAF_B_Bergen_DDPM_Rifleman_A)
2000_BACKPACK_COIN_DISMOUNTED_MARKSMAN(Desert, UK3CB_BAF_B_Bergen_DDPM_Rifleman_A)
2000_BACKPACK_COIN_DISMOUNTED_GRENADIER(Desert, UK3CB_BAF_B_Bergen_DDPM_Rifleman_A)
2000_BACKPACK_COIN_DISMOUNTED_SECTIONCOMMANDER(Desert, UK3CB_BAF_B_Bergen_DDPM_SL_A)
2000_BACKPACK_COIN_DISMOUNTED_2IC(Desert, UK3CB_BAF_B_Bergen_DDPM_Rifleman_B)

//Platoon Command
2000_BACKPACK_COIN_DISMOUNTED_PLATOON_COMMANDER(Desert, UK3CB_BAF_B_Bergen_DDPM_SL_A)
2000_BACKPACK_COIN_DISMOUNTED_PLATOON_SERGEANT(Desert, UK3CB_BAF_B_Bergen_DDPM_SL_A)
2000_BACKPACK_COIN_DISMOUNTED_PLATOON_MEDIC(Desert, UK3CB_BAF_B_Bergen_DDPM_Rifleman_B)

//TROPIC, COIN
//Section
2000_BACKPACK_COIN_SECTIONCOMMANDER(Tropic, UK3CB_BAF_B_Bergen_DPMT_SL_A)
2000_BACKPACK_COIN_2IC(Tropic, UK3CB_BAF_B_Bergen_DPMT_Rifleman_A)

//Platoon Command
2000_BACKPACK_COIN_PLATOON_COMMANDER(Tropic, UK3CB_BAF_B_Bergen_DPMT_SL_A)
2000_BACKPACK_COIN_PLATOON_SERGEANT(Tropic, UK3CB_BAF_B_Bergen_DPMT_SL_A)
2000_BACKPACK_COIN_PLATOON_MEDIC(Tropic, UK3CB_BAF_B_Bergen_DPMT_Rifleman_B)

//Attachments
2000_BACKPACK_COIN_JAVELIN_ASS(Tropic, UK3CB_BAF_B_Bergen_DPMT_Rifleman_B)
2000_BACKPACK_COIN_SPOTTER(Tropic, UK3CB_BAF_B_Bergen_DPMT_SL_A)
2000_BACKPACK_COIN_ARTILLERY_COMMANDER(Tropic, UK3CB_BAF_B_Bergen_DPMT_SL_A)
2000_BACKPACK_COIN_FO(Tropic, UK3CB_BAF_B_Bergen_DPMT_SL_A)
2000_BACKPACK_COIN_EOD_COMMANDER(Tropic, UK3CB_BAF_B_Bergen_DPMT_SL_A)
2000_BACKPACK_COIN_FAC(Tropic, UK3CB_BAF_B_Bergen_DPMT_JTAC_H_A)

//TROPIC, COIN, DISMOUNTED
//Section
2000_BACKPACK_COIN_DISMOUNTED_RIFLEMAN(Tropic, UK3CB_BAF_B_Bergen_DPMT_Rifleman_A)
2000_BACKPACK_COIN_DISMOUNTED_AUTORIFLEMAN(Tropic, UK3CB_BAF_B_Bergen_DPMT_Rifleman_A)
2000_BACKPACK_COIN_DISMOUNTED_MARKSMAN(Tropic, UK3CB_BAF_B_Bergen_DPMT_Rifleman_A)
2000_BACKPACK_COIN_DISMOUNTED_GRENADIER(Tropic, UK3CB_BAF_B_Bergen_DPMT_Rifleman_A)
2000_BACKPACK_COIN_DISMOUNTED_SECTIONCOMMANDER(Tropic, UK3CB_BAF_B_Bergen_DPMT_SL_A)
2000_BACKPACK_COIN_DISMOUNTED_2IC(Tropic, UK3CB_BAF_B_Bergen_DPMT_Rifleman_B)

//Platoon Command
2000_BACKPACK_COIN_DISMOUNTED_PLATOON_COMMANDER(Tropic, UK3CB_BAF_B_Bergen_DPMT_SL_A)
2000_BACKPACK_COIN_DISMOUNTED_PLATOON_SERGEANT(Tropic, UK3CB_BAF_B_Bergen_DPMT_SL_A)
2000_BACKPACK_COIN_DISMOUNTED_PLATOON_MEDIC(Tropic, UK3CB_BAF_B_Bergen_DPMT_Rifleman_B)

//ARCTIC, COIN
//Section
2000_BACKPACK_COIN_SECTIONCOMMANDER(Arctic, UK3CB_BAF_B_Bergen_Arctic_SL_A)
2000_BACKPACK_COIN_2IC(Arctic, UK3CB_BAF_B_Bergen_Arctic_Rifleman_A)

//Platoon Command
2000_BACKPACK_COIN_PLATOON_COMMANDER(Arctic, UK3CB_BAF_B_Bergen_Arctic_SL_A)
2000_BACKPACK_COIN_PLATOON_SERGEANT(Arctic, UK3CB_BAF_B_Bergen_Arctic_SL_A)
2000_BACKPACK_COIN_PLATOON_MEDIC(Arctic, UK3CB_BAF_B_Bergen_Arctic_Rifleman_B)

//Attachments
2000_BACKPACK_COIN_JAVELIN_ASS(Arctic, UK3CB_BAF_B_Bergen_Arctic_Rifleman_B)
2000_BACKPACK_COIN_SPOTTER(Arctic, UK3CB_BAF_B_Bergen_Arctic_SL_A)
2000_BACKPACK_COIN_ARTILLERY_COMMANDER(Arctic, UK3CB_BAF_B_Bergen_Arctic_SL_A)
2000_BACKPACK_COIN_FO(Arctic, UK3CB_BAF_B_Bergen_DPMT_SL_A)
2000_BACKPACK_COIN_EOD_COMMANDER(Arctic, UK3CB_BAF_B_Bergen_Arctic_SL_A)
2000_BACKPACK_COIN_FAC(Arctic, UK3CB_BAF_B_Bergen_Arctic_JTAC_H_A)

//Arctic, COIN, DISMOUNTED
//Section
2000_BACKPACK_COIN_DISMOUNTED_RIFLEMAN(Arctic, UK3CB_BAF_B_Bergen_Arctic_Rifleman_A)
2000_BACKPACK_COIN_DISMOUNTED_AUTORIFLEMAN(Arctic, UK3CB_BAF_B_Bergen_Arctic_Rifleman_A)
2000_BACKPACK_COIN_DISMOUNTED_MARKSMAN(Arctic, UK3CB_BAF_B_Bergen_Arctic_Rifleman_A)
2000_BACKPACK_COIN_DISMOUNTED_GRENADIER(Arctic, UK3CB_BAF_B_Bergen_Arctic_Rifleman_A)
2000_BACKPACK_COIN_DISMOUNTED_SECTIONCOMMANDER(Arctic, UK3CB_BAF_B_Bergen_Arctic_SL_A)
2000_BACKPACK_COIN_DISMOUNTED_2IC(Arctic, UK3CB_BAF_B_Bergen_Arctic_Rifleman_B)

//Platoon Command
2000_BACKPACK_COIN_DISMOUNTED_PLATOON_COMMANDER(Arctic, UK3CB_BAF_B_Bergen_Arctic_SL_A)
2000_BACKPACK_COIN_DISMOUNTED_PLATOON_SERGEANT(Arctic, UK3CB_BAF_B_Bergen_Arctic_SL_A)
2000_BACKPACK_COIN_DISMOUNTED_PLATOON_MEDIC(Arctic, UK3CB_BAF_B_Bergen_Arctic_Rifleman_B)