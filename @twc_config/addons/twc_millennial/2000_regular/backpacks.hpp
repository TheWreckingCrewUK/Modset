//REGULAR
#define 2000_BACKPACK_REGULAR_SECTIONCOMMANDER(CAMO, INHERIT) \
class TWC_Backpack_2000_Regular_##CAMO##_SectionCommander: INHERIT \
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

#define 2000_BACKPACK_REGULAR_2IC(CAMO, INHERIT) \
class TWC_Backpack_2000_Regular_##CAMO##_2iC: INHERIT \
{ \
	scope = 1; \
	scopeArsenal = 1; \
	class TransportMagazines { \
		ADD_MAGA(SmokeShell,3); \
		ADD_MAGA(UK3CB_BAF_556_30Rnd,6); \
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,4); \
		ADD_MAGA(UK3CB_BAF_556_200Rnd,2); \
	}; \
};

#define 2000_BACKPACK_REGULAR_PLATOON_COMMANDER(CAMO, INHERIT) \
class TWC_Backpack_2000_Regular_##CAMO##_Platoon_Commander: INHERIT \
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

#define 2000_BACKPACK_REGULAR_PLATOON_SERGEANT(CAMO, INHERIT) \
class TWC_Backpack_2000_Regular_##CAMO##_Platoon_Sergeant: INHERIT \
{ \
	scope = 1; \
	scopeArsenal = 1; \
	maximumLoad = 450; \
	class TransportItems { \
		ADD_ITEM(ACRE_PRC117F,1); \
	}; \
	class TransportMagazines { \
		ADD_MAGA(SmokeShell,3); \
		ADD_MAGA(SmokeShellRed,2); \
		ADD_MAGA(SmokeShellBlue,2); \
		ADD_MAGA(UK3CB_BAF_556_30Rnd,14); \
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,6); \
		ADD_MAGA(UK3CB_BAF_556_200Rnd,2); \
	}; \
};

#define 2000_BACKPACK_REGULAR_PLATOON_MEDIC(CAMO, INHERIT) \
class TWC_Backpack_2000_Regular_##CAMO##_Platoon_Medic: INHERIT \
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
		ADD_ITEM(ACE_MARKSMANropine,4); \
		ADD_ITEM(ACE_epinephrine,10); \
		ADD_ITEM(ACE_salineIV_500,6); \
		ADD_ITEM(ACE_salineIV,6); \
		ADD_ITEM(ACE_tourniquet,4); \
		ADD_ITEM(ACE_splint,6); \
		ADD_ITEM(ACE_personalAidKit,1); \
		ADD_ITEM(ACE_surgicalKit,1); \
	}; \
};

#define 2000_BACKPACK_REGULAR_JAVELIN_ASS(CAMO, INHERIT) \
class TWC_Backpack_2000_Regular_##CAMO##_Javelin_Assistant: INHERIT \
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

#define 2000_BACKPACK_REGULAR_SPOTTER(CAMO, INHERIT) \
class TWC_Backpack_2000_Regular_##CAMO##_Spotter: INHERIT \
{ \
	scope = 1; \
	scopeArsenal = 1; \
	class TransportItems { \
		ADD_ITEM(ACRE_PRC117F,1); \
		ADD_ITEM(ACE_Tripod,1); \
		ADD_ITEM(ACE_SpottingScope,1); \
	}; \
};

#define 2000_BACKPACK_REGULAR_ARTILLERY_COMMANDER(CAMO, INHERIT) \
class TWC_Backpack_2000_Regular_##CAMO##_Artillery_Commander: INHERIT \
{ \
	scope = 1; \
	scopeArsenal = 1; \
	maximumLoad = 400; \
	class TransportItems { \
		ADD_ITEM(ACRE_PRC117F,1); \
	}; \
};

#define 2000_BACKPACK_REGULAR_FO(CAMO, INHERIT) \
class TWC_Backpack_2000_Regular_##CAMO##_FO: INHERIT \
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

#define 2000_BACKPACK_REGULAR_EOD_COMMANDER(CAMO, INHERIT) \
class TWC_Backpack_2000_Regular_##CAMO##_EOD_Commander: INHERIT \
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

