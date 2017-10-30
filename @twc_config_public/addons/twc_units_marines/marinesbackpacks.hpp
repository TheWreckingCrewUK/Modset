	class rhsusf_assault_eagleaiii_coy;
	
	class TWC_Backpack_USMC_Sectionleader: rhsusf_assault_eagleaiii_coy
	{
		maximumLoad = 500;
		class TransportItems
		{
			item_nc(ACRE_PRC117F,1);
		};
		class TransportMagazines
		{
			maga_nc(SmokeShellRed,2);
			maga_nc(SmokeShellGreen,2);
			maga_nc(1Rnd_HE_Grenade_shell,11);
			maga_nc(1Rnd_SmokeGreen_Grenade_shell,3);
			maga_nc(1Rnd_SmokeRed_Grenade_shell,3);
		};
	};
	class TWC_Backpack_USMC_Teamleader: rhsusf_assault_eagleaiii_coy
	{
		class TransportMagazines
		{
			maga_nc(1Rnd_HE_Grenade_shell,11);
			maga_nc(1Rnd_SmokeGreen_Grenade_shell,3);
			maga_nc(1Rnd_SmokeRed_Grenade_shell,3);
		};
	};
	class TWC_Backpack_USMC_AutomaticRifleman: rhsusf_assault_eagleaiii_coy
	{
		class TransportMagazines
		{
			maga_nc(rhsusf_200Rnd_556x45_soft_pouch,2);
		};
	};
	class TWC_Backpack_USMC_MachineGunner: rhsusf_assault_eagleaiii_coy
	{
		class TransportMagazines
		{
			maga_nc(rhsusf_100Rnd_762x51_m62_tracer,2);
		};
	};
	class TWC_Backpack_USMC_Medic: rhsusf_assault_eagleaiii_coy
	{
		scope = 1;
		class TransportItems
		{
            class _xx_Bandage
			{
				name = "ACE_fieldDressing";
				count = 12;
			};
			class _xx_Morphine
			{
				name = "ACE_morphine";
				count = 10;
			};
			class _xx_ACE_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 15;
			};
			class _xxACE_quikclot
			{
				name = "ACE_quikclot";
				count = 6;
			};
			class _xxACE_adenosine
			{
				name = "ACE_adenosine";
				count = 4;
			};
			class _xxACE_atropine
			{
				name = "ACE_atropine";
				count = 4;
			};
			class _xxACE_epinephrine
			{
				name = "ACE_epinephrine";
				count = 10;
			};
			class _xxACE_packingBandage
			{
				name = "ACE_packingBandage";
				count = 15;
			};
			class _xxACE_personalAidKit
			{
				name = "ACE_personalAidKit";
				count = 1;
			};
			class _xxACE_salineIV_500
			{
				name = "ACE_salineIV_500";
				count = 6;
			};
			class _xxACE_tourniquet
			{
				name = "ACE_tourniquet";
				count = 4;
			};
		};
	};