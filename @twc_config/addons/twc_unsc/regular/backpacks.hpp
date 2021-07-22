//ODST
//Team
class TWC_Backpack_ODST_Spec: OPTRE_ILCS_Rucksack_Black_Heavy;
{
	scope = 1;
	scopeArsenal = 1;
	class TransportItems {
		ADD_ITEM(C12_Remote_Mag,2);
		ADD_ITEM(C7_Remote_Mag,3);
		ADD_ITEM(ACE_wirecutter,1);
		ADD_ITEM(ACE_Clacker,1);
	};
	class TransportMagazines {
		ADD_MAGA(OPTRE_M9_Frag,8);
	};
};

class TWC_Backpack_ODST_AT: OPTRE_ILCS_Rucksack_Black_Heavy;
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(OPTRE_M41_Twin_HEAP,1);
		ADD_MAGA(OPTRE_M41_Twin_HEAT,2);
		ADD_MAGA(OPTRE_32Rnd_762x51_Mag,2);
		ADD_MAGA(OPTRE_32Rnd_762x51_Mag,1);
	};
};

class TWC_Backpack_ODST_Marksman: OPTRE_ILCS_Rucksack_Black;
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(OPTRE_200Rnd_95x40_Box_Tracer,1);
		ADD_MAGA(OPTRE_M41_Twin_HEAP,1);
		ADD_MAGA(OPTRE_M41_Twin_HEAT,1);
		ADD_MAGA(OPTRE_36Rnd_95x40_Mag,1);
		ADD_MAGA(OPTRE_36Rnd_95x40_Mag_Tracer,1);
		ADD_MAGA(OPTRE_32Rnd_762x51_Mag,4);
		ADD_MAGA(OPTRE_15Rnd_762x51_Mag_Tracer,4);
	};
};

class TWC_Backpack_ODST_AutoRifleman: OPTRE_ILCS_Rucksack_Black_Heavy;
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(OPTRE_200Rnd_95x40_Box_Tracer,5);
		ADD_MAGA(OPTRE_8Rnd_127x40_AP_Mag,2);
	};
};
class TWC_Backpack_ODST_TeamLeader: OPTRE_ILCS_Rucksack_Black;
{
	scope = 1;
	scopeArsenal = 1;
	class TransportItems {
	ADD_ITEM(ACRE_PRC117F,1);
	};
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
		ADD_MAGA(OPTRE_32Rnd_762x51_Mag,2);
		ADD_MAGA(OPTRE_15Rnd_762x51_Mag_Tracer,3);
		ADD_MAGA(1Rnd_HE_Grenade_shell,15);
		ADD_MAGA(1Rnd_SmokeRed_Grenade_shell,2);
		ADD_MAGA(1Rnd_SmokeGreen_Grenade_shell,2);
		ADD_MAGA(1Rnd_SmokeBlue_Grenade_shell,2);
	};
};

class TWC_Backpack_ODST_Corpsman: OPTRE_ILCS_Rucksack_Black_Medical;
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

class TWC_Backpack_ODST_FAC: OPTRE_ANPRC_521_Black
{
	scope = 1;
	scopeArsenal = 1;
	maximumLoad = 480;
	class TransportItems {
		ADD_ITEM(ACRE_PRC117F,1);
		ADD_ITEM(ACE_DAGR,1);
	};
	class TransportMagazines {
		ADD_MAGA(1Rnd_HE_Grenade_shell,3);
		ADD_MAGA(1Rnd_Smoke_Grenade_shell,3);
		ADD_MAGA(1Rnd_SmokeRed_Grenade_shell,3);
		ADD_MAGA(1Rnd_SmokeGreen_Grenade_shell,3);
		ADD_MAGA(1Rnd_SmokeBlue_Grenade_shell,3);
		ADD_MAGA(1Rnd_SmokePurple_Grenade_shell,3);
	};
};
class TWC_Backpack_Spartan_TeamLeader: OPTRE_ANPRC_521_Black_Spartan;
{
	scope = 1;
	scopeArsenal = 1;
	maximumLoad = 480;
	class TransportItems {
	ADD_ITEM(ACRE_PRC117F,1);
	};
	class TransportMagazines {
		ADD_MAGA(SmokeShell,3);
		ADD_MAGA(SmokeShellRed,2);
		ADD_MAGA(SmokeShellBlue,2);
		ADD_MAGA(OPTRE_32Rnd_762x51_Mag,2);
		ADD_MAGA(OPTRE_15Rnd_762x51_Mag_Tracer,3);
		ADD_MAGA(1Rnd_HE_Grenade_shell,15);
		ADD_MAGA(1Rnd_SmokeRed_Grenade_shell,2);
		ADD_MAGA(1Rnd_SmokeGreen_Grenade_shell,2);
		ADD_MAGA(1Rnd_SmokeBlue_Grenade_shell,2);
	};
};

class TWC_Backpack_Spartan_AT: OPTRE_ILCS_Rucksack_Black_Heavy_Spartan;
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(OPTRE_M41_Twin_HEAP,1);
		ADD_MAGA(OPTRE_M41_Twin_HEAT,2);
		ADD_MAGA(OPTRE_32Rnd_762x51_Mag,2);
		ADD_MAGA(OPTRE_32Rnd_762x51_Mag,1);
	};
};

class TWC_Backpack_Spartan_AutoRifleman: OPTRE_ILCS_Rucksack_Black_Heavy_Spartan;
{
	scope = 1;
	scopeArsenal = 1;
	class TransportMagazines {
		ADD_MAGA(OPTRE_200Rnd_95x40_Box_Tracer,5);
		ADD_MAGA(OPTRE_8Rnd_127x40_AP_Mag,2);
	};
};