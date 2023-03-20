#define ADD_MAGA(a,b) class _nc_##a {magazine = a; count = b;}
#define ADD_WEAP(a,b) class _nc_##a {weapon = a; count = b;}
#define ADD_ITEM(a,b) class _nc_##a {name = a; count = b;}

//Base Classes
class sp_webbing_58pattern_LargePack;
class SP_Backpack_CarlGustavCarrier;
class SP_Backpack_RucksackGS_CarlGustav;
class SP_Backpack_RucksackGS;
class SP_Backpack_BlowpipeCarrier;
class SP_Backpack_2InchCarrier;

//Section, regular
class TWC_Backpack_ColdWar_Regular_SectionCommander: sp_webbing_58pattern_LargePack
{
	scope = 1;
	maximumLoad = 250;
	class TransportMagazines {
		ADD_MAGA(SmokeShell,1);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
		ADD_MAGA(UK3CB_BAF_762_20Rnd,2);
		ADD_MAGA(UK3CB_BAF_762_20Rnd_T,2);
	};
	class TransportItems {
		ADD_ITEM(ACRE_PRC77,1);
	};
};
class TWC_Backpack_ColdWar_Regular_2iC: sp_webbing_58pattern_LargePack
{
	scope = 1;
	maximumLoad = 350;
	
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_762_20Rnd, 6);
		ADD_MAGA(UK3CB_BAF_762_20Rnd_T, 2);
		ADD_MAGA(SP_30Rnd_9x19_L2A3_Sterling, 4);
		ADD_MAGA(SmokeShell, 2);
		ADD_MAGA(UK3CB_BAF_762_100Rnd_T, 3);
		ADD_MAGA(CUP_HandGrenade_L109A2_HE, 2);
	};
	
	class TransportItems {
		ADD_ITEM(ACE_morphine,4);
		ADD_ITEM(ACE_epinephrine,2);
	};
};
class TWC_Backpack_ColdWar_Regular_ASSAT: SP_Backpack_CarlGustavCarrier
{
	scope = 1;
	maximumLoad = 300;
	class TransportMagazines {
		ADD_MAGA(TWC_Magazine_L14A1_HEAT,2);
		ADD_MAGA(TWC_Magazine_L14A1_HE,1);
	};
};
class TWC_Backpack_ColdWar_Regular_ASSMG: sp_webbing_58pattern_LargePack
{
	scope = 1;
	maximumLoad = 200;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_762_100Rnd_T,2);
		ADD_MAGA(UK3CB_BAF_762_100Rnd,1);
	};
};

//Section, regular, dismounted
class TWC_Backpack_ColdWar_Regular_Dismounted_Rifleman: sp_webbing_58pattern_LargePack
{
	scope = 1;
	maximumLoad = 200;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_762_20Rnd, 8);
		ADD_MAGA(UK3CB_BAF_762_100Rnd_T, 1);
	};
};
class TWC_Backpack_ColdWar_Regular_Dismounted_AT: SP_Backpack_CarlGustavCarrier
{
	scope = 1;
	maximumLoad = 300;
	class TransportMagazines {
		ADD_MAGA(TWC_Magazine_L14A1_HEAT,1);
		ADD_MAGA(SP_30Rnd_9x19_L2A3_Sterling,4);
	};
};
class TWC_Backpack_ColdWar_Regular_Dismounted_ATASS: SP_Backpack_CarlGustavCarrier
{
	scope = 1;
	maximumLoad = 350;
	class TransportMagazines {
		ADD_MAGA(TWC_Magazine_L14A1_HEAT,2);
		ADD_MAGA(TWC_Magazine_L14A1_HE,2);
		ADD_MAGA(UK3CB_BAF_762_20Rnd,4);
	};
};
class TWC_Backpack_ColdWar_Regular_Dismounted_MG: sp_webbing_58pattern_LargePack
{
	scope = 1;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_762_100Rnd_T,1);
		ADD_MAGA(UK3CB_BAF_762_100Rnd,1);
	};
};
class TWC_Backpack_ColdWar_Regular_Dismounted_ASSMG: sp_webbing_58pattern_LargePack
{
	scope = 1;
	maximumLoad = 300;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_762_100Rnd_T,2);
		ADD_MAGA(UK3CB_BAF_762_100Rnd,1);
		ADD_MAGA(UK3CB_BAF_762_20Rnd,8);
	};
};

