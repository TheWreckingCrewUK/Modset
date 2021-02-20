	class CUP_B_AssaultPack_Coyote;
	class B_AssaultPack_cbr;
	
	class TWC_Backpack_USMC_Sectionleader: CUP_B_AssaultPack_Coyote
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
	
	class TWC_Backpack_USMC_Teamleader: CUP_B_AssaultPack_Coyote
	{
		class TransportMagazines
		{
			maga_nc(1Rnd_HE_Grenade_shell,10);
			maga_nc(1Rnd_SmokeGreen_Grenade_shell,3);
			maga_nc(1Rnd_SmokeRed_Grenade_shell,3);
		};
	};
	
	class TWC_Backpack_USMC_Breacher: CUP_B_AssaultPack_Coyote
	{
		class TransportMagazines
		{
			maga_nc(30Rnd_556x45_STANAG,5);
			maga_nc(30Rnd_556x45_Stanag_Tracer_Red,3);
		};
		
		class TransportWeapons
		{
            class _xx_Rifle
			{
				weapon = "CUP_arifle_M4A1_ACOG_Laser";
				count = 1;
			};
		};
	};
	class TWC_Backpack_USMC_AutomaticRifleman: CUP_B_AssaultPack_Coyote
	{
		class TransportMagazines
		{
			maga_nc(CUP_200Rnd_TE4_Red_Tracer_556x45_M249,2);
		};
	};
	class TWC_Backpack_USMC_MachineGunner: CUP_B_AssaultPack_Coyote
	{
		class TransportMagazines
		{
			maga_nc(CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M,2);
		};
	};
	class TWC_Backpack_USMC_Medic: CUP_B_AssaultPack_Coyote
	{
		scope = 1;
		class TransportItems
		{
			item_nc(TWC_Item_Medical_SutureKit_25,1);
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
	
	class CUP_B_Kombat_Radio_Olive;
	class TWC_Backpack_USMC2000_Sectionleader: CUP_B_Kombat_Radio_Olive
	{
		class TransportItems
		{
			item_nc(ACRE_PRC117F,1);
			item_nc(ACE_CableTie,5);
		};
		class TransportMagazines
		{
			maga_nc(SmokeShellRed,2);
			maga_nc(SmokeShellGreen,2);
		};
	};
	
	class UK3CB_BAF_B_Carryall_OLI;
	class TWC_Backpack_USMC2000_Teamleader: UK3CB_BAF_B_Carryall_OLI
	{
		class TransportItems
		{
			item_nc(ACE_CableTie,5);
		};
		class TransportMagazines
		{
			maga_nc(30Rnd_556x45_STANAG,15);
			maga_nc(30Rnd_556x45_Stanag_Tracer_Red,10);
			maga_nc(SmokeShellGreen,2);
		};
	};
	
	class B_TacticalPack_blk;
	class TWC_Backpack_USMC2000_Rifleman: B_TacticalPack_blk
	{
		class TransportItems
		{
			item_nc(ACE_CableTie,5);
		};
		class TransportMagazines
		{
			maga_nc(30Rnd_556x45_STANAG,10);
			maga_nc(30Rnd_556x45_Stanag_Tracer_Red,10);
		};
	};
	
	class B_FieldPack_oli;
	class TWC_Backpack_USMC2000_Breacher: B_FieldPack_oli
	{
		class TransportItems
		{
			item_nc(ACE_CableTie,5);
		};
		class TransportMagazines
		{
			maga_nc(30Rnd_556x45_STANAG,5);
			maga_nc(30Rnd_556x45_Stanag_Tracer_Red,2);
		};
		class TransportWeapons
		{
			weap_nc(CUP_TWC_arifle_M16A4_Grip_clean,1);
		};
	};
	
	class twc_genbackPack_oli;
	class TWC_Backpack_USMC2000_Autorifleman: twc_genbackPack_oli
	{
		class TransportItems
		{
			item_nc(ACE_CableTie,5);
		};
		class TransportMagazines
		{
			maga_nc(CUP_200Rnd_TE4_Red_Tracer_556x45_M249,4);
		};
	};
	
	class CUP_B_SLA_Medicbag;
	class TWC_Backpack_USMC2000_Medic: CUP_B_SLA_Medicbag
	{
		class TransportItems
		{
			item_nc(TWC_Item_Medical_SutureKit_25,1);
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
	