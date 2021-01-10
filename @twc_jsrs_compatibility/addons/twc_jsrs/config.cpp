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
			"cup_wheeledvehicles_brdm2",
			"cup_trackedvehicles_mtlb",
			"cup_trackedvehicles_bmp",
			"cup_trackedvehicles_t72",
			"cup_trackedvehicles_t90",
			"uk3cb_baf_weapons_smallarms",
			"uk3cb_baf_weapons_l85a3",
			"uk3cb_baf_weapons_l1a1",
			"uk3cb_baf_weapons_static",
			"UK3CB_BAF_Vehicles_Weapons",
			"CUP_Weapons_WeaponsCore",
			"cup_weapons_staticweapons",
			"cup_weapons_mp5",
			"cup_weapons_ak",
			"jsrs_soundmod_framework"
		};
	};
};

/*these pbo's break rhs weapons when you add them to dependencies, live without them:
cup_trackedvehicles_t55
cup_trackedvehicles_bulldog
*/

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
				"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shot\closure\Gatlingcannon (1).ogg",
				1
			},
			
			{
				"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shot\closure\Gatlingcannon (2).ogg",
				1
			},
			
			{
				"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shot\closure\Gatlingcannon (3).ogg",
				1
			},
			
			{
				"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shot\closure\Gatlingcannon (4).ogg",
				1
			}
		};
		volume=2;
		frequency=0.6;
		range=10;
		rangecurve[]=
		{
			{0,1},
			{3,0.5},
			{10,0}
		};
	};
	class twc_mortar_closure_soundshader
	{
		samples[]=
		{
			{
				"JSRS_Soundmod_Snd_Weapons\Sounds\Shot\Closure\mortar (1).ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Weapons\Sounds\Shot\Closure\mortar (2).ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Weapons\Sounds\Shot\Closure\mortar (3).ogg",
				1
			},
			
			{
				"JSRS_Soundmod_Snd_Weapons\Sounds\Shot\Closure\mortar (4).ogg",
				1
			}
		};
		volume=2;
		frequency=1;
		range=10;
		rangecurve[]=
		{
			{0,1},
			{3,0.5},
			{10,0}
		};
	};
	
	
	
	class jsrs_762mm_distance_silenced_soundshader;
	class twc_762mm_distance_silenced_soundshader: jsrs_762mm_distance_silenced_soundshader
	{
		range=400;
		rangecurve[]=
		{
			{0,0},
			{50,1},
			{400,0}
		};
	};
	
	class jsrs_akm_closure_soundshader;
	class twc_akm_closure_soundshader: jsrs_akm_closure_soundshader
	{
		volume = 2.5;
		frequency = 1;
		samples[]=
		{
			
			
			{
				"TWC_jsrs\soundfiles\ak_bolt.ogg",
				1
			}
		};
	};
	class twc_beryl_closure_soundshader: twc_akm_closure_soundshader
	{
		volume = 1.5;
	};
	class twc_pistol_closure_soundshader: twc_akm_closure_soundshader
	{
		volume = 0.7;
		frequency = 1.3;
	};
	class twc_mp7_closure_soundshader: twc_pistol_closure_soundshader
	{
		volume = 0.9;
		frequency = 0.8;
	};
	class twc_l85_closure_soundshader: jsrs_akm_closure_soundshader
	{
		volume = 1.5;
		frequency = 1;
		samples[]=
		{
			
			
			{
				"TWC_jsrs\soundfiles\l85_bolt.ogg",
				1
			}
		};
	};
	
	class twc_l129_closure_soundshader: jsrs_akm_closure_soundshader
	{
		volume = 1.4;
		frequency = 1;
		samples[]=
		{
			
			
			{
				"TWC_jsrs\soundfiles\fal_bolt.ogg",
				1
			}
		};
		range=2;
		rangecurve[]=
		{
			{0,1},
			{0.5,0.5},
			{2,0}
		};
	};
	class twc_l1a1_closure_soundshader: twc_l129_closure_soundshader
	{
		volume = 1.8;
		frequency = 1.05;
	};
	class twc_l111_closure_soundshader: twc_l129_closure_soundshader
	{
		volume = 3;
		frequency = 0.9;
	};
	class twc_g36_closure_soundshader: twc_l129_closure_soundshader
	{
		volume = 0.4;
		frequency = 1.0;
	};
	class twc_mp5_closure_soundshader: twc_l129_closure_soundshader
	{
		volume = 0.5;
		frequency = 1.3;
	};
	class twc_ar15_closure_soundshader: twc_l129_closure_soundshader
	{
		volume = 0.5;
		frequency = 1.2;
	};
	
	class jsrs_g36_shot_close_soundshader;
	class twc_jsrs_g36_shot_close_soundshader: jsrs_g36_shot_close_soundshader
	{
		frequency = 0.7;
	};
	
	class jsrs_cyrus_shot_close_soundshader;
	class twc_l129_shot_close_soundshader: jsrs_cyrus_shot_close_soundshader
	{
		frequency = 0.9;
	};
	
	
	class twc_fal_shot_close_soundshader: twc_l129_shot_close_soundshader
	{
		frequency = 0.75;
	};
	
	
	
	class jsrs_1903_shot_close_soundshader;
	class twc_L85_shot_close_soundshader: jsrs_1903_shot_close_soundshader
	{
		frequency = 0.7;
	};
	
	//chamber blast
	class twc_556_popper_close_soundshader: twc_jsrs_g36_shot_close_soundshader
	{
		range=1;
		frequency = 1.3;
		volume=2.5;
		rangecurve[]=
		{
			{0,1},
			{0.5,0.5},
			{1,0}
		};
	};
	
	class jsrs_mx2010_shot_close_soundshader;
	class twc_l85_popper_close_soundshader: jsrs_mx2010_shot_close_soundshader
	{
		range=1;
		frequency = 0.85;
		volume=1.3;
		rangecurve[]=
		{
			{0,1},
			{0.5,0.5},
			{1,0}
		};
	};
	class twc_556_popper_2_close_soundshader: twc_l85_popper_close_soundshader
	{
		volume=1.2;
	};
	
	class twc_762_popper_close_soundshader: twc_jsrs_g36_shot_close_soundshader
	{
		range=5;
		frequency = 0.9;
		volume=2.3;
		rangecurve[]=
		{
			{0,1},
			{1,0.5},
			{5,0}
		};
	};
	
	class twc_heavy_popper_close_soundshader: jsrs_mx2010_shot_close_soundshader
	{
		frequency = 0.75;
		volume=3;
		range=5;
		rangecurve[]=
		{
			{0,1},
			{1,0.5},
			{4,0}
		};
	};
	
	class jsrs_pp2000_shot_close_soundshader;
	class twc_9mm_popper_close_soundshader: jsrs_pp2000_shot_close_soundshader
	{
		range=8;
		frequency = 1.0;
		volume=1.4;
		rangecurve[]=
		{
			{0,1},
			{0.5,0.5},
			{8,0}
		};
	};
		
	
	class twc_heavy_popper_2_close_soundshader: twc_762_popper_close_soundshader
	{
		frequency = 0.75;
		volume=3;
		range=5;
		rangecurve[]=
		{
			{0,1},
			{1,0.5},
			{4,0}
		};
	};
	class jsrs_asval_close_shot_soundshader;
	class twc_mp7_SD_close_shot_soundshader: jsrs_asval_close_shot_soundshader
	{
		rangecurve[]=
		{
			{0,0.2},
			{2,1},
			{20,1},
			{150,0}
		};
	};
	class jsrs_gm6_shot_close_soundshader;
	class twc_jsrs_gm6_shot_close_soundshader: jsrs_gm6_shot_close_soundshader
	{
		frequency=0.6;
	};
	class jpex_rifle_shell_inroom_soundshader: jsrs_pistol_shell_inroom_soundshader
	{
	};
	
	class twc_sniper_silenced_click_soundset: jsrs_pistol_shell_inroom_soundshader
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
	class twc_sniper_silenced_shot_soundset: jsrs_pistol_shell_inroom_soundshader
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
	/*
	class jsrs_5x56mm_reverb_soundset_forest;
	class jsrs_556mm_echo_soundset: jsrs_5x56mm_reverb_soundset_forest
	{
		volume="1.30*(1-interior/1.4)";
		frequency = 1.2;
	};
	*/
		class jsrs_m136_closure_soundshader: jsrs_pistol_shell_inroom_soundshader
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
	class jsrs_m136_interior_shot_soundshader: jsrs_pistol_shell_inroom_soundshader
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
	class jsrs_m136_interior_shot_2_soundshader: jsrs_pistol_shell_inroom_soundshader
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
	class jsrs_m136_shot_close_soundshader: jsrs_pistol_shell_inroom_soundshader
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
		volume="1.70";
		range=20;
		rangecurve[]=
		{
			{0,1},
			{10,0.69999999},
			{20,0}
		};
	};
	class jsrs_m136_shot_close_distance_soundshader: jsrs_pistol_shell_inroom_soundshader
	{
		samples[]=
		{
			
			{
				"jsrs_soundmod_snd_weapons\sounds\shot\m136\close_distance_1.ogg",
				1
			}
		};
		volume="1.6";
		range=100;
		rangecurve[]=
		{
			{0,0},
			{20,1},
			{100,0}
		};
	};
	class jsrs_m136_shot_medium_distance_soundshader: jsrs_pistol_shell_inroom_soundshader
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
	class jsrs_m136_distance_400m_to_800m_shot_soundshader: jsrs_pistol_shell_inroom_soundshader
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
	class jsrs_m136_distance_800m_to_1500m_shot_soundshader: jsrs_pistol_shell_inroom_soundshader
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
	class jsrs_m136_distance_1500m_to_2500m_shot_soundshader: jsrs_pistol_shell_inroom_soundshader
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
	
	class twc_jsrs_g36_shot_close_distance_soundshader: jsrs_pistol_shell_inroom_soundshader
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
	
	class jsrs_m240_shot_close_soundshader;
	class twc_jsrs_GPMG_shot_close_soundshader: jsrs_m240_shot_close_soundshader
	{
		frequency = 0.7;
		rangecurve[]=
		{
			{0,1},
			{3.5,0.5},
			{5,0}
		};
	};
		

};

