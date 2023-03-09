class TWC_Backpack_Modern_Sectionlead: UK3CB_BAF_B_Bergen_MTP_SL_L_A
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
	
	class TWC_Backpack_Modern_quartermaster: UK3CB_BAF_B_Bergen_TAN_Rifleman_B
	{
		scope = 1;
		mass = 59.84;
		class TransportItems
		{};
		class TransportMagazines
		{};
	
	class TWC_Backpack_Modern_Rifleman_heavy: UK3CB_BAF_B_Bergen_MTP_Rifleman_H_A
	{
		scope = 1;
		mass = 64;
		class TransportItems
		{};
		class TransportMagazines
		{};
	
	class UK3CB_BAF_B_Bergen_MTP_Rifleman_H_B;
	class TWC_Backpack_Modern_AutoRifleman_heavy: UK3CB_BAF_B_Bergen_MTP_Rifleman_H_B
	{
		scope = 1;
		scopeArsenal = 1;
		class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_556_200Rnd,1);
		ADD_MAGA(UK3CB_BAF_556_200Rnd_T,1);
		};
	};
	
	
	class TWC_Backpack_Modern_Rifleman: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C
	{
		scope = 1;
		scopeArsenal = 1;
		class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_556_30Rnd,8);
		};
	};
	
	};
	class TWC_Backpack_Modern_Grenadier: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C
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
	class TWC_Backpack_Modern_Autorifleman_Kitbag: UK3CB_BAF_B_Kitbag_MTP
	{
		scope = 1;
		scopeArsenal = 1;
		class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_556_200Rnd,1);
		ADD_MAGA(UK3CB_BAF_556_200Rnd_T,1);
		};
	};
	class TWC_Backpack_Modern_Autorifleman: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D
	{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_556_200Rnd,1);
		ADD_MAGA(UK3CB_BAF_556_200Rnd_T,1);
		};
	};
	
	class TWC_Backpack_Modern_2IC_Kitbag: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C
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
	class TWC_Backpack_Modern_2IC: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C
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
	class TWC_Backpack_Modern_MachineGunner_Kitbag: UK3CB_BAF_B_Kitbag_MTP
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_762_100Rnd,1);
		ADD_MAGA(UK3CB_BAF_762_100Rnd_T,1);
	};
};
	class TWC_Backpack_Modern_MachineGunner: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_762_100Rnd,1);
		ADD_MAGA(UK3CB_BAF_762_100Rnd_T,1);
	};
};
	class TWC_Backpack_Marksman: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_762_L42A1_20Rnd,5);
		ADD_MAGA(UK3CB_BAF_762_L42A1_20Rnd_T,3);
	};
};
	class TWC_Backpack_Modern_Platoon_Sergeant: UK3CB_BAF_B_Carryall_MTP
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
	class TWC_Backpack_Platoon_Mortar: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C
class TWC_Backpack_Modern_Regular_Dismounted_Woodland_Platoon_Mortar: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_1Rnd_60mm_Mo_Shells, 10);
		ADD_MAGA(UK3CB_BAF_1Rnd_60mm_Mo_Smoke_White, 4);
	};
};
	class TWC_Backpack_Modern_Medic: UK3CB_BAF_B_Bergen_MTP_Medic_L_A
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
		ADD_ITEM(ACE_salineIV_500,12);
		ADD_ITEM(ACE_salineIV_250,4);
		ADD_ITEM(ACE_tourniquet,4);
		ADD_ITEM(ACE_personalAidKit,1);
		ADD_ITEM(TWC_Item_Medical_SutureKit_25,1);
	};
};
	class TWC_Backpack_Modern_MortarGunner: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C
class TWC_Backpack_Modern_Regular_Dismounted_Woodland_Platoon_Mortar: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_D
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_1Rnd_60mm_Mo_Shells, 10);
		ADD_MAGA(UK3CB_BAF_1Rnd_60mm_Mo_Smoke_White, 4);
	};
};

	class TWC_Backpack_Modern_MortarAssistant: UK3CB_BAF_B_Bergen_MTP_SL_L_A
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_1Rnd_60mm_Mo_Shells, 10);
		ADD_MAGA(UK3CB_BAF_1Rnd_60mm_Mo_Smoke_White, 4);
	};
};
	
	class twc_mtp_belt;
	class TWC_Backpack_Modern_Sniper: twc_mtp_belt
	{};
		class TransportMagazines
		{};
	class TWC_Backpack_Modern_Spotter: twc_mtp_belt
{
	scope = 1;
	scopeArsenal = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
		ADD_ITEM(ACE_ATragMX,1);
		ADD_ITEM(ACE_SpottingScope,1);
	};
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
	};
};
	class TWC_Backpack_Modern_FAC: UK3CB_BAF_B_Bergen_MTP_JTAC_L_A
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
	class TWC_Backpack_Modern_HeloPilot: B_AssaultPack_rgr
{
	scope = 1;
	scopeArsenal = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
	};
};
	class TWC_Backpack_Modern_FSTForwardObserver: UK3CB_BAF_B_Bergen_MTP_Radio_L_A
	{};
//////////////////////////////  COIN  //////////////////////////////	
	class TWC_Backpack_Modern_Pointman: UK3CB_BAF_B_Bergen_MTP_PointMan_L_A
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_556_30Rnd,3);
		ADD_MAGA(CUP_8Rnd_B_Beneli_74Slug,8);
		ADD_MAGA(CUP_8Rnd_B_Beneli_74Pellets,8);
	};
	class TransportWeapons {
		ADD_WEAP(TWC_L128A1_Eotech,1);
	};
};
	class TWC_Backpack_Modern_Coin_2IC: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C
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
	
	class TWC_Backpack_Modern_Spotter_coin: UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C
class TWC_Backpack_Modern_COIN_Woodland_Spotter: UK3CB_BAF_B_Bergen_MTP_SL_L_A
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