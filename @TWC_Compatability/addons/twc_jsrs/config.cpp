/*
 * Author: [TWC] Hobbs
 * Descri: JSRS compatability for the various mods that we use in TWC
 */
class CfgPatches {
	class TWC_jsrs_compat {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {
			"a3_sounds_f",
			"a3_weapons_f",
			"a3_sounds_f_exp",
			"a3_weapons_f_exp",
			"uk3cb_baf_weapons_smallarms",
			"uk3cb_baf_weapons_l1a1",
			"uk3cb_baf_weapons_static",
			"UK3CB_BAF_Vehicles_Weapons",
			"jsrs_soundmod_framework"
			};
		author[] = {""};
		authorUrl = "";
	};
};

class cfgsoundshaders
{
	class jsrs_pistol_shell_inroom_soundshader;
	class jpex_pistol_shell_inroom_soundshader:jsrs_pistol_shell_inroom_soundshader
	{};
	class twc_hmg_closure_soundshader
	{
		samples[]=
		{
			{
				"JSRS_Soundmod_Snd_Weapons\Sounds\Shot\Closure\Gatlingcannon (1).ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Weapons\Sounds\Shot\Closure\Gatlingcannon (2).ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Weapons\Sounds\Shot\Closure\Gatlingcannon (3).ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Weapons\Sounds\Shot\Closure\Gatlingcannon (4).ogg",
				1
			}
		};
		volume=2;
		frequency=1.2;
		range=10;
		rangecurve[]=
		{
			{0,1},
			{3,0.5},
			{10,0}
		};
	};
	class twc_gmg_closure_soundshader
	{
		samples[]=
		{
			
			
			{
				"JSRS_Soundmod_Snd_Weapons\Sounds\Shot\Closure\Gatlingcannon (1).ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Weapons\Sounds\Shot\Closure\Gatlingcannon (2).ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Weapons\Sounds\Shot\Closure\Gatlingcannon (3).ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Weapons\Sounds\Shot\Closure\Gatlingcannon (4).ogg",
				1
			}
		};
		volume=1.3;
		range=10;
		rangecurve[]=
		{
			{0,1},
			{5,0.5},
			{10,0}
		};
	};
	class twc_sniper_silenced_click_soundset
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_weapons\sounds\shot\silenced\12.7mm\sd_close_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_weapons\sounds\shot\silenced\12.7mm\sd_close_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_weapons\sounds\shot\silenced\12.7mm\sd_close_3.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_weapons\sounds\shot\silenced\12.7mm\sd_close_4.ogg",
				1
			}
		};
		volume="2.00*(1-interior/1.4)";
		range=100;
		rangecurve[]=
		{
			{0,1},
			{10,0.7},
			{50,0}
		};
	};
	class twc_sniper_silenced_shot_soundset
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_weapons\sounds\shot\pcml\close_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_weapons\sounds\shot\pcml\close_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_weapons\sounds\shot\pcml\close_3.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_weapons\sounds\shot\pcml\close_4.ogg",
				1
			}
		};
		volume="2.30*(1-interior/1.4)";
		range=100;
		rangecurve[]=
		{
			{0,1},
			{50,0.7},
			{100,0}
		};
	};
	
		class jsrs_m136_closure_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_weapons\sounds\shot\closure\sniper_1.ogg",
				1
			}
		};
		volume=1;
		range=2;
		rangecurve="jsrs_basic_vl_sin";
	};
	class jsrs_m136_interior_shot_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_weapons\sounds\shot\interior\m136\close_interior_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_weapons\sounds\shot\interior\m136\close_interior_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_weapons\sounds\shot\interior\m136\close_interior_3.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_weapons\sounds\shot\interior\m136\close_interior_4.ogg",
				1
			}
		};
		volume="2.20*interior";
		range=20;
	};
	class jsrs_m136_interior_shot_2_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_weapons\sounds\shot\interior\m136\close_distance_interior_1.ogg",
				1
			}
		};
		volume="2.05*interior";
		range=100;
		rangecurve[]=
		{
			{0,0},
			{20,1},
			{100,0}
		};
	};
	class jsrs_m136_distance_0m_to_5m_shot_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_weapons\sounds\shot\m136\close_1.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_weapons\sounds\shot\m136\close_2.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_weapons\sounds\shot\m136\close_3.ogg",
				1
			},
			
			{
				"jsrs_soundmod_snd_weapons\sounds\shot\m136\close_4.ogg",
				1
			}
		};
		volume="1.90*(1-interior/1.4)";
		range=20;
		rangecurve[]=
		{
			{0,1},
			{10,0.69999999},
			{20,0}
		};
	};
	class jsrs_m136_distance_5m_to_100m_shot_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_weapons\sounds\shot\m136\close_distance_1.ogg",
				1
			}
		};
		volume="1.80*(1-interior/1.4)";
		range=100;
		rangecurve[]=
		{
			{0,0},
			{20,1},
			{100,0}
		};
	};
	class jsrs_m136_distance_100m_to_400m_shot_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_weapons\sounds\shot\m136\medium_distance_1.ogg",
				1
			}
		};
		volume=1.6;
		range=400;
		rangecurve[]=
		{
			{0,0},
			{20,0},
			{100,1},
			{400,0}
		};
	};
	class jsrs_m136_distance_400m_to_800m_shot_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_weapons\sounds\shot\m136\far_distance_1.ogg",
				1
			}
		};
		volume=1.45;
		range=800;
		rangecurve[]=
		{
			{0,0},
			{100,0},
			{400,1},
			{800,0}
		};
	};
	class jsrs_m136_distance_800m_to_1500m_shot_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_weapons\sounds\shot\m136\very_far_distance_1.ogg",
				1
			}
		};
		volume=1.4;
		range=1500;
		rangecurve[]=
		{
			{0,0},
			{500,0},
			{800,1},
			{1500,0}
		};
	};
	class jsrs_m136_distance_1500m_to_2500m_shot_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_weapons\sounds\shot\m136\last_distance_1.ogg",
				1
			}
		};
		volume=1.45;
		range=2500;
		rangecurve[]=
		{
			{0,0},
			{800,0},
			{1500,1},
			{2500,0}
		};
	};
	
	class twc_jsrs_g36_distance_5m_to_100m_shot_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_weapons\sounds\shot\g36\close_distance_1.ogg",
				1
			}
		};
		volume="2.50*(1-interior/1.4)";
		range=100;
		rangecurve[]=
		{
			{0,0},
			{20,1},
			{100,0}
		};
	};
	
	class jsrs_akm_closure_soundshader;
	class twc_L85_closure_soundshader: jsrs_akm_closure_soundshader
	{
		volume=2;
		frequency = 0.5;
	};

};

class cfgsoundsets
{
	class 3CB_BAF_L85_Shot_SoundSet;
	class twc_L85_Shot_Soundset: 3CB_BAF_L85_Shot_SoundSet
	{
		
