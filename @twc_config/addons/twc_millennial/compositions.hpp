class CfgGroups
{
        class WEST
        {
                name = "Blufor"; // Name of Faction Side
                side = 1; // 0 = Opfor , 1 = Blufor , 2 = Indep , I think
                class TWC_Operation_Blufor //Faction Class name
                {
                        name = "TWC Operation Groups"; //Faction Name
						class 1990
						{
								name = "TWC 1990 symetrical"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
                                class 1990_Section
                                {
                                        name = "Section"; //Name of Group
                                        faction = "TWC_Millenial"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "1990_British_SectionCommander"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "1990_British_Rifleman";
                                                rank = "PRIVATE";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 1;
                                                vehicle = "1990_British_Rifleman_AT";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
										class Unit3
                                        {
                                                side = 1;
                                                vehicle = "1990_British_Gunner";
                                                rank = "PRIVATE";
                                                position[] = {7,0,0};
                                        };
										class Unit4
                                        {
                                                side = 1;
                                                vehicle = "1990_British_2IC";
                                                rank = "CORPORAL";
                                                position[] = {9,0,0};
                                        };
										class Unit5
                                        {
                                                side = 1;
                                                vehicle = "1990_British_Rifleman";
                                                rank = "PRIVATE";
                                                position[] = {11,0,0};
                                        };
										class Unit6
                                        {
                                                side = 1;
                                                vehicle = "1990_British_Rifleman_AT";
                                                rank = "PRIVATE";
                                                position[] = {13,0,0};
                                        };
										class Unit7
                                        {
                                                side = 1;
                                                vehicle = "1990_British_Gunner";
                                                rank = "PRIVATE";
                                                position[] = {15,0,0};
                                        };
                                };
								class 1990_Section_Mounted
                                {
									name = "Section  (Mounted)"; //Name of Group
									faction = "TWC_Millenial"; //Faction
									side = 1; //Side
									class Unit0
									{
											side = 1;
											vehicle = "1990_British_SectionCommander"; //Class name of desired solider
											rank = "SERGEANT"; // Rank
											position[] = {0,3,0}; //Position in the formation
									};
									class Unit1
									{
											side = 1;
											vehicle = "1990_British_Rifleman_Mounted";
											rank = "PRIVATE";
											position[] = {3,0,0};
									};
									class Unit2
									{
											side = 1;
											vehicle = "1990_British_Rifleman_AT_Mounted";
											rank = "PRIVATE";
											position[] = {5,0,0};
									};
									class Unit3
									{
											side = 1;
											vehicle = "1990_British_Gunner_Mounted";
											rank = "PRIVATE";
											position[] = {7,0,0};
									};
									class Unit4
									{
											side = 1;
											vehicle = "1990_British_2IC_Mounted";
											rank = "CORPORAL";
											position[] = {9,0,0};
									};
									class Unit5
									{
											side = 1;
											vehicle = "1990_British_Rifleman_Mounted";
											rank = "PRIVATE";
											position[] = {11,0,0};
									};
									class Unit6
									{
											side = 1;
											vehicle = "1990_British_Rifleman_AT_Mounted";
											rank = "PRIVATE";
											position[] = {13,0,0};
									};
									class Unit7
									{
											side = 1;
											vehicle = "1990_British_Gunner_Mounted";
											rank = "PRIVATE";
											position[] = {15,0,0};
									};
                                };
								 class 1990_Section_Mechanised
                                {
									name = "Section (Mechanised)"; //Name of Group
									faction = "TWC_Millenial"; //Faction
									side = 1; //Side
									class Unit0
									{
											side = 1;
											vehicle = "1990_British_SectionCommander"; //Class name of desired solider
											rank = "SERGEANT"; // Rank
											position[] = {0,3,0}; //Position in the formation
									};
									class Unit1
									{
											side = 1;
											vehicle = "1990_British_Rifleman_AT_Mounted";
											rank = "PRIVATE";
											position[] = {3,0,0};
									};
									class Unit2
									{
											side = 1;
											vehicle = "1990_British_Gunner_Mounted";
											rank = "PRIVATE";
											position[] = {5,0,0};
									};
									class Unit3
									{
											side = 1;
											vehicle = "1990_British_2IC_Mounted";
											rank = "CORPORAL";
											position[] = {7,0,0};
									};
									class Unit4
									{
											side = 1;
											vehicle = "1990_British_Rifleman_AT_Mounted";
											rank = "PRIVATE";
											position[] = {9,0,0};
									};
									class Unit5
									{
											side = 1;
											vehicle = "1990_British_Gunner_Mounted";
											rank = "PRIVATE";
											position[] = {11,0,0};
									};
									class Unit6
									{
											side = 1;
											vehicle = "1990_British_Vehicle_Commander";
											rank = "SERGEANT";
											position[] = {13,0,0};
									};
									class Unit7
									{
											side = 1;
											vehicle = "1990_British_Vehicle_Crew";
											rank = "PRIVATE";
											position[] = {15,0,0};
									};
									class Unit8
									{
											side = 1;
											vehicle = "1990_British_Vehicle_Crew";
											rank = "PRIVATE";
											position[] = {15,0,0};
									};
                                };
								class 1990_Milan
                                {
                                        name = "Milan Team"; //Name of Group
                                        faction = "TWC_Millenial"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "1990_British_SectionCommander"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "1990_British_MilanGunner";
                                                rank = "PRIVATE";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 1;
                                                vehicle = "1990_British_MilanAssistant";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
								};
								class 1990_Platoon_Command
                                {
                                        name = "Platoon Command"; //Name of Group
                                        faction = "TWC_Millenial"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "1990_British_Platoon_Commander"; //Class name of desired solider
                                                rank = "MAJOR"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "1990_British_Platoon_Sergeant";
                                                rank = "LIEUTENANT";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 1;
                                                vehicle = "1990_British_Medic";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
										class Unit3
                                        {
                                                side = 1;
                                                vehicle = "1990_British_MortarGunner";
                                                rank = "PRIVATE";
                                                position[] = {7,0,0};
                                        };
										class Unit4
                                        {
                                                side = 1;
                                                vehicle = "1990_British_Platoon_CSM";
                                                rank = "CAPTAIN";
                                                position[] = {9,0,0};
                                        };
                                };
								class 1990_Recoilless_Rifle_Team
                                {
                                        name = "Recoilless Rifle Team"; //Name of Group
                                        faction = "TWC_Millenial"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "1990_British_SectionCommander"; //Class name of desired solider
                                                rank = "sergeant"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "1990_British_CGG";
                                                rank = "private";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 1;
                                                vehicle = "1990_British_CGAss";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
										class Unit3
                                        {
                                                side = 1;
                                                vehicle = "1990_British_CGG";
                                                rank = "PRIVATE";
                                                position[] = {7,0,0};
                                        };
										class Unit4
                                        {
                                                side = 1;
                                                vehicle = "1990_British_CGAss";
                                                rank = "PRIVATE";
                                                position[] = {9,0,0};
                                        };
                                };
						};
						class 1990_Desert
						{
								name = "TWC 1990 Desert symetrical"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
                                class 1990_Section_Desert
                                {
                                        name = "Section"; //Name of Group
                                        faction = "TWC_Millenial"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "1990_British_SectionCommander_Desert"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "1990_British_Rifleman_Desert";
                                                rank = "PRIVATE";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 1;
                                                vehicle = "1990_British_Rifleman_AT_Desert";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
										class Unit3
                                        {
                                                side = 1;
                                                vehicle = "1990_British_Gunner_Desert";
                                                rank = "PRIVATE";
                                                position[] = {7,0,0};
                                        };
										class Unit4
                                        {
                                                side = 1;
                                                vehicle = "1990_British_2IC_Desert";
                                                rank = "CORPORAL";
                                                position[] = {9,0,0};
                                        };
										class Unit5
                                        {
                                                side = 1;
                                                vehicle = "1990_British_Rifleman_Desert";
                                                rank = "PRIVATE";
                                                position[] = {11,0,0};
                                        };
										class Unit6
                                        {
                                                side = 1;
                                                vehicle = "1990_British_Rifleman_AT_Desert";
                                                rank = "PRIVATE";
                                                position[] = {13,0,0};
                                        };
										class Unit7
                                        {
                                                side = 1;
                                                vehicle = "1990_British_Gunner_Desert";
                                                rank = "PRIVATE";
                                                position[] = {15,0,0};
                                        };
								};
								class 1990_Section_Mounted
                                {
									name = "Section  (Mounted)"; //Name of Group
									faction = "TWC_Millenial"; //Faction
									side = 1; //Side
									class Unit0
									{
											side = 1;
											vehicle = "1990_British_SectionCommander_Desert"; //Class name of desired solider
											rank = "SERGEANT"; // Rank
											position[] = {0,3,0}; //Position in the formation
									};
									class Unit1
									{
											side = 1;
											vehicle = "1990_British_Rifleman_Mounted_Desert";
											rank = "PRIVATE";
											position[] = {3,0,0};
									};
									class Unit2
									{
											side = 1;
											vehicle = "1990_British_Rifleman_AT_Mounted_Desert";
											rank = "PRIVATE";
											position[] = {5,0,0};
									};
									class Unit3
									{
											side = 1;
											vehicle = "1990_British_Gunner_Mounted_Desert";
											rank = "PRIVATE";
											position[] = {7,0,0};
									};
									class Unit4
									{
											side = 1;
											vehicle = "1990_British_2IC_Mounted_Desert";
											rank = "CORPORAL";
											position[] = {9,0,0};
									};
									class Unit5
									{
											side = 1;
											vehicle = "1990_British_Rifleman_Mounted_Desert";
											rank = "PRIVATE";
											position[] = {11,0,0};
									};
									class Unit6
									{
											side = 1;
											vehicle = "1990_British_Rifleman_AT_Mounted_Desert";
											rank = "PRIVATE";
											position[] = {13,0,0};
									};
									class Unit7
									{
											side = 1;
											vehicle = "1990_British_Gunner_Mounted_Desert";
											rank = "PRIVATE";
											position[] = {15,0,0};
									};
                                };
								class 1990_Section_Mechanised
                                {
									name = "Section (Mechanised)"; //Name of Group
									faction = "TWC_Millenial"; //Faction
									side = 1; //Side
									class Unit0
									{
											side = 1;
											vehicle = "1990_British_SectionCommander_Desert"; //Class name of desired solider
											rank = "SERGEANT"; // Rank
											position[] = {0,3,0}; //Position in the formation
									};
									class Unit1
									{
											side = 1;
											vehicle = "1990_British_Rifleman_AT_Mounted_Desert";
											rank = "PRIVATE";
											position[] = {3,0,0};
									};
									class Unit2
									{
											side = 1;
											vehicle = "1990_British_Gunner_Mounted_Desert";
											rank = "PRIVATE";
											position[] = {5,0,0};
									};
									class Unit3
									{
											side = 1;
											vehicle = "1990_British_2IC_Mounted_Desert";
											rank = "CORPORAL";
											position[] = {7,0,0};
									};
									class Unit4
									{
											side = 1;
											vehicle = "1990_British_Rifleman_AT_Mounted_Desert";
											rank = "PRIVATE";
											position[] = {9,0,0};
									};
									class Unit5
									{
											side = 1;
											vehicle = "1990_British_Gunner_Mounted_Desert";
											rank = "PRIVATE";
											position[] = {11,0,0};
									};
									class Unit6
									{
											side = 1;
											vehicle = "1990_British_Vehicle_Commander_Desert";
											rank = "SERGEANT";
											position[] = {13,0,0};
									};
									class Unit7
									{
											side = 1;
											vehicle = "1990_British_Vehicle_Crew_Desert";
											rank = "PRIVATE";
											position[] = {15,0,0};
									};
									class Unit8
									{
											side = 1;
											vehicle = "1990_British_Vehicle_Crew_Desert";
											rank = "PRIVATE";
											position[] = {15,0,0};
									};
                                };
								class 1990_Platoon_Command_Desert
                                {
                                        name = "Platoon Command"; //Name of Group
                                        faction = "TWC_Millenial"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "1990_British_Platoon_Commander_Desert"; //Class name of desired solider
                                                rank = "MAJOR"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "1990_British_Platoon_Sergeant_Desert";
                                                rank = "LIEUTENANT";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 1;
                                                vehicle = "1990_British_Medic_Desert";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
										class Unit3
                                        {
                                                side = 1;
                                                vehicle = "1990_British_MortarGunner_Desert";
                                                rank = "PRIVATE";
                                                position[] = {7,0,0};
                                        };
										class Unit4
                                        {
                                                side = 1;
                                                vehicle = "1990_British_Platoon_CSM_Desert";
                                                rank = "CAPTAIN";
                                                position[] = {9,0,0};
                                        };
                                };
								class 1990_Milan_Desert
                                {
                                        name = "Milan Team"; //Name of Group
                                        faction = "TWC_Millenial"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "1990_British_SectionCommander_Desert"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "1990_British_MilanGunner_Desert";
                                                rank = "PRIVATE";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 1;
                                                vehicle = "1990_British_MilanAssistant_Desert";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
								};
								class 1990_Vehicle_Crew
                                {
                                        name = "Vehicle Crew"; //Name of Group
                                        faction = "TWC_Millenial"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "1990_British_Tank_Commander_Desert"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "1990_British_Tank_Crew_Desert";
                                                rank = "PRIVATE";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 1;
                                                vehicle = "1990_British_Tank_Crew_Desert";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
								};
								class 1990_Recoilless_Rifle_Team_Desert
                                {
                                        name = "Recoilless Rifle Team"; //Name of Group
                                        faction = "TWC_Millenial"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "1990_British_SectionCommander_Desert"; //Class name of desired solider
                                                rank = "sergeant"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "1990_British_CGG_Desert";
                                                rank = "private";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 1;
                                                vehicle = "1990_British_CGAss_Desert";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
										class Unit3
                                        {
                                                side = 1;
                                                vehicle = "1990_British_CGG_Desert";
                                                rank = "PRIVATE";
                                                position[] = {7,0,0};
                                        };
										class Unit4
                                        {
                                                side = 1;
                                                vehicle = "1990_British_CGAss_Desert";
                                                rank = "PRIVATE";
                                                position[] = {9,0,0};
                                        };
                                };
						};
						class 1990_Arctic
						{
								name = "TWC 1990 Arctic Symetrical"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
                                class 1990_Section_Arctic
                                {
                                        name = "Section"; //Name of Group
                                        faction = "TWC_Millenial"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "1990_British_SectionCommander_Arctic"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "1990_British_Rifleman_Arctic";
                                                rank = "PRIVATE";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 1;
                                                vehicle = "1990_British_Rifleman_AT_Arctic";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
										class Unit3
                                        {
                                                side = 1;
                                                vehicle = "1990_British_Gunner_Arctic";
                                                rank = "PRIVATE";
                                                position[] = {7,0,0};
                                        };
										class Unit4
                                        {
                                                side = 1;
                                                vehicle = "1990_British_2IC_Arctic";
                                                rank = "CORPORAL";
                                                position[] = {9,0,0};
                                        };
										class Unit5
                                        {
                                                side = 1;
                                                vehicle = "1990_British_Rifleman_Arctic";
                                                rank = "PRIVATE";
                                                position[] = {11,0,0};
                                        };
										class Unit6
                                        {
                                                side = 1;
                                                vehicle = "1990_British_Rifleman_AT_Arctic";
                                                rank = "PRIVATE";
                                                position[] = {13,0,0};
                                        };
										class Unit7
                                        {
                                                side = 1;
                                                vehicle = "1990_British_Gunner_Arctic";
                                                rank = "PRIVATE";
                                                position[] = {15,0,0};
                                        };
								};
								class 1990_Platoon_Command_Arctic
                                {
                                        name = "Platoon Command"; //Name of Group
                                        faction = "TWC_Millenial"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "1990_British_Platoon_Commander_Arctic"; //Class name of desired solider
                                                rank = "MAJOR"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "1990_British_Platoon_Sergeant_Arctic";
                                                rank = "LIEUTENANT";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 1;
                                                vehicle = "1990_British_Medic_Arctic";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
										class Unit3
                                        {
                                                side = 1;
                                                vehicle = "1990_British_Platoon_CSM_Arctic";
                                                rank = "CAPTAIN";
                                                position[] = {7,0,0};
                                        };
                                };
						};
						class 2000
						{
								name = "TWC 2000 symetrical"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
                                class 2000_Section
                                {
                                        name = "Section"; //Name of Group
                                        faction = "TWC_Millenial"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "2000_British_SectionCommander"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "2000_British_Rifleman";
                                                rank = "PRIVATE";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 1;
                                                vehicle = "2000_British_Rifleman_AT";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
										class Unit3
                                        {
                                                side = 1;
                                                vehicle = "2000_British_AutoRifleman";
                                                rank = "PRIVATE";
                                                position[] = {7,0,0};
                                        };
										class Unit4
                                        {
                                                side = 1;
                                                vehicle = "2000_British_2IC";
                                                rank = "CORPORAL";
                                                position[] = {9,0,0};
                                        };
										class Unit5
                                        {
                                                side = 1;
                                                vehicle = "2000_British_Rifleman";
                                                rank = "PRIVATE";
                                                position[] = {11,0,0};
                                        };
										class Unit6
                                        {
                                                side = 1;
                                                vehicle = "2000_British_Rifleman_AT";
                                                rank = "PRIVATE";
                                                position[] = {13,0,0};
                                        };
										class Unit7
                                        {
                                                side = 1;
                                                vehicle = "2000_British_Marksman";
                                                rank = "PRIVATE";
                                                position[] = {15,0,0};
                                        };
                                };
								class 2000_Section_Mounted
                                {
									name = "Section  (Mounted)"; //Name of Group
									faction = "TWC_Millenial"; //Faction
									side = 1; //Side
									class Unit0
									{
											side = 1;
											vehicle = "2000_British_SectionCommander"; //Class name of desired solider
											rank = "SERGEANT"; // Rank
											position[] = {0,3,0}; //Position in the formation
									};
									class Unit1
									{
											side = 1;
											vehicle = "2000_British_Rifleman_Mounted";
											rank = "PRIVATE";
											position[] = {3,0,0};
									};
									class Unit2
									{
											side = 1;
											vehicle = "2000_British_Rifleman_AT_Mounted";
											rank = "PRIVATE";
											position[] = {5,0,0};
									};
									class Unit3
									{
											side = 1;
											vehicle = "2000_British_AutoRifleman_Mounted";
											rank = "PRIVATE";
											position[] = {7,0,0};
									};
									class Unit4
									{
											side = 1;
											vehicle = "2000_British_2IC_Mounted";
											rank = "CORPORAL";
											position[] = {9,0,0};
									};
									class Unit5
									{
											side = 1;
											vehicle = "2000_British_Rifleman_Mounted";
											rank = "PRIVATE";
											position[] = {11,0,0};
									};
									class Unit6
									{
											side = 1;
											vehicle = "2000_British_Rifleman_AT_Mounted";
											rank = "PRIVATE";
											position[] = {13,0,0};
									};
									class Unit7
									{
											side = 1;
											vehicle = "2000_British_Marksman_Mounted";
											rank = "PRIVATE";
											position[] = {15,0,0};
									};
                                };
								class 2000_Section_Mechanised
                                {
									name = "Section (Mechanised)"; //Name of Group
									faction = "TWC_Millenial"; //Faction
									side = 1; //Side
									class Unit0
									{
											side = 1;
											vehicle = "2000_British_SectionCommander"; //Class name of desired solider
											rank = "SERGEANT"; // Rank
											position[] = {0,3,0}; //Position in the formation
									};
									class Unit1
									{
											side = 1;
											vehicle = "2000_British_Rifleman_AT_Mounted";
											rank = "PRIVATE";
											position[] = {3,0,0};
									};
									class Unit2
									{
											side = 1;
											vehicle = "2000_British_AutoRifleman_Mounted";
											rank = "PRIVATE";
											position[] = {5,0,0};
									};
									class Unit3
									{
											side = 1;
											vehicle = "2000_British_2IC_Mounted";
											rank = "CORPORAL";
											position[] = {7,0,0};
									};
									class Unit4
									{
											side = 1;
											vehicle = "2000_British_Rifleman_AT_Mounted";
											rank = "PRIVATE";
											position[] = {9,0,0};
									};
									class Unit5
									{
											side = 1;
											vehicle = "2000_British_Marksman_Mounted";
											rank = "PRIVATE";
											position[] = {11,0,0};
									};
									class Unit6
									{
											side = 1;
											vehicle = "1990_British_Vehicle_Commander";
											rank = "SERGEANT";
											position[] = {13,0,0};
									};
									class Unit7
									{
											side = 1;
											vehicle = "1990_British_Vehicle_Crew";
											rank = "PRIVATE";
											position[] = {15,0,0};
									};
									class Unit8
									{
											side = 1;
											vehicle = "1990_British_Vehicle_Crew";
											rank = "PRIVATE";
											position[] = {15,0,0};
									};
                                };
								class 2000_Milan
                                {
                                        name = "Milan Team"; //Name of Group
                                        faction = "TWC_Millenial"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "2000_British_SectionCommander"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "2000_British_MilanGunner";
                                                rank = "PRIVATE";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 1;
                                                vehicle = "2000_British_MilanAssistant";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
								};
								class 2000_Platoon_Command
                                {
                                        name = "Platoon Command"; //Name of Group
                                        faction = "TWC_Millenial"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "2000_British_Platoon_Commander"; //Class name of desired solider
                                                rank = "MAJOR"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "2000_British_Platoon_Sergeant";
                                                rank = "LIEUTENANT";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 1;
                                                vehicle = "2000_British_Medic";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
										class Unit3
                                        {
                                                side = 1;
                                                vehicle = "2000_British_MortarGunner";
                                                rank = "PRIVATE";
                                                position[] = {7,0,0};
                                        };
										class Unit4
                                        {
                                                side = 1;
                                                vehicle = "2000_British_Platoon_CSM";
                                                rank = "CAPTAIN";
                                                position[] = {9,0,0};
                                        };
                                };
								class 2000_Recoilless_Rifle_Team
                                {
                                        name = "Recoilless Rifle Team"; //Name of Group
                                        faction = "TWC_Millenial"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "2000_British_SectionCommander"; //Class name of desired solider
                                                rank = "sergeant"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "2000_British_CGG";
                                                rank = "private";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 1;
                                                vehicle = "2000_British_CGAss";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
										class Unit3
                                        {
                                                side = 1;
                                                vehicle = "2000_British_CGG";
                                                rank = "PRIVATE";
                                                position[] = {7,0,0};
                                        };
										class Unit4
                                        {
                                                side = 1;
                                                vehicle = "2000_British_CGAss";
                                                rank = "PRIVATE";
                                                position[] = {9,0,0};
                                        };
                                };
						};
						class 2000_Desert
						{
								name = "TWC 2000 Desert symetrical"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
                                class 2000_Section_Desert
                                {
                                        name = "Section"; //Name of Group
                                        faction = "TWC_Millenial"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "2000_British_SectionCommander_Desert"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "2000_British_Rifleman_Desert";
                                                rank = "PRIVATE";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 1;
                                                vehicle = "2000_British_Rifleman_AT_Desert";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
										class Unit3
                                        {
                                                side = 1;
                                                vehicle = "2000_British_AutoRifleman_Desert";
                                                rank = "PRIVATE";
                                                position[] = {7,0,0};
                                        };
										class Unit4
                                        {
                                                side = 1;
                                                vehicle = "2000_British_2IC_Desert";
                                                rank = "CORPORAL";
                                                position[] = {9,0,0};
                                        };
										class Unit5
                                        {
                                                side = 1;
                                                vehicle = "2000_British_Rifleman_Desert";
                                                rank = "PRIVATE";
                                                position[] = {11,0,0};
                                        };
										class Unit6
                                        {
                                                side = 1;
                                                vehicle = "2000_British_Rifleman_AT_Desert";
                                                rank = "PRIVATE";
                                                position[] = {13,0,0};
                                        };
										class Unit7
                                        {
                                                side = 1;
                                                vehicle = "2000_British_Marksman_Desert";
                                                rank = "PRIVATE";
                                                position[] = {15,0,0};
                                        };
								};
								class 2000_Section_Mounted
                                {
									name = "Section  (Mounted)"; //Name of Group
									faction = "TWC_Millenial"; //Faction
									side = 1; //Side
									class Unit0
									{
											side = 1;
											vehicle = "2000_British_SectionCommander_Desert"; //Class name of desired solider
											rank = "SERGEANT"; // Rank
											position[] = {0,3,0}; //Position in the formation
									};
									class Unit1
									{
											side = 1;
											vehicle = "2000_British_Rifleman_Mounted_Desert";
											rank = "PRIVATE";
											position[] = {3,0,0};
									};
									class Unit2
									{
											side = 1;
											vehicle = "2000_British_Rifleman_AT_Mounted_Desert";
											rank = "PRIVATE";
											position[] = {5,0,0};
									};
									class Unit3
									{
											side = 1;
											vehicle = "2000_British_AutoRifleman_Mounted_Desert";
											rank = "PRIVATE";
											position[] = {7,0,0};
									};
									class Unit4
									{
											side = 1;
											vehicle = "2000_British_2IC_Mounted_Desert";
											rank = "CORPORAL";
											position[] = {9,0,0};
									};
									class Unit5
									{
											side = 1;
											vehicle = "2000_British_Rifleman_Mounted_Desert";
											rank = "PRIVATE";
											position[] = {11,0,0};
									};
									class Unit6
									{
											side = 1;
											vehicle = "2000_British_Rifleman_AT_Mounted_Desert";
											rank = "PRIVATE";
											position[] = {13,0,0};
									};
									class Unit7
									{
											side = 1;
											vehicle = "2000_British_Marksman_Mounted_Desert";
											rank = "PRIVATE";
											position[] = {15,0,0};
									};
                                };
								class 2000_Section_Mechanised
                                {
									name = "Section (Mechanised)"; //Name of Group
									faction = "TWC_Millenial"; //Faction
									side = 1; //Side
									class Unit0
									{
											side = 1;
											vehicle = "2000_British_SectionCommander_Desert"; //Class name of desired solider
											rank = "SERGEANT"; // Rank
											position[] = {0,3,0}; //Position in the formation
									};
									class Unit1
									{
											side = 1;
											vehicle = "2000_British_Rifleman_AT_Mounted_Desert";
											rank = "PRIVATE";
											position[] = {3,0,0};
									};
									class Unit2
									{
											side = 1;
											vehicle = "2000_British_AutoRifleman_Mounted_Desert";
											rank = "PRIVATE";
											position[] = {5,0,0};
									};
									class Unit3
									{
											side = 1;
											vehicle = "2000_British_2IC_Mounted_Desert";
											rank = "CORPORAL";
											position[] = {7,0,0};
									};
									class Unit4
									{
											side = 1;
											vehicle = "2000_British_Rifleman_AT_Mounted_Desert";
											rank = "PRIVATE";
											position[] = {9,0,0};
									};
									class Unit5
									{
											side = 1;
											vehicle = "2000_British_Marksman_Mounted_Desert";
											rank = "PRIVATE";
											position[] = {11,0,0};
									};
									class Unit6
									{
											side = 1;
											vehicle = "1990_British_Vehicle_Commander_Desert";
											rank = "SERGEANT";
											position[] = {13,0,0};
									};
									class Unit7
									{
											side = 1;
											vehicle = "1990_British_Vehicle_Crew_Desert";
											rank = "PRIVATE";
											position[] = {15,0,0};
									};
									class Unit8
									{
											side = 1;
											vehicle = "1990_British_Vehicle_Crew_Desert";
											rank = "PRIVATE";
											position[] = {15,0,0};
									};
                                };
								class 2000_Platoon_Command_Desert
                                {
                                        name = "Platoon Command"; //Name of Group
                                        faction = "TWC_Millenial"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "2000_British_Platoon_Commander_Desert"; //Class name of desired solider
                                                rank = "MAJOR"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "2000_British_Platoon_Sergeant_Desert";
                                                rank = "LIEUTENANT";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 1;
                                                vehicle = "2000_British_Medic_Desert";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
										class Unit3
                                        {
                                                side = 1;
                                                vehicle = "2000_British_MortarGunner_Desert";
                                                rank = "PRIVATE";
                                                position[] = {7,0,0};
                                        };
										class Unit4
                                        {
                                                side = 1;
                                                vehicle = "2000_British_Platoon_CSM_Desert";
                                                rank = "CAPTAIN";
                                                position[] = {9,0,0};
                                        };
                                };
								class 2000_Milan_Desert
                                {
                                        name = "Milan Team"; //Name of Group
                                        faction = "TWC_Millenial"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "2000_British_SectionCommander_Desert"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "2000_British_MilanGunner_Desert";
                                                rank = "PRIVATE";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 1;
                                                vehicle = "2000_British_MilanAssistant_Desert";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
								};
								class 2000_Recoilless_Rifle_Team_Desert
                                {
                                        name = "Recoilless Rifle Team"; //Name of Group
                                        faction = "TWC_Millenial"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "2000_British_SectionCommander_Desert"; //Class name of desired solider
                                                rank = "sergeant"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "2000_British_CGG_Desert";
                                                rank = "private";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 1;
                                                vehicle = "2000_British_CGAss_Desert";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
										class Unit3
                                        {
                                                side = 1;
                                                vehicle = "2000_British_CGG_Desert";
                                                rank = "PRIVATE";
                                                position[] = {7,0,0};
                                        };
										class Unit4
                                        {
                                                side = 1;
                                                vehicle = "2000_British_CGAss_Desert";
                                                rank = "PRIVATE";
                                                position[] = {9,0,0};
                                        };
                                };
						};
                };
        };
};