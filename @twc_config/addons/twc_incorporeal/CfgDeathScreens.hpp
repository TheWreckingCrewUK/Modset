class CfgDeathScreens {
	class bleed_out {
		text = "bled out";
		sound = "twc_bleed_out";
		fadeBegins = 30; // when's the music start to fade? (duration = out - begins).
		fadeOut = 61;
	};
	
	class cardiac_arrest {
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
	
	class head_shot: instant_death {
		text = "had their head blown off";
	};
	
	class shot_through_the_heart: instant_death {
		text = "was shot through the heart";
	};
	
	class shot_to_pieces: instant_death {
		text = "was turned into a colander";
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