		soundshaders[] = {"jsrs_g36_interior_shot_soundshader","jsrs_g36_interior_shot_2_soundshader","jsrs_g36_distance_0m_to_5m_shot_soundshader","jsrs_fnfal_distance_5m_to_100m_shot_soundshader","jsrs_g3_distance_100m_to_400m_shot_soundshader","jsrs_g3_distance_400m_to_800m_shot_soundshader","jsrs_g3_distance_800m_to_1500m_shot_soundshader","jsrs_g3_distance_1500m_to_2500m_shot_soundshader"};
		volumefactor = 1.5;
		volumecurve = "jsrs_wpn_rifle556_vl_sin";
		sound3dprocessingtype = "jsrs_wpn_medium_prc";
		spatial = 1;
		doppler = 0;
		loop = 0;
		distancefilter = "jsrs_wpn_rifle_lp_dia";
		
		occlusionfactor = 0.25;
		obstructionfactor = 0.25;
		frequencyFactor = 0.9;
		frequencyrandomizer = 0.5;
	};
	
	class jsrs_kar98k_shot_soundset;
	class twc_beryl_Shot_Soundset: jsrs_kar98k_shot_soundset
	{
		volumefactor = 1.5;
		frequencyFactor = 0.7;
	};
	
	class jsrs_pkm_shot_soundset;
	class twc_pkm_shot_soundset: jsrs_pkm_shot_soundset
	{
		frequencyFactor = 0.9;
	};
	
	class jsrs_ak74_shot_soundset;
	class twc_rpk74_shot_soundset: jsrs_ak74_shot_soundset
	{
		frequencyFactor = 0.9;
	};
	class jsrs_m107_shot_silenced_soundset;
	class twc_L115_shot_SD_soundset: jsrs_m107_shot_silenced_soundset
	{
	soundshaders[] = {"twc_sniper_silenced_click_soundset","twc_sniper_silenced_shot_soundset","jsrs_12_7mm_interior_silenced_soundshader"};
		volumefactor = 1.3;
		volumecurve = "jsrs_wpn_sniper_vl_sin";
		sound3dprocessingtype = "jsrs_wpn_big_prc";
		spatial = 1;
		doppler = 0;
		loop = 0;
		distancefilter = "jsrs_wpn_sniper_lp_dia";
		
		occlusionfactor = 0.25;
		obstructionfactor = 0.25;
		frequencyrandomizer = 0.5;
	};
	class 3CB_BAF_L1A1_Shot_SoundSet;
	class twc_L1A1_Shot_Soundset: 3CB_BAF_L1A1_Shot_SoundSet
	{
	soundshaders[] = {
			"jsrs_fn3011_closure_soundshader",
			"jsrs_fn3011_interior_shot_soundshader",
			"jsrs_fn3011_interior_shot_2_soundshader",
			"jsrs_fn3011_distance_0m_to_5m_shot_soundshader",
			"jsrs_fn3011_distance_5m_to_100m_shot_soundshader",
			"jsrs_fn3011_distance_100m_to_400m_shot_soundshader",
			"jsrs_fn3011_distance_400m_to_800m_shot_soundshader",
			"jsrs_fn3011_distance_800m_to_1500m_shot_soundshader",
			"jsrs_fn3011_distance_1500m_to_2500m_shot_soundshader"
		};
		volumefactor = 1.3;
		volumecurve = "jsrs_wpn_rifle762_vl_sin";
		sound3dprocessingtype = "jsrs_wpn_big_prc";
		spatial = 1;
		doppler = 0;
		loop = 0;
		distancefilter = "jsrs_wpn_rifle_lp_dia";
		
		occlusionfactor = 0.25;
		obstructionfactor = 0.25;
		frequencyrandomizer = 0.5;
	};
	class 3CB_BAF_L129_Shot_SoundSet;
	class twc_L129_Shot_Soundset: 3CB_BAF_L129_Shot_SoundSet
	{
	soundshaders[] = {"jsrs_fn3011_closure_soundshader","jsrs_fn3011_interior_shot_soundshader","jsrs_fn3011_interior_shot_2_soundshader","jsrs_fn3011_distance_0m_to_5m_shot_soundshader","jsrs_fn3011_distance_5m_to_100m_shot_soundshader","jsrs_fn3011_distance_100m_to_400m_shot_soundshader","jsrs_fn3011_distance_400m_to_800m_shot_soundshader","jsrs_fn3011_distance_800m_to_1500m_shot_soundshader","jsrs_fn3011_distance_1500m_to_2500m_shot_soundshader"};
		volumefactor=1.4;
		volumecurve="jsrs_wpn_dmr_vl_sin";
		sound3dprocessingtype="jsrs_wpn_medium_prc";
		spatial=1;
		doppler=0;
		loop=0;
		distancefilter="jsrs_wpn_mg_lp_dia";
		occlusionfactor=0.25;
		obstructionfactor=0.25;
		frequencyrandomizer=0.5;
	};
	
	
	class twc_GMG_shot_soundset
	{
		soundshaders[]=
		{
			"twc_gmg_closure_soundshader",
			"jsrs_HMG_distance_0m_to_5m_shot_soundshader",
			"jsrs_HMG_distance_5m_to_100m_shot_soundshader",
			"jsrs_HMG_distance_100m_to_400m_shot_soundshader",
			"jsrs_HMG_distance_400m_to_800m_shot_soundshader",
			"jsrs_HMG_distance_800m_to_1500m_shot_soundshader"
		};
		volumefactor=1.4;
		volumecurve="jsrs_wpn_rifle556_vl_sin";
		sound3dprocessingtype="jsrs_wpn_medium_prc";
		spatial=1;
		doppler=0;
		loop=0;
		distancefilter="jsrs_wpn_sniper_lp_dia";
		occlusionfactor=0.25;
		obstructionfactor=0.25;
		frequencyrandomizer=0.75;
	};
	
	class jsrs_m240_shot_soundset;
	class twc_l7_shot_soundset: jsrs_m240_shot_soundset
	{
		soundshaders[] = {"jsrs_m240_closure_soundshader","jsrs_fn3011_interior_shot_soundshader","jsrs_fn3011_interior_shot_2_soundshader","jsrs_fn3011_distance_0m_to_5m_shot_soundshader",
			"jsrs_M2_distance_5m_to_100m_shot_soundshader",
			"jsrs_M2_distance_100m_to_400m_shot_soundshader",
			"jsrs_M2_distance_400m_to_800m_shot_soundshader",
			"jsrs_M2_distance_800m_to_1500m_shot_soundshader",
			"jsrs_M2_distance_1500m_to_2500m_shot_soundshader"};
		volumefactor = 0.9;
		volumecurve = "jsrs_wpn_mg_vl_sin";
		sound3dprocessingtype = "jsrs_wpn_big_prc";
		spatial = 1;
		doppler = 0;
		loop = 0;
		distancefilter = "jsrs_wpn_mg_lp_dia";
		
		occlusionfactor = 0.25;
		obstructionfactor = 0.25;
		frequencyrandomizer = 0.5;
	};
	
