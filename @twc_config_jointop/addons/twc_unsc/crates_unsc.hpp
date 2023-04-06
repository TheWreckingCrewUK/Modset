/*
	"TWC_AmmoBox_ODST_Team_Portable",
	"TWC_AmmoBox_Spartan_Team_Portable",
	"TWC_AmmoBox_FAC_Portable",
	"TWC_AmmoBox_Rocket_Portable",
	"TWC_AmmoBox_Explosives_Portable",
*/
class OPTRE_Ammo_SupplyPod_Empty;

class TWC_AmmoBox_ODST_Team_Portable: OPTRE_Ammo_SupplyPod_Empty {
	scope = 2;
	scopeCurator = 2;
	displayName = "ODST Team Resupply (Portable)";
	editorSubcategory = "TWC_Crates_UNSC";
	
	class TransportItems {
		ADD_ITEM(ACE_fieldDressing, 12);
		ADD_ITEM(ACE_elasticBandage, 12);
		ADD_ITEM(ACE_quikclot, 12);
		ADD_ITEM(ACE_packingBandage, 12);
		
		ADD_ITEM(ACE_morphine, 12);
		ADD_ITEM(ACE_epinephrine, 12);
		ADD_ITEM(ACE_tourniquet, 6);
	};
	
	class TransportMagazines {
		// Assault Rifle
		ADD_MAGA(OPTRE_32Rnd_762x51_Mag, 10);
		ADD_MAGA(OPTRE_32Rnd_762x51_Mag_Tracer, 5);
		
		// Auto Rifle
		ADD_MAGA(OPTRE_200Rnd_95x40_Box_Tracer, 5);
		
		// L42A1 DMR
		ADD_MAGA(OPTRE_15Rnd_762x51_Mag_Tracer, 15);
		
		// Battle Rifle
		ADD_MAGA(OPTRE_36Rnd_95x40_Mag, 10);
		ADD_MAGA(OPTRE_36Rnd_95x40_Mag_Tracer, 5);
		
		//Pistol
		ADD_MAGA(OPTRE_8Rnd_127x40_AP_Mag, 10);
		
		//SMG
		ADD_MAGA(OPTRE_60Rnd_5x23mm_Mag, 20);
		
		// UGL 40mm
		ADD_MAGA(1Rnd_HE_Grenade_shell, 12);
		ADD_MAGA(1Rnd_Smoke_Grenade_shell, 5);
		ADD_MAGA(1Rnd_SmokeGreen_Grenade_shell, 2);
		ADD_MAGA(1Rnd_SmokeRed_Grenade_shell, 2);
		ADD_MAGA(1Rnd_SmokeBlue_Grenade_shell, 2);

		// Smoke Grenades
		ADD_MAGA(SmokeShell, 10);
		ADD_MAGA(SmokeShellRed, 2);
		ADD_MAGA(SmokeShellBlue, 2);

		// Hand Grenade HE
		ADD_MAGA(CUP_HandGrenade_L109A2_HE, 10);
	};
};
class TWC_AmmoBox_Spartan_Team_Portable: OPTRE_Ammo_SupplyPod_Empty {
	scope = 2;
	scopeCurator = 2;
	displayName = "Spartan Team Resupply (Portable)";
	editorSubcategory = "TWC_Crates_UNSC";
	
	class TransportItems {
		ADD_ITEM(ACE_fieldDressing, 12);
		ADD_ITEM(ACE_elasticBandage, 12);
		ADD_ITEM(ACE_quikclot, 12);
		ADD_ITEM(ACE_packingBandage, 12);
		
		ADD_ITEM(ACE_morphine, 12);
		ADD_ITEM(ACE_epinephrine, 12);
		ADD_ITEM(ACE_tourniquet, 6);
	};
	
	class TransportMagazines {
		// Assault Rifle
		ADD_MAGA(OPTRE_32Rnd_762x51_Mag, 30);
		ADD_MAGA(OPTRE_32Rnd_762x51_Mag_Tracer, 10);
		
