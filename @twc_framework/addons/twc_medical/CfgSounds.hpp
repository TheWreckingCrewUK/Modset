class CfgSounds {
	sounds[] = {TWC_Sound_Medical_Suturing, TWC_Sound_Medical_Defib, TWC_Sound_Medical_Surgery};
	
	class TWC_Sound_Medical_Suturing {
		name = "TWC_Sound_Medical_Suturing";
		sound[] = {"\twc_medical\sounds\suturing.ogg", db + 10, 1};
		titles[] = {};
	};

	class TWC_Sound_Medical_Defib {
		name = "TWC_Sound_Medical_Defib";
		sound[] = {"\twc_medical\sounds\defib.ogg", db + 10, 1};
		titles[] = {};
	};
	
	class TWC_Sound_Medical_Surgery {
		name = "TWC_Sound_Medical_Surgery";
		sound[] = {"\twc_medical\sounds\surgery.ogg", db + 10, 1};
		titles[] = {};
	};
};