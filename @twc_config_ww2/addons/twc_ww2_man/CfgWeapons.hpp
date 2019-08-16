class CfgWeapons {
	class Default;
	class RifleCore;

	class MGunCore: Default {
		aiDispersionCoefX = 1.25;
		aiDispersionCoefY = 1;
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