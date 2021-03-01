class CfgSounds {
	sounds[] = {TWC_Sound_Medical_Surgery, TWC_Sound_Medical_Surgery_NoEarPlugs};
	
	class TWC_Sound_Medical_Surgery {
		name = "TWC_Sound_Medical_Surgery";
		sound[] = {"\TWC_Medical_Surgery\sounds\surgery.ogg", db + 10, 1};
		titles[] = {};
	};
	
	class TWC_Sound_Medical_Surgery_NoEarPlugs {
		name = "TWC_Sound_Medical_Surgery_NoEarPlugs";
		sound[] = {"\TWC_Medical_Surgery\sounds\surgery.ogg", 2, 1};
		titles[] = {};
	};
};