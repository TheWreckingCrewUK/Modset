class CfgAmmo
{
	class B_9x21_Ball_Tracer_Green;
	class B_556x45_Ball_Tracer_Green;
	class B_762x54_Tracer_Green;
	class B_127x99_Ball_Tracer_Green;
	class ModuleOrdnanceMortar_F_ammo;

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
	class twc_dummyround_artillery: ModuleOrdnanceMortar_F_ammo
	{
		displayname = "155mm Dummy Round";
		hit = 0;
		indirectHit = 0;
	};
};