class B_LIB_SOV_RA_MedicalBag_Empty;
class B_LIB_SOV_RA_MGAmmoBag_Empty;
class B_LIB_SOV_RA_Rucksack;
class B_LIB_SOV_RA_Radio_ACRE2;

class TWC_Backpack_WW2_USSR_ASSMG: B_LIB_SOV_RA_MGAmmoBag_Empty
{
	scope = 1;
	class TransportMagazines {
		ADD_MAGA(LIB_47Rnd_762x54,8);
	};
};
class TWC_Backpack_WW2_USSR_2iC: B_LIB_SOV_RA_Rucksack
{
	scope = 1;
	class TransportMagazines {
		ADD_MAGA(LIB_10Rnd_762x54,12);
		ADD_MAGA(LIB_47Rnd_762x54,4);
		ADD_MAGA(LIB_71Rnd_762x25,4);
	};
};
class TWC_Backpack_WW2_USSR_Platoon_Commander: B_LIB_SOV_RA_Radio_ACRE2
{
	scope = 1;
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
	};
};
class TWC_Backpack_WW2_USSR_Platoon_Sergeant: B_LIB_SOV_RA_Rucksack
{
	scope = 1;
	class TransportMagazines {
		ADD_MAGA(LIB_10Rnd_762x54,24);
		ADD_MAGA(LIB_47Rnd_762x54,6);
		ADD_MAGA(LIB_71Rnd_762x25,8);
	};
};
class TWC_Backpack_WW2_USSR_Platoon_Medic: B_LIB_SOV_RA_MedicalBag_Empty
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
		ADD_ITEM(ACE_splint,6);
		ADD_ITEM(ACE_personalAidKit,1);
		ADD_ITEM(TWC_Item_Medical_SutureKit_25,1);
	};
};