#define 2000_BACKPACK_REGULAR_FAC(CAMO, INHERIT) \
class TWC_Backpack_2000_Regular_##CAMO##_FAC: INHERIT \
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
#define 2000_BACKPACK_REGULAR_DISMOUNTED_RIFLEMAN(CAMO, INHERIT) \
class TWC_Backpack_2000_Regular_Dismounted_##CAMO##_Rifleman: INHERIT \
{ \
	scope = 1; \
	scopeArsenal = 1; \
	class TransportMagazines { \
		ADD_MAGA(UK3CB_BAF_556_30Rnd,6); \
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,4); \
		ADD_MAGA(UK3CB_BAF_556_200Rnd, 2); \
	}; \
};

#define 2000_BACKPACK_REGULAR_DISMOUNTED_MARKSMAN(CAMO, INHERIT) \
class TWC_Backpack_2000_Regular_Dismounted_##CAMO##_Marksman: INHERIT \
{ \
	scope = 1; \
	scopeArsenal = 1; \
	class TransportMagazines { \
		ADD_MAGA(UK3CB_BAF_556_30Rnd,6); \
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,4); \
		ADD_MAGA(UK3CB_BAF_556_200Rnd, 2); \
	}; \
};

#define 2000_BACKPACK_REGULAR_DISMOUNTED_AUTORIFLEMAN(CAMO, INHERIT) \
class TWC_Backpack_2000_Regular_Dismounted_##CAMO##_Autorifleman: INHERIT \
{ \
	scope = 1; \
	scopeArsenal = 1; \
	class TransportMagazines { \
		ADD_MAGA(UK3CB_BAF_556_200Rnd, 3); \
	}; \
};

#define 2000_BACKPACK_REGULAR_DISMOUNTED_GRENADIER(CAMO, INHERIT) \
class TWC_Backpack_2000_Regular_Dismounted_##CAMO##_Grenadier: INHERIT \
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

#define 2000_BACKPACK_REGULAR_DISMOUNTED_SECTIONCOMMANDER(CAMO, INHERIT) \
class TWC_Backpack_2000_Regular_Dismounted_##CAMO##_SectionCommander: INHERIT \
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

#define 2000_BACKPACK_REGULAR_DISMOUNTED_2IC(CAMO, INHERIT) \
class TWC_Backpack_2000_Regular_Dismounted_##CAMO##_2iC: INHERIT \
{ \
	scope = 1; \
	scopeArsenal = 1; \
	class TransportMagazines { \
		ADD_MAGA(UK3CB_BAF_556_30Rnd,6); \
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,4); \
		ADD_MAGA(UK3CB_BAF_556_200Rnd, 2); \
	}; \
};

#define 2000_BACKPACK_REGULAR_DISMOUNTED_PLATOON_COMMANDER(CAMO, INHERIT) \
class TWC_Backpack_2000_Regular_Dismounted_##CAMO##_Platoon_Commander: INHERIT \
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

#define 2000_BACKPACK_REGULAR_DISMOUNTED_PLATOON_SERGEANT(CAMO, INHERIT) \
class TWC_Backpack_2000_Regular_Dismounted_##CAMO##_Platoon_Sergeant: INHERIT \
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

#define 2000_BACKPACK_REGULAR_DISMOUNTED_PLATOON_MEDIC(CAMO, INHERIT) \
class TWC_Backpack_2000_Regular_Dismounted_##CAMO##_Platoon_Medic: INHERIT \
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
		ADD_ITEM(ACE_MARKSMANropine,4); \
		ADD_ITEM(ACE_epinephrine,10); \
		ADD_ITEM(ACE_salineIV_500,12); \
		ADD_ITEM(ACE_salineIV_250,4); \
		ADD_ITEM(ACE_tourniquet,4); \
		ADD_ITEM(ACE_personalAidKit,1); \
		ADD_ITEM(ACE_surgicalKit,1); \
	}; \
};

//WOODLAND, REGULAR
//Section
2000_BACKPACK_REGULAR_SECTIONCOMMANDER(Woodland, UK3CB_BAF_B_Bergen_DPMW_SL_A)
2000_BACKPACK_REGULAR_2IC(Woodland, UK3CB_BAF_B_Bergen_DPMW_Rifleman_A)

//Platoon Command
2000_BACKPACK_REGULAR_PLATOON_COMMANDER(Woodland, UK3CB_BAF_B_Bergen_DPMW_SL_A)
2000_BACKPACK_REGULAR_PLATOON_SERGEANT(Woodland, UK3CB_BAF_B_Bergen_DPMW_SL_A)
2000_BACKPACK_REGULAR_PLATOON_MEDIC(Woodland, UK3CB_BAF_B_Bergen_DPMW_Rifleman_B)