	class twc_l4_shot_soundset: twc_l7_shot_soundset
	{
		soundshaders[] = {"jsrs_ugl_closure_soundshader",
			"jsrs_spmg_interior_shot_soundshader",
			"jsrs_spmg_interior_shot_2_soundshader",
			"jsrs_spmg_distance_0m_to_5m_shot_soundshader",
			"jsrs_spmg_distance_5m_to_100m_shot_soundshader",
			"jsrs_spmg_distance_100m_to_400m_shot_soundshader",
			"jsrs_spmg_distance_400m_to_800m_shot_soundshader",
			"jsrs_spmg_distance_800m_to_1500m_shot_soundshader",
			"jsrs_spmg_distance_1500m_to_2500m_shot_soundshader"};
		volumefactor = 1.5;
		volumecurve = "jsrs_wpn_mg_vl_sin";
		sound3dprocessingtype = "jsrs_wpn_big_prc";
		spatial = 1;
		doppler = 0;
		loop = 0;
		distancefilter = "jsrs_wpn_mg_lp_dia";
		
		occlusionfactor = 0.25;
		obstructionfactor = 0.25;
		frequencyrandomizer = 0.5;
	};
	
	class twc_L111_soundset: jsrs_m240_shot_soundset
	{
		soundshaders[] = {"jsrs_m136_distance_0m_to_5m_shot_soundshader",
			"jsrs_Cannon20_distance_5m_to_100m_shot_soundshader",
			"jsrs_Cannon20_distance_100m_to_400m_shot_soundshader",
			"jsrs_Cannon20_distance_400m_to_800m_shot_soundshader",
			"jsrs_Cannon20_distance_800m_to_1500m_shot_soundshader",
			"jsrs_Cannon20_distance_1500m_to_2500m_shot_soundshader"};
		volumefactor = 1.3;
		volumecurve = "jsrs_wpn_mg_vl_sin";
		sound3dprocessingtype = "jsrs_wpn_big_prc";
		spatial = 1;
		doppler = 0;
		loop = 0;
		distancefilter = "jsrs_wpn_mg_lp_dia";
		
		occlusionfactor = 0.25;
		obstructionfactor = 0.25;
		frequencyrandomizer = 0.5;
	};
	
