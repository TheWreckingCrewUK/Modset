class CfgDeathScreens {
	class bleed_out {
		text = "bled out";
		sound = "twc_bleed_out";
		fadeOut = 61; // fade at this time (seconds)
	};
	
	class cardiac_arrest {
		text = "suffered a cardiac arrest";
		sound = "twc_cardiac_arrest";
		fadeOut = 50;
	};
	
	class clinical_death {
		text = "declared clinically dead";
		sound = "clinical_death";
		fadeOut = 88;
	};
	
	class drowned {
		text = "drowned";
		sound = "twc_drowned";
		fadeOut = 67;
	};
	
	class instant_death {
		text = "was killed instantaneously";
		sound = "twc_instant_death";
		fadeOut = 63;
	};
	
	class overdose {
		text = "died via overdose";
		sound = "twc_overdose";
		fadeOut = 80;
	};
	
	class overdose_morphine: overdose {
		text = "died via morphine overdose";
	};
	
	class overdose_epinephrine: overdose {
		text = "died via epinephrine overdose";
	};
};