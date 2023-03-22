//SECTION
class TWC_Backpack_1950_COIN_SectionCommander: B_LIB_UK_HSack
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(TWC_Magazine_SignalFlare_Blue, 3);
		ADD_MAGA(TWC_Magazine_SignalFlare_Red, 3);
		ADD_MAGA(TWC_Magazine_SignalFlare_Green, 3);
		ADD_MAGA(TWC_Magazine_SignalFlare_Yellow, 3);
		ADD_MAGA(TWC_Magazine_SignalSmoke_Green, 3);
		ADD_MAGA(TWC_Magazine_SignalSmoke_Red, 3);
		ADD_MAGA(TWC_Magazine_SignalSmoke_Yellow, 3);
		ADD_MAGA(TWC_Magazine_SignalSmoke_Blue, 3);
	};
};
class TWC_Backpack_1950_COIN_2iC: B_LIB_UK_HSack
{
	scope = 1;
	scopeArsenal = 1;
	maximumLoad = 200;
	class TransportMagazines {
		ADD_MAGA(fow_15Rnd_762x33,14);
		ADD_MAGA(LIB_30Rnd_770x56,4);
		ADD_MAGA(LIB_10Rnd_770x56,4);
		ADD_MAGA(LIB_30Rnd_45ACP,4);
		ADD_MAGA(LIB_MillsBomb,4);
		ADD_MAGA(SmokeShell,2);
	};
};
class TWC_Backpack_1950_COIN_Signaller: B_LIB_US_Radio_ACRE2
{
	scope = 1;
	scopeArsenal = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC77,1);
	};
};
class TWC_Backpack_1950_COIN_MGASS: B_LIB_UK_HSack
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(LIB_30Rnd_770x56,8);
	};
};

//SECTION, DISMOUNTED
class TWC_Backpack_1950_COIN_Dismounted_Rifleman: B_LIB_UK_HSack
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(fow_15Rnd_762x33,12);
		ADD_MAGA(LIB_30Rnd_770x56,4);
	};
};
class TWC_Backpack_1950_COIN_Dismounted_Signaller: B_LIB_US_Radio_ACRE2
{
	scope = 1;
	scopeArsenal = 1;
	maximumLoad = 200;
	class TransportItems {
		ADD_ITEM(ACRE_PRC77,1);
	};
	class TransportMagazines {
		ADD_MAGA(fow_15Rnd_762x33,12);
	};
};
class TWC_Backpack_1950_COIN_Dismounted_Marksman: B_LIB_UK_HSack
{
	scope = 1;
	scopeArsenal = 1;
	maximumLoad = 110;
	class TransportMagazines {
		ADD_MAGA(LIB_10Rnd_770x56,13);
		ADD_MAGA(LIB_30Rnd_770x56,4);
	};
};
class TWC_Backpack_1950_COIN_Dismounted_Grenadier: B_LIB_UK_HSack
{
	scope = 1;
	scopeArsenal = 1;
	maximumLoad = 150;
	class TransportMagazines {
		ADD_MAGA(LIB_10Rnd_770x56,12);
		ADD_MAGA(LIB_30Rnd_770x56,2);
		ADD_MAGA(LIB_1Rnd_G_MillsBomb,12);
	};
};
class TWC_Backpack_1950_COIN_Dismounted_SMG: B_LIB_UK_HSack
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(LIB_30Rnd_45ACP,12);
		ADD_MAGA(LIB_30Rnd_770x56,4);
	};
};
class TWC_Backpack_1950_COIN_Dismounted_MG: B_LIB_UK_HSack
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(LIB_30Rnd_770x56,8);
	};
};
class TWC_Backpack_1950_COIN_Dismounted_MGASS: B_LIB_UK_HSack
{
	scope = 1;
	scopeArsenal = 1;
	maximumLoad = 110;
	class TransportMagazines {
		ADD_MAGA(LIB_30Rnd_770x56,12);
	};
};
class TWC_Backpack_1950_COIN_Dismounted_SectionCommander: B_LIB_UK_HSack
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(LIB_30Rnd_45ACP,8);
		ADD_MAGA(TWC_Magazine_SignalFlare_Blue, 3);
		ADD_MAGA(TWC_Magazine_SignalFlare_Red, 3);
		ADD_MAGA(TWC_Magazine_SignalFlare_Green, 3);
		ADD_MAGA(TWC_Magazine_SignalFlare_Yellow, 3);
		ADD_MAGA(TWC_Magazine_SignalSmoke_Green, 3);
		ADD_MAGA(TWC_Magazine_SignalSmoke_Red, 3);
		ADD_MAGA(TWC_Magazine_SignalSmoke_Yellow, 3);
		ADD_MAGA(TWC_Magazine_SignalSmoke_Blue, 3);
	};
};
class TWC_Backpack_1950_COIN_Dismounted_2iC: B_LIB_UK_HSack
{
	scope = 1;
	scopeArsenal = 1;
	maximumLoad = 250;
	class TransportMagazines {
		ADD_MAGA(fow_15Rnd_762x33,16);
		ADD_MAGA(LIB_30Rnd_770x56,8);
		ADD_MAGA(LIB_30Rnd_45ACP,8);
		ADD_MAGA(LIB_10Rnd_770x56,7);
		ADD_MAGA(LIB_MillsBomb,8);
		ADD_MAGA(SmokeShell,2);
	};
};

