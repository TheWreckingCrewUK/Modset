#define REGULAR_GROUPS(CAMO) \
class TWC_Groups_UNSC_ODST\
{ \
	name = __EVAL("Infantry ODST"); \
	class ODST_Team \
	{ \
		name = "ODST Team"; \
		faction = "TWC_UNSC"; \
		side = 1; \
		class Unit0 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_ODST_TeamLeader; \
			rank = "SERGEANT"; \
			position[] = {0,0,0}; \
		}; \
		class Unit1 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_ODST_ExplosiveSpec; \
			rank = "PRIVATE"; \
			position[] = {2,0,0}; \
		}; \
		class Unit2 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_ODST_RiflemanAT; \
			rank = "PRIVATE"; \
			position[] = {4,0,0}; \
		}; \
		class Unit3 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_ODST_Marksman; \
			rank = "CORPORAL"; \
			position[] = {6,0,0}; \
		}; \
		class Unit4 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_ODST_AutoRifleman; \
			rank = "PRIVATE"; \
			position[] = {8,0,0}; \
		}; \
	}; \
	class Squad_Command \
	{ \
		name = "Squad Command"; \
		faction = "TWC_UNSC"; \
		side = 1; \
		class Unit0 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_ODST_SquadCommander; \
			rank = "MAJOR"; \
			position[] = {0,0,0}; \
		}; \
		class Unit1 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_ODST_Squad2ic; \
			rank = "LIEUTENANT"; \
			position[] = {2,0,0}; \
		}; \
		class Unit2 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_ODST_Corpsman; \
			rank = "PRIVATE"; \
			position[] = {4,0,0}; \
		}; \
		class Unit3 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_ODST_FAC; \
			rank = "SERGEANT"; \
			position[] = {6,0,0}; \
		}; \
	}; \
}; \
class TWC_Groups_UNSC_Spartan\
{ \
	name = __EVAL("Infantry Spartan"); \
	class Spartan_Team \
	{ \
		name = "Spartan Team"; \
		faction = "TWC_UNSC"; \
		side = 1; \
		class Unit0 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_Spartan_TeamLeader; \
			rank = "SERGEANT"; \
			position[] = {0,0,0}; \
		}; \
		class Unit1 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_Spartan_RiflemanAT; \
			rank = "PRIVATE"; \
			position[] = {2,0,0}; \
		}; \
		class Unit2 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_Spartan_Sniper; \
			rank = "PRIVATE"; \
			position[] = {4,0,0}; \
		}; \
			class Unit3 \
		{ \
			side = 1; \
			vehicle = TWC_Infantry_Spartan_AutoRifleman; \
			rank = "PRIVATE"; \
			position[] = {6,0,0}; \
		}; \
	}; \
} \

REGULAR_GROUPS(ODST)
REGULAR_GROUPS(Spartan)