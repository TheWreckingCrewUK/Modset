class CfgMagazines {
	class CA_Magazine;
	class TWC_Magazine_105mm_1rnd_HE: CA_Magazine {
		displayName = "L31 High Explosive";
		displayNameShort = "HE";
		scope = 2;
		scopeCurator = 2;
		type = 256;
		count = 1;
		ammo = "CUP_Sh_105_HE";
		initSpeed = 810;
		model = "\A3\Structures_F_EPB\Items\Military\Ammobox_rounds_F.p3d";
		picture = "\z\ace\addons\mk6mortar\UI\w_l16_ammo_he_ca.paa";
		mass = 72;
	};
	class TWC_Magazine_105mm_1rnd_HESH: TWC_Magazine_105mm_1rnd_HE {
		displayName = "L42 High Explosive Squash Head";
		displayNameShort = "HESH";
		ammo = "TWC_Ammo_105mm_HESH";
	};
	class TWC_Magazine_105mm_1rnd_Smoke_White: TWC_Magazine_105mm_1rnd_HE {
		displayName = "L45 Smoke (White)";
		displayNameShort = "Smoke (White)";
		ammo = "TWC_Ammo_105mm_Smoke_White";
		picture = "\z\ace\addons\mk6mortar\UI\w_l16_ammo_smk_white_ca.paa";
	};
	class TWC_Magazine_105mm_1rnd_Smoke_Red: TWC_Magazine_105mm_1rnd_Smoke_White {
		displayName = "L37 Smoke (Red)";
		displayNameShort = "Smoke (Red)";
		ammo = "TWC_Ammo_105mm_Smoke_Red";
	};
	class TWC_Magazine_105mm_1rnd_Smoke_Orange: TWC_Magazine_105mm_1rnd_Smoke_White {
		displayName = "L38 Smoke (Orange)";
		displayNameShort = "Smoke (Orange)";
		ammo = "TWC_Ammo_105mm_Smoke_Orange";
	};
	class TWC_Magazine_105mm_1rnd_Illum: TWC_Magazine_105mm_1rnd_HE {
		displayName = "L43 Illumination";
		displayNameShort = "Illum";
		ammo = "TWC_Ammo_105mm_Illum";
		picture = "\z\ace\addons\mk6mortar\UI\w_l16_ammo_illum_ca.paa";
	};
	class TWC_Magazine_105mm_1rnd_Illum_IR: TWC_Magazine_105mm_1rnd_Illum {
		displayName = "L54 Illumination (IR)";
		displayNameShort = "Illum (IR)";
		ammo = "TWC_Ammo_105mm_Illum_IR";
	};
};
