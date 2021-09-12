class CfgFunctions {
	class TWC_Deathscreen {
		class functions {
			file = "twc_deathscreen\functions";
			
			/** INIT **/
			class clientInit {};
			class serverInit { postInit = 1; };
			class bestGuessDeath {};
			class getDeathData {};
			class fadeInSound {};
		};
	};
};