class cfgsoundsets
{
	
	class jsrs_basic_soniccrack_soundset
	{
		volumefactor=2.5;
		volumerandomizer=1;
		volumecurve="jsrs_basic_vl_sin";
		spatial=1;
		doppler=0;
		loop=0;
		sound3dprocessingtype="jsrs_snaps_3dprocessor";
		distancefilter="jsrs_weapons_lowpass_filter";
		frequencyrandomizer=4;
	};
	
	class Shell105mm130mm_Exp_SoundSet
	{
		soundshaders[]=
		{
			"jsrs_bomb_explosion_close_distance_soundshader",
			"jsrs_bomb_explosion_medium_distance_soundshader",
			"jsrs_bomb_explosion_far_distance_soundshader",
			"jsrs_bomb_explosion_very_far_distance_soundshader",
			"jsrs_big_debris_regular_soundshader",
			"jsrs_big_debris_houses_soundshader"
		};
		volumefactor=5;
		volumecurve="jsrs_explosions_volumecurve";
		sound3dprocessingtype="jsrs_explosions_3dprocessor";
		distancefilter="jsrs_explosions_lowpass_filter";
		spatial=1;
		doppler=0;
		loop=0;
		occlusionfactor=0.1;
		obstructionfactor=0.1;
		frequencyrandomizer=3;
		frequencyFactor = 0.6;
	};
	
