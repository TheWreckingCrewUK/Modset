class UK3CB_BAF_L85A2_RIS;
class UK3CB_BAF_L110A2RIS;
class UK3CB_BAF_L129A1_Grippod;
class UK3CB_BAF_L85A2_UGL;
class UK3CB_BAF_L85A3;
class UK3CB_BAF_L85A3_UGL;
class UK3CB_BAF_L115A3_Ghillie;
class UK3CB_BAF_L119A1_RIS;
class UK3CB_BAF_L119A1_UKUGL;
class UK3CB_BAF_L105A2;
class UK3CB_BAF_L110A3;
class UK3CB_BAF_L22A2;
class CUP_arifle_HK416_Black;
class CUP_arifle_HK416_AGL_Black;
class CUP_arifle_HK417_20;
class law_starstreak2_lta_olive;
class CUP_arifle_AK102_railed;
class CUP_arifle_AK102_top_rail;
class CUP_arifle_AK108_GL_top_rail;

class TWC_Weapon_L85A2_RIS_ELCAN3D: UK3CB_BAF_L85A2_RIS {
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "RKSL_optic_LDS";
		};
		class LinkedItemsFrontSideRail
		{
			slot = "PointerSlot";
			item = "cup_acc_llm_black";
		};
		class LinkedItemsUnder
		{
			item = "UK3CB_underbarrel_acc_grippod";
			slot = "UnderBarrelSlot";
		};
		class LinkedItemsMuzzle
		{
			item = "UK3CB_BAF_Bayonet_L3A1";
			slot = "MuzzleSlot";
		};
	};
};

