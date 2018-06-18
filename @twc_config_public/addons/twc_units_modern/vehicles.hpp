class Wheeled_APC_F;


	class CUP_Mastiff_Base: Wheeled_APC_F
	{
		scope=1;
		brakeTorque = 0;
		cost = 20000;
		enginePower = 530;
		accelAidForceCoef = 1.0;
		turnCoef = 4.0;
		
		class wheels
		{
			class LF
			{
				class LR2
				{
				springStrength = 350;
				springDamperRate = 500;
				sprungMass = 8000;
				MOI = 45;
				maxBrakeTorque = 10000;
				maxCompression = 0.5;

				};
				class LR1
				{
				springStrength = 350;
				springDamperRate = 500;
				sprungMass = 8000;
				MOI = 45;
				maxBrakeTorque = 10000;
				maxCompression = 0.5;
				};
			};
			class RF
			{
				class RR2
				{
				springStrength = 350;
				springDamperRate = 500;
				sprungMass = 8000;
				MOI = 45;
				maxBrakeTorque = 10000;
				maxCompression = 0.5;
				};
				class RR1
				{
				springStrength = 350;
				springDamperRate = 500;
				sprungMass = 8000;
				MOI = 45;
				maxBrakeTorque = 10000;
				maxCompression = 0.5;
				};
			};
		};

	};

	
	class CUP_B_Mastiff_HMG_GB_D: CUP_Mastiff_Base
	{
		
		turnCoef = 3.0;
		antiRollbarForceCoef = 0;
		antiRollbarForceLimit = 0;
	};
