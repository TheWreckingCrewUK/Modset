//WOODLAND, REGULAR
//Section
class TWC_Backpack_2010_Regular_Woodland_SectionCommander: UK3CB_BAF_B_Bergen_MTP_SL_L_A
{
	scope = 1;
	scopeArsenal = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
	};
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
	};
};
class TWC_Backpack_2010_Regular_Woodland_2iC: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_556_30Rnd, 6);
		ADD_MAGA(UK3CB_BAF_556_200Rnd, 2);
		ADD_MAGA(UK3CB_BAF_762_100Rnd, 1);
		ADD_MAGA(UK3CB_BAF_762_L42A1_20Rnd_T, 2);
		ADD_MAGA(SmokeShell, 4);
	};
};

//Platoon Command
class TWC_Backpack_2010_Regular_Woodland_Platoon_Commander: UK3CB_BAF_B_Bergen_MTP_SL_L_A
{
	scope = 1;
	scopeArsenal = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
	};
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
	};
};
class TWC_Backpack_2010_Regular_Woodland_Platoon_Sergeant: UK3CB_BAF_B_Bergen_MTP_SL_L_A
{
	scope = 1;
	scopeArsenal = 1;
	maximumLoad = 480;
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
	};
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_556_30Rnd, 6);
		ADD_MAGA(UK3CB_BAF_556_200Rnd, 2);
		ADD_MAGA(UK3CB_BAF_762_100Rnd, 1);
		ADD_MAGA(UK3CB_BAF_762_L42A1_20Rnd_T, 2);
		ADD_MAGA(SmokeShell, 4);
	};
};
class TWC_Backpack_2010_Regular_Woodland_Platoon_Medic: UK3CB_BAF_B_Bergen_MTP_Medic_L_A
{
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
class TWC_Backpack_2010_Regular_Woodland_Platoon_Mortar: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_1Rnd_60mm_Mo_Shells, 10);
		ADD_MAGA(UK3CB_BAF_1Rnd_60mm_Mo_Smoke_White, 4);
	};
};

//Attachments
class TWC_Backpack_2010_Regular_Woodland_Javelin_Assistant: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D
{
	scope = 1;
	scopeArsenal = 1;
	maximumLoad = 600;
	class TransportWeapons {
		ADD_WEAP(UK3CB_BAF_Javelin_Slung_Tube,1);
	};
};
/*class TWC_Backpack_2010_Regular_Woodland_Starstreak_Assistant: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D
{
	scope = 1;
	scopeArsenal = 1;
	maximumLoad = 600;
};*/
class TWC_Backpack_2010_Regular_Woodland_Spotter: UK3CB_BAF_B_Bergen_MTP_SL_L_A
{
	scope = 1;
	scopeArsenal = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
		ADD_ITEM(ACE_Tripod,1);
		ADD_ITEM(ACE_SpottingScope,1);
	};
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
	};
};
class TWC_Backpack_2010_Regular_Woodland_Artillery_Commander: UK3CB_BAF_B_Bergen_MTP_SL_L_A
{
	scope = 1;
	scopeArsenal = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
		ADD_ITEM(ACE_DAGR,1);
	};
};
class TWC_Backpack_2010_Regular_Woodland_FO: UK3CB_BAF_B_Bergen_MTP_SL_L_A
{
	scope = 1;
	scopeArsenal = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
		ADD_ITEM(ACE_DAGR,1);
	};
};
class TWC_Backpack_2010_Regular_Woodland_FAC: UK3CB_BAF_B_Bergen_MTP_JTAC_H_A
{
	scope = 1;
	scopeArsenal = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
		ADD_ITEM(ACE_DAGR,1);
	};
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_1Rnd_HE_Grenade_Shell,3);
		ADD_MAGA(1Rnd_Smoke_Grenade_shell,3);
		ADD_MAGA(1Rnd_SmokeRed_Grenade_shell,3);
		ADD_MAGA(1Rnd_SmokeGreen_Grenade_shell,3);
		ADD_MAGA(1Rnd_SmokeBlue_Grenade_shell,3);
		ADD_MAGA(1Rnd_SmokePurple_Grenade_shell,3);
	};
};

//WOODLAND, REGULAR, DISMOUNTED
//Section
class TWC_Backpack_2010_Regular_Dismounted_Woodland_Rifleman: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_556_30Rnd,8);
	};
};
class TWC_Backpack_2010_Regular_Dismounted_Woodland_Grenadier: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_556_30Rnd,8);
		ADD_MAGA(UK3CB_BAF_1Rnd_HE_Grenade_Shell,16);
		ADD_MAGA(1Rnd_Smoke_Grenade_shell,4);
		ADD_MAGA(1Rnd_SmokeRed_Grenade_shell,2);
		ADD_MAGA(1Rnd_SmokeBlue_Grenade_shell,2);
	};
};
class TWC_Backpack_2010_Regular_Dismounted_Woodland_Autorifleman: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_556_200Rnd,1);
		ADD_MAGA(UK3CB_BAF_556_200Rnd_T,1);
	};
};
class TWC_Backpack_2010_Regular_Dismounted_Woodland_MG: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_762_100Rnd,1);
		ADD_MAGA(UK3CB_BAF_762_100Rnd_T,1);
	};
};
class TWC_Backpack_2010_Regular_Dismounted_Woodland_Marksman: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_762_L42A1_20Rnd,5);
		ADD_MAGA(UK3CB_BAF_762_L42A1_20Rnd_T,3);
	};
};
class TWC_Backpack_2010_Regular_Dismounted_Woodland_SectionCommander: UK3CB_BAF_B_Bergen_MTP_SL_L_A
{
	scope = 1;
	scopeArsenal = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
	};
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_556_30Rnd,8);
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
	};
};
class TWC_Backpack_2010_Regular_Dismounted_Woodland_2iC: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D
{
	scope = 1;
	scopeArsenal = 1;
	maximumLoad = 480;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_556_30Rnd, 8);
		ADD_MAGA(UK3CB_BAF_556_200Rnd, 3);
		ADD_MAGA(UK3CB_BAF_762_100Rnd, 2);
		ADD_MAGA(UK3CB_BAF_762_L42A1_20Rnd_T, 4);
		ADD_MAGA(SmokeShell, 4);
	};
};

//Platoon Command
class TWC_Backpack_2010_Regular_Dismounted_Woodland_Platoon_Commander: UK3CB_BAF_B_Bergen_MTP_SL_L_A
{
	scope = 1;
	scopeArsenal = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
	};
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_556_30Rnd,6);
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,2);
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
	};
};
class TWC_Backpack_2010_Regular_Dismounted_Woodland_Platoon_Sergeant: UK3CB_BAF_B_Bergen_MTP_SL_L_A
{
	scope = 1;
	scopeArsenal = 1;
	maximumLoad = 640;
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
	};
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_556_30Rnd, 8);
		ADD_MAGA(UK3CB_BAF_556_200Rnd, 3);
		ADD_MAGA(UK3CB_BAF_762_100Rnd, 2);
		ADD_MAGA(UK3CB_BAF_762_L42A1_20Rnd_T, 4);
		ADD_MAGA(SmokeShell, 4);
	};
};
class TWC_Backpack_2010_Regular_Dismounted_Woodland_Platoon_Medic: UK3CB_BAF_B_Bergen_MTP_Medic_L_A
{
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
class TWC_Backpack_2010_Regular_Dismounted_Woodland_Platoon_Mortar: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_1Rnd_60mm_Mo_Shells, 10);
		ADD_MAGA(UK3CB_BAF_1Rnd_60mm_Mo_Smoke_White, 4);
	};
};
