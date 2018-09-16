//WOODLAND, REGULAR
//Section
class TWC_Backpack_1990_Regular_Woodland_SectionCommander: UK3CB_BAF_B_Bergen_DPMW_SL_A
{
	scope = 1;
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
	};
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
	};
};
class TWC_Backpack_1990_Regular_Woodland_2iC: UK3CB_BAF_B_Bergen_DPMW_Rifleman_A
{
	scope = 1;
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(UK3CB_BAF_556_30Rnd,10);
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,4);
	};
};

//Platoon Command
class TWC_Backpack_1990_Regular_Woodland_Platoon_Commander: UK3CB_BAF_B_Bergen_DPMW_SL_A
{
	scope = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
	};
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
	};
};
class TWC_Backpack_1990_Regular_Woodland_Platoon_Sergeant: UK3CB_BAF_B_Bergen_DPMW_SL_A
{
	scope = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
	};
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
		ADD_MAGA(UK3CB_BAF_556_30Rnd,20);
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,8);
	};
};
class TWC_Backpack_1990_Regular_Woodland_Platoon_Medic: UK3CB_BAF_B_Bergen_DPMW_Rifleman_B
{
	scope = 1;
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

//Attachments
class TWC_Backpack_1990_Regular_Woodland_MILAN_Ass: UK3CB_BAF_B_Bergen_DPMW_Rifleman_B
{
	scope = 1;
	maximumLoad = 500;
	class TransportItems {
		ADD_ITEM(ukcw_milan_ace_missile,2);
	};
};
class TWC_Backpack_1990_Regular_Woodland_Blowpipe_Ass: SP_Backpack_BlowpipeCarrier
{
	scope = 1;
	maximumLoad = 200;
	class TransportMagazines {
		ADD_MAGA(SP_Blowpipe_round,2);
	};
};
class TWC_Backpack_1990_Regular_Woodland_L14A1_Ass: UK3CB_BAF_B_Bergen_DPMW_Rifleman_B
{
	scope = 1;
	class TransportMagazines {
		ADD_MAGA(ukcw_l14a1_HEAT,2);
		ADD_MAGA(ukcw_l14a1_HE,2);
	};
};
class TWC_Backpack_1990_Regular_Woodland_Spotter: UK3CB_BAF_B_Bergen_DPMW_SL_A
{
	scope = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC77,1);
		ADD_ITEM(ACE_Tripod,1);
		ADD_ITEM(ACE_SpottingScope,1);
	};
};
class TWC_Backpack_1990_Regular_Woodland_Artillery_Commander: UK3CB_BAF_B_Bergen_DPMW_SL_A
{
	scope = 1;
	maximumLoad = 300;
	class TransportItems {
		ADD_ITEM(ACRE_PRC77,1);
	};
};
class TWC_Backpack_1990_Regular_Woodland_FO: UK3CB_BAF_B_Bergen_DPMW_SL_A
{
	scope = 1;
	maximumLoad = 200;
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
	};
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
	};
};
class TWC_Backpack_1990_Regular_Woodland_EOD_Commander: UK3CB_BAF_B_Bergen_DPMW_SL_A
{
	scope = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
	};
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
	};
};
class TWC_Backpack_1990_Regular_Woodland_FAC: UK3CB_BAF_B_Bergen_DPMW_JTAC_H_A
{
	scope = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
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

//WOODLAND, REGULAR, DISMOUNTED
//Section
class TWC_Backpack_1990_Regular_Dismounted_Woodland_Rifleman: UK3CB_BAF_B_Bergen_DPMW_Rifleman_A
{
	scope = 1;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_556_30Rnd,8);
	};
};
class TWC_Backpack_1990_Regular_Dismounted_Woodland_AT: UK3CB_BAF_B_Bergen_DPMW_Rifleman_A
{
	scope = 1;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_556_30Rnd,8);
	};
};
class TWC_Backpack_1990_Regular_Dismounted_Woodland_Gunner: UK3CB_BAF_B_Bergen_DPMW_Rifleman_A
{
	scope = 1;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_556_30Rnd,10);
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,6);
	};
};
class TWC_Backpack_1990_Regular_Dismounted_Woodland_SectionCommander: UK3CB_BAF_B_Bergen_DPMW_SL_A
{
	scope = 1;
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
		ADD_MAGA(UK3CB_BAF_556_30Rnd,10);
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,6);
	};
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
	};
};
class TWC_Backpack_1990_Regular_Dismounted_Woodland_2iC: UK3CB_BAF_B_Bergen_DPMW_Rifleman_B
{
	scope = 1;
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(UK3CB_BAF_556_30Rnd,20);
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,8);
	};
};

