class CfgGroups
{
        class WEST
        {
                name = "Blufor"; // Name of Faction Side
                side = 1; // 0 = Opfor , 1 = Blufor , 2 = Indep , I think
                class TWC_Operation_Blufor //Faction Class name
                {
                        name = "TWC Operation Groups"; //Faction Name
/*                        class Modern_Symetrical
                        {
                                name = "TWC Modern symetrical"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
                                class Modern_Section
                                {
                                        name = "Section"; //Name of Group
                                        faction = "twc_faction"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Squadleader"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Rifleman";
                                                rank = "PRIVATE";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Grenadier";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
										class Unit3
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Autorifleman";
                                                rank = "PRIVATE";
                                                position[] = {7,0,0};
                                        };
										class Unit4
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_2IC";
                                                rank = "PRIVATE";
                                                position[] = {9,0,0};
                                        };
										class Unit5
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Autorifleman";
                                                rank = "PRIVATE";
                                                position[] = {11,0,0};
                                        };
										class Unit6
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Machinegunner";
                                                rank = "PRIVATE";
                                                position[] = {13,0,0};
                                        };
										class Unit7
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Marksman";
                                                rank = "PRIVATE";
                                                position[] = {15,0,0};
                                        };
                                };
								class Modern_Section_Mounted
                                {
                                        name = "Section(Mounted)"; //Name of Group
                                        faction = "twc_faction"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Squadleader"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Rifleman_Mounted";
                                                rank = "PRIVATE";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Grenadier_Mounted";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
										class Unit3
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Autorifleman_Mounted";
                                                rank = "PRIVATE";
                                                position[] = {7,0,0};
                                        };
										class Unit4
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_2IC_Mounted";
                                                rank = "PRIVATE";
                                                position[] = {9,0,0};
                                        };
										class Unit5
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Autorifleman_Mounted";
                                                rank = "PRIVATE";
                                                position[] = {11,0,0};
                                        };
										class Unit6
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Machinegunner_Mounted";
                                                rank = "PRIVATE";
                                                position[] = {13,0,0};
                                        };
										class Unit7
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Marksman_Mounted";
                                                rank = "PRIVATE";
                                                position[] = {15,0,0};
                                        };
                                };
								class Modern_Section_Mechanised
                                {
                                        name = "Section(Mounted)"; //Name of Group
                                        faction = "twc_faction"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Squadleader"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Rifleman_Mounted";
                                                rank = "PRIVATE";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Grenadier_Mounted";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
										class Unit3
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_2IC_Mounted";
                                                rank = "PRIVATE";
                                                position[] = {7,0,0};
                                        };
										class Unit4
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Autorifleman_Mounted";
                                                rank = "PRIVATE";
                                                position[] = {9,0,0};
                                        };
										class Unit5
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Marksman_Mounted";
                                                rank = "PRIVATE";
                                                position[] = {11,0,0};
                                        };
										class Unit6
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_VehicleCommander";
                                                rank = "CORPORAL";
                                                position[] = {13,0,0};
                                        };
										class Unit7
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_VehicleCrew";
                                                rank = "PRIVATE";
                                                position[] = {15,0,0};
                                        };
										class Unit8
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_VehicleCrew";
                                                rank = "PRIVATE";
                                                position[] = {15,0,0};
                                        };
                                };
								class Modern_Platoon_Command
                                {
                                        name = "Platoon Command"; //Name of Group
                                        faction = "twc_faction"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Platoon_Commander"; //Class name of desired solider
                                                rank = "lieutenant"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Platoon_Sergeant";
                                                rank = "sergeant";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Medic";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
										class Unit3
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Platoon_CSM";
                                                rank = "sergeant";
                                                position[] = {7,0,0};
                                        };
                                };
								class Modern_Sniper_Team
                                {
                                        name = "Sniper Team"; //Name of Group
                                        faction = "twc_faction"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Spotter"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Sniper";
                                                rank = "PRIVATE";
                                                position[] = {3,0,0};
                                        };
                                };
                        };
*/
						class Modern_Coin
                        {
                                name = "TWC Modern BAF"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
                                class Modern_Coin_Section
                                {
                                        name = "Section COIN"; //Name of Group
                                        faction = "twc_faction"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Squadleader"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Pointman";
                                                rank = "PRIVATE";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Grenadier_COIN";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
										class Unit3
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Autorifleman_COIN";
                                                rank = "PRIVATE";
                                                position[] = {7,0,0};
                                        };
										class Unit4
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_2IC_COIN";
                                                rank = "PRIVATE";
                                                position[] = {9,0,0};
                                        };
										class Unit5
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Autorifleman_COIN";
                                                rank = "PRIVATE";
                                                position[] = {11,0,0};
                                        };
										class Unit6
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Machinegunner";
                                                rank = "PRIVATE";
                                                position[] = {13,0,0};
                                        };
										class Unit7
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Marksman_COIN";
                                                rank = "PRIVATE";
                                                position[] = {15,0,0};
                                        };
										class Unit8
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Medic";
                                                rank = "PRIVATE";
                                                position[] = {17,0,0};
                                        };
                                };
								class Modern_Coin_Section_Mounted
                                {
                                        name = "Section (Mounted)"; //Name of Group
                                        faction = "twc_faction"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Squadleader"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Pointman_Mounted";
                                                rank = "PRIVATE";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Grenadier_COIN_Mounted";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
										class Unit3
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Autorifleman_COIN_Mounted";
                                                rank = "PRIVATE";
                                                position[] = {7,0,0};
                                        };
										class Unit4
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_2IC_COIN_Mounted";
                                                rank = "PRIVATE";
                                                position[] = {9,0,0};
                                        };
										class Unit5
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Autorifleman_COIN_Mounted";
                                                rank = "PRIVATE";
                                                position[] = {11,0,0};
                                        };
										class Unit6
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Machinegunner_Mounted";
                                                rank = "PRIVATE";
                                                position[] = {13,0,0};
                                        };
										class Unit7
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Marksman_COIN_Mounted";
                                                rank = "PRIVATE";
                                                position[] = {15,0,0};
                                        };
                                };

								class Modern_pol_section
                                {
                                        name = "Polish Section (Woodland)"; //Name of Group
                                        faction = "twc_faction"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "Modern_pol_commander"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "Modern_pol_Base";
                                                rank = "PRIVATE";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 1;
                                                vehicle = "Modern_pol_Base";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
                                        class Unit3
                                        {
                                                side = 1;
                                                vehicle = "Modern_pol_grenadier";
                                                rank = "PRIVATE";
                                                position[] = {7,0,0};
                                        };
                                        class Unit4
                                        {
                                                side = 1;
                                                vehicle = "Modern_pol_subcommander";
                                                rank = "PRIVATE";
                                                position[] = {9,0,0};
                                        };
                                        class Unit5
                                        {
                                                side = 1;
                                                vehicle = "Modern_pol_mg";
                                                rank = "PRIVATE";
                                                position[] = {11,0,0};
                                        };
                                        class Unit6
                                        {
                                                side = 1;
                                                vehicle = "Modern_pol_rifleman_at";
                                                rank = "PRIVATE";
                                                position[] = {13,0,0};
                                        };
                                        class Unit7
                                        {
                                                side = 1;
                                                vehicle = "Modern_pol_medic";
                                                rank = "PRIVATE";
                                                position[] = {15,0,0};
                                        };
                                };	

								class Modern_pol_section_desert
                                {
                                        name = "Polish Section (Desert)"; //Name of Group
                                        faction = "twc_faction"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "Modern_pol_commander_d"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "Modern_pol_Base_d";
                                                rank = "PRIVATE";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 1;
                                                vehicle = "Modern_pol_Base_d";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
                                        class Unit3
                                        {
                                                side = 1;
                                                vehicle = "Modern_pol_grenadier_d";
                                                rank = "PRIVATE";
                                                position[] = {7,0,0};
                                        };
                                        class Unit4
                                        {
                                                side = 1;
                                                vehicle = "Modern_pol_subcommander_d";
                                                rank = "PRIVATE";
                                                position[] = {9,0,0};
                                        };
                                        class Unit5
                                        {
                                                side = 1;
                                                vehicle = "Modern_pol_mg_d";
                                                rank = "PRIVATE";
                                                position[] = {11,0,0};
                                        };
                                        class Unit6
                                        {
                                                side = 1;
                                                vehicle = "Modern_pol_rifleman_at_d";
                                                rank = "PRIVATE";
                                                position[] = {13,0,0};
                                        };
                                        class Unit7
                                        {
                                                side = 1;
                                                vehicle = "Modern_pol_medic_d";
                                                rank = "PRIVATE";
                                                position[] = {15,0,0};
                                        };
                                };		

								class Modern_ana_section
                                {
                                        name = "ANA Section"; //Name of Group
                                        faction = "twc_faction"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "twc_ana_commander"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "twc_ana_base";
                                                rank = "PRIVATE";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 1;
                                                vehicle = "twc_ana_rifleman_at";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
                                        class Unit3
                                        {
                                                side = 1;
                                                vehicle = "twc_ana_medic";
                                                rank = "PRIVATE";
                                                position[] = {7,0,0};
                                        };
                                        class Unit4
                                        {
                                                side = 1;
                                                vehicle = "twc_ana_subcommander";
                                                rank = "PRIVATE";
                                                position[] = {9,0,0};
                                        };
                                        class Unit5
                                        {
                                                side = 1;
                                                vehicle = "twc_ana_mg";
                                                rank = "PRIVATE";
                                                position[] = {11,0,0};
                                        };
                                        class Unit6
                                        {
                                                side = 1;
                                                vehicle = "twc_ana_mg_as";
                                                rank = "PRIVATE";
                                                position[] = {13,0,0};
                                        };
                                        class Unit7
                                        {
                                                side = 1;
                                                vehicle = "twc_ana_marksman";
                                                rank = "PRIVATE";
                                                position[] = {15,0,0};
                                        };
                                };								
                               class Modern_Section
                                {
                                        name = "Section"; //Name of Group
                                        faction = "twc_faction"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Squadleader"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Rifleman";
                                                rank = "PRIVATE";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Grenadier";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
										class Unit3
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Autorifleman";
                                                rank = "PRIVATE";
                                                position[] = {7,0,0};
                                        };
										class Unit4
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_2IC";
                                                rank = "PRIVATE";
                                                position[] = {9,0,0};
                                        };
										class Unit5
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Autorifleman";
                                                rank = "PRIVATE";
                                                position[] = {11,0,0};
                                        };
										class Unit6
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Machinegunner";
                                                rank = "PRIVATE";
                                                position[] = {13,0,0};
                                        };
										class Unit7
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Marksman";
                                                rank = "PRIVATE";
                                                position[] = {15,0,0};
                                        };
										class Unit8
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Medic";
                                                rank = "PRIVATE";
                                                position[] = {17,0,0};
                                        };
									};
                               class Modern_FST
                                {
                                        name = "Fire Support Team"; //Name of Group
                                        faction = "twc_faction"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_FSTCommander"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit2
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_FSTAssistant";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
										class Unit3
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_FSTAssistant";
                                                rank = "PRIVATE";
                                                position[] = {7,0,0};
                                        };
										class Unit4
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_FSTForwardObserver";
                                                rank = "PRIVATE";
                                                position[] = {9,0,0};
                                        };
                                };
                               class Modern_Sniperteam
                                {
                                        name = "Sniper Team"; //Name of Group
                                        faction = "twc_faction"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Spotter"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Sniper";
                                                rank = "PRIVATE";
                                                position[] = {3,0,0};
                                        };
                                };
                               class Modern_Sniperteam_coin
                                {
                                        name = "Sniper Team (COIN)"; //Name of Group
                                        faction = "twc_faction"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Spotter_coin"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Sniper_coin";
                                                rank = "PRIVATE";
                                                position[] = {3,0,0};
                                        };
                                };
								class Modern_helicrew
                                {
                                        name = "Heli Crew"; //Name of Group
                                        faction = "twc_faction"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_HeliPilot"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_crewchief";
                                                rank = "PRIVATE";
                                                position[] = {3,0,0};
                                        };
                                };
								class Modern_armourcrew
                                {
                                        name = "Armour Crew"; //Name of Group
                                        faction = "twc_faction"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_VehicleCommander"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_VehicleCrew";
                                                rank = "PRIVATE";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_VehicleCrew";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
                                };
								class Modern_artcrew
                                {
                                        name = "Artillery Crew"; //Name of Group
                                        faction = "twc_faction"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "Modern_Artillery_Commander"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "Modern_Artillery_Gunner";
                                                rank = "PRIVATE";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 1;
                                                vehicle = "Modern_Artillery_Gunner";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
                                };
								
								/*								class Modern_Coin_Platoon_Command
                                {
                                        name = "Platoon Command"; //Name of Group
                                        faction = "twc_faction"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Platoon_Commander"; //Class name of desired solider
                                                rank = "lieutenant"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Platoon_Sergeant";
                                                rank = "sergeant";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Medic";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
                                };
*/                        };
				};
		};
};