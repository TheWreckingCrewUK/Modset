class PLAN_CarryAll_Base;

//Section
class TWC_Backpack_PLAN_Regular_SectionCommander: PLAN_CarryAll_Base
{
	scope = 1;
	scopeArsenal = 1;
	class TransportItems {
		item_nc(ACRE_PRC117F,1);
	};
	class TransportMagazines {
		maga_nc(SmokeShell,3);
		maga_nc(SmokeShellRed,2);
		maga_nc(SmokeShellBlue,2);
	};
};
class TWC_Backpack_PLAN_Regular_2iC: PLAN_CarryAll_Base
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		maga_nc(VME_QBZ95_1_30Rnd_DBP10, 6);
		maga_nc(VME_QJB95_1_75Rnd_DBP10, 4);
		maga_nc(VME_QJY88_200Rnd_DVP88_Heavy, 3);
		maga_nc(SmokeShell, 4);
	};
};

//Platoon Command
class TWC_Backpack_PLAN_Regular_Platoon_Commander: PLAN_CarryAll_Base
{
	scope = 1;
	scopeArsenal = 1;
	class TransportItems {
		item_nc(ACRE_PRC117F,1);
	};
	class TransportMagazines {
		maga_nc(SmokeShell,3);
		maga_nc(SmokeShellRed,2);
		maga_nc(SmokeShellBlue,2);
	};
};
class TWC_Backpack_PLAN_Regular_Platoon_Sergeant: PLAN_CarryAll_Base
{
	scope = 1;
	scopeArsenal = 1;
	class TransportItems {
		item_nc(ACRE_PRC117F,1);
	};
	class TransportMagazines {
		maga_nc(VME_QBZ95_1_30Rnd_DBP10, 6);
		maga_nc(VME_QJB95_1_75Rnd_DBP10, 2);
		maga_nc(VME_QJY88_200Rnd_DVP88_Heavy, 3);
		maga_nc(SmokeShell, 4);
	};
};
class TWC_Backpack_PLAN_Regular_Platoon_Medic: PLAN_CarryAll_Base
{
	scope = 1;
	scopeArsenal = 1;
	class TransportItems {
		item_nc(ACE_fieldDressing,20);
		item_nc(ACE_morphine,10);
		item_nc(ACE_elasticBandage,20);
		item_nc(ACE_quikclot,20);
		item_nc(ACE_packingBandage,20);
		item_nc(ACE_adenosine,4);
		item_nc(ACE_atropine,4);
		item_nc(ACE_epinephrine,10);
		item_nc(ACE_salineIV_500,6);
		item_nc(ACE_tourniquet,4);
		item_nc(ACE_personalAidKit,1);
		item_nc(TWC_Item_Medical_SutureKit_25,1);
	};
};

//Attachments
class TWC_Backpack_PLAN_Regular_FAC: PLAN_CarryAll_Base
{
	scope = 1;
	scopeArsenal = 1;
	class TransportItems {
		item_nc(ACRE_PRC117F,1);
		item_nc(ACE_DAGR,1);
	};
	class TransportMagazines {
		maga_nc(SmokeShell,3);
		maga_nc(SmokeShellRed,3);
		maga_nc(SmokeShellGreen,3);
		maga_nc(SmokeShellBlue,3);
		maga_nc(SmokeShellPurple,3);
	};
};