//Modern, Special Forces
//Section

class TWC_Backpack_Modern_SF_Commander: mpx_daysack10
{
	scope = 1;
	scopeArsenal = 1;
	maximumLoad = 200;
	class TransportItems {
		ADD_ITEM(CUP_NVG_GPNVG_black,1);
		ADD_ITEM(ACRE_PRC152,2);
	};
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
	};
};
class TWC_Backpack_Modern_SF_TeamLead: mpx_daysack10
{
	scope = 1;
	scopeArsenal = 1;
	maximumLoad = 480;
	class TransportItems {
		ADD_ITEM(CUP_NVG_GPNVG_black,1);
		ADD_ITEM(ACRE_PRC152,2);
	};
	class TransportMagazines {
		ADD_MAGA(CUP_30Rnd_556x45_PMAG_BLACK_PULL, 8);
		ADD_MAGA(1Rnd_HE_Grenade_Shell,10);
		ADD_MAGA(ACE_20Rnd_762x51_Mag_Tracer, 2);
		ADD_MAGA(SmokeShell, 4);
	};
};
class TWC_Backpack_Modern_SF_Medic: mpx_daysack7
{
	scope = 1;
	scopeArsenal = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC152,1);
		ADD_ITEM(CUP_NVG_GPNVG_black,1);
		ADD_ITEM(ACE_fieldDressing,20);
		ADD_ITEM(ACE_morphine,10);
		ADD_ITEM(ACE_elasticBandage,20);
		ADD_ITEM(ACE_quikclot,20);
		ADD_ITEM(ACE_packingBandage,20);
		ADD_ITEM(ACE_adenosine,4);
		ADD_ITEM(ACE_atropine,4);
		ADD_ITEM(ACE_epinephrine,10);
		ADD_ITEM(ACE_salineIV_500,12);
		ADD_ITEM(ACE_salineIV_250,4);
		ADD_ITEM(ACE_tourniquet,4);
		ADD_ITEM(ACE_personalAidKit,1);
		ADD_ITEM(TWC_Item_Medical_SutureKit_25,1);
	};
};
class TWC_Backpack_Modern_SF_Rifleman: mpx_daysack
{
	scope = 1;
	scopeArsenal = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC152,1);
		ADD_ITEM(CUP_NVG_GPNVG_black,1);
		ADD_ITEM(ACE_Clacker,1);
		ADD_ITEM(DemoCharge_Remote_Mag, 2);
	};
};
class TWC_Backpack_Modern_SF_Autorifleman: mpx_daysack
{
	scope = 1;
	scopeArsenal = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC152,1);
		ADD_ITEM(CUP_NVG_GPNVG_black,1);
	};
		class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_556_200Rnd,2);
		ADD_MAGA(UK3CB_BAF_556_200Rnd_T,3);
	};
};
class TWC_Backpack_Modern_SF_Grenadier: mpx_daysack
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(1Rnd_HE_Grenade_Shell,10);
	};
	class TransportItems {
		ADD_ITEM(ACRE_PRC152,1);
		ADD_ITEM(CUP_NVG_GPNVG_black,1);
		ADD_ITEM(ACE_Clacker,1);
		ADD_ITEM(DemoCharge_Remote_Mag, 2);
	};
};
class TWC_Backpack_Modern_SF_Marksman: mpx_daysack
{
	scope = 1;
	scopeArsenal = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC152,1);
		ADD_ITEM(CUP_NVG_GPNVG_black,1);
		ADD_ITEM(ACE_Clacker,1);
		ADD_ITEM(DemoCharge_Remote_Mag, 2);
	};
};
class TWC_Backpack_Modern_SF_JTAC: UK3CB_BAF_B_Bergen_MTP_JTAC_H_A
{
	scope = 1;
	scopeArsenal = 1;
	class TransportItems {
		ADD_ITEM(CUP_NVG_GPNVG_black,1);
		ADD_ITEM(ACRE_PRC117F,1);
		ADD_ITEM(ACRE_PRC152,1);
		ADD_ITEM(ACE_DAGR,1);
	};
	class TransportMagazines {
		ADD_MAGA(1Rnd_HE_Grenade_Shell,3);
		ADD_MAGA(1Rnd_Smoke_Grenade_shell,3);
		ADD_MAGA(1Rnd_SmokeRed_Grenade_shell,3);
		ADD_MAGA(1Rnd_SmokeGreen_Grenade_shell,3);
		ADD_MAGA(1Rnd_SmokeBlue_Grenade_shell,3);
		ADD_MAGA(1Rnd_SmokePurple_Grenade_shell,3);
	};
};