class cfgWeapons
{
	class UK3CB_BAF_L85A2;
	class UK3CB_BAF_L86A2;
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
	class UK3CB_BAF_L85A2_SUSAT3D:UK3CB_BAF_L85A2
	{
		scope = 1;
		author="Saxon";
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
	class UK3CB_BAF_L86A2_SUSAT3D:UK3CB_BAF_L86A2
	{
		scope = 1;
		author="Saxon";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="asdg_OpticRail_UK3CB_BAF_L85";
				item="UK3CB_BAF_SUSAT_3D";
			};
		};
	};
	
	class tf47_at4_m_HEAT;
	class tf47_at4_m_HEDP;
	
	class TWC_ILAW_HEAT:tf47_at4_m_HEAT
	{
		displayName = "ILAW (HEAT)";
		author="Saxon";
	};
	class TWC_ILAW_HEDP:tf47_at4_m_HEDP
	{
		displayName = "ILAW (HEDP)";
		author="Saxon";
	};
	
	class UK3CB_BAF_U_Smock_DPMT;
	class UK3CB_BAF_U_Smock_DDPM;
	class UK3CB_BAF_U_Smock_Arctic;
	
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
	class TWC_Smock_Arctic: UK3CB_BAF_U_Smock_Arctic
	{
		scope = 1;
		class ItemInfo: UniformItem
        {
			containerClass = Supply30;
            mass = 50;
			uniformClass = "UK3CB_BAF_Soldier_Smock_Arctic_Base";
			uniformModel = "-";
        };
	};
};