	class rhsusf_assault_eagleaiii_coy;
	class B_AssaultPack_cbr;
	
	class TWC_Backpack_USMC_Sectionleader: rhsusf_assault_eagleaiii_coy
	{
		maximumLoad = 250;
		class TransportItems
		{
			item_nc(ACRE_PRC117F,1);
		};
		class TransportMagazines
		{
			maga_nc(1Rnd_HE_Grenade_shell,10);
			maga_nc(1Rnd_SmokeGreen_Grenade_shell,3);
			maga_nc(1Rnd_SmokeRed_Grenade_shell,3);
			maga_nc(SmokeShellRed,2);
			maga_nc(SmokeShellGreen,2);
		};
	};
	
		
	class TWC_Backpack_USMC_vehiclecommander: B_AssaultPack_cbr
	{
		class TransportItems
		{
			item_nc(ACRE_PRC117F,1);
		};
		class TransportMagazines
		{
			maga_nc(SmokeShellRed,2);
			maga_nc(SmokeShellGreen,2);
		};
	};
	
	class TWC_Backpack_USMC_Teamleader: rhsusf_assault_eagleaiii_coy
	{
		class TransportMagazines
		{
			maga_nc(1Rnd_HE_Grenade_shell,10);
			maga_nc(1Rnd_SmokeGreen_Grenade_shell,3);
			maga_nc(1Rnd_SmokeRed_Grenade_shell,3);
		};
	};
	
	class TWC_Backpack_USMC_Breacher: rhsusf_assault_eagleaiii_coy
	{
		class TransportMagazines
		{
			maga_nc(30Rnd_556x45_Stanag,5);
			maga_nc(30Rnd_556x45_Stanag_Tracer_Red,3);
		};
		
		class TransportWeapons
		{
            class _xx_Rifle
			{
				weapon = "twc_rhs_weap_m4a1_acog_lazer";
				count = 1;
			};
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
			item_nc(ACE_personalAidKit,1);
            item_nc(ACE_fieldDressing,12);
			item_nc(ACE_elasticBandage,15);
			item_nc(ACE_packingBandage,15);
			item_nc(ACE_quikclot,6);
			item_nc(ACE_morphine,10);
			item_nc(ACE_epinephrine,10);
			item_nc(ACE_adenosine,4);
			item_nc(ACE_atropine,4);
			item_nc(ACE_salineIV_500,6);
			item_nc(ACE_tourniquet,4);
		};
	};