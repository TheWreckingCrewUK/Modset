class CfgVehicles {
	class fow_b_uk_p37;
	class fow_b_uk_bergenpack;
	class fow_b_us_radio;
	class fow_b_uk_piat_at;
	class B_LIB_SOV_RA_MedicalBag_Empty;
	class CUP_BAF_VehicleBox;

//************************WW2*******************************
	class TWC_Backpack_WW2_Base: fow_b_uk_p37 {
		scope = 1;
		maximumLoad = 200;
	};

	class TWC_Backpack_1956_Radio_Base: fow_b_us_radio {
		scope = 1;
		maximumLoad = 400;
		mass = 29.7;
	};

	class TWC_Backpack_WW2_PlatoonCommand: fow_b_us_radio {
		scope = 1;
		mass = 29.7;
		maximumLoad = 400;

		class TransportMagazines {
			ADD_MAGA(TWC_Magazine_SignalFlare_Blue, 3);
			ADD_MAGA(TWC_Magazine_SignalFlare_Red, 3);
			ADD_MAGA(TWC_Magazine_SignalFlare_Green, 3);
			ADD_MAGA(TWC_Magazine_SignalFlare_Yellow, 3);
			ADD_MAGA(TWC_Magazine_SignalSmoke_Green, 3);
			ADD_MAGA(TWC_Magazine_SignalSmoke_Red, 3);
			ADD_MAGA(TWC_Magazine_SignalSmoke_Yellow, 3);
			ADD_MAGA(TWC_Magazine_SignalSmoke_Blue, 3);
		};
	};

	class TWC_Backpack_WW2_Medic: B_LIB_SOV_RA_MedicalBag_Empty {
		maximumLoad = 120;
		scope = 1;

		class TransportItems {
			ADD_ITEM(ACE_quikclot, 15);
			ADD_ITEM(ACE_fieldDressing, 15);
			ADD_ITEM(ACE_elasticBandage, 15);
			ADD_ITEM(ACE_packingBandage, 15);
			ADD_ITEM(ACE_morphine, 10);
			ADD_ITEM(ACE_epinephrine, 10);
			ADD_ITEM(ACE_adenosine, 2);
			ADD_ITEM(ACE_atropine, 2);
			ADD_ITEM(ACE_personalAidKit, 1);
			ADD_ITEM(ACE_salineIV_500, 8);
			ADD_ITEM(ACE_tourniquet, 4);
			ADD_ITEM(TWC_Item_Medical_SutureKit_25, 1);
		};
	};

	class TWC_Backpack_WW2_SL: TWC_Backpack_WW2_Base {
		scope = 1;

		class TransportMagazines {
			ADD_MAGA(TWC_Magazine_SignalFlare_Blue, 3);
			ADD_MAGA(TWC_Magazine_SignalFlare_Red, 3);
			ADD_MAGA(TWC_Magazine_SignalFlare_Green, 3);
			ADD_MAGA(TWC_Magazine_SignalFlare_Yellow, 3);
			ADD_MAGA(TWC_Magazine_SignalSmoke_Red, 3);
			ADD_MAGA(TWC_Magazine_SignalSmoke_Green, 3);
			ADD_MAGA(TWC_Magazine_SignalSmoke_Yellow, 3);
			ADD_MAGA(TWC_Magazine_SignalSmoke_Blue, 3);
		};
	};

	class TWC_Backpack_WW2_Sergeant: fow_b_uk_bergenpack {
		scope = 1;
		maximumLoad = 400;

		class TransportItems {};

		class TransportMagazines {
			ADD_MAGA(fow_30Rnd_303_bren, 9);
			ADD_MAGA(10Rnd_303_Magazine, 24);
			ADD_MAGA(TWC_Magazine_SignalFlare_Blue, 6);
			ADD_MAGA(TWC_Magazine_SignalFlare_Red, 6);
			ADD_MAGA(TWC_Magazine_SignalFlare_Green, 6);
			ADD_MAGA(TWC_Magazine_SignalFlare_Yellow, 6);
			ADD_MAGA(SmokeShellGreen, 6);
			ADD_MAGA(SmokeShellRed, 6);
		};
	};

	class TWC_Backpack_WW2_2IC: TWC_Backpack_WW2_Base {
		scope = 1;

		class TransportMagazines {
			ADD_MAGA(10Rnd_303_Magazine, 12);
			ADD_MAGA(fow_30Rnd_303_bren, 4);
		};
	};

	class TWC_Backpack_WW2_MGASS: TWC_Backpack_WW2_Base {
		scope = 1;

		class TransportMagazines {
			ADD_MAGA(fow_30Rnd_303_bren, 10);
		};
	};

	class TWC_Backpack_PIAT: fow_b_uk_piat_at {
		scope = 1;
		
		class TransportMagazines {
			ADD_MAGA(fow_1Rnd_piat_HEAT, 3);
		};
	};

//*******************1956************************
	class TWC_Backpack_1956_SL: TWC_Backpack_1956_Radio_Base {
		scope = 1;

		class TransportItems {
			ADD_ITEM(ACRE_PRC117F, 1);
		};
	};

	class TWC_Backpack_1956_Sergeant: TWC_Backpack_1956_Radio_Base {
		scope = 1;

		class TransportMagazines {
			ADD_MAGA(10Rnd_303_Magazine, 2);
			ADD_MAGA(UK3CB_BAF_762_20Rnd, 10);
			ADD_MAGA(fow_30Rnd_303_bren, 3);
			ADD_MAGA(SmokeShellGreen, 2);
			ADD_MAGA(SmokeShellRed, 2);
		};
	};

	class TWC_Backpack_1956_2IC: TWC_Backpack_WW2_Base {
		scope = 1;

		class TransportMagazines {
			ADD_MAGA(10Rnd_303_Magazine, 2);
			ADD_MAGA(UK3CB_BAF_762_20Rnd, 10);
			ADD_MAGA(fow_30Rnd_303_bren, 2);
		};
	};

	class TWC_Backpack_1956_AT: TWC_Backpack_WW2_Base {
		scope = 1;

		class TransportMagazines {
			ADD_MAGA(fow_1Rnd_m6a1, 3);
		};
	};
};