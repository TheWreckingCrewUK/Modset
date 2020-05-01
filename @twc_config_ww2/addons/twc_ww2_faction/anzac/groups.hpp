#define ANZAC_GROUPS(CAMO,ERA) \
class TWC_Groups_##ERA##_##CAMO \
{ \
	name = __EVAL("Infantry (ANZAC, " + #CAMO + ")"); \
	class Section \
	{ \
		name = "Section"; \
		faction = "TWC_WW2"; \
		side = 2; \
		class Unit0 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_##ERA##_##CAMO##_SectionCommander; \
			rank = "SERGEANT"; \
			position[] = {0,0,0}; \
		}; \
		class Unit1 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_##ERA##_##CAMO##_Rifleman; \
			rank = "PRIVATE"; \
			position[] = {2,0,0}; \
		}; \
		class Unit2 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_##ERA##_##CAMO##_Rifleman; \
			rank = "PRIVATE"; \
			position[] = {4,0,0}; \
		}; \
		class Unit3 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_##ERA##_##CAMO##_Rifleman; \
			rank = "PRIVATE"; \
			position[] = {6,0,0}; \
		}; \
		class Unit4 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_##ERA##_##CAMO##_Grenadier; \
			rank = "PRIVATE"; \
			position[] = {8,0,0}; \
		}; \
		class Unit5 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_##ERA##_##CAMO##_2iC; \
			rank = "CORPORAL"; \
			position[] = {10,0,0}; \
		}; \
		class Unit6 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_##ERA##_##CAMO##_MG; \
			rank = "PRIVATE"; \
			position[] = {12,0,0}; \
		}; \
		class Unit7 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_##ERA##_##CAMO##_MGASS; \
			rank = "PRIVATE"; \
			position[] = {14,0,0}; \
		}; \
	}; \
	class Section_Mechanised \
	{ \
		name = "Section (Mechanised)"; \
		faction = "TWC_WW2"; \
		side = 2; \
		class Unit0 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_##ERA##_##CAMO##_SectionCommander; \
			rank = "SERGEANT"; \
			position[] = {0,0,0}; \
		}; \
		class Unit1 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_##ERA##_##CAMO##_Rifleman; \
			rank = "PRIVATE"; \
			position[] = {2,0,0}; \
		}; \
		class Unit2 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_##ERA##_##CAMO##_Rifleman; \
			rank = "PRIVATE"; \
			position[] = {4,0,0}; \
		}; \
		class Unit3 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_##ERA##_##CAMO##_Rifleman; \
			rank = "PRIVATE"; \
			position[] = {6,0,0}; \
		}; \
		class Unit4 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_##ERA##_##CAMO##_Grenadier; \
			rank = "PRIVATE"; \
			position[] = {8,0,0}; \
		}; \
		class Unit5 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_##ERA##_##CAMO##_2iC; \
			rank = "CORPORAL"; \
			position[] = {10,0,0}; \
		}; \
		class Unit6 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_##ERA##_##CAMO##_MG; \
			rank = "PRIVATE"; \
			position[] = {12,0,0}; \
		}; \
		class Unit7 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_##ERA##_##CAMO##_MGASS; \
			rank = "PRIVATE"; \
			position[] = {14,0,0}; \
		}; \
		class Unit8 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_##ERA##_##CAMO##_Vehicle_Commander; \
			rank = "CORPORAL"; \
			position[] = {16,0,0}; \
		}; \
		class Unit9 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_##ERA##_##CAMO##_Vehicle_Crew; \
			rank = "PRIVATE"; \
			position[] = {18,0,0}; \
		}; \
	}; \
	class Platoon_Command \
	{ \
		name = "Platoon Command"; \
		faction = "TWC_WW2"; \
		side = 2; \
		class Unit0 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_##ERA##_##CAMO##_Platoon_Commander; \
			rank = "MAJOR"; \
			position[] = {0,0,0}; \
		}; \
		class Unit1 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_##ERA##_##CAMO##_Platoon_Sergeant; \
			rank = "LIEUTENANT"; \
			position[] = {2,0,0}; \
		}; \
		class Unit2 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_##ERA##_##CAMO##_Platoon_Medic; \
			rank = "PRIVATE"; \
			position[] = {4,0,0}; \
		}; \
		class Unit3 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_##ERA##_##CAMO##_Platoon_Runner; \
			rank = "PRIVATE"; \
			position[] = {6,0,0}; \
		}; \
		class Unit4 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_##ERA##_##CAMO##_Platoon_CSM; \
			rank = "CAPTAIN"; \
			position[] = {8,0,0}; \
		}; \
	}; \
	class Artillery_Crew \
	{ \
		name = "Artillery Crew"; \
		faction = "TWC_WW2"; \
		side = 2; \
		class Unit0 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_##ERA##_##CAMO##_Artillery_Commander; \
			rank = "SERGEANT"; \
			position[] = {0,0,0}; \
		}; \
		class Unit1 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_##ERA##_##CAMO##_Artillery_Crew; \
			rank = "PRIVATE"; \
			position[] = {2,0,0}; \
		}; \
	}; \
	class Vehicle_Crew \
	{ \
		name = "Vehicle Crew"; \
		faction = "TWC_WW2"; \
		side = 2; \
		class Unit0 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_##ERA##_##CAMO##_Vehicle_Commander; \
			rank = "SERGEANT"; \
			position[] = {0,0,0}; \
		}; \
		class Unit1 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_##ERA##_##CAMO##_Vehicle_Crew; \
			rank = "PRIVATE"; \
			position[] = {2,0,0}; \
		}; \
		class Unit2 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_##ERA##_##CAMO##_Vehicle_Crew; \
			rank = "PRIVATE"; \
			position[] = {4,0,0}; \
		}; \
	}; \
}; \
class TWC_Groups_##ERA##_Dismounted_##CAMO \
{ \
	name = __EVAL("Infantry (ANZAC, Dismounted, " + #CAMO + ")"); \
	class Section \
	{ \
		name = "Section"; \
		faction = "TWC_WW2"; \
		side = 2; \
		class Unit0 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_##ERA##_Dismounted_##CAMO##_SectionCommander; \
			rank = "SERGEANT"; \
			position[] = {0,0,0}; \
		}; \
		class Unit1 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_##ERA##_Dismounted_##CAMO##_Rifleman; \
			rank = "PRIVATE"; \
			position[] = {2,0,0}; \
		}; \
		class Unit2 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_##ERA##_Dismounted_##CAMO##_Rifleman; \
			rank = "PRIVATE"; \
			position[] = {4,0,0}; \
		}; \
		class Unit3 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_##ERA##_Dismounted_##CAMO##_Rifleman; \
			rank = "PRIVATE"; \
			position[] = {6,0,0}; \
		}; \
		class Unit4 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_##ERA##_Dismounted_##CAMO##_Grenadier; \
			rank = "PRIVATE"; \
			position[] = {8,0,0}; \
		}; \
		class Unit5 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_##ERA##_Dismounted_##CAMO##_2iC; \
			rank = "CORPORAL"; \
			position[] = {10,0,0}; \
		}; \
		class Unit6 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_##ERA##_Dismounted_##CAMO##_MG; \
			rank = "PRIVATE"; \
			position[] = {12,0,0}; \
		}; \
		class Unit7 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_##ERA##_Dismounted_##CAMO##_MGASS; \
			rank = "PRIVATE"; \
			position[] = {14,0,0}; \
		}; \
	}; \
	class Platoon_Command \
	{ \
		name = "Platoon Command"; \
		faction = "TWC_WW2"; \
		side = 2; \
		class Unit0 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_##ERA##_Dismounted_##CAMO##_Platoon_Commander; \
			rank = "MAJOR"; \
			position[] = {0,0,0}; \
		}; \
		class Unit1 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_##ERA##_Dismounted_##CAMO##_Platoon_Sergeant; \
			rank = "LIEUTENANT"; \
			position[] = {2,0,0}; \
		}; \
		class Unit2 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_##ERA##_Dismounted_##CAMO##_Platoon_Medic; \
			rank = "PRIVATE"; \
			position[] = {4,0,0}; \
		}; \
		class Unit3 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_##ERA##_Dismounted_##CAMO##_Platoon_Runner; \
			rank = "PRIVATE"; \
			position[] = {6,0,0}; \
		}; \
		class Unit4 \
		{ \
			side = 2; \
			vehicle = TWC_Infantry_##ERA##_Dismounted_##CAMO##_Platoon_CSM; \
			rank = "CAPTAIN"; \
			position[] = {8,0,0}; \
		}; \
	}; \
};

ANZAC_GROUPS(Desert,WW2_ANZAC)
ANZAC_GROUPS(Tropic,WW2_ANZAC)