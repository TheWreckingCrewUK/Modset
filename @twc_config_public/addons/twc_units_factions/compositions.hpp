class CfgGroups
{
        class EAST
        {
                name = "Opfor"; // Name of Faction Side
                side = 0; // 0 = Opfor , 1 = Blufor , 2 = Indep , I think
                class TWC_public_opfor //Faction Class name
                {
                        name = "TWC Public Groups"; //Faction Name
                        class ins_enemies
                        {
                                name = "TWC Takistani Units"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
                                class garrison_Section
                                {
                                        name = "Garrison Group"; //Name of Group
                                        faction = "twc_faction"; //Faction
                                        side = 0; //Side
                                        class Unit0
                                        {
                                                side = 0;
                                                vehicle = "Tak_twc_ins_Men_R1"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {1,0,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 0;
                                                vehicle = "Tak_twc_ins_Men_RPG1";
                                                rank = "PRIVATE";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 0;
                                                vehicle = "Tak_twc_ins_Men_R2";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
										class Unit3
                                        {
                                                side = 0;
                                                vehicle = "Tak_twc_ins_Men_AR1";
                                                rank = "PRIVATE";
                                                position[] = {7,0,0};
                                        };
										class Unit4
                                        {
                                                side = 0;
                                                vehicle = "Tak_twc_ins_Men_R3";
                                                rank = "PRIVATE";
                                                position[] = {9,0,0};
                                        };
										class Unit5
                                        {
                                                side = 0;
                                                vehicle = "Tak_twc_ins_Men_MG1";
                                                rank = "PRIVATE";
                                                position[] = {11,0,0};
                                        };
										class Unit6
                                        {
                                                side = 0;
                                                vehicle = "CUP_O_TK_INS_Soldier_TL";
                                                rank = "PRIVATE";
                                                position[] = {13,0,0};
                                        };
                                };
								class assault_section
                                {
                                        name = "Assault Group"; //Name of Group
                                        faction = "twc_faction"; //Faction
                                        side = 0; //Side
                                        class Unit0
                                        {
                                                side = 0;
                                                vehicle = "CUP_O_TK_INS_Soldier_TL"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 0;
                                                vehicle = "Tak_twc_ins_Men_AR1";
                                                rank = "PRIVATE";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 0;
                                                vehicle = "Tak_twc_ins_Men_MG1";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
										class Unit3
                                        {
                                                side = 0;
                                                vehicle = "Tak_twc_ins_Men_R2";
                                                rank = "PRIVATE";
                                                position[] = {7,0,0};
                                        };

                                };
								class tak_mg_team
                                {
                                        name = "MG Team"; //Name of Group
                                        faction = "twc_faction"; //Faction
                                        side = 0; //Side
                                        class Unit0
                                        {
                                                side = 0;
                                                vehicle = "Tak_twc_ins_Men_R3"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 0;
                                                vehicle = "Tak_twc_ins_Men_MG1";
                                                rank = "PRIVATE";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 0;
                                                vehicle = "Tak_twc_ins_Men_MG1";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
										class Unit3
                                        {
                                                side = 0;
                                                vehicle = "Tak_twc_ins_Men_AR1";
                                                rank = "PRIVATE";
                                                position[] = {7,0,0};
                                        };
										class Unit4
                                        {
                                                side = 0;
                                                vehicle = "Tak_twc_ins_Men_AR1";
                                                rank = "PRIVATE";
                                                position[] = {9,0,0};
                                        };
                                };
                        };
			                        class ira_enemies
                        {
                                name = "TWC IRA Units"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
                                class ira_light_Section
                                {
                                        name = "Light Group"; //Name of Group
                                        faction = "twc_faction"; //Faction
                                        side = 0; //Side
                                        class Unit0
                                        {
                                                side = 0;
                                                vehicle = "IRA_pistol_1"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {1,0,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 0;
                                                vehicle = "IRA_pistol_2";
                                                rank = "PRIVATE";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 0;
                                                vehicle = "IRA_pistol_3";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
										class Unit3
                                        {
                                                side = 0;
                                                vehicle = "IRA_pistol_1";
                                                rank = "PRIVATE";
                                                position[] = {7,0,0};
                                        };
										class Unit4
                                        {
                                                side = 0;
                                                vehicle = "IRA_pistol_2";
                                                rank = "PRIVATE";
                                                position[] = {9,0,0};
                                        };
										class Unit5
                                        {
                                                side = 0;
                                                vehicle = "IRA_pistol_3";
                                                rank = "PRIVATE";
                                                position[] = {11,0,0};
                                        };
                                };
								class ira_heavy_section
                                {
                                        name = "Heavy Group"; //Name of Group
                                        faction = "twc_faction"; //Faction
                                        side = 0; //Side
                                        class Unit0
                                        {
                                                side = 0;
                                                vehicle = "IRA_Rifleman_M16_2"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 0;
                                                vehicle = "IRA_Rifleman_M16_4";
                                                rank = "PRIVATE";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 0;
                                                vehicle = "IRA_Autorifleman";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
										class Unit3
                                        {
                                                side = 0;
                                                vehicle = "IRA_Rifleman_AKM";
                                                rank = "PRIVATE";
                                                position[] = {7,0,0};
                                        };
										class Unit4
                                        {
                                                side = 0;
                                                vehicle = "IRA_Squadleader";
                                                rank = "PRIVATE";
                                                position[] = {9,0,0};
                                        };

                                };
								class ira_mg_team
                                {
                                        name = "MG Team"; //Name of Group
                                        faction = "twc_faction"; //Faction
                                        side = 0; //Side
                                        class Unit0
                                        {
                                                side = 0;
                                                vehicle = "IRA_Autorifleman_2"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 0;
                                                vehicle = "IRA_Autorifleman_2";
                                                rank = "PRIVATE";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 0;
                                                vehicle = "IRA_Autorifleman";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
										class Unit3
                                        {
                                                side = 0;
                                                vehicle = "IRA_Autorifleman";
                                                rank = "PRIVATE";
                                                position[] = {7,0,0};
                                        };
										class Unit4
                                        {
                                                side = 0;
                                                vehicle = "IRA_Autorifleman";
                                                rank = "PRIVATE";
                                                position[] = {9,0,0};
                                        };
                                };
                        };
				};
		};
};