	class Shell30mm40mm_Exp_SoundSet
	{
		soundshaders[]=
		{
			"jsrs_mortar_explosion_close_distance_soundshader",
			"jsrs_mortar_explosion_medium_distance_soundshader",
			"jsrs_mortar_explosion_far_distance_soundshader",
			"jsrs_mortar_explosion_very_far_distance_soundshader",
			"jsrs_big_debris_regular_soundshader",
			"jsrs_big_debris_houses_soundshader"
		};
		volumefactor=1.3;
		volumecurve="jsrs_explosions_volumecurve";
		sound3dprocessingtype="jsrs_explosions_3dprocessor";
		distancefilter="jsrs_explosions_lowpass_filter";
		spatial=1;
		doppler=0;
		loop=0;
		occlusionfactor=0.1;
		obstructionfactor=0.1;
		frequencyrandomizer=3;
	};
	
	class Shell19mm25mm_Exp_SoundSet
	{
		soundshaders[]=
		{
			"jsrs_bomb_explosion_close_distance_soundshader",
			"jsrs_small_explosion_medium_distance_soundshader",
			"jsrs_small_explosion_far_distance_soundshader",
			"jsrs_small_explosion_very_far_distance_soundshader",
			"jsrs_small_debris_regular_soundshader",
			"jsrs_small_debris_houses_soundshader"
		};
		volumefactor=1.1;
		volumecurve="jsrs_explosions_volumecurve";
		sound3dprocessingtype="jsrs_explosions_3dprocessor";
		distancefilter="jsrs_explosions_lowpass_filter";
		spatial=1;
		doppler=0;
		loop=0;
		occlusionfactor=0.1;
		obstructionfactor=0.1;
		frequencyrandomizer=3;
	};
	
	
	class Shell155mm_Tail_SoundSet
	{
		soundshaders[]=
		{
			"jsrs_explosion_echo_medium_soundshader",
			"jsrs_explosion_echo_houses_soundshader",
			"jsrs_explosion_big_shockwave_soundshader",
			"jsrs_bomb_explosion_reverb_houses_soundshader",
			"jsrs_bomb_explosion_reverb_forest_soundshader",
			"jsrs_bomb_explosion_reverb_meadow_soundshader"
		};
		volumefactor=1;
		volumecurve="jsrs_fadeout_volumecurve";
		sound3dprocessingtype="jsrs_explosion_tail_3dprocessor";
		distancefilter="jsrs_explosion_tail_lowpass_filter";
		spatial=1;
		doppler=0;
		loop=0;
		occlusionfactor=0.1;
		obstructionfactor=0.1;
		frequencyrandomizer=2;
		soundshaderslimit=2;
		frequencyFactor = 0.9;
	};
	
	
	//autocannon_cas for medium distance because the zsu medium sound has a ringing artifact
	class jsrs_ZSU23_shot_soundset;
	class twc_ZSU23_shot_soundset: jsrs_ZSU23_shot_soundset
	{
		volumefactor=1.75;
		soundshaders[]=
		{
			"jsrs_ZSU23_shot_close_soundshader",
			"jsrs_ZSU23_shot_close_distance_soundshader",
			"jsrs_autocannon_cas_shot_medium_distance_soundshader",
			"jsrs_close_distance_pool_zsu_soundshader",
			"jsrs_far_distance_pool_zsu_soundshader",
			"jsrs_very_far_distance_pool_zsu_soundshader"
		};
	};
	
