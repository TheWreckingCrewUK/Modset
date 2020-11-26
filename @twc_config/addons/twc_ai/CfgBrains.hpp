class CfgBrains {
	class DefaultSoldierBrain {
		class Components {
			class AIBrainSuppressionComponent {
				worstDecreaseTime = 15.0;
				bestDecreaseTime = 3.0;
				SuppressionRange = 25;
			};
			
			class AIBrainAimingErrorComponent {
				lostTargetTimeMin = 0.2;
				lostTargetTimeMax = 5;
				turningInfluence = 1.3;
				fatigueCoef = 5;
			};
		};
	};
};