class UK3CB_BAF_Wildcat_AH1_CAS_8A;

class TWC_BaseClass_Wildcat: UK3CB_BAF_Wildcat_AH1_CAS_8B {
	scope = 1;

	class AnimationSources;
};

class TWC_BaseClass_Wildcat_F: TWC_BaseClass_Wildcat {
	class AnimationSources: AnimationSources {
		class ClanLogo_Hide {
			animPeriod = 1e-006;
			author = "www.3commandobrigade.com";
			displayName = "Hide Clan Logo";
			initPhase = 1;
			source = "user";
		};
	};
};