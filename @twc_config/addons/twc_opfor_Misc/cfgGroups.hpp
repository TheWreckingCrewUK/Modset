class CfgGroups {
	class East {
		name = "OPFOR";
		side = 0;
		
		class TWC_Operation_Opfor_ColdWar {
			name = "TWC Operations - Cold War";
			
			/* COLDWAR COMPOSITIONS - GROUP DEFINES */
			#include "compositions\coldwar_ira.hpp"
			#include "compositions\coldwar_aden.hpp"
		};
		
		class TWC_Operation_Opfor_Millennial {
			name = "TWC Operations - Millennial";
			
			/* MILLENNIAL COMPOSITIONS - GROUP DEFINES */
			// todo
		};
		
		class TWC_Operation_Opfor_Modern {
			name = "TWC Operations - Modern";
			
			/* MODERN COMPOSITIONS - GROUP DEFINES */
			// todo
		};
	};

	class INDEP {
		name = "INDEPENDENT";
		side = 2;
		class TWC_Operation_INDEP_ColdWar {
			name = "TWC Operations - Cold War";
			
			/* COLDWAR COMPOSITIONS - GROUP DEFINES */
			#include "compositions\1980_argentina.hpp"
		};
		class TWC_Operation_INDEP {
			name = "TWC Operations - Independents";
			#include "compositions\african_pirates.hpp"
		};
	};
};