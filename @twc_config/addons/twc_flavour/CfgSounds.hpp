class CfgSounds
{
	sounds[] = {};
	class twc_banzai_1
	{
		// how the sound is referred to in the editor (e.g. trigger effects)
		name = "banzai_1";
		// filename, volume, pitch, distance (optional)
		sound[] = {"twc_flavour\basilone\sounds\banzai_1.ogg", 10, 1};
		// subtitle delay in seconds, subtitle text
		titles[] = {};
	};
	class twc_banzai_2: banzai_1
	{
		name = "banzai_2";
		sound[] = {"twc_flavour\basilone\sounds\banzai_2.ogg", 30, 1};
	};
	class twc_banzai_3: banzai_1
	{
		name = "banzai_2";
		sound[] = {"twc_flavour\basilone\sounds\banzai_2.ogg", 30, 1};		
	};
	class twc_banzai_4: banzai_1
	{
		name = "banzai_2";
		sound[] = {"twc_flavour\basilone\sounds\banzai_2.ogg", 30, 1};		
	};
	class twc_banzai_5: banzai_1
	{
		name = "banzai_2";
		sound[] = {"twc_flavour\basilone\sounds\banzai_2.ogg", 30, 1};		
	};
};