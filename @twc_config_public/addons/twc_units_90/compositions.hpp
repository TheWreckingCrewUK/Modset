class CfgGroups
{
	class WEST
	{
		name = "Blufor"; // Name of Faction Side
		side = 1; // 0 = Opfor , 1 = Blufor , 2 = Indep , I think
		class TWC_Operation_Blufor //Faction Class name
		{
				name = "TWC Public Groups"; //Faction Name
				class 1990
				{
					name = "TWC 1990 Symmetrical"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armoured
					class 1990_Section
					{
						name = "Section"; //Name of Group
						faction = "twc_faction"; //Faction
						side = 1; //Side
						class Unit0
						{
								side = 1;
								vehicle = "1990_British_SectionCommander"; //Class name of desired solider
								rank = "CORPORAL"; // Rank
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
								rank = "PRIVATE";
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
					class 1990_Platoon_Command
					{
							name = "Platoon Command"; //Name of Group
							faction = "twc_faction"; //Faction
							side = 1; //Side
							class Unit0
							{
									side = 1;
									vehicle = "1990_British_Platoon_Commander"; //Class name of desired solider
									rank = "lieutenant"; // Rank
									position[] = {0,3,0}; //Position in the formation
							};
							class Unit1
							{
									side = 1;
									vehicle = "1990_British_Platoon_Sergeant";
									rank = "sergeant";
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
									vehicle = "1990_British_Platoon_CSM";
									rank = "sergeant";
									position[] = {9,0,0};
							};
					};
				};
				class 1990_Desert
				{
					name = "TWC 1990 Desert Symmetrical"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
					class 1990_Section_Desert
					{
						name = "Section"; //Name of Group
						faction = "twc_faction"; //Faction
						side = 1; //Side
						class Unit0
						{
								side = 1;
								vehicle = "1990_British_SectionCommander_Desert"; //Class name of desired solider
								rank = "CORPORAL"; // Rank
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
								rank = "PRIVATE";
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
					class 1990_Platoon_Command_Desert
					{
						name = "Platoon Command"; //Name of Group
						faction = "twc_faction"; //Faction
						side = 1; //Side
						class Unit0
						{
								side = 1;
								vehicle = "1990_British_Platoon_Commander_Desert"; //Class name of desired solider
								rank = "lieutenant"; // Rank
								position[] = {0,3,0}; //Position in the formation
						};
						class Unit1
						{
								side = 1;
								vehicle = "1990_British_Platoon_Sergeant_Desert";
								rank = "sergeant";
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
								vehicle = "1990_British_Platoon_CSM_Desert";
								rank = "sergeant";
								position[] = {9,0,0};
						};
					};
					class 1990_Vehicle_Crew
					{
						name = "Vehicle Crew"; //Name of Group
						faction = "twc_faction"; //Faction
						side = 1; //Side
						class Unit0
						{
								side = 1;
								vehicle = "1990_British_Tank_Commander_Desert"; //Class name of desired solider
								rank = "CORPORAL"; // Rank
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
				};
				class twc_men_1990_us_w
				{
					name = "US 1990s Woodland";
					class twc_men_1990_us_w_squad
					{
						name = "Squad"; //Name of Group
						faction = "twc_faction"; //Faction
						side = 1; //Side
						class Unit0
						{
							side = 1;
							vehicle = "twc_men_1990_us_w_SquadLeader"; //Class name of desired solider
							rank = "SERGEANT"; // Rank
							position[] = {0,3,0}; //Position in the formation
						};
						class Unit1
						{
							side = 1;
							vehicle = "twc_men_1990_us_w_teamleader";
							rank = "CORPORAL";
							position[] = {3,0,0};
						};
						class Unit2
						{
							side = 1;
							vehicle = "twc_men_1990_us_w_rifleman";
							rank = "PRIVATE";
							position[] = {5,0,0};
						};
						class Unit3
						{
							side = 1;
							vehicle = "twc_men_1990_us_w_rifleman_at";
							rank = "PRIVATE";
							position[] = {7,0,0};
						};
						class Unit4
						{
							side = 1;
							vehicle = "twc_men_1990_us_w_autorifleman";
							rank = "PRIVATE";
							position[] = {9,0,0};
						};
						class Unit5
						{
							side = 1;
							vehicle = "twc_men_1990_us_w_teamleader";
							rank = "CORPORAL";
							position[] = {11,0,0};
						};
						class Unit6
						{
							side = 1;
							vehicle = "twc_men_1990_us_w_rifleman";
							rank = "PRIVATE";
							position[] = {13,0,0};
						};
						class Unit7
						{
							side = 1;
							vehicle = "twc_men_1990_us_w_rifleman_at";
							rank = "PRIVATE";
							position[] = {15,0,0};
						};
						class Unit8
						{
							side = 1;
							vehicle = "twc_men_1990_us_w_autorifleman";
							rank = "PRIVATE";
							position[] = {17,0,0};
						};
					};
				};
				class 2000_Desert
				{
					name = "TWC 2000 Desert"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
					class 2000_Section_Desert
					{
						name = "Section"; //Name of Group
						faction = "twc_faction"; //Faction
						side = 1; //Side
						class Unit0
						{
								side = 1;
								vehicle = "2000_British_SectionCommander_Desert"; //Class name of desired solider
								rank = "CORPORAL"; // Rank
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
								vehicle = "2000_British_Gunner_Desert";
								rank = "PRIVATE";
								position[] = {5,0,0};
						};
						class Unit3
						{
								side = 1;
								vehicle = "2000_British_Grenadier_Desert";
								rank = "PRIVATE";
								position[] = {7,0,0};
						};
						class Unit4
						{
								side = 1;
								vehicle = "2000_British_2IC_Desert";
								rank = "PRIVATE";
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
								vehicle = "2000_British_MachineGunner_Desert";
								rank = "PRIVATE";
								position[] = {13,0,0};
						};
						class Unit7
						{
								side = 1;
								vehicle = "2000_British_mg_assistant_Desert";
								rank = "PRIVATE";
								position[] = {15,0,0};
						};
						class Unit8
						{
								side = 1;
								vehicle = "2000_British_Medic_Desert";
								rank = "PRIVATE";
								position[] = {17,0,0};
						};
					};
					class 2000_FST_Desert
					{
						name = "Fire Support Team"; //Name of Group
						faction = "twc_faction"; //Faction
						side = 1; //Side
						class Unit0
						{
								side = 1;
								vehicle = "2000_British_FSTCommander_Desert"; //Class name of desired solider
								rank = "CORPORAL"; // Rank
								position[] = {0,3,0}; //Position in the formation
						};
						class Unit1
						{
								side = 1;
								vehicle = "2000_British_FSTAssistant_Desert";
								rank = "PRIVATE";
								position[] = {3,0,0};
						};
						class Unit2
						{
								side = 1;
								vehicle = "2000_British_FSTAssistant_Desert";
								rank = "PRIVATE";
								position[] = {5,0,0};
						};
					};
				};
				class 2000_Woodland
				{
					name = "TWC 2000 Woodland"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
					class 2000_Section_Desert
					{
						name = "Section"; //Name of Group
						faction = "twc_faction"; //Faction
						side = 1; //Side
						class Unit0
						{
								side = 1;
								vehicle = "2000_British_SectionCommander"; //Class name of desired solider
								rank = "CORPORAL"; // Rank
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
								vehicle = "2000_British_Gunner";
								rank = "PRIVATE";
								position[] = {5,0,0};
						};
						class Unit3
						{
								side = 1;
								vehicle = "2000_British_Grenadier";
								rank = "PRIVATE";
								position[] = {7,0,0};
						};
						class Unit4
						{
								side = 1;
								vehicle = "2000_British_2IC";
								rank = "PRIVATE";
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
								vehicle = "2000_British_MachineGunner";
								rank = "PRIVATE";
								position[] = {13,0,0};
						};
						class Unit7
						{
								side = 1;
								vehicle = "2000_British_mg_assistant";
								rank = "PRIVATE";
								position[] = {15,0,0};
						};
						class Unit8
						{
								side = 1;
								vehicle = "2000_British_Medic";
								rank = "PRIVATE";
								position[] = {17,0,0};
						};
					};
					
					class 2000_FST
					{
						name = "Fire Support Team"; //Name of Group
						faction = "twc_faction"; //Faction
						side = 1; //Side
						class Unit0
						{
								side = 1;
								vehicle = "2000_British_FSTCommander"; //Class name of desired solider
								rank = "CORPORAL"; // Rank
								position[] = {0,3,0}; //Position in the formation
						};
						class Unit1
						{
								side = 1;
								vehicle = "2000_British_FSTAssistant";
								rank = "PRIVATE";
								position[] = {3,0,0};
						};
						class Unit2
						{
								side = 1;
								vehicle = "2000_British_FSTAssistant";
								rank = "PRIVATE";
								position[] = {5,0,0};
						};
					};
					
					class 2000_Sniperteam
					{
						name = "Sniper Team"; //Name of Group
						faction = "twc_faction"; //Faction
						side = 1; //Side
						class Unit0
						{
								side = 1;
								vehicle = "2000_British_Spotter"; //Class name of desired solider
								rank = "CORPORAL"; // Rank
								position[] = {0,3,0}; //Position in the formation
						};
						class Unit1
						{
								side = 1;
								vehicle = "2000_British_Sniper";
								rank = "PRIVATE";
								position[] = {3,0,0};
						};
					};
					
					class 2000_jetteam
					{
						name = "Jet Team"; //Name of Group
						faction = "twc_faction"; //Faction
						side = 1; //Side
						class Unit0
						{
								side = 1;
								vehicle = "2000_British_FSTForwardObserver"; //Class name of desired solider
								rank = "CORPORAL"; // Rank
								position[] = {0,3,0}; //Position in the formation
						};
						class Unit1
						{
								side = 1;
								vehicle = "2000_British_JetPilot";
								rank = "PRIVATE";
								position[] = {3,0,0};
						};
					};
					class 2000_armourcrew
					{
						name = "Armour Crew"; //Name of Group
						faction = "twc_faction"; //Faction
						side = 1; //Side
						class Unit0
						{
								side = 1;
								vehicle = "2000_British_Vehicle_Commander"; //Class name of desired solider
								rank = "CORPORAL"; // Rank
								position[] = {0,3,0}; //Position in the formation
						};
						class Unit1
						{
								side = 1;
								vehicle = "2000_British_Vehicle_Crew";
								rank = "PRIVATE";
								position[] = {3,0,0};
						};
						class Unit2
						{
								side = 1;
								vehicle = "2000_British_Vehicle_Crew";
								rank = "PRIVATE";
								position[] = {5,0,0};
						};
					};
				};


			};
	};
};