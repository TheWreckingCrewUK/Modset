//WOODLAND, REGULAR
//Section
class TWC_Backpack_2020_Regular_Woodland_SectionCommander: mpx_camel2
{
	scope = 1;
	scopeArsenal = 1;
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
class TWC_Backpack_2020_Regular_Woodland_2iC: mpx_daysack8
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_556_30Rnd, 8);
		ADD_MAGA(UK3CB_BAF_1Rnd_HE_Grenade_Shell,10);
		ADD_MAGA(UK3CB_BAF_762_100Rnd, 2);
		ADD_MAGA(UK3CB_BAF_762_L42A1_20Rnd_T, 2);
		ADD_MAGA(SmokeShell, 4);
	};
};
class TWC_Backpack_2020_Regular_Woodland: mpx_camel
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {

		ADD_MAGA(UK3CB_BAF_762_100Rnd, 1);
	};
};

//Platoon Command
class TWC_Backpack_2020_Regular_Woodland_Platoon_Commander: mpx_camel2
{
	scope = 1;
	scopeArsenal = 1;
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
class TWC_Backpack_2020_Regular_Woodland_Platoon_Sergeant: mpx_daysack10
{
	scope = 1;
	scopeArsenal = 1;
	maximumLoad = 480;
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
	};
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_556_30Rnd, 8);
		ADD_MAGA(UK3CB_BAF_1Rnd_HE_Grenade_Shell,10);
		ADD_MAGA(UK3CB_BAF_762_100Rnd, 2);
		ADD_MAGA(UK3CB_BAF_762_L42A1_20Rnd_T, 2);
		ADD_MAGA(SmokeShell, 4);
	};
};
class TWC_Backpack_2020_Regular_Woodland_Platoon_Medic: mpx_daysack7
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
class TWC_Backpack_2020_Regular_Woodland_Platoon_Mortar: mpx_daysack
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_1Rnd_60mm_Mo_Shells, 10);
		ADD_MAGA(UK3CB_BAF_1Rnd_60mm_Mo_Smoke_White, 4);
	};
};

//Attachments
class TWC_Backpack_2020_Regular_Woodland_Javelin_Assistant: mpx_daysack
{
	scope = 1;
	scopeArsenal = 1;
	maximumLoad = 600;
	class TransportWeapons {
		ADD_WEAP(UK3CB_BAF_Javelin_Slung_Tube,1);
	};
};
/*class TWC_Backpack_2020_Regular_Woodland_Starstreak_Assistant: mpx_daysack
{
	scope = 1;
	scopeArsenal = 1;
	maximumLoad = 600;
};*/
class TWC_Backpack_2020_Regular_Woodland_Spotter: mpx_daysack10
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
class TWC_Backpack_2020_Regular_Woodland_Artillery_Commander: mpx_daysack10
{
	scope = 1;
	scopeArsenal = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
		ADD_ITEM(ACE_DAGR,1);
	};
};
class TWC_Backpack_2020_Regular_Woodland_FO: mpx_daysack3
{
	scope = 1;
	scopeArsenal = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
		ADD_ITEM(ACE_DAGR,1);
	};
};
class TWC_Backpack_2020_Regular_Woodland_FAC: UK3CB_BAF_B_Bergen_MTP_JTAC_H_A
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
class TWC_Backpack_2020_Regular_Dismounted_Woodland_Rifleman: mpx_daysack
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_556_30Rnd,8);
		ADD_MAGA(UK3CB_BAF_762_100Rnd, 2);
	};
};
class TWC_Backpack_2020_Regular_Dismounted_Woodland_Grenadier: mpx_daysack
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_556_30Rnd,8);
		ADD_MAGA(UK3CB_BAF_1Rnd_HE_Grenade_Shell,16);
		ADD_MAGA(UK3CB_BAF_762_100Rnd, 1);
		ADD_MAGA(1Rnd_Smoke_Grenade_shell,4);
		ADD_MAGA(1Rnd_SmokeRed_Grenade_shell,2);
		ADD_MAGA(1Rnd_SmokeBlue_Grenade_shell,2);
	};
};
class TWC_Backpack_2020_Regular_Dismounted_Woodland_MG: mpx_daysack
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_762_100Rnd,1);
		ADD_MAGA(UK3CB_BAF_762_100Rnd_T,2);
	};
};
class TWC_Backpack_2020_Regular_Dismounted_Woodland_Marksman: mpx_daysack
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_762_L42A1_20Rnd,5);
		ADD_MAGA(UK3CB_BAF_762_L42A1_20Rnd_T,3);
	};
};
class TWC_Backpack_2020_Regular_Dismounted_Woodland_SectionCommander: mpx_daysack10
{
	scope = 1;
	scopeArsenal = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
	};
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_556_30Rnd,8);
		ADD_MAGA(UK3CB_BAF_762_100Rnd, 1);
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
	};
};
class TWC_Backpack_2020_Regular_Dismounted_Woodland_2iC: mpx_daysack8
{
	scope = 1;
	scopeArsenal = 1;
	maximumLoad = 480;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_556_30Rnd, 16);
		ADD_MAGA(UK3CB_BAF_1Rnd_HE_Grenade_Shell,16);
		ADD_MAGA(UK3CB_BAF_762_100Rnd, 2);
		ADD_MAGA(UK3CB_BAF_762_L42A1_20Rnd_T, 4);
		ADD_MAGA(SmokeShell, 4);
	};
};

//Platoon Command
class TWC_Backpack_2020_Regular_Dismounted_Woodland_Platoon_Commander: mpx_daysack10
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
class TWC_Backpack_2020_Regular_Dismounted_Woodland_Platoon_Sergeant: mpx_daysack10
{
	scope = 1;
	scopeArsenal = 1;
	maximumLoad = 640;
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
	};
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_556_30Rnd, 16);
		ADD_MAGA(UK3CB_BAF_1Rnd_HE_Grenade_Shell,16);
		ADD_MAGA(UK3CB_BAF_762_100Rnd, 2);
		ADD_MAGA(UK3CB_BAF_762_L42A1_20Rnd_T, 4);
		ADD_MAGA(SmokeShell, 4);
	};
};
class TWC_Backpack_2020_Regular_Dismounted_Woodland_Platoon_Medic: mpx_daysack7
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
class TWC_Backpack_2020_Regular_Dismounted_Woodland_Platoon_Mortar: mpx_daysack8
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(UK3CB_BAF_1Rnd_60mm_Mo_Shells, 10);
		ADD_MAGA(UK3CB_BAF_1Rnd_60mm_Mo_Smoke_White, 4);
	};
};