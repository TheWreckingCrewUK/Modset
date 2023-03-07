//Squad, Airborne, Woodland

class TWC_Backpack_WW2_US_Airborne_Rifleman: B_LIB_US_M36_Bandoleer {
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(LIB_8Rnd_762x63, 12);
	};
};
class TWC_Backpack_WW2_US_Airborne_Grenadier: B_LIB_US_M36_Bandoleer {
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(LIB_8Rnd_762x63, 12);
		ADD_MAGA(LIB_1Rnd_G_Mk2, 6);
		ADD_MAGA(LIB_1Rnd_G_M9A1, 2);
	};
};
class TWC_Backpack_WW2_US_Airborne_SMG: B_LIB_US_M36_Rope {
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(LIB_30Rnd_45ACP, 6);
	};
};
class TWC_Backpack_WW2_US_Airborne_MG: B_LIB_US_M36_Rope {
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(LIB_50Rnd_762x63, 4);
	};
};
class TWC_Backpack_WW2_US_Airborne_MGASS: B_LIB_US_M36_Rope {
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(LIB_15Rnd_762x33, 6);
		ADD_MAGA(LIB_50Rnd_762x63, 4);
	};
};
class TWC_Backpack_WW2_US_Airborne_Ammobearer: B_LIB_US_M36_Bandoleer {
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(LIB_8Rnd_762x63, 12);
		ADD_MAGA(LIB_50Rnd_762x63, 4);
	};
};
class TWC_Backpack_WW2_US_Airborne_2iC: B_LIB_US_M36_Bandoleer {
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(LIB_8Rnd_762x63, 8);
		ADD_MAGA(LIB_50Rnd_762x63, 2);
		ADD_MAGA(LIB_15Rnd_762x33, 4);
		ADD_MAGA(LIB_30Rnd_45ACP, 2);
	};
};
class TWC_Backpack_WW2_US_Airborne_SquadLeader: B_LIB_US_M36_Rope {
	scope = 1;
	scopeArsenal = 1;
	maximumLoad = 180;
	class TransportMagazines {
		ADD_MAGA(LIB_30Rnd_45ACP, 6);
		ADD_MAGA(LIB_US_M18, 3);
		ADD_MAGA(LIB_US_M18_Green, 2);
		ADD_MAGA(LIB_US_M18_Yellow, 2);
		ADD_MAGA(LIB_US_M18_Red, 2);
	};
};

class TWC_Backpack_WW2_US_Airborne_Platoon_Leader: B_LIB_US_M36_Rope {
	scope = 1;
	scopeArsenal = 1;
	maximumLoad = 180;
	class TransportMagazines {
		ADD_MAGA(LIB_30Rnd_45ACP, 6);
		ADD_MAGA(LIB_US_M18, 3);
		ADD_MAGA(LIB_US_M18_Green, 2);
		ADD_MAGA(LIB_US_M18_Yellow, 2);
		ADD_MAGA(LIB_US_M18_Red, 2);
	};
};
class TWC_Backpack_WW2_US_Airborne_Platoon_Sergeant: B_LIB_US_M36_Rope {
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(LIB_8Rnd_762x63, 8);
		ADD_MAGA(LIB_50Rnd_762x63, 2);
		ADD_MAGA(LIB_15Rnd_762x33, 4);
		ADD_MAGA(LIB_30Rnd_45ACP, 2);
	};
};
class TWC_Backpack_WW2_US_Airborne_Platoon_Medic: B_LIB_SOV_RA_MedicalBag_Empty {
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
class TWC_Backpack_WW2_US_Airborne_Platoon_AT: B_LIB_US_M36_Rocketbag_Empty {
	scope = 1;
	scopeArsenal = 1;
	maximumLoad = 250;
	class TransportMagazines {
		ADD_MAGA(LIB_1Rnd_60mm_M6, 4);
	};
};