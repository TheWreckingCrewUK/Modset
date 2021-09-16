class Mode_SemiAuto {
	aiDispersionCoefX = 1.7;
	aiDispersionCoefY = 2;
	
	aiRateOfFire = 1.45;
	aiRateOfFireDistance = 600;
	minRange = 0;
	minRangeProbab = 0.7;
	midRange = 300;
	midRangeProbab = 0.5;
	maxRange = 650;
	maxRangeProbab = 0.2;
};

class Mode_Burst: Mode_SemiAuto {
	aiDispersionCoefX = 2.1;
	aiDispersionCoefY = 2.6;
	
	aiRateOfFire = 1;
	aiRateOfFireDistance = 150;
	minRange = 0;
	minRangeProbab = 0.8;
	midRange = 150;
	midRangeProbab = 0.7;
	maxRange = 300;
	maxRangeProbab = 0.1;
};

class Mode_FullAuto: Mode_SemiAuto {
	aiDispersionCoefX = 2.4;
	aiDispersionCoefY = 3;
	
	aiRateOfFire = 0.1;
	aiRateOfFireDistance = 50;
	minRange = 0;
	minRangeProbab = 0.2;
	midRange = 75;
	midRangeProbab = 0.5;
	maxRange = 150;
	maxRangeProbab = 0.1;
};

class CfgWeapons {
	class Default;
	class RifleCore;

	class Rifle: RifleCore {
		aiDispersionCoefX = 8;
		aiDispersionCoefY = 9;
	};
	
	class MGunCore: Default {
		aiDispersionCoefX = 13;
		aiDispersionCoefY = 14;
	};

	class GrenadeLauncher: Default {
		aiDispersionCoefX = 25;
		aiDispersionCoefY = 26;
	};

	class Throw: GrenadeLauncher {
		class ThrowMuzzle: GrenadeLauncher {
			aiDispersionCoefX = 25;
			aiDispersionCoefY = 26;
		};
	};
};