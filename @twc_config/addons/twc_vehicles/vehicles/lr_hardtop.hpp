class UK3CB_BAF_LandRover_Hard_FFR_Green_B;
class TWC_BaseClass_LR_Hard_Base: UK3CB_BAF_LandRover_Hard_FFR_Green_B {
	scope = 0;
	class AnimationSources;
};

class TWC_BaseClass_LR_Soft_Hard_F: TWC_BaseClass_LR_Hard_Base {
	class AnimationSources: AnimationSources {
		class AerialFL_Hide;
		class AerialFR_Hide;
		class AerialAtuL_Hide;
		class AerialAtuR_Hide;
		class ClanLogo_Hide;
		class Mudguards_Hide;
	};
};