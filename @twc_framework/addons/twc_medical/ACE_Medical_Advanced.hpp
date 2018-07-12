class ACE_Medical_Advanced {
	class Treatment {
		class Medication {
			class Morphine {
				painReduce = 0.5;
				viscosityChange = -10;
			};
			
			class Epinephrine {
				timeInSystem = 300;
				maxDose = 4;
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
					effectiveness = 1;
					reopeningChance = 0.15;
					reopeningMinDelay = 150;
					reopeningMaxDelay = 2700;
				};
				class AvulsionsMinor: Avulsions {
					effectiveness = 1;
					reopeningChance = 0.1;
				};
				class AvulsionsMedium: Avulsions {
					effectiveness = 0.9;
				};
				class AvulsionsLarge: Avulsions {
					effectiveness = 0.75;
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
					effectiveness = 1;
					reopeningChance = 0.15;
					reopeningMinDelay = 150;
					reopeningMaxDelay = 2700;
				};
				class CrushWoundMinor: CrushWound {
					effectiveness = 1;
					reopeningChance = 0.1;
				};
				class CrushWoundMedium: CrushWound {
					effectiveness = 0.7;
				};
				class CrushWoundLarge: CrushWound {
					effectiveness = 0.6;
					reopeningChance = 0.15;
				};

				class Cut: Abrasion {
					effectiveness = 4;
					reopeningChance = 0.1;
					reopeningMinDelay = 150;
					reopeningMaxDelay = 2700;
				};
				class CutMinor: Cut {
					effectiveness = 4;
					reopeningChance = 0.05;
				};
				class CutMedium: Cut {
					effectiveness = 3;
				};
				class CutLarge: Cut {
					effectiveness = 1;
				};

				class Laceration: Abrasion {
					effectiveness = 0.95;
					reopeningChance = 0.1;
					reopeningMinDelay = 150;
					reopeningMaxDelay = 2700;
				};
				class LacerationMinor: Laceration {
					effectiveness = 0.95;
					reopeningChance = 0.05;
				};
				class LacerationMedium: Laceration {
					effectiveness = 0.7;
				};
				class LacerationLarge: Laceration {
					effectiveness = 0.5;
					reopeningChance = 0.1;
				};

				class velocityWound: Abrasion {
					effectiveness = 2;
					reopeningChance = 0.1;
					reopeningMinDelay = 150;
					reopeningMaxDelay = 2700;
				};
				class velocityWoundMinor: velocityWound {
					effectiveness = 2;
				};
				class velocityWoundMedium: velocityWound {
					effectiveness = 1.5;
				};
				class velocityWoundLarge: velocityWound {
					effectiveness = 1;
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
					effectiveness = 1.3;
				};
				class punctureWoundLarge: punctureWound {
					effectiveness = 0.9;
				};
			};

			class PackingBandage: fieldDressing {
				class Abrasion {
					effectiveness = 3;
					reopeningChance = 0.4;
					reopeningMinDelay = 60;
					reopeningMaxDelay = 1200;
				};
				class AbrasionMinor: Abrasion {
					effectiveness = 3;
					reopeningChance = 0.3;
				};
				class AbrasionMedium: Abrasion {
					effectiveness = 2.5;
					reopeningChance = 0.35;
				};
				class AbrasionLarge: Abrasion {
					effectiveness = 2;
					reopeningChance = 0.4;
				};

				class Avulsions: Abrasion {
					effectiveness = 1;
					reopeningChance = 0.2;
					reopeningMinDelay = 60;
					reopeningMaxDelay = 1200;
				};
				class AvulsionsMinor: Avulsions {
					effectiveness = 1;
					reopeningChance = 0.1;
				};
				class AvulsionsMedium: Avulsions {
					effectiveness = 0.9;
					reopeningChance = 0.15;
				};
				class AvulsionsLarge: Avulsions {
					effectiveness = 0.75;
					reopeningChance = 0.2;
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
					effectiveness = 1;
					reopeningChance = 0.2;
					reopeningMinDelay = 60;
					reopeningMaxDelay = 1200;
				};
				class CrushWoundMinor: CrushWound {
					effectiveness = 1;
					reopeningChance = 0.1;
				};
				class CrushWoundMedium: CrushWound {
					effectiveness = 0.7;
					reopeningChance = 0.15;
				};
				class CrushWoundLarge: CrushWound {
					effectiveness = 0.6;
					reopeningChance = 0.2;
				};

				class Cut: Abrasion {
					effectiveness = 4;
					reopeningChance = 0.4;
					reopeningMinDelay = 60;
					reopeningMaxDelay = 1200;
				};
				class CutMinor: Cut {
					effectiveness = 4;
					reopeningChance = 0.3;
				};
				class CutMedium: Cut {
					effectiveness = 3;
					reopeningChance = 0.35;
				};
				class CutLarge: Cut {
					effectiveness = 1;
					reopeningChance = 0.4;
				};

				class Laceration: Abrasion {
					effectiveness = 0.95;
					reopeningChance = 0.4;
					reopeningMinDelay = 60;
					reopeningMaxDelay = 1200;
				};
				class LacerationMinor: Laceration {
					effectiveness = 0.95;
					reopeningChance = 0.3;
				};
				class LacerationMedium: Laceration {
					effectiveness = 0.7;
					reopeningChance = 0.35;
				};
				class LacerationLarge: Laceration {
					effectiveness = 0.5;
					reopeningChance = 0.4;
				};

				class velocityWound: Abrasion {
					effectiveness = 2;
					reopeningChance = 0.2;
					reopeningMinDelay = 60;
					reopeningMaxDelay = 1200;
				};
				class velocityWoundMinor: velocityWound {
					effectiveness = 2;
				};
				class velocityWoundMedium: velocityWound {
					effectiveness = 1.5;
				};
				class velocityWoundLarge: velocityWound {
					effectiveness = 1;
					reopeningChance = 0.2;
				};

				class punctureWound: Abrasion {
					effectiveness = 2;
					reopeningChance = 0.3;
					reopeningMinDelay = 60;
					reopeningMaxDelay = 1200;
				};
				class punctureWoundMinor: punctureWound {
					effectiveness = 2;
					reopeningChance = 0.2;
				};
				class punctureWoundMedium: punctureWound {
					effectiveness = 1.3;
					reopeningChance = 0.25;
				};
				class punctureWoundLarge: punctureWound {
					effectiveness = 0.9;
					reopeningChance = 0.3;
				};
			};

			class ElasticBandage: fieldDressing {
				class Abrasion {
					effectiveness = 4;
					reopeningChance = 0.05;
					reopeningMinDelay = 300;
					reopeningMaxDelay = 3600;
				};
				class AbrasionMinor: Abrasion {
					effectiveness = 4;
				};
				class AbrasionMedium: Abrasion {
					effectiveness = 3;
				};
				class AbrasionLarge: Abrasion {
					effectiveness = 2.5;
					reopeningChance = 0.1;
				};

				class Avulsions: Abrasion {
					effectiveness = 2;
					reopeningChance = 0.1;
					reopeningMinDelay = 300;
					reopeningMaxDelay = 3600;
				};
				class AvulsionsMinor: Avulsions {
					effectiveness = 2;
				};
				class AvulsionsMedium: Avulsions {
					effectiveness = 1.4;
				};
				class AvulsionsLarge: Avulsions {
					effectiveness = 1;
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
					reopeningChance = 0.1;
					reopeningMinDelay = 300;
					reopeningMaxDelay = 3600;
				};
				class CrushWoundMinor: CrushWound {
					effectiveness = 2;
				};
				class CrushWoundMedium: CrushWound {
					effectiveness = 1.7;
				};
				class CrushWoundLarge: CrushWound {
					effectiveness = 1.6;
				};

				class Cut: Abrasion {
					effectiveness = 5;
					reopeningChance = 0.05;
					reopeningMinDelay = 300;
					reopeningMaxDelay = 3600;
				};
				class CutMinor: Cut {
					effectiveness = 5;
				};
				class CutMedium: Cut {
					effectiveness = 3.5;
				};
				class CutLarge: Cut {
					effectiveness = 2;
					reopeningChance = 0.1;
				};

				class Laceration: Abrasion {
					effectiveness = 2;
					reopeningChance = 0.05;
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
					reopeningChance = 0.1;
				};

				class velocityWound: Abrasion {
					effectiveness = 2.2;
					reopeningChance = 0.05;
					reopeningMinDelay = 300;
					reopeningMaxDelay = 3600;
				};
				class velocityWoundMinor: velocityWound {
					effectiveness = 2.2;
				};
				class velocityWoundMedium: velocityWound {
					effectiveness = 1.75;
				};
				class velocityWoundLarge: velocityWound {
					effectiveness = 1.5;
					reopeningChance = 0.1;
				};

				class punctureWound: Abrasion {
					effectiveness = 2.5;
					reopeningChance = 0.05;
					reopeningMinDelay = 300;
					reopeningMaxDelay = 3600;
				};
				class punctureWoundMinor: punctureWound {
					effectiveness = 2.5;
				};
				class punctureWoundMedium: punctureWound {
					effectiveness = 2;
				};
				class punctureWoundLarge: punctureWound {
					effectiveness = 1.5;
					reopeningChance = 0.1;
				};
			};

			class QuikClot: fieldDressing {
				class Abrasion {
					effectiveness = 2;
					reopeningChance = 0.2;
					reopeningMinDelay = 30;
					reopeningMaxDelay = 600;
				};
				class AbrasionMinor: Abrasion {
					effectiveness = 2;
				};
				class AbrasionMedium: Abrasion {
					effectiveness = 1;
					reopeningChance = 0.25;
				};
				class AbrasionLarge: Abrasion {
					effectiveness = 0.7;
					reopeningChance = 0.3;
				};

				class Avulsions: Abrasion {
					effectiveness = 0.7;
					reopeningChance = 0.5;
					reopeningMinDelay = 30;
					reopeningMaxDelay = 600;
				};
				class AvulsionsMinor: Avulsions {
					reopeningChance = 0.4;
					effectiveness = 0.7;
				};
				class AvulsionsMedium: Avulsions {
					reopeningChance = 0.45;
					effectiveness = 0.65;
				};
				class AvulsionsLarge: Avulsions {
					reopeningChance = 0.5;
					effectiveness = 0.5;
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
					effectiveness = 0.6;
					reopeningChance = 0.5;
					reopeningMinDelay = 30;
					reopeningMaxDelay = 600;
				};
				class CrushWoundMinor: CrushWound {
					effectiveness = 0.6;
					reopeningChance = 0.4;
				};
				class CrushWoundMedium: CrushWound {
					reopeningChance = 0.45;
					effectiveness = 0.5;
				};
				class CrushWoundLarge: CrushWound {
					reopeningChance = 0.5;
					effectiveness = 0.4;
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
					effectiveness = 0.6;
				};

				class Laceration: Abrasion {
					effectiveness = 0.7;
					reopeningChance = 0.3;
					reopeningMinDelay = 30;
					reopeningMaxDelay = 600;
				};
				class LacerationMinor: Laceration {
					effectiveness = 0.7;
					reopeningChance = 0.2;
				};
				class LacerationMedium: Laceration {
					effectiveness = 0.25;
				};
				class LacerationLarge: Laceration {
					effectiveness = 0.3;
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
					effectiveness = 0.75;
				};
				class velocityWoundLarge: velocityWound {
					reopeningChance = 0.5;
					effectiveness = 0.5;
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
					effectiveness = 0.7;
					reopeningChance = 0.35;
				};
				class punctureWoundLarge: punctureWound {
					effectiveness = 0.4;
					reopeningChance = 0.4;
				};
			};
		};
	};
};

