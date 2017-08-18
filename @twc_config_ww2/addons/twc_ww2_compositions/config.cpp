class CfgPatches
{
	class twc_compositions_ww2
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F"
		};
		version="1";
		projectName="TWC";
		author="jayman";
	};
};
	
class CfgGroups
{
		class INDEP
        {
                name = "Independent"; // Name of Faction Side
                side = 2; // 0 = Opfor , 1 = Blufor , Independent = 2 ,   I think
                class Army //Faction Class name
                {
                        name = "TWC Operation Groups Independent"; //Faction Name
						class WW2
						{
								name = "TWC WW2"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
                                class SectionModern
                                {
                                        name = "Section"; //Name of Group
                                        faction = "twc_faction"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "WW2_British_Section_Commander"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "WW2_British_Rifleman";
                                                rank = "PRIVATE";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 1;
                                                vehicle = "WW2_British_Rifleman";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
										class Unit3
                                        {
                                                side = 1;
                                                vehicle = "WW2_British_Rifleman";
                                                rank = "PRIVATE";
                                                position[] = {7,0,0};
                                        };
										class Unit4
                                        {
                                                side = 1;
                                                vehicle = "WW2_British_Rifleman";
                                                rank = "PRIVATE";
                                                position[] = {9,0,0};
                                        };
										class Unit6
                                        {
                                                side = 1;
                                                vehicle = "WW2_British_2IC";
                                                rank = "CORPORAL";
                                                position[] = {11,0,0};
                                        };
										class Unit7
                                        {
                                                side = 1;
                                                vehicle = "WW2_British_MG";
                                                rank = "PRIVATE";
                                                position[] = {13,0,0};
                                        };
										class Unit8
                                        {
                                                side = 1;
                                                vehicle = "WW2_British_MGASS";
                                                rank = "PRIVATE";
                                                position[] = {15,0,0};
                                        };
                                };
								class WW2_Platoon_Command
                                {
                                        name = "Platoon Command"; //Name of Group
                                        faction = "twc_faction"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "WW2_British_Platoon_Commander"; //Class name of desired solider
                                                rank = "MAJOR"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "WW2_British_Platoon_Sergeant";
                                                rank = "LIEUTENANT";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 1;
                                                vehicle = "WW2_British_Medic";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
                                };
						};
					class WW2_Para
					{
								name = "TWC WW2 Para"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
                                class SectionModern
                                {
                                        name = "Section"; //Name of Group
                                        faction = "twc_faction"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "WW2_Para_British_Section_Commander"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "WW2_Para_British_Rifleman";
                                                rank = "PRIVATE";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 1;
                                                vehicle = "WW2_Para_British_Rifleman";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
										class Unit3
                                        {
                                                side = 1;
                                                vehicle = "WW2_Para_British_Rifleman";
                                                rank = "PRIVATE";
                                                position[] = {7,0,0};
                                        };
										class Unit4
                                        {
                                                side = 1;
                                                vehicle = "WW2_Para_British_Rifleman";
                                                rank = "PRIVATE";
                                                position[] = {9,0,0};
                                        };
										class Unit6
                                        {
                                                side = 1;
                                                vehicle = "WW2_Para_British_2IC";
                                                rank = "CORPORAL";
                                                position[] = {11,0,0};
                                        };
										class Unit7
                                        {
                                                side = 1;
                                                vehicle = "WW2_Para_British_MG";
                                                rank = "PRIVATE";
                                                position[] = {13,0,0};
                                        };
										class Unit8
                                        {
                                                side = 1;
                                                vehicle = "WW2_Para_British_MGASS";
                                                rank = "PRIVATE";
                                                position[] = {15,0,0};
                                        };
                                };
								class WW2_Platoon_Command
                                {
                                        name = "Platoon Command"; //Name of Group
                                        faction = "twc_faction"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "WW2_Para_British_Platoon_Commander"; //Class name of desired solider
                                                rank = "MAJOR"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "WW2_Para_British_Platoon_Sergeant";
                                                rank = "LIEUTENANT";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 1;
                                                vehicle = "WW2_Para_British_Medic";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
                                };					
					};
				};
				
		};
};