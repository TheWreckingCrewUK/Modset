#define ADD_SOUND(CLASSNAME,FOLDER) \
	class TWC_##CLASSNAME { \
		name = "TWC_##CLASSNAME"; \
		sound[] = { \
			twc_flavour\sounds\##FOLDER##\##CLASSNAME##.ogg \
			, 1.0, 1.0 }; \
		titles[] = {}; \
	}

class CfgSounds {
	sounds[] = {};
	
	ADD_SOUND(banzai_1,ww2);
	ADD_SOUND(banzai_2,ww2);
	ADD_SOUND(banzai_3,ww2);
	ADD_SOUND(banzai_4,ww2);
	ADD_SOUND(banzai_5,ww2);
	
	ADD_SOUND(radio_chatter,radio);
	ADD_SOUND(radio_dunkirk_german,radio);
	ADD_SOUND(radio_dunkirk_us,radio);
	ADD_SOUND(radio_norsk,radio);
	
	ADD_SOUND(bugle_call,other);
	
	ADD_SOUND(arab_crowd,crowds);
	
	ADD_SOUND(airraid_warning,alarms);
	ADD_SOUND(airraid_allclear,alarms);
};