	class 3CB_BAF_L128_Shot_SoundSet;
	class TWC_L128_Shot_SoundSet: 3CB_BAF_L128_Shot_SoundSet
	{
		soundshaders[] = {"jsrs_fn3011_closure_soundshader",
			"jsrs_type115arx_interior_shot_soundshader",
			"jsrs_type115arx_interior_shot_2_soundshader",
			"jsrs_m590_distance_0m_to_5m_shot_soundshader",
			"jsrs_m590_distance_5m_to_100m_shot_soundshader",
			"jsrs_m590_distance_100m_to_400m_shot_soundshader",
			"jsrs_m590_distance_400m_to_800m_shot_soundshader",
			"jsrs_m590_distance_800m_to_1500m_shot_soundshader",
			"jsrs_m590_distance_1500m_to_2500m_shot_soundshader"
		};
		volumefactor=1.3;
		volumecurve="jsrs_wpn_sniper_vl_sin";
		sound3dprocessingtype="jsrs_wpn_big_prc";
		spatial=1;
		doppler=0;
		loop=0;
		distancefilter="jsrs_wpn_sniper_lp_dia";
		occlusionfactor=0.25;
		obstructionfactor=0.25;
		frequencyrandomizer=0.5;
	};
	

	

};

	
class mode_semiauto;
class mode_burst;
class mode_fullauto;
class cfgweapons
{
	
	
	class pistol_base_f;
	class hgun_p07_f: pistol_base_f
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_p226_shot_soundset",
					"jsrs_p07_shell_soundset",
					"jsrs_9mm_reflector_1",
					"jsrs_small_echo_soundset"
				};
			};
		};
	};
	class Rifle_Short_Base_F;
	class SMG_02_base_F: Rifle_Short_Base_F
	{
		class single;
		class fullauto;
	};
	class SP_smg_sterling: SMG_02_base_F
	{
		class single: single
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_p226_shot_soundset",
					"jsrs_p07_shell_soundset",
					"jsrs_9mm_reflector_1",
					"jsrs_small_echo_soundset"
				};
			};
		};
		class FullAuto: FullAuto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_p226_shot_soundset",
					"jsrs_p07_shell_soundset",
					"jsrs_9mm_reflector_1",
					"jsrs_small_echo_soundset"
				};
			};
		};
	};
	
	
	class arifle_Mk20_F;
	class arifle_Mk20_plain_F: arifle_Mk20_F
	{
		class Single;
		class FullAuto;
	};
	//twc_L85_closure_soundshader
	
	class UK3CB_BAF_L85A2: arifle_Mk20_plain_F
	{
		class Single:Single {
			class standardsound {
				soundSetShot[] = {"twc_L85_closure_soundshader","twc_L85_Shot_Soundset"};
			};
		};
		class FullAuto:FullAuto {
			class standardsound {
				soundSetShot[] = {"twc_L85_closure_soundshader","twc_L85_Shot_Soundset"};
			};			
		};
	};
	
	class Rifle_Base_F;
	

	class UK3CB_BAF_L1A1: Rifle_Base_F
	{
		class Single:Mode_SemiAuto {
			sounds[] = {"StandardSound","SilencedSound"};
			class standardsound {
				soundSetShot[] = {"3CB_BAF_L1A1_Closure_SoundSet","twc_L1A1_Shot_Soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
			};
		};
	};
	
	class arifle_MX_Base_F: Rifle_Base_F
	{
		class mode_fullauto;
		class Mode_SemiAuto;
	};
	
	class rhs_weap_m4_Base: arifle_MX_Base_F
	{
		class FullAuto: mode_fullauto
		{
			class standardsound
			{
				soundSetShot[] = {"jsrs_m16a4_shell_soundset","jsrs_kar98k_shot_soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
			};
			
		};
		class Burst: Mode_Burst
		{
			class standardsound
			{
				soundSetShot[] = {"jsrs_m16a4_shell_soundset","jsrs_kar98k_shot_soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
			};
			
		};
		class Single: Mode_SemiAuto
		{
			class standardsound
			{
				soundSetShot[] = {"jsrs_m16a4_shell_soundset","jsrs_kar98k_shot_soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
			};
			
		};
	};
	
	class rhs_weap_m16a4: rhs_weap_m4_Base
	{
		
		class Burst: Burst
		{
			class standardsound
			{
				soundSetShot[] = {"jsrs_m16a4_shell_soundset","jsrs_kar98k_shot_soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
			};
			
		};
		class Single: Single
		{
			class standardsound
			{
				soundSetShot[] = {"jsrs_m16a4_shell_soundset","jsrs_kar98k_shot_soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
			};
			
		};
	};
	//"rhs_weap_ak74m_zenitco01_b33", "rhs_weap_ak74m_zenitco01", "rhs_weap_ak74m", "rhs_weap_ak74m_Base_F", "Rifle_Base_F
	//{"Single","Single_AI","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
	
	class rhs_weap_ak74m_Base_F: Rifle_Base_F
	{
		class Single;
		class Single_AI;
		class FullAuto;
		class single_medium_optics1;
		class single_far_optics2;
		class fullauto_medium;
	};
	
	class rhs_weap_ak74m: rhs_weap_ak74m_Base_F
	{
		
		class Single: Single
		{
			class standardsound
			{
				soundSetShot[] = {"jsrs_m16a4_shell_soundset","jsrs_ak74_shot_soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
			};
			
		};
		class Single_AI: Single_AI
		{
			class standardsound
			{
				soundSetShot[] = {"jsrs_m16a4_shell_soundset","jsrs_ak74_shot_soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
			};
			
		};
		class FullAuto: FullAuto
		{
			class standardsound
			{
				soundSetShot[] = {"jsrs_m16a4_shell_soundset","jsrs_ak74_shot_soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
			};
			
		};
		class single_medium_optics1: single_medium_optics1
		{
			class standardsound
			{
				soundSetShot[] = {"jsrs_m16a4_shell_soundset","jsrs_ak74_shot_soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
			};
			
		};
		class single_far_optics2: single_far_optics2
		{
			class standardsound
			{
				soundSetShot[] = {"jsrs_m16a4_shell_soundset","jsrs_ak74_shot_soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
			};
			
		};
		class fullauto_medium: fullauto_medium
		{
			class standardsound
			{
				soundSetShot[] = {"jsrs_m16a4_shell_soundset","jsrs_ak74_shot_soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
			};
			
		};
	};
	
	class rhs_weap_ak74m_2mag: rhs_weap_ak74m
	{};
	
	class rhs_weap_ak74m_2mag_npz: rhs_weap_ak74m_2mag
	{
		class Single;
		class Single_AI;
		class FullAuto;
		class single_medium_optics1;
		class single_far_optics2;
		class fullauto_medium;
	};
	
	class twc_ak74_pol_2_base: rhs_weap_ak74m_2mag_npz
	{
		
		class Single: Single
		{
			class standardsound
			{
				soundSetShot[] = {"jsrs_m16a4_shell_soundset","twc_beryl_Shot_Soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
			};
			
		};
		class Single_AI: Single_AI
		{
			class standardsound
			{
				soundSetShot[] = {"jsrs_m16a4_shell_soundset","twc_beryl_Shot_Soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
			};
			
		};
		class FullAuto: FullAuto
		{
			class standardsound
			{
				soundSetShot[] = {"jsrs_m16a4_shell_soundset","twc_beryl_Shot_Soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
			};
			
		};
		class single_medium_optics1: single_medium_optics1
		{
			class standardsound
			{
				soundSetShot[] = {"jsrs_m16a4_shell_soundset","twc_beryl_Shot_Soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
			};
			
		};
		class single_far_optics2: single_far_optics2
		{
			class standardsound
			{
				soundSetShot[] = {"jsrs_m16a4_shell_soundset","twc_beryl_Shot_Soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
			};
			
		};
		class fullauto_medium: fullauto_medium
		{
			class standardsound
			{
				soundSetShot[] = {"jsrs_m16a4_shell_soundset","twc_beryl_Shot_Soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
			};
			
		};
	};
	
	class rhs_weap_ak74mr: rhs_weap_ak74m
	{};
	
	class rhs_weap_ak74mr_gp25: rhs_weap_ak74mr
	{
		class Single;
		class Single_AI;
		class FullAuto;
		class single_medium_optics1;
		class single_far_optics2;
		class fullauto_medium;
	};
	class twc_ak74_gp25_pol_base: rhs_weap_ak74mr_gp25
	{
		class Single: Single
		{
			class standardsound
			{
				soundSetShot[] = {"jsrs_m16a4_shell_soundset","twc_beryl_Shot_Soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
			};
			
		};
		class Single_AI: Single_AI
		{
			class standardsound
			{
				soundSetShot[] = {"jsrs_m16a4_shell_soundset","twc_beryl_Shot_Soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
			};
			
		};
		class FullAuto: FullAuto
		{
			class standardsound
			{
				soundSetShot[] = {"jsrs_m16a4_shell_soundset","twc_beryl_Shot_Soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
			};
			
		};
		class single_medium_optics1: single_medium_optics1
		{
			class standardsound
			{
				soundSetShot[] = {"jsrs_m16a4_shell_soundset","twc_beryl_Shot_Soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
			};
			
		};
		class single_far_optics2: single_far_optics2
		{
			class standardsound
			{
				soundSetShot[] = {"jsrs_m16a4_shell_soundset","twc_beryl_Shot_Soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
			};
			
		};
		class fullauto_medium: fullauto_medium
		{
			class standardsound
			{
				soundSetShot[] = {"jsrs_m16a4_shell_soundset","twc_beryl_Shot_Soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
			};
			
		};
	};
	
	class rhs_weap_ak74m_zenitco01: rhs_weap_ak74m
	{
		class Single;
		class Single_AI;
		class FullAuto;
		class single_medium_optics1;
		class single_far_optics2;
		class fullauto_medium;
	};
	
	class rhs_weap_ak74m_zenitco01_b33: rhs_weap_ak74m_zenitco01
	{
		class Single: Single
		{
			class standardsound
			{
				soundSetShot[] = {"jsrs_m16a4_shell_soundset","twc_beryl_Shot_Soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
			};
			
		};
		class Single_AI: Single_AI
		{
			class standardsound
			{
				soundSetShot[] = {"jsrs_m16a4_shell_soundset","twc_beryl_Shot_Soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
			};
			
		};
		class FullAuto: FullAuto
		{
			class standardsound
			{
				soundSetShot[] = {"jsrs_m16a4_shell_soundset","twc_beryl_Shot_Soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
			};
			
		};
		class single_medium_optics1: single_medium_optics1
		{
			class standardsound
			{
				soundSetShot[] = {"jsrs_m16a4_shell_soundset","twc_beryl_Shot_Soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
			};
			
		};
		class single_far_optics2: single_far_optics2
		{
			class standardsound
			{
				soundSetShot[] = {"jsrs_m16a4_shell_soundset","twc_beryl_Shot_Soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
			};
			
		};
		class fullauto_medium: fullauto_medium
		{
			class standardsound
			{
				soundSetShot[] = {"jsrs_m16a4_shell_soundset","twc_beryl_Shot_Soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
			};
			
		};
	};
	
	class CUP_arifle_AK_Base: Rifle_Base_F
	{
		class Single;
		class Burst;
		class FullAuto;
	};
	class CUP_arifle_AK74: CUP_arifle_AK_Base
	{
		
		class Single:Single {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","jsrs_ak74_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reflector_1"};
			};
		};
		class FullAuto:FullAuto {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","jsrs_ak74_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reflector_1"};
			};			
		};
		class Burst:Burst {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","jsrs_ak74_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reflector_1"};
			};			
		};
	};
	
	class CUP_arifle_AK74_GL: CUP_arifle_AK_Base
	{
		
		class Single:Single {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","jsrs_ak74_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reflector_1"};
			};
		};
		class FullAuto:FullAuto {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","jsrs_ak74_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reflector_1"};
			};			
		};
		class Burst:Burst {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","jsrs_ak74_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reflector_1"};
			};			
		};
	};
	
	class CUP_arifle_AK74M: CUP_arifle_AK_Base
	{
		
		class Single:Single {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","jsrs_ak74_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reflector_1"};
			};
		};
		class FullAuto:FullAuto {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","jsrs_ak74_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reflector_1"};
			};			
		};
		class Burst:Burst {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","jsrs_ak74_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reflector_1"};
			};			
		};
	};
	
	class CUP_arifle_AK74M_GL: CUP_arifle_AK_Base
	{
		
		class Single:Single {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","jsrs_ak74_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reflector_1"};
			};
		};
		class FullAuto:FullAuto {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","jsrs_ak74_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reflector_1"};
			};			
		};
		class Burst:Burst {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","jsrs_ak74_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reflector_1"};
			};			
		};
	};
	
	class CUP_arifle_AKS_Base: CUP_arifle_AK_Base
	{
		
		class Single:Single {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","jsrs_ak74_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reflector_1"};
			};
		};
		class FullAuto:FullAuto {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","jsrs_ak74_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reflector_1"};
			};			
		};
		class Burst:Burst {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","jsrs_ak74_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reflector_1"};
			};			
		};
	};
	
	class CUP_arifle_AKS74: CUP_arifle_AKS_Base
	{
		
		class Single:Single {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","jsrs_ak74_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reflector_1"};
			};
		};
		class FullAuto:FullAuto {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","jsrs_ak74_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reflector_1"};
			};			
		};
		class Burst:Burst {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","jsrs_ak74_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reflector_1"};
			};			
		};
	};
	
	class CUP_arifle_AKS74U: CUP_arifle_AKS_Base
	{
		
		class Single:Single {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","jsrs_ak74_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reflector_1"};
			};
		};
		class FullAuto:FullAuto {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","jsrs_ak74_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reflector_1"};
			};			
		};
		class Burst:Burst {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","jsrs_ak74_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reflector_1"};
			};			
		};
	};
	
	class CUP_arifle_AK107_Base: CUP_arifle_AK_Base
	{
		
		class Single:Single {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","jsrs_ak74_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reflector_1"};
			};
		};
		class FullAuto:FullAuto {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","jsrs_ak74_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reflector_1"};
			};			
		};
		class Burst:Burst {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","jsrs_ak74_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reflector_1"};
			};			
		};
	};
	
	class CUP_arifle_AK107: CUP_arifle_AK107_Base
	{
		
		class Single:Single {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","jsrs_ak74_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reflector_1"};
			};
		};
		class FullAuto:FullAuto {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","jsrs_ak74_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reflector_1"};
			};			
		};
		class Burst:Burst {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","jsrs_ak74_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reflector_1"};
			};			
		};
	};
	
	class CUP_arifle_AK107_GL: CUP_arifle_AK107_Base
	{
		
		class Single:Single {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","jsrs_ak74_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reflector_1"};
			};
		};
		class FullAuto:FullAuto {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","jsrs_ak74_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reflector_1"};
			};			
		};
		class Burst:Burst {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","jsrs_ak74_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reflector_1"};
			};			
		};
	};
	
	class CUP_arifle_RPK74: CUP_arifle_AK74
	{
		
		class Single:Single {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_rpk74_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reflector_1"};
			};
		};
		class FullAuto:FullAuto {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_rpk74_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reflector_1"};
			};			
		};
		class Burst:Burst {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_rpk74_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reflector_1"};
			};			
		};
		class Manual: mode_fullauto {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_rpk74_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reflector_1"};
			};			
		};
		class close: Manual {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_rpk74_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reflector_1"};
			};			
		};
		class far: close {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_rpk74_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reflector_1"};
			};			
		};
		class medium: close {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_rpk74_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reflector_1"};
			};			
		};
		class short: close {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_rpk74_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reflector_1"};
			};			
		};
	};
	
	class CUP_arifle_AKM: CUP_arifle_AK_Base
	{
		
		class Single:Single {
			class standardsound {
				soundSetShot[] = {
					"jsrs_rifle_shake_soundset",
					"jsrs_akm_shot_soundset",
					"jsrs_akm_shell_soundset",
					"jsrs_7x62mm_reflector_1",
					"jsrs_762mm_echo_soundset"};
			};
		};
		class FullAuto:FullAuto {
			class standardsound {
				soundSetShot[] = {
					"jsrs_rifle_shake_soundset",
					"jsrs_akm_shot_soundset",
					"jsrs_akm_shell_soundset",
					"jsrs_7x62mm_reflector_1",
					"jsrs_762mm_echo_soundset"};
			};			
		};
		class Burst:Burst {
			class standardsound {
				soundSetShot[] = {
					"jsrs_rifle_shake_soundset",
					"jsrs_akm_shot_soundset",
					"jsrs_akm_shell_soundset",
					"jsrs_7x62mm_reflector_1",
					"jsrs_762mm_echo_soundset"};
			};			
		};
	};
	
	class CUP_arifle_AK47: CUP_arifle_AK_Base
	{
		
		class Single:Single {
			class standardsound {
				soundSetShot[] = {
					"jsrs_rifle_shake_soundset",
					"jsrs_akm_shot_soundset",
					"jsrs_akm_shell_soundset",
					"jsrs_7x62mm_reflector_1",
					"jsrs_762mm_echo_soundset"};
			};
		};
		class FullAuto:FullAuto {
			class standardsound {
				soundSetShot[] = {
					"jsrs_rifle_shake_soundset",
					"jsrs_akm_shot_soundset",
					"jsrs_akm_shell_soundset",
					"jsrs_7x62mm_reflector_1",
					"jsrs_762mm_echo_soundset"};
			};			
		};
		class Burst:Burst {
			class standardsound {
				soundSetShot[] = {
					"jsrs_rifle_shake_soundset",
					"jsrs_akm_shot_soundset",
					"jsrs_akm_shell_soundset",
					"jsrs_7x62mm_reflector_1",
					"jsrs_762mm_echo_soundset"};
			};			
		};
	};
	
	class CUP_arifle_AKS: CUP_arifle_AKM
	{
		
		class Single:Single {
			class standardsound {
				soundSetShot[] = {
					"jsrs_rifle_shake_soundset",
					"jsrs_akm_shot_soundset",
					"jsrs_akm_shell_soundset",
					"jsrs_7x62mm_reflector_1",
					"jsrs_762mm_echo_soundset"};
			};
		};
		class FullAuto:FullAuto {
			class standardsound {
				soundSetShot[] = {
					"jsrs_rifle_shake_soundset",
					"jsrs_akm_shot_soundset",
					"jsrs_akm_shell_soundset",
					"jsrs_7x62mm_reflector_1",
					"jsrs_762mm_echo_soundset"};
			};			
		};
		class Burst:Burst {
			class standardsound {
				soundSetShot[] = {
					"jsrs_rifle_shake_soundset",
					"jsrs_akm_shot_soundset",
					"jsrs_akm_shell_soundset",
					"jsrs_7x62mm_reflector_1",
					"jsrs_762mm_echo_soundset"};
			};			
		};
	};
	
	class CUP_arifle_M16_Base;
	class CUP_arifle_M16A2: CUP_arifle_M16_Base
	{
		
		class Single:Mode_SemiAuto {
			sounds[] = {"StandardSound"};
			class standardsound {
				soundSetShot[] = {"jsrs_m16a4_shell_soundset","jsrs_kar98k_shot_soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
			};
		};
		class Burst:Mode_Burst {
			sounds[] = {"StandardSound"};
			class standardsound {
				soundSetShot[] = {"jsrs_m16a4_shell_soundset","jsrs_kar98k_shot_soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
			};			
		};
	};
	
	class CUP_arifle_FNFAL: Rifle_Base_F
	{
		
		class Single:Mode_SemiAuto {
			class standardsound {
				soundSetShot[] = {"3CB_BAF_L1A1_Closure_SoundSet","twc_L1A1_Shot_Soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
			};
		};
		class FullAuto:mode_fullauto {
			class standardsound {
				soundSetShot[] = {"3CB_BAF_L1A1_Closure_SoundSet","twc_L1A1_Shot_Soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
			};			
		};
	};
	
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		
	};
	class LMG_Zafir_F: Rifle_Long_Base_F
	{
		class Single;
		class FullAuto;
	};
	
	class SP_l4_lmg: LMG_Zafir_F
	{
		class Single:Single {
			class standardsound {
				soundSetShot[] = {"3CB_BAF_L1A1_Closure_SoundSet","twc_l4_shot_soundset"};
			};
		};
		class FullAuto:FullAuto {
			class standardsound {
				soundSetShot[] = {"3CB_BAF_L1A1_Closure_SoundSet","twc_l4_shot_soundset"};
			};			
		};
	};
	
	class UK3CB_BAF_L7A2: Rifle_Long_Base_F
	{
	
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
				soundSetShot[] = {"jsrs_mk200_closure_soundshader","twc_l7_shot_soundset","jsrs_mg_echo_soundset"};
			};
		};
	};
	
	class CUP_lmg_PKM: Rifle_Long_Base_F
	{
		class manual: mode_fullauto
		{
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
				soundSetShot[] = {"jsrs_mk200_closure_soundshader","twc_pkm_shot_soundset","jsrs_mg_echo_soundset"};
			};
		};
	};
		
	class rhs_pkp_base: Rifle_Long_Base_F
	{
		class FullAuto;
		class Single;
		class close;
		class short;
		class medium;
		class far_optic1;
		class far_optic2;
		
	};
	class rhs_weap_pkp: rhs_pkp_base
	{
		
		class Single:Mode_SemiAuto {
			sounds[] = {"StandardSound"};
			class standardsound {
				soundSetShot[] = {"jsrs_mk200_closure_soundshader","twc_pkm_shot_soundset","jsrs_mg_echo_soundset"};
			};
		};
		class FullAuto:mode_fullauto {
			sounds[] = {"StandardSound"};
			class standardsound {
				soundSetShot[] = {"jsrs_mk200_closure_soundshader","twc_pkm_shot_soundset","jsrs_mg_echo_soundset"};
			};			
		};
		class close:FullAuto {
			class standardsound {
				soundSetShot[] = {"jsrs_mk200_closure_soundshader","twc_pkm_shot_soundset","jsrs_mg_echo_soundset"};
			};			
		};
		class Manual: mode_fullauto {
			class standardsound {
				soundSetShot[] = {"jsrs_mk200_closure_soundshader","twc_pkm_shot_soundset","jsrs_mg_echo_soundset"};
			};			
		};
		class far_optic1: close {
			class standardsound {
				soundSetShot[] = {"jsrs_mk200_closure_soundshader","twc_pkm_shot_soundset","jsrs_mg_echo_soundset"};
			};			
		};
		class far_optic2: far_optic1 {
			class standardsound {
				soundSetShot[] = {"jsrs_mk200_closure_soundshader","twc_pkm_shot_soundset","jsrs_mg_echo_soundset"};
			};			
		};
		class medium: close {
			class standardsound {
				soundSetShot[] = {"jsrs_mk200_closure_soundshader","twc_pkm_shot_soundset","jsrs_mg_echo_soundset"};
			};			
		};
		class short: close {
			class standardsound {
				soundSetShot[] = {"jsrs_mk200_closure_soundshader","twc_pkm_shot_soundset","jsrs_mg_echo_soundset"};
			};			
		};
	};
	
	class rhs_weap_pkm: rhs_weap_pkp
	{
		
		class fullauto:mode_fullauto {
			class standardsound {
				soundSetShot[] = {"jsrs_mk200_closure_soundshader","twc_pkm_shot_soundset","jsrs_mg_echo_soundset"};
			};
		};
		class manual:fullauto {
			sounds[] = {"StandardSound"};
			class standardsound {
				soundSetShot[] = {"jsrs_mk200_closure_soundshader","twc_pkm_shot_soundset","jsrs_mg_echo_soundset"};
			};
		};
		class close:manual {
			class standardsound {
				soundSetShot[] = {"jsrs_mk200_closure_soundshader","twc_pkm_shot_soundset","jsrs_mg_echo_soundset"};
			};
		};
		class single:mode_semiauto {
			class standardsound {
				soundSetShot[] = {"jsrs_mk200_closure_soundshader","twc_pkm_shot_soundset","jsrs_mg_echo_soundset"};
			};
		};
		class medium:close {
			class standardsound {
				soundSetShot[] = {"jsrs_mk200_closure_soundshader","twc_pkm_shot_soundset","jsrs_mg_echo_soundset"};
			};
		};
		class short:close {
			class standardsound {
				soundSetShot[] = {"jsrs_mk200_closure_soundshader","twc_pkm_shot_soundset","jsrs_mg_echo_soundset"};
			};
		};
		class far_optic1:medium {
			class standardsound {
				soundSetShot[] = {"jsrs_mk200_closure_soundshader","twc_pkm_shot_soundset","jsrs_mg_echo_soundset"};
			};
		};
		class far_optic2:far_optic1 {
			class standardsound {
				soundSetShot[] = {"jsrs_mk200_closure_soundshader","twc_pkm_shot_soundset","jsrs_mg_echo_soundset"};
			};
		};
	};	
	
	class rhs_weap_saw_base: Rifle_Base_F
	{
	class fullauto;	
	};
	class rhs_weap_lmg_minimipara: rhs_weap_saw_base
	{
		class fullauto: fullauto
		{
			sounds[] = {"StandardSound"};
			class standardsound {
				soundsetshot[]=
				{
					"jsrs_zafir_closure_soundshader",
					"jsrs_m249_shot_soundset",
					"jsrs_mg_echo_soundset"
				};
			};
		};
	};
	
	class LMG_Mk200_F;
	class rhs_weap_M249_base: LMG_Mk200_F
	{
	class manual;	
	};
	class rhs_weap_m240_base: rhs_weap_M249_base
	{
		class manual: mode_fullauto
		{
			sounds[] = {"StandardSound"};
			class standardsound {
				soundsetshot[]=
				{
					"jsrs_mk200_closure_soundshader",
					"jsrs_m240_shot_soundset",
					"jsrs_mg_echo_soundset"
				};
			};
		};
	};
			
		
	class Launcher_Base_F;
	class rhs_weap_rpg7: Launcher_Base_F
	{
		class Single:Mode_SemiAuto {
			sounds[] = {"StandardSound"};
			class standardsound {
				soundsetshot[]=
				{
					"jsrs_sniper_shake_soundset",
					"jsrs_rpg7v_shot_soundset",
					"jsrs_warhead_reflector_1"
				};
			};
		};
	};
	
	class CUP_launch_RPG7V: Launcher_Base_F
	{
		class Single:Mode_SemiAuto {
			sounds[] = {"StandardSound"};
			class standardsound {
				soundsetshot[]=
				{
					"jsrs_sniper_shake_soundset",
					"jsrs_rpg7v_shot_soundset",
					"jsrs_warhead_reflector_1"
				};
			};
		};
	};
	
		
	class GM6_base_F:Rifle_Long_Base_F
	{
		class Single;
	};
	
	class rhs_weap_M107_Base_F: GM6_base_F
	{
		class Single:Mode_SemiAuto {
			sounds[] = {"StandardSound"};
			class standardsound {
				soundSetShot[] = {"jsrs_m107_shot_soundset","jsrs_m107_shell_soundset"};
			};
		};
	};
	
	class srifle_GM6_F: GM6_base_F
	{
		class Single;
	};
	
	class UK3CB_BAF_L135A1: srifle_GM6_F
	{
		class Single:Mode_SemiAuto {
			sounds[] = {"StandardSound"};
			class standardsound {
				soundSetShot[] = {"jsrs_m107_shot_soundset","jsrs_m107_shell_soundset"};
			};
		};
	};
	
	class MGunCore;
	class MGun;
	
	class LMG_RCWS: MGun
	{
		class standardsound;
		class manual;
	};
	
	class UK3CB_BAF_L112A1_veh: LMG_RCWS
	{
		class manual:manual {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"jsrs_m16a4_closure_soundshader","twc_L129_Shot_Soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
				};
			};
	
		class standardsound
		{
			soundSetShot[] = {"jsrs_mk200_closure_soundshader","twc_l7_shot_soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
				
		};
	};
	
	class CannonCore;
	
	class autocannon_Base_F: CannonCore
	{
		class close;
		class short;
		class medium;
		class far;
		class player;
	};
	
	class L21A1_RARDEN: autocannon_Base_F
	{
		class player:player {
	
			class standardsound
			{
					soundSetShot[] = {
						"jsrs_autocannon_3_shot_soundset",
						"jsrs_40mm_reflector_1",
						"jsrs_autocannon_casing"};
				};
			};
	
		class standardsound
		{
			soundSetShot[] = {
						"jsrs_autocannon_3_shot_soundset",
						"jsrs_40mm_reflector_1",
						"jsrs_autocannon_casing"};
				
		};
	};
	
		class autocannon_40mm_ctws: autocannon_base_f
	{
		class he: autocannon_base_f
		{
			class player: player
			{
				class standardsound
				{
					soundsetshot[]=
					{
						"jsrs_autocannon_2_shot_soundset",
						"jsrs_40mm_reflector_1",
						"jsrs_autocannon_casing"
					};
				};
			};
		};
		class ap: autocannon_base_f
		{
			class player: player
			{
				class standardsound
				{
					soundsetshot[]=
					{
						"jsrs_autocannon_2_shot_soundset",
						"jsrs_40mm_reflector_1",
						"jsrs_autocannon_casing"
					};
				};
			};
		};
	};
	
	
	class mortar_82mm: CannonCore
	{
		class standardsound;
		class single1;
	};
	
	class UK3CB_BAF_M6_veh: mortar_82mm
	{
		class single1:single1 {
	
			class standardsound
			{
					soundSetShot[] = {"jsrs_sr25_closure_soundshader","jsrs_nlaw_shot_soundset","UK3CB_Mortar60mm_Tail_SoundSet"};
				};
			};
		class single2:single1 {
	
			class standardsound
			{
					soundSetShot[] = {"jsrs_sr25_closure_soundshader","jsrs_nlaw_shot_soundset","UK3CB_Mortar60mm_Tail_SoundSet"};
				};
			};
		class single3:single1 {
	
			class standardsound
			{
					soundSetShot[] = {"jsrs_sr25_closure_soundshader","jsrs_nlaw_shot_soundset","UK3CB_Mortar60mm_Tail_SoundSet"};
				};
			};
		class single4:single1 {
	
			class standardsound
			{
					soundSetShot[] = {"jsrs_sr25_closure_soundshader","jsrs_nlaw_shot_soundset","UK3CB_Mortar60mm_Tail_SoundSet"};
				};
			};
	
		class standardsound
		{
			soundSetShot[] = {"3CB_BAF_M2_Closure_SoundSet","jsrs_nlaw_shot_soundset","UK3CB_Mortar60mm_Tail_SoundSet"};
				
		};
	};
	
	class GMG_F;
	class GMG_40mm: GMG_F
	{
		class manual;
	};
	
	class UK3CB_BAF_L134A1_vehicle: GMG_40mm
	{
		class manual: manual{
	
			class standardsound
			{
					soundSetShot[] = {"twc_GMG_shot_soundset","UK3CB_Mortar60mm_Tail_SoundSet"};
				};
			};
	};

	class UK3CB_BAF_L134A1_veh: GMG_40mm
	{
		class manual: manual
		{
	
			class standardsound
			{
					soundSetShot[] = {"twc_GMG_shot_soundset","UK3CB_Mortar60mm_Tail_SoundSet"};
				};
			};
	};
	
	class GMG_20mm: GMG_F
	{
		
	};
	class RHS_MK19: GMG_20mm
	{
		class manual: GMG_F
		{
	
			class standardsound
			{
					soundSetShot[] = {"twc_GMG_shot_soundset","UK3CB_Mortar60mm_Tail_SoundSet"};
				};
			};
	};
		

	
	class HMG_01;
	
	class HMG_M2: HMG_01
	{
		class standardsound;
		class manual;
	};
	
	class RHS_M2: HMG_M2
	{
		class manual:manual {
	
			class standardsound
			{
					soundSetShot[] = {"twc_hmg_closure_soundshader","twc_L111_soundset","3CB_BAF_mmg1_Tail_SoundSet"};
				};
			};
	
		class standardsound
		{
			soundSetShot[] = {"twc_hmg_closure_soundshader","twc_L111_soundset","3CB_BAF_mmg1_Tail_SoundSet"};
				
		};
	};
	
	
	class UK3CB_BAF_L111A1_vehicle: HMG_M2
	{
		class manual:manual {
	
			class standardsound
			{
					soundSetShot[] = {"twc_hmg_closure_soundshader","twc_L111_soundset","3CB_BAF_mmg1_Tail_SoundSet"};
				};
			};
	
		class standardsound
		{
			soundSetShot[] = {"twc_hmg_closure_soundshader","twc_L111_soundset","3CB_BAF_mmg1_Tail_SoundSet"};
				
		};
	};
	
	
	class UK3CB_BAF_L111A1_veh: HMG_M2
	{
		class manual:manual {
	
			class standardsound
			{
					soundSetShot[] = {"twc_hmg_closure_soundshader","twc_L111_soundset","3CB_BAF_mmg1_Tail_SoundSet"};
				};
			};
	
		class standardsound
		{
			soundSetShot[] = {"twc_hmg_closure_soundshader","twc_L111_soundset","3CB_BAF_mmg1_Tail_SoundSet"};
				
		};
	};
	
	class CUP_Vhmg_M2_veh: HMG_M2
	{
		class manual:manual {
	
			class standardsound
			{
			soundSetShot[] = {"twc_hmg_closure_soundshader","twc_L111_soundset","3CB_BAF_mmg1_Tail_SoundSet"};
				};
			};
	
		class standardsound
		{
			soundSetShot[] = {"twc_hmg_closure_soundshader","twc_L111_soundset","3CB_BAF_mmg1_Tail_SoundSet"};
				
		};
	};
	

	class  CUP_Vlmg_M240_veh : MGun
	{
		class manual:mgun {
	
			class standardsound
			{
					soundSetShot[] = {"jsrs_m16a4_closure_soundshader","twc_L129_Shot_Soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
				};
			};
	
		class standardsound
		{
			soundSetShot[] = {"jsrs_mk200_closure_soundshader","twc_l7_shot_soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
				
		};
	};
	
	
	class UK3CB_BAF_L7A2_veh: LMG_RCWS
	{
		class manual:manual {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"jsrs_mk200_closure_soundshader","twc_l7_shot_soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
				};
			};
	
		class standardsound
		{
			soundSetShot[] = {"jsrs_mk200_closure_soundshader","twc_l7_shot_soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
				
		};
	};
	
	class EBR_base_F;
	class srifle_EBR_F: EBR_base_F
	{
		class Single;
	};
	
	class UK3CB_BAF_L129A1: srifle_EBR_F
	{
		class Single:Single {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"jsrs_m16a4_closure_soundshader","twc_L129_Shot_Soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
				};
			};
		};
	
	class LRR_base_F;
	class srifle_LRR_F: LRR_base_F
	{
		class single;
	};
	
	class UK3CB_BAF_L115_Base: srifle_LRR_F
	{
		class Single:single {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
				{
					soundSetShot[] = {"3CB_BAF_L115_Closure_SoundSet","jsrs_mx2010_shot_soundset","3CB_BAF_Sniper1_Tail_SoundSet"};
				};
				class SilencedSound: BaseSoundModeType 
				{
					soundSetShot[] = {"3CB_BAF_L115_Closure_SoundSet","jsrs_m107_shot_silenced_soundset","3CB_BAF_Rifle1_SD_Tail_SoundSet", "jsrs_762mm_distance_silenced_soundshader"
				};
			};
		};
	};
	
	class UK3CB_BAF_L128A1: srifle_EBR_F
	{
		class Single:Single {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"jsrs_m16a4_closure_soundshader","TWC_L128_Shot_SoundSet","3CB_BAF_Shotgun2_Tail_SoundSet"};
				};
			};
		};
		
	class UK3CB_BAF_L110_Base;
	class UK3CB_BAF_L110_556_Base: UK3CB_BAF_L110_Base
	{
		class Far_optic1;
		class Far_optic2;
		class Close;
		class Short;
		class Medium;
		class FullAuto;
	};
	
	class UK3CB_BAF_L110A2RIS: UK3CB_BAF_L110_556_Base
	{
		class FullAuto:FullAuto {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"jsrs_zafir_closure_soundshader","jsrs_1903_shot_soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
				};
			};
		class Far_optic1:Far_optic1 {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"jsrs_zafir_closure_soundshader","jsrs_1903_shot_soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
				};
			};
		class Far_optic2:Far_optic2 {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"jsrs_zafir_closure_soundshader","jsrs_1903_shot_soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
				};
			};
		class Close:Close {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"jsrs_zafir_closure_soundshader","jsrs_1903_shot_soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
				};
			};
		class Medium:Medium {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"jsrs_zafir_closure_soundshader","jsrs_1903_shot_soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
				};
			};
		};
	
	class UK3CB_BAF_L110A2: UK3CB_BAF_L110_556_Base
	{
		class FullAuto:FullAuto {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"jsrs_zafir_closure_soundshader","jsrs_1903_shot_soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
				};
			};
		class Far_optic1:Far_optic1 {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"jsrs_zafir_closure_soundshader","jsrs_1903_shot_soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
				};
			};
		class Far_optic2:Far_optic2 {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"jsrs_zafir_closure_soundshader","jsrs_1903_shot_soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
				};
			};
		class Close:Close {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"jsrs_zafir_closure_soundshader","jsrs_1903_shot_soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
				};
			};
		class Medium:Medium {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"jsrs_zafir_closure_soundshader","jsrs_1903_shot_soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
				};
			};
		};
	
	class UK3CB_BAF_L110A1: UK3CB_BAF_L110_556_Base
	{
		class FullAuto:FullAuto {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"jsrs_zafir_closure_soundshader","jsrs_1903_shot_soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
				};
			};
		class Far_optic1:Far_optic1 {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"jsrs_zafir_closure_soundshader","jsrs_1903_shot_soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
				};
			};
		class Far_optic2:Far_optic2 {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"jsrs_zafir_closure_soundshader","jsrs_1903_shot_soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
				};
			};
		class Close:Close {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"jsrs_zafir_closure_soundshader","jsrs_1903_shot_soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
				};
			};
		class Medium:Medium {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"jsrs_zafir_closure_soundshader","jsrs_1903_shot_soundset","3CB_BAF_Rifle1_Tail_SoundSet"};
				};
			};
		};
		
	};
	
class cfgsoundcurves
	{
		class jsrs_wpn_vl_sin;
		class jpex_wpn_vl_sin: jsrs_wpn_vl_sin
		{};
		
		class jsrs_basic_vl_sin;
		class jpex_basic_vl_sin: jsrs_basic_vl_sin
		{};
		
	};

class cfgdistancefilters
{
		
	class jpex_wpn_lp_dia
	{
		type="lowpassfilter";
		mincutofffrequency=75;
		qfactor=1;
		innerrange=50;
		range=1500;
		powerfactor=15;
	};
};