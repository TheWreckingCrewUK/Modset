// Custom TWC Class
class CfgOutros {
	class Outstanding_Victory {
		title = "Outstanding Victory";
		defaultText = "Smashing job, chaps. That's bloody textbook case.";
		song = "";
		duration = 0;
	};
	
	class Victory {
		title = "Victory";
		defaultText = "We did it, TWC. Victory was achieved!";
		song = "";
		duration = 0;
	};
	
	class Pyrrhic_Victory {
		title = "Pyrrhic Victory";
		defaultText = "Victory was achieved at the cost of everything. Was it worth it?";
		song = ""; // classname of song
		duration = 0; // duration of song/cinematic
	};
	
	class Close_Defeat {
		title = "Close Defeat";
		defaultText = "Defeat was snatched from the claws of victory. We were close, but not close enough.";
		song = "";
		duration = 0;
	};
	
	class Defeat {
		title = "Defeat";
		defaultText = "We were defeated.";
		song = "";
		duration = 0;
	};
	
	class Crushing_Defeat {
		title = "Crushing Defeat";
		defaultText = "We were utterly defeated.";
		song = "";
		duration = 0;
	};
	
	class National_Embarrassment {
		title = "National Embarrassment";
		defaultText = "There will be articles in the Daily Mail about this.";
		song = "";
		duration = 0;
	};
	
	class Surrendered {
		title = "Surrendered";
		defaultText = "Remaining forces have surrendered themselves to the enemy.";
		song = "";
		duration = 0;

		// end of op, there's always player lock + 5 second fade to black
		// these determine timings and style of transition: first is base/locations, then players, then titles
		transitionsWLoc = [[5, 10, "fadeIn"], [62, 65, "crossFade"], [93, 93, "cut"]];
		transitionsWoLoc = [[5, 10, "fadeIn"], [93, 93, "cut"]];
	};
};

