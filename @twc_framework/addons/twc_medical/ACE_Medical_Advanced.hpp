class ACE_Medical_treatment {
	
	//move the injuries section to ace_medical_injuries
	class Injuries {
		class wounds {
			class Avulsion {
				bleedingRate = 0.025;
				pain = 0.4;
				
				class Minor {
					bleedingRate = 0.025;
					pain = 0.35;
				};
				
				class Medium {
					bleedingRate = 0.05;
					pain = 0.4;
				};
				
				class Large {
					bleedingRate = 0.075;
					pain = 0.5;
				};
			};
			
			class velocityWound {
				bleedingRate = 0.05;
				pain = 0.2;
				
				class Minor {
					bleedingRate = 0.05;
					pain = 0.2;
				};
				
				class Medium {
					bleedingRate = 0.1;
					pain = 0.2;
				};
				
				class Large {
					bleedingRate = 0.15;
					pain = 0.3;
				};
			};
		};
	};
	
	
		class Medication {
			class Morphine {
				painReduce = 1.3;
				timeInSystem = 600;
				timeTillMaxEffect = 20;
				maxDose = 3;
				viscosityChange = -5;
				onOverDose = "_this call TWC_medical_fnc_onOverDose";
			};
			
			class Epinephrine {
				timeInSystem = 900;
				maxDose = 2;
				viscosityChange = 5;
				onOverDose = "_this call TWC_medical_fnc_onOverDose";
			};
			
			class PainKillers {
				painReduce = 0.6;
				timeInSystem = 3600;
				timeTillMaxEffect = 600;
				maxDose = 6;
				inCompatableMedication[] = {};
				viscosityChange = 1;
				onOverDose = "_this call TWC_medical_fnc_onOverDose";
				hrIncreaseHigh[] = {-10,-35};
				hrIncreaseLow[] = {-10,-20};
				hrIncreaseNormal[] = {-10,-30};
			};
		};

		class Bandaging {
			class Bandage { // basic bandage
				effectiveness = 5;
				reopeningChance = 0;
				reopeningMinDelay = 0;
				reopeningMaxDelay = 0;
			};

			class FieldDressing {
				// How effect is the bandage for treating one wounds type injury
				effectiveness = 1;
				// What is the chance and delays (in seconds) of the treated default injury reopening
				reopeningChance = 0.1;
				reopeningMinDelay = 150;
				reopeningMaxDelay = 2700;

				class Abrasion {
					effectiveness = 3;
					reopeningChance = 0.05;
					reopeningMinDelay = 150;
					reopeningMaxDelay = 2700;
				};
				class AbrasionMinor: Abrasion {
					effectiveness = 3;
				};
				class AbrasionMedium: Abrasion {
					effectiveness = 2.5;
					reopeningChance = 0.05;
				};
				class AbrasionLarge: Abrasion {
					effectiveness = 2;
					reopeningChance = 0.1;
				};

				class Avulsion: Abrasion {
					effectiveness = 1.3;
					reopeningChance = 0.15;
					reopeningMinDelay = 150;
					reopeningMaxDelay = 2700;
				};
				class AvulsionMinor: Avulsion {
					reopeningChance = 0.1;
				};
				class AvulsionMedium: Avulsion {
					effectiveness = 1.1;
				};
				class AvulsionLarge: Avulsion {
					effectiveness = 0.9;
				};

				class Contusion: Abrasion {
					effectiveness = 1;
					reopeningChance = 0;
					reopeningMinDelay = 0;
					reopeningMaxDelay = 0;
				};
				class ContusionMinor: Contusion {};
				class ContusionMedium: Contusion {};
				class ContusionLarge: Contusion {};

				class CrushWound: Abrasion {
					effectiveness = 1.25;
					reopeningChance = 0.15;
					reopeningMinDelay = 150;
					reopeningMaxDelay = 2700;
				};
				class CrushWoundMinor: CrushWound {
					reopeningChance = 0.1;
				};
				class CrushWoundMedium: CrushWound {
					effectiveness = 1;
				};
				class CrushWoundLarge: CrushWound {
					effectiveness = 0.75;
					reopeningChance = 0.15;
				};

				class Cut: Abrasion {
					effectiveness = 4;
					reopeningChance = 0.1;
					reopeningMinDelay = 1500;
					reopeningMaxDelay = 2700;
				};
				class CutMinor: Cut {
					reopeningChance = 0.05;
				};
				class CutMedium: Cut {
					effectiveness = 3;
				};
				class CutLarge: Cut {
					effectiveness = 1;
				};

				class Laceration: Abrasion {
					effectiveness = 1;
					reopeningChance = 0.1;
					reopeningMinDelay = 150;
					reopeningMaxDelay = 2700;
				};
				class LacerationMinor: Laceration {
					effectiveness = 1;
					reopeningChance = 0.05;
				};
				class LacerationMedium: Laceration {
					effectiveness = 1;
				};
				class LacerationLarge: Laceration {
					effectiveness = 0.75;
					reopeningChance = 0.1;
				};

				class velocityWound: Abrasion {
					effectiveness = 2;
					reopeningChance = 0.1;
					reopeningMinDelay = 150;
					reopeningMaxDelay = 2700;
				};
				class velocityWoundMinor: velocityWound {
					effectiveness = 1.2;
				};
				class velocityWoundMedium: velocityWound {
					effectiveness = 0.9;
				};
				class velocityWoundLarge: velocityWound {
					effectiveness = 0.8;
				};

				class punctureWound: Abrasion {
					effectiveness = 2;
					reopeningChance = 0.1;
					reopeningMinDelay = 150;
					reopeningMaxDelay = 2700;
				};
				class punctureWoundMinor: punctureWound {
					effectiveness = 2;
				};
				class punctureWoundMedium: punctureWound {
					effectiveness = 1.5;
				};
				class punctureWoundLarge: punctureWound {
					effectiveness = 1;
				};
			};

			class PackingBandage: fieldDressing {
				class Abrasion {
					effectiveness = 0.1;
					reopeningChance = 0.4;
					reopeningMinDelay = 60;
					reopeningMaxDelay = 1200;
				};
				class AbrasionMinor: Abrasion {
					effectiveness = 0.1;
					reopeningChance = 0.3;
				};
				class AbrasionMedium: Abrasion {
					effectiveness = 0.1;
					reopeningChance = 0.35;
				};
				class AbrasionLarge: Abrasion {
					effectiveness = 0.1;
					reopeningChance = 0.4;
				};

				class Avulsion: Abrasion {
					effectiveness = 1;
					reopeningChance = 0.2;
					reopeningMinDelay = 1800;
					reopeningMaxDelay = 3600;
				};
				class AvulsionMinor: Avulsion {
					effectiveness = 1;
					reopeningChance = 0.2;
				};
				class AvulsionMedium: Avulsion {
					effectiveness = 1;
					reopeningChance = 0.2;
				};
				class AvulsionLarge: Avulsion {
					effectiveness = 1;
					reopeningChance = 0.2;
				};

				class Contusion: Abrasion {
					effectiveness = 0.1;
					reopeningChance = 0;
					reopeningMinDelay = 0;
					reopeningMaxDelay = 0;
				};
				class ContusionMinor: Contusion {};
				class ContusionMedium: Contusion {};
				class ContusionLarge: Contusion {};

				class CrushWound: Abrasion {
					effectiveness = 0.1;
					reopeningChance = 0.2;
					reopeningMinDelay = 60;
					reopeningMaxDelay = 1200;
				};
				class CrushWoundMinor: CrushWound {
					effectiveness = 0.1;
					reopeningChance = 0.1;
				};
				class CrushWoundMedium: CrushWound {
					effectiveness = 0.1;
					reopeningChance = 0.15;
				};
				class CrushWoundLarge: CrushWound {
					effectiveness = 0.1;
					reopeningChance = 0.2;
				};

				class Cut: Abrasion {
					effectiveness = 0.3;
					reopeningChance = 0.4;
					reopeningMinDelay = 60;
					reopeningMaxDelay = 1200;
				};
				class CutMinor: Cut {
					effectiveness = 0.3;
					reopeningChance = 0.3;
				};
				class CutMedium: Cut {
					effectiveness = 0.3;
					reopeningChance = 0.35;
				};
				class CutLarge: Cut {
					effectiveness = 0.5;
					reopeningChance = 0.4;
				};

				class Laceration: Abrasion {
					effectiveness = 1;
					reopeningChance = 0.4;
					reopeningMinDelay = 60;
					reopeningMaxDelay = 1200;
				};
				class LacerationMinor: Laceration {
					effectiveness = 0.3;
					reopeningChance = 0.3;
				};
				class LacerationMedium: Laceration {
					effectiveness = 0.3;
					reopeningChance = 0.35;
				};
				class LacerationLarge: Laceration {
					effectiveness = 0.3;
					reopeningChance = 0.4;
				};

				class velocityWound: Abrasion {
					effectiveness = 1;
					reopeningChance = 0.2;
					reopeningMinDelay = 1800;
					reopeningMaxDelay = 3600;
				};
				class velocityWoundMinor: velocityWound {
					effectiveness = 1;
				};
				class velocityWoundMedium: velocityWound {
					effectiveness = 1;
				};
				class velocityWoundLarge: velocityWound {
					effectiveness = 1;
					reopeningChance = 0.2;
				};

				class punctureWound: Abrasion {
					effectiveness = 2;
					reopeningChance = 0.3;
					reopeningMinDelay = 600;
					reopeningMaxDelay = 1200;
				};
				class punctureWoundMinor: punctureWound {
					effectiveness = 1;
					reopeningChance = 0.1;
				};
				class punctureWoundMedium: punctureWound {
					effectiveness = 1;
					reopeningChance = 0.1;
				};
				class punctureWoundLarge: punctureWound {
					effectiveness = 1;
					reopeningChance = 0.15;
				};
			};

			class ElasticBandage: fieldDressing {
				class Abrasion {
					effectiveness = 1.2;
					reopeningChance = 0.025;
					reopeningMinDelay = 300;
					reopeningMaxDelay = 3600;
				};
				class AbrasionMinor: Abrasion {
					effectiveness = 1.2;
				};
				class AbrasionMedium: Abrasion {
					effectiveness = 0.95;
				};
				class AbrasionLarge: Abrasion {
					effectiveness = 0.85;
				};

				class Avulsion: Abrasion {
					effectiveness = 2;
					reopeningChance = 0.025;
					reopeningMinDelay = 300;
					reopeningMaxDelay = 3600;
				};
				class AvulsionMinor: Avulsion {
					effectiveness = 1;
				};
				class AvulsionMedium: Avulsion {
					effectiveness = 0.9;
				};
				class AvulsionLarge: Avulsion {
					effectiveness = 0.8;
				};

				class Contusion: Abrasion {
					effectiveness = 2;
					reopeningChance = 0;
					reopeningMinDelay = 0;
					reopeningMaxDelay = 0;
				};
				class ContusionMinor: Contusion {};
				class ContusionMedium: Contusion {};
				class ContusionLarge: Contusion {};

				class CrushWound: Abrasion {
					effectiveness = 2;
					reopeningChance = 0.05;
					reopeningMinDelay = 300;
					reopeningMaxDelay = 3600;
				};
				class CrushWoundMinor: CrushWound {
					effectiveness = 1;
				};
				class CrushWoundMedium: CrushWound {
					effectiveness = 0.9;
				};
				class CrushWoundLarge: CrushWound {
					effectiveness = 0.8;
				};

				class Cut: Abrasion {
					effectiveness = 1;
					reopeningChance = 0.025;
					reopeningMinDelay = 300;
					reopeningMaxDelay = 3600;
				};
				class CutMinor: Cut {
					effectiveness = 2;
				};
				class CutMedium: Cut {
					effectiveness = 1.5;
				};
				class CutLarge: Cut {
					effectiveness = 1;
				};

				class Laceration: Abrasion {
					effectiveness = 1;
					reopeningChance = 0.025;
					reopeningMinDelay = 300;
					reopeningMaxDelay = 3600;
				};
				class LacerationMinor: Laceration {
					effectiveness = 2;
				};
				class LacerationMedium: Laceration {
					effectiveness = 1.5;
				};
				class LacerationLarge: Laceration {
					effectiveness = 1;
				};

				class velocityWound: Abrasion {
					effectiveness = 1;
					reopeningChance = 0.025;
					reopeningMinDelay = 1300;
					reopeningMaxDelay = 3600;
				};
				class velocityWoundMinor: velocityWound {
					effectiveness = 2;
				};
				class velocityWoundMedium: velocityWound {
					effectiveness = 1.2;
				};
				class velocityWoundLarge: velocityWound {
					effectiveness = 1.1;
				};

				class punctureWound: Abrasion {
					effectiveness = 2;
					reopeningChance = 0.025;
					reopeningMinDelay = 300;
					reopeningMaxDelay = 3600;
				};
				class punctureWoundMinor: punctureWound {
					effectiveness = 1;
				};
				class punctureWoundMedium: punctureWound {
					effectiveness = 0.9;
				};
				class punctureWoundLarge: punctureWound {
					effectiveness = 0.8;
				};
			};

			class QuikClot: fieldDressing {
				class Abrasion {
					effectiveness = 2;
					reopeningChance = 0.3;
					reopeningMinDelay = 30;
					reopeningMaxDelay = 600;
				};
				class AbrasionMinor: Abrasion {
					effectiveness = 1;
				};
				class AbrasionMedium: Abrasion {
					effectiveness = 1;
					reopeningChance = 0.35;
				};
				class AbrasionLarge: Abrasion {
					effectiveness = 0.75;
					reopeningChance = 0.4;
				};

				class Avulsion: Abrasion {
					effectiveness = 0.7;
					reopeningChance = 0.5;
					reopeningMinDelay = 300;
					reopeningMaxDelay = 900;
				};
				class AvulsionMinor: Avulsion {
					reopeningChance = 0.3;
					effectiveness = 0.95;
					reopeningMinDelay = 30;
					reopeningMaxDelay = 300;
				};
				class AvulsionMedium: Avulsion {
					reopeningChance = 0.3;
					effectiveness = 0.85;
					reopeningMinDelay = 20;
					reopeningMaxDelay = 250;
				};
				class AvulsionLarge: Avulsion {
					reopeningChance = 0.3;
					effectiveness = 0.75;
					reopeningMinDelay = 10;
					reopeningMaxDelay = 200;
				};

				class Contusion: Abrasion {
					effectiveness = 1;
					reopeningChance = 0;
					reopeningMinDelay = 0;
					reopeningMaxDelay = 0;
				};
				class ContusionMinor: Contusion {};
				class ContusionMedium: Contusion {};
				class ContusionLarge: Contusion {};

				class CrushWound: Abrasion {
					effectiveness = 0.75;
					reopeningChance = 0.5;
					reopeningMinDelay = 30;
					reopeningMaxDelay = 600;
				};
				class CrushWoundMinor: CrushWound {
					effectiveness = 0.75;
					reopeningChance = 0.4;
				};
				class CrushWoundMedium: CrushWound {
					reopeningChance = 0.45;
					effectiveness = 0.65;
				};
				class CrushWoundLarge: CrushWound {
					reopeningChance = 0.5;
					effectiveness = 0.5;
				};

				class Cut: Abrasion {
					effectiveness = 2;
					reopeningChance = 0.3;
					reopeningMinDelay = 30;
					reopeningMaxDelay = 600;
				};
				class CutMinor: Cut {
					effectiveness = 2;
					reopeningChance = 0.3;
				};
				class CutMedium: Cut {
					reopeningChance = 0.35;
					effectiveness = 1;
				};
				class CutLarge: Cut {
					reopeningChance = 0.4;
					effectiveness = 0.75;
				};

				class Laceration: Abrasion {
					effectiveness = 0.7;
					reopeningChance = 0.3;
					reopeningMinDelay = 30;
					reopeningMaxDelay = 600;
				};
				class LacerationMinor: Laceration {
					effectiveness = 0.9;
					reopeningChance = 0.2;
				};
				class LacerationMedium: Laceration {
					effectiveness = 0.85;
					reopeningChance = 0.25;
				};
				class LacerationLarge: Laceration {
					effectiveness = 0.8;
					reopeningChance = 0.3;
				};

				class velocityWound: Abrasion {
					effectiveness = 1;
					reopeningChance = 0.5;
					reopeningMinDelay = 30;
					reopeningMaxDelay = 600;
				};
				class velocityWoundMinor: velocityWound {
					reopeningChance = 0.4;
					effectiveness = 1;
				};
				class velocityWoundMedium: velocityWound {
					reopeningChance = 0.45;
					effectiveness = 0.85;
				};
				class velocityWoundLarge: velocityWound {
					reopeningChance = 0.5;
					effectiveness = 0.75;
				};

				class punctureWound: Abrasion {
					effectiveness = 1;
					reopeningChance = 0.4;
					reopeningMinDelay = 30;
					reopeningMaxDelay = 600;
				};
				class punctureWoundMinor: punctureWound {
					effectiveness = 1;
					reopeningChance = 0.3;
				};
				class punctureWoundMedium: punctureWound {
					effectiveness = 0.85;
					reopeningChance = 0.35;
				};
				class punctureWoundLarge: punctureWound {
					effectiveness = 0.75;
					reopeningChance = 0.4;
				};
			};
		};
	
};


