class VME_PLA_Rifle_Box;

class TWC_AmmoBox_PLAN_Section_Portable: VME_PLA_Rifle_Box {
	scope = 2;
	scopeCurator = 2;
	displayName = "PLAN Section Resupply (Portable)";
	editorCategory = "TWC_Crates";
	editorSubcategory = "TWC_Crates_Other";
	
	// ACE Defines
	ace_cargo_canLoad     = 1;
	ace_cargo_size        = 1;
	ace_cargo_hasCargo    = 0;

	ace_dragging_canCarry = 1;
	ace_dragging_canDrag  = 1;
	
	class TransportItems {
		item_nc(ACE_fieldDressing, 12);
		item_nc(ACE_elasticBandage, 12);
		item_nc(ACE_quikclot, 12);
		item_nc(ACE_packingBandage, 12);
		
		item_nc(ACE_morphine, 12);
		item_nc(ACE_epinephrine, 12);
		item_nc(ACE_tourniquet, 6);
	};
	
	class TransportMagazines {
		maga_nc(VME_QBZ95_1_30Rnd_DBP10, 16);
		maga_nc(VME_QBZ95_1_30Rnd_DBP10_Tracer_Green, 4);
		
		maga_nc(VME_QJY88_200Rnd_DVP88_Heavy, 4);
		
		
		maga_nc(VME_QJB95_1_75Rnd_DBP10, 12);
		maga_nc(VME_QJB95_1_75Rnd_DBP10_Tracer_Green, 4);
		
		maga_nc(VME_1Rnd_HE_GL, 12);
		maga_nc(VME_1Rnd_Smoke_GL, 4);
		
		maga_nc(SmokeShell, 10);
		maga_nc(SmokeShellRed, 2);
		maga_nc(SmokeShellGreen, 2);
		maga_nc(SmokeShellBlue, 2);
		maga_nc(SmokeShellYellow, 2);

		// Night Time Party Time - IR, Chem-lights
		maga_nc(B_IR_Grenade, 1);
		maga_nc(Chemlight_green, 4);
		maga_nc(Chemlight_red, 4);
		maga_nc(Chemlight_blue, 4);

		// Hand Grenade HE
		maga_nc(HandGrenade, 6);
	};
};

class TWC_AmmoBox_PLAN_AT_Portable: TWC_AmmoBox_PLAN_Section_Portable {
	displayName = "PLAN PF89B Resupply (Portable)";
	
	class TransportWeapons {
		weap_nc(vme_pla_PF89B, 4);
	};
};