//Section, COIN
class TWC_Backpack_ColdWar_COIN_SectionCommander: sp_webbing_58pattern_LargePack
{
	scope = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC77,1);
	};
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
	};
};
class TWC_Backpack_ColdWar_COIN_2iC: sp_webbing_58pattern_LargePack
{
	scope = 1;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_762_20Rnd, 6);
		ADD_MAGA(UK3CB_BAF_762_20Rnd_T, 2);
		ADD_MAGA(SmokeShell, 2);
		ADD_MAGA(SP_30Rnd_762_L4, 4);
		ADD_MAGA(CUP_HandGrenade_L109A2_HE, 2);
	};
	
	class TransportItems {
		ADD_ITEM(ACE_morphine,4);
		ADD_ITEM(ACE_epinephrine,2);
	};
};
class TWC_Backpack_ColdWar_COIN_ASSMG: sp_webbing_58pattern_LargePack
{
	scope = 1;
	class TransportMagazines {
		ADD_MAGA(SP_30Rnd_762_L4, 6);
	};
};

//Section, COIN, dismounted
class TWC_Backpack_ColdWar_COIN_Dismounted_Rifleman: sp_webbing_58pattern_LargePack
{
	scope = 1;
	maximumLoad = 200;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_762_20Rnd, 8);
	};
};
class TWC_Backpack_ColdWar_COIN_Dismounted_MG: sp_webbing_58pattern_LargePack
{
	scope = 1;
	class TransportMagazines {
		ADD_MAGA(SP_30Rnd_762_L4, 10);
	};
};
class TWC_Backpack_ColdWar_COIN_Dismounted_ASSMG: sp_webbing_58pattern_LargePack
{
	scope = 1;
	class TransportMagazines {
		ADD_MAGA(SP_30Rnd_762_L4, 6);
		ADD_MAGA(UK3CB_BAF_762_20Rnd, 6);
	};
};

//Platoon Command, regular
class TWC_Backpack_ColdWar_Regular_Platoon_Commander: sp_webbing_58pattern_LargePack
{
	scope = 1;
	maximumLoad = 200;
	class TransportItems {
		ADD_ITEM(ACRE_PRC77,1);
	};
	class TransportMagazines {
		ADD_MAGA(SmokeShell,1);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
	};
};
class TWC_Backpack_ColdWar_Regular_Platoon_Sergeant: sp_webbing_58pattern_LargePack
{
	scope = 1;
	maximumLoad = 600;
	class TransportItems {
		ADD_ITEM(ACRE_PRC77,1);
		ADD_ITEM(ACE_wirecutter,1);
	};
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
		ADD_MAGA(UK3CB_BAF_762_20Rnd,20);
		ADD_MAGA(UK3CB_BAF_762_20Rnd_T,8);
		ADD_MAGA(UK3CB_BAF_762_100Rnd_T,2);
		ADD_MAGA(SP_30Rnd_9x19_L2A3_Sterling,5);
	};
};
class TWC_Backpack_ColdWar_Regular_Platoon_Medic: sp_webbing_58pattern_LargePack
{
	scope = 1;
	maximumLoad = 250;
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
		ADD_ITEM(ACE_salineIV,6);
		ADD_ITEM(ACE_tourniquet,4);
		ADD_ITEM(ACE_splint,6);
		ADD_ITEM(ACE_personalAidKit,1);
		ADD_ITEM(ACE_surgicalKit,1);
	};
	
	class TransportMagazines {
		ADD_MAGA(SmokeShellBlue,1);
	};
};
class TWC_Backpack_ColdWar_Regular_Platoon_Mortar: SP_Backpack_2InchCarrier
{
	scope = 1;
	maximumLoad = 500;
	class TransportMagazines {
		ADD_MAGA(twc_2inch_he_1rnd,12);
		ADD_MAGA(twc_2inch_smoke_1rnd,8);
	};
};

