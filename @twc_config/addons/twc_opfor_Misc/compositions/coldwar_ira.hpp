class TWC_Operation_Opfor_ColdWar_IRA {
	name = "IRA"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
	
	class TWC_Operation_Opfor_ColdWar_IRA_Urban_Assault_Team {
		name = "Urban Assault Team"; //Name of Group
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
	
	class TWC_Operation_Opfor_ColdWar_IRA_Urban_GrenadierAssault_Team {
		name = "Urban Grenadier Assault Team"; //Name of Group
		faction = "ira_units"; //Faction
		side = 0; //Side
		
		class Unit0 {
			side = 0;
			vehicle = "IRA_Urban_Sterling";
			rank = "SERGEANT";
			position[] = {0,0,0};
		};
		
		class Unit1 {
			side = 0;
			vehicle = "IRA_Urban_MP5";
			rank = "PRIVATE";
			position[] = {2,0,0};
		};
		
		class Unit2 {
			side = 0;
			vehicle = "IRA_Urban_Pistoleer";
			rank = "PRIVATE";
			position[] = {4,0,0};
		};
		
		class Unit3 {
			side = 0;
			vehicle = "IRA_Urban_Grenadier";
			rank = "PRIVATE";
			position[] = {6,0,0};
		};
	};
	
	class TWC_Operation_Opfor_ColdWar_IRA_AntiTank_Team {
		name = "Anti-Tank Team";
		faction = "ira_units";
		side = 0;
		
		class Unit0 {
			side = 0;
			vehicle = "IRA_Field_SLR_AT";
			rank = "SERGEANT";
			position[] = {0,0,0};
		};
		
		class Unit1 {
			side = 0;
			vehicle = "IRA_Field_Falv1";
			rank = "PRIVATE";
			position[] = {2,0,0};
		};
	};
	
	class TWC_Operation_Opfor_ColdWar_IRA_AntiAir_Team {
		name = "Anti-Air Team";
		faction = "ira_units";
		side = 0;
		
		class Unit0 {
			side = 0;
			vehicle = "IRA_Field_AA";
			rank = "SERGEANT";
			position[] = {0,0,0};
		};
		
		class Unit1 {
			side = 0;
			vehicle = "IRA_Field_Falv2";
			rank = "PRIVATE";
			position[] = {2,0,0};
		};
	};
	
	class TWC_Operation_Opfor_ColdWar_IRA_Field_Assault_Group {
		name = "Field Assault Group";
		faction = "ira_units";
		side = 0;
		
		class Unit0 {
			side = 0;
			vehicle = "IRA_Field_SLRv1";
			rank = "SERGEANT";
			position[] = {0,0,0};
		};
		
		class Unit1 {
			side = 0;
			vehicle = "IRA_Field_SLRv2";
			rank = "PRIVATE";
			position[] = {2,0,0};
		};
		
		class Unit2 {
			side = 0;
			vehicle = "IRA_Field_SLR_AT";
			rank = "PRIVATE";
			position[] = {4,0,0};
		};
		
		class Unit3 {
			side = 0;
			vehicle = "IRA_Field_M16A2v1";
			rank = "PRIVATE";
			position[] = {6,0,0};
		};
		
		class Unit4 {
			side = 0;
			vehicle = "IRA_Field_M16A2v2";
			rank = "PRIVATE";
			position[] = {8,0,0};
		};
		
		class Unit5 {
			side = 0;
			vehicle = "IRA_Field_Enfieldv2";
			rank = "PRIVATE";
			position[] = {10,0,0};
		};
		
		class Unit6 {
			side = 0;
			vehicle = "IRA_Field_Bren";
			rank = "PRIVATE";
			position[] = {12,0,0};
		};
		
		class Unit7 {
			side = 0;
			vehicle = "IRA_Field_Enfieldv1";
			rank = "PRIVATE";
			position[] = {14,0,0};
		};
	};
	
	class TWC_Operation_Opfor_ColdWar_IRA_Field_Support_Group {
		name = "Field Support Group";
		faction = "ira_units";
		side = 0;
		
		class Unit0 {
			side = 0;
			vehicle = "IRA_Field_AK74V2";
			rank = "SERGEANT";
			position[] = {0,0,0};
		};
		
		class Unit1 {
			side = 0;
			vehicle = "IRA_Field_SLRv2";
			rank = "PRIVATE";
			position[] = {2,0,0};
		};
		
		class Unit2 {
			side = 0;
			vehicle = "IRA_Field_M16A2_AT";
			rank = "PRIVATE";
			position[] = {4,0,0};
		};
		
		class Unit3 {
			side = 0;
			vehicle = "IRA_Field_SLR_AT";
			rank = "PRIVATE";
			position[] = {6,0,0};
		};
		
		class Unit4 {
			side = 0;
			vehicle = "IRA_Field_M16A2v2";
			rank = "PRIVATE";
			position[] = {8,0,0};
		};
		
		class Unit5 {
			side = 0;
			vehicle = "IRA_Field_M79";
			rank = "PRIVATE";
			position[] = {10,0,0};
		};
		
		class Unit6 {
			side = 0;
			vehicle = "IRA_Field_RPK";
			rank = "PRIVATE";
			position[] = {12,0,0};
		};
		
		class Unit7 {
			side = 0;
			vehicle = "IRA_Field_M16A2v1";
			rank = "PRIVATE";
			position[] = {14,0,0};
		};
	};
	
	class TWC_Operation_Opfor_ColdWar_IRA_Field_Support_Team {
		name = "Field Support Team";
		faction = "ira_units";
		side = 0;
		
		class Unit0 {
			side = 0;
			vehicle = "IRA_Field_Bren";
			rank = "SERGEANT";
			position[] = {0,0,0};
		};
		
		class Unit1 {
			side = 0;
			vehicle = "IRA_Field_SLR_AT";
			rank = "PRIVATE";
			position[] = {2,0,0};
		};
		
		class Unit2 {
			side = 0;
			vehicle = "IRA_Field_M16A2_AT";
			rank = "PRIVATE";
			position[] = {4,0,0};
		};
		
		class Unit3 {
			side = 0;
			vehicle = "IRA_Field_M79";
			rank = "PRIVATE";
			position[] = {6,0,0};
		};
	};
	
	class TWC_Operation_Opfor_ColdWar_IRA_Field_AlternateSupport_Team {
		name = "Field Support Team (Alternate)";
		faction = "ira_units";
		side = 0;
		
		class Unit0 {
			side = 0;
			vehicle = "IRA_Field_RPK";
			rank = "SERGEANT";
			position[] = {0,0,0};
		};
		
		class Unit1 {
			side = 0;
			vehicle = "IRA_Field_M16A2v1";
			rank = "PRIVATE";
			position[] = {2,0,0};
		};
		
		class Unit2 {
			side = 0;
			vehicle = "IRA_Field_M16A2_AT";
			rank = "PRIVATE";
			position[] = {4,0,0};
		};
		
		class Unit3 {
			side = 0;
			vehicle = "IRA_Field_M79";
			rank = "PRIVATE";
			position[] = {6,0,0};
		};
	};
	
	class TWC_Operation_Opfor_ColdWar_IRA_Field_MG_Team {
		name = "Field MG Team";
		faction = "ira_units";
		side = 0;
		
		class Unit0 {
			side = 0;
			vehicle = "IRA_Field_RPK";
			rank = "SERGEANT";
			position[] = {0,0,0};
		};
		
		class Unit1 {
			side = 0;
			vehicle = "IRA_Field_AK74V1";
			rank = "PRIVATE";
			position[] = {2,0,0};
		};
		
		class Unit2 {
			side = 0;
			vehicle = "IRA_Field_AK74V2";
			rank = "PRIVATE";
			position[] = {4,0,0};
		};
	};
	
	class TWC_Operation_Opfor_ColdWar_IRA_Field_BritishSupplied_Group {
		name = "Field Group (British Raid Resources)";
		faction = "ira_units";
		side = 0;
		
		class Unit0 {
			side = 0;
			vehicle = "IRA_Field_SLRv1";
			rank = "SERGEANT";
			position[] = {0,0,0};
		};
		
		class Unit1 {
			side = 0;
			vehicle = "IRA_Field_SLRv2";
			rank = "PRIVATE";
			position[] = {2,0,0};
		};
		
		class Unit2 {
			side = 0;
			vehicle = "IRA_Field_SLR_AT";
			rank = "PRIVATE";
			position[] = {4,0,0};
		};
		
		class Unit3 {
			side = 0;
			vehicle = "IRA_Field_Enfieldv1";
			rank = "PRIVATE";
			position[] = {6,0,0};
		};
		
		class Unit4 {
			side = 0;
			vehicle = "IRA_Field_Enfieldv2";
			rank = "PRIVATE";
			position[] = {8,0,0};
		};
		
		class Unit5 {
			side = 0;
			vehicle = "IRA_Field_Bren";
			rank = "PRIVATE";
			position[] = {10,0,0};
		};
		
		class Unit6 {
			side = 0;
			vehicle = "IRA_Field_SLRv1";
			rank = "PRIVATE";
			position[] = {12,0,0};
		};
		
		class Unit7 {
			side = 0;
			vehicle = "IRA_Field_SLR_AT";
			rank = "PRIVATE";
			position[] = {14,0,0};
		};
	};
};