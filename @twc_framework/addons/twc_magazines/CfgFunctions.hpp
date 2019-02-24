class CfgFunctions {
	class ace_magazinerepack {
		tag = "ace_magazinerepack";
		class ace_magazinerepack {
			class getMagazineChildren {
				file = "twc_magazines\functions\fn_getMagazineChildren.sqf";
			};

			class magazineRepackFinish {
				file = "twc_magazines\functions\fn_magazineRepackFinish.sqf";
			};

			class magazineRepackProgress {
				file = "twc_magazines\functions\fn_magazineRepackProgress.sqf";
			};

			class startRepackingMagazine {
				file = "twc_magazines\functions\fn_startRepackingMagazine.sqf";
			};
		};
	};
	
	class twc_magazines {
		tag = "twc_magazines";
		
		class twc_magazines {
			class handleReloaded {};
			class doesMagazineSupportEmpty {};
		};
	};
};