	class jsrs_ak12_shot_silenced_soundset;
	class twc_glock_shot_SD_close_soundset: jsrs_ak12_shot_silenced_soundset
	{
		soundshaders[]=
		{
			"jsrs_pistol_shake_soundshader",
			"jsrs_pistol_shell_inroom_soundshader",
			"twc_pistol_closure_soundshader",
			"twc_9mm_popper_close_soundshader",
			"jsrs_7_62mm_interior_silenced_soundshader",
			"jsrs_7_62mm_shot_silenced_soundshader",
			"jsrs_762mm_distance_silenced_soundshader"
		};
	};
		
	
	class 3CB_BAF_L85_Shot_SoundSet;
	class twc_L85_Shot_Soundset: 3CB_BAF_L85_Shot_SoundSet
	{
		
		soundshaders[] = {"twc_L85_closure_soundshader","twc_l85_popper_close_soundshader","jsrs_g36_interior_shot_soundshader","jsrs_g36_interior_shot_2_soundshader","jsrs_1903_shot_close_soundshader","jsrs_fnfal_shot_close_distance_soundshader","jsrs_g3_shot_medium_distance_soundshader","jsrs_close_distance_pool_sniper_soundshader","jsrs_far_distance_pool_sniper_soundshader","jsrs_very_far_distance_pool_sniper_soundshader"};
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
	
	class twc_L86_Shot_Soundset: twc_L85_Shot_Soundset
	{
		frequencyFactor = 0.85;
	};
	
	class jsrs_1903_shot_soundset;
	class twc_m249_shot_soundset: jsrs_1903_shot_soundset
	{
		soundshaders[]=
		{
			"jsrs_sniper_shake_soundshader",
			"jsrs_rifle_shell_inroom_soundshader",
			"jsrs_1903_closure_soundshader",
			"jsrs_1903_interior_shot_soundshader",
			"jsrs_1903_interior_shot_2_soundshader",
			"jsrs_spar_shot_close_soundshader",
			"twc_762_popper_close_soundshader",
			"jsrs_1903_shot_close_distance_soundshader",
			"jsrs_1903_shot_medium_distance_soundshader",
			"jsrs_close_distance_pool_sniper_soundshader",
			"jsrs_far_distance_pool_sniper_soundshader",
			"jsrs_very_far_distance_pool_sniper_soundshader"
		};
	};
	
	
	class jsrs_g36_shot_soundset;
	class twc_g36_shot_soundset: jsrs_g36_shot_soundset
	{
		soundshaders[]=
		{
			"jsrs_rifle_shake_soundshader",
			"jsrs_rifle_shell_inroom_soundshader",
			"jsrs_Hifi_rifle_1_soundshader",
			"jsrs_g36_interior_shot_soundshader",
			"jsrs_g36_interior_shot_2_soundshader",
			"twc_556_popper_2_close_soundshader",
			"twc_g36_closure_soundshader",
			"jsrs_g36_shot_close_soundshader",
			"jsrs_g36_shot_close_distance_soundshader",
			"jsrs_g36_shot_medium_distance_soundshader",
			"jsrs_close_distance_pool_556_soundshader",
			"jsrs_far_distance_pool_556_soundshader",
			"jsrs_very_far_distance_pool_556_soundshader"
		};
	};
	
	
	class jsrs_small_explosion_soundset;
	class twc_L115_shot_soundset: jsrs_small_explosion_soundset
	{
		soundshaders[]=
		{
			"jsrs_sniper_shake_soundshader",
			"twc_762_popper_close_soundshader",
			"jsrs_gm6_interior_shot_soundshader",
			"jsrs_gm6_interior_shot_2_soundshader",
			"jsrs_small_explosion_close_distance_soundshader",
			"jsrs_small_explosion_medium_distance_soundshader",
			"jsrs_small_explosion_far_distance_soundshader",
			"jsrs_small_explosion_very_far_distance_soundshader"
		};
	};
	
	
	class jsrs_m16a4_shot_soundset;
	class twc_m16a4_shot_soundset: jsrs_m16a4_shot_soundset
	{
		soundshaders[]=
		{
			"jsrs_rifle_shake_soundshader",
			"jsrs_rifle_shell_inroom_soundshader",
			"jsrs_Hifi_rifle_2_soundshader",
			"twc_556_popper_2_close_soundshader",
			"twc_ar15_closure_soundshader",
			"jsrs_m16a4_interior_shot_soundshader",
			"jsrs_m16a4_interior_shot_2_soundshader",
			"jsrs_m16a4_shot_close_soundshader",
			"jsrs_m16a4_shot_close_distance_soundshader",
			"jsrs_m16a4_shot_medium_distance_soundshader",
			"jsrs_close_distance_pool_m16_soundshader",
			"jsrs_far_distance_pool_m16_soundshader",
			"jsrs_very_far_distance_pool_m16_soundshader"
		};
		volumefactor= 1.5;
	};
	
