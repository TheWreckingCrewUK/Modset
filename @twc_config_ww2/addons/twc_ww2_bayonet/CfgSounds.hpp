#define ADD_SOUND_V(CLASSNAME,FOLDER,VOLUME) \
	class TWC_##CLASSNAME { \
		name = "TWC_##CLASSNAME"; \
		sound[] = { \
			twc_sounds\sounds\##FOLDER##\##CLASSNAME##.ogg \
			, VOLUME##, 1.0 }; \
		titles[] = {0, "" }; \
	}

class CfgSounds {
	ADD_SOUND_V(b_death_1,sounds,2);
	ADD_SOUND_V(b_death_2,sounds,2);
	ADD_SOUND_V(b_death_3,sounds,2);
	ADD_SOUND_V(b_death_4,sounds,2);
	ADD_SOUND_V(b_death_5,sounds,2);
};