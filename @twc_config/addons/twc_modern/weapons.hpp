class cfgWeapons
{
//////////////////////////////  Modern  //////////////////////////////
	class UK3CB_BAF_L85A2_RIS;
	class UK3CB_BAF_L110A2;
	class UK3CB_BAF_L129A1_Grippod;
	class UK3CB_BAF_L128A1;
	class UK3CB_BAF_L85A2_UGL;
	class UK3CB_BAF_L7A2;
	
	
	class UK3CB_BAF_L85A2_RIS_ELCAN3D: UK3CB_BAF_L85A2_RIS
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
	class UK3CB_BAF_L110A2_ELCAN3D: UK3CB_BAF_L110A2
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
	class UK3CB_BAF_L129A1_Grippod_TA648: UK3CB_BAF_L129A1_Grippod
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
			class LinkedItemsBipod
			{
				slot="UK3CB_underbarrel_rifle_slot";
				item="UK3CB_underbarrel_acc_fgrip_bipod";
			};
		};
	};
	class UK3CB_BAF_L128A1_Eotech: UK3CB_BAF_L128A1
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
	class UK3CB_BAF_L85A2_UGL_ELCAN3D: UK3CB_BAF_L85A2_UGL
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
//////////////////////////////  Others  //////////////////////////////	
	class UK3CB_BAF_L115A3_Ghillie;
	class twc_l129a1_spotter: UK3CB_BAF_L129A1_Grippod
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
			class LinkedItemsBipod
			{
				slot="UK3CB_underbarrel_rifle_slot";
				item="UK3CB_underbarrel_acc_bipod";
			};
			class LinkedItemsMuzzle
			{
				slot="asdg_MuzzleSlot_UK3CB_BAF_L129A1";
				item="UK3CB_BAF_Silencer_L115A3";
			};
		};
	};
};