class ANA_Backpack_Modern_terp: CUP_B_SLA_Medicbag
{
		scope = 1;
		scopeArsenal = 1;
		class TransportItems {
			ADD_ITEM(ACRE_PRC152,1);
	};
};

	class ana_backpack_medic: CUP_B_SLA_Medicbag
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

	class TransportMagazines {
		ADD_MAGA(SmokeShell, 4);
	};
};
	
	class ana_backpack_rpg: CUP_B_RPGPack_Khaki
	{
		scope = 1;
		scopeArsenal = 1;
{
	class TransportMagazines {
		ADD_MAGA(CUP_OG7_M, 3);
		ADD_MAGA(CUP_PG7V_M,2);
	};
};
	
	class ana_backpack_mg: CUP_B_AlicePack_Khaki
	{
		scope = 1;
		
	class TransportMagazines {
		ADD_MAGA(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M, 4);
	};
		
};
	
	class ana_backpack_leader: CUP_B_AlicePack_Khaki
	{
		scope = 1;
		scopeArsenal = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
	};
	class TransportMagazines {
		ADD_MAGA(SmokeShell, 2);
		ADD_MAGA(SmokeShellRed, 3);
		ADD_MAGA(SmokeShellGreen, 3);
		ADD_MAGA(SmokeShellBlue, 3);
		ADD_MAGA(SmokeShellBlue, 3);
	};
};
	
	class ana_backpack_2ic: UK3CB_BAF_B_Carryall_OLI
	{
		scope = 1;
		scopeArsenal = 1;
	class TransportMagazines{
		ADD_MAGA(CUP_30Rnd_762x39_AK47_M, 10);
		ADD_MAGA(SmokeShell, 2);
		ADD_MAGA(SmokeShellRed, 3);
		ADD_MAGA(SmokeShellGreen, 3);
		ADD_MAGA(SmokeShellBlue, 3);
		ADD_MAGA(SmokeShellBlue, 3);	
	};
 };
