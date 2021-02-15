

class cfgammo{
	class rocketbase;
	class R_MRAAWS_HE_F;
	class TWC_R_OG7_AT: R_MRAAWS_HE_F
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
		ammo = "CUP_B_23mm_APHE_Tracer_Green";
		tracersEvery = 1;
	};

	class CA_LauncherMagazine;
	class CUP_OG7_M : CA_LauncherMagazine
	{
		ammo = "TWC_R_OG7_AT";
	};
	
};

class asdg_MuzzleSlot_556;
class asdg_OpticSideRail_AKSVD;

class cfgweapons{

		
	class CUP_srifle_ksvk_PSO3;
	class twc_ksvk_base: CUP_srifle_ksvk_PSO3
	{
		scope = 1;
		displayname = "Improvised Sniper Rifle";
		magazines[] = {"twc_23mm_1rnd"};
		class Single;
		class WeaponSlotsInfo;
	};
	class twc_ksvk: twc_ksvk_base
	{
		recoil = "twc_shotgun_1";
		recoilProne = "twc_rifle_762_prone";
		scope = 2;
		magazineWell[] = {};
		class Single: Single
		{
			class standardsound
			{
				soundSetShot[] = {"RHS_DSHKM_Closure_SoundSet","RHS_120mm_Shot_SoundSet","RHS_sniper1_Tail_SoundSet"};
			};
		};
		
		/*
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_DovetailMountKSVK";
				item="twc_optic_pso_3_heavy";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CUP_DovetailMountKSVK: asdg_OpticSideRail_AKSVD
			{
				class compatibleItems
				{
					twc_optic_pso_3_heavy = 1;
				};
			};
		};
		*/
		
	};
	
	/*
	class cup_optic_pso_3;
	class twc_optic_pso_3_heavy: cup_optic_pso_3 {
	
	
		ACE_ScopeAdjust_Horizontal[] = {-6,6};
		ACE_ScopeAdjust_HorizontalIncrement = 2;
		ACE_ScopeAdjust_Vertical[] = {-30,30};
		ACE_ScopeAdjust_VerticalIncrement = 3;
		ACE_ScopeHeightAboveRail = 4.41386;
		
	};
	*/
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
				item="CUP_optic_PechenegScope";
			};
		};
		class WeaponSlotsInfo
		{
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
				item="CUP_optic_1P87_RIS_desert";
			};
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
	
	class CUP_arifle_AK74M_railed_afg_desert;
	class twc_ak74_sof_afg_suppressed: CUP_arifle_AK74M_railed_afg_desert
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="CUP_optic_MicroT1_low";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="cup_muzzle_tgpa_desert";
			};
		};
		recoil = "twc_rifle_556";
		recoilProne = "twc_rifle_556_prone";
	};

		
	};
	