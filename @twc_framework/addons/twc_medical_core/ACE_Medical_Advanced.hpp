class ACE_Medical_Advanced {
	class Injuries {
		class wounds {
			class Avulsions {
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
	
	class Treatment {
		class Medication {
			class Morphine {
				painReduce = 0.8;
				maxDose = 3;
				timeInSystem = 1200; // 20 mins
				viscosityChange = -5;
			};
			
			class Epinephrine {
				timeInSystem = 900;
				maxDose = 2;
				viscosityChange = 5;
			};
			
			class PainKillers {
				painReduce = 0.2;
				timeInSystem = 1800;
				maxDose = 6;
				inCompatableMedication[] = {};
				viscosityChange = 5;
			};
		};

		// Reopening Chances - TODO
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

				class Avulsions: Abrasion {
					effectiveness = 1.3;
					reopeningChance = 0.3;
					reopeningMinDelay = 150;
					reopeningMaxDelay = 1800;
				};
				class AvulsionsMinor: Avulsions {
					reopeningChance = 0.3;
					reopeningMinDelay = 150;
					reopeningMaxDelay = 1800;
				};
				class AvulsionsMedium: Avulsions {
					effectiveness = 1.1;
					reopeningChance = 0.3;
					reopeningMinDelay = 150;
					reopeningMaxDelay = 1800;
				};
				class AvulsionsLarge: Avulsions {
					effectiveness = 0.9;
					reopeningChance = 0.4;
					reopeningMinDelay = 150;
					reopeningMaxDelay = 1800;
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
					reopeningMinDelay = 150;
					reopeningMaxDelay = 2700;
				};
				class CutMinor: Cut {
					reopeningChance = 0.05;
					reopeningMinDelay = 1500;
					reopeningMaxDelay = 3600;
				};
				class CutMedium: Cut {
					effectiveness = 3;
					reopeningChance = 0.25;
					reopeningMinDelay = 1500;
					reopeningMaxDelay = 3600;
				};
				class CutLarge: Cut {
					effectiveness = 1;
					reopeningChance = 0.25;
					reopeningMinDelay = 1500;
					reopeningMaxDelay = 3600;
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
					reopeningChance = 0.3;
					reopeningMinDelay = 400;
					reopeningMaxDelay = 2700;
				};
				class velocityWoundMinor: velocityWound {
					effectiveness = 2;
					reopeningChance = 0.3;
					reopeningMinDelay = 1400;
					reopeningMaxDelay = 3600;
				};
				class velocityWoundMedium: velocityWound {
					effectiveness = 1.5;
					reopeningChance = 0.3;
					reopeningMinDelay = 800;
					reopeningMaxDelay = 2600;
				};
				class velocityWoundLarge: velocityWound {
					effectiveness = 1;
					reopeningChance = 0.3;
					reopeningMinDelay = 700;
					reopeningMaxDelay = 1600;
				};

				class punctureWound: Abrasion {
					effectiveness = 2;
					reopeningChance = 0.1;
					reopeningMinDelay = 400;
					reopeningMaxDelay = 2700;
				};
				class punctureWoundMinor: punctureWound {
					effectiveness = 2;
					reopeningChance = 0.1;
					reopeningMinDelay = 400;
					reopeningMaxDelay = 2700;
				};
				class punctureWoundMedium: punctureWound {
					effectiveness = 1.5;
					reopeningChance = 0.1;
					reopeningMinDelay = 400;
					reopeningMaxDelay = 2700;
				};
				class punctureWoundLarge: punctureWound {
					effectiveness = 1;
					reopeningChance = 0.1;
					reopeningMinDelay = 400;
					reopeningMaxDelay = 2700;
				};
			};

			class PackingBandage: fieldDressing {
				class Abrasion {
					effectiveness = 0.4;
					reopeningChance = 0.5;
					reopeningMinDelay = 3;
					reopeningMaxDelay = 120;
				};
				class AbrasionMinor: Abrasion {
					effectiveness = 0.4;
					reopeningChance = 0.5;
					reopeningMinDelay = 3;
					reopeningMaxDelay = 120;
				};
				class AbrasionMedium: Abrasion {
					effectiveness = 0.4;
					reopeningChance = 0.5;
					reopeningMinDelay = 3;
					reopeningMaxDelay = 120;
				};
				class AbrasionLarge: Abrasion {
					effectiveness = 0.4;
					reopeningChance = 0.5;
					reopeningMinDelay = 3;
					reopeningMaxDelay = 120;
				};

				class Avulsions: Abrasion {
					effectiveness = 1;
					reopeningChance = 0.1;
					reopeningMinDelay = 600;
					reopeningMaxDelay = 3600;
				};
				class AvulsionsMinor: Avulsions {
					effectiveness = 1;
					reopeningChance = 0.4;
					reopeningMinDelay = 1000;
					reopeningMaxDelay = 1800;
				};
				class AvulsionsMedium: Avulsions {
					effectiveness = 1;
					reopeningChance = 0.4;
					reopeningMinDelay = 800;
					reopeningMaxDelay = 1200;
				};
				class AvulsionsLarge: Avulsions {
					effectiveness = 1;
					reopeningChance = 0.4;
					reopeningMinDelay = 600;
					reopeningMaxDelay = 800;
				};

				class Contusion: Abrasion {
					effectiveness = 0.4;
					reopeningChance = 0;
					reopeningMinDelay = 0;
					reopeningMaxDelay = 0;
				};
				class ContusionMinor: Contusion {
					effectiveness = 0.4;
				};
				class ContusionMedium: Contusion {
					effectiveness = 0.4;
				};
				class ContusionLarge: Contusion {
					effectiveness = 0.4;
				};

				class CrushWound: Abrasion {
					effectiveness = 0.4;
					reopeningChance = 0.4;
					reopeningMinDelay = 6;
					reopeningMaxDelay = 12;
				};
				class CrushWoundMinor: CrushWound {
					effectiveness = 0.4;
					reopeningChance = 0.5;
					reopeningMinDelay = 3;
					reopeningMaxDelay = 20;
				};
				class CrushWoundMedium: CrushWound {
					effectiveness = 0.4;
					reopeningChance = 0.5;
					reopeningMinDelay = 3;
					reopeningMaxDelay = 20;
				};
				class CrushWoundLarge: CrushWound {
					effectiveness = 0.4;
					reopeningChance = 0.5;
					reopeningMinDelay = 3;
					reopeningMaxDelay = 20;
				};

				class Cut: Abrasion {
					effectiveness = 0.8;
					reopeningChance = 0.4;
					reopeningMinDelay = 6;
					reopeningMaxDelay = 12;
				};
				class CutMinor: Cut {
					effectiveness = 0.8;
					reopeningChance = 0.5;
					reopeningMinDelay = 3;
					reopeningMaxDelay = 20;
				};
				class CutMedium: Cut {
					effectiveness = 0.8;
					reopeningChance = 0.5;
					reopeningMinDelay = 30;
					reopeningMaxDelay = 120;
				};
				class CutLarge: Cut {
					effectiveness = 0.8;
					reopeningChance = 0.5;
					reopeningMinDelay = 60;
					reopeningMaxDelay = 120;
				};

				class Laceration: Abrasion {
					effectiveness = 0.8;
					reopeningChance = 0.4;
					reopeningMinDelay = 60;
					reopeningMaxDelay = 600;
				};
				class LacerationMinor: Laceration {
					effectiveness = 0.8;
					reopeningChance = 0.3;
				};
				class LacerationMedium: Laceration {
					effectiveness = 0.8;
					reopeningChance = 0.35;
				};
				class LacerationLarge: Laceration {
					effectiveness = 0.8;
					reopeningChance = 0.4;
				};

				class velocityWound: Abrasion {
					effectiveness = 1;
					reopeningChance = 0.1;
					reopeningMinDelay = 600;
					reopeningMaxDelay = 3600;
				};
				class velocityWoundMinor: velocityWound {
					effectiveness = 1;
					reopeningChance = 0.4;
					reopeningMinDelay = 1600;
					reopeningMaxDelay = 2100;
				};
				class velocityWoundMedium: velocityWound {
					effectiveness = 1;
					reopeningChance = 0.4;
					reopeningMinDelay = 1200;
					reopeningMaxDelay = 1700;
				};
				class velocityWoundLarge: velocityWound {
					effectiveness = 1;
					reopeningChance = 0.4;
					reopeningMinDelay = 1100;
					reopeningMaxDelay = 1500;
				};

				class punctureWound: Abrasion {
					effectiveness = 1;
					reopeningChance = 0.2;
					reopeningMinDelay = 360;
					reopeningMaxDelay = 1200;
				};
				class punctureWoundMinor: punctureWound {
					effectiveness = 1;
					reopeningChance = 0.4;
				};
				class punctureWoundMedium: punctureWound {
					effectiveness = 1;
					reopeningChance = 0.25;
				};
				class punctureWoundLarge: punctureWound {
					effectiveness = 1;
					reopeningChance = 0.2;
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

				class Avulsions: Abrasion {
					effectiveness = 2;
					reopeningChance = 0.1;
					reopeningMinDelay = 1600;
					reopeningMaxDelay = 3600;
				};
				class AvulsionsMinor: Avulsions {
					effectiveness = 2;
					reopeningChance = 0.1;
					reopeningMinDelay = 3600;
					reopeningMaxDelay = 6600;
				};
				class AvulsionsMedium: Avulsions {
					effectiveness = 1;
					reopeningChance = 0.1;
					reopeningMinDelay = 2600;
					reopeningMaxDelay = 4600;
				};
				class AvulsionsLarge: Avulsions {
					effectiveness = 0.8;
					reopeningChance = 0.1;
					reopeningMinDelay = 1600;
					reopeningMaxDelay = 3600;
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
					reopeningChance = 0.025;
					reopeningMinDelay = 300;
					reopeningMaxDelay = 3600;
				};
				class CutMedium: Cut {
					effectiveness = 1.5;
					reopeningChance = 0.025;
					reopeningMinDelay = 300;
					reopeningMaxDelay = 3600;
				};
				class CutLarge: Cut {
					effectiveness = 1;
					reopeningChance = 0.4;
					reopeningMinDelay = 1600;
					reopeningMaxDelay = 3600;
				};

				class Laceration: Abrasion {
					effectiveness = 1;
					reopeningChance = 0.025;
					reopeningMinDelay = 300;
					reopeningMaxDelay = 3600;
				};
				class LacerationMinor: Laceration {
					effectiveness = 2;
					reopeningChance = 0.025;
					reopeningMinDelay = 300;
					reopeningMaxDelay = 3600;
				};
				class LacerationMedium: Laceration {
					effectiveness = 1.5;
					reopeningChance = 0.025;
					reopeningMinDelay = 300;
					reopeningMaxDelay = 3600;
				};
				class LacerationLarge: Laceration {
					effectiveness = 1;
					reopeningChance = 0.025;
					reopeningMinDelay = 300;
					reopeningMaxDelay = 3600;
				};

				class velocityWound: Abrasion {
					effectiveness = 1;
					reopeningChance = 0.4;
					reopeningMinDelay = 1600;
					reopeningMaxDelay = 3600;
				};
				class velocityWoundMinor: velocityWound {
					effectiveness = 1;
					reopeningChance = 0.1;
					reopeningMinDelay = 2600;
					reopeningMaxDelay = 3600;
				};
				class velocityWoundMedium: velocityWound {
					effectiveness = 0.9;
					reopeningChance = 0.1;
					reopeningMinDelay = 1600;
					reopeningMaxDelay = 3600;
				};
				class velocityWoundLarge: velocityWound {
					effectiveness = 0.8;
					reopeningChance = 0.1;
					reopeningMinDelay = 1600;
					reopeningMaxDelay = 3600;
				};

				class punctureWound: Abrasion {
					effectiveness = 2;
					reopeningChance = 0.25;
					reopeningMinDelay = 300;
					reopeningMaxDelay = 3600;
				};
				class punctureWoundMinor: punctureWound {
					effectiveness = 1;
					reopeningChance = 0.25;
					reopeningMinDelay = 300;
					reopeningMaxDelay = 3600;
				};
				class punctureWoundMedium: punctureWound {
					effectiveness = 0.9;
					reopeningChance = 0.25;
					reopeningMinDelay = 300;
					reopeningMaxDelay = 3600;
				};
				class punctureWoundLarge: punctureWound {
					effectiveness = 0.8;
					reopeningChance = 0.25;
					reopeningMinDelay = 300;
					reopeningMaxDelay = 3600;
				};
			};

			class QuikClot: fieldDressing {
				class Abrasion {
					effectiveness = 2;
					reopeningChance = 0.3;
					reopeningMinDelay = 300;
					reopeningMaxDelay = 1600;
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

				class Avulsions: Abrasion {
					effectiveness = 0.7;
					reopeningChance = 0.5;
					reopeningMinDelay = 300;
					reopeningMaxDelay = 1600;
				};
				class AvulsionsMinor: Avulsions {
					reopeningChance = 0.5;
					effectiveness = 1;
					reopeningMinDelay = 300;
					reopeningMaxDelay = 600;
				};
				class AvulsionsMedium: Avulsions {
					reopeningChance = 0.5;
					effectiveness = 1;
					reopeningMinDelay = 200;
					reopeningMaxDelay = 500;
				};
				class AvulsionsLarge: Avulsions {
					reopeningChance = 0.5;
					effectiveness = 1;
					reopeningMinDelay = 30;
					reopeningMaxDelay = 400;
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
					reopeningChance = 0.3;
					reopeningMinDelay = 30;
					reopeningMaxDelay = 600;
				};
				class CrushWoundMinor: CrushWound {
					effectiveness = 0.75;
					reopeningChance = 0.3;
				};
				class CrushWoundMedium: CrushWound {
					reopeningChance = 0.3;
					effectiveness = 0.65;
				};
				class CrushWoundLarge: CrushWound {
					reopeningChance = 0.3;
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
					reopeningChance = 0.3;
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
					reopeningChance = 0.3;
					reopeningMinDelay = 30;
					reopeningMaxDelay = 400;
				};
				class velocityWoundMinor: velocityWound {
					reopeningChance = 0.4;
					reopeningMinDelay = 300;
					reopeningMaxDelay = 600;
					effectiveness = 1;
				};
				class velocityWoundMedium: velocityWound {
					effectiveness = 0.85;
					reopeningChance = 0.4;
					reopeningMinDelay = 200;
					reopeningMaxDelay = 500;
				};
				class velocityWoundLarge: velocityWound {
					effectiveness = 0.9;
					reopeningChance = 0.5;
					reopeningMinDelay = 30;
					reopeningMaxDelay = 400;
				};

				class punctureWound: Abrasion {
					effectiveness = 1;
					reopeningChance = 0.4;
					reopeningMinDelay = 30;
					reopeningMaxDelay = 600;
				};
				class punctureWoundMinor: punctureWound {
					effectiveness = 1;
					reopeningChance = 0.4;
					reopeningMinDelay = 300;
					reopeningMaxDelay = 600;
				};
				class punctureWoundMedium: punctureWound {
					effectiveness = 1;
					reopeningChance = 0.3;
					reopeningMinDelay = 300;
					reopeningMaxDelay = 600;
				};
				class punctureWoundLarge: punctureWound {
					effectiveness = 1;
					reopeningChance = 0.3;
					reopeningMinDelay = 300;
					reopeningMaxDelay = 600;
				};
			};
		};
		
		class IV {
			class BloodIV {
				volume = 1500;
			};
			
			class BloodIV_500: BloodIV {
				volume = 750;
			};
			
			class BloodIV_250: BloodIV {
				volume = 375;
			};
			
			class SalineIV: BloodIV {
				volume = 1250;
			};
			
			class SalineIV_500: SalineIV {
				volume = 625;
			};
			
			class SalineIV_250: SalineIV {
				volume = 300;
			};
		};
	};
};
