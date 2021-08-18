#define 2000_COIN_GROUPS(CAMO) \
class TWC_Groups_2000_COIN_##CAMO \
{ \
	name = __EVAL("Infantry (2000s, COIN, " + #CAMO + ")"); \
	class Section \
	{ \
		name = "Section"; \
		faction = "TWC_Millennial"; \
		side = 1; \
		class Unit0 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_##CAMO##_SectionCommander; \
			rank = "SERGEANT"; \
			position[] = {0,0,0}; \
		}; \
		class Unit1 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_##CAMO##_Grenadier; \
			rank = "PRIVATE"; \
			position[] = {2,0,0}; \
		}; \
		class Unit2 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_##CAMO##_Autorifleman; \
			rank = "PRIVATE"; \
			position[] = {4,0,0}; \
		}; \
		class Unit3 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_##CAMO##_Marksman; \
			rank = "PRIVATE"; \
			position[] = {6,0,0}; \
		}; \
		class Unit4 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_##CAMO##_2iC; \
			rank = "CORPORAL"; \
			position[] = {8,0,0}; \
		}; \
		class Unit5 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_##CAMO##_Grenadier; \
			rank = "PRIVATE"; \
			position[] = {10,0,0}; \
		}; \
		class Unit6 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_##CAMO##_Autorifleman; \
			rank = "PRIVATE"; \
			position[] = {12,0,0}; \
		}; \
		class Unit7 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_##CAMO##_Marksman; \
			rank = "PRIVATE"; \
			position[] = {14,0,0}; \
		}; \
	}; \
	class Section_Mechanised \
	{ \
		name = "Section (Mechanised)"; \
		faction = "TWC_Millennial"; \
		side = 1; \
		class Unit0 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_##CAMO##_SectionCommander; \
			rank = "SERGEANT"; \
			position[] = {0,0,0}; \
		}; \
		class Unit1 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_##CAMO##_Grenadier; \
			rank = "PRIVATE"; \
			position[] = {2,0,0}; \
		}; \
		class Unit2 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_##CAMO##_Marksman; \
			rank = "PRIVATE"; \
			position[] = {4,0,0}; \
		}; \
		class Unit3 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_##CAMO##_2iC; \
			rank = "CORPORAL"; \
			position[] = {6,0,0}; \
		}; \
		class Unit4 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_##CAMO##_Grenadier; \
			rank = "PRIVATE"; \
			position[] = {8,0,0}; \
		}; \
		class Unit5 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_##CAMO##_Marksman; \
			rank = "PRIVATE"; \
			position[] = {10,0,0}; \
		}; \
		class Unit6 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_##CAMO##_Vehicle_Commander; \
			rank = "CORPORAL"; \
			position[] = {12,0,0}; \
		}; \
		class Unit7 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_##CAMO##_Vehicle_Crew; \
			rank = "PRIVATE"; \
			position[] = {14,0,0}; \
		}; \
		class Unit8 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_##CAMO##_Vehicle_Crew; \
			rank = "PRIVATE"; \
			position[] = {16,0,0}; \
		}; \
	}; \
	class Platoon_Command \
	{ \
		name = "Platoon Command"; \
		faction = "TWC_Millennial"; \
		side = 1; \
		class Unit0 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_##CAMO##_Platoon_Commander; \
			rank = "MAJOR"; \
			position[] = {0,0,0}; \
		}; \
		class Unit1 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_##CAMO##_Platoon_Sergeant; \
			rank = "LIEUTENANT"; \
			position[] = {2,0,0}; \
		}; \
		class Unit2 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_##CAMO##_Platoon_Medic; \
			rank = "PRIVATE"; \
			position[] = {4,0,0}; \
		}; \
		class Unit3 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_##CAMO##_Platoon_CSM; \
			rank = "CAPTAIN"; \
			position[] = {6,0,0}; \
		}; \
	}; \
	class Company_Command \
	{ \
		name = "Company Command"; \
		faction = "TWC_Millennial"; \
		side = 1; \
		class Unit0 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_##CAMO##_Company_Commander; \
			rank = "COLONEL"; \
			position[] = {0,0,0}; \
		}; \
		class Unit1 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_##CAMO##_Company_2iC; \
			rank = "MAJOR"; \
			position[] = {2,0,0}; \
		}; \
		class Unit2 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_##CAMO##_Company_Sergeant; \
			rank = "CAPTAIN"; \
			position[] = {4,0,0}; \
		}; \
	}; \
	class AT_Team \
	{ \
		name = "AT Team"; \
		faction = "TWC_Millennial"; \
		side = 1; \
		class Unit0 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_##CAMO##_SectionCommander; \
			rank = "SERGEANT"; \
			position[] = {0,0,0}; \
		}; \
		class Unit1 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_##CAMO##_Javelin_Gunner; \
			rank = "PRIVATE"; \
			position[] = {2,0,0}; \
		}; \
		class Unit2 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_##CAMO##_Javelin_Ass; \
			rank = "PRIVATE"; \
			position[] = {4,0,0}; \
		}; \
	}; \
	class Sniper_Team \
	{ \
		name = "Sniper Team"; \
		faction = "TWC_Millennial"; \
		side = 1; \
		class Unit0 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_##CAMO##_Spotter; \
			rank = "SERGEANT"; \
			position[] = {0,0,0}; \
		}; \
		class Unit1 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_##CAMO##_Sniper; \
			rank = "CORPORAL"; \
			position[] = {2,0,0}; \
		}; \
	}; \
	class Artillery_Crew \
	{ \
		name = "Artillery Crew"; \
		faction = "TWC_Millennial"; \
		side = 1; \
		class Unit0 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_##CAMO##_Artillery_Commander; \
			rank = "SERGEANT"; \
			position[] = {0,0,0}; \
		}; \
		class Unit1 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_##CAMO##_Artillery_Crew; \
			rank = "PRIVATE"; \
			position[] = {2,0,0}; \
		}; \
	}; \
	class EOD_Team \
	{ \
		name = "EOD Team"; \
		faction = "TWC_Millennial"; \
		side = 1; \
		class Unit0 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_##CAMO##_EOD_Commander; \
			rank = "SERGEANT"; \
			position[] = {0,0,0}; \
		}; \
		class Unit1 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_##CAMO##_EOD_Gunner; \
			rank = "PRIVATE"; \
			position[] = {2,0,0}; \
		}; \
	}; \
	class Vehicle_Crew \
	{ \
		name = "Vehicle Crew"; \
		faction = "TWC_Millennial"; \
		side = 1; \
		class Unit0 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_##CAMO##_Vehicle_Commander; \
			rank = "SERGEANT"; \
			position[] = {0,0,0}; \
		}; \
		class Unit1 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_##CAMO##_Vehicle_Crew; \
			rank = "PRIVATE"; \
			position[] = {2,0,0}; \
		}; \
		class Unit2 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_##CAMO##_Vehicle_Crew; \
			rank = "PRIVATE"; \
			position[] = {4,0,0}; \
		}; \
	}; \
}; \
class TWC_Groups_2000_COIN_Dismounted_##CAMO \
{ \
	name = __EVAL("Infantry (2000s, COIN, Dismounted, " + #CAMO + ")"); \
	class Section \
	{ \
		name = "Section"; \
		faction = "TWC_Millennial"; \
		side = 1; \
		class Unit0 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_Dismounted_##CAMO##_SectionCommander; \
			rank = "SERGEANT"; \
			position[] = {0,0,0}; \
		}; \
		class Unit1 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_Dismounted_##CAMO##_Grenadier; \
			rank = "PRIVATE"; \
			position[] = {2,0,0}; \
		}; \
		class Unit2 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_Dismounted_##CAMO##_Autorifleman; \
			rank = "PRIVATE"; \
			position[] = {4,0,0}; \
		}; \
		class Unit3 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_Dismounted_##CAMO##_Marksman; \
			rank = "PRIVATE"; \
			position[] = {6,0,0}; \
		}; \
		class Unit4 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_Dismounted_##CAMO##_2iC; \
			rank = "CORPORAL"; \
			position[] = {8,0,0}; \
		}; \
		class Unit5 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_Dismounted_##CAMO##_Grenadier; \
			rank = "PRIVATE"; \
			position[] = {10,0,0}; \
		}; \
		class Unit6 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_Dismounted_##CAMO##_Autorifleman; \
			rank = "PRIVATE"; \
			position[] = {12,0,0}; \
		}; \
		class Unit7 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_Dismounted_##CAMO##_Marksman; \
			rank = "PRIVATE"; \
			position[] = {14,0,0}; \
		}; \
	}; \
	class Platoon_Command \
	{ \
		name = "Platoon Command"; \
		faction = "TWC_Millennial"; \
		side = 1; \
		class Unit0 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_Dismounted_##CAMO##_Platoon_Commander; \
			rank = "MAJOR"; \
			position[] = {0,0,0}; \
		}; \
		class Unit1 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_Dismounted_##CAMO##_Platoon_Sergeant; \
			rank = "LIEUTENANT"; \
			position[] = {2,0,0}; \
		}; \
		class Unit2 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_Dismounted_##CAMO##_Platoon_Medic; \
			rank = "PRIVATE"; \
			position[] = {4,0,0}; \
		}; \
		class Unit3 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_Dismounted_##CAMO##_Platoon_CSM; \
			rank = "CAPTAIN"; \
			position[] = {6,0,0}; \
		}; \
	}; \
	class Company_Command \
	{ \
		name = "Company Command"; \
		faction = "TWC_Millennial"; \
		side = 1; \
		class Unit0 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_Dismounted_##CAMO##_Company_Commander; \
			rank = "COLONEL"; \
			position[] = {0,0,0}; \
		}; \
		class Unit1 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_Dismounted_##CAMO##_Company_2iC; \
			rank = "MAJOR"; \
			position[] = {2,0,0}; \
		}; \
		class Unit2 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_2000_COIN_Dismounted_##CAMO##_Company_Sergeant; \
			rank = "CAPTAIN"; \
			position[] = {4,0,0}; \
		}; \
	}; \
};

2000_COIN_GROUPS(Woodland)
2000_COIN_GROUPS(Desert)
2000_COIN_GROUPS(Tropic)
2000_COIN_GROUPS(Arctic)
2000_COIN_GROUPS(NBC)