	class twc_mp5_shot_soundset: jsrs_m16a4_shot_soundset
	{
		soundshaders[]=
		{
			"jsrs_pistol_shake_soundshader",
			"jsrs_pistol_shell_inroom_soundshader",
			"jsrs_pdw2000_interior_shot_soundshader",
			"jsrs_pdw2000_interior_shot_2_soundshader",
			"twc_mp5_closure_soundshader",
			"twc_9mm_popper_close_soundshader",
			"jsrs_pdw2000_shot_close_soundshader",
			"jsrs_pdw2000_shot_close_distance_soundshader",
			"jsrs_pdw2000_shot_medium_distance_soundshader",
			"jsrs_close_distance_pool_smg_soundshader",
			"jsrs_far_distance_pool_smg_soundshader",
			"jsrs_very_far_distance_pool_smg_soundshader"
		};
		frequencyFactor = 1.0;
	};
	
	class twc_mp5_SD_shot_soundset: jsrs_m16a4_shot_soundset
	{
		soundshaders[]=
		{
			"jsrs_pistol_shake_soundshader",
			"twc_mp5_closure_soundshader",
			"twc_9mm_popper_close_soundshader",
			"jsrs_pistol_shell_inroom_soundshader",
			"jsrs_9mm_interior_silenced_soundshader",
			"jsrs_9mm_shot_silenced_soundshader",
			"jsrs_9mm_distance_silenced_soundshader"
		};
	};
	
	
	class jsrs_12x7mm_sd_reverb_soundset;
	class twc_12x7mm_sd_reverb_soundset: jsrs_12x7mm_sd_reverb_soundset
	{
		volumefactor= 1.2;
		frequencyFactor = 1.2;
	};
	
	class jsrs_12x7mm_reverb_soundset;
	class twc_12x7mm_reverb_soundset: jsrs_12x7mm_reverb_soundset
	{
		volumefactor= 0.5;
		frequencyFactor = 1.3;
	};
	