//Attachments
2000_BACKPACK_REGULAR_JAVELIN_ASS(Woodland, UK3CB_BAF_B_Bergen_DPMW_Rifleman_B)
2000_BACKPACK_REGULAR_SPOTTER(Woodland, UK3CB_BAF_B_Bergen_DPMW_SL_A)
2000_BACKPACK_REGULAR_ARTILLERY_COMMANDER(Woodland, UK3CB_BAF_B_Bergen_DPMW_SL_A)
2000_BACKPACK_REGULAR_FO(Woodland, UK3CB_BAF_B_Bergen_DPMW_SL_A)
2000_BACKPACK_REGULAR_EOD_COMMANDER(Woodland, UK3CB_BAF_B_Bergen_DPMW_SL_A)
2000_BACKPACK_REGULAR_FAC(Woodland, UK3CB_BAF_B_Bergen_DPMW_JTAC_H_A)

//WOODLAND, REGULAR, DISMOUNTED
//Section
2000_BACKPACK_REGULAR_DISMOUNTED_RIFLEMAN(Woodland, UK3CB_BAF_B_Bergen_DPMW_Rifleman_A)
2000_BACKPACK_REGULAR_DISMOUNTED_MARKSMAN(Woodland, UK3CB_BAF_B_Bergen_DPMW_Rifleman_A)
2000_BACKPACK_REGULAR_DISMOUNTED_GRENADIER(Woodland, UK3CB_BAF_B_Bergen_DPMW_Rifleman_A)
2000_BACKPACK_REGULAR_DISMOUNTED_AUTORIFLEMAN(Woodland, UK3CB_BAF_B_Bergen_DPMW_Rifleman_A)
2000_BACKPACK_REGULAR_DISMOUNTED_SECTIONCOMMANDER(Woodland, UK3CB_BAF_B_Bergen_DPMW_SL_A)
2000_BACKPACK_REGULAR_DISMOUNTED_2IC(Woodland, UK3CB_BAF_B_Bergen_DPMW_Rifleman_B)

//Platoon Command
2000_BACKPACK_REGULAR_DISMOUNTED_PLATOON_COMMANDER(Woodland, UK3CB_BAF_B_Bergen_DPMW_SL_A)
2000_BACKPACK_REGULAR_DISMOUNTED_PLATOON_SERGEANT(Woodland, UK3CB_BAF_B_Bergen_DPMW_SL_A)
2000_BACKPACK_REGULAR_DISMOUNTED_PLATOON_MEDIC(Woodland, UK3CB_BAF_B_Bergen_DPMW_Rifleman_B)

//DESERT, REGULAR
//Section
2000_BACKPACK_REGULAR_SECTIONCOMMANDER(Desert, UK3CB_BAF_B_Bergen_DDPM_SL_A)
2000_BACKPACK_REGULAR_2IC(Desert, UK3CB_BAF_B_Bergen_DDPM_Rifleman_A)

//Platoon Command
2000_BACKPACK_REGULAR_PLATOON_COMMANDER(Desert, UK3CB_BAF_B_Bergen_DDPM_SL_A)
2000_BACKPACK_REGULAR_PLATOON_SERGEANT(Desert, UK3CB_BAF_B_Bergen_DDPM_SL_A)
2000_BACKPACK_REGULAR_PLATOON_MEDIC(Desert, UK3CB_BAF_B_Bergen_DDPM_Rifleman_B)

//Attachments
2000_BACKPACK_REGULAR_JAVELIN_ASS(Desert, UK3CB_BAF_B_Bergen_DDPM_Rifleman_B)
2000_BACKPACK_REGULAR_SPOTTER(Desert, UK3CB_BAF_B_Bergen_DDPM_SL_A)
2000_BACKPACK_REGULAR_ARTILLERY_COMMANDER(Desert, UK3CB_BAF_B_Bergen_DDPM_SL_A)
2000_BACKPACK_REGULAR_FO(Desert, UK3CB_BAF_B_Bergen_DDPM_SL_A)
2000_BACKPACK_REGULAR_EOD_COMMANDER(Desert, UK3CB_BAF_B_Bergen_DDPM_SL_A)
2000_BACKPACK_REGULAR_FAC(Desert, UK3CB_BAF_B_Bergen_DDPM_JTAC_H_A)

