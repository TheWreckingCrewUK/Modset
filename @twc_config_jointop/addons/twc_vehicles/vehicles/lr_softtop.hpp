class UK3CB_BAF_LandRover_Soft_Green_B;
class TWC_BaseClass_LR_Soft_Base: UK3CB_BAF_LandRover_Soft_Green_B {
	scope = 0;
	class AnimationSources;
	TWC_isExposedVehicle = 1;
	class AcreIntercoms {};
	class AcreRacks {};
};

class TWC_BaseClass_LR_Soft_Base_F: TWC_BaseClass_LR_Soft_Base {
	class AnimationSources: AnimationSources {
		class AerialFL_Hide;
		class AerialFR_Hide;
		class AerialAtuL_Hide;
		class AerialAtuR_Hide;
		class ClanLogo_Hide;
		class Mudguards_Hide;
	};
};