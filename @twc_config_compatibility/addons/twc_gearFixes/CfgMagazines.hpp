
	
	class UK3CB_BAF_1Rnd_81mm_Mo_Shells;
	class UK3CB_BAF_1Rnd_81mm_Mo_AB_Shells;
	class UK3CB_BAF_1Rnd_81mm_Mo_Flare_White;
	class UK3CB_BAF_1Rnd_81mm_Mo_Smoke_White;
	
	class UK3CB_BAF_1Rnd_60mm_Mo_Shells: UK3CB_BAF_1Rnd_81mm_Mo_Shells {
		mass = 20;
	};
	class UK3CB_BAF_1Rnd_60mm_Mo_AB_Shells: UK3CB_BAF_1Rnd_81mm_Mo_Flare_White {
		mass = 20;
	};
	class UK3CB_BAF_1Rnd_60mm_Mo_Flare_White: UK3CB_BAF_1Rnd_81mm_Mo_Flare_White {
		mass = 15;
	};
	class UK3CB_BAF_1Rnd_60mm_Mo_Smoke_White: UK3CB_BAF_1Rnd_81mm_Mo_Smoke_White {
		mass = 15;
	};
	class UK3CB_BAF_1Rnd_60mm_Mo_WPSmoke_White: UK3CB_BAF_1Rnd_81mm_Mo_Smoke_White {
		mass = 15;
	};
	
	
	class 140Rnd_30mm_MP_shells_Tracer_Red;
	class TWC_Magazine_30mm_3rd_HET: 140Rnd_30mm_MP_shells_Tracer_Red {
		ammo = "TWC_Ammo_30mm_HET";
		author = "FakeMatty, Bosenator";
		scope = 1;
		scopeArsenal = 0;
		displayName = "L13A1 30mm 3rd HE-T";
		displayNameShort = "L13A1 30mm HE-T";
		count = 3;
		initSpeed = 1070;
	};

	class 60Rnd_30mm_APFSDS_shells;
	class TWC_Magazine_30mm_3rd_APDS: 60Rnd_30mm_APFSDS_shells {
		ammo = "TWC_Ammo_30mm_APDS";
		author = "FakeMatty, Bosenator";
		scope = 1;
		scopeArsenal = 0;
		displayName = "L14A1 30mm 3rd APDS";
		displayNameShort = "L14A1 30mm APDS";
		count = 3;
		initSpeed = 1175;
	};

	class CA_Magazine;
	
	class 10Rnd_RHS_50BMG_Box: CA_Magazine
	{};
	class rhsusf_mag_10Rnd_STD_50BMG_M33: 10Rnd_RHS_50BMG_Box
	{
		ammo = "B_127x99_Ball_Tracer_Red";
		initSpeed = 890;
		displayName = "12.7x99mm 10Rnd (M33 Ball)";
		descriptionShort = "Caliber: 12.7x99mm (M33 Ball)<br />Rounds: 10";
	};
	class rhsusf_mag_10Rnd_STD_50BMG_AMAX: rhsusf_mag_10Rnd_STD_50BMG_M33
	{
		ammo = "ACE_127x99_Ball_AMAX";
		initSpeed = 850;
		displayNameShort = "AMAX";
		displayName = "12.7x99mm 10Rnd (AMAX)";
		descriptionShort = "Caliber: 12.7x99mm (AMAX)<br />Rounds: 10";
	};
	class rhsusf_mag_10Rnd_STD_50BMG_mk211: 10Rnd_RHS_50BMG_Box
	{
		initSpeed = 890;
		displayName = "12.7x99mm 10Rnd (HEIAP)";
		descriptionShort = "Caliber: 12.7x99mm (HEIAP)<br />High Explosive Incendiary Armour Piercing<br />Rounds: 10";
	};
	class 10Rnd_338_Mag;
	class ACE_10Rnd_338_API526_Mag: 10Rnd_338_Mag
	{
		displayNameShort = ".338 API";
		descriptionShort = "Caliber: .338LM (API526)<br />Armour Piercing Incendiary (526 Grain)<br />Rounds: 10";
	};
	class ACE_10Rnd_338_300gr_HPBT_Mag: 10Rnd_338_Mag
	{
		displayNameShort = ".338 HPBT";
		descriptionShort = "Caliber: .338LM (HPBT)<br />Hollow Point Boat-Tail (300 Grain)<br />Rounds: 10";
	};
	class TWC_5Rnd_338_API526_Mag: ACE_10Rnd_338_API526_Mag
	{
		displayName = ".338LM 5Rnd Mag (API526)";
		mass = 7;
		descriptionShort = "Caliber: .338LM (API526)<br />Armour Piercing Incendiary (526 Grain)<br />Rounds: 5";
		count = 5;
	};
	class TWC_5Rnd_338_300gr_HPBT_Mag: ACE_10Rnd_338_300gr_HPBT_Mag
	{
		displayName = ".338LM 5Rnd Mag (300gr)";
		mass = 7;
		descriptionShort = "Caliber: .338LM (HPBT)<br />Hollow Point Boat-Tail (300 Grain)<br />Rounds: 5";
		count = 5;
	};
	
	class 20Rnd_762x51_Mag;
	class UK3CB_BAF_762_L42A1_20Rnd:20Rnd_762x51_Mag
	{
		descriptionshort = "Calibre: 7.62x51mm STANAG<br/>Rounds: 20 x M118LR<br/>by www.3commandobrigade.com";
		ammo = "ACE_762x51_Ball_M118LR";
		lastRoundsTracer = 0;
	};
	