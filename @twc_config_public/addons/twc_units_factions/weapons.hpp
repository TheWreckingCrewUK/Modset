

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

class asdg_MuzzleSlot_556;
class rhs_western_rifle_scopes_slot_short;

class cfgweapons{

		
	class CUP_srifle_ksvk_PSO3;
	class twc_ksvk_base: CUP_srifle_ksvk_PSO3
	{
		scope = 2;
		displayname = "Improvised Sniper Rifle";
		magazines[] = {"twc_23mm_1rnd"};
		class Single;
	};
	class twc_ksvk: twc_ksvk_base
	{
		recoil = "twc_shotgun_1";
		recoilProne = "twc_rifle_762_prone";
		class Single: Single
		{
			class standardsound
			{
				soundSetShot[] = {"RHS_DSHKM_Closure_SoundSet","RHS_120mm_Shot_SoundSet","RHS_sniper1_Tail_SoundSet"};
			};
		};
	};
		
		
	class CUP_arifle_AK74_Early;
	class twc_ak74early_sd: CUP_arifle_AK74_Early
	{
		class LinkedItems
		{
			class LinkedItemsFrontSideRail
			{
				slot="CUP_EastMuzzleSlotAK";
				item="rhs_acc_tgpa";
			};
		};
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
	
		
	
	class CUP_lmg_Pecheneg_desert;
	class twc_pkp_sof: CUP_lmg_Pecheneg_desert
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhs_acc_1pn93_2";
			};
		};
		class WeaponSlotsInfo
		{
			class CowsSlot: rhs_western_rifle_scopes_slot_short {
				class compatibleItems {
					rhs_acc_1pn93_2 = 1;
				};
			};
			allowedslots[] = {901};
			mass = 192.96;
		};
		recoil = "twc_rifle_556";
		recoilProne = "twc_rifle_556_prone";
	};
	
	class CUP_arifle_AK74M_railed_desert;
	class twc_ak74_sof: CUP_arifle_AK74M_railed_desert
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_eotech_xps3";
				//item="rhsusf_acc_EOTECH";
			};
		};
		class WeaponSlotsInfo
		{
			class CowsSlot: rhs_western_rifle_scopes_slot_short {
				class compatibleItems {
					rhsusf_acc_EOTECH = 1;
					rhsusf_acc_eotech_xps3 = 1;
				};
			};
			allowedslots[] = {901};
			mass = 92.96;
		};
		recoil = "twc_rifle_556";
		recoilProne = "twc_rifle_556_prone";
	};
	
	/*
	class CUP_U_CRYE_MCAM_RUS2_Roll;
	class twc_cryeG3_russof_roll: CUP_U_CRYE_MCAM_RUS2_Roll
	{
		modelSides[] = {0,1,2,3};
	};
	*/
	class rhs_uniform_g3_mc;
	class twc_cryeG3_russof_roll: rhs_uniform_g3_mc
	{
		modelSides[] = {0,1,2,3};
	};
	
	class CUP_arifle_AK74M_railed_afg_desert;
	class twc_ak74_sof_afg_suppressed: CUP_arifle_AK74M_railed_afg_desert
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_t1_low";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="cup_muzzle_tgpa_desert";
			};
		};
		class WeaponSlotsInfo
		{
			class CowsSlot: rhs_western_rifle_scopes_slot_short {
				class compatibleItems {
					rhsusf_acc_t1_low = 1;
				};
			};
			class MuzzleSlot: asdg_MuzzleSlot_556 {
				class compatibleItems {
					cup_muzzle_tgpa_desert = 1;
					rhs_acc_dtk4short = 1;
				};
			};
			allowedslots[] = {901};
			mass = 92.96;
		};
		recoil = "twc_rifle_556";
		recoilProne = "twc_rifle_556_prone";
	};

		
	};
	