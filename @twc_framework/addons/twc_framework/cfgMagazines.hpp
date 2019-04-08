class CfgMagazines
{
	class 30Rnd_9x21_Green_Mag;
	class 30Rnd_556x45_Stanag_green;
	class 150Rnd_762x54_Box_Tracer;
	class 200Rnd_127x99_mag_Tracer_Green;

	class twc_dummymag_pistol: 30Rnd_9x21_Green_Mag
	{
		displayName = "9mm Dummy Magazine";
		ammo = "twc_dummyround_pistol";
	};
	class twc_dummymag_rifle: 30Rnd_556x45_Stanag_green
	{
		displayName = "5.56mm Dummy Magazine";
		ammo = "twc_dummyround_rifle";
	};
	class twc_dummymag_machinegun: 150Rnd_762x54_Box_Tracer
	{
		displayName = "7.62mm Dummy Magazine";
		ammo = "twc_dummyround_machinegun";
	};
	class twc_dummymag_heavy: 200Rnd_127x99_mag_Tracer_Green
	{
		displayName = "12.7mm Dummy Magazine";
		ammo = "twc_dummyround_heavy";
	};
};