//Platoon Command
class TWC_Backpack_1990_Regular_Dismounted_Woodland_Platoon_Commander: UK3CB_BAF_B_Bergen_DPMW_SL_A
{
	scope = 1;
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
		ADD_MAGA(UK3CB_BAF_556_30Rnd,6);
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,2);
	};
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
	};
};
class TWC_Backpack_1990_Regular_Dismounted_Woodland_Platoon_Sergeant: UK3CB_BAF_B_Bergen_DPMW_SL_A
{
	scope = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
	};
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
		ADD_MAGA(UK3CB_BAF_556_30Rnd,20);
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,8);
	};
};
class TWC_Backpack_1990_Regular_Dismounted_Woodland_Platoon_Medic: UK3CB_BAF_B_Bergen_DPMW_Rifleman_B
{
	scope = 1;
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

//DESERT, REGULAR
//Section
class TWC_Backpack_1990_Regular_Desert_SectionCommander: UK3CB_BAF_B_Bergen_DDPM_SL_A
{
	scope = 1;
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
	};
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
	};
};
class TWC_Backpack_1990_Regular_Desert_2iC: UK3CB_BAF_B_Bergen_DDPM_Rifleman_A
{
	scope = 1;
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(UK3CB_BAF_556_30Rnd,10);
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,4);
	};
};

//Platoon Command
class TWC_Backpack_1990_Regular_Desert_Platoon_Commander: UK3CB_BAF_B_Bergen_DDPM_SL_A
{
	scope = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
	};
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
	};
};
class TWC_Backpack_1990_Regular_Desert_Platoon_Sergeant: UK3CB_BAF_B_Bergen_DDPM_SL_A
{
	scope = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
	};
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
		ADD_MAGA(UK3CB_BAF_556_30Rnd,20);
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,8);
	};
};
class TWC_Backpack_1990_Regular_Desert_Platoon_Medic: UK3CB_BAF_B_Bergen_DDPM_Rifleman_B
{
	scope = 1;
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

//Attachments
class TWC_Backpack_1990_Regular_Desert_MILAN_Ass: UK3CB_BAF_B_Bergen_DDPM_Rifleman_B
{
	scope = 1;
	maximumLoad = 500;
	class TransportItems {
		ADD_ITEM(ukcw_milan_ace_missile,2);
	};
};
class TWC_Backpack_1990_Regular_Desert_Blowpipe_Ass: SP_Backpack_BlowpipeCarrier
{
	scope = 1;
	maximumLoad = 200;
	class TransportMagazines {
		ADD_MAGA(SP_Blowpipe_round,2);
	};
};
class TWC_Backpack_1990_Regular_Desert_L14A1_Ass: UK3CB_BAF_B_Bergen_DDPM_Rifleman_B
{
	scope = 1;
	class TransportMagazines {
		ADD_MAGA(ukcw_l14a1_HEAT,2);
		ADD_MAGA(ukcw_l14a1_HE,2);
	};
};
class TWC_Backpack_1990_Regular_Desert_Spotter: UK3CB_BAF_B_Bergen_DDPM_SL_A
{
	scope = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC77,1);
		ADD_ITEM(ACE_Tripod,1);
		ADD_ITEM(ACE_SpottingScope,1);
	};
};
class TWC_Backpack_1990_Regular_Desert_Artillery_Commander: UK3CB_BAF_B_Bergen_DDPM_SL_A
{
	scope = 1;
	maximumLoad = 300;
	class TransportItems {
		ADD_ITEM(ACRE_PRC77,1);
	};
};
class TWC_Backpack_1990_Regular_Desert_FO: UK3CB_BAF_B_Bergen_DDPM_SL_A
{
	scope = 1;
	maximumLoad = 200;
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
	};
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
	};
};
class TWC_Backpack_1990_Regular_Desert_EOD_Commander: UK3CB_BAF_B_Bergen_DDPM_SL_A
{
	scope = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
	};
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
	};
};
class TWC_Backpack_1990_Regular_Desert_FAC: UK3CB_BAF_B_Bergen_DDPM_JTAC_H_A
{
	scope = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
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

//DESERT, REGULAR, DISMOUNTED
//Section
class TWC_Backpack_1990_Regular_Dismounted_Desert_Rifleman: UK3CB_BAF_B_Bergen_DDPM_Rifleman_A
{
	scope = 1;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_556_30Rnd,8);
	};
};
class TWC_Backpack_1990_Regular_Dismounted_Desert_AT: UK3CB_BAF_B_Bergen_DDPM_Rifleman_A
{
	scope = 1;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_556_30Rnd,8);
	};
};
class TWC_Backpack_1990_Regular_Dismounted_Desert_Gunner: UK3CB_BAF_B_Bergen_DDPM_Rifleman_A
{
	scope = 1;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_556_30Rnd,10);
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,6);
	};
};
class TWC_Backpack_1990_Regular_Dismounted_Desert_SectionCommander: UK3CB_BAF_B_Bergen_DDPM_SL_A
{
	scope = 1;
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
		ADD_MAGA(UK3CB_BAF_556_30Rnd,10);
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,6);
	};
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
	};
};
class TWC_Backpack_1990_Regular_Dismounted_Desert_2iC: UK3CB_BAF_B_Bergen_DDPM_Rifleman_B
{
	scope = 1;
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(UK3CB_BAF_556_30Rnd,20);
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,8);
	};
};

