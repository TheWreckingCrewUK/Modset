class LIB_Lone_Big_Box;
class TWC_AmmoBox_WW2_USSR: LIB_Lone_Big_Box
{
	scope = 2;
	scopeCurator = 2;
	displayName = "Section Resupply - USSR (Portable)";
	editorSubcategory = "TWC_WW2_Crates";
	
	class TransportItems {
		ADD_ITEM(ACE_fieldDressing, 15);
		ADD_ITEM(ACE_elasticBandage, 15);
		ADD_ITEM(ACE_quikclot, 15);
		ADD_ITEM(ACE_packingBandage, 15);
		
		ADD_ITEM(ACE_morphine, 6);
		ADD_ITEM(ACE_epinephrine, 6);
		ADD_ITEM(ACE_tourniquet, 4);
	};
	
	class TransportMagazines {
		ADD_MAGA(LIB_71Rnd_762x25, 8);
		ADD_MAGA(LIB_35Rnd_762x25, 3);
		ADD_MAGA(LIB_10Rnd_762x54, 18);
		ADD_MAGA(LIB_47Rnd_762x54, 10);
		
		// Smoke Grenades
		ADD_MAGA(SmokeShell, 6);
		ADD_MAGA(SmokeShellGreen, 2);
		ADD_MAGA(SmokeShellRed, 2);
		
		// Frag Grenade
		ADD_MAGA(LIB_Rg42, 6);
	};
};