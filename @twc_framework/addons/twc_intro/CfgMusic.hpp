#define ADD_MUSIC(CLASSNAME,FOLDER) \
	class CLASSNAME { \
		name = #CLASSNAME; \
		sound[] = {"twc_intro\themes\##FOLDER##\##CLASSNAME##.ogg", 10, 1}; \
	}

class CfgMusic {
	tracks[] = {};
	
	/** classname must be same as filename **/
	ADD_MUSIC(modern_day_intro, operation);
	ADD_MUSIC(modern_night_intro, operation);
	ADD_MUSIC(millennial_day_intro, operation);
	ADD_MUSIC(millennial_night_intro, operation);
	ADD_MUSIC(coldwar_day_intro, operation);
	ADD_MUSIC(coldwar_night_intro, operation);
};