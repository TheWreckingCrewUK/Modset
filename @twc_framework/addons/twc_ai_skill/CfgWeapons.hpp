/*
Flaw with code is AI are capable of firing single fire weapons very fast
(Spawn a blufor AI with an SLR and laugh)
However, Since this is a PC game we are also able to so it is fair
Thus AI are more willing to put more bullets down range than just single shot
*/
class Mode_SemiAuto {
	aiDispersionCoefX = 2.5;
	aiDispersionCoefY = 2.8;
	
	aiRateOfFire = 1.45;
	aiRateOfFireDistance = 800; //Was 600 Now is 800 cause AI would just stand and take it like a man
	minRange = 0;
	minRangeProbab = 0.7;
	midRange = 300;
	midRangeProbab = 0.5;
	maxRange = 800;
	maxRangeProbab = 0.2;
};

class Mode_Burst: Mode_SemiAuto {
	aiDispersionCoefX = 2.9;
	aiDispersionCoefY = 3.4;
	
	aiRateOfFire = 1;
	aiRateOfFireDistance = 150;
	minRange = 0;
	minRangeProbab = 0.8;
	midRange = 150;
	midRangeProbab = 0.7;
	maxRange = 450;
	maxRangeProbab = 0.1;
};

class Mode_FullAuto: Mode_SemiAuto {
	aiDispersionCoefX = 3.2;
	aiDispersionCoefY = 3.8;
	
	aiRateOfFire = 0.1;
	aiRateOfFireDistance = 50;
	minRange = 0;
	minRangeProbab = 0.2;
	midRange = 75;
	midRangeProbab = 0.5;
	maxRange = 300;
	maxRangeProbab = 0.1;
};

class CfgWeapons {
	class Default;
	class RifleCore;

	class Rifle: RifleCore {
		aiDispersionCoefX = 9;
		aiDispersionCoefY = 10;
	};
	
	class MGunCore: Default {
		aiDispersionCoefX = 14;
		aiDispersionCoefY = 15;
	};

	class GrenadeLauncher: Default {
		aiDispersionCoefX = 25;
		aiDispersionCoefY = 26;
	};

/*
//Removed because AI throwing accurracy does not need to be less accurate like the grenade launcher
	class Throw: GrenadeLauncher {
		class ThrowMuzzle: GrenadeLauncher {
			aiDispersionCoefX = 25;
			aiDispersionCoefY = 26;
		};
	};
*/
};