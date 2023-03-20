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
	
	class CUP_MAAWS_HEDP_M;
	class TWC_Magazine_L14A1_HEAT: CUP_MAAWS_HEDP_M
	{
		ammo = "TWC_Ammo_L14A1_HEAT";
		descriptionShort = "Range: 1000 m<br/>Type: HEAT (High Explosive Anti Tank)<br/>Used in: L14A1";
		displayName = "L41A1 (HEAT) Round";
		displayNameShort = "HEAT";
		initSpeed = 255;
		mass = 70;
	};
	class TWC_Magazine_L14A1_HE: CUP_MAAWS_HEDP_M
	{
		ammo = "TWC_Ammo_L14A1_HE";
		descriptionShort = "Range: 1000 m<br/>Type: HE (High Explosive)<br/>Used in: L14A1";
		displayName = "L42A1 (HE) Round";
		displayNameShort = "HE";
		initSpeed = 255;
		mass = 66;
	};
	class TWC_Magazine_L14A1_Smoke: CUP_MAAWS_HEDP_M
	{
		ammo = "TWC_Ammo_L14A1_Smoke";
		descriptionShort = "Range: 1000 m<br/>Type: Smoke<br/>Used in: L14A1";
		displayName = "L43A1 (Smoke) Round";
		displayNameShort = "Smoke";
		initSpeed = 255;
		mass = 68;
	};
	class TWC_Magazine_L14A1_Illum: CUP_MAAWS_HEDP_M
	{
		ammo = "TWC_Ammo_L14A1_Illum";
		descriptionShort = "Range: 2300 m<br/>Type: Illumination<br/>Used in: L14A1";
		displayName = "L44A1 (Illum) Round";
		displayNameShort = "Illum";
		initSpeed = 255;
		mass = 70;
	};
	
	#define L14A1_MAG_HE(RANGE) \
	class TWC_Magazine_L14A1_HE_##RANGE: TWC_Magazine_L14A1_HE { \
		displayName = __EVAL("L42A1 (HE) (" + #RANGE + ") Round"); \
		displayNameShort = __EVAL("HE (" + #RANGE + ")"); \
		ammo = TWC_Ammo_L14A1_HE_##RANGE; \
		scope = 1; \
	};
	L14A1_MAG_HE(200)
	L14A1_MAG_HE(300)
	L14A1_MAG_HE(400)
	L14A1_MAG_HE(500)
	L14A1_MAG_HE(600)
	L14A1_MAG_HE(700)
	L14A1_MAG_HE(800)
	L14A1_MAG_HE(900)
	L14A1_MAG_HE(1000)
	L14A1_MAG_HE(1100)
	L14A1_MAG_HE(1200)
	L14A1_MAG_HE(1300)
	L14A1_MAG_HE(1400)
	L14A1_MAG_HE(1500)
	L14A1_MAG_HE(1600)
	L14A1_MAG_HE(1700)
	L14A1_MAG_HE(1800)
	L14A1_MAG_HE(1900)
	L14A1_MAG_HE(2000)
	L14A1_MAG_HE(2100)
	L14A1_MAG_HE(2200)
	L14A1_MAG_HE(2300)
	
	#define L14A1_MAG_ILLUM(RANGE) \
	class TWC_Magazine_L14A1_ILLUM_##RANGE: TWC_Magazine_L14A1_ILLUM { \
		displayName = __EVAL("L44A1 (Illum) (" + #RANGE + ") Round"); \
		displayNameShort = __EVAL("Illum (" + #RANGE + ")"); \
		ammo = TWC_Ammo_L14A1_ILLUM_##RANGE; \
		scope = 1; \
	};
	L14A1_MAG_ILLUM(200)
	L14A1_MAG_ILLUM(300)
	L14A1_MAG_ILLUM(400)
	L14A1_MAG_ILLUM(500)
	L14A1_MAG_ILLUM(600)
	L14A1_MAG_ILLUM(700)
	L14A1_MAG_ILLUM(800)
	L14A1_MAG_ILLUM(900)
	L14A1_MAG_ILLUM(1000)
	L14A1_MAG_ILLUM(1100)
	L14A1_MAG_ILLUM(1200)
	L14A1_MAG_ILLUM(1300)
	L14A1_MAG_ILLUM(1400)
	L14A1_MAG_ILLUM(1500)
	L14A1_MAG_ILLUM(1600)
	L14A1_MAG_ILLUM(1700)
	L14A1_MAG_ILLUM(1800)
	L14A1_MAG_ILLUM(1900)
	L14A1_MAG_ILLUM(2000)
	L14A1_MAG_ILLUM(2100)
	L14A1_MAG_ILLUM(2200)
	L14A1_MAG_ILLUM(2300)
};
