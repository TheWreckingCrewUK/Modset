class Mode_SemiAuto {
	aiDispersionCoefX = 1.7;
	aiDispersionCoefY = 2;
	
	aiRateOfFire = 1.65;
	aiRateOfFireDistance = 550;
	minRange = 0;
	minRangeProbab = 0.7;
	midRange = 300;
	midRangeProbab = 0.5;
	maxRange = 650;
	maxRangeProbab = 0.1;
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
	maxRange = 250;
	maxRangeProbab = 0.1;
};

class Mode_FullAuto: Mode_SemiAuto {
	aiDispersionCoefX = 2.4;
	aiDispersionCoefY = 3;
	
	aiRateOfFire = 0.1;
	aiRateOfFireDistance = 50;
	minRange = 0;
	minRangeProbab = 0.2;
	midRange = 60;
	midRangeProbab = 0.5;
	maxRange = 120;
	maxRangeProbab = 0.1;
};

class CfgWeapons {
	class Default;
	class RifleCore;

	class Rifle: RifleCore {
		aiDispersionCoefX = 10;
		aiDispersionCoefY = 10;
	};
	
	class MGunCore: Default {
		aiDispersionCoefX = 16;
		aiDispersionCoefY = 17;
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