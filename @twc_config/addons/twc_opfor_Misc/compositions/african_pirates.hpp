class TWC_Operation_Indep_African_Pirates {
	name = "African Pirates"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
	
	class TWC_Operation_Indep_African_Pirates_Section {
		name = "Section"; //Name of Group
		faction = "Men_AfricanPirates"; //Faction
		side = 2; //Side
		
		class Unit0 {
			side = 2;
			vehicle = "Afr_Pirate_SquadLeader_Random"; //Class name of desired solider
			rank = "SERGEANT"; // Rank
			position[] = {0,0,0}; //Position in the formation
		};
		
		class Unit1 {
			side = 2;
			vehicle = "Afr_Pirate_Rifleman_Random"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {2,0,0}; //Position in the formation
		};
		
		class Unit2 {
			side = 2;
			vehicle = "Afr_Pirate_Rifleman_Random"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {4,0,0}; //Position in the formation
		};
		
		class Unit3 {
			side = 2;
			vehicle = "Afr_Pirate_Rifleman_Random"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {6,0,0}; //Position in the formation
		};
		
		class Unit4 {
			side = 2;
			vehicle = "Afr_Pirate_Rifleman_Random"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {9,0,0}; //Position in the formation
		};
		
		class Unit5 {
			side = 2;
			vehicle = "Afr_Pirate_Grenadier_Random"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {12,0,0}; //Position in the formation
		};
		
		class Unit6 {
			side = 2;
			vehicle = "Afr_Pirate_RPG_Random"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {15,0,0}; //Position in the formation
		};
		
		class Unit7 {
			side = 2;
			vehicle = "Afr_Pirate_MachineGunner"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {18,0,0}; //Position in the formation
		};
		
		class Unit8 {
			side = 2;
			vehicle = "Afr_Pirate_MachineGunner"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {21,0,0}; //Position in the formation
		};
		
		class Unit9 {
			side = 2;
			vehicle = "Afr_Pirate_Marksman_Random"; //Class name of desired solider
			rank = "PRIVATE"; // Rank
			position[] = {24,0,0}; //Position in the formation
		};
	};
};