//Platoon Command
class TWC_Backpack_1990_Regular_Dismounted_Desert_Platoon_Commander: UK3CB_BAF_B_Bergen_DDPM_SL_A
{
	scope = 1;
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
		ADD_MAGA(UK3CB_BAF_556_30Rnd,6);
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,2);
	};
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
	};
};
class TWC_Backpack_1990_Regular_Dismounted_Desert_Platoon_Sergeant: UK3CB_BAF_B_Bergen_DDPM_SL_A
{
	scope = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
	};
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
		ADD_MAGA(UK3CB_BAF_556_30Rnd,20);
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,8);
	};
};
class TWC_Backpack_1990_Regular_Dismounted_Desert_Platoon_Medic: UK3CB_BAF_B_Bergen_DDPM_Rifleman_B
{
	scope = 1;
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

//TROPIC, REGULAR
//Section
class TWC_Backpack_1990_Regular_Tropic_SectionCommander: UK3CB_BAF_B_Bergen_DPMT_SL_A
{
	scope = 1;
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
	};
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
	};
};
class TWC_Backpack_1990_Regular_Tropic_2iC: UK3CB_BAF_B_Bergen_DPMT_Rifleman_A
{
	scope = 1;
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(UK3CB_BAF_556_30Rnd,10);
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,4);
	};
};