//PLATOON
class TWC_Backpack_1950_COIN_Platoon_Commander: B_LIB_UK_HSack
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
		ADD_MAGA(LIB_30Rnd_45ACP,6);
		ADD_MAGA(TWC_Magazine_SignalFlare_Blue, 3);
		ADD_MAGA(TWC_Magazine_SignalFlare_Red, 3);
		ADD_MAGA(TWC_Magazine_SignalFlare_Green, 3);
		ADD_MAGA(TWC_Magazine_SignalFlare_Yellow, 3);
		ADD_MAGA(TWC_Magazine_SignalSmoke_Green, 3);
		ADD_MAGA(TWC_Magazine_SignalSmoke_Red, 3);
		ADD_MAGA(TWC_Magazine_SignalSmoke_Yellow, 3);
		ADD_MAGA(TWC_Magazine_SignalSmoke_Blue, 3);
	};
};
class TWC_Backpack_1950_COIN_Platoon_Sergeant: B_LIB_UK_HSack
{
	scope = 1;
	scopeArsenal = 1;
	maximumLoad = 500;
	class TransportMagazines {
		ADD_MAGA(fow_15Rnd_762x33,12);
		ADD_MAGA(LIB_30Rnd_770x56,6);
		ADD_MAGA(LIB_30Rnd_45ACP,6);
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
		ADD_MAGA(TWC_Magazine_SignalFlare_Blue, 3);
		ADD_MAGA(TWC_Magazine_SignalFlare_Red, 3);
		ADD_MAGA(TWC_Magazine_SignalFlare_Green, 3);
		ADD_MAGA(TWC_Magazine_SignalFlare_Yellow, 3);
		ADD_MAGA(TWC_Magazine_SignalSmoke_Green, 3);
		ADD_MAGA(TWC_Magazine_SignalSmoke_Red, 3);
		ADD_MAGA(TWC_Magazine_SignalSmoke_Yellow, 3);
		ADD_MAGA(TWC_Magazine_SignalSmoke_Blue, 3);
	};
};
class TWC_Backpack_1950_COIN_Platoon_Medic: B_LIB_SOV_RA_MedicalBag_Empty
{
	scope = 1;
	scopeArsenal = 1;
	maximumLoad = 180;
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
		ADD_ITEM(ACE_splint,6);
		ADD_ITEM(ACE_personalAidKit,1);
		ADD_ITEM(TWC_Item_Medical_SutureKit_25,1);
	};
};
class TWC_Backpack_1950_COIN_Platoon_Mortar: B_LIB_UK_HSack
{
	scope = 1;
	scopeArsenal = 1;
	maximumLoad = 500;
	class TransportMagazines {
		ADD_MAGA(twc_2inch_he_1rnd,12);
		ADD_MAGA(twc_2inch_smoke_1rnd,8);
	};
};

