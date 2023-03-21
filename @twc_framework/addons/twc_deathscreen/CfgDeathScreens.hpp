class CfgDeathScreens {
	class Bleedout {
		text = "bled out";
		sound = "twc_bleed_out";
		fadeBegins = 30; // when's the music start to fade? (duration = out - begins).
		fadeOut = 61;
	};
	
	class Timeout {
		text = "suffered a cardiac arrest";
		sound = "twc_cardiac_arrest";
		fadeBegins = 30;
		fadeOut = 50;
	};
	
	class clinical_death {
		text = "was declared clinically dead";
		sound = "twc_clinical_death";
		fadeBegins = 30;
		fadeOut = 88;
	};
	
	class Death: clinical_death {
		text = "was put out their misery";
	};
	
	class drowned {
		text = "drowned";
		sound = "twc_drowned";
		fadeBegins = 30;
		fadeOut = 67;
	};
	
	class instant_death {
		text = "was killed instantaneously";
		sound = "twc_instant_death";
		fadeBegins = 30;
		fadeOut = 57;
	};
	
	class broadcast_mode: instant_death {
		sound = "twc_broadcast_mode";
		fadeOut = 95;
	};
	
	class overdose {
		text = "died via overdose";
		sound = "twc_overdose";
		fadeBegins = 30;
		fadeOut = 80;
	};
	
	class removed_from_surgery {
		text = "was removed from surgery early";
		sound = "twc_cardiac_arrest"; // placeholder
		fadeBegins = 30;
		fadeOut = 50;
	};
	
	class overdose_morphine: overdose {
		text = "died via morphine overdose";
	};
	
	class overdose_epinephrine: overdose {
		text = "died via epinephrine overdose";
	};
};