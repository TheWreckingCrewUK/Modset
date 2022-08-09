#define 1950_GROUPS(CAMO) \
class TWC_Groups_1950_##CAMO \
{ \
	name = __EVAL("Infantry (" + #CAMO + ")"); \
	class Section \
	{ \
		name = "Section"; \
		faction = "TWC_1950"; \
		side = 2; \
		class Unit0 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_##CAMO##_SectionCommander; \
			rank = "SERGEANT"; \
			position[] = {0,0,0}; \
		}; \
		class Unit1 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_##CAMO##_SMG; \
			rank = "PRIVATE"; \
			position[] = {2,0,0}; \
		}; \
		class Unit2 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_##CAMO##_Rifleman; \
			rank = "PRIVATE"; \
			position[] = {4,0,0}; \
		}; \
		class Unit3 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_##CAMO##_Signaller; \
			rank = "PRIVATE"; \
			position[] = {6,0,0}; \
		}; \
		class Unit4 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_##CAMO##_Grenadier; \
			rank = "PRIVATE"; \
			position[] = {8,0,0}; \
		}; \
		class Unit5 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_##CAMO##_2iC; \
			rank = "CORPORAL"; \
			position[] = {10,0,0}; \
		}; \
		class Unit6 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_##CAMO##_MG; \
			rank = "PRIVATE"; \
			position[] = {12,0,0}; \
		}; \
		class Unit7 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_##CAMO##_MGASS; \
			rank = "PRIVATE"; \
			position[] = {14,0,0}; \
		}; \
	}; \
	class Section_Mechanised \
	{ \
		name = "Section (Mechanised)"; \
		faction = "TWC_1950"; \
		side = 2; \
		class Unit0 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_##CAMO##_SectionCommander; \
			rank = "SERGEANT"; \
			position[] = {0,0,0}; \
		}; \
		class Unit1 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_##CAMO##_SMG; \
			rank = "PRIVATE"; \
			position[] = {2,0,0}; \
		}; \
		class Unit2 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_##CAMO##_Rifleman; \
			rank = "PRIVATE"; \
			position[] = {4,0,0}; \
		}; \
		class Unit3 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_##CAMO##_Signaller; \
			rank = "PRIVATE"; \
			position[] = {6,0,0}; \
		}; \
		class Unit4 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_##CAMO##_Grenadier; \
			rank = "PRIVATE"; \
			position[] = {8,0,0}; \
		}; \
		class Unit5 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_##CAMO##_2iC; \
			rank = "CORPORAL"; \
			position[] = {10,0,0}; \
		}; \
		class Unit6 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_##CAMO##_MG; \
			rank = "PRIVATE"; \
			position[] = {12,0,0}; \
		}; \
		class Unit7 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_##CAMO##_MGASS; \
			rank = "PRIVATE"; \
			position[] = {14,0,0}; \
		}; \
		class Unit8 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_##CAMO##_Vehicle_Commander; \
			rank = "CORPORAL"; \
			position[] = {16,0,0}; \
		}; \
		class Unit9 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_##CAMO##_Vehicle_Crew; \
			rank = "PRIVATE"; \
			position[] = {18,0,0}; \
		}; \
	}; \
	class Platoon_Command \
	{ \
		name = "Platoon Command"; \
		faction = "TWC_1950"; \
		side = 2; \
		class Unit0 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_##CAMO##_Platoon_Commander; \
			rank = "MAJOR"; \
			position[] = {0,0,0}; \
		}; \
		class Unit1 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_##CAMO##_Platoon_Sergeant; \
			rank = "LIEUTENANT"; \
			position[] = {2,0,0}; \
		}; \
		class Unit2 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_##CAMO##_Platoon_Medic; \
			rank = "PRIVATE"; \
			position[] = {4,0,0}; \
		}; \
		class Unit3 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_##CAMO##_Signaller; \
			rank = "PRIVATE"; \
			position[] = {6,0,0}; \
		}; \
	}; \
	class Company_Command \
	{ \
		name = "Company Command"; \
		faction = "TWC_1950"; \
		side = 2; \
		class Unit0 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_##CAMO##_Company_Commander; \
			rank = "COLONEL"; \
			position[] = {0,0,0}; \
		}; \
		class Unit1 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_##CAMO##_Company_2iC; \
			rank = "MAJOR"; \
			position[] = {2,0,0}; \
		}; \
		class Unit2 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_##CAMO##_Company_Sergeant; \
			rank = "CAPTAIN"; \
			position[] = {4,0,0}; \
		}; \
		class Unit3 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_##CAMO##_Signaller; \
			rank = "PRIVATE"; \
			position[] = {6,0,0}; \
		}; \
	}; \
	class AT_Team \
	{ \
		name = "AT Team"; \
		faction = "TWC_1950"; \
		side = 2; \
		class Unit0 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_##CAMO##_SectionCommander; \
			rank = "SERGEANT"; \
			position[] = {0,0,0}; \
		}; \
		class Unit1 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_##CAMO##_Bazooka_Gunner; \
			rank = "PRIVATE"; \
			position[] = {2,0,0}; \
		}; \
		class Unit2 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_##CAMO##_Bazooka_Ass; \
			rank = "PRIVATE"; \
			position[] = {4,0,0}; \
		}; \
	}; \
	class Sniper_Team \
	{ \
		name = "Sniper Team"; \
		faction = "TWC_1950"; \
		side = 2; \
		class Unit0 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_##CAMO##_Spotter; \
			rank = "SERGEANT"; \
			position[] = {0,0,0}; \
		}; \
		class Unit1 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_##CAMO##_Sniper; \
			rank = "CORPORAL"; \
			position[] = {2,0,0}; \
		}; \
	}; \
	class Artillery_Crew \
	{ \
		name = "Artillery Crew"; \
		faction = "TWC_1950"; \
		side = 2; \
		class Unit0 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_##CAMO##_Artillery_Commander; \
			rank = "SERGEANT"; \
			position[] = {0,0,0}; \
		}; \
		class Unit1 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_##CAMO##_Artillery_Crew; \
			rank = "PRIVATE"; \
			position[] = {2,0,0}; \
		}; \
	}; \
	class Vehicle_Crew \
	{ \
		name = "Vehicle Crew"; \
		faction = "TWC_1950"; \
		side = 2; \
		class Unit0 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_##CAMO##_Vehicle_Commander; \
			rank = "SERGEANT"; \
			position[] = {0,0,0}; \
		}; \
		class Unit1 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_##CAMO##_Vehicle_Crew; \
			rank = "PRIVATE"; \
			position[] = {2,0,0}; \
		}; \
		class Unit2 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_##CAMO##_Vehicle_Crew; \
			rank = "PRIVATE"; \
			position[] = {4,0,0}; \
		}; \
	}; \
}; \
class TWC_Groups_##CAMO##_Dismounted \
{ \
	name = __EVAL("Infantry (Dismounted, " + #CAMO + ")"); \
	class Section \
	{ \
		name = "Section, Dismounted"; \
		faction = "TWC_1950"; \
		side = 2; \
		class Unit0 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_Dismounted_##CAMO##_SectionCommander; \
			rank = "SERGEANT"; \
			position[] = {0,0,0}; \
		}; \
		class Unit1 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_Dismounted_##CAMO##_SMG; \
			rank = "PRIVATE"; \
			position[] = {2,0,0}; \
		}; \
		class Unit2 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_Dismounted_##CAMO##_Rifleman; \
			rank = "PRIVATE"; \
			position[] = {4,0,0}; \
		}; \
		class Unit3 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_Dismounted_##CAMO##_Signaller; \
			rank = "PRIVATE"; \
			position[] = {6,0,0}; \
		}; \
		class Unit4 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_Dismounted_##CAMO##_Grenadier; \
			rank = "PRIVATE"; \
			position[] = {8,0,0}; \
		}; \
		class Unit5 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_Dismounted_##CAMO##_2iC; \
			rank = "CORPORAL"; \
			position[] = {10,0,0}; \
		}; \
		class Unit6 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_Dismounted_##CAMO##_MG; \
			rank = "PRIVATE"; \
			position[] = {12,0,0}; \
		}; \
		class Unit7 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_Dismounted_##CAMO##_MGASS; \
			rank = "PRIVATE"; \
			position[] = {14,0,0}; \
		}; \
	}; \
	class Platoon_Command \
	{ \
		name = "Platoon Command, Dismounted"; \
		faction = "TWC_1950"; \
		side = 2; \
		class Unit0 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_Dismounted_##CAMO##_Platoon_Commander; \
			rank = "MAJOR"; \
			position[] = {0,0,0}; \
		}; \
		class Unit1 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_Dismounted_##CAMO##_Platoon_Sergeant; \
			rank = "LIEUTENANT"; \
			position[] = {2,0,0}; \
		}; \
		class Unit2 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_Dismounted_##CAMO##_Platoon_Medic; \
			rank = "PRIVATE"; \
			position[] = {4,0,0}; \
		}; \
		class Unit3 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_Dismounted_##CAMO##_Signaller; \
			rank = "PRIVATE"; \
			position[] = {6,0,0}; \
		}; \
		class Unit4 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_Dismounted_##CAMO##_Platoon_CSM; \
			rank = "CAPTAIN"; \
			position[] = {8,0,0}; \
		}; \
	}; \
	class Company_Command \
	{ \
		name = "Company Command, Dismounted"; \
		faction = "TWC_1950"; \
		side = 2; \
		class Unit0 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_Dismounted_##CAMO##_Company_Commander; \
			rank = "COLONEL"; \
			position[] = {0,0,0}; \
		}; \
		class Unit1 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_Dismounted_##CAMO##_Company_2iC; \
			rank = "MAJOR"; \
			position[] = {2,0,0}; \
		}; \
		class Unit2 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_1950_Regular_Dismounted_##CAMO##_Company_Sergeant; \
			rank = "CAPTAIN"; \
			position[] = {4,0,0}; \
		}; \
	}; \
};
1950_GROUPS(Arctic)
1950_GROUPS(Desert)