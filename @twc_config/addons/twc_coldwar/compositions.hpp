class CfgGroups
{
        class WEST
        {
                name = "Blufor"; // Name of Faction Side
                side = 1; // 0 = Opfor , 1 = Blufor , 2 = Indep , I think
                class TWC_Operation_Blufor //Faction Class name
                {
                        name = "TWC Operation Groups"; //Faction Name
                        class ColdWar
                        {
                                name = "TWC Cold War"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
                                class Coldwar_Section
                                {
                                        name = "Section (Mounted)"; //Name of Group
                                        faction = "twc_faction"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "ColdWar_Section_Leader"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "ColdWar_Rifleman";
                                                rank = "PRIVATE";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 1;
                                                vehicle = "ColdWar_Rifleman_SUIT";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
										class Unit3
                                        {
                                                side = 1;
                                                vehicle = "ColdWar_AT";
                                                rank = "PRIVATE";
                                                position[] = {7,0,0};
                                        };
										class Unit4
                                        {
                                                side = 1;
                                                vehicle = "ColdWar_AT_ASS";
                                                rank = "PRIVATE";
                                                position[] = {9,0,0};
                                        };
										class Unit5
                                        {
                                                side = 1;
                                                vehicle = "ColdWar_2IC";
                                                rank = "PRIVATE";
                                                position[] = {11,0,0};
                                        };
										class Unit6
                                        {
                                                side = 1;
                                                vehicle = "ColdWar_MG";
                                                rank = "PRIVATE";
                                                position[] = {13,0,0};
                                        };
										class Unit7
                                        {
                                                side = 1;
                                                vehicle = "ColdWar_MG_AS";
                                                rank = "PRIVATE";
                                                position[] = {15,0,0};
                                        };
                                };
								 class Coldwar_Section_Dismounted
                                {
                                        name = "Section"; //Name of Group
                                        faction = "twc_faction"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "ColdWar_Section_Leader"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "ColdWar_Rifleman_Dismounted";
                                                rank = "PRIVATE";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 1;
                                                vehicle = "ColdWar_Rifleman_SUIT_Dismounted";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
										class Unit3
                                        {
                                                side = 1;
                                                vehicle = "ColdWar_AT_Dismounted";
                                                rank = "PRIVATE";
                                                position[] = {7,0,0};
                                        };
										class Unit4
                                        {
                                                side = 1;
                                                vehicle = "ColdWar_AT_Ass_Dismounted";
                                                rank = "PRIVATE";
                                                position[] = {9,0,0};
                                        };
										class Unit5
                                        {
                                                side = 1;
                                                vehicle = "ColdWar_2IC_Dismounted";
                                                rank = "PRIVATE";
                                                position[] = {11,0,0};
                                        };
										class Unit6
                                        {
                                                side = 1;
                                                vehicle = "ColdWar_MG_Dismounted";
                                                rank = "PRIVATE";
                                                position[] = {13,0,0};
                                        };
										class Unit7
                                        {
                                                side = 1;
                                                vehicle = "ColdWar_MG_Ass_Dismounted";
                                                rank = "PRIVATE";
                                                position[] = {15,0,0};
                                        };
                                };
								 class Coldwar_Section_Mechanised
                                {
                                        name = "Section (Mechanised)"; //Name of Group
                                        faction = "twc_faction"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "ColdWar_Section_Leader"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "ColdWar_Rifleman_SUIT";
                                                rank = "PRIVATE";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 1;
                                                vehicle = "ColdWar_AT";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
										class Unit3
                                        {
                                                side = 1;
                                                vehicle = "ColdWar_AT_ASS";
                                                rank = "PRIVATE";
                                                position[] = {7,0,0};
                                        };
										class Unit4
                                        {
                                                side = 1;
                                                vehicle = "ColdWar_2IC";
                                                rank = "PRIVATE";
                                                position[] = {9,0,0};
                                        };
										class Unit5
                                        {
                                                side = 1;
                                                vehicle = "ColdWar_MG";
                                                rank = "PRIVATE";
                                                position[] = {11,0,0};
                                        };
										class Unit6
                                        {
                                                side = 1;
                                                vehicle = "ColdWar_MG_AS";
                                                rank = "PRIVATE";
                                                position[] = {13,0,0};
                                        };
										class Unit7
                                        {
                                                side = 1;
                                                vehicle = "ColdWar_Vehicle_Commander";
                                                rank = "CORPORAL";
                                                position[] = {15,0,0};
                                        };
										class Unit8
                                        {
                                                side = 1;
                                                vehicle = "ColdWar_Vehicle_Crewman";
                                                rank = "PRIVATE";
                                                position[] = {15,0,0};
                                        };
                                };
								class Coldwar_Platoon_Command
                                {
                                        name = "Platoon Command"; //Name of Group
                                        faction = "twc_faction"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "ColdWar_Platoon_Commander"; //Class name of desired solider
                                                rank = "lieutenant"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "ColdWar_sergeant";
                                                rank = "sergeant";
                                                position[] = {3,0,0};
                                        };
										class Unit2
                                        {
                                                side = 1;
                                                vehicle = "ColdWar_MortarGunner";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
                                        class Unit3
                                        {
                                                side = 1;
                                                vehicle = "ColdWar_Medic";
                                                rank = "PRIVATE";
                                                position[] = {7,0,0};
                                        };
										class Unit4
                                        {
                                                side = 1;
                                                vehicle = "ColdWar_CSM";
                                                rank = "sergeant";
                                                position[] = {9,0,0};
                                        };
                                };
								class Coldwar_AA
								{
										name = "AA Team";
										faction = "twc_faction";
										side = 1;
										class Unit0
										{
											side = 1;
											vehicle = "ColdWar_AA_Gunner";
											rank = "PRIVATE";
											position[] = {0,3,0};
										};
										class Unit1
										{
											side = 1;
											vehicle = "ColdWar_AA_Assistant";
											rank = "Private";
											position[] = {3,0,0};
										};
								};
								class Coldwar_Milan
								{
										name = "Milan Team";
										faction = "twc_faction";
										side = 1;
										class Unit0
										{
											side = 1;
											vehicle = "ColdWar_Section_Leader";
											rank = "CORPORAL";
											position[] = {0,3,0};
										};
										class Unit1
										{
											side = 1;
											vehicle = "ColdWar_MilanGunner";
											rank = "PRIVATE";
											position[] = {3,0,0};
										};
										class Unit2
										{
											side = 1;
											vehicle = "ColdWar_MilanAssistant";
											rank = "Private";
											position[] = {6,0,0};
										};
								};
								class Coldwar_VehicleCrew
                                {
                                        name = "Vehicle Crew"; //Name of Group
                                        faction = "twc_faction"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "ColdWar_Vehicle_Commander"; //Class name of desired solider
                                                rank = "sergeant"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "ColdWar_Vehicle_Crewman";
                                                rank = "PRIVATE";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 1;
                                                vehicle = "ColdWar_Vehicle_Crewman";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
										
								};
                        };
				};
				
		};
};