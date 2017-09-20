class CfgGroups
{
        class WEST
        {
                name = "Blufor"; // Name of Faction Side
                side = 1; // 0 = Opfor , 1 = Blufor , 2 = Indep , I think
                class TWC_Operation_Blufor //Faction Class name
                {
                        name = "TWC Operation Groups"; //Faction Name
                        class Modern_USMC
                        {
                                name = "TWC Modern US Marines"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
                                class Modern_USMCSection
                                {
                                        name = "USMC Section"; //Name of Group
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
                                                vehicle = "Modern_USMC_Rifleman";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
										class Unit3
                                        {
                                                side = 1;
                                                vehicle = "Modern_USMC_AsstAutorifleman";
                                                rank = "PRIVATE";
                                                position[] = {7,0,0};
                                        };
										class Unit4
                                        {
                                                side = 1;
                                                vehicle = "TWC_Modern_US_Army_AutomaticRifleman";
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
                                                position[] = {11,0,0};
                                        };
										class Unit10
                                        {
                                                side = 1;
                                                vehicle = "Modern_USMC_Rifleman";
                                                rank = "PRIVATE";
                                                position[] = {13,0,0};
                                        };
										class Unit11
                                        {
                                                side = 1;
                                                vehicle = "Modern_USMC_Autorifleman";
                                                rank = "PRIVATE";
                                                position[] = {15,0,0};
                                        };
										class Unit12
                                        {
                                                side = 1;
                                                vehicle = "Modern_USMC_Medic";
                                                rank = "PRIVATE";
                                                position[] = {17,0,0};
                                        };
                                };
                        };
				};
		};
};