//DESERT, REGULAR, DISMOUNTED
//Section
2000_BACKPACK_REGULAR_DISMOUNTED_RIFLEMAN(Desert, UK3CB_BAF_B_Bergen_DDPM_Rifleman_A)
2000_BACKPACK_REGULAR_DISMOUNTED_MARKSMAN(Desert, UK3CB_BAF_B_Bergen_DDPM_Rifleman_A)
2000_BACKPACK_REGULAR_DISMOUNTED_GRENADIER(Desert, UK3CB_BAF_B_Bergen_DDPM_Rifleman_A)
2000_BACKPACK_REGULAR_DISMOUNTED_AUTORIFLEMAN(Desert, UK3CB_BAF_B_Bergen_DDPM_Rifleman_A)
2000_BACKPACK_REGULAR_DISMOUNTED_SECTIONCOMMANDER(Desert, UK3CB_BAF_B_Bergen_DDPM_SL_A)
2000_BACKPACK_REGULAR_DISMOUNTED_2IC(Desert, UK3CB_BAF_B_Bergen_DDPM_Rifleman_B)

//Platoon Command
2000_BACKPACK_REGULAR_DISMOUNTED_PLATOON_COMMANDER(Desert, UK3CB_BAF_B_Bergen_DDPM_SL_A)
2000_BACKPACK_REGULAR_DISMOUNTED_PLATOON_SERGEANT(Desert, UK3CB_BAF_B_Bergen_DDPM_SL_A)
2000_BACKPACK_REGULAR_DISMOUNTED_PLATOON_MEDIC(Desert, UK3CB_BAF_B_Bergen_DDPM_Rifleman_B)

//TROPIC, REGULAR
//Section
2000_BACKPACK_REGULAR_SECTIONCOMMANDER(Tropic, UK3CB_BAF_B_Bergen_DPMT_SL_A)
2000_BACKPACK_REGULAR_2IC(Tropic, UK3CB_BAF_B_Bergen_DPMT_Rifleman_A)

//Platoon Command
2000_BACKPACK_REGULAR_PLATOON_COMMANDER(Tropic, UK3CB_BAF_B_Bergen_DPMT_SL_A)
2000_BACKPACK_REGULAR_PLATOON_SERGEANT(Tropic, UK3CB_BAF_B_Bergen_DPMT_SL_A)
2000_BACKPACK_REGULAR_PLATOON_MEDIC(Tropic, UK3CB_BAF_B_Bergen_DPMT_Rifleman_B)

//Attachments
2000_BACKPACK_REGULAR_JAVELIN_ASS(Tropic, UK3CB_BAF_B_Bergen_DPMT_Rifleman_B)
2000_BACKPACK_REGULAR_SPOTTER(Tropic, UK3CB_BAF_B_Bergen_DPMT_SL_A)
2000_BACKPACK_REGULAR_ARTILLERY_COMMANDER(Tropic, UK3CB_BAF_B_Bergen_DPMT_SL_A)
2000_BACKPACK_REGULAR_FO(Tropic, UK3CB_BAF_B_Bergen_DPMT_SL_A)
2000_BACKPACK_REGULAR_EOD_COMMANDER(Tropic, UK3CB_BAF_B_Bergen_DPMT_SL_A)
2000_BACKPACK_REGULAR_FAC(Tropic, UK3CB_BAF_B_Bergen_DPMT_JTAC_H_A)

//TROPIC, REGULAR, DISMOUNTED
//Section
2000_BACKPACK_REGULAR_DISMOUNTED_RIFLEMAN(Tropic, UK3CB_BAF_B_Bergen_DPMT_Rifleman_A)
2000_BACKPACK_REGULAR_DISMOUNTED_MARKSMAN(Tropic, UK3CB_BAF_B_Bergen_DPMT_Rifleman_A)
2000_BACKPACK_REGULAR_DISMOUNTED_GRENADIER(Tropic, UK3CB_BAF_B_Bergen_DPMT_Rifleman_A)
2000_BACKPACK_REGULAR_DISMOUNTED_AUTORIFLEMAN(Tropic, UK3CB_BAF_B_Bergen_DPMT_Rifleman_A)
2000_BACKPACK_REGULAR_DISMOUNTED_SECTIONCOMMANDER(Tropic, UK3CB_BAF_B_Bergen_DPMT_SL_A)
2000_BACKPACK_REGULAR_DISMOUNTED_2IC(Tropic, UK3CB_BAF_B_Bergen_DPMT_Rifleman_B)

