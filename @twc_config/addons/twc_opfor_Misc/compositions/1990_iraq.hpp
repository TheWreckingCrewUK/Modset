class TWC_Operation_Opfor_Millennial_Iraq {
	name = "Iraqi - Infantry"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
	
	class TWC_Operation_Opfor_Millennial_Iraq_Section {
		name = "Section"; //Name of Group
		faction = "TWC_OPFOR_Units_Iraq"; //Faction
		side = 0; //Side
		
		class Unit0 {
			side = 0;
			vehicle = "GulfWar_Iraqi_Squadleader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation
		};
		
		class Unit1 {
			side = 0;
			vehicle = "GulfWar_Iraqi_Rifleman"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {2,0,0}; //Position in the formation
		};
		
		class Unit2 {
			side = 0;
			vehicle = "GulfWar_Iraqi_Rifleman"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {4,0,0}; //Position in the formation
		};
		
		class Unit3 {
			side = 0;
			vehicle = "GulfWar_Iraqi_Rifleman"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {6,0,0}; //Position in the formation
		};
		
		class Unit4 {
			side = 0;
			vehicle = "GulfWar_Iraqi_Rifleman"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {8,0,0}; //Position in the formation
		};
		
		class Unit5 {
			side = 0;
			vehicle = "GulfWar_Iraqi_Squadleader"; //Class name of desired solider
			rank = "CORPORAL"; // Rank
			position[] = {10,0,0}; //Position in the formation
		};
		
		class Unit6 {
			side = 0;
			vehicle = "GulfWar_Iraqi_MG"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {12,0,0}; //Position in the formation
		};
		
		class Unit7 {
			side = 0;
			vehicle = "GulfWar_Iraqi_MGAssistant"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {14,0,0}; //Position in the formation
		};
	};
	
	class TWC_Operation_Opfor_Millennial_Iraq_MG_Team {
		name = "MG Team"; //Name of Group
		faction = "TWC_OPFOR_Units_Iraq"; //Faction
		side = 0; //Side
		
		class Unit0 {
			side = 0;
			vehicle = "GulfWar_Iraqi_Squadleader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation
		};
		
		class Unit1 {
			side = 0;
			vehicle = "GulfWar_Iraqi_MG"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {2,0,0}; //Position in the formation
		};
		
		class Unit2 {
			side = 0;
			vehicle = "GulfWar_Iraqi_MGAssistant"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {4,0,0}; //Position in the formation
		};
	};
	
	class TWC_Operation_Opfor_Millennial_Iraq_AT_Team {
		name = "Anti-Tank Team"; //Name of Group
		faction = "TWC_OPFOR_Units_Iraq"; //Faction
		side = 0; //Side
		
		class Unit0 {
			side = 0;
			vehicle = "GulfWar_Iraqi_Squadleader"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation
		};
		
		class Unit1 {
			side = 0;
			vehicle = "GulfWar_Iraqi_RPG"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {2,0,0}; //Position in the formation
		};
		
		class Unit2 {
			side = 0;
			vehicle = "GulfWar_Iraqi_RPGAssistant"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {4,0,0}; //Position in the formation
		};
		
		class Unit3 {
			side = 0;
			vehicle = "GulfWar_Iraqi_RPGAssistant"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {6,0,0}; //Position in the formation
		};
	};
};