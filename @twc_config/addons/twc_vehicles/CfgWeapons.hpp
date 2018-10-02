class CUP_Vlmg_L94A1_Coax;
class ACE_ItemCore;
class autocannon_Base_F;
class InventoryItem_Base_F;

class TWC_Weapon_762_GPMG_Vehicle: CUP_Vlmg_L94A1_Coax {
	displayname = "L94A1 GPMG";
};

class TWC_Weapon_30mm_Rarden_Vehicle: autocannon_Base_F {
	displayName = "L21A1 Rarden";
	magazines[] = {"TWC_Magazine_30mm_3rd_APDS", "TWC_Magazine_30mm_3rd_HET"};
	magazineReloadTime = 1.2;
	
	class player: Mode_FullAuto {
		magazineReloadTime = 1.2;
		reloadTime = 0.4;
		autoReload = 0;
		autoFire = 1;
		sounds[] = {"StandardSound"};

		class StandardSound {
			begin1[] = {
				"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\autocannon_40mm_body_01",
				1.9952624,
				1,
				1500
			};

			begin2[] = {
				"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\autocannon_40mm_body_02",
				1.9952624,
				1,
				1500
			};

			begin3[] = {
				"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\autocannon_40mm_body_03",
				1.9952624,
				1,
				1500
			};

			soundBegin[] = {
				"begin1",
				0.33,
				"begin2",
				0.33,
				"begin3",
				0.34
			};
		};
	};
	
	class close: player {
		showToPlayer = 0;
		soundBurst = 1;
		burst = 15;
		aiRateOfFire = 0.5;
		aiRateOfFireDistance = 50;
		minRange = 0;
		minRangeProbab = 0.05;
		midRange = 500;
		midRangeProbab = 0.58;
		maxRange = 1000;
		maxRangeProbab = 0.04;
		aiDispersionCoefX = 6;
		aiDispersionCoefY = 6;
		ffMagnitude = 0.5;
		ffFrequency = 11;
		ffCount = 3;
	};
	
	class short: close {
		showToPlayer = 0;
		burst = 10;
		aiRateOfFire = 1;
		aiRateOfFireDistance = 300;
		minRange = 500;
		minRangeProbab = 0.05;
		midRange = 1000;
		midRangeProbab = 0.58;
		maxRange = 1500;
		maxRangeProbab = 0.04;
	};
	
	class medium: short {
		showToPlayer = 0;
		soundBurst = 0;
		burst = 7;
		aiRateOfFire = 3;
		aiRateOfFireDistance = 600;
		minRange = 1000;
		minRangeProbab = 0.05;
		midRange = 1500;
		midRangeProbab = 0.58;
		maxRange = 2000;
		maxRangeProbab = 0.04;
	};

	class far: medium {
		burst = 4;
		aiRateOfFire = 5;
		aiRateOfFireDistance = 1000;
		minRange = 1500;
		minRangeProbab = 0.05;
		midRange = 2500;
		midRangeProbab = 0.4;
		maxRange = 3000;
		maxRangeProbab = 0.01;
	};
};

// Items, so they come up in the inventory for the reload system
class TWC_Item_30mm_3rd_HET: ACE_ItemCore {
	scope = 2;
	picture = "twc_vehicles\ui\30mmHE.paa";
	displayName = "L13A1 30mm 3rd HE-T";
	descriptionShort = "Used in the FV510 Warrior";
	descriptionUse = "";
	
	class ItemInfo: InventoryItem_Base_F {
		mass = 30;
	};
};

class TWC_Item_30mm_3rd_APDS: ACE_ItemCore {
	scope = 2;
	picture = "twc_vehicles\ui\30mmAP.paa";
	displayName = "L14A1 30mm 3rd APDS";
	descriptionShort = "Used in the FV510 Warrior";
	descriptionUse = "";
	
	class ItemInfo: InventoryItem_Base_F {
		mass = 30;
	};
};

// Challenger 2 Gun (for ACE)
class cannon_125mm;
class CHAL_125_MAINGUN: cannon_125mm {
	ace_overpressure_angle = 90;
	ace_overpressure_range = 60;
	ace_overpressure_damage = 0.8;
};
