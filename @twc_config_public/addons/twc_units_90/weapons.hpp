class cfgWeapons
{
	class UK3CB_BAF_L85A2;
	class UK3CB_BAF_L86A2;
	class UK3CB_BAF_L85A2_UGL;
	class UK3CB_BAF_SUSAT_3D;
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
	
		class UK3CB_BAF_L115A3;
	class UK3CB_BAF_L115A3_DE;
	class CUP_hgun_Colt1911;
	class twc_l96_w: UK3CB_BAF_L115A3
	{
		scope = 2;
		displayname = "L96A1";
		magazines[] = {"UK3CB_BAF_762_L42A1_10Rnd", "UK3CB_BAF_762_L42A1_10Rnd_T"};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L115";
				item="rhsusf_acc_M8541";
			};
		};
	};
	class twc_l96_d: UK3CB_BAF_L115A3_DE
	{
		scope = 2;
		displayname = "L96A1";
		magazines[] = {"UK3CB_BAF_762_L42A1_10Rnd", "UK3CB_BAF_762_L42A1_10Rnd_T"};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L115";
				item="rhsusf_acc_M8541";
			};
		};
	};
	

	
		class UK3CB_BAF_L85A2_SUSAT:UK3CB_BAF_L85A2
	{
		scope = 1;
		displayName = "L85A2";
		author="Hobbs";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L85";
				item="UK3CB_BAF_SUSAT_3D";
			};
		};
	};
	
		class UK3CB_BAF_L85A2_UGL_SUSAT:UK3CB_BAF_L85A2_UGL
	{
		scope = 1;
		displayName = "L85A2/L123UGL";
		author="Hobbs";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L85";
				item="UK3CB_BAF_SUSAT_3D";
			};
		};
	};
	
	class UK3CB_BAF_U_Smock_DPMT;
	class UK3CB_BAF_U_Smock_DDPM;
	
	class UniformItem;
	
	class TWC_Smock_Temperate: UK3CB_BAF_U_Smock_DPMT
	{
		scope = 1;
		class ItemInfo: UniformItem
        {
			containerClass = Supply30;
            mass = 50;
			uniformClass = "UK3CB_BAF_Soldier_Smock_DPMT_Base";
			uniformModel = "-";
        };
	};
	class TWC_Smock_Desert: UK3CB_BAF_U_Smock_DDPM
	{
		scope = 1;
		class ItemInfo: UniformItem
        {
			containerClass = Supply30;
            mass = 50;
			uniformClass = "UK3CB_BAF_Soldier_Smock_DDPM_Base";
			uniformModel = "-";
        };
	};
};