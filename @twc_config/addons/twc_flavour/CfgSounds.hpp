class CfgSounds
{
	sounds[] = {};
	class twc_banzai_1
	{
		// how the sound is referred to in the editor (e.g. trigger effects)
		name = "banzai_1";
		// filename, volume, pitch, distance (optional)
		sound[] = {"twc_flavour\basilone\sounds\banzai_1.ogg", 1, 1};
		// subtitle delay in seconds, subtitle text
		titles[] = {};
	};
	class twc_banzai_2: twc_banzai_1
	{
		name = "banzai_2";
		sound[] = {"twc_flavour\basilone\sounds\banzai_2.ogg", 1, 1};
	};
	class twc_banzai_3: twc_banzai_1
	{
		name = "banzai_2";
		sound[] = {"twc_flavour\basilone\sounds\banzai_2.ogg", 1, 1};
	};
	class twc_banzai_4: twc_banzai_1
	{
		name = "banzai_2";
		sound[] = {"twc_flavour\basilone\sounds\banzai_2.ogg", 1, 1};
	};
	class twc_banzai_5: twc_banzai_1
	{
		name = "banzai_2";
		sound[] = {"twc_flavour\basilone\sounds\banzai_2.ogg", 1, 1};
	};
	class twc_radio_chatter
	{
		name = "radio_chatter";
		sound[] = {"twc_flavour\sounds\radio_chatter.ogg", 1, 1};
		titles[] = {};		
	};
	class twc_bugle_call
	{
		name = "bugle_call";
		sound[] = {"twc_flavour\sounds\bugle_call.ogg", 1, 1};
		titles[] = {};			
	};
};