//Platoon Command
class TWC_Backpack_1990_Regular_Tropic_Platoon_Commander: UK3CB_BAF_B_Bergen_DPMT_SL_A
{
	scope = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
	};
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
	};
};
class TWC_Backpack_1990_Regular_Tropic_Platoon_Sergeant: UK3CB_BAF_B_Bergen_DPMT_SL_A
{
	scope = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
	};
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
		ADD_MAGA(UK3CB_BAF_556_30Rnd,20);
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,8);
	};
};
class TWC_Backpack_1990_Regular_Tropic_Platoon_Medic: UK3CB_BAF_B_Bergen_DPMT_Rifleman_B
{
	scope = 1;
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

//Attachments
class TWC_Backpack_1990_Regular_Tropic_MILAN_Ass: UK3CB_BAF_B_Bergen_DPMT_Rifleman_B
{
	scope = 1;
	maximumLoad = 500;
	class TransportItems {
		ADD_ITEM(ukcw_milan_ace_missile,2);
	};
};
class TWC_Backpack_1990_Regular_Tropic_Blowpipe_Ass: SP_Backpack_BlowpipeCarrier
{
	scope = 1;
	maximumLoad = 200;
	class TransportMagazines {
		ADD_MAGA(SP_Blowpipe_round,2);
	};
};
class TWC_Backpack_1990_Regular_Tropic_L14A1_Ass: UK3CB_BAF_B_Bergen_DPMT_Rifleman_B
{
	scope = 1;
	class TransportMagazines {
		ADD_MAGA(ukcw_l14a1_HEAT,2);
		ADD_MAGA(ukcw_l14a1_HE,2);
	};
};
class TWC_Backpack_1990_Regular_Tropic_Spotter: UK3CB_BAF_B_Bergen_DPMT_SL_A
{
	scope = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC77,1);
		ADD_ITEM(ACE_Tripod,1);
		ADD_ITEM(ACE_SpottingScope,1);
	};
};
class TWC_Backpack_1990_Regular_Tropic_Artillery_Commander: UK3CB_BAF_B_Bergen_DPMT_SL_A
{
	scope = 1;
	maximumLoad = 300;
	class TransportItems {
		ADD_ITEM(ACRE_PRC77,1);
	};
};
class TWC_Backpack_1990_Regular_Tropic_FO: UK3CB_BAF_B_Bergen_DPMT_SL_A
{
	scope = 1;
	maximumLoad = 200;
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
	};
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
	};
};
class TWC_Backpack_1990_Regular_Tropic_EOD_Commander: UK3CB_BAF_B_Bergen_DPMT_SL_A
{
	scope = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
	};
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
	};
};
class TWC_Backpack_1990_Regular_Tropic_FAC: UK3CB_BAF_B_Bergen_DPMT_JTAC_H_A
{
	scope = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
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

//TROPIC, REGULAR, DISMOUNTED
//Section
class TWC_Backpack_1990_Regular_Dismounted_Tropic_Rifleman: UK3CB_BAF_B_Bergen_DPMT_Rifleman_A
{
	scope = 1;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_556_30Rnd,8);
	};
};
class TWC_Backpack_1990_Regular_Dismounted_Tropic_AT: UK3CB_BAF_B_Bergen_DPMT_Rifleman_A
{
	scope = 1;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_556_30Rnd,8);
	};
};
class TWC_Backpack_1990_Regular_Dismounted_Tropic_Gunner: UK3CB_BAF_B_Bergen_DPMT_Rifleman_A
{
	scope = 1;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_556_30Rnd,10);
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,6);
	};
};
class TWC_Backpack_1990_Regular_Dismounted_Tropic_SectionCommander: UK3CB_BAF_B_Bergen_DPMT_SL_A
{
	scope = 1;
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
		ADD_MAGA(UK3CB_BAF_556_30Rnd,10);
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,6);
	};
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
	};
};
class TWC_Backpack_1990_Regular_Dismounted_Tropic_2iC: UK3CB_BAF_B_Bergen_DPMT_Rifleman_B
{
	scope = 1;
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(UK3CB_BAF_556_30Rnd,20);
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,8);
	};
};

//Platoon Command
class TWC_Backpack_1990_Regular_Dismounted_Tropic_Platoon_Commander: UK3CB_BAF_B_Bergen_DPMT_SL_A
{
	scope = 1;
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
		ADD_MAGA(UK3CB_BAF_556_30Rnd,6);
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,2);
	};
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
	};
};
class TWC_Backpack_1990_Regular_Dismounted_Tropic_Platoon_Sergeant: UK3CB_BAF_B_Bergen_DPMT_SL_A
{
	scope = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
	};
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
		ADD_MAGA(UK3CB_BAF_556_30Rnd,20);
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,8);
	};
};
class TWC_Backpack_1990_Regular_Dismounted_Tropic_Platoon_Medic: UK3CB_BAF_B_Bergen_DPMT_Rifleman_B
{
	scope = 1;
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

//ARCTIC, REGULAR
//Section
class TWC_Backpack_1990_Regular_Arctic_SectionCommander: UK3CB_BAF_B_Bergen_Arctic_SL_A
{
	scope = 1;
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
	};
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
	};
};
class TWC_Backpack_1990_Regular_Arctic_2iC: UK3CB_BAF_B_Bergen_Arctic_Rifleman_A
{
	scope = 1;
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(UK3CB_BAF_556_30Rnd,10);
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,4);
	};
};

