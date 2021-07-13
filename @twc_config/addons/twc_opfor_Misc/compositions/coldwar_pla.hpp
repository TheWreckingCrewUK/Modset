class TWC_Operation_Opfor_ColdWar_PLA {
	name = "People's Liberation Army";
	
	class TWC_Operation_Opfor_ColdWar_PLA_Squad {
		name = "Squad"; //Name of Group
		faction = "TWC_PLACW_Units"; //Faction
		side = 0; //Side
		
		class Unit0 {
			side = 0;
			vehicle = "PLA_CW_Squadleader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation
		};
		class Unit1 {
			side = 0;
			vehicle = "PLA_CW_Rifleman"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {2,0,0}; //Position in the formation
		};
		class Unit2 {
			side = 0;
			vehicle = "PLA_CW_Marksman"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {4,0,0}; //Position in the formation
		};
		class Unit3 {
			side = 0;
			vehicle = "PLA_CW_RiflemanAT"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {6,0,0}; //Position in the formation
		};
		class Unit4 {
			side = 0;
			vehicle = "PLA_CW_AT_Assistant"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {8,0,0}; //Position in the formation
		};
		class Unit5 {
			side = 0;
			vehicle = "PLA_CW_Teamleader"; //Class name of desired solider
			rank = "CORPORAL"; // Rank
			position[] = {10,0,0}; //Position in the formation
		};
		class Unit6 {
			side = 0;
			vehicle = "PLA_CW_Machinegunner"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {12,0,0}; //Position in the formation
		};
		class Unit7 {
			side = 0;
			vehicle = "PLA_CW_MG_Assistant"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {14,0,0}; //Position in the formation
		};
	};
	class TWC_Operation_Opfor_ColdWar_PLA_MG_Team {
		name = "MG Team"; //Name of Group
		faction = "TWC_PLACW_Units"; //Faction
		side = 0; //Side
		
		class Unit0 {
			side = 0;
			vehicle = "PLA_CW_Teamleader"; //Class name of desired solider
			rank = "CORPORAL"; // Rank
			position[] = {0,0,0}; //Position in the formation
		};
		class Unit1 {
			side = 0;
			vehicle = "PLA_CW_Machinegunner"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {2,0,0}; //Position in the formation
		};
		class Unit2 {
			side = 0;
			vehicle = "PLA_CW_MG_Assistant"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {4,0,0}; //Position in the formation
		};
	};
	class TWC_Operation_Opfor_ColdWar_PLA_AT_Team {
		name = "AT Team"; //Name of Group
		faction = "TWC_PLACW_Units"; //Faction
		side = 0; //Side
		
		class Unit0 {
			side = 0;
			vehicle = "PLA_CW_Teamleader"; //Class name of desired solider
			rank = "CORPORAL"; // Rank
			position[] = {0,0,0}; //Position in the formation
		};
		class Unit1 {
			side = 0;
			vehicle = "PLA_CW_RiflemanAT"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {2,0,0}; //Position in the formation
		};
		class Unit2 {
			side = 0;
			vehicle = "PLA_CW_AT_Assistant"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {4,0,0}; //Position in the formation
		};
	};
	class TWC_Operation_Opfor_ColdWar_PLA_Sniper_Team {
		name = "Sniper Team"; //Name of Group
		faction = "TWC_OPFOR_Units_Aden"; //Faction
		side = 0; //Side
		
		class Unit0 {
			side = 0;
			vehicle = "PLA_CW_Spotter"; //Class name of desired solider
			rank = "CORPORAL"; // Rank
			position[] = {0,0,0}; //Position in the formation
		};
		class Unit1 {
			side = 0;
			vehicle = "PLA_CW_Sniper"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {2,0,0}; //Position in the formation
		};
	};
	class TWC_Operation_Opfor_ColdWar_PLA_Vehicle_Crew {
		name = "Vehicle Crew"; //Name of Group
		faction = "TWC_PLACW_Units"; //Faction
		side = 0; //Side
		
		class Unit0 {
			side = 0;
			vehicle = "PLA_CW_Crewman"; //Class name of desired solider
			rank = "CORPORAL"; // Rank
			position[] = {0,0,0}; //Position in the formation
		};
		class Unit1 {
			side = 0;
			vehicle = "PLA_CW_Crewman"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {2,0,0}; //Position in the formation
		};
		class Unit2 {
			side = 0;
			vehicle = "PLA_CW_Crewman"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {4,0,0}; //Position in the formation
		};
	};
};