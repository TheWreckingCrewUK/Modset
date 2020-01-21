//SECTION, DISMOUNTED
class TWC_Backpack_WW2_UK_Airborne_Dismounted_Rifleman: B_LIB_UK_HSack_Blanco_Tea
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(LIB_10Rnd_770x56,12);
	};
};
class TWC_Backpack_WW2_UK_Airborne_Dismounted_Grenadier: B_LIB_UK_HSack_Blanco_Tea
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(LIB_10Rnd_770x56,12);
		ADD_MAGA(LIB_1Rnd_G_MillsBomb,8);
	};
};
class TWC_Backpack_WW2_UK_Airborne_Dismounted_SMG: B_LIB_UK_HSack_Blanco_Tea
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(LIB_32Rnd_9x19_Sten,6);
	};
};
class TWC_Backpack_WW2_UK_Airborne_Dismounted_MG: B_LIB_UK_HSack_Blanco_Tea
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(LIB_30Rnd_770x56,8);
	};
};
class TWC_Backpack_WW2_UK_Airborne_Dismounted_MGASS: B_LIB_UK_HSack_Blanco_Tea
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(LIB_30Rnd_770x56,12);
	};
};
class TWC_Backpack_WW2_UK_Airborne_Dismounted_SectionCommander: B_LIB_UK_HSack_Blanco_Tea
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(LIB_32Rnd_9x19_Sten,6);
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
class TWC_Backpack_WW2_UK_Airborne_Dismounted_2iC: B_LIB_UK_HSack_Blanco_Tea
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(LIB_10Rnd_770x56,20);
		ADD_MAGA(LIB_30Rnd_770x56,10);
		ADD_MAGA(SmokeShell,2);
	};
};

//PLATOON, DISMOUNTED
class TWC_Backpack_WW2_UK_Airborne_Dismounted_Platoon_Commander: B_LIB_UK_HSack_Blanco_Tea
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
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
class TWC_Backpack_WW2_UK_Airborne_Dismounted_Platoon_Sergeant: fow_b_uk_bergenpack
{
	scope = 1;
	scopeArsenal = 1;
	maximumLoad = 250;
	class TransportMagazines {
		ADD_MAGA(LIB_10Rnd_770x56,16);
		ADD_MAGA(LIB_30Rnd_770x56,8);
		ADD_MAGA(LIB_32Rnd_9x19_Sten,8);
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
class TWC_Backpack_WW2_UK_Airborne_Dismounted_Platoon_Medic: B_LIB_SOV_RA_MedicalBag_Empty
{
	scope = 1;
	scopeArsenal = 1;
	class TransportItems {
		ADD_ITEM(ACE_fieldDressing,20);
		ADD_ITEM(ACE_splint,6);
		ADD_ITEM(TWC_Syrette,10);
		ADD_ITEM(ACE_elasticBandage,20);
		ADD_ITEM(ACE_quikclot,20);
		ADD_ITEM(ACE_Painkillers,20);
		ADD_ITEM(ACE_adenosine,4);
		ADD_ITEM(ACE_atropine,4);
		ADD_ITEM(ACE_epinephrine,10);
		ADD_ITEM(ACE_salineIV_500,6);
		ADD_ITEM(ACE_tourniquet,4);
		ADD_ITEM(ACE_personalAidKit,1);
		ADD_ITEM(TWC_Item_Medical_SutureKit_25,1);
	};
};
class TWC_Backpack_WW2_UK_Airborne_Dismounted_Platoon_Mortar: fow_b_uk_bergenpack
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
class TWC_Backpack_WW2_UK_Airborne_PIAT_Ass: fow_b_uk_piat
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(LIB_1Rnd_89m_G_PIAT,4);
	};
};

//Sniper Team
class TWC_Backpack_WW2_UK_Airborne_Spotter: B_LIB_UK_HSack_Blanco_Tea
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(LIB_10Rnd_770x56,20);
	};
};

//Artillery
class TWC_Backpack_WW2_UK_Airborne_Artillery_Commander: B_LIB_US_Radio_ACRE2
{
	scope = 1;
	scopeArsenal = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC77,1);
	};
};
class TWC_Backpack_WW2_UK_Airborne_FO: B_LIB_US_Radio_ACRE2
{
	scope = 1;
	scopeArsenal = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC77,1);
	};
};

//Aircraft
class TWC_Backpack_WW2_UK_Airborne_FAC: B_LIB_US_Radio_ACRE2
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