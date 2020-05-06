class CfgMagazines {
	class CA_Magazine;
	class TWC_Loose_Ammo_Base_Class: CA_Magazine {};

	// DEBUG: When finished, move to the repos respective config/weapons folder!
	class UK3CB_BAF_556_30Rnd: CA_Magazine {
		deleteIfEmpty = 0;
		TWC_emptiesTo = "TWC_Magazine_LooseAmmo_556";
	};

	class TWC_Magazine_LooseAmmo_556: TWC_Loose_Ammo_Base_Class {
		scope = 2;
		scopeCurator = 1;

		displayName = "Loose 5.56 Ammo";
		displayNameShort = "Loose 5.56 Ammo";
		descriptionShort = "Loose 5.56 Ammo";
		picture = "\twc_magazines\ui\refill_ca.paa"; // path
		count = 300; // 10 magazines
		weight = 1; // mass should be half of that of X amount of magazine-bullet worth it holds

		TWC_Fills[] = {"UK3CB_BAF_556_30Rnd"}; // classnames of the magazines this fills
	};

	class TWC_Magazine_LooseAmmo_556_T: TWC_Loose_Ammo_Base_Class {
		scope = 2;
		scopeCurator = 1;

		displayName = "Loose 5.56 Tracer Ammo";
		displayNameShort = "Loose 5.56 Tracer Ammo";
		descriptionShort = "Loose 5.56 Tracer Ammo";
		picture = "\twc_magazines\ui\refill_ca.paa"; // path
		count = 300;
		weight = 1;

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