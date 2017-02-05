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
};