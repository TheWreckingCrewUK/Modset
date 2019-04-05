class CfgGroups
{
        class WEST
        {
                name = "Blufor"; // Name of Faction Side
                side = 1; // 0 = Opfor , 1 = Blufor , 2 = Indep , I think
                class TWC_Operation_Blufor //Faction Class name
                {
                        name = "TWC Operation Groups"; //Faction Name
                        class 2000_USMC 
						{
                                name = "TWC 2000 US Marines"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
						class 2000_USMCSection
                                {
                                        name = "USMC2000 Section (Woodland)"; //Name of Group
                                        faction = "twc_faction"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "2000_USMC_Squadleader"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "2000_USMC_Teamleader";
                                                rank = "PRIVATE";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 1;
                                                vehicle = "2000_USMC_Breacher";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
										class Unit3
                                        {
                                                side = 1;
                                                vehicle = "2000_USMC_Grenadier";
                                                rank = "PRIVATE";
                                                position[] = {7,0,0};
                                        };
										class Unit4
                                        {
                                                side = 1;
                                                vehicle = "2000_USMC_Base";
                                                rank = "PRIVATE";
                                                position[] = {9,0,0};
                                        };
										class Unit5
                                        {
                                                side = 1;
                                                vehicle = "2000_USMC_Teamleader";
                                                rank = "PRIVATE";
                                                position[] = {11,0,0};
                                        };
										class Unit6
                                        {
                                                side = 1;
                                                vehicle = "2000_USMC_Base";
                                                rank = "PRIVATE";
                                                position[] = {13,0,0};
                                        };
										class Unit7
                                        {
                                                side = 1;
                                                vehicle = "2000_USMC_Autorifleman";
                                                rank = "PRIVATE";
                                                position[] = {15,0,0};
                                        };
										class Unit8
                                        {
                                                side = 1;
                                                vehicle = "2000_USMC_AsstAutorifleman";
                                                rank = "PRIVATE";
                                                position[] = {17,0,0};
                                        };
										class Unit9
                                        {
                                                side = 1;
                                                vehicle = "2000_USMC_Teamleader";
                                                rank = "PRIVATE";
                                                position[] = {19,0,0};
                                        };
										class Unit10
                                        {
                                                side = 1;
                                                vehicle = "2000_USMC_Base";
                                                rank = "PRIVATE";
                                                position[] = {21,0,0};
                                        };
										class Unit11
                                        {
                                                side = 1;
                                                vehicle = "2000_USMC_Marksman";
                                                rank = "PRIVATE";
                                                position[] = {23,0,0};
                                        };
										class Unit12
                                        {
                                                side = 1;
                                                vehicle = "2000_USMC_Medic";
                                                rank = "PRIVATE";
                                                position[] = {25,0,0};
                                        };
                                };
                                class 2000_USMCSection_d
                                {
                                        name = "USMC2000 Section (Desert)"; //Name of Group
                                        faction = "twc_faction"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "2000_USMC_Squadleader_d"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "2000_USMC_Teamleader_d";
                                                rank = "PRIVATE";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 1;
                                                vehicle = "2000_USMC_Breacher_d";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
										class Unit3
                                        {
                                                side = 1;
                                                vehicle = "2000_USMC_Grenadier_d";
                                                rank = "PRIVATE";
                                                position[] = {7,0,0};
                                        };
										class Unit4
                                        {
                                                side = 1;
                                                vehicle = "2000_USMC_Base_d";
                                                rank = "PRIVATE";
                                                position[] = {9,0,0};
                                        };
										class Unit5
                                        {
                                                side = 1;
                                                vehicle = "2000_USMC_Teamleader_d";
                                                rank = "PRIVATE";
                                                position[] = {11,0,0};
                                        };
										class Unit6
                                        {
                                                side = 1;
                                                vehicle = "2000_USMC_Base_d";
                                                rank = "PRIVATE";
                                                position[] = {13,0,0};
                                        };
										class Unit7
                                        {
                                                side = 1;
                                                vehicle = "2000_USMC_Autorifleman_d";
                                                rank = "PRIVATE";
                                                position[] = {15,0,0};
                                        };
										class Unit8
                                        {
                                                side = 1;
                                                vehicle = "2000_USMC_AsstAutorifleman_d";
                                                rank = "PRIVATE";
                                                position[] = {17,0,0};
                                        };
										class Unit9
                                        {
                                                side = 1;
                                                vehicle = "2000_USMC_Teamleader_d";
                                                rank = "PRIVATE";
                                                position[] = {19,0,0};
                                        };
										class Unit10
                                        {
                                                side = 1;
                                                vehicle = "2000_USMC_Base_d";
                                                rank = "PRIVATE";
                                                position[] = {21,0,0};
                                        };
										class Unit11
                                        {
                                                side = 1;
                                                vehicle = "2000_USMC_Marksman_d";
                                                rank = "PRIVATE";
                                                position[] = {23,0,0};
                                        };
										class Unit12
                                        {
                                                side = 1;
                                                vehicle = "2000_USMC_Medic_d";
                                                rank = "PRIVATE";
                                                position[] = {25,0,0};
                                        };
                                };
						};
						class Modern_USMC
                        {
                                name = "TWC Modern US Marines"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
                                class Modern_USMCSection
                                {
                                        name = "USMC Section (Woodland)"; //Name of Group
                                        faction = "twc_faction"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "Modern_USMC_Squadleader"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "Modern_USMC_Teamleader";
                                                rank = "PRIVATE";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 1;
                                                vehicle = "Modern_USMC_Breacher";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
										class Unit3
                                        {
                                                side = 1;
                                                vehicle = "Modern_USMC_Autorifleman";
                                                rank = "PRIVATE";
                                                position[] = {7,0,0};
                                        };
										class Unit4
                                        {
                                                side = 1;
                                                vehicle = "Modern_USMC_AsstAutorifleman";
                                                rank = "PRIVATE";
                                                position[] = {9,0,0};
                                        };
										class Unit5
                                        {
                                                side = 1;
                                                vehicle = "Modern_USMC_Teamleader";
                                                rank = "PRIVATE";
                                                position[] = {11,0,0};
                                        };
										class Unit6
                                        {
                                                side = 1;
                                                vehicle = "Modern_USMC_Rifleman";
                                                rank = "PRIVATE";
                                                position[] = {13,0,0};
                                        };
										class Unit7
                                        {
                                                side = 1;
                                                vehicle = "Modern_USMC_Autorifleman";
                                                rank = "PRIVATE";
                                                position[] = {15,0,0};
                                        };
										class Unit8
                                        {
                                                side = 1;
                                                vehicle = "Modern_USMC_AsstAutorifleman";
                                                rank = "PRIVATE";
                                                position[] = {17,0,0};
                                        };
										class Unit9
                                        {
                                                side = 1;
                                                vehicle = "Modern_USMC_Teamleader";
                                                rank = "PRIVATE";
                                                position[] = {19,0,0};
                                        };
										class Unit10
                                        {
                                                side = 1;
                                                vehicle = "Modern_USMC_MachineGunner";
                                                rank = "PRIVATE";
                                                position[] = {21,0,0};
                                        };
										class Unit11
                                        {
                                                side = 1;
                                                vehicle = "Modern_USMC_AsstMachineGunner";
                                                rank = "PRIVATE";
                                                position[] = {23,0,0};
                                        };
										class Unit12
                                        {
                                                side = 1;
                                                vehicle = "Modern_USMC_Medic";
                                                rank = "PRIVATE";
                                                position[] = {25,0,0};
                                        };
                                };
                                class Modern_USMCSection_d
                                {
                                        name = "USMC Section (Desert)"; //Name of Group
                                        faction = "twc_faction"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "Modern_USMC_Squadleader_d"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "Modern_USMC_Teamleader_d";
                                                rank = "PRIVATE";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 1;
                                                vehicle = "Modern_USMC_Breacher_d";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
										class Unit3
                                        {
                                                side = 1;
                                                vehicle = "Modern_USMC_Autorifleman_d";
                                                rank = "PRIVATE";
                                                position[] = {7,0,0};
                                        };
										class Unit4
                                        {
                                                side = 1;
                                                vehicle = "Modern_USMC_AsstAutorifleman_d";
                                                rank = "PRIVATE";
                                                position[] = {9,0,0};
                                        };
										class Unit5
                                        {
                                                side = 1;
                                                vehicle = "Modern_USMC_Teamleader_d";
                                                rank = "PRIVATE";
                                                position[] = {11,0,0};
                                        };
										class Unit6
                                        {
                                                side = 1;
                                                vehicle = "Modern_USMC_Rifleman_d";
                                                rank = "PRIVATE";
                                                position[] = {13,0,0};
                                        };
										class Unit7
                                        {
                                                side = 1;
                                                vehicle = "Modern_USMC_Autorifleman_d";
                                                rank = "PRIVATE";
                                                position[] = {15,0,0};
                                        };
										class Unit8
                                        {
                                                side = 1;
                                                vehicle = "Modern_USMC_AsstAutorifleman_d";
                                                rank = "PRIVATE";
                                                position[] = {17,0,0};
                                        };
										class Unit9
                                        {
                                                side = 1;
                                                vehicle = "Modern_USMC_Teamleader_d";
                                                rank = "PRIVATE";
                                                position[] = {19,0,0};
                                        };
										class Unit10
                                        {
                                                side = 1;
                                                vehicle = "Modern_USMC_MachineGunner_d";
                                                rank = "PRIVATE";
                                                position[] = {21,0,0};
                                        };
										class Unit11
                                        {
                                                side = 1;
                                                vehicle = "Modern_USMC_AsstMachineGunner_d";
                                                rank = "PRIVATE";
                                                position[] = {23,0,0};
                                        };
										class Unit12
                                        {
                                                side = 1;
                                                vehicle = "Modern_USMC_Medic_d";
                                                rank = "PRIVATE";
                                                position[] = {25,0,0};
                                        };
                                };
								
								
								
                        };
				};
		};
};