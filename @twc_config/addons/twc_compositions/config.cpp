
class CfgPatches
{
	class Addons_config
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"uk3cb_baf_weapons",
			"uk3cb_baf_equipment",
			"cup_weapons_ammoboxes"
		};
		version="1";
		projectName="TWC";
		author="FakeMatty";
	};
};
	
class CfgGroups
{
        class WEST
        {
                name = "Blufor"; // Name of Faction Side
                side = 1; // 0 = Opfor , 1 = Blufor , 2 = Indep , I think
                class Army //Faction Class name
                {
                        name = "TWC Operation Groups"; //Faction Name
                        class Modern
                        {
                                name = "TWC Modern symetrical"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
                                class SectionModern
                                {
                                        name = "Section"; //Name of Group
                                        faction = "a_units"; //Faction
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
                                                vehicle = "Modern_British_Automaticrifleman";
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
                                                vehicle = "Modern_British_Automaticrifleman";
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
								class Modern_Platoon_Command
                                {
                                        name = "Platoon Command"; //Name of Group
                                        faction = "a_units"; //Faction
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
								class Section_Modern_Mechianizied
                                {
                                        name = "Mechanized Section"; //Name of Group
                                        faction = "a_units"; //Faction
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
                                                vehicle = "Mechanized_British_2IC";
                                                rank = "PRIVATE";
                                                position[] = {7,0,0};
                                        };
										class Unit4
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Automaticrifleman";
                                                rank = "PRIVATE";
                                                position[] = {9,0,0};
                                        };
										class Unit5
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Marksman";
                                                rank = "PRIVATE";
                                                position[] = {11,0,0};
                                        };
										class Unit6
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_VehicleCommander";
                                                rank = "PRIVATE";
                                                position[] = {13,1,0};
                                        };
										class Unit7
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_VehicleCrew";
                                                rank = "PRIVATE";
                                                position[] = {15,1,0};
                                        };
										class Unit8
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_VehicleCrew";
                                                rank = "PRIVATE";
                                                position[] = {17,1,0};
                                        };
                                };
                        };
						class Coin
                        {
                                name = "TWC Modern Coin"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
                                class SectionModernCoin
                                {
                                        name = "Section"; //Name of Group
                                        faction = "a_units"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Coin_Squadleader"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Coin_Pointman";
                                                rank = "PRIVATE";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Coin_Grenadier";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
										class Unit3
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Coin_Automaticrifleman";
                                                rank = "PRIVATE";
                                                position[] = {7,0,0};
                                        };
										class Unit4
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Coin_2IC";
                                                rank = "PRIVATE";
                                                position[] = {9,0,0};
                                        };
										class Unit5
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Coin_Automaticrifleman";
                                                rank = "PRIVATE";
                                                position[] = {11,0,0};
                                        };
										class Unit6
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Coin_Machinegunner";
                                                rank = "PRIVATE";
                                                position[] = {13,0,0};
                                        };
										class Unit7
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Coin_Marksman";
                                                rank = "PRIVATE";
                                                position[] = {15,0,0};
                                        };
                                };
								class Modern_Coin_Platoon_Command
                                {
                                        name = "Platoon Command"; //Name of Group
                                        faction = "a_units"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Coin_Platoon_Commander"; //Class name of desired solider
                                                rank = "lieutenant"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Coin_Platoon_Sergeant";
                                                rank = "sergeant";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Coin_Medic";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
                                };
								class Section_Modern_COIN_Mechianizied
                                {
                                        name = "Mechanized Section"; //Name of Group
                                        faction = "a_units"; //Faction
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
                                                vehicle = "Modern_British_Coin_Pointman";
                                                rank = "PRIVATE";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Coin_Grenadier";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
										class Unit3
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Coin_2IC";
                                                rank = "PRIVATE";
                                                position[] = {7,0,0};
                                        };
										class Unit4
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_Coin_Automaticrifleman";
                                                rank = "PRIVATE";
                                                position[] = {9,0,0};
                                        };
										class Unit5
                                        {
                                                side = 1;
                                                vehicle = "Mechanized_British_Marksman";
                                                rank = "PRIVATE";
                                                position[] = {11,0,0};
                                        };
										class Unit6
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_VehicleCommander";
                                                rank = "PRIVATE";
                                                position[] = {13,1,0};
                                        };
										class Unit7
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_VehicleCrew";
                                                rank = "PRIVATE";
                                                position[] = {15,1,0};
                                        };
										class Unit8
                                        {
                                                side = 1;
                                                vehicle = "Modern_British_VehicleCrew";
                                                rank = "PRIVATE";
                                                position[] = {17,1,0};
                                        };
                                };
                        };
                        class ColdWar
                        {
                                name = "TWC Cold War"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
                                class SectionModern
                                {
                                        name = "Section"; //Name of Group
                                        faction = "a_units"; //Faction
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
								class Modern_Platoon_Command
                                {
                                        name = "Platoon Command"; //Name of Group
                                        faction = "a_units"; //Faction
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
                                                vehicle = "ColdWar_Medic";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
                                };
								class Cold_War_AA
								{
										name = "AA Team";
										faction = "a_units";
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
								class Cold_War_MIlan
								{
										name = "Milan Team";
										faction = "a_units";
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
                        };
						class 1990
						{
								name = "TWC 1990 symetrical"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
                                class SectionModern
                                {
                                        name = "Section"; //Name of Group
                                        faction = "a_units"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "1990_British_Squadleader"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "1990_British_Grenadier";
                                                rank = "PRIVATE";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 1;
                                                vehicle = "1990_British_Gunner";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
										class Unit3
                                        {
                                                side = 1;
                                                vehicle = "1990_British_Rifleman";
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
                                                vehicle = "1990_British_Grenadier";
                                                rank = "PRIVATE";
                                                position[] = {11,0,0};
                                        };
										class Unit6
                                        {
                                                side = 1;
                                                vehicle = "1990_British_Gunner";
                                                rank = "PRIVATE";
                                                position[] = {13,0,0};
                                        };
										class Unit7
                                        {
                                                side = 1;
                                                vehicle = "1990_British_Rifleman";
                                                rank = "PRIVATE";
                                                position[] = {15,0,0};
                                        };
                                };
								class SectionMilan
                                {
                                        name = "Milan Team"; //Name of Group
                                        faction = "a_units"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "1990_British_Squadleader"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
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
                                        faction = "a_units"; //Faction
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
                                };
						};
						class 1990_Desert
						{
								name = "TWC 1990 Desert symetrical"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
                                class SectionModern
                                {
                                        name = "Section"; //Name of Group
                                        faction = "a_units"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "1990_British_Squadleader_Desert"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = 1;
                                                vehicle = "1990_British_Grenadier_Desert";
                                                rank = "PRIVATE";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = 1;
                                                vehicle = "1990_British_Gunner_Desert";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
										class Unit3
                                        {
                                                side = 1;
                                                vehicle = "1990_British_Rifleman_Desert";
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
                                                vehicle = "1990_British_Grenadier_Desert";
                                                rank = "PRIVATE";
                                                position[] = {11,0,0};
                                        };
										class Unit6
                                        {
                                                side = 1;
                                                vehicle = "1990_British_Gunner_Desert";
                                                rank = "PRIVATE";
                                                position[] = {13,0,0};
                                        };
										class Unit7
                                        {
                                                side = 1;
                                                vehicle = "1990_British_Rifleman_Desert";
                                                rank = "PRIVATE";
                                                position[] = {15,0,0};
                                        };
                                };
								class 1990_Desert_Platoon_Command
                                {
                                        name = "Platoon Command"; //Name of Group
                                        faction = "a_units"; //Faction
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
                                };
								class SectionMilan
                                {
                                        name = "Milan Team"; //Name of Group
                                        faction = "a_units"; //Faction
                                        side = 1; //Side
                                        class Unit0
                                        {
                                                side = 1;
                                                vehicle = "1990_British_Squadleader_Desert"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
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
						};
                    
                };
        };
		class EAST
        {
                name = "Opfor"; // Name of Faction Side
                side = EAST; // 0 = Opfor , 1 = Blufor , 2 = Indep , I think
                class Army //Faction Class name
                {
                        name = "TWC Operation Groups Opfor"; //Faction Name
                        class Modern
                        {
                                name = "TWC Russian Federation"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
                                class Section_Modern_Mechanized
                                {
                                        name = "Section Mechanized"; //Name of Group
                                        faction = "a_units"; //Faction
                                        side = EAST; //Side
                                        class Unit0
                                        {
                                                side = EAST;
                                                vehicle = "Russian_Squadleader"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
										class Unit1
                                        {
                                                side = EAST;
                                                vehicle = "Russian_Rifleman"; //Class name of desired solider
                                                rank = "PRIVATE"; // Rank
                                                position[] = {3,0,0}; //Position in the formation
                                        };
										class Unit2
                                        {
                                                side = EAST;
                                                vehicle = "Russian_Grenadier"; //Class name of desired solider
                                                rank = "PRIVATE"; // Rank
                                                position[] = {6,0,0}; //Position in the formation
                                        };
										class Unit3
                                        {
                                                side = EAST;
                                                vehicle = "Russian_Seniorrifleman"; //Class name of desired solider
                                                rank = "PRIVATE"; // Rank
                                                position[] = {9,0,0}; //Position in the formation
                                        };
										class Unit4
                                        {
                                                side = EAST;
                                                vehicle = "Russian_Grenadierassistant"; //Class name of desired solider
                                                rank = "PRIVATE"; // Rank
                                                position[] = {12,0,0}; //Position in the formation
                                        };
										class Unit5
                                        {
                                                side = EAST;
                                                vehicle = "Russian_Automaticrifleman"; //Class name of desired solider
                                                rank = "PRIVATE"; // Rank
                                                position[] = {15,0,0}; //Position in the formation
                                        };
										class Unit6
                                        {
                                                side = EAST;
                                                vehicle = "Russian_Vehiclecommander"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {18,0,0}; //Position in the formation
                                        };
										class Unit7
                                        {
                                                side = EAST;
                                                vehicle = "Russian_Vehiclecrew"; //Class name of desired solider
                                                rank = "PRIVATE"; // Rank
                                                position[] = {21,0,0}; //Position in the formation
                                        };
										class Unit8
                                        {
                                                side = EAST;
                                                vehicle = "Russian_Vehiclecrew"; //Class name of desired solider
                                                rank = "PRIVATE"; // Rank
                                                position[] = {24,0,0}; //Position in the formation
                                        };
								};
								class Section_Modern_USSR_platoon_Command
                                {
                                        name = "Platoon Command"; //Name of Group
                                        faction = "a_units"; //Faction
                                        side = EAST; //Side
                                        class Unit0
                                        {
                                                side = EAST;
                                                vehicle = "Russian_Squadleader"; //Class name of desired solider
                                                rank = "lieutenant"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
										class Unit1
                                        {
                                                side = EAST;
                                                vehicle = "Russian_Squadleader"; //Class name of desired solider
                                                rank = "PRIVATE"; // Rank
                                                position[] = {3,0,0}; //Position in the formation
                                        };
										class Unit2
                                        {
                                                side = EAST;
                                                vehicle = "Russian_Squadleader"; //Class name of desired solider
                                                rank = "PRIVATE"; // Rank
                                                position[] = {6,0,0}; //Position in the formation
                                        };
								};
						};
						class ColdWar_USSR_INF
						{
						
								name = "TWC USSR Cold War"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
                                class Section_USSR_ColdWar
                                {
                                        name = "Section"; //Name of Group
                                        faction = "a_units"; //Faction
                                        side = EAST; //Side
                                        class Unit0
                                        {
                                                side = EAST;
                                                vehicle = "ColdWar_USSR_Squadleader"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
										class Unit1
                                        {
                                                side = EAST;
                                                vehicle = "ColdWar_USSR_MachineGunner"; //Class name of desired solider
                                                rank = "PRIVATE"; // Rank
                                                position[] = {3,0,0}; //Position in the formation
                                        };
										class Unit2
                                        {
                                                side = EAST;
                                                vehicle = "ColdWar_USSR_Grenadier"; //Class name of desired solider
                                                rank = "PRIVATE"; // Rank
                                                position[] = {6,0,0}; //Position in the formation
                                        };
										class Unit3
                                        {
                                                side = EAST;
                                                vehicle = "ColdWar_USSR_Grenadierassistant"; //Class name of desired solider
                                                rank = "PRIVATE"; // Rank
                                                position[] = {9,0,0}; //Position in the formation
                                        };
										class Unit4
                                        {
                                                side = EAST;
                                                vehicle = "ColdWar_USSR_Efreitor"; //Class name of desired solider
                                                rank = "PRIVATE"; // Rank
                                                position[] = {12,0,0}; //Position in the formation
                                        };
										class Unit5
                                        {
                                                side = EAST;
                                                vehicle = "ColdWar_USSR_Rifleman"; //Class name of desired solider
                                                rank = "PRIVATE"; // Rank
                                                position[] = {15,0,0}; //Position in the formation
                                        };
										class Unit6
                                        {
                                                side = EAST;
                                                vehicle = "ColdWar_USSR_Rifleman"; //Class name of desired solider
                                                rank = "PRIVATE"; // Rank
                                                position[] = {18,0,0}; //Position in the formation
                                        };
								};
								class Section_USSR_ColdWar_AA
                                {
                                        name = "AA Team"; //Name of Group
                                        faction = "a_units"; //Faction
                                        side = EAST; //Side
                                        class Unit0
                                        {
                                                side = EAST;
                                                vehicle = "ColdWar_USSR_AAGunner"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
										class Unit1
                                        {
                                                side = EAST;
                                                vehicle = "ColdWar_USSR_AAAssistant"; //Class name of desired solider
                                                rank = "PRIVATE"; // Rank
                                                position[] = {3,0,0}; //Position in the formation
                                        };
								};
						};
						class GulfWar
                        {
                                name = "TWC Iraqi Infantry"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
                                class SectionGulfWar
                                {
                                        name = "Section"; //Name of Group
                                        faction = "Iraqi_units"; //Faction
                                        side = EAST; //Side
                                        class Unit0
                                        {
                                                side = EAST;
                                                vehicle = "GulfWar_Iraqi_Squadleader"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
                                        class Unit1
                                        {
                                                side = EAST;
                                                vehicle = "GulfWar_Iraqi_Rifleman";
                                                rank = "PRIVATE";
                                                position[] = {3,0,0};
                                        };
                                        class Unit2
                                        {
                                                side = EAST;
                                                vehicle = "GulfWar_Iraqi_Rifleman";
                                                rank = "PRIVATE";
                                                position[] = {5,0,0};
                                        };
										class Unit3
                                        {
                                                side = EAST;
                                                vehicle = "GulfWar_Iraqi_RPG";
                                                rank = "PRIVATE";
                                                position[] = {7,0,0};
                                        };
										class Unit4
                                        {
                                                side = EAST;
                                                vehicle = "GulfWar_Iraqi_RPGAssistant";
                                                rank = "PRIVATE";
                                                position[] = {9,0,0};
                                        };
										class Unit5
                                        {
                                                side = EAST;
                                                vehicle = "GulfWar_Iraqi_Squadleader";
                                                rank = "PRIVATE";
                                                position[] = {11,0,0};
                                        };
										class Unit6
                                        {
                                                side = EAST;
                                                vehicle = "GulfWar_Iraqi_MG";
                                                rank = "PRIVATE";
                                                position[] = {13,0,0};
                                        };
										class Unit7
                                        {
                                                side = EAST;
                                                vehicle = "GulfWar_Iraqi_MGAssistant";
                                                rank = "PRIVATE";
                                                position[] = {15,0,0};
                                        };
                                };
						};
				};
		};
		class INDEP
        {
                name = "Independent"; // Name of Faction Side
                side = 2; // 0 = Opfor , 1 = Blufor , Independent = 2 ,   I think
                class Army //Faction Class name
                {
                        name = "Cold War Argentina"; //Faction Name
                        class Cold_War_Argentina
                        {
                                name = "Argentina Cold War Infantry"; //Name of Sub Group - Infantry , SpecOps , Support , Motorized , Mechanized, Armored
                                class Argentinian_Cold_War_Infantry
                                {
                                        name = "Section"; //Name of Group
                                        faction = "argentinian_units"; //Faction
                                        side = 2; //Side
                                        class Unit0
                                        {
                                                side = 2;
                                                vehicle = "Cold_War_Argentinian_Squadleader"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
										class Unit1
                                        {
                                                side = 2;
                                                vehicle = "Cold_War_Argentinian_Rifleman"; //Class name of desired solider
                                                rank = "PRIVATE"; // Rank
                                                position[] = {3,0,0}; //Position in the formation
                                        };
										class Unit2
                                        {
                                                side = 2;
                                                vehicle = "Cold_War_Argentinian_Rifleman"; //Class name of desired solider
                                                rank = "PRIVATE"; // Rank
                                                position[] = {6,0,0}; //Position in the formation
                                        };
										class Unit3
                                        {
                                                side = 2;
                                                vehicle = "Cold_War_Argentinian_AT_Rifleman"; //Class name of desired solider
                                                rank = "PRIVATE"; // Rank
                                                position[] = {9,0,0}; //Position in the formation
                                        };
										class Unit4
                                        {
                                                side = 2;
                                                vehicle = "Cold_War_Argentinian_AT_Assistant"; //Class name of desired solider
                                                rank = "PRIVATE"; // Rank
                                                position[] = {12,0,0}; //Position in the formation
                                        };
										class Unit5
                                        {
                                                side = 2;
                                                vehicle = "Cold_War_Argentinian_Squadleader"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {15,0,0}; //Position in the formation
                                        };
										class Unit6
                                        {
                                                side = 2;
                                                vehicle = "Cold_War_Argentinian_Machinegunner"; //Class name of desired solider
                                                rank = "PRIVATE"; // Rank
                                                position[] = {18,0,0}; //Position in the formation
                                        };
										class Unit7
                                        {
                                                side = 2;
                                                vehicle = "Cold_War_Argentinian_MG_Assistant"; //Class name of desired solider
                                                rank = "PRIVATE"; // Rank
                                                position[] = {21,0,0}; //Position in the formation
                                        };
								};
								class Argentina_Cold_War_AA
								{
                                        name = "AA Team"; //Name of Group
                                        faction = "argentinian_units"; //Faction
                                        side = 2; //Side
                                        class Unit0
                                        {
                                                side = 2;
                                                vehicle = "Cold_War_Argentinian_AA"; //Class name of desired solider
                                                rank = "private"; // Rank
                                                position[] = {0,3,0}; //Position in the formation
                                        };
										class Unit1
                                        {
                                                side = 2;
                                                vehicle = "Cold_War_Argentinian_AA_Assistant"; //Class name of desired solider
                                                rank = "PRIVATE"; // Rank
                                                position[] = {3,0,0}; //Position in the formation
                                        };
								};		
						};
				};
		};
};