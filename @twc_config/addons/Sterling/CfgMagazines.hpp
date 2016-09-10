class CfgMagazines
{
	class Default;

	class CA_Magazine;

	class 34_rnd_sterling_mag: CA_Magazine 
	{
		scope = public; /// or 2, to be precise
		displayName = "34 round Sterling magazine";
		picture = "\A3\Weapons_F\Data\placeholder_co.paa"; /// just some icon
		ammo = B_Test_Caseless;
		count = 34; /// 30 rounds is enough
		initSpeed = 400; /// standard muzzle speed
		tracersEvery = 0; /// disable tracers by default
		lastRoundsTracer = 4; /// tracers to track low ammo
		descriptionShort = "Used in the Sterling Submachinegun"; /// on mouse-over in Inventory
		magazineGroup[]	= {"sterling_group"}; /// all magazines in the same group may be used in weapon that has the group defined as compatible
	};
};