	class twc_beryl_Shot_Soundset: twc_m16a4_shot_soundset
	{
		frequencyFactor = 0.9;
		soundshaders[]=
		{
			"jsrs_rifle_shake_soundshader",
			"jsrs_rifle_shell_inroom_soundshader",
			"jsrs_Hifi_rifle_2_soundshader",
			"twc_beryl_closure_soundshader",
			"twc_762_popper_close_soundshader",
			"jsrs_m16a4_interior_shot_soundshader",
			"jsrs_m16a4_interior_shot_2_soundshader",
			"jsrs_m16a4_shot_close_soundshader",
			"jsrs_m16a4_shot_close_distance_soundshader",
			"jsrs_m16a4_shot_medium_distance_soundshader",
			"jsrs_close_distance_pool_m16_soundshader",
			"jsrs_far_distance_pool_m16_soundshader",
			"jsrs_very_far_distance_pool_m16_soundshader"
		};
	};
	class jsrs_akm_shot_soundset;
	class twc_akm_Shot_Soundset: jsrs_akm_shot_soundset
	{
		soundshaders[]=
		{
			"jsrs_rifle_shake_soundshader",
			"jsrs_rifle_shell_inroom_soundshader",
			"twc_762_popper_close_soundshader",
			"twc_akm_closure_soundshader",
			"jsrs_akm_interior_shot_soundshader",
			"jsrs_akm_interior_shot_2_soundshader",
			"jsrs_ak74u_shot_close_soundshader",
			"jsrs_ak74u_shot_close_distance_soundshader",
			"jsrs_ak74u_shot_medium_distance_soundshader",
			"jsrs_close_distance_pool_ak_soundshader",
			"jsrs_far_distance_pool_ak_soundshader",
			"jsrs_very_far_distance_pool_ak_soundshader"
		};
	};
	class twc_akm_SD_Shot_Soundset: twc_akm_Shot_Soundset
	{
		soundshaders[]=
		{
			"jsrs_rifle_shake_soundshader",
			"jsrs_rifle_shell_inroom_soundshader",
			"twc_762_popper_close_soundshader",
			"twc_akm_closure_soundshader",
			"jsrs_smg45_interior_shot_soundshader",
			"jsrs_smg45_interior_shot_2_soundshader",
			"jsrs_7_62mm_dmr_shot_silenced_soundshader",
			"jsrs_smg45_shot_close_distance_soundshader",
			"jsrs_smg45_shot_medium_distance_soundshader",
			"jsrs_close_distance_pool_pistol2_soundshader",
			"jsrs_far_distance_pool_pistol2_soundshader",
			"jsrs_very_far_distance_pool_pistol2_soundshader"
		};
	};
	
	class jsrs_ak74_shot_soundset;
	
	
	class twc_ak74_shot_soundset: jsrs_ak74_shot_soundset
	{
		soundshaders[]=
		{
			"jsrs_rifle_shake_soundshader",
			"jsrs_rifle_shell_inroom_soundshader",
			"twc_heavy_popper_2_close_soundshader",
			"twc_akm_closure_soundshader",
			"jsrs_ak74_interior_shot_soundshader",
			"jsrs_ak74_interior_shot_2_soundshader",
			"jsrs_ak74_shot_close_soundshader",
			"jsrs_ak74_shot_close_distance_soundshader",
			"jsrs_ak74_shot_medium_distance_soundshader",
			"jsrs_close_distance_pool_ak_soundshader",
			"jsrs_far_distance_pool_ak_soundshader",
			"jsrs_very_far_distance_pool_ak_soundshader"
		};
	};
	
	class twc_ak74_SD_shot_soundset: twc_ak74_shot_soundset
	{
		soundshaders[]=
		{
			"jsrs_rifle_shake_soundshader",
			"jsrs_rifle_shell_inroom_soundshader",
			"twc_heavy_popper_2_close_soundshader",
			"twc_akm_closure_soundshader",
			"jsrs_smg45_interior_shot_soundshader",
			"jsrs_smg45_interior_shot_2_soundshader",
			"jsrs_7_62mm_dmr_shot_silenced_soundshader",
			"jsrs_smg45_shot_close_distance_soundshader",
			"jsrs_smg45_shot_medium_distance_soundshader",
			"jsrs_close_distance_pool_pistol2_soundshader",
			"jsrs_far_distance_pool_pistol2_soundshader",
			"jsrs_very_far_distance_pool_pistol2_soundshader"
		};
	};
	class twc_rpk74_shot_soundset: twc_ak74_shot_soundset
	{
		frequencyFactor = 0.9;
	};
	
	
	class jsrs_p228_shot_soundset;
	class twc_mp7_shot_soundset: jsrs_p228_shot_soundset
	{
		frequencyFactor = 0.8;
	};
	
	class jsrs_asval_shot_soundset;
	class twc_mp7_sd_shot_soundset: jsrs_asval_shot_soundset
	{
		soundshaders[]=
		{
			"jsrs_sniper_shake_soundshader",
			"twc_mp7_closure_soundshader",
			"twc_9mm_popper_close_soundshader",
			"twc_mp7_SD_close_shot_soundshader",
			"jsrs_9mm_distance_silenced_soundshader",
			"jsrs_asval_interior_shot_soundshader",
			"jsrs_pistol_shell_inroom_soundshader"
		};
	};
	
