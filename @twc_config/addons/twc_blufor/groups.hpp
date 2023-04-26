class TWC_Groups_Chad_Group
{
	name = "Infantry (Toyota Based)";
	class Section
	{
		name = "Group";
		faction = "TWC_Chad";
		side = 1;
		class Unit0
		{
				side = 1;
				vehicle = "TWC_Infantry_Chad_SectionCommander";
				rank = "SERGEANT";
				position[] = {0,0,0};
		};
		class Unit1
		{
				side = 1;
				vehicle = "TWC_Infantry_Chad_Grenadier";
				rank = "PRIVATE";
				position[] = {2,0,0};
		};
		class Unit2
		{
				side = 1;
				vehicle = "TWC_Infantry_Chad_AT";
				rank = "PRIVATE";
				position[] = {4,0,0};
		};
		class Unit3
		{
				side = 1;
				vehicle = "TWC_Infantry_Chad_2iC";
				rank = "PRIVATE";
				position[] = {6,0,0};
		};
		class Unit4
		{
				side = 1;
				vehicle = "TWC_Infantry_Chad_MG";
				rank = "PRIVATE";
				position[] = {8,0,0};
		};
		class Unit5
		{
				side = 1;
				vehicle = "TWC_Infantry_Chad_ASSMG";
				rank = "CORPORAL";
				position[] = {10,0,0};
		};
	};
	class Platoon_Command
	{
		name = "Platoon Command";
		faction = "TWC_Chad";
		side = 1;
		class Unit0
		{
				side = 1;
				vehicle = "TWC_Infantry_Chad_SectionCommander";
				rank = "MAJOR";
				position[] = {0,0,0};
		};
		class Unit1
		{
				side = 1;
				vehicle = "TWC_Infantry_Chad_2iC";
				rank = "LIEUTENANT";
				position[] = {2,0,0};
		};
		class Unit2
		{
				side = 1;
				vehicle = "TWC_Infantry_Chad_Medic";
				rank = "PRIVATE";
				position[] = {4,0,0};
		};
		class Unit3
		{
				side = 1;
				vehicle = "TWC_Infantry_Chad_2iC";
				rank = "CAPTAIN";
				position[] = {6,0,0};
		};
	};
};