//Platoon Command, COIN
class TWC_Backpack_ColdWar_COIN_Platoon_Commander: sp_webbing_58pattern_LargePack
{
	scope = 1;
	maximumLoad = 200;
	class TransportItems {
		ADD_ITEM(ACRE_PRC77,1);
	};
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
	};
};
class TWC_Backpack_ColdWar_COIN_Platoon_Sergeant: sp_webbing_58pattern_LargePack
{
	scope = 1;
	maximumLoad = 600;
	class TransportItems {
		ADD_ITEM(ACRE_PRC77,1);
		ADD_ITEM(ACE_wirecutter,1);
	};
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
		ADD_MAGA(UK3CB_BAF_762_20Rnd,20);
		ADD_MAGA(SP_30Rnd_762_L4,6);
		ADD_MAGA(SP_30Rnd_9x19_L2A3_Sterling,5);
	};
};
class TWC_Backpack_ColdWar_COIN_Platoon_Medic: sp_webbing_58pattern_LargePack
{
	scope = 1;
	maximumLoad = 250;
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
		ADD_ITEM(ACE_salineIV,6);
		ADD_ITEM(ACE_tourniquet,4);
		ADD_ITEM(ACE_personalAidKit,1);
		ADD_ITEM(ACE_surgicalKit,1);
	};
	
	class TransportMagazines {
		ADD_MAGA(SmokeShellBlue,1);
	};
};

//Attachments
class TWC_Backpack_ColdWar_Regular_MILAN_Ass: SP_Backpack_CarlGustavCarrier
{
	scope = 1;
	maximumLoad = 500;
	class TransportItems {
		//ADD_ITEM(,2);
	};
};
class TWC_Backpack_ColdWar_Regular_Blowpipe_Ass: SP_Backpack_BlowpipeCarrier
{
	scope = 1;
	maximumLoad = 200;
	class TransportMagazines {
		ADD_MAGA(SP_Blowpipe_round,2);
	};
};
class TWC_Backpack_ColdWar_Regular_Spotter: sp_webbing_58pattern_LargePack
{
	scope = 1;
	maximumLoad = 250;
	class TransportItems {
		ADD_ITEM(ACRE_PRC77,1);
	};
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
	};
};
class TWC_Backpack_ColdWar_Regular_Artillery_Commander: sp_webbing_58pattern_LargePack
{
	scope = 1;
	maximumLoad = 500;
	class TransportItems {
		ADD_ITEM(ACRE_PRC77,1);
	};
};
class TWC_Backpack_ColdWar_Regular_FO: sp_webbing_58pattern_LargePack
{
	scope = 1;
	maximumLoad = 250;
	class TransportItems {
		ADD_ITEM(ACRE_PRC77,1);
	};
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
	};
};
class TWC_Backpack_ColdWar_Regular_FAC: sp_webbing_58pattern_LargePack
{
	scope = 1;
	maximumLoad = 250;
	class TransportItems {
		ADD_ITEM(ACRE_PRC77,1);
	};
	class TransportMagazines {
		ADD_MAGA(SmokeShell, 5);
		ADD_MAGA(SmokeShellGreen, 5);
		ADD_MAGA(SmokeShellBlue, 5);
		ADD_MAGA(SmokeShellOrange, 5);
		ADD_MAGA(SmokeShellRed, 5);
		ADD_MAGA(SmokeShellPurple, 5);
	};
};

