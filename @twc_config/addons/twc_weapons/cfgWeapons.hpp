class cfgWeapons
{
	class UK3CB_BAF_L1A1_Wood;
	class UK3CB_BAF_L85A2;
	class UK3CB_BAF_L85A2_RIS_AFG;
	class UK3CB_BAF_L85A2_RIS;
	class UK3CB_BAF_L110A2;
	class UK3CB_BAF_L129A1_Grippod;
	class UK3CB_BAF_L85A2_UGL;
	class UK3CB_BAF_L128A1;
	class UK3CB_BAF_L7A2;
	class UK3CB_BAF_L22A2;
	
	class UK3CB_BAF_L115A3_Ghillie;
	class RKSL_optic_PMII_312_sunshade_wdl;
	class RKSL_optic_PMII_312_sunshade;
	class UK3CB_BAF_Silencer_L115A3;
	
	class CUP_launch_FIM92Stinger;
	class rhsusf_weap_m1911a1;
	class RKSL_optic_LDS;
	class tf47_m3maaws;
	class kio_Elcan_reflex;
	class UK3CB_BAF_L86A2;
	class UK3CB_BAF_SUSAT_3D;
	class rhs_weap_ak74m_dtk; //base ussr AK
	class rhs_acc_1p29; //ussr section lead and 2IC scope
	
	class twc_browninghp:rhsusf_weap_m1911a1
	{
		scope = 2;
		author = "jayman";
		displayName = "Browning Hi Power";
		magazines[] = {twc_13Rnd_9mm_Mag};
	};
	class twc_l115a3_wd:UK3CB_BAF_L115A3_Ghillie
	{
		scope = 1;
		author = "jayman";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "RKSL_optic_PMII_312_sunshade_wdl";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item= "UK3CB_BAF_Silencer_L115A3";
			};
		};
	};
	
	class twc_l129a1_spotter:UK3CB_BAF_L129A1_Grippod
	{
		scope = 1;
		author="FakeMatty";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L129A1";
				item="RKSL_optic_PMII_312_sunshade";
			};
			class LinkedItemsFrontSideRail
			{
				slot="asdg_FrontSideRail_UK3CB_BAF_L129A1";
				item="UK3CB_BAF_LLM_Flashlight_Black";
			};
		};
	};
	
	class twc_L1A1_SUIT:UK3CB_BAF_L1A1_Wood
	{
		scope = 1;
		author = "jayman";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item= "UK3CB_BAF_SUIT";
			};
		};
	};
	
	class TWC_Carl_Gustav:tf47_m3maaws
	{
		scope = 1;
		author="FakeMatty";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="tf47_optic_m3maaws";
			};
		};
	};
	class UK3CB_BAF_L85A2_RIS_AFG_ELCAN3D:UK3CB_BAF_L85A2_RIS
	{
		scope = 1;
		author="FakeMatty";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L85";
				item="RKSL_optic_LDS";
			};
			class LinkedItemsFrontSideRail
			{
				slot="asdg_FrontSideRail_L85";
				item="UK3CB_BAF_LLM_Flashlight_Black";
			};
		};
	};
	class UK3CB_BAF_L110A2_ELCAN3D:UK3CB_BAF_L110A2
	{
		scope = 1;
		author="FakeMatty";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L110A2";
				item="RKSL_optic_LDS";
			};
			class LinkedItemsFrontSideRail
			{
				slot="asdg_FrontSideRail_UK3CB_BAF_L110A2";
				item="UK3CB_BAF_LLM_Flashlight_Black";
			};
		};
	};
	class UK3CB_BAF_L129A1_Grippod_TA648:UK3CB_BAF_L129A1_Grippod
	{
		scope = 1;
		author="FakeMatty";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L129A1";
				item="UK3CB_BAF_TA648_308";
			};
			class LinkedItemsFrontSideRail
			{
				slot="asdg_FrontSideRail_UK3CB_BAF_L129A1";
				item="UK3CB_BAF_LLM_Flashlight_Black";
			};
		};
	};
	class UK3CB_BAF_L128A1_Eotech:UK3CB_BAF_L128A1
	{
		scope = 1;
		author="FakeMatty";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L128A1";
				item="UK3CB_BAF_Eotech";
			};
			class LinkedItemsFrontSideRail
			{
				slot="asdg_FrontSideRail_UK3CB_BAF_L128A1";
				item="UK3CB_BAF_LLM_Flashlight_Black";
			};
		};
	};
	class UK3CB_BAF_L85A2_UGL_ELCAN3D:UK3CB_BAF_L85A2_UGL
	{
		scope = 1;
		author="FakeMatty";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L85";
				item="RKSL_optic_LDS";
			};
			class LinkedItemsFrontSideRail
			{
				slot="asdg_FrontSideRail_L85";
				item="UK3CB_BAF_LLM_Flashlight_Black";
			};
		};
	};
	class UK3CB_BAF_L7A2_ELCAN3D:UK3CB_BAF_L7A2
	{
		scope = 1;
		author="FakeMatty";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L7A2";
				item="RKSL_optic_LDS";
			};
		};
	};
	class UK3CB_BAF_L22A2_SUSAT3D:UK3CB_BAF_L22A2
	{
		scope = 1;
		author="Jayman";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L85";
				item="UK3CB_BAF_SUSAT_3D";
			};
		};
	};
	class FIMStingerA:CUP_launch_FIM92Stinger
	{
		author="Jayman";
		displayName="Stinger A";
	};
	class UK3CB_BAF_L86A1:UK3CB_BAF_L86A2
	{
		displayName = "L86A1";
		ACE_Overheating_JamChance[] = {0, 0.0012, 0.0018, 0.0033};
		author="Jayman";
	};
	class UK3CB_BAF_L86A1_SUSAT3D:UK3CB_BAF_L86A2
	{
		scope = 1;
		displayName = "L86A1";
		ACE_Overheating_JamChance[] = {0, 0.0012, 0.0018, 0.0033};
		author="Jayman";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L85";
				item="UK3CB_BAF_SUSAT_3D";
			};
		};
	};
	class UK3CB_BAF_L85A1:UK3CB_BAF_L85A2
	{
		displayName = "L85A1";
		ACE_Overheating_JamChance[] = {0, 0.0012, 0.0018, 0.0033};
		author="Jayman";
	};
	class UK3CB_BAF_L85A1_SUSAT3D:UK3CB_BAF_L85A2
	{
		scope = 1;
		displayName = "L85A1";
		ACE_Overheating_JamChance[] = {0, 0.0012, 0.0018, 0.0033};
		author="Jayman";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L85";
				item="UK3CB_BAF_SUSAT_3D";
			};
		};
	};
	class UK3CB_BAF_L85A1_SUSAT3D_Lazer:UK3CB_BAF_L85A2
	{
		scope = 1;
		displayName = "L85A1";
		ACE_Overheating_JamChance[] = {0, 0.0012, 0.0018, 0.0033};
		author="Jayman";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L85";
				item="UK3CB_BAF_SUSAT_3D";
			};
			class LinkedItemsFrontSideRail
			{
				slot="asdg_FrontSideRail_L85";
				item="UK3CB_BAF_LLM_Flashlight_Black";
			};
		};
	};	
	class USSR_AK74_1p29:rhs_weap_ak74m_dtk
	{
		scope = 1;
		author="Jayman";
		class LinkedItems
		{
			class linkedItemsOptic
			{
				slot="CowsSlot";
				item="rhs_acc_1p29";
			};
		};
	};
};