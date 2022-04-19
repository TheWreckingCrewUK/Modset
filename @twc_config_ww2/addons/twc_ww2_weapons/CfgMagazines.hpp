class CfgMagazines {
	class fow_e_no82;
	class twc_no82: fow_e_no82 {
		ammo = "twc_no82";
		displayName = "NO. 82 AT Grenade";
	};
	
	class LIB_HandGrenade_base;
	class LIB_No82: LIB_HandGrenade_base
	{
		mass = 20;
	};
	
	class UGL_FlareGreen_F;
	class UGL_FlareRed_F;
	class UGL_FlareYellow_F;
	class UGL_FlareWhite_F;

	class TWC_Magazine_SignalFlare_Green: UGL_FlareGreen_F {
		ammo = TWC_Ammo_SignalFlare_Green;
		count = 1;
		displayName = "Signal Flare - Green";
		descriptionShort = "Used to signal in green";
		mass = 1;
	};
	
	class TWC_Magazine_SignalFlare_Red: UGL_FlareRed_F {
		ammo = TWC_Ammo_SignalFlare_Red;
		count = 1;
		displayName = "Signal Flare - Red";
		descriptionShort = "Used to signal in red";
		mass = 1;
	};
	
	class TWC_Magazine_SignalFlare_Yellow: UGL_FlareYellow_F {
		ammo = TWC_Ammo_SignalFlare_Yellow;
		count = 1;
		displayName = "Signal Flare - Yellow";
		descriptionShort = "Used to signal in yellow";
		mass = 1;
	};
	
	// No default blue flare, inherit from white instead
	class TWC_Magazine_SignalFlare_Blue: UGL_FlareWhite_F {
		ammo = TWC_Ammo_SignalFlare_Blue;
		count = 1;
		displayName = "Signal Flare - Blue";
		descriptionShort = "Used to signal in blue";
		displayNameShort = "Blue Flare";
		mass = 1;
	};
	
	class 1Rnd_SmokeGreen_Grenade_shell;
	class TWC_Magazine_SignalSmoke_Green: 1Rnd_SmokeGreen_Grenade_shell {
		ammo = TWC_Ammo_SignalSmoke_Green;
		count = 1;
		displayName = "Signal Smoke - Green";
		descriptionShort = "Used to signal in green";
		initSpeed = 30;
		mass = 1;
	};

	class 1Rnd_SmokeRed_Grenade_shell;
	class TWC_Magazine_SignalSmoke_Red: 1Rnd_SmokeRed_Grenade_shell {
		ammo = TWC_Ammo_SignalSmoke_Red;
		count = 1;
		displayName = "Signal Smoke - Red";
		descriptionShort = "Used to signal in red";
		initSpeed = 30;
		mass = 1;
	};

	class 1Rnd_SmokeYellow_Grenade_shell;
	class TWC_Magazine_SignalSmoke_Yellow: 1Rnd_SmokeYellow_Grenade_shell {
		ammo = TWC_Ammo_SignalSmoke_Yellow;
		count = 1;
		displayName = "Signal Smoke - Yellow";
		descriptionShort = "Used to signal in yellow";
		initSpeed = 30;
		mass = 1;
	};

	class 1Rnd_SmokeBlue_Grenade_shell;
	class TWC_Magazine_SignalSmoke_Blue: 1Rnd_SmokeBlue_Grenade_shell {
		ammo = TWC_Ammo_SignalSmoke_Blue;
		count = 1;
		displayName = "Signal Smoke - Blue";
		descriptionShort = "Used to signal in blue";
		initSpeed = 30;
		mass = 1;
	};
	class CA_Magazine;
	class TWC_Magazine_57mm_1rnd_HE: CA_Magazine {
		displayName = "High Explosive";
		displayNameShort = "HE";
		scope = 2;
		scopeCurator = 2;
		type = 256;
		count = 1;
		ammo = "fow_Sh_57mm_HE";
		initSpeed = 810;
		model = "\A3\Structures_F_EPB\Items\Military\Ammobox_rounds_F.p3d";
		picture = "\z\ace\addons\mk6mortar\UI\w_l16_ammo_he_ca.paa";
		mass = 72;
	};
	class TWC_Magazine_57mm_1rnd_APCBC: TWC_Magazine_57mm_1rnd_HE {
		displayName = "Armour Piercing Capped, Ballistic Capped";
		displayNameShort = "APCBC";
		ammo = "fow_Sh_57mm_APCBC";
	};
	class TWC_Magazine_57mm_1rnd_APCR: TWC_Magazine_57mm_1rnd_HE {
		displayName = "Armour Piercing Composite Rigid";
		displayNameShort = "APCR";
		ammo = "fow_Sh_57mm_APCR";
	};
	class TWC_Magazine_57mm_1rnd_APDS: TWC_Magazine_57mm_1rnd_HE {
		displayName = "Armour Piercing Discarding Sabot";
		displayNameShort = "APDS";
		ammo = "fow_Sh_57mm_APDS";
	};
	class TWC_Magazine_57mm_1rnd_AP: TWC_Magazine_57mm_1rnd_HE {
		displayName = "Armour Piercing";
		displayNameShort = "AP";
		ammo = "fow_Sh_57mm_AP";
	};
};