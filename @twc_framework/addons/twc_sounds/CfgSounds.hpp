/** ADD_SOUND IS USED FOR THEMES. NOT FOR GENERIC IN GAME SOUNDS. **/
#define ADD_SOUND(CLASSNAME,FOLDER) \
	class TWC_##CLASSNAME { \
		name = "TWC_##CLASSNAME"; \
		sound[] = { \
			twc_sounds\sounds\##FOLDER##\##CLASSNAME##.ogg \
			, 0.5, 1.0 }; \
		titles[] = {0, "" }; \
	}

class CfgSounds {
	ADD_SOUND(christmas_2017_intro, christmas);
	ADD_SOUND(christmas_2017_outro, christmas);
	
	/** DEATHSCREEN SOUNDS **/
	ADD_SOUND(bleed_out,death);
	ADD_SOUND(cardiac_arrest,death);
	ADD_SOUND(clinical_death,death);
	ADD_SOUND(drowned,death);
	ADD_SOUND(instant_death,death);
	ADD_SOUND(overdose,death);
	
	/** GAME SOUNDS **/
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