class TWC_Weapon_L85A2_RIS_SUSAT: UK3CB_BAF_L85A2_RIS {
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "UK3CB_BAF_SUSAT_3D";
		};
		class LinkedItemsFrontSideRail
		{
			slot = "PointerSlot";
			item = "cup_acc_llm_black";
		};
		class LinkedItemsUnder
		{
			item = "UK3CB_underbarrel_acc_grippod";
			slot = "UnderBarrelSlot";
		};
		class LinkedItemsMuzzle
		{
			item = "UK3CB_BAF_Bayonet_L3A1";
			slot = "MuzzleSlot";
		};
	};
};
class TWC_Weapon_L22A2_SUSAT: UK3CB_BAF_L22A2 {
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "UK3CB_BAF_SUSAT_3D";
		};
	};
};
class TWC_Weapon_L85A3_LDS: UK3CB_BAF_L85A3 {
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "RKSL_optic_LDS";
		};
		class LinkedItemsFrontSideRail
		{
			slot = "PointerSlot";
			item = "cup_acc_llm_black";
		};
		class LinkedItemsUnder
		{
			item = "UK3CB_underbarrel_acc_grippod";
			slot = "UnderBarrelSlot";
		};
		class LinkedItemsMuzzle
		{
			item = "UK3CB_BAF_Bayonet_L3A1";
			slot = "MuzzleSlot";
		};
	};
};
class TWC_Weapon_L110A2_ELCAN3D: UK3CB_BAF_L110A2RIS {
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "RKSL_optic_LDS";
		};
		class LinkedItemsFrontSideRail {
			slot = "PointerSlot";
			item = "cup_acc_llm_black";
		};
	};
};
class TWC_Weapon_L129A1_Grippod_TA648: UK3CB_BAF_L129A1_Grippod {
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "UK3CB_BAF_TA648_308";
		};
		class LinkedItemsFrontSideRail {
			slot = "PointerSlot";
			item = "cup_acc_llm_black";
		};
		class LinkedItemsBipod {
			slot = "UnderBarrelSlot";
			item = "UK3CB_underbarrel_acc_fgrip_bipod";
		};
	};
};
class TWC_Weapon_L85A2_UGL_ELCAN3D: UK3CB_BAF_L85A2_UGL {
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "RKSL_optic_LDS";
		};
		class LinkedItemsFrontSideRail {
			slot = "PointerSlot";
			item = "cup_acc_llm_black";
		};
		class LinkedItemsMuzzle
		{
			item = "UK3CB_BAF_Bayonet_L3A1";
			slot = "MuzzleSlot";
		};
	};
};
class TWC_Weapon_L85A3_UGL_LDS: UK3CB_BAF_L85A3_UGL {
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "RKSL_optic_LDS";
		};
		class LinkedItemsFrontSideRail {
			slot = "PointerSlot";
			item = "cup_acc_llm_black";
		};
		class LinkedItemsMuzzle
		{
			item = "UK3CB_BAF_Bayonet_L3A1";
			slot = "MuzzleSlot";
		};
	};
};
class TWC_Weapon_L129A1_Spotter: UK3CB_BAF_L129A1_Grippod {
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "rksl_optic_pmii_312_pip";
		};
		class LinkedItemsFrontSideRail {
			slot = "PointerSlot";
			item = "cup_acc_llm_black";
		};
		class LinkedItemsBipod {
			slot = "UnderBarrelSlot";
			item = "UK3CB_underbarrel_acc_bipod";
		};
		class LinkedItemsMuzzle {
			slot = "MuzzleSlot";
			item = "UK3CB_BAF_Silencer_L115A3";
		};
	};
};
class TWC_Weapon_L115A3_Regular_Sniper: UK3CB_BAF_L115A3_Ghillie {
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "rksl_optic_pmii_525_pip";
		};
		class LinkedItemsBipod {
			slot = "UnderBarrelSlot";
			item = "UK3CB_underbarrel_acc_bipod";
		};
		class LinkedItemsMuzzle {
			slot = "MuzzleSlot";
			item = "uk3cb_baf_silencer_l115a3";
		};
	};
};
class TWC_Weapon_C8_SF: CUP_arifle_HK416_Black {
	displayName = "C8";
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "cup_optic_acog_ta01b_rmr_black_pip";
		};
		class LinkedItemsFrontSideRail {
			slot = "PointerSlot";
			item = "cup_acc_llm_black";
		};
		class LinkedItemsMuzzle {
			slot = "MuzzleSlot";
			item = "CUP_muzzle_snds_G36_black";
		};
	};
};
class TWC_Weapon_C8_SF_GL: CUP_arifle_HK416_AGL_Black {
	displayName = "C8 GL";
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "cup_optic_acog_ta01b_rmr_black_pip";
		};
		class LinkedItemsFrontSideRail {
			slot = "PointerSlot";
			item = "cup_acc_llm_black";
		};
		class LinkedItemsMuzzle {
			slot = "MuzzleSlot";
			item = "CUP_muzzle_snds_G36_black";
		};
	};
};
class TWC_Weapon_HK417_SF: CUP_arifle_HK417_20 {
	scope = 1;
	class LinkedItems {
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "rksl_optic_pmii_312";
		};
		class LinkedItemsFrontSideRail {
			slot = "PointerSlot";
			item = "cup_acc_llm_black";
		};
		class LinkedItemsBipod {
			slot = "UnderBarrelSlot";
			item = "cup_bipod_vltor_modpod_black";
		};
		class LinkedItemsMuzzle {
			slot = "MuzzleSlot";
			item = "cup_muzzle_snds_socom762rc";
		};
	};
};
class TWC_Weapon_L105A2_SF: UK3CB_BAF_L105A2 {
	scope = 1;
	class LinkedItems {
		class LinkedItemsMuzzle {
			slot = "MuzzleSlot";
			item = "UK3CB_BAF_Silencer_L105A1";
		};
		class LinkedItemsFrontSideRail {
			slot = "PointerSlot";
			item = "cup_acc_llm_black";
		};
	};
};
class TWC_Weapon_L110A3_SF: UK3CB_BAF_L110A3 {
	scope = 1;
	class LinkedItems {
		class LinkedItemsMuzzle {
			slot = "MuzzleSlot";
			item = "UK3CB_BAF_Silencer_L110";
		};
		class LinkedItemsOptic {
			slot = "CowsSlot";
			item = "cup_optic_acog_ta01b_rmr_black_pip";
		};
		class LinkedItemsFrontSideRail {
			slot = "PointerSlot";
			item = "cup_acc_llm_black";
		};
	};
};
class  TWC_Weapon_Starstreak2_lta_olive: law_starstreak2_lta_olive
{
	scope = 2;
	class weaponSlotsInfo {
		mass = 165;
		allowedSlots[] = {901};
	};
};
class twc_ak74_pol: CUP_arifle_AK102_railed
	{
		
		displayName = "wz.2004 Beryl";
		descriptionShort = "Assault Rifle<br />Caliber: 5.56mm";
		accessories[] = {"CUP_optic_HoloBlack", "CUP_acc_Flashlight"};
		//magazineWell[] = {};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountAK";
				item="CUP_optic_HoloBlack";
			};
			class LinkedItemsFrontSideRail
			{
				slot="CUP_PicatinnySideMountAK";
				item="cup_acc_flashlight";
			};
		};
	};
class twc_ak74_pol_2: CUP_arifle_AK102_top_rail
	{
		
		displayName = "wz.2004 Beryl";
		descriptionShort = "Assault Rifle<br />Caliber: 5.56mm";
		accessories[] = {"CUP_optic_HoloBlack", "CUP_acc_Flashlight"};
	//	magazineWell[] = {};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountAK";
				item="CUP_optic_HoloBlack";
			};
			class LinkedItemsFrontSideRail
			{
				slot="CUP_PicatinnySideMountAK";
				item="cup_acc_flashlight";
			};
			class LinkedItemsMuzzleSlot
			{
				slot="GripodSlot";
				item="UK3CB_BAF_SFFH";
			};
		};
	};
	class twc_ak74_gp25_pol: CUP_arifle_AK108_GL_top_rail
	{
	
		displayName = "wz.2004 Beryl (wz. 74)";
		descriptionShort = "Assault Rifle<br />Caliber: 5.56mm";
		accessories[] = {"CUP_optic_HoloBlack", "CUP_acc_Flashlight", "CUP_muzzle_mfsup_Flashhider_556x45_Black"};
		//magazineWell[] = {};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CUP_PicatinnyTopMountAK";
				item="CUP_optic_HoloBlack";
			};
			class LinkedItemsFrontSideRail
			{
				slot="CUP_PicatinnySideMountAK";
				item="cup_acc_flashlight";
			};
		};
	};