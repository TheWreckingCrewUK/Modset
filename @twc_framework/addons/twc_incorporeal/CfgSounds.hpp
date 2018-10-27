/** ADD_SOUND IS USED FOR THEMES. NOT FOR GENERIC IN GAME SOUNDS. **/
#define ADD_SOUND(CLASSNAME,FOLDER) \
	class TWC_##CLASSNAME { \
		name = "TWC_##CLASSNAME##"; \
		sound[] = {"twc_intro\sounds\##FOLDER##\##CLASSNAME##.ogg", 5, 1.0 }; \
		titles[] = {0, "" }; \
	}

class CfgSounds {
	ADD_SOUND(christmas_2017_intro, christmas);
	ADD_SOUND(christmas_2017_outro, christmas);
	
	/** DEATHSCREEN SOUNDS **/
	ADD_SOUND(bleed_out, death);
	ADD_SOUND(instant_death, death);
};