class ACE_Medical_Advanced {
	
	class Treatment {

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

				class Abrasion;
				class Avulsions: Abrasion {
					effectiveness = 1.3;
					reopeningChance = 0.3;
					reopeningMinDelay = 350;
					reopeningMaxDelay = 1800;
				};
				class AvulsionsMinor: Avulsions {
					reopeningChance = 0.3;
					reopeningMinDelay = 350;
					reopeningMaxDelay = 1800;
				};
				class AvulsionsMedium: Avulsions {
					effectiveness = 1.1;
					reopeningChance = 0.3;
					reopeningMinDelay = 350;
					reopeningMaxDelay = 1800;
				};
				class AvulsionsLarge: Avulsions {
					effectiveness = 0.9;
					reopeningChance = 0.4;
					reopeningMinDelay = 350;
					reopeningMaxDelay = 1800;
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
					reopeningChance = 0.3;
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
					reopeningChance = 0.3;
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

				class Avulsions: Abrasion {
					effectiveness = 0.7;
					reopeningChance = 0.5;
					reopeningMinDelay = 300;
					reopeningMaxDelay = 1600;
				};
				class AvulsionsMinor: Avulsions {
					reopeningChance = 0.5;
					effectiveness = 0.95;
					reopeningMinDelay = 300;
					reopeningMaxDelay = 600;
				};
				class AvulsionsMedium: Avulsions {
					reopeningChance = 0.5;
					effectiveness = 0.95;
					reopeningMinDelay = 200;
					reopeningMaxDelay = 500;
				};
				class AvulsionsLarge: Avulsions {
					reopeningChance = 0.5;
					effectiveness = 0.95;
					reopeningMinDelay = 300;
					reopeningMaxDelay = 400;
				};
				class velocityWound: Abrasion {
					effectiveness = 1;
					reopeningChance = 0.3;
					reopeningMinDelay = 300;
					reopeningMaxDelay = 400;
				};
				class velocityWoundMinor: velocityWound {
					reopeningMinDelay = 300;
					reopeningMaxDelay = 600;
					effectiveness = 1;
				};
				class velocityWoundMedium: velocityWound {
					effectiveness = 0.85;
					reopeningMinDelay = 200;
					reopeningMaxDelay = 500;
				};
				class velocityWoundLarge: velocityWound {
					effectiveness = 0.9;
					reopeningMinDelay = 300;
					reopeningMaxDelay = 400;
				};
			};
		};
	};
};

