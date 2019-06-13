

class cfgammo{
	class rocketbase;
	class rhs_ammo_maaws_HE;
	class TWC_R_OG7_AT: rhs_ammo_maaws_HE
	{
		explosionEffects = "GrenadeExplosion";
		ace_frag_charge = 32;
		ace_frag_classes[] = {"ace_frag_tiny_HD"};
		ace_frag_enabled = 1;
		ace_frag_force = 1;
		ace_frag_gurney_c = 2700;
		ace_frag_gurney_k = "1/2";
		ace_frag_metal = 200;
		hit = 80;
		indirectHit = 8;
		indirectHitRange = 6;
		model = "rhsusf\addons\rhsusf_weapons2\m3maaws\ammo_m3maaws.p3d";
	};
	class CUP_R_PG7VL_AT: rocketbase
	{
		maxSpeed=10;
		timetolive=5;
		fuse=5;
		thrust = 50;
		thrustTime = 7;
		sideAirFriction =0.001;
		AirFriction =0.001;

	};


};

class cfgmagazines{
	class CUP_250Rnd_TE2_Red_Tracer_GSh23_23mm_APHE_M;
	
	class twc_23mm_1rnd: CUP_250Rnd_TE2_Red_Tracer_GSh23_23mm_APHE_M
	{
		descriptionShort = "Used in: Improvised Sniper Rifle";
		count = 1;
		displayName = "23 mm Round";
		weight = 0;
		picture = "\A3\weapons_f\data\UI\M_5rnd_127x108_CA.paa";
		mass = 4;
		ammo = "CUP_B_23mm_APHE_Tracer_Red";
		tracersEvery = 1;
	};
	
	class rhs_rpg7_PG7VL_mag;
	class rhs_rpg7_OG7V_mag: rhs_rpg7_PG7VL_mag
	{
		ammo = "TWC_R_OG7_AT";
	};
	class CA_LauncherMagazine;
	class CUP_OG7_M : CA_LauncherMagazine
	{
		ammo = "TWC_R_OG7_AT";
	};
	
};


class cfgweapons{

		
	class CUP_srifle_ksvk_PSO3;
	class twc_ksvk: CUP_srifle_ksvk_PSO3
	{
		scope = 2;
		displayname = "Improvised Sniper Rifle";
		magazines[] = {"twc_23mm_1rnd"};

	};
		
		
	class rhs_weap_hk416d10;
		class rhs_weap_hk416d10_acog: rhs_weap_hk416d10
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_ACOG";
			};
			class LinkedItemsFrontSideRail
			{
				slot="PointerSlot";
				item="rhsusf_acc_anpeq15A";
			};
		};
	};
	class rhs_weap_sr25;
		class rhs_weap_sr25_leo: rhs_weap_sr25
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_LEUPOLDMK4_2";
			};
			class LinkedItemsFrontSideRail
			{
				slot="UnderBarrelSlot";
				item="rhsusf_acc_harris_bipod";
			};
		};
	};
	
		

		
	};
	