		// Machine Gun
		ADD_MAGA(OPTRE_200Rnd_127x99_M247H_Etilka_Ball, 5);
		
		// Sniper
		ADD_MAGA(OPTRE_4Rnd_145x114_APFSDS_Mag, 10);
		ADD_MAGA(OPTRE_4Rnd_145x114_HVAP_Mag, 5);
		ADD_MAGA(OPTRE_4Rnd_145x114_HEDP_Mag, 5);

		//Pistol
		ADD_MAGA(OPTRE_8Rnd_127x40_AP_Mag, 10);
				
		//Shotgun		
		ADD_MAGA(OPTRE_12Rnd_8Gauge_Pellets,4);
		ADD_MAGA(OPTRE_12Rnd_8Gauge_Slugs,4);
		
		// UGL 40mm
		ADD_MAGA(1Rnd_HE_Grenade_shell, 12);
		ADD_MAGA(1Rnd_Smoke_Grenade_shell, 5);
		ADD_MAGA(1Rnd_SmokeGreen_Grenade_shell, 2);
		ADD_MAGA(1Rnd_SmokeRed_Grenade_shell, 2);
		ADD_MAGA(1Rnd_SmokeBlue_Grenade_shell, 2);
		
		//SPANKR Rockets		
		ADD_MAGA(OPTRE_M41_Twin_HEAP,4);
		ADD_MAGA(OPTRE_M41_Twin_HEAT,4);

		// Smoke Grenades
		ADD_MAGA(SmokeShell, 10);
		ADD_MAGA(SmokeShellRed, 2);
		ADD_MAGA(SmokeShellBlue, 2);

		// Hand Grenade HE
		ADD_MAGA(CUP_HandGrenade_L109A2_HE, 6);
	};
};
class TWC_AmmoBox_FAC_Portable: OPTRE_Ammo_SupplyPod_Empty {
	scope = 2;
	scopeCurator = 2;
	displayName = "Forward Air Controller Resupply (Portable)";
	editorSubcategory = "TWC_Crates_UNSC";

	class TransportMagazines {
		// Assault Rifle
		ADD_MAGA(OPTRE_32Rnd_762x51_Mag, 5);
		ADD_MAGA(OPTRE_32Rnd_762x51_Mag_Tracer, 3);
		
		// UGL 40mm
		ADD_MAGA(1Rnd_HE_Grenade_shell, 10);
		ADD_MAGA(1Rnd_Smoke_Grenade_shell, 10);
		ADD_MAGA(1Rnd_SmokeGreen_Grenade_shell, 10);
		ADD_MAGA(1Rnd_SmokeRed_Grenade_shell, 10);
		ADD_MAGA(1Rnd_SmokeBlue_Grenade_shell, 10);

		// Smoke Grenades
		ADD_MAGA(SmokeShell, 10);
		ADD_MAGA(SmokeShellRed, 10);
		ADD_MAGA(SmokeShellBlue, 10);

		// Hand Grenade HE
		ADD_MAGA(CUP_HandGrenade_L109A2_HE, 2);
	};
};
class TWC_AmmoBox_Rocket_Portable: OPTRE_Ammo_SupplyPod_Empty {
	scope = 2;
	scopeCurator = 2;
	displayName = "Rocket Launcher Resupply (Portable)";
	editorSubcategory = "TWC_Crates_UNSC";

	class TransportMagazines {
		// Rocket Launcher
		ADD_MAGA(OPTRE_M41_Twin_HEAP,4);
		ADD_MAGA(OPTRE_M41_Twin_HEAT,4);
	};
};
class TWC_AmmoBox_Explosives_Portable: OPTRE_Ammo_SupplyPod_Empty {
	scope = 2;
	scopeCurator = 2;
	displayName = "Explosives Resupply (Portable)";
	
	editorSubcategory = "TWC_Crates_UNSC";

	class TransportItems {
		ADD_ITEM(C12_Remote_Mag,8);
		ADD_ITEM(C7_Remote_Mag,12);
		ADD_ITEM(ACE_Clacker,3);
	};
};