//Platoon Command
class TWC_Backpack_1990_Regular_Arctic_Platoon_Commander: UK3CB_BAF_B_Bergen_Arctic_SL_A
{
	scope = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
	};
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
	};
};
class TWC_Backpack_1990_Regular_Arctic_Platoon_Sergeant: UK3CB_BAF_B_Bergen_Arctic_SL_A
{
	scope = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
	};
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
		ADD_MAGA(UK3CB_BAF_556_30Rnd,20);
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,8);
	};
};
class TWC_Backpack_1990_Regular_Arctic_Platoon_Medic: UK3CB_BAF_B_Bergen_Arctic_Rifleman_B
{
	scope = 1;
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

//Attachments
class TWC_Backpack_1990_Regular_Arctic_MILAN_Ass: UK3CB_BAF_B_Bergen_Arctic_Rifleman_B
{
	scope = 1;
	maximumLoad = 500;
	class TransportItems {
		ADD_ITEM(ukcw_milan_ace_missile,2);
	};
};
class TWC_Backpack_1990_Regular_Arctic_Blowpipe_Ass: SP_Backpack_BlowpipeCarrier
{
	scope = 1;
	maximumLoad = 200;
	class TransportMagazines {
		ADD_MAGA(SP_Blowpipe_round,2);
	};
};
class TWC_Backpack_1990_Regular_Arctic_L14A1_Ass: UK3CB_BAF_B_Bergen_Arctic_Rifleman_B
{
	scope = 1;
	class TransportMagazines {
		ADD_MAGA(ukcw_l14a1_HEAT,2);
		ADD_MAGA(ukcw_l14a1_HE,2);
	};
};
class TWC_Backpack_1990_Regular_Arctic_Spotter: UK3CB_BAF_B_Bergen_Arctic_SL_A
{
	scope = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC77,1);
		ADD_ITEM(ACE_Tripod,1);
		ADD_ITEM(ACE_SpottingScope,1);
	};
};
class TWC_Backpack_1990_Regular_Arctic_Artillery_Commander: UK3CB_BAF_B_Bergen_Arctic_SL_A
{
	scope = 1;
	maximumLoad = 300;
	class TransportItems {
		ADD_ITEM(ACRE_PRC77,1);
	};
};
class TWC_Backpack_1990_Regular_Arctic_FO: UK3CB_BAF_B_Bergen_Arctic_SL_A
{
	scope = 1;
	maximumLoad = 200;
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
	};
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
	};
};
class TWC_Backpack_1990_Regular_Arctic_EOD_Commander: UK3CB_BAF_B_Bergen_Arctic_SL_A
{
	scope = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
	};
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
	};
};
class TWC_Backpack_1990_Regular_Arctic_FAC: UK3CB_BAF_B_Bergen_Arctic_JTAC_H_A
{
	scope = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
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

//Arctic, REGULAR, DISMOUNTED
//Section
class TWC_Backpack_1990_Regular_Dismounted_Arctic_Rifleman: UK3CB_BAF_B_Bergen_Arctic_Rifleman_A
{
	scope = 1;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_556_30Rnd,8);
	};
};
class TWC_Backpack_1990_Regular_Dismounted_Arctic_AT: UK3CB_BAF_B_Bergen_Arctic_Rifleman_A
{
	scope = 1;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_556_30Rnd,8);
	};
};
class TWC_Backpack_1990_Regular_Dismounted_Arctic_Gunner: UK3CB_BAF_B_Bergen_Arctic_Rifleman_A
{
	scope = 1;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_556_30Rnd,10);
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,6);
	};
};
class TWC_Backpack_1990_Regular_Dismounted_Arctic_SectionCommander: UK3CB_BAF_B_Bergen_Arctic_SL_A
{
	scope = 1;
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
		ADD_MAGA(UK3CB_BAF_556_30Rnd,10);
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,6);
	};
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
	};
};
class TWC_Backpack_1990_Regular_Dismounted_Arctic_2iC: UK3CB_BAF_B_Bergen_Arctic_Rifleman_B
{
	scope = 1;
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(UK3CB_BAF_556_30Rnd,20);
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,8);
	};
};

//Platoon Command
class TWC_Backpack_1990_Regular_Dismounted_Arctic_Platoon_Commander: UK3CB_BAF_B_Bergen_Arctic_SL_A
{
	scope = 1;
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
		ADD_MAGA(UK3CB_BAF_556_30Rnd,6);
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,2);
	};
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
	};
};
class TWC_Backpack_1990_Regular_Dismounted_Arctic_Platoon_Sergeant: UK3CB_BAF_B_Bergen_Arctic_SL_A
{
	scope = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
	};
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
		ADD_MAGA(UK3CB_BAF_556_30Rnd,20);
		ADD_MAGA(UK3CB_BAF_556_30Rnd_T,8);
	};
};
class TWC_Backpack_1990_Regular_Dismounted_Arctic_Platoon_Medic: UK3CB_BAF_B_Bergen_Arctic_Rifleman_B
{
	scope = 1;
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