	class jsrs_cmr76_shot_soundset;
	class twc_pkm_shot_soundset: jsrs_cmr76_shot_soundset
	{
		soundshaders[]=
		{
			"jsrs_pkm_closure_soundshader",
			"jsrs_pkm_interior_shot_soundshader",
			"jsrs_pkm_interior_shot_2_soundshader",
			"twc_heavy_popper_close_soundshader",
		//	"jsrs_cmr76_shot_close_soundshader",
			"jsrs_pkm_shot_close_soundshader",
			"jsrs_m2_shot_close_distance_soundshader",
			"jsrs_m2_shot_medium_distance_soundshader",
		//	"jsrs_pkm_shot_close_distance_soundshader",
		//	"jsrs_pkm_shot_medium_distance_soundshader",
			"jsrs_close_distance_pool_mmg_soundshader",
			"jsrs_far_distance_pool_mmg_soundshader",
			"jsrs_very_far_distance_pool_mmg_soundshader"
		};
		frequencyFactor = 1.0;
	};
	
	class jsrs_m107_shot_soundset;
	class twc_m107_shot_soundset: jsrs_m107_shot_soundset
	{
		soundshaders[]=
		{
			"jsrs_sniper_shake_soundshader",
			"jsrs_big_shell_inroom_soundshader",
			"jsrs_Hifi_sniper_0_soundshader",
			"jsrs_gm6_interior_shot_soundshader",
			"jsrs_gm6_interior_shot_2_soundshader",
			"twc_heavy_popper_close_soundshader",
			"jsrs_m107_shot_close_soundshader",
			"jsrs_m107_shot_close_distance_soundshader",
			"jsrs_m107_shot_medium_distance_soundshader",
			"jsrs_close_distance_pool_amr_soundshader",
			"jsrs_far_distance_pool_amr_soundshader",
			"jsrs_very_far_distance_pool_amr_soundshader"
		};
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
	class jsrs_spar_shot_soundset;
	class twc_L129_Shot_Soundset: jsrs_spar_shot_soundset
	{
	soundshaders[] = {
	"jsrs_fn3011_interior_shot_soundshader",
	"jsrs_fn3011_interior_shot_2_soundshader",
	"twc_l129_closure_soundshader",
	"twc_762_popper_close_soundshader",
	"twc_l129_shot_close_soundshader",
	"jsrs_fn3011_shot_close_distance_soundshader",
	"jsrs_fn3011_shot_medium_distance_soundshader",
	"jsrs_close_distance_pool_sniper_soundshader",
	"jsrs_far_distance_pool_sniper_soundshader",
	"jsrs_very_far_distance_pool_sniper_soundshader"};
	};
	
	
	class twc_L1A1_Shot_Soundset: twc_L129_Shot_Soundset
	{
		soundshaders[] = {
			"jsrs_fn3011_closure_soundshader",
			"jsrs_fn3011_interior_shot_soundshader",
			"jsrs_fn3011_interior_shot_2_soundshader",
			"twc_l1a1_closure_soundshader",
			"twc_heavy_popper_close_soundshader",
			"twc_fal_shot_close_soundshader",
			"jsrs_spar17_shot_close_distance_soundshader",
			"jsrs_spar17_shot_medium_distance_soundshader",
			"jsrs_close_distance_pool_sniper_soundshader",
			"jsrs_far_distance_pool_sniper_soundshader",
			"jsrs_very_far_distance_pool_sniper_soundshader"
		};
	};
	
	class twc_sr25_shot_soundset: twc_L129_Shot_Soundset
	{
	//	volumefactor= 1.6;
	//	frequencyFactor = 0.8;
	};
	
	class jsrs_fnfal_shot_silenced_soundset;
	class twc_sr25_SD_shot_soundset: jsrs_fnfal_shot_silenced_soundset
	{
		soundshaders[]=
		{
			"jsrs_rifle_shake_soundshader",
			"jsrs_rifle_shell_inroom_soundshader",
			"twc_l129_closure_soundshader",
			"twc_762_popper_close_soundshader",
			"jsrs_7_62mm_interior_silenced_soundshader",
			"jsrs_7_62mm_shot_silenced_soundshader",
			"twc_762mm_distance_silenced_soundshader"
		};
		
		volumefactor= 1.5;
	};
	
	class jsrs_m240_shot_soundset;
	class twc_l7_shot_soundset: jsrs_m240_shot_soundset
	{
		soundshaders[] = {"jsrs_m240_closure_soundshader",
			"jsrs_awm_interior_shot_soundshader",
			"jsrs_awm_interior_shot_2_soundshader",
			"twc_heavy_popper_close_soundshader",
			"twc_jsrs_GPMG_shot_close_soundshader",
			"jsrs_m107_shot_close_distance_soundshader",
			"jsrs_m107_shot_medium_distance_soundshader",
			"jsrs_close_distance_pool_hmg_soundshader",
			"jsrs_far_distance_pool_hmg_soundshader",
			"jsrs_very_far_distance_pool_hmg_soundshader"};
		volumefactor = 1;
		volumecurve = "jsrs_wpn_mg_vl_sin";
		sound3dprocessingtype = "jsrs_wpn_big_prc";
		spatial = 1;
		doppler = 0;
		loop = 0;
		distancefilter = "jsrs_wpn_mg_lp_dia";
		frequencyFactor = 0.9;
		