//Platoon Command
2000_BACKPACK_REGULAR_DISMOUNTED_PLATOON_COMMANDER(Tropic, UK3CB_BAF_B_Bergen_DPMT_SL_A)
2000_BACKPACK_REGULAR_DISMOUNTED_PLATOON_SERGEANT(Tropic, UK3CB_BAF_B_Bergen_DPMT_SL_A)
2000_BACKPACK_REGULAR_DISMOUNTED_PLATOON_MEDIC(Tropic, UK3CB_BAF_B_Bergen_DPMT_Rifleman_B)

//ARCTIC, REGULAR
//Section
2000_BACKPACK_REGULAR_SECTIONCOMMANDER(Arctic, UK3CB_BAF_B_Bergen_Arctic_SL_A)
2000_BACKPACK_REGULAR_2IC(Arctic, UK3CB_BAF_B_Bergen_Arctic_Rifleman_A)

//Platoon Command
2000_BACKPACK_REGULAR_PLATOON_COMMANDER(Arctic, UK3CB_BAF_B_Bergen_Arctic_SL_A)
2000_BACKPACK_REGULAR_PLATOON_SERGEANT(Arctic, UK3CB_BAF_B_Bergen_Arctic_SL_A)
2000_BACKPACK_REGULAR_PLATOON_MEDIC(Arctic, UK3CB_BAF_B_Bergen_Arctic_Rifleman_B)

//Attachments
2000_BACKPACK_REGULAR_JAVELIN_ASS(Arctic, UK3CB_BAF_B_Bergen_Arctic_Rifleman_B)
2000_BACKPACK_REGULAR_SPOTTER(Arctic, UK3CB_BAF_B_Bergen_Arctic_SL_A)
2000_BACKPACK_REGULAR_ARTILLERY_COMMANDER(Arctic, UK3CB_BAF_B_Bergen_Arctic_SL_A)
2000_BACKPACK_REGULAR_FO(Arctic, UK3CB_BAF_B_Bergen_DPMT_SL_A)
2000_BACKPACK_REGULAR_EOD_COMMANDER(Arctic, UK3CB_BAF_B_Bergen_Arctic_SL_A)
2000_BACKPACK_REGULAR_FAC(Arctic, UK3CB_BAF_B_Bergen_Arctic_JTAC_H_A)

//Arctic, REGULAR, DISMOUNTED
//Section
2000_BACKPACK_REGULAR_DISMOUNTED_RIFLEMAN(Arctic, UK3CB_BAF_B_Bergen_Arctic_Rifleman_A)
2000_BACKPACK_REGULAR_DISMOUNTED_MARKSMAN(Arctic, UK3CB_BAF_B_Bergen_Arctic_Rifleman_A)
2000_BACKPACK_REGULAR_DISMOUNTED_GRENADIER(Arctic, UK3CB_BAF_B_Bergen_Arctic_Rifleman_A)
2000_BACKPACK_REGULAR_DISMOUNTED_AUTORIFLEMAN(Arctic, UK3CB_BAF_B_Bergen_Arctic_Rifleman_A)
2000_BACKPACK_REGULAR_DISMOUNTED_SECTIONCOMMANDER(Arctic, UK3CB_BAF_B_Bergen_Arctic_SL_A)
2000_BACKPACK_REGULAR_DISMOUNTED_2IC(Arctic, UK3CB_BAF_B_Bergen_Arctic_Rifleman_B)

//Platoon Command
2000_BACKPACK_REGULAR_DISMOUNTED_PLATOON_COMMANDER(Arctic, UK3CB_BAF_B_Bergen_Arctic_SL_A)
2000_BACKPACK_REGULAR_DISMOUNTED_PLATOON_SERGEANT(Arctic, UK3CB_BAF_B_Bergen_Arctic_SL_A)
2000_BACKPACK_REGULAR_DISMOUNTED_PLATOON_MEDIC(Arctic, UK3CB_BAF_B_Bergen_Arctic_Rifleman_B)