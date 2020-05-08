class CfgMagazines {
	class CA_Magazine;
	class TWC_Loose_Ammo_Base_Class: CA_Magazine {};

	// DEBUG: When finished, move to the repos respective config/weapons folder!
	class UK3CB_BAF_556_30Rnd: CA_Magazine {
		deleteIfEmpty = 0;
		TWC_emptiesTo = "TWC_Magazine_LooseAmmo_556";
	};
	
	class UK3CB_BAF_556_30Rnd_T: CA_Magazine {
		deleteIfEmpty = 0;
		TWC_emptiesTo = "TWC_Magazine_LooseAmmo_556_T";
	};

	class TWC_Magazine_LooseAmmo_556: TWC_Loose_Ammo_Base_Class {
		scope = 2;
		scopeCurator = 1;

		displayName = "5.56mm Loose Ammo";
		displayNameShort = "5.56mm Loose Ammo";
		descriptionShort = "5.56mm Loose Ammo";
		picture = "\twc_magazines\ui\556_loose_ammo_ca.paa"; // path
		count = 300; // 10 magazines
		mass = 40; // 4 magazines worth (not realistic, but for mere gameplay reasons)

		TWC_Fills[] = {"UK3CB_BAF_556_30Rnd"}; // classnames of the magazines this fills
	};

	class TWC_Magazine_LooseAmmo_556_T: TWC_Loose_Ammo_Base_Class {
		scope = 2;
		scopeCurator = 1;

		displayName = "5.56mm Loose Tracer Ammo";
		displayNameShort = "5.56mm Loose Tracer Ammo";
		descriptionShort = "5.56mm Loose Tracer Ammo";
		picture = "\twc_magazines\ui\556_loose_ammo_ca.paa"; // path
		count = 300;
		weight = 40;

		TWC_Fills[] = {"UK3CB_BAF_556_30Rnd_T"}; // classnames of the magazines this refills
	};

	class TWC_Magazine_LooseAmmo_303: TWC_Loose_Ammo_Base_Class {
		scope = 2;
		scopeCurator = 1;

		displayName = "Loose .303 Ammo";
		displayNameShort = "Loose .303 Ammo";
		descriptionShort = "Loose .303 Ammo";
		picture = "\twc_magazines\ui\refill_ca.paa"; // path
		count = 100;
		weight = 1;

		TWC_Fills[] = {""}; // classnames of the magazines this refills
	};
}; 