		occlusionfactor = 0.25;
		obstructionfactor = 0.25;
		frequencyrandomizer = 0.5;
	};
	
	class twc_l4_shot_soundset: twc_l7_shot_soundset
	{
		soundshaders[] = {"jsrs_ugl_closure_soundshader",
			"jsrs_spmg_interior_shot_soundshader",
			"jsrs_spmg_interior_shot_2_soundshader",
			"jsrs_spmg_shot_close_soundshader",
			"jsrs_spmg_shot_close_distance_soundshader",
			"jsrs_spmg_shot_medium_distance_soundshader",
			"jsrs_close_distance_pool_mmg_soundshader",
			"jsrs_far_distance_pool_mmg_soundshader",
			"jsrs_very_far_distance_pool_mmg_soundshader"};
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
	
	class jsrs_mk48_shot_soundset;
	class twc_dshkm_shot_soundset: jsrs_mk48_shot_soundset
	{
		soundshaders[]=
		{
			"jsrs_sniper_shake_soundshader",
			"jsrs_mg_shell_inroom_soundshader",
			"jsrs_mk200_interior_shot_soundshader",
			"jsrs_mk200_interior_shot_2_soundshader",
			"twc_hmg_closure_soundshader",
			"jsrs_mk48_shot_close_soundshader",
			"jsrs_mk200_shot_close_distance_soundshader",
			"jsrs_mk200_shot_medium_distance_soundshader",
			"jsrs_close_distance_pool_mg_soundshader",
			"jsrs_far_distance_pool_mg_soundshader",
			"jsrs_very_far_distance_pool_mg_soundshader"
		};
		frequencyrandomizer = 0.2;
		frequencyFactor = 0.85;
		volumefactor = 1.5;
	};
	
	class twc_L111_soundset: jsrs_m240_shot_soundset
	{
		soundshaders[] = {"jsrs_m107_shot_close_soundshader",
			"twc_l111_closure_soundshader",
			"jsrs_cannon20_shot_close_distance_soundshader",
			"jsrs_cannon20_shot_medium_distance_soundshader",
			"jsrs_close_distance_pool_autocannon_soundshader",
			"jsrs_far_distance_pool_autocannon_soundshader",
			"jsrs_very_far_distance_pool_autocannon_soundshader"};
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
	
	class jsrs_smg45_shot_soundset;
	class TWC_556_sd_Shot_SoundSet: jsrs_smg45_shot_soundset
	{
		soundshaders[]=
		{
			"jsrs_rifle_shake_soundshader",
			"jsrs_m4_closure_soundshader",
			"jsrs_rifle_shell_inroom_soundshader",
			"jsrs_smg45_interior_shot_soundshader",
			"jsrs_smg45_interior_shot_2_soundshader",
			"jsrs_7_62mm_dmr_shot_silenced_soundshader",
			"twc_ar15_closure_soundshader",
			"twc_556_popper_close_soundshader",
		//	"jsrs_smg45_shot_close_soundshader",
			"jsrs_smg45_shot_close_distance_soundshader",
			"jsrs_smg45_shot_medium_distance_soundshader",
			"jsrs_close_distance_pool_pistol2_soundshader",
			"jsrs_far_distance_pool_pistol2_soundshader",
			"jsrs_very_far_distance_pool_pistol2_soundshader"
		};
	};
	class jsrs_m590_shot_soundset;
	class TWC_L128_Shot_SoundSet: jsrs_m590_shot_soundset
	{
		soundshaders[]=
		{
			"jsrs_sniper_shake_soundshader",
			"twc_l85_closure_soundshader",
			"jsrs_type115arx_interior_shot_soundshader",
			"jsrs_type115arx_interior_shot_2_soundshader",
			"jsrs_m590_shot_close_soundshader",
			"jsrs_m590_shot_close_distance_soundshader",
			"jsrs_m590_shot_medium_distance_soundshader",
			"jsrs_close_distance_pool_amr_soundshader",
			"jsrs_far_distance_pool_amr_soundshader",
			"jsrs_very_far_distance_pool_amr_soundshader"
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

#include "weapons.hpp"
#include "vehicles.hpp"
	