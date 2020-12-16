/** ADD_SOUND IS USED FOR THEMES. NOT FOR GENERIC IN GAME SOUNDS. **/
#define ADD_SOUND(CLASSNAME,FOLDER) \
	class TWC_##CLASSNAME { \
		name = "TWC_##CLASSNAME"; \
		sound[] = { \
			twc_sounds\sounds\##FOLDER##\##CLASSNAME##.ogg \
			, 0.5, 1.0 }; \
		titles[] = {0, "" }; \
	}
	
#define ADD_SOUND_V(CLASSNAME,FOLDER,VOLUME) \
	class TWC_##CLASSNAME { \
		name = "TWC_##CLASSNAME"; \
		sound[] = { \
			twc_sounds\sounds\##FOLDER##\##CLASSNAME##.ogg \
			, VOLUME##, 1.0 }; \
		titles[] = {0, "" }; \
	}

class CfgSounds {
	ADD_SOUND(christmas_2017_intro, christmas);
	ADD_SOUND(christmas_2017_outro, christmas);
	
	/** DEATHSCREEN SOUNDS **/
	ADD_SOUND_V(bleed_out,death,0.25);
	ADD_SOUND_V(cardiac_arrest,death,0.25);
	ADD_SOUND_V(clinical_death,death,0.25);
	ADD_SOUND_V(drowned,death,0.25);
	ADD_SOUND_V(instant_death,death,0.25);
	ADD_SOUND_V(overdose,death,0.25);
	ADD_SOUND_V(broadcast_mode,death,0.25);
	
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
	
	ADD_SOUND(artillery_1,artillery);
	ADD_SOUND(artillery_2,artillery);
	ADD_SOUND(artillery_3,artillery);
	
	ADD_SOUND(airraid_warning,alarms);
	ADD_SOUND(airraid_allclear,alarms);
	ADD_SOUND(car_alarm,alarms);
	
	ADD_SOUND(cat,animals);
	ADD_SOUND(dog,animals);
	ADD_SOUND(dog_1,animals);
	ADD_SOUND(dog_2,animals);
	ADD_SOUND(dog_3,animals);
	ADD_SOUND(dog_indoors,animals);
	ADD_SOUND(sheep,animals);
	ADD_SOUND(sheep_1,animals);
	ADD_SOUND(sheep_2,animals);
	ADD_SOUND(sheep_3,animals);
	ADD_SOUND(sheep_4,animals);
	ADD_SOUND(wolf,animals);
	ADD_SOUND(wolf_1,animals);
	ADD_SOUND(wolf_2,animals);
	ADD_SOUND(wolf_3,animals);
	
	ADD_SOUND(chainsaw,environment);
	ADD_SOUND(construction,environment);
	ADD_SOUND(construction_1,environment);
	ADD_SOUND(fire,environment);
	ADD_SOUND(strong_wind,environment);
	ADD_SOUND(wind,environment);
	ADD_SOUND(wind_1,environment);
	
	ADD_SOUND(door,halloween);
	ADD_SOUND(horror_1,halloween);
	ADD_SOUND(tort_1,halloween);
	ADD_SOUND(tort_2,halloween);
};