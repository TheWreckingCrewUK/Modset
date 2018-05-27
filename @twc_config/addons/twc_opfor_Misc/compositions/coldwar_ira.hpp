class TWC_Operation_Opfor_ColdWar_IRA {
	name = "IRA"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
	
	class TWC_Operation_Opfor_ColdWar_IRA_Urban_Assault_Team {
		name = "Urban Assault - Team"; //Name of Group
		faction = "ira_units"; //Faction
		side = 0; //Side
		
		class Unit0 {
			side = 0;
			vehicle = "IRA_Urban_Sterling"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation
		};
		
		class Unit1 {
			side = 0;
			vehicle = "IRA_Urban_AKS74U"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {2,0,0}; //Position in the formation
		};
		
		class Unit2 {
			side = 0;
			vehicle = "IRA_Urban_Pistoleer"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {4,0,0}; //Position in the formation
		};
		
		class Unit3 {
			side = 0;
			vehicle = "IRA_Urban_Skorpion"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {6,0,0}; //Position in the formation
		};
	};
};