//PLATOON, DISMOUNTED
class TWC_Backpack_1950_COIN_Dismounted_Platoon_Commander: B_LIB_UK_HSack
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
		ADD_MAGA(LIB_30Rnd_45ACP,6);
		ADD_MAGA(TWC_Magazine_SignalFlare_Blue, 3);
		ADD_MAGA(TWC_Magazine_SignalFlare_Red, 3);
		ADD_MAGA(TWC_Magazine_SignalFlare_Green, 3);
		ADD_MAGA(TWC_Magazine_SignalFlare_Yellow, 3);
		ADD_MAGA(TWC_Magazine_SignalSmoke_Green, 3);
		ADD_MAGA(TWC_Magazine_SignalSmoke_Red, 3);
		ADD_MAGA(TWC_Magazine_SignalSmoke_Yellow, 3);
		ADD_MAGA(TWC_Magazine_SignalSmoke_Blue, 3);
	};
};
class TWC_Backpack_1950_COIN_Dismounted_Platoon_Sergeant: fow_b_uk_bergenpack
{
	scope = 1;
	scopeArsenal = 1;
	maximumLoad = 250;
	class TransportMagazines {
		ADD_MAGA(fow_15Rnd_762x33,16);
		ADD_MAGA(LIB_30Rnd_770x56,8);
		ADD_MAGA(LIB_30Rnd_45ACP,8);
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
		ADD_MAGA(TWC_Magazine_SignalFlare_Blue, 3);
		ADD_MAGA(TWC_Magazine_SignalFlare_Red, 3);
		ADD_MAGA(TWC_Magazine_SignalFlare_Green, 3);
		ADD_MAGA(TWC_Magazine_SignalFlare_Yellow, 3);
		ADD_MAGA(TWC_Magazine_SignalSmoke_Green, 3);
		ADD_MAGA(TWC_Magazine_SignalSmoke_Red, 3);
		ADD_MAGA(TWC_Magazine_SignalSmoke_Yellow, 3);
		ADD_MAGA(TWC_Magazine_SignalSmoke_Blue, 3);
	};
};
class TWC_Backpack_1950_COIN_Dismounted_Platoon_Medic: B_LIB_SOV_RA_MedicalBag_Empty
{
	scope = 1;
	scopeArsenal = 1;
	maximumLoad = 180;
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
class TWC_Backpack_1950_COIN_Dismounted_Platoon_Mortar: fow_b_uk_bergenpack
{
	scope = 1;
	scopeArsenal = 1;
	maximumLoad = 500;
	class TransportMagazines {
		ADD_MAGA(twc_2inch_he_1rnd,12);
		ADD_MAGA(twc_2inch_smoke_1rnd,8);
	};
};

//ATTACHMENTS
//AT
class TWC_Backpack_1950_COIN_Bazooka_Ass: fow_b_us_rocket_bag
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(LIB_1Rnd_60mm_M6,3);
	};
};

//Sniper Team
class TWC_Backpack_1950_COIN_Spotter: B_LIB_UK_HSack
{
	scope = 1;
	scopeArsenal = 1;
	maximumLoad = 300;
	class TransportItems {
		ADD_ITEM(ACRE_PRC77,1);
	};
	class TransportMagazines {
		ADD_MAGA(LIB_10Rnd_770x56,20);
	};
};

//Artillery
class TWC_Backpack_1950_COIN_Artillery_Commander: B_LIB_US_Radio_ACRE2
{
	scope = 1;
	scopeArsenal = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC77,1);
	};
};
class TWC_Backpack_1950_COIN_FO: B_LIB_US_Radio_ACRE2
{
	scope = 1;
	scopeArsenal = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC77,1);
	};
};

//Aircraft
class TWC_Backpack_1950_COIN_FAC: B_LIB_US_Radio_ACRE2
{
	scope = 1;
	scopeArsenal = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC77,1);
	};
	class TransportMagazines {
		ADD_MAGA(TWC_Magazine_SignalFlare_Blue, 3);
		ADD_MAGA(TWC_Magazine_SignalFlare_Red, 3);
		ADD_MAGA(TWC_Magazine_SignalFlare_Green, 3);
		ADD_MAGA(TWC_Magazine_SignalFlare_Yellow, 3);
		ADD_MAGA(TWC_Magazine_SignalSmoke_Green, 3);
		ADD_MAGA(TWC_Magazine_SignalSmoke_Red, 3);
		ADD_MAGA(TWC_Magazine_SignalSmoke_Yellow, 3);
		ADD_MAGA(TWC_Magazine_SignalSmoke_Blue, 3);
	};
};
