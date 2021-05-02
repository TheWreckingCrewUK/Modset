class CfgAmmo
{
	class B_9x21_Ball_Tracer_Green;
	class B_556x45_Ball_Tracer_Green;
	class B_762x54_Tracer_Green;
	class B_127x99_Ball_Tracer_Green;
	class ModuleOrdnanceMortar_F_ammo;
	class ModuleOrdnanceHowitzer_F_ammo;
	class ModuleOrdnanceRocket_F_ammo;
	class F_40mm_White;
	class F_40mm_Cir;

	class twc_dummyround_pistol: B_9x21_Ball_Tracer_Green
	{
		displayname = "9mm Dummy Round";
		hit = 1;
		indirectHit = 0;
		cost = 0;
		typicalSpeed = 100000;
	};
	class twc_dummyround_rifle: B_556x45_Ball_Tracer_Green
	{
		displayname = "5.56mm Dummy Round";
		hit = 1;
		indirectHit = 0;
		cost = 0;
		typicalSpeed = 100000;
	};
	class twc_dummyround_machinegun: B_762x54_Tracer_Green
	{
		displayname = "7.62mm Dummy Round";
		hit = 1;
		indirectHit = 0;
		cost = 0;
		typicalSpeed = 100000;
	};
	class twc_dummyround_heavy: B_127x99_Ball_Tracer_Green
	{
		displayname = "12.7mm Dummy Round";
		hit = 1;
		indirectHit = 0;
		cost = 0;
		typicalSpeed = 100000;
	};
	class twc_dummyround_artillery_small: ModuleOrdnanceMortar_F_ammo
	{
		displayname = "82mm Dummy Round";
		hit = 0;
		indirectHit = 0;
	};
	class twc_dummyround_artillery_medium: ModuleOrdnanceHowitzer_F_ammo
	{
		displayname = "155mm Dummy Round";
		hit = 0;
		indirectHit = 0;
	};
	class twc_dummyround_artillery_big: ModuleOrdnanceRocket_F_ammo
	{
		displayname = "203mm Dummy Round";
		hit = 0;
		indirectHit = 0;
	};

	class twc_ammo_artillery_illumination: F_40mm_White
	{
		intensity = 60000;
		coefGravity = 0.25;
	};
	class twc_ammo_artillery_illumination_ir: F_40mm_Cir
	{
		intensity = 60000;
		coefGravity = 0.25;
	};
};
