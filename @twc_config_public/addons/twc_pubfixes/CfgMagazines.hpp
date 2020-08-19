
class cfgMagazines
{
	class CA_Magazine;
	
	class 10Rnd_RHS_50BMG_Box: CA_Magazine
	{};
	class rhsusf_mag_10Rnd_STD_50BMG_M33: 10Rnd_RHS_50BMG_Box
	{
		ammo = "B_127x99_Ball_Tracer_Red";
		initSpeed = 860;
		displayName = "12.7x99mm 10Rnd (M33 Ball)";
		descriptionShort = "Caliber: 12.7x99mm (M33 Ball)<br />Rounds: 10";
	};
	class rhsusf_mag_10Rnd_STD_50BMG_AMAX: rhsusf_mag_10Rnd_STD_50BMG_M33
	{
		ammo = "ACE_127x99_Ball_AMAX";
		initSpeed = 860;
		displayNameShort = "AMAX";
		displayName = "12.7x99mm 10Rnd (AMAX)";
		descriptionShort = "Caliber: 12.7x99mm (AMAX)<br />Rounds: 10";
	};
	class rhsusf_mag_10Rnd_STD_50BMG_mk211: 10Rnd_RHS_50BMG_Box
	{
		initSpeed = 880;
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
		
	class 250Rnd_30mm_HE_shells_Tracer_Red;
	class twc_3rnd_30mm_HE: 250Rnd_30mm_HE_shells_Tracer_Red
	{
		displayNameShort = "30mm HE";
		displayName = "HE";
		count = 3;
	};
		
	class 250Rnd_30mm_APDS_shells_Tracer_Red;
	class twc_3rnd_30mm_AP: 250Rnd_30mm_APDS_shells_Tracer_Red
	{
		displayNameShort = "30mm APDS";
		displayName = "APDS";
		count = 3;
	};
	
};