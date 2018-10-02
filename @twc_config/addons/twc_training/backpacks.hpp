#define ADD_MAGA(a,b) class _nc_##a {magazine = a; count = b;}
#define ADD_WEAP(a,b) class _nc_##a {weapon = a; count = b;}
#define ADD_ITEM(a,b) class _nc_##a {name = a; count = b;}

//Base Classes
class UK3CB_BAF_B_Bergen_MTP_SL_L_A;
class UK3CB_BAF_B_Bergen_MTP_Medic_L_A;

class TWC_Backpack_Trainer: UK3CB_BAF_B_Bergen_MTP_SL_L_A {
	scope = 1;
	mass = 59.84;
	
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
	};
	
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
		ADD_MAGA(SmokeShellGreen,2);
	};
};

class TWC_Backpack_Trainer_Medical: UK3CB_BAF_B_Bergen_MTP_Medic_L_A {
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
	
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
	};
};