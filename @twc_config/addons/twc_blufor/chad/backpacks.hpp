class TWC_Backpack_Chad_ASSAT: CUP_B_RPGPack_Khaki {
	scope = 1;
	scopeCurator = 1;
	class TransportMagazines {
		ADD_MAGA(CUP_PG7V_M, 2);
		ADD_MAGA(CUP_OG7_M, 3);
	};
};
class TWC_Backpack_Chad_ASSMG: cwr3_o_backpack_rd54 {
	scope = 1;
	scopeCurator = 1;
	class TransportMagazines {
		ADD_MAGA(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M, 3);
	};
};
class TWC_Backpack_Chad_2iC: cwr3_o_backpack_rd54 {
	scope = 1;
	scopeCurator = 1;
	class TransportMagazines {
		ADD_MAGA(CUP_30Rnd_762x39_AK47_M, 8);
		ADD_MAGA(CUP_1Rnd_HE_GP25_M, 8);
		ADD_MAGA(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Yellow_M, 2);
		ADD_MAGA(SmokeShell, 2);
		ADD_MAGA(CUP_HandGrenade_RGO, 4);
	};
};

class TWC_Backpack_Chad_Medic: cwr3_o_backpack_rd54_medic_empty
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