class CfgFunctions {
	class ace_magazinerepack {
		tag = "ace_magazinerepack";
		class ace_magazinerepack {
			class getMagazineChildren {
				file = "twc_magazines\functions\fn_getMagazineChildren.sqf";
			};
		};
	};
	
	class TWC_Magazines {
		tag = "twc_magazines";
		
		class TWC_Magazines {
			file = "twc_magazines\functions";
			
			class handleReloaded {};
			class doesMagazineSupportEmpty {};
			class magazineDetails {};
			
			class getMagazineActions {};
			class getEmptyActions {}; 
			
			class startRepackingMagazine {};
			class simulateRepackEvents {};
			class magazineRepackProgress {};
			class magazineRepackFinish {};
			
			class startEmptyingMagazine {};
			class simulateEmptyEvents {};
			class magazineEmptyProgress {};
			class magazineEmptyFinish {};

			class startRefillingMagazine {};
			class simulateRefillEvents {};
			class magazineRefillProgress {};
			class magazineRefillFinish {};
		};
	};
};