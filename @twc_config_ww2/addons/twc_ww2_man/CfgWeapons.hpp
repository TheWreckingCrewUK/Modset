class CfgWeapons {
	class Default;

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