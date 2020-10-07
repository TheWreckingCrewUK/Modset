
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
	class rhsusf_weap_glock17g4: hgun_p07_f
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_4five_shot_soundset",
					"jsrs_p07_shell_soundset",
					"jsrs_9mm_reflector_1",
					"jsrs_small_echo_soundset"
				};
			};
			class Silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"twc_glock_shot_SD_close_soundset",
					"jsrs_9mm_reflector_1",
					"jsrs_small_echo_soundset"
				};
			};
		};
	};
	
	class UK3CB_BAF_L105A1: hgun_p07_f
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_p227_shot_soundset",
					"jsrs_9mm_reflector_1",
					"jsrs_small_echo_soundset"
				};
			};
			class Silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"twc_glock_shot_SD_close_soundset",
					"jsrs_9mm_reflector_1",
					"jsrs_small_echo_soundset"
				};
			};
		};
	};
	
	class UK3CB_BAF_L105A2: UK3CB_BAF_L105A1
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_p227_shot_soundset",
					"jsrs_9mm_reflector_1",
					"jsrs_small_echo_soundset"
				};
			};
			class Silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"twc_glock_shot_SD_close_soundset",
					"jsrs_9mm_reflector_1",
					"jsrs_small_echo_soundset"
				};
			};
		};
	};
	
	
	class rhs_weap_m14ebrri;
	class rhs_weap_sr25: rhs_weap_m14ebrri
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"twc_sr25_shot_soundset",
					"twc_12x7mm_reverb_soundset",
					"jsrs_556mm_echo_soundset"
				};
			};
			class Silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"twc_sr25_SD_shot_soundset",
					"twc_12x7mm_reverb_soundset",
					"jsrs_556mm_echo_soundset"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"twc_sr25_shot_soundset",
					"twc_12x7mm_reverb_soundset",
					"jsrs_556mm_echo_soundset"
				};
			};
			class Silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"twc_sr25_SD_shot_soundset",
					"twc_12x7mm_reverb_soundset",
					"jsrs_556mm_echo_soundset"
				};
			};
		};
	};
	class CUP_hgun_MP7: Pistol_Base_F
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
				//	"jsrs_ad97_shot_soundset",
					"jsrs_p228_shot_soundset",
					"jsrs_p07_shell_soundset",
					"jsrs_5x56mm_reverb_soundset",
					"jsrs_small_echo_soundset"
				};
			};
			class Silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"twc_mp7_sd_shot_soundset",
					"jsrs_p07_shell_soundset",
					"jsrs_5x56mm_reverb_soundset",
					"jsrs_small_echo_soundset"
				};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"twc_mp7_shot_soundset",
					"jsrs_p07_shell_soundset",
					"jsrs_5x56mm_reverb_soundset",
					"jsrs_small_echo_soundset"
				};
			};
			class Silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"twc_mp7_sd_shot_soundset",
					"jsrs_p07_shell_soundset",
					"jsrs_5x56mm_reverb_soundset",
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
	class rhsusf_weap_MP7A1_base_f: SMG_02_base_F
	{
		class single: single
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_p228_shot_soundset",
					"jsrs_p07_shell_soundset",
					"jsrs_5x56mm_reverb_soundset",
					"jsrs_small_echo_soundset"
				};
			};
			class Silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"twc_mp7_sd_shot_soundset",
					"jsrs_p07_shell_soundset",
					"jsrs_5x56mm_reverb_soundset",
					"jsrs_small_echo_soundset"
				};
			};
		};
		class fullauto: fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"jsrs_p228_shot_soundset",
					"jsrs_p07_shell_soundset",
					"jsrs_5x56mm_reverb_soundset",
					"jsrs_small_echo_soundset"
				};
			};
			class Silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pistol_shake_soundset",
					"twc_mp7_sd_shot_soundset",
					"jsrs_p07_shell_soundset",
					"jsrs_5x56mm_reverb_soundset",
					"jsrs_small_echo_soundset"
				};
			};
		};
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
	
	class UK3CB_BAF_L119_Base: arifle_Mk20_plain_F {
		class FullAuto: FullAuto {
			class StandardSound {
				soundSetShot[] = {"twc_m16a4_shot_soundset","jsrs_556mm_echo_soundset", "jsrs_5x56mm_reverb_soundset"};
			};
			class SilencedSound {
				soundsetshot[]=
				{"twc_12x7mm_sd_reverb_soundset", "TWC_556_sd_Shot_SoundSet", "jsrs_556mm_echo_soundset"};
			};
		};
		class Fullauto_medium: FullAuto {
			class StandardSound {
				soundSetShot[] = {"twc_m16a4_shot_soundset","jsrs_556mm_echo_soundset", "jsrs_5x56mm_reverb_soundset"};
			};
			class SilencedSound {
				soundSetShot[] = {"twc_12x7mm_sd_reverb_soundset", "TWC_556_sd_Shot_SoundSet", "jsrs_556mm_echo_soundset"};
			};
		};
		class Single: Single {
			class StandardSound {
				soundSetShot[] = {"twc_m16a4_shot_soundset","jsrs_556mm_echo_soundset", "jsrs_5x56mm_reverb_soundset"};
			};
			class SilencedSound {
				soundSetShot[] = {"twc_12x7mm_sd_reverb_soundset", "TWC_556_sd_Shot_SoundSet", "jsrs_556mm_echo_soundset"};
			};
		};
		class Single_medium_optics1: Single {
			class StandardSound {
				soundSetShot[] = {"twc_m16a4_shot_soundset","jsrs_556mm_echo_soundset", "jsrs_5x56mm_reverb_soundset"};
			};
			class SilencedSound {
				soundSetShot[] = {"twc_12x7mm_sd_reverb_soundset", "TWC_556_sd_Shot_SoundSet", "jsrs_556mm_echo_soundset"};
			};
		};
		class Single_far_optics2: Single_medium_optics1 {
			class StandardSound {
				soundSetShot[] = {"twc_m16a4_shot_soundset","jsrs_556mm_echo_soundset", "jsrs_5x56mm_reverb_soundset"};
			};
			class SilencedSound {
				soundSetShot[] = {"twc_12x7mm_sd_reverb_soundset", "TWC_556_sd_Shot_SoundSet", "jsrs_556mm_echo_soundset"};
			};
		};
	};
	
	class UK3CB_BAF_L85A2: arifle_Mk20_plain_F
	{
		class Single:Single {
			class standardsound {
				soundSetShot[] = {"twc_L85_Shot_Soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reverb_soundset"};
			};
		};
		class FullAuto:FullAuto {
			class standardsound {
				soundSetShot[] = {"twc_L85_Shot_Soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reverb_soundset"};
			};			
		};
	};
	
	class UK3CB_BAF_L85A3: UK3CB_BAF_L85A2
	{
		class Single:Single {
			class standardsound {
				soundSetShot[] = {"twc_L85_Shot_Soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reverb_soundset"};
			};
		};
		class FullAuto:FullAuto {
			class standardsound {
				soundSetShot[] = {"twc_L85_Shot_Soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reverb_soundset"};
			};			
		};
	};
	
	class UK3CB_BAF_L86A2: UK3CB_BAF_L85A2
	{
		class Single:Single {
			class standardsound {
				soundSetShot[] = {"twc_L86_Shot_Soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reverb_soundset"};
			};
		};
		class FullAuto:FullAuto {
			class standardsound {
				soundSetShot[] = {"twc_L86_Shot_Soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reverb_soundset"};
			};			
		};
	};
	
	class UK3CB_BAF_L86A2_public: UK3CB_BAF_L86A2
	{
		class Single:Single {
			class standardsound {
				soundSetShot[] = {"twc_L86_Shot_Soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reverb_soundset"};
			};
		};
		class FullAuto:FullAuto {
			class standardsound {
				soundSetShot[] = {"twc_L86_Shot_Soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reverb_soundset"};
			};			
		};
	};
	
	
	class twc_BAF_L85A2_PUBLIC: UK3CB_BAF_L85A2
	{
		class Single:Single {
			class standardsound {
				soundSetShot[] = {"twc_L85_Shot_Soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reverb_soundset"};
			};
		};
		class FullAuto:FullAuto {
			class standardsound {
				soundSetShot[] = {"twc_L85_Shot_Soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reverb_soundset"};
			};			
		};
	};
	class Rifle_Base_F;
	
	
	class CUP_smg_MP5SD6: Rifle_Base_F
	{
		class FullAuto: mode_fullauto
		{
			class standardsound
			{
				soundSetShot[] = {"jsrs_ww2_smg_reverb_soundset", "twc_mp5_shot_soundset","jsrs_small_echo_soundset"};
			};
			class SilencedSound {
				soundsetshot[]=
				{"jsrs_ww2_smg_reverb_soundset", "twc_mp5_SD_shot_soundset", "jsrs_small_echo_soundset"};
			};
			
		};
		class Burst: Mode_Burst
		{
			class standardsound
			{
				soundSetShot[] = {"jsrs_ww2_smg_reverb_soundset", "twc_mp5_shot_soundset","jsrs_small_echo_soundset"};
			};
			class SilencedSound {
				soundsetshot[]=
				{"jsrs_ww2_smg_reverb_soundset", "twc_mp5_SD_shot_soundset", "jsrs_small_echo_soundset"};
			};
			
		};
		class Single: Mode_SemiAuto
		{
			class standardsound
			{
				soundSetShot[] = {"jsrs_ww2_smg_reverb_soundset", "twc_mp5_shot_soundset","jsrs_small_echo_soundset"};
			};
			class SilencedSound {
				soundsetshot[]=
				{"jsrs_ww2_smg_reverb_soundset", "twc_mp5_SD_shot_soundset", "jsrs_small_echo_soundset"};
			};
			
		};
	};
	
	class CUP_smg_MP5A5: CUP_smg_MP5SD6
	{
		class FullAuto: mode_fullauto
		{
			class standardsound
			{
				soundSetShot[] = {"jsrs_ww2_smg_reverb_soundset", "twc_mp5_shot_soundset","jsrs_small_echo_soundset"};
			};
			class SilencedSound {
				soundsetshot[]=
				{"jsrs_ww2_smg_reverb_soundset", "twc_mp5_SD_shot_soundset", "jsrs_small_echo_soundset"};
			};
			
		};
		class Burst: Mode_Burst
		{
			class standardsound
			{
				soundSetShot[] = {"jsrs_ww2_smg_reverb_soundset", "twc_mp5_shot_soundset","jsrs_small_echo_soundset"};
			};
			class SilencedSound {
				soundsetshot[]=
				{"jsrs_ww2_smg_reverb_soundset", "twc_mp5_SD_shot_soundset", "jsrs_small_echo_soundset"};
			};
			
		};
		class Single: Mode_SemiAuto
		{
			class standardsound
			{
				soundSetShot[] = {"jsrs_ww2_smg_reverb_soundset", "twc_mp5_shot_soundset","jsrs_small_echo_soundset"};
			};
			class SilencedSound {
				soundsetshot[]=
				{"jsrs_ww2_smg_reverb_soundset", "twc_mp5_SD_shot_soundset", "jsrs_small_echo_soundset"};
			};
			
		};
	};
	
	class CUP_smg_MP5A5_flashlight: CUP_smg_MP5A5
	{
		class FullAuto: mode_fullauto
		{
			class standardsound
			{
				soundSetShot[] = {"jsrs_ww2_smg_reverb_soundset", "twc_mp5_shot_soundset","jsrs_small_echo_soundset"};
			};
			class SilencedSound {
				soundsetshot[]=
				{"jsrs_ww2_smg_reverb_soundset", "twc_mp5_SD_shot_soundset", "jsrs_small_echo_soundset"};
			};
			
		};
		class Burst: Mode_Burst
		{
			class standardsound
			{
				soundSetShot[] = {"jsrs_ww2_smg_reverb_soundset", "twc_mp5_shot_soundset","jsrs_small_echo_soundset"};
			};
			class SilencedSound {
				soundsetshot[]=
				{"jsrs_ww2_smg_reverb_soundset", "twc_mp5_SD_shot_soundset", "jsrs_small_echo_soundset"};
			};
			
		};
		class Single: Mode_SemiAuto
		{
			class standardsound
			{
				soundSetShot[] = {"jsrs_ww2_smg_reverb_soundset", "twc_mp5_shot_soundset","jsrs_small_echo_soundset"};
			};
			class SilencedSound {
				soundsetshot[]=
				{"jsrs_ww2_smg_reverb_soundset", "twc_mp5_SD_shot_soundset", "jsrs_small_echo_soundset"};
			};
			
		};
	};
		

	class UK3CB_BAF_L1A1: Rifle_Base_F
	{
		class Single:Mode_SemiAuto {
			sounds[] = {"StandardSound","SilencedSound"};
			class standardsound {
				soundSetShot[] = {"twc_L1A1_Shot_Soundset","jsrs_556mm_echo_soundset"};
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
				soundSetShot[] = {"twc_m16a4_shot_soundset","jsrs_556mm_echo_soundset"};
			};
			class SilencedSound {
				soundsetshot[]=
				{"twc_12x7mm_sd_reverb_soundset", "TWC_556_sd_Shot_SoundSet", "jsrs_556mm_echo_soundset"};
			};
			
		};
		class Burst: Mode_Burst
		{
			class standardsound
			{
				soundSetShot[] = {"twc_m16a4_shot_soundset","jsrs_556mm_echo_soundset"};
			};
			class SilencedSound {
				soundsetshot[]=
				{"twc_12x7mm_sd_reverb_soundset", "TWC_556_sd_Shot_SoundSet", "jsrs_556mm_echo_soundset"};
			};
			
		};
		class Single: Mode_SemiAuto
		{
			class standardsound
			{
				soundSetShot[] = {"twc_m16a4_shot_soundset","jsrs_556mm_echo_soundset"};
			};
			class SilencedSound {
				soundsetshot[]=
				{"twc_12x7mm_sd_reverb_soundset", "TWC_556_sd_Shot_SoundSet", "jsrs_556mm_echo_soundset"};
			};
			
		};
	};
	
	class rhs_weap_m16a4: rhs_weap_m4_Base
	{
		
		class Burst: Burst
		{
			class standardsound
			{
				soundSetShot[] = {"twc_m16a4_shot_soundset","jsrs_556mm_echo_soundset", "jsrs_5x56mm_reverb_soundset"};
			};
			class SilencedSound {
				soundsetshot[]=
				{"twc_12x7mm_sd_reverb_soundset", "TWC_556_sd_Shot_SoundSet", "jsrs_556mm_echo_soundset"};
			};
			
		};
		class Single: Single
		{
			class standardsound
			{
				soundSetShot[] = {"twc_m16a4_shot_soundset","jsrs_556mm_echo_soundset", "jsrs_5x56mm_reverb_soundset"};
			};
			class SilencedSound {
				soundsetshot[]=
				{"twc_12x7mm_sd_reverb_soundset", "TWC_556_sd_Shot_SoundSet", "jsrs_556mm_echo_soundset"};
			};
			
		};
	};
	class CUP_arifle_HK416_CQB_Black;
	class twc_hk416_d_base_c: CUP_arifle_HK416_CQB_Black
	{
		
		class Burst:Mode_Burst 
		{
			class standardsound
			{
				soundSetShot[] = {"twc_m16a4_shot_soundset","jsrs_556mm_echo_soundset", "jsrs_5x56mm_reverb_soundset"};
			};
			class SilencedSound {
				soundsetshot[]=
				{"twc_12x7mm_sd_reverb_soundset", "TWC_556_sd_Shot_SoundSet", "jsrs_556mm_echo_soundset"};
			};
			
		};
		class Single:Mode_SemiAuto 
		{
			class standardsound
			{
				soundSetShot[] = {"twc_m16a4_shot_soundset","jsrs_556mm_echo_soundset", "jsrs_5x56mm_reverb_soundset"};
			};
			class SilencedSound {
				soundsetshot[]=
				{"twc_12x7mm_sd_reverb_soundset", "TWC_556_sd_Shot_SoundSet", "jsrs_556mm_echo_soundset"};
			};
			
		};
		class FullAuto:Mode_FullAuto 
		{
			class standardsound
			{
				soundSetShot[] = {"twc_m16a4_shot_soundset","jsrs_556mm_echo_soundset", "jsrs_5x56mm_reverb_soundset"};
			};
			class SilencedSound {
				soundsetshot[]=
				{"twc_12x7mm_sd_reverb_soundset", "TWC_556_sd_Shot_SoundSet", "jsrs_556mm_echo_soundset"};
			};
			
		};
	};
	class CUP_arifle_SBR_black;
	class rhs_weap_m4a1_blockII_twcbase: CUP_arifle_SBR_black
	{
		
		class Burst:Mode_Burst 
		{
			class standardsound
			{
				soundSetShot[] = {"twc_m16a4_shot_soundset","jsrs_556mm_echo_soundset", "jsrs_5x56mm_reverb_soundset"};
			};
			class SilencedSound {
				soundsetshot[]=
				{"twc_12x7mm_sd_reverb_soundset", "TWC_556_sd_Shot_SoundSet", "jsrs_556mm_echo_soundset"};
			};
			
		};
		class Single:Mode_SemiAuto 
		{
			class standardsound
			{
				soundSetShot[] = {"twc_m16a4_shot_soundset","jsrs_556mm_echo_soundset", "jsrs_5x56mm_reverb_soundset"};
			};
			class SilencedSound {
				soundsetshot[]=
				{"twc_12x7mm_sd_reverb_soundset", "TWC_556_sd_Shot_SoundSet", "jsrs_556mm_echo_soundset"};
			};
			
		};
		class FullAuto:Mode_FullAuto 
		{
			class standardsound
			{
				soundSetShot[] = {"twc_m16a4_shot_soundset","jsrs_556mm_echo_soundset", "jsrs_5x56mm_reverb_soundset"};
			};
			class SilencedSound {
				soundsetshot[]=
				{"twc_12x7mm_sd_reverb_soundset", "TWC_556_sd_Shot_SoundSet", "jsrs_556mm_echo_soundset"};
			};
			
		};
	};
	class rhs_weap_mk18_twcbase: CUP_arifle_SBR_black
	{
		
		class Burst:Mode_Burst 
		{
			class standardsound
			{
				soundSetShot[] = {"twc_m16a4_shot_soundset","jsrs_556mm_echo_soundset", "jsrs_5x56mm_reverb_soundset"};
			};
			class SilencedSound {
				soundsetshot[]=
				{"twc_12x7mm_sd_reverb_soundset", "TWC_556_sd_Shot_SoundSet", "jsrs_556mm_echo_soundset"};
			};
			
		};
		class Single:Mode_SemiAuto 
		{
			class standardsound
			{
				soundSetShot[] = {"twc_m16a4_shot_soundset","jsrs_556mm_echo_soundset", "jsrs_5x56mm_reverb_soundset"};
			};
			class SilencedSound {
				soundsetshot[]=
				{"twc_12x7mm_sd_reverb_soundset", "TWC_556_sd_Shot_SoundSet", "jsrs_556mm_echo_soundset"};
			};
			
		};
		class FullAuto:Mode_FullAuto 
		{
			class standardsound
			{
				soundSetShot[] = {"twc_m16a4_shot_soundset","jsrs_556mm_echo_soundset", "jsrs_5x56mm_reverb_soundset"};
			};
			class SilencedSound {
				soundsetshot[]=
				{"twc_12x7mm_sd_reverb_soundset", "TWC_556_sd_Shot_SoundSet", "jsrs_556mm_echo_soundset"};
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
				soundSetShot[] = {"twc_12x7mm_sd_reverb_soundset","twc_ak74_shot_soundset","jsrs_556mm_echo_soundset"};
			};
			
			class silencedsound
			{
				soundSetShot[] = {"twc_12x7mm_sd_reverb_soundset","twc_ak74_sd_shot_soundset","jsrs_556mm_echo_soundset"};
			};
			
		};
		class Single_AI: Single_AI
		{
			class standardsound
			{
				soundSetShot[] = {"twc_12x7mm_sd_reverb_soundset","twc_ak74_shot_soundset","jsrs_556mm_echo_soundset"};
			};
			
			class silencedsound
			{
				soundSetShot[] = {"twc_12x7mm_sd_reverb_soundset","twc_ak74_sd_shot_soundset","jsrs_556mm_echo_soundset"};
			};
			
		};
		class FullAuto: FullAuto
		{
			class standardsound
			{
				soundSetShot[] = {"twc_12x7mm_sd_reverb_soundset","twc_ak74_shot_soundset","jsrs_556mm_echo_soundset"};
			};
			
			class silencedsound
			{
				soundSetShot[] = {"twc_12x7mm_sd_reverb_soundset","twc_ak74_sd_shot_soundset","jsrs_556mm_echo_soundset"};
			};
			
		};
		class single_medium_optics1: single_medium_optics1
		{
			class standardsound
			{
				soundSetShot[] = {"twc_12x7mm_sd_reverb_soundset","twc_ak74_shot_soundset","jsrs_556mm_echo_soundset"};
			};
			
			class silencedsound
			{
				soundSetShot[] = {"twc_12x7mm_sd_reverb_soundset","twc_ak74_sd_shot_soundset","jsrs_556mm_echo_soundset"};
			};
			
		};
		class single_far_optics2: single_far_optics2
		{
			class standardsound
			{
				soundSetShot[] = {"twc_12x7mm_sd_reverb_soundset","twc_ak74_shot_soundset","jsrs_556mm_echo_soundset"};
			};
			
			class silencedsound
			{
				soundSetShot[] = {"twc_12x7mm_sd_reverb_soundset","twc_ak74_sd_shot_soundset","jsrs_556mm_echo_soundset"};
			};
			
		};
		class fullauto_medium: fullauto_medium
		{
			class standardsound
			{
				soundSetShot[] = {"twc_12x7mm_sd_reverb_soundset","twc_ak74_shot_soundset","jsrs_556mm_echo_soundset"};
			};
			
			class silencedsound
			{
				soundSetShot[] = {"twc_12x7mm_sd_reverb_soundset","twc_ak74_sd_shot_soundset","jsrs_556mm_echo_soundset"};
			};
			
		};
	};
	
	class rhs_weap_ak74m_2mag: rhs_weap_ak74m
	{};
	class CUP_arifle_AK102_top_rail;
	class twc_ak74_pol_2_base: CUP_arifle_AK102_top_rail
	{
		class Single;
		class FullAuto;
		class Burst;
	};
	
	class twc_ak74_pol_2: twc_ak74_pol_2_base
	{
		
		class Single:Mode_SemiAuto {
			class standardsound {
				soundSetShot[] = {
					"jsrs_rifle_shake_soundset",
					"twc_beryl_Shot_Soundset",
					"twc_12x7mm_sd_reverb_soundset",
					"jsrs_556mm_echo_soundset",
					"jsrs_556mm_echo_soundset"};
			};
			class silencedsound {
				soundSetShot[] = {
					"jsrs_rifle_shake_soundset",
					"twc_ak74_sd_shot_soundset",
					"twc_12x7mm_sd_reverb_soundset",
					"jsrs_556mm_echo_soundset",
					"jsrs_556mm_echo_soundset"};
			};
		};
		class FullAuto:Mode_FullAuto {
			class standardsound {
				soundSetShot[] = {
					"jsrs_rifle_shake_soundset",
					"twc_beryl_Shot_Soundset",
					"twc_12x7mm_sd_reverb_soundset",
					"jsrs_556mm_echo_soundset",
					"jsrs_556mm_echo_soundset"};
			};	
			class silencedsound {
				soundSetShot[] = {
					"jsrs_rifle_shake_soundset",
					"twc_ak74_sd_shot_soundset",
					"twc_12x7mm_sd_reverb_soundset",
					"jsrs_556mm_echo_soundset",
					"jsrs_556mm_echo_soundset"};
			};			
		};
	};
	
	class rhs_weap_ak74mr: rhs_weap_ak74m
	{};
	
	
	class CUP_arifle_AK108_GL_top_rail;
	
	class twc_ak74_gp25_pol_base: CUP_arifle_AK108_GL_top_rail
	{
		class Single;
		class FullAuto;
		class Burst;
	};
	class twc_ak74_gp25_pol: twc_ak74_gp25_pol_base
	{
		
		class Single:Mode_SemiAuto {
			class standardsound {
				soundSetShot[] = {
					"jsrs_rifle_shake_soundset",
					"twc_beryl_Shot_Soundset",
					"twc_12x7mm_sd_reverb_soundset",
					"jsrs_556mm_echo_soundset",
					"jsrs_556mm_echo_soundset"};
			};
			class silencedsound {
				soundSetShot[] = {
					"jsrs_rifle_shake_soundset",
					"twc_ak74_sd_shot_soundset",
					"twc_12x7mm_sd_reverb_soundset",
					"jsrs_556mm_echo_soundset",
					"jsrs_556mm_echo_soundset"};
			};
		};
		class FullAuto:Mode_FullAuto {
			class standardsound {
				soundSetShot[] = {
					"jsrs_rifle_shake_soundset",
					"twc_beryl_Shot_Soundset",
					"twc_12x7mm_sd_reverb_soundset",
					"jsrs_556mm_echo_soundset",
					"jsrs_556mm_echo_soundset"};
			};	
			class silencedsound {
				soundSetShot[] = {
					"jsrs_rifle_shake_soundset",
					"twc_ak74_sd_shot_soundset",
					"twc_12x7mm_sd_reverb_soundset",
					"jsrs_556mm_echo_soundset",
					"jsrs_556mm_echo_soundset"};
			};			
		};
	};
	
	//RHS has crazy firemodes and CUP has crazy inheritance, take your pic
	class CUP_arifle_AK_Base: Rifle_Base_F
	{
		class Single;
		class Burst;
		class FullAuto;
	};
	class CUP_arifle_AK102: CUP_arifle_AK_Base
	{};
	class CUP_arifle_AK102_railed: CUP_arifle_AK102
	{
		class Single;
		class Burst;
		class FullAuto;
	};
	
	class twc_ak74_pol_base: CUP_arifle_AK102_railed
	{
		
		class Single:Mode_SemiAuto {
			class standardsound {
				soundSetShot[] = {
					"jsrs_rifle_shake_soundset",
					"twc_beryl_Shot_Soundset",
					"twc_12x7mm_sd_reverb_soundset",
					"jsrs_556mm_echo_soundset",
					"jsrs_556mm_echo_soundset"};
			};
			class silencedsound {
				soundSetShot[] = {
					"jsrs_rifle_shake_soundset",
					"twc_ak74_sd_shot_soundset",
					"twc_12x7mm_sd_reverb_soundset",
					"jsrs_556mm_echo_soundset",
					"jsrs_556mm_echo_soundset"};
			};
		};
		class FullAuto:Mode_FullAuto {
			class standardsound {
				soundSetShot[] = {
					"jsrs_rifle_shake_soundset",
					"twc_beryl_Shot_Soundset",
					"twc_12x7mm_sd_reverb_soundset",
					"jsrs_556mm_echo_soundset",
					"jsrs_556mm_echo_soundset"};
			};	
			class silencedsound {
				soundSetShot[] = {
					"jsrs_rifle_shake_soundset",
					"twc_ak74_sd_shot_soundset",
					"twc_12x7mm_sd_reverb_soundset",
					"jsrs_556mm_echo_soundset",
					"jsrs_556mm_echo_soundset"};
			};			
		};
	};
	
	
	
	class CUP_arifle_AKM: CUP_arifle_AK_Base
	{
		
		class Single:Single {
			class standardsound {
				soundSetShot[] = {
					"jsrs_rifle_shake_soundset",
					"twc_akm_Shot_Soundset",
					"jsrs_akm_shell_soundset",
					"jsrs_5x56mm_reverb_soundset",
					"jsrs_762mm_echo_soundset"};
			};
			class silencedsound {
				soundSetShot[] = {
					"jsrs_rifle_shake_soundset",
					"twc_akm_SD_Shot_Soundset",
					"jsrs_akm_shell_soundset",
					"jsrs_5x56mm_reverb_soundset",
					"jsrs_762mm_echo_soundset"};
			};
		};
		class FullAuto:FullAuto {
			class standardsound {
				soundSetShot[] = {
					"jsrs_rifle_shake_soundset",
					"twc_akm_Shot_Soundset",
					"jsrs_akm_shell_soundset",
					"jsrs_5x56mm_reverb_soundset",
					"jsrs_762mm_echo_soundset"};
			};		
			class silencedsound {
				soundSetShot[] = {
					"jsrs_rifle_shake_soundset",
					"twc_akm_SD_Shot_Soundset",
					"jsrs_akm_shell_soundset",
					"jsrs_5x56mm_reverb_soundset",
					"jsrs_762mm_echo_soundset"};
			};	
		};
	};
	class CUP_arifle_TYPE_56_2: CUP_arifle_AKM
	{
		
		class Single:Single {
			class standardsound {
				soundSetShot[] = {
					"jsrs_rifle_shake_soundset",
					"twc_akm_Shot_Soundset",
					"jsrs_akm_shell_soundset",
					"jsrs_5x56mm_reverb_soundset",
					"jsrs_762mm_echo_soundset"};
			};
			class silencedsound {
				soundSetShot[] = {
					"jsrs_rifle_shake_soundset",
					"twc_akm_SD_Shot_Soundset",
					"jsrs_akm_shell_soundset",
					"jsrs_5x56mm_reverb_soundset",
					"jsrs_762mm_echo_soundset"};
			};
		};
		class FullAuto:FullAuto {
			class standardsound {
				soundSetShot[] = {
					"jsrs_rifle_shake_soundset",
					"twc_akm_Shot_Soundset",
					"jsrs_akm_shell_soundset",
					"jsrs_5x56mm_reverb_soundset",
					"jsrs_762mm_echo_soundset"};
			};	
			class silencedsound {
				soundSetShot[] = {
					"jsrs_rifle_shake_soundset",
					"twc_akm_SD_Shot_Soundset",
					"jsrs_akm_shell_soundset",
					"jsrs_5x56mm_reverb_soundset",
					"jsrs_762mm_echo_soundset"};
			};		
		};
	};
	
	class CUP_arifle_AKS_Base: CUP_arifle_AK_Base
	{
		
		class Single:Single {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_shot_soundset","jsrs_556mm_echo_soundset"};
			};
			class silencedsound {
				soundSetShot[] = {
					"jsrs_rifle_shake_soundset",
					"twc_akm_SD_Shot_Soundset",
					"jsrs_akm_shell_soundset",
					"jsrs_5x56mm_reverb_soundset",
					"jsrs_762mm_echo_soundset"};
			};	
		};
		class FullAuto:FullAuto {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_shot_soundset","jsrs_556mm_echo_soundset"};
			};	
			class silencedsound {
				soundSetShot[] = {
					"jsrs_rifle_shake_soundset",
					"twc_akm_SD_Shot_Soundset",
					"jsrs_akm_shell_soundset",
					"jsrs_5x56mm_reverb_soundset",
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
					"twc_akm_Shot_Soundset",
					"jsrs_akm_shell_soundset",
					"jsrs_5x56mm_reverb_soundset",
					"jsrs_762mm_echo_soundset"};
			};
			class silencedsound {
				soundSetShot[] = {
					"jsrs_rifle_shake_soundset",
					"twc_akm_SD_Shot_Soundset",
					"jsrs_akm_shell_soundset",
					"jsrs_5x56mm_reverb_soundset",
					"jsrs_762mm_echo_soundset"};
			};
		};
		class FullAuto:FullAuto {
			class standardsound {
				soundSetShot[] = {
					"jsrs_rifle_shake_soundset",
					"twc_akm_Shot_Soundset",
					"jsrs_akm_shell_soundset",
					"jsrs_5x56mm_reverb_soundset",
					"jsrs_762mm_echo_soundset"};
			};	
			class silencedsound {
				soundSetShot[] = {
					"jsrs_rifle_shake_soundset",
					"twc_akm_SD_Shot_Soundset",
					"jsrs_akm_shell_soundset",
					"jsrs_5x56mm_reverb_soundset",
					"jsrs_762mm_echo_soundset"};
			};		
		};
	};
	
	class CUP_arifle_AK47_GL: CUP_arifle_AK47
	{
		
		class Single:Single {
			class standardsound {
				soundSetShot[] = {
					"jsrs_rifle_shake_soundset",
					"twc_akm_Shot_Soundset",
					"jsrs_akm_shell_soundset",
					"jsrs_5x56mm_reverb_soundset",
					"jsrs_762mm_echo_soundset"};
			};
			class silencedsound {
				soundSetShot[] = {
					"jsrs_rifle_shake_soundset",
					"twc_akm_SD_Shot_Soundset",
					"jsrs_akm_shell_soundset",
					"jsrs_5x56mm_reverb_soundset",
					"jsrs_762mm_echo_soundset"};
			};
		};
		class FullAuto:FullAuto {
			class standardsound {
				soundSetShot[] = {
					"jsrs_rifle_shake_soundset",
					"twc_akm_Shot_Soundset",
					"jsrs_akm_shell_soundset",
					"jsrs_5x56mm_reverb_soundset",
					"jsrs_762mm_echo_soundset"};
			};	
			class silencedsound {
				soundSetShot[] = {
					"jsrs_rifle_shake_soundset",
					"twc_akm_SD_Shot_Soundset",
					"jsrs_akm_shell_soundset",
					"jsrs_5x56mm_reverb_soundset",
					"jsrs_762mm_echo_soundset"};
			};		
		};
	};
	
	class CUP_arifle_AK47_GL_Early: CUP_arifle_AK47_GL
	{
		
		class Single:Single {
			class standardsound {
				soundSetShot[] = {
					"jsrs_rifle_shake_soundset",
					"twc_akm_Shot_Soundset",
					"jsrs_akm_shell_soundset",
					"jsrs_5x56mm_reverb_soundset",
					"jsrs_762mm_echo_soundset"};
			};
			class silencedsound {
				soundSetShot[] = {
					"jsrs_rifle_shake_soundset",
					"twc_akm_SD_Shot_Soundset",
					"jsrs_akm_shell_soundset",
					"jsrs_5x56mm_reverb_soundset",
					"jsrs_762mm_echo_soundset"};
			};
		};
		class FullAuto:FullAuto {
			class standardsound {
				soundSetShot[] = {
					"jsrs_rifle_shake_soundset",
					"twc_akm_Shot_Soundset",
					"jsrs_akm_shell_soundset",
					"jsrs_5x56mm_reverb_soundset",
					"jsrs_762mm_echo_soundset"};
			};	
			class silencedsound {
				soundSetShot[] = {
					"jsrs_rifle_shake_soundset",
					"twc_akm_SD_Shot_Soundset",
					"jsrs_akm_shell_soundset",
					"jsrs_5x56mm_reverb_soundset",
					"jsrs_762mm_echo_soundset"};
			};		
		};
	};
	
	class CUP_arifle_AK47_Early: CUP_arifle_AK47
	{
		
		class Single:Single {
			class standardsound {
				soundSetShot[] = {
					"jsrs_rifle_shake_soundset",
					"twc_akm_Shot_Soundset",
					"jsrs_akm_shell_soundset",
					"jsrs_5x56mm_reverb_soundset",
					"jsrs_762mm_echo_soundset"};
			};
			class silencedsound {
				soundSetShot[] = {
					"jsrs_rifle_shake_soundset",
					"twc_akm_SD_Shot_Soundset",
					"jsrs_akm_shell_soundset",
					"jsrs_5x56mm_reverb_soundset",
					"jsrs_762mm_echo_soundset"};
			};
		};
		class FullAuto:FullAuto {
			class standardsound {
				soundSetShot[] = {
					"jsrs_rifle_shake_soundset",
					"twc_akm_Shot_Soundset",
					"jsrs_akm_shell_soundset",
					"jsrs_5x56mm_reverb_soundset",
					"jsrs_762mm_echo_soundset"};
			};	
			class silencedsound {
				soundSetShot[] = {
					"jsrs_rifle_shake_soundset",
					"twc_akm_SD_Shot_Soundset",
					"jsrs_akm_shell_soundset",
					"jsrs_5x56mm_reverb_soundset",
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
					"twc_akm_Shot_Soundset",
					"jsrs_akm_shell_soundset",
					"jsrs_5x56mm_reverb_soundset",
					"jsrs_762mm_echo_soundset"};
			};
			class silencedsound {
				soundSetShot[] = {
					"jsrs_rifle_shake_soundset",
					"twc_akm_SD_Shot_Soundset",
					"jsrs_akm_shell_soundset",
					"jsrs_5x56mm_reverb_soundset",
					"jsrs_762mm_echo_soundset"};
			};
		};
		class FullAuto:FullAuto {
			class standardsound {
				soundSetShot[] = {
					"jsrs_rifle_shake_soundset",
					"twc_akm_Shot_Soundset",
					"jsrs_akm_shell_soundset",
					"jsrs_5x56mm_reverb_soundset",
					"jsrs_762mm_echo_soundset"};
			};	
			class silencedsound {
				soundSetShot[] = {
					"jsrs_rifle_shake_soundset",
					"twc_akm_SD_Shot_Soundset",
					"jsrs_akm_shell_soundset",
					"jsrs_5x56mm_reverb_soundset",
					"jsrs_762mm_echo_soundset"};
			};		
		};
	};
	
	
	class CUP_arifle_AK74: CUP_arifle_AK_Base
	{
		
		class Single:Single {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_shot_soundset","jsrs_556mm_echo_soundset"};
			};
			class silencedsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_SD_shot_soundset","jsrs_556mm_echo_soundset"};
			};
		};
		class FullAuto:FullAuto {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_shot_soundset","jsrs_556mm_echo_soundset"};
			};	
			class silencedsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_SD_shot_soundset","jsrs_556mm_echo_soundset"};
			};		
		};
		class Burst:mode_burst {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_shot_soundset","jsrs_556mm_echo_soundset"};
			};		
			class silencedsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_SD_shot_soundset","jsrs_556mm_echo_soundset"};
			};	
		};
	};
	
	class CUP_arifle_AK74_GL: CUP_arifle_AK_Base
	{
		
		class Single:Single {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_shot_soundset","jsrs_556mm_echo_soundset"};
			};
			class silencedsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_SD_shot_soundset","jsrs_556mm_echo_soundset"};
			};
		};
		class FullAuto:FullAuto {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_shot_soundset","jsrs_556mm_echo_soundset"};
			};		
			class silencedsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_SD_shot_soundset","jsrs_556mm_echo_soundset"};
			};	
		};
		class Burst:mode_burst {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_shot_soundset","jsrs_556mm_echo_soundset"};
			};		
			class silencedsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_SD_shot_soundset","jsrs_556mm_echo_soundset"};
			};	
		};
	};
	
	class CUP_arifle_AK74M: CUP_arifle_AK_Base
	{
		
		class Single:Single {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_shot_soundset","jsrs_556mm_echo_soundset"};
			};
			class silencedsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_SD_shot_soundset","jsrs_556mm_echo_soundset"};
			};
		};
		class FullAuto:FullAuto {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_shot_soundset","jsrs_556mm_echo_soundset"};
			};		
			class silencedsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_SD_shot_soundset","jsrs_556mm_echo_soundset"};
			};	
		};
		class Burst:mode_burst {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_shot_soundset","jsrs_556mm_echo_soundset"};
			};			
			class silencedsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_SD_shot_soundset","jsrs_556mm_echo_soundset"};
			};
		};
	};
	
	class CUP_arifle_AK74M_GL: CUP_arifle_AK_Base
	{
		
		class Single:Single {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_shot_soundset","jsrs_556mm_echo_soundset"};
			};
			class silencedsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_SD_shot_soundset","jsrs_556mm_echo_soundset"};
			};
		};
		class FullAuto:FullAuto {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_shot_soundset","jsrs_556mm_echo_soundset"};
			};		
			class silencedsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_SD_shot_soundset","jsrs_556mm_echo_soundset"};
			};	
		};
		class Burst:mode_burst {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_shot_soundset","jsrs_556mm_echo_soundset"};
			};		
			class silencedsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_SD_shot_soundset","jsrs_556mm_echo_soundset"};
			};	
		};
	};
	
	class CUP_arifle_AKS74: CUP_arifle_AKS_Base
	{
		
		class Single:Single {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_shot_soundset","jsrs_556mm_echo_soundset"};
			};
			class silencedsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_SD_shot_soundset","jsrs_556mm_echo_soundset"};
			};
		};
		class FullAuto:FullAuto {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_shot_soundset","jsrs_556mm_echo_soundset"};
			};		
			class silencedsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_SD_shot_soundset","jsrs_556mm_echo_soundset"};
			};	
		};
		class Burst:mode_burst {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_shot_soundset","jsrs_556mm_echo_soundset"};
			};		
			class silencedsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_SD_shot_soundset","jsrs_556mm_echo_soundset"};
			};	
		};
	};
	
	class CUP_arifle_AKS74U: CUP_arifle_AKS_Base
	{
		
		class Single:Single {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_shot_soundset","jsrs_556mm_echo_soundset"};
			};
			class silencedsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_SD_shot_soundset","jsrs_556mm_echo_soundset"};
			};
		};
		class FullAuto:FullAuto {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_shot_soundset","jsrs_556mm_echo_soundset"};
			};		
			class silencedsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_SD_shot_soundset","jsrs_556mm_echo_soundset"};
			};	
		};
		class Burst:mode_burst {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_shot_soundset","jsrs_556mm_echo_soundset"};
			};		
			class silencedsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_SD_shot_soundset","jsrs_556mm_echo_soundset"};
			};	
		};
	};
	
	class CUP_arifle_AK107_Base: CUP_arifle_AK_Base
	{
		
		class Single:Single {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_shot_soundset","jsrs_556mm_echo_soundset"};
			};
			class silencedsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_SD_shot_soundset","jsrs_556mm_echo_soundset"};
			};
		};
		class FullAuto:FullAuto {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_shot_soundset","jsrs_556mm_echo_soundset"};
			};		
			class silencedsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_SD_shot_soundset","jsrs_556mm_echo_soundset"};
			};	
		};
		class Burst:mode_burst {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_shot_soundset","jsrs_556mm_echo_soundset"};
			};			
			class silencedsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_SD_shot_soundset","jsrs_556mm_echo_soundset"};
			};
		};
	};
	
	class CUP_arifle_AK107: CUP_arifle_AK107_Base
	{
		
		class Single:Single {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_shot_soundset","jsrs_556mm_echo_soundset"};
			};
			class silencedsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_SD_shot_soundset","jsrs_556mm_echo_soundset"};
			};
		};
		class FullAuto:FullAuto {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_shot_soundset","jsrs_556mm_echo_soundset"};
			};		
			class silencedsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_SD_shot_soundset","jsrs_556mm_echo_soundset"};
			};	
		};
		class Burst:mode_burst {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_shot_soundset","jsrs_556mm_echo_soundset"};
			};		
			class silencedsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_SD_shot_soundset","jsrs_556mm_echo_soundset"};
			};	
		};
	};
	
	class CUP_arifle_AK107_GL: CUP_arifle_AK107_Base
	{
		
		class Single:Single {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_shot_soundset","jsrs_556mm_echo_soundset"};
			};
			class silencedsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_SD_shot_soundset","jsrs_556mm_echo_soundset"};
			};
		};
		class FullAuto:FullAuto {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_shot_soundset","jsrs_556mm_echo_soundset"};
			};			
			class silencedsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_SD_shot_soundset","jsrs_556mm_echo_soundset"};
			};
		};
		class Burst:mode_burst {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_shot_soundset","jsrs_556mm_echo_soundset"};
			};			
			class silencedsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_SD_shot_soundset","jsrs_556mm_echo_soundset"};
			};
		};
	};
	
	class CUP_arifle_RPK74: CUP_arifle_AK74
	{
		
		class Single:Single {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_rpk74_shot_soundset","jsrs_556mm_echo_soundset"};
			};
			class silencedsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_SD_shot_soundset","jsrs_556mm_echo_soundset"};
			};
		};
		class FullAuto:FullAuto {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_rpk74_shot_soundset","jsrs_556mm_echo_soundset"};
			};		
			class silencedsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_SD_shot_soundset","jsrs_556mm_echo_soundset"};
			};	
		};
		class Burst:mode_burst {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_rpk74_shot_soundset","jsrs_556mm_echo_soundset"};
			};			
			class silencedsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_SD_shot_soundset","jsrs_556mm_echo_soundset"};
			};
		};
		class Manual: mode_fullauto {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_rpk74_shot_soundset","jsrs_556mm_echo_soundset"};
			};			
			class silencedsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_SD_shot_soundset","jsrs_556mm_echo_soundset"};
			};
		};
		class close: Manual {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_rpk74_shot_soundset","jsrs_556mm_echo_soundset"};
			};			
			class silencedsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_SD_shot_soundset","jsrs_556mm_echo_soundset"};
			};
		};
		class far: close {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_rpk74_shot_soundset","jsrs_556mm_echo_soundset"};
			};			
			class silencedsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_SD_shot_soundset","jsrs_556mm_echo_soundset"};
			};
		};
		class medium: close {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_rpk74_shot_soundset","jsrs_556mm_echo_soundset"};
			};		
			class silencedsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_SD_shot_soundset","jsrs_556mm_echo_soundset"};
			};	
		};
		class short: close {
			class standardsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_rpk74_shot_soundset","jsrs_556mm_echo_soundset"};
			};		
			class silencedsound {
				soundSetShot[] = {"jsrs_akm_shell_soundset","twc_ak74_SD_shot_soundset","jsrs_556mm_echo_soundset"};
			};	
		};
	};
	
	class CUP_arifle_M16_Base: Rifle_Base_F
	{
		
		class Single:Mode_SemiAuto {
			class standardsound {
				soundSetShot[] = {"twc_m16a4_shot_soundset","jsrs_556mm_echo_soundset", "jsrs_5x56mm_reverb_soundset"};
			};
			class SilencedSound {
				soundsetshot[]=
				{"twc_12x7mm_sd_reverb_soundset", "TWC_556_sd_Shot_SoundSet", "jsrs_556mm_echo_soundset"};
			};
		};
		class Burst:Mode_Burst {
			class standardsound {
				soundSetShot[] = {"twc_m16a4_shot_soundset","jsrs_556mm_echo_soundset", "jsrs_5x56mm_reverb_soundset"};
			};	
			class SilencedSound {
				soundsetshot[]=
				{"twc_12x7mm_sd_reverb_soundset", "TWC_556_sd_Shot_SoundSet", "jsrs_556mm_echo_soundset"};
			};		
		};
	};
	
	class CUP_arifle_M4_Base: CUP_arifle_M16_Base
	{
		
		class Single:Mode_SemiAuto {
			class standardsound {
				soundSetShot[] = {"twc_m16a4_shot_soundset","jsrs_556mm_echo_soundset", "jsrs_5x56mm_reverb_soundset"};
			};
			class SilencedSound {
				soundsetshot[]=
				{"twc_12x7mm_sd_reverb_soundset", "TWC_556_sd_Shot_SoundSet", "jsrs_556mm_echo_soundset"};
			};
		};
		class Burst:Mode_Burst {
			class standardsound {
				soundSetShot[] = {"twc_m16a4_shot_soundset","jsrs_556mm_echo_soundset", "jsrs_5x56mm_reverb_soundset"};
			};			
		};
		class FullAuto:Mode_FullAuto {
			class standardsound {
				soundSetShot[] = {"twc_m16a4_shot_soundset","jsrs_556mm_echo_soundset", "jsrs_5x56mm_reverb_soundset"};
			};	
			class SilencedSound {
				soundsetshot[]=
				{"twc_12x7mm_sd_reverb_soundset", "TWC_556_sd_Shot_SoundSet", "jsrs_556mm_echo_soundset"};
			};		
		};
	};
	
	class twc_L119A2_base;
	class twc_L119A2_10: twc_L119A2_base
	{
		
		class Single:Mode_SemiAuto {
			class standardsound {
				soundSetShot[] = {"twc_m16a4_shot_soundset","jsrs_556mm_echo_soundset"};
			};
			class SilencedSound {
				soundsetshot[]=
				{"twc_12x7mm_sd_reverb_soundset", "TWC_556_sd_Shot_SoundSet", "jsrs_556mm_echo_soundset"};
			};
		};
		class Burst:Mode_Burst {
			class standardsound {
				soundSetShot[] = {"twc_m16a4_shot_soundset","jsrs_556mm_echo_soundset"};
			};			
		};
		class FullAuto:Mode_FullAuto {
			class standardsound {
				soundSetShot[] = {"twc_m16a4_shot_soundset","jsrs_556mm_echo_soundset"};
			};	
			class SilencedSound {
				soundsetshot[]=
				{"twc_12x7mm_sd_reverb_soundset", "TWC_556_sd_Shot_SoundSet", "jsrs_556mm_echo_soundset"};
			};		
		};
	};
	class CUP_arifle_HK416_145_Base: Rifle_Base_F
	{
		
		class Single:Mode_SemiAuto {
			class standardsound {
				soundSetShot[] = {"twc_m16a4_shot_soundset","jsrs_556mm_echo_soundset", "jsrs_5x56mm_reverb_soundset"};
			};
			class SilencedSound {
				soundsetshot[]=
				{"twc_12x7mm_sd_reverb_soundset", "TWC_556_sd_Shot_SoundSet", "jsrs_556mm_echo_soundset"};
			};
		};
		class Burst:Mode_Burst {
			class standardsound {
				soundSetShot[] = {"twc_m16a4_shot_soundset","jsrs_556mm_echo_soundset", "jsrs_5x56mm_reverb_soundset"};
			};			
		};
		class FullAuto:Mode_FullAuto {
			class standardsound {
				soundSetShot[] = {"twc_m16a4_shot_soundset","jsrs_556mm_echo_soundset", "jsrs_5x56mm_reverb_soundset"};
			};	
			class SilencedSound {
				soundsetshot[]=
				{"twc_12x7mm_sd_reverb_soundset", "TWC_556_sd_Shot_SoundSet", "jsrs_556mm_echo_soundset"};
			};		
		};
	};
	
	class CUP_arifle_HK416_11_Base: CUP_arifle_HK416_145_Base
	{
		
		class Single:Mode_SemiAuto {
			sounds[] = {"StandardSound", "SilencedSound"};
			class standardsound {
				soundSetShot[] = {"twc_m16a4_shot_soundset","jsrs_556mm_echo_soundset", "jsrs_5x56mm_reverb_soundset"};
			};
			class SilencedSound {
				soundsetshot[]=
				{"twc_12x7mm_sd_reverb_soundset", "TWC_556_sd_Shot_SoundSet", "jsrs_556mm_echo_soundset"};
			};
		};
		class Burst:Mode_Burst {
			sounds[] = {"StandardSound", "SilencedSound"};
			class standardsound {
				soundSetShot[] = {"twc_m16a4_shot_soundset","jsrs_556mm_echo_soundset", "jsrs_5x56mm_reverb_soundset"};
			};		
			class SilencedSound {
				soundsetshot[]=
				{"twc_12x7mm_sd_reverb_soundset", "TWC_556_sd_Shot_SoundSet", "jsrs_556mm_echo_soundset"};
			};	
		};
		class FullAuto:Mode_FullAuto {
			sounds[] = {"StandardSound", "SilencedSound"};
			class standardsound {
				soundSetShot[] = {"twc_m16a4_shot_soundset","jsrs_556mm_echo_soundset", "jsrs_5x56mm_reverb_soundset"};
			};		
			class SilencedSound {
				soundsetshot[]=
				{"twc_12x7mm_sd_reverb_soundset", "TWC_556_sd_Shot_SoundSet", "jsrs_556mm_echo_soundset"};
			};	
		};
	};
	
	class CUP_arifle_HK417_Base: CUP_arifle_HK416_145_Base
	{
		
		class Single:Mode_SemiAuto {
			class standardsound {
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"twc_L129_Shot_Soundset",
					"twc_12x7mm_reverb_soundset",
					"jsrs_556mm_echo_soundset"
				};
			};
			class silencedsound {
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"twc_sr25_SD_shot_soundset",
					"twc_12x7mm_reverb_soundset",
					"jsrs_556mm_echo_soundset"
				};
			};
		};
		class Burst:Mode_Burst {
			class standardsound {
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"twc_L129_Shot_Soundset",
					"twc_12x7mm_reverb_soundset",
					"jsrs_556mm_echo_soundset"
				};
			};	
			class silencedsound {
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"twc_sr25_SD_shot_soundset",
					"twc_12x7mm_reverb_soundset",
					"jsrs_556mm_echo_soundset"
				};
			};		
		};
		class FullAuto:Mode_FullAuto {
			class standardsound {
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"twc_L129_Shot_Soundset",
					"twc_12x7mm_reverb_soundset",
					"jsrs_556mm_echo_soundset"
				};
			};	
			class silencedsound {
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"twc_sr25_SD_shot_soundset",
					"twc_12x7mm_reverb_soundset",
					"jsrs_556mm_echo_soundset"
				};
			};		
		};
	};
	class twc_HK417_base;
	class twc_HK417_jsrs_base: twc_HK417_base
	{
		scope = 1;
		class Single:Mode_SemiAuto {
			class StandardSound {
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"twc_L129_Shot_Soundset",
					"twc_12x7mm_reverb_soundset",
					"jsrs_556mm_echo_soundset"
				};
			};
			class silencedsound {
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"twc_sr25_SD_shot_soundset",
					"twc_12x7mm_reverb_soundset",
					"jsrs_556mm_echo_soundset"
				};
			};
		};
		class Burst:Mode_Burst {
			class StandardSound {
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"twc_L129_Shot_Soundset",
					"twc_12x7mm_reverb_soundset",
					"jsrs_556mm_echo_soundset"
				};
			};
			class silencedsound {
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"twc_sr25_SD_shot_soundset",
					"twc_12x7mm_reverb_soundset",
					"jsrs_556mm_echo_soundset"
				};
			};	
		};
		class FullAuto:Mode_FullAuto {
			class StandardSound {
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"twc_L129_Shot_Soundset",
					"twc_12x7mm_reverb_soundset",
					"jsrs_556mm_echo_soundset"
				};
			};
			class silencedsound {
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"twc_sr25_SD_shot_soundset",
					"twc_12x7mm_reverb_soundset",
					"jsrs_556mm_echo_soundset"
				};
			};
		};
	};
	
	class CUP_arifle_XM8_Base: Rifle_Base_F
	{
		
		class Single:Mode_SemiAuto {
			sounds[] = {"StandardSound"};
			class standardsound {
				soundSetShot[] = {"twc_12x7mm_sd_reverb_soundset","jsrs_aug_shot_soundset","jsrs_556mm_echo_soundset"};
			};
		};
		class Burst:Mode_Burst {
			sounds[] = {"StandardSound"};
			class standardsound {
				soundSetShot[] = {"twc_12x7mm_sd_reverb_soundset","jsrs_aug_shot_soundset","jsrs_556mm_echo_soundset"};
			};			
		};
		class FullAuto:Mode_FullAuto {
			sounds[] = {"StandardSound"};
			class standardsound {
				soundSetShot[] = {"twc_12x7mm_sd_reverb_soundset","jsrs_aug_shot_soundset","jsrs_556mm_echo_soundset"};
			};			
		};
	};
	
	class CUP_sgun_AA12: Rifle_Base_F
	{
		
		class FullAuto:Mode_FullAuto {
			sounds[] = {"StandardSound"};
			class standardsound {
				soundSetShot[] = {"twc_12x7mm_sd_reverb_soundset","jsrs_m590_shot_soundset","jsrs_556mm_echo_soundset"};
			};			
		};
	};
	class CUP_arifle_M16A2: CUP_arifle_M16_Base
	{
		
		class Single:Mode_SemiAuto {
			sounds[] = {"StandardSound"};
			class standardsound {
				soundSetShot[] = {"twc_m16a4_shot_soundset","jsrs_556mm_echo_soundset", "jsrs_5x56mm_reverb_soundset"};
			};
		};
		class Burst:Mode_Burst {
			sounds[] = {"StandardSound"};
			class standardsound {
				soundSetShot[] = {"twc_m16a4_shot_soundset","jsrs_556mm_echo_soundset", "jsrs_5x56mm_reverb_soundset"};
			};			
		};
	};
	class CUP_arifle_M16A2_GL: CUP_arifle_M16_Base
	{
		
		class Single:Mode_SemiAuto {
			sounds[] = {"StandardSound"};
			class standardsound {
				soundSetShot[] = {"twc_m16a4_shot_soundset","jsrs_556mm_echo_soundset", "jsrs_5x56mm_reverb_soundset"};
			};
		};
		class Burst:Mode_Burst {
			sounds[] = {"StandardSound"};
			class standardsound {
				soundSetShot[] = {"twc_m16a4_shot_soundset","jsrs_556mm_echo_soundset", "jsrs_5x56mm_reverb_soundset"};
			};			
		};
	};
	
	class CUP_arifle_FNFAL: Rifle_Base_F
	{
		
		class Single:Mode_SemiAuto {
			class standardsound {
				soundSetShot[] = {"3CB_BAF_L1A1_Closure_SoundSet","twc_L1A1_Shot_Soundset","jsrs_556mm_echo_soundset"};
			};
		};
		class FullAuto:mode_fullauto {
			class standardsound {
				soundSetShot[] = {"3CB_BAF_L1A1_Closure_SoundSet","twc_L1A1_Shot_Soundset","jsrs_556mm_echo_soundset"};
			};			
		};
	};
	
	class CUP_arifle_G36_Base: Rifle_Base_F
	{
		
		class Single:Mode_SemiAuto {
			class standardsound {
				soundSetShot[] = {"twc_12x7mm_sd_reverb_soundset","twc_g36_shot_soundset","jsrs_556mm_echo_soundset"};
			};
		};
		class FullAuto:mode_fullauto {
			class standardsound {
				soundSetShot[] = {"twc_12x7mm_sd_reverb_soundset","twc_g36_shot_soundset","jsrs_556mm_echo_soundset"};
			};			
		};
	};
	
	class CUP_arifle_G36C: Rifle_Base_F
	{
		
		class Single:Mode_SemiAuto {
			class standardsound {
				soundSetShot[] = {"twc_12x7mm_sd_reverb_soundset","twc_g36_shot_soundset","jsrs_556mm_echo_soundset"};
			};
		};
		class FullAuto:mode_fullauto {
			class standardsound {
				soundSetShot[] = {"twc_12x7mm_sd_reverb_soundset","twc_g36_shot_soundset","jsrs_556mm_echo_soundset"};
			};			
		};
	};
	
	class CUP_arifle_MG36: CUP_arifle_G36C
	{
		
		class Single:Mode_SemiAuto {
			class standardsound {
				soundSetShot[] = {"twc_12x7mm_sd_reverb_soundset","twc_g36_shot_soundset","jsrs_556mm_echo_soundset"};
			};
		};
		class FullAuto:mode_fullauto {
			class standardsound {
				soundSetShot[] = {"twc_12x7mm_sd_reverb_soundset","twc_g36_shot_soundset","jsrs_556mm_echo_soundset"};
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
				soundSetShot[] = {"jsrs_dshk_shot_soundset","twc_12x7mm_reverb_soundset","jsrs_762mm_echo_soundset"};
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
				soundSetShot[] = {"twc_pkm_shot_soundset","twc_12x7mm_reverb_soundset","jsrs_762mm_echo_soundset"};
			};
		};
	};
		//jsrs_762mm_echo_soundset
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
				soundSetShot[] = {"twc_pkm_shot_soundset","twc_12x7mm_reverb_soundset","jsrs_762mm_echo_soundset"};
			};
		};
		class FullAuto:mode_fullauto {
			sounds[] = {"StandardSound"};
			class standardsound {
				soundSetShot[] = {"twc_pkm_shot_soundset","twc_12x7mm_reverb_soundset","jsrs_762mm_echo_soundset"};
			};			
		};
		class close:FullAuto {
			class standardsound {
				soundSetShot[] = {"twc_pkm_shot_soundset","twc_12x7mm_reverb_soundset","jsrs_762mm_echo_soundset"};
			};			
		};
		class Manual: mode_fullauto {
			class standardsound {
				soundSetShot[] = {"twc_pkm_shot_soundset","twc_12x7mm_reverb_soundset","jsrs_762mm_echo_soundset"};
			};			
		};
		class far_optic1: close {
			class standardsound {
				soundSetShot[] = {"twc_pkm_shot_soundset","twc_12x7mm_reverb_soundset","jsrs_762mm_echo_soundset"};
			};			
		};
		class far_optic2: far_optic1 {
			class standardsound {
				soundSetShot[] = {"twc_pkm_shot_soundset","twc_12x7mm_reverb_soundset","jsrs_762mm_echo_soundset"};
			};			
		};
		class medium: close {
			class standardsound {
				soundSetShot[] = {"twc_pkm_shot_soundset","twc_12x7mm_reverb_soundset","jsrs_762mm_echo_soundset"};
			};			
		};
		class short: close {
			class standardsound {
				soundSetShot[] = {"twc_pkm_shot_soundset","twc_12x7mm_reverb_soundset","jsrs_762mm_echo_soundset"};
			};			
		};
	};
	
	class rhs_weap_pkm: rhs_weap_pkp
	{
		
		class fullauto:mode_fullauto {
			class standardsound {
				soundSetShot[] = {"twc_pkm_shot_soundset","twc_12x7mm_reverb_soundset","jsrs_762mm_echo_soundset"};
			};
		};
		class manual:fullauto {
			sounds[] = {"StandardSound"};
			class standardsound {
				soundSetShot[] = {"twc_pkm_shot_soundset","twc_12x7mm_reverb_soundset","jsrs_762mm_echo_soundset"};
			};
		};
		class close:manual {
			class standardsound {
				soundSetShot[] = {"twc_pkm_shot_soundset","twc_12x7mm_reverb_soundset","jsrs_762mm_echo_soundset"};
			};
		};
		class single:mode_semiauto {
			class standardsound {
				soundSetShot[] = {"twc_pkm_shot_soundset","twc_12x7mm_reverb_soundset","jsrs_762mm_echo_soundset"};
			};
		};
		class medium:close {
			class standardsound {
				soundSetShot[] = {"twc_pkm_shot_soundset","twc_12x7mm_reverb_soundset","jsrs_762mm_echo_soundset"};
			};
		};
		class short:close {
			class standardsound {
				soundSetShot[] = {"twc_pkm_shot_soundset","twc_12x7mm_reverb_soundset","jsrs_762mm_echo_soundset"};
			};
		};
		class far_optic1:medium {
			class standardsound {
			soundSetShot[] = {"twc_pkm_shot_soundset","twc_12x7mm_reverb_soundset","jsrs_762mm_echo_soundset"};
			};
		};
		class far_optic2:far_optic1 {
			class standardsound {
				soundSetShot[] = {"twc_pkm_shot_soundset","twc_12x7mm_reverb_soundset","jsrs_762mm_echo_soundset"};
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
				soundSetShot[] = {"twc_m249_shot_soundset","twc_12x7mm_reverb_soundset"};
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
				soundSetShot[] = {"jsrs_dshk_shot_soundset","twc_12x7mm_reverb_soundset","jsrs_762mm_echo_soundset"};
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
					"jsrs_rpg7v_shot_soundset",
					"jsrs_small_explosion_reverb_soundset"
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
					"jsrs_rpg7v_shot_soundset",
					"jsrs_small_explosion_reverb_soundset"
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
				soundSetShot[] = {"twc_m107_shot_soundset","jsrs_12x7mm_reverb_soundset"};
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
				soundSetShot[] = {"twc_m107_shot_soundset","jsrs_12x7mm_reverb_soundset"};
			};
		};
	};
	
	class MGunCore;
	class MGun;
	class CUP_Vhmg_DSHKM_veh: MGun
	{
		class manual:MGun {
			class standardsound
			{
					soundSetShot[] = {"twc_dshkm_shot_soundset","jsrs_hmg_echo_soundset","jsrs_12x7mm_reverb_soundset"};
			};
		};
		class close:manual {
			class standardsound
			{
					soundSetShot[] = {"twc_dshkm_shot_soundset","jsrs_hmg_echo_soundset","jsrs_12x7mm_reverb_soundset"};
			};
		};
		class short:close {
			class standardsound
			{
					soundSetShot[] = {"twc_dshkm_shot_soundset","jsrs_hmg_echo_soundset","jsrs_12x7mm_reverb_soundset"};
			};
		};
		class medium:close {
			class standardsound
			{
					soundSetShot[] = {"twc_dshkm_shot_soundset","jsrs_hmg_echo_soundset","jsrs_12x7mm_reverb_soundset"};
			};
		};
		class far:close {
			class standardsound
			{
					soundSetShot[] = {"twc_dshkm_shot_soundset","jsrs_hmg_echo_soundset","jsrs_12x7mm_reverb_soundset"};
			};
		};
	};
	
	class CUP_Vhmg_KORD_veh: MGun
	{
		class manual:MGun {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"twc_dshkm_shot_soundset","jsrs_hmg_echo_soundset","jsrs_12x7mm_reverb_soundset"};
			};
		};
		class close:manual {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"twc_dshkm_shot_soundset","jsrs_hmg_echo_soundset","jsrs_12x7mm_reverb_soundset"};
			};
		};
		class short:close {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"twc_dshkm_shot_soundset","jsrs_hmg_echo_soundset","jsrs_12x7mm_reverb_soundset"};
			};
		};
		class medium:close {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"twc_dshkm_shot_soundset","jsrs_hmg_echo_soundset","jsrs_12x7mm_reverb_soundset"};
			};
		};
		class far:close {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"twc_dshkm_shot_soundset","jsrs_hmg_echo_soundset","jsrs_12x7mm_reverb_soundset"};
			};
		};
	};
	
		
	
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
					soundSetShot[] = {"jsrs_dshk_shot_soundset","jsrs_556mm_echo_soundset"};
			};
		};
	
		class standardsound
		{
			soundSetShot[] = {"jsrs_dshk_shot_soundset","jsrs_556mm_echo_soundset"};
				
		};
	};
	
	class UK3CB_BAF_Landrover_L7A2_1: UK3CB_BAF_L112A1_veh
	{
		class manual:manual {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"jsrs_dshk_shot_soundset","jsrs_556mm_echo_soundset"};
				};
			};
	
		class standardsound
		{
			soundSetShot[] = {"jsrs_dshk_shot_soundset","jsrs_556mm_echo_soundset"};
				
		};
	};
	
	class UK3CB_BAF_Landrover_L7A2_2: UK3CB_BAF_L112A1_veh
	{
		class manual:manual {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"jsrs_dshk_shot_soundset","jsrs_556mm_echo_soundset"};
				};
			};
	
		class standardsound
		{
			soundSetShot[] = {"jsrs_dshk_shot_soundset","jsrs_556mm_echo_soundset"};
				
		};
	};
	
	class CannonCore;
	
	class CUP_Vacannon_2A14_veh: CannonCore
	{
		class manual:CannonCore
		{
			class standardsound
			{
				soundSetShot[] = {
					"twc_ZSU23_shot_soundset",
					"jsrs_40mm_reflector_1",
					"jsrs_autocannon_casing"};
			};
		};
	};
			
	
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
					soundSetShot[] = {"jsrs_mk19_shot_soundset","UK3CB_Mortar60mm_Tail_SoundSet"};
				};
			};
	};

	class UK3CB_BAF_L134A1_veh: GMG_40mm
	{
		class manual: manual
		{
	
			class standardsound
			{
					soundSetShot[] = {"jsrs_mk19_shot_soundset","UK3CB_Mortar60mm_Tail_SoundSet"};
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
					soundSetShot[] = {"jsrs_mk19_shot_soundset","UK3CB_Mortar60mm_Tail_SoundSet"};
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
					soundSetShot[] = {"twc_L111_soundset","jsrs_hmg_echo_soundset","jsrs_12x7mm_reverb_soundset"};
				};
			};
	
		class standardsound
		{
			soundSetShot[] = {"twc_L111_soundset","jsrs_hmg_echo_soundset","jsrs_12x7mm_reverb_soundset"};
				
		};
	};
	
	
	class UK3CB_BAF_L111A1_vehicle: HMG_M2
	{
		class manual:manual {
	
			class standardsound
			{
					soundSetShot[] = {"twc_L111_soundset","jsrs_hmg_echo_soundset","jsrs_12x7mm_reverb_soundset"};
				};
			};
	
		class standardsound
		{
			soundSetShot[] = {"twc_L111_soundset","jsrs_hmg_echo_soundset","jsrs_12x7mm_reverb_soundset"};
				
		};
	};
	
	
	class UK3CB_BAF_L111A1_veh: HMG_M2
	{
		class manual:manual {
	
			class standardsound
			{
					soundSetShot[] = {"twc_L111_soundset","jsrs_hmg_echo_soundset","jsrs_12x7mm_reverb_soundset"};
				};
			};
	
		class standardsound
		{
			soundSetShot[] = {"twc_L111_soundset","jsrs_hmg_echo_soundset","jsrs_12x7mm_reverb_soundset"};
				
		};
	};
	
	class CUP_Vhmg_M2_veh: HMG_M2
	{
		class manual:manual {
	
			class standardsound
			{
			soundSetShot[] = {"twc_L111_soundset","jsrs_hmg_echo_soundset","jsrs_12x7mm_reverb_soundset"};
				};
			};
	
		class standardsound
		{
			soundSetShot[] = {"twc_L111_soundset","jsrs_hmg_echo_soundset","jsrs_12x7mm_reverb_soundset"};
				
		};
	};
	

	class  CUP_Vlmg_M240_veh : MGun
	{
		class manual:mgun {
	
			class standardsound
			{
					soundSetShot[] = {"jsrs_dshk_shot_soundset","jsrs_556mm_echo_soundset"};
				};
			};
	
		class standardsound
		{
			soundSetShot[] = {"jsrs_dshk_shot_soundset","jsrs_556mm_echo_soundset"};
				
		};
	};
	
	
	class UK3CB_BAF_L7A2_veh: LMG_RCWS
	{
		class manual:manual {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"jsrs_dshk_shot_soundset","jsrs_556mm_echo_soundset"};
				};
			};
	
		class standardsound
		{
			soundSetShot[] = {"jsrs_dshk_shot_soundset","jsrs_556mm_echo_soundset"};
				
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
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"twc_L129_Shot_Soundset",
					"twc_12x7mm_reverb_soundset",
					"jsrs_556mm_echo_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"twc_sr25_SD_shot_soundset",
					"twc_12x7mm_reverb_soundset",
					"jsrs_556mm_echo_soundset"
				};
			};
		};
	};
	class UK3CB_BAF_L129A1_public: UK3CB_BAF_L129A1
	{
		class Single:Single {
			//class basesoundmodetype;
	
			class standardsound
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"twc_L129_Shot_Soundset",
					"twc_12x7mm_reverb_soundset",
					"jsrs_556mm_echo_soundset"
				};
			};
			class silencedsound
			{
				soundsetshot[]=
				{
					"jsrs_rifle_shake_soundset",
					"twc_sr25_SD_shot_soundset",
					"twc_12x7mm_reverb_soundset",
					"jsrs_556mm_echo_soundset"
				};
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
					soundSetShot[] = {"jsrs_mx2010_shot_soundset","jsrs_12x7mm_reverb_soundset"};
				};
				class SilencedSound: BaseSoundModeType 
				{
					soundSetShot[] = {"twc_L115_shot_soundset","jsrs_12x7mm_reverb_soundset"
				};
			};
		};
	};
	
	class UK3CB_BAF_L115A3: UK3CB_BAF_L115_Base
	{};
	
	class UK3CB_BAF_L115_pub_Base: UK3CB_BAF_L115A3
	{
		class Single:single {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
				{
					soundSetShot[] = {"jsrs_mx2010_shot_soundset","jsrs_12x7mm_reverb_soundset"};
				};
				class SilencedSound: BaseSoundModeType 
				{
					soundSetShot[] = {"twc_L115_shot_soundset","jsrs_12x7mm_reverb_soundset"
				};
			};
		};
	};
	
	class CUP_sgun_M1014_base: Rifle_Base_F
	{
		class Single:Mode_SemiAuto {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
				soundSetShot[] = {"TWC_L128_Shot_SoundSet","jsrs_12x7mm_reverb_soundset"};
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
					soundSetShot[] = {"twc_m249_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reverb_soundset"};
				};
			};
		class Far_optic1:Far_optic1 {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"twc_m249_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reverb_soundset"};
				};
			};
		class Far_optic2:Far_optic2 {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"twc_m249_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reverb_soundset"};
				};
			};
		class Close:Close {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"twc_m249_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reverb_soundset"};
				};
			};
		class Medium:Medium {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"twc_m249_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reverb_soundset"};
				};
			};
		};
	
	class UK3CB_BAF_L110A2RIS_public: UK3CB_BAF_L110A2RIS
	{
		class FullAuto:FullAuto {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"twc_m249_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reverb_soundset"};
				};
			};
		class Far_optic1:Far_optic1 {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"twc_m249_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reverb_soundset"};
				};
			};
		class Far_optic2:Far_optic2 {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"twc_m249_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reverb_soundset"};
				};
			};
		class Close:Close {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"twc_m249_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reverb_soundset"};
				};
			};
		class Medium:Medium {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"twc_m249_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reverb_soundset"};
				};
			};
		};
	
	class UK3CB_BAF_L110A2: UK3CB_BAF_L110_556_Base
	{
		class FullAuto:FullAuto {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"twc_m249_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reverb_soundset"};
				};
			};
		class Far_optic1:Far_optic1 {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"twc_m249_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reverb_soundset"};
				};
			};
		class Far_optic2:Far_optic2 {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"twc_m249_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reverb_soundset"};
				};
			};
		class Close:Close {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"twc_m249_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reverb_soundset"};
				};
			};
		class Medium:Medium {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"twc_m249_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reverb_soundset"};
				};
			};
		};
	
	class UK3CB_BAF_L110A2_public: UK3CB_BAF_L110A2
	{
		class FullAuto:FullAuto {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"twc_m249_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reverb_soundset"};
				};
			};
		class Far_optic1:Far_optic1 {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"twc_m249_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reverb_soundset"};
				};
			};
		class Far_optic2:Far_optic2 {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"twc_m249_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reverb_soundset"};
				};
			};
		class Close:Close {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"twc_m249_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reverb_soundset"};
				};
			};
		class Medium:Medium {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"twc_m249_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reverb_soundset"};
				};
			};
		};
	
	class UK3CB_BAF_L110A1: UK3CB_BAF_L110_556_Base
	{
		class FullAuto:FullAuto {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"twc_m249_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reverb_soundset"};
				};
			};
		class Far_optic1:Far_optic1 {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"twc_m249_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reverb_soundset"};
				};
			};
		class Far_optic2:Far_optic2 {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"twc_m249_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reverb_soundset"};
				};
			};
		class Close:Close {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"twc_m249_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reverb_soundset"};
				};
			};
		class Medium:Medium {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"twc_m249_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reverb_soundset"};
				};
			};
		};
	
	class UK3CB_BAF_L110A1_public: UK3CB_BAF_L110A1
	{
		class FullAuto:FullAuto {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"twc_m249_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reverb_soundset"};
				};
			};
		class Far_optic1:Far_optic1 {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"twc_m249_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reverb_soundset"};
				};
			};
		class Far_optic2:Far_optic2 {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"twc_m249_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reverb_soundset"};
				};
			};
		class Close:Close {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"twc_m249_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reverb_soundset"};
				};
			};
		class Medium:Medium {
			class basesoundmodetype;
	
			class standardsound: basesoundmodetype
			{
					soundSetShot[] = {"twc_m249_shot_soundset","jsrs_556mm_echo_soundset","jsrs_5x56mm_reverb_soundset"};
				};
			};
		};
		
	};

class cfgammo
{
	class bulletbase;
	class CUP_B_23mm_AA: bulletbase
	{
		soundsetsoniccrack[] = {"jsrs_sc_127x99mm_soundset"};
	};
};