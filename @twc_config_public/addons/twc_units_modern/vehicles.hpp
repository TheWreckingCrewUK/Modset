	class CUP_2S6M_Base;
	class CUP_O_2S6M_RU: CUP_2S6M_Base
	{
		armor = 150;
	};
	
	
//handling modifications
	class MRAP_01_base_F;
	
	
	
	class rhsusf_Cougar_base: MRAP_01_base_F {
		antiRollbarForceLimit = 0;
		frontRearSplit = 0.3;
		class Wheels
		{
			class L1
			{
				frictionVsSlipGraph[] = { { 0.0, 0.8 }, { 0.2, 0.5 }, { 1.0, 0.8 } };
				latStiffX = 25;
				latStiffY = 60;
				longitudinalStiffnessPerUnitGravity = 5000;
				maxBrakeTorque = 7000;
				maxCompression = 0.4;
				maxHandBrakeTorque = 2000;
				springDamperRate = 8000;
				springStrength = 285000;
			};
			class L2: L1
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 25000;
				springStrength = 200000;
				springDamperRate = 9500;
			};
			class R1: L1
			{
				maxHandBrakeTorque = 2000;
			};
			class R2: R1
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 25000;
				springStrength = 200000;
				springDamperRate = 9500;
			};
		};
		
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.2; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 0.2; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 0.8; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
           
           turnDecreaseConst  = 0.2; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.5; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.8; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.1; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
	};
	
	class rhsusf_MATV_base: MRAP_01_base_F {
	//	antiRollbarForceLimit = 4;
		frontRearSplit = 0.4;
		frontBias = 1.0;
		rearBias = 0.5;
		class wheels
		{
			class L1
			{
				maxBrakeTorque = 15000;
				sprungmass = 3800;
				maxCompression = 0.5;
				springStrength = 140000;
				springDamperRate = 10000;
				frictionVsSlipGraph[] = {{ 0.0, 0.4 }, { 0.2, 0.3 }, { 0.8, 0.8 }};
			//	suspTravelDirection[] = {0.2,-1,0};
				latStiffx = 100;
				latStiffY = 110;
			};
			class L2: L1
			{
				springStrength = 180000;
				springDamperRate = 13000;
				maxBrakeTorque = 13000;
			//	suspTravelDirection[] = {0.5,-1,0};
			};
			class R1: L1
			{
			//	suspTravelDirection[] = {-0.5,-1,0};
			};
			class R2: R1
			{
				springStrength = 180000;
				springDamperRate = 13000;
				maxBrakeTorque = 13000;
			//	suspTravelDirection[] = {-0.2,-1,0};
			};
		};
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.3; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 0.2; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 0.8; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
           
           turnDecreaseConst  = 0.3; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.5; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.8; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.1; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
		
		class emptyclass
		{};
		class Transportitems: emptyclass
		{};
		class TransportWeapons: emptyclass
		{};
		class TransportBackpacks: emptyclass
		{};
		class TransportMagazines: emptyclass
		{};
	};
	
	
	
	class rhsusf_RG33_base: MRAP_01_base_F {
		antiRollbarForceLimit = 1.5;
		frontRearSplit = 0.5;
		frontBias = 2.0;
		rearBias = 0.3;
		centreBias = 2;
		turnCoef = 2.8;
		class Wheels {
			class L1 {
				maxHandBrakeTorque = 2000;
				maxCompression = 0.35;
			//	sprungMass = 4250;
				maxBrakeTorque = 20000;
				springStrength = 295000;
				springDamperRate = 8000;
				longitudinalStiffnessPerUnitGravity = 4000;
				latStiffX = 130;
				latStiffY = 90;
			//	frictionVsSlipGraph[] = { { 0.0, 0.8 }, { 0.2, 0.5 }, { 1.0, 0.8 } };
				frictionVsSlipGraph[] = {{ 0.0, 0.35 }, { 0.2, 0.3 }, { 0.8, 0.8 }};
			};
			class L2: L1
			{
				maxHandBrakeTorque = 2000;
				springStrength = 230000;
				springDamperRate = 9500;
			};
			class R1: L1
			{
			};
			class R2: R1
			{
				maxHandBrakeTorque = 2000;
				springStrength = 230000;
				springDamperRate = 9500;
			};
		};
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.2; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 0.2; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 0.8; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
           
           turnDecreaseConst  = 0.2; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.5; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.8; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.1; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
		class Turrets;
	};
	
	
	class rhsusf_RG33L_base : MRAP_01_base_F
	{
		antiRollbarForceLimit = 0;
		frontRearSplit = 0.5;
		frontBias = 2.0;
		rearBias = 0.3;
		centreBias = 2;
		turnCoef = 2.8;
		class Wheels
		{
			class L1
			{
			//	frictionVsSlipGraph[] = { { 0.0, 0.8 }, { 0.2, 0.5 }, { 1.0, 0.8 } };
			//	frictionVsSlipGraph[] = {{ 0.0, 0.4 }, { 0.4, 0.35 }, { 0.8, 0.8 }};
				frictionVsSlipGraph[] = {{ 0.0, 0.35 }, { 0.2, 0.3 }, { 0.8, 0.8 }};
				latStiffX = 130;
				latStiffY = 110;
				longitudinalStiffnessPerUnitGravity = 4000;
				maxBrakeTorque = 7000;
				maxCompression = 0.5;
			//	maxHandBrakeTorque = 2000;
				springDamperRate = 8000;
				springStrength = 295000;
			};
			class L2: L1
			{
				maxHandBrakeTorque = 4000;
				maxBrakeTorque = 25000;
				springStrength = 200000;
				springDamperRate = 9500;
			};
			class L3: L1
			{
				maxHandBrakeTorque = 4000;
				maxBrakeTorque = 3500;
			};
			class R1: L1
			{
			};
			class R2: R1
			{
				maxHandBrakeTorque = 4000;
				maxBrakeTorque = 25000;
				springStrength = 200000;
				springDamperRate = 9500;
			};
			class R3: R1
			{
				maxHandBrakeTorque = 4000;
				maxBrakeTorque = 3500;
			};
		};
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.2; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 0.2; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 0.8; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
           
           turnDecreaseConst  = 0.2; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.5; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.8; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.1; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
	};
	
	class rhsusf_M1239_base: MRAP_01_base_F {
		antiRollbarForceLimit = 0;
		frontRearSplit = 0.5;
		frontBias = 2.0;
		rearBias = 0.3;
		centreBias = 2;
		turnCoef = 2.8;
	//	minOmega = 40;
		//changeGearOmegaRatios[] = {1,0.294118,0.3,0.3,0.99,0.1,0.764706,0.25,0.852941,0.5,1,0.647059,1,0.647059,1,0.647059};
	//	changeGearType = "rpmratio";
		class Wheels
		{
			class L1
			{
			//	frictionVsSlipGraph[] = { { 0.0, 0.8 }, { 0.2, 0.5 }, { 1.0, 0.8 } };
			//	frictionVsSlipGraph[] = {{ 0.0, 0.4 }, { 0.4, 0.35 }, { 0.8, 0.8 }};
				frictionVsSlipGraph[] = {{ 0.0, 0.35 }, { 0.2, 0.3 }, { 0.8, 0.8 }};
				latStiffX = 130;
				latStiffY = 110;
				longitudinalStiffnessPerUnitGravity = 4000;
				maxBrakeTorque = 7000;
				maxCompression = 0.5;
				maxHandBrakeTorque = 2000;
				springDamperRate = 8000;
				springStrength = 295000;
			};
			class L2: L1
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 25000;
				springStrength = 200000;
				springDamperRate = 9500;
			};
			class L3: L1
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 3500;
			};
			class R1: L1
			{
				maxHandBrakeTorque = 2000;
			};
			class R2: R1
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 25000;
				springStrength = 200000;
				springDamperRate = 9500;
			};
			class R3: R1
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 3500;
			};
		};
		
	/*	class complexGearbox {
			driveString = "D";
			gearBoxMode = "manual";
			GearboxRatios[] = {"R1",-5.03,"N",0,"D1",3.49,"D2",1.86,"D3",1.41,"D4",1,"D5",0.75,"D6",0.55};
			moveOffGear = 1;
			neutralString = "N";
			reverseString = "R";
			TransmissionRatios[] = {"High",8.2};
		};
		*/
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.2; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 0.2; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 0.8; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
           
           turnDecreaseConst  = 0.2; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.5; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.8; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.1; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
	};
	
	class Offroad_01_base_F;
	class RHS_UAZ_Base: Offroad_01_base_F
	{
	//	accelAidForceCoef = 1.0;
		antiRollbarForceLimit = 0;
		dampingRateZeroThrottleClutchEngaged = 0.1;
		frontRearSplit = 0.4;
		frontBias = 1.5;
		rearBias = 0.5;
		centreBias = 1;
	//	peaktorque = 300;
		class Wheels
		{
			class LF
			{
				frictionVsSlipGraph[] = {{ 0.0, 0.5 }, { 0.1, 0.4 }, { 0.6, 0.8 }};
				latStiffX = 150;
				latStiffY = 100;
				maxBrakeTorque = 1000;
				maxCompression = 0.3;
				MaxDroop = 0.0;
			//	maxHandBrakeTorque = 150;
				springDamperRate = 2000;
				springStrength = 26000;
			//	sprungMass = 410;
			};
			class LR: LF
			{
				maxHandBrakeTorque = 5000;
				maxBrakeTorque = 2000;
				springDamperRate = 4000;
				springStrength = 27000;
			};
			class RF: LF
			{
			};
			class RR: RF
			{
				maxHandBrakeTorque = 5000;
				maxBrakeTorque = 2000;
				springDamperRate = 4000;
				springStrength = 27000;
			};
		};
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.3; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 0.2; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 0.8; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
           
           turnDecreaseConst  = 0.6; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.5; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.8; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.1; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
	};
	
	class Truck_F;
	
	class Truck_01_base_F;
	
	
	
	class rhsusf_HEMTT_A4_base: Truck_01_base_F	{
		antiRollbarForceLimit = 0;
		frontRearSplit = 0.5;
		frontBias = 2;
		rearBias = 0.5;
		centreBias = 1;
		class Wheels
		{
			class L1
			{
				frictionVsSlipGraph[] = { { 0.0, 0.35 }, { 0.3, 0.4 }, { 1.0, 0.8 } };
				latStiffX = 60;
				latStiffY = 50;
				longitudinalStiffnessPerUnitGravity = 5000;
				maxBrakeTorque = 500;
				maxCompression = 0.4;
				maxHandBrakeTorque = 2000;
				springDamperRate = 5000;
				springStrength = 130000;
			//	sprungMass = 2750;
			};
			class L2: L1
			{
				maxHandBrakeTorque = 2000;
				springStrength = 100000;
				springDamperRate = 5000;
				maxBrakeTorque = 9500;
			};
			class L3: L1
			{
				maxHandBrakeTorque = 2000;
				springStrength = 100000;
				maxBrakeTorque = 25000;
				springDamperRate = 9000;
			};
			class L4: L1
			{
				maxHandBrakeTorque = 2000;
				springStrength = 100000;
				springDamperRate = 9000;
				maxBrakeTorque = 9500;
			};
			class R1: L1
			{
				maxHandBrakeTorque = 2000;
			};
			class R2: R1
			{
				maxHandBrakeTorque = 2000;
				springStrength = 100000;
				springDamperRate = 5000;
				maxBrakeTorque = 9500;
			};
			class R3: R1
			{
				maxHandBrakeTorque = 2000;
				springStrength = 100000;
				maxBrakeTorque = 25000;
				springDamperRate = 9000;
			};
			class R4: R1
			{
				maxHandBrakeTorque = 2000;
				springStrength = 100000;
				springDamperRate = 9000;
				maxBrakeTorque = 9500;
			};
		};
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.1; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 0.2; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 0.8; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
           
           turnDecreaseConst  = 0.2; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.5; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.8; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.1; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
	};
	
	
	class rhsusf_himars_base: Truck_01_base_F	{
		antiRollbarForceLimit = 0;
		frontRearSplit = 0.5;
		frontBias = 3;
		rearBias = 0.5;
		centreBias = 2;
		class Wheels
		{
			class L1
			{
				frictionVsSlipGraph[] = { { 0.0, 0.35 }, { 0.3, 0.4 }, { 1.0, 0.7 } };
				latStiffY = 60;
				latStiffX = 75;
				longitudinalStiffnessPerUnitGravity = 5000;
				maxBrakeTorque = 2000;
				maxCompression = 0.4;
				maxHandBrakeTorque = 2000;
				springDamperRate = 6500;
				springStrength = 130000;
			//	sprungMass = 2750;
			};
			class L2: L1
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 9500;
				springStrength = 100000;
				springDamperRate = 9000;
			};
			class L3: L1
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 5500;
			};
			class R1: L1
			{
				maxHandBrakeTorque = 2000;
			};
			class R2: R1
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 9500;
				springStrength = 100000;
				springDamperRate = 9000;
			};
			class R3: R1
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 5500;
			};
		};
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.1; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 0.2; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 0.8; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
           
           turnDecreaseConst  = 0.2; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.5; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.8; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.1; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
	};
	
	
	class rhsusf_fmtv_base: Truck_01_base_F	{
		maximumLoad = 5000;
		ace_cargo_space = 20;
		antiRollbarForceLimit = 0;
		frontRearSplit = 0.5;
		frontBias = 3;
		rearBias = 0.5;
		centreBias = 2;
		class Wheels
		{
			class L1
			{
				frictionVsSlipGraph[] = { { 0.0, 0.35 }, { 0.3, 0.4 }, { 1.0, 0.7 } };
				latStiffX = 50;
				latStiffY = 70;
				longitudinalStiffnessPerUnitGravity = 5000;
				maxBrakeTorque = 11500;
				maxCompression = 0.4;
				maxHandBrakeTorque = 2000;
				springDamperRate = 5000;
				springStrength = 130000;
			//	sprungMass = 2750;
			};
			class L2: L1
			{
				maxHandBrakeTorque = 2000;
				springStrength = 120000;
				springDamperRate = 7000;
			};
			class R1: L1
			{
				maxHandBrakeTorque = 2000;
			};
			class R2: R1
			{
				maxHandBrakeTorque = 2000;
				springStrength = 120000;
				springDamperRate = 7000;
			};
		};
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.1; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 0.2; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 0.8; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
           
           turnDecreaseConst  = 0.2; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.5; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.8; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.1; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
	};
	
	
	
	class rhsusf_M1078A1P2_fmtv_usarmy: rhsusf_fmtv_base
	{
	};
	class rhsusf_M1083A1P2_fmtv_usarmy: rhsusf_M1078A1P2_fmtv_usarmy
	{
		antiRollbarForceLimit = 0;
		frontRearSplit = 0.5;
		frontBias = 3;
		rearBias = 0.5;
		centreBias = 2;
		class Wheels:Wheels
		{
			class L1:L1
			{
				frictionVsSlipGraph[] = { { 0.0, 0.35 }, { 0.3, 0.4 }, { 1.0, 0.7 } };
				latStiffY = 60;
				latStiffX = 75;
				longitudinalStiffnessPerUnitGravity = 5000;
				maxBrakeTorque = 2000;
				maxCompression = 0.4;
				maxHandBrakeTorque = 2000;
				springDamperRate = 6500;
				springStrength = 130000;
			//	sprungMass = 2750;
			};
			class L2: L1
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 9500;
				springStrength = 100000;
				springDamperRate = 9000;
			};
			class L3: L1
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 5500;
			};
			class R1: L1
			{
				maxHandBrakeTorque = 2000;
			};
			class R2: R1
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 9500;
				springStrength = 100000;
				springDamperRate = 9000;
			};
			class R3: R1
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 5500;
			};
		};
	};
	 
	class rhsusf_M1083A1P2_B_fmtv_usarmy: rhsusf_M1083A1P2_fmtv_usarmy
	{
		class Turrets;
		class Wheels:Wheels
		{
			class L1:L1
			{
				maxBrakeTorque = 2000;
				maxHandBrakeTorque = 2000;
				springDamperRate = 6500;
				springStrength = 130000;
			//	sprungMass = 2750;
			};
			class L2: L1
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 9500;
				springStrength = 100000;
				springDamperRate = 9000;
			};
			class L3: L1
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 5500;
			};
			class R1: L1
			{
				maxHandBrakeTorque = 2000;
			};
			class R2: R1
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 9500;
				springStrength = 100000;
				springDamperRate = 9000;
			};
			class R3: R1
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 5500;
			};
		};
	};
	
	
	class rhsusf_M1078A1P2_B_fmtv_usarmy: rhsusf_M1078A1P2_fmtv_usarmy
	{
		class Turrets;
	};
	class rhsusf_M1078A1P2_B_M2_fmtv_usarmy: rhsusf_M1078A1P2_B_fmtv_usarmy
	{
		class NewTurret;
		class Turrets: Turrets
		{
			
			class M2_Turret: NewTurret
			{
				weapons[] = {"UK3CB_BAF_Safe","UK3CB_BAF_Landrover_L111A1"};
				magazines[] = {"UK3CB_BAF_127_100Rnd"};
			};
		};
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_127_100Rnd";
				count = 8;
			};
		};
	};
	class rhsusf_M1078A1R_SOV_M2_D_fmtv_socom: rhsusf_M1078A1P2_B_M2_fmtv_usarmy
	{
		maximumLoad = 9000;
		class NewTurret;
		class Turrets: Turrets
		{
			
			class M2_Turret: NewTurret
			{
				weapons[] = {"UK3CB_BAF_Safe","UK3CB_BAF_Landrover_L111A1"};
				magazines[] = {"UK3CB_BAF_127_100Rnd"};
			};
		};
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_127_100Rnd";
				count = 8;
			};
		};
	};
	class rhsusf_M1083A1P2_B_M2_fmtv_usarmy: rhsusf_M1083A1P2_B_fmtv_usarmy
	{
		class NewTurret;
		class Turrets: Turrets
		{
			
			class M2_Turret: NewTurret
			{
				weapons[] = {"UK3CB_BAF_Safe","UK3CB_BAF_Landrover_L111A1"};
				magazines[] = {"UK3CB_BAF_127_100Rnd"};
			};
		};
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_127_100Rnd";
				count = 8;
			};
		};
	};
	
	class rhsusf_M1084A1P2_B_M2_fmtv_usarmy: rhsusf_M1083A1P2_B_M2_fmtv_usarmy
	{
		
	};
	class rhsusf_M1084A1R_SOV_M2_D_fmtv_socom: rhsusf_M1084A1P2_B_M2_fmtv_usarmy
	{
		maximumLoad = 9000;
		class NewTurret;
		class Turrets: Turrets
		{
			
			class M2_Turret: NewTurret
			{
				weapons[] = {"UK3CB_BAF_Safe","UK3CB_BAF_Landrover_L111A1"};
				magazines[] = {"UK3CB_BAF_127_100Rnd"};
			};
		};
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_127_100Rnd";
				count = 8;
			};
		};
	};
	class rhsusf_caiman_base : Truck_01_base_F
	{
		antiRollbarForceLimit = 0;
		frontRearSplit = 0.3;
		class Wheels
		{
			class L1
			{
				frictionVsSlipGraph[] = { { 0.0, 0.35 }, { 0.3, 0.4 }, { 1.0, 0.7 } };
				latStiffX = 20;
				latStiffY = 20;
				longitudinalStiffnessPerUnitGravity = 5000;
				maxBrakeTorque = 6000;
				maxCompression = 0.4;
				maxHandBrakeTorque = 2000;
				springDamperRate = 7500;
				springStrength = 330000;
			};
			class L2: L1
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 25000;
				springStrength = 190000;
				springDamperRate = 9000;
			};
			class L3: L1
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 3500;
			};
			class R1: L1
			{
				maxHandBrakeTorque = 3000;
			};
			class R2: R1
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 25000;
				springStrength = 190000;
				springDamperRate = 9000;
			};
			class R3: R1
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 3500;
			};
		};
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.2; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 0.2; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 0.8; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
           
           turnDecreaseConst  = 0.2; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.5; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.8; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.1; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
	};
	class OTR21_Base: Truck_F
	{
		class Wheels
		{
			class LF
			{
				frictionVsSlipGraph[] = { { 0.0, 0.8 }, { 0.2, 0.5 }, { 1.0, 0.8 } };
				longitudinalStiffnessPerUnitGravity = 15000;
				maxBrakeTorque = 3500;
				maxCompression = 0.4;
				maxHandBrakeTorque = 2000;
			};
			class LR: LF
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 3500;
			};
			class LR2: LR
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 3500;
			};
			class RF: LF
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 3500;
			};
			class RR: RF
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 3500;
			};
			class RR2: RR
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 3500;
			};
		};
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.1; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 0.2; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 0.8; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
           
           turnDecreaseConst  = 0.2; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.5; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.8; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.1; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
	};
	
	class O_Truck_02_covered_F;
	class rhs_kamaz5350: O_Truck_02_covered_F
	{
		antiRollbarForceLimit = 0;
		class Wheels
		{
			class L1
			{
				frictionVsSlipGraph[] = { { 0.0, 0.55 }, { 0.3, 0.4 }, { 1.0, 0.7 } };
				latStiffX = 75;
				latStiffY = 65;
				longitudinalStiffnessPerUnitGravity = 10000;
				maxBrakeTorque = 2000;
				maxCompression = 0.4;
				maxHandBrakeTorque = 2000;
				springStrength = 135000;
				springDamperRate = 8000;
			//	sprungMass = 2750;
			};
			class L2: L1
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 9000;
			};
			class L3: L2
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 3000;
			};
			class R1: L1
			{
				maxHandBrakeTorque = 2000;
			};
			class R2: R1
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 9000;
			};
			class R3: R2
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 3000;
			};
		};
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.1; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 0.2; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 0.8; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
           
           turnDecreaseConst  = 0.2; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.5; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.8; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.1; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
	};
	
	class RHS_Ural_BaseTurret: Truck_F
	{
		antiRollbarForceLimit = 0;
		class Wheels
		{
			class LF
			{
				frictionVsSlipGraph[] = { { 0.0, 0.55 }, { 0.3, 0.4 }, { 1.0, 0.7 } };
				latStiffX = 65;
				latStiffY = 55;
				longitudinalStiffnessPerUnitGravity = 10000;
				maxBrakeTorque = 2000;
				maxCompression = 0.4;
				maxHandBrakeTorque = 2000;
				springDamperRate = 6500;
				springStrength = 80000;
			//	sprungMass = 2750;
			};
			class LR: LF
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 6500;
			};
			class LR2: LR
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 4500;
			};
			class RF: LF
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 2000;
			};
			class RR: RF
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 6500;
			};
			class RR2: RR
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 4500;
			};
		};
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.1; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 0.6; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 0.8; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
           
           turnDecreaseConst  = 0.2; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.5; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.8; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.1; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
	};
	
	class rhs_kraz255_base: O_Truck_02_covered_F
	{
		antiRollbarForceLimit = 0;
		frontBias = 2;
		rearBias = 0.6;
		class Wheels
		{
			class L1
			{
				frictionVsSlipGraph[] = { { 0.0, 0.55 }, { 0.3, 0.4 }, { 1.0, 0.7 } };
				latStiffX = 65;
				latStiffY = 55;
				//longitudinalStiffnessPerUnitGravity = 5000;
				maxBrakeTorque = 2000;
				maxCompression = 0.4;
				maxHandBrakeTorque = 2000;
				springDamperRate = 6500;
				springStrength = 170000;
			//	sprungMass = 2750;
			};
			class L2: L1
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 6500;
				springDamperRate = 8500;
			};
			class L3: L2
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 4500;
			};
			class R1: L1
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 2000;
			};
			class R2: R1
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 6500;
				springDamperRate = 8500;
			};
			class R3: R2
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 4500;
			};
		};
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.1; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 0.6; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 0.8; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
           
           turnDecreaseConst  = 0.2; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.5; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.8; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.1; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
	};
	
	class rhs_zil131_base: Truck_F
	{
		antiRollbarForceLimit = 0;
	//	switchTime = 0.8;
		rearBias = 1.8;
		frontBias = 0.8;
		class Wheels
		{
			class L1
			{
				frictionVsSlipGraph[] = { { 0.0, 0.55 }, { 0.3, 0.4 }, { 1.0, 0.7 } };
				latStiffX = 65;
				latStiffY = 55;
				longitudinalStiffnessPerUnitGravity = 10000;
				maxBrakeTorque = 2000;
				maxCompression = 0.4;
				maxHandBrakeTorque = 2000;
				springDamperRate = 6000;
				springStrength = 100000;
			//	sprungMass = 2750;
			};
			class L2: L1
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 6000;
			};
			class L3: L2
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 3000;
			};
			class R1: L1
			{
				maxHandBrakeTorque = 2000;
			};
			class R2: R1
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 6000;
			};
			class R3: R2
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 3000;
			};
		};
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.1; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 0.6; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 0.8; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
           
           turnDecreaseConst  = 0.2; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.5; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.8; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.1; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
	};
	
	//gaz66
	class rhs_truck: Truck_F
	{
		frontbias = 2;
		rearbias = 0.7;
		class Wheels
		{
			class LF
			{
				frictionVsSlipGraph[] = { { 0.0, 0.4 }, { 0.3, 0.3 }, { 1.0, 0.7 } };
				latStiffX = 80;
				latStiffY = 40;
				longitudinalStiffnessPerUnitGravity = 5000;
				maxBrakeTorque = 5500;
				maxCompression = 0.25;
				maxHandBrakeTorque = 2000;
				springDamperRate = 5000;
				springStrength = 210000;
				//sprungMass = 3100;
				sprungMass = -1;
			};
			class LR: LF
			{
				maxHandBrakeTorque = 2000;
				springStrength = 130000;
				springDamperRate = 7500;
			};
			class RF: LF
			{
				maxHandBrakeTorque = 2000;
			};
			class RR: RF
			{
				maxHandBrakeTorque = 2000;
				springStrength = 130000;
				springDamperRate = 7500;
			};
		};
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.01; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 0.6; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 0.8; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
           
           turnDecreaseConst  = 0.2; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.5; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.8; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.1; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
	};
	
	class Tank_F;
	
	class Car;
	class Car_F: Car
	{
        class NewTurret;
        class Turrets
        {
            class MainTurret: NewTurret
            {
            };
        };
	};
	class Wheeled_APC_F: Car_F
	{
		class EventHandlers;
		class Turrets;
	};



	class rhsusf_stryker_base: Wheeled_APC_F
	{
		maximumLoad = 6000;
		frontbias = 0.8;
		rearbias = 1.7;
		class Wheels
		{
			class L1
			{
				maxBrakeTorque = 7500;
				maxhandBrakeTorque = 1500;
				maxCompression = 0.4;
			//	sprungMass = 4250;
			//	springStrength = 155000;
			//	springDamperRate = 8000;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 45;
				latStiffY = 130;
				frictionVsSlipGraph[] = { { 0.0, 0.4 }, { 0.5, 0.35 }, { 1.0, 0.6 } };
			};
			class L2:L1
			{
				maxBrakeTorque = 8500;
			};
			class L3: L1
			{
				maxhandBrakeTorque = 1500;
				maxBrakeTorque = 10500;
			};
			class L4: L1
			{
				maxhandBrakeTorque = 4500;
			};
			class R1: L1
			{
			};
			class R2: R1
			{
				maxBrakeTorque = 8500;
			};
			class R3: R1
			{
				maxhandBrakeTorque = 1500;
				maxBrakeTorque = 10500;
			};
			class R4: R1
			{
				maxhandBrakeTorque = 4500;
			};
		};
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.2; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 0.2; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 0.8; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
           
           turnDecreaseConst  = 0.7; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.5; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.3; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.1; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
	};

	
	class rhsusf_stryker_m1126_base: rhsusf_stryker_base
	{
		class MainTurret;
	};
	
	class rhsusf_stryker_m1127_base: rhsusf_stryker_m1126_base
	{
		class Turrets: Turrets
		{
			class Turret_Weapon: MainTurret
			{
				//no safe mode for this, because the firemode button switches between the gun and the optic
				weapons[] = {"UK3CB_BAF_Landrover_L111A1","rhsusf_weap_M6"};
				magazines[] = {"UK3CB_BAF_127_100Rnd","rhsusf_mag_L8A3_16"};
			};
		};
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_127_100Rnd";
				count = 5;
			};
		};
		class emptyclass
		{};
		class Transportitems: emptyclass
		{};
		class TransportWeapons: emptyclass
		{};
		class TransportBackpacks: emptyclass
		{};
	};
	
	class rhsusf_stryker_m1126_m2_base: rhsusf_stryker_m1126_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				//no safe mode for this, because the firemode button switches between the gun and the optic
				weapons[] = {"UK3CB_BAF_Landrover_L111A1","rhsusf_weap_M6"};
				magazines[] = {"UK3CB_BAF_127_100Rnd","rhsusf_mag_L8A3_16"};
			};
		};
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_127_100Rnd";
				count = 5;
			};
		};
		class emptyclass
		{};
		class Transportitems: emptyclass
		{};
		class TransportWeapons: emptyclass
		{};
		class TransportBackpacks: emptyclass
		{};
	};
	
	class rhsusf_stryker_m1126_mk19_base: rhsusf_stryker_m1126_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				//no safe mode for this, because the firemode button switches between the gun and the optic
				weapons[] = {"UK3CB_BAF_L134A1_vehicle","rhsusf_weap_M6"};
				magazines[] = {"UK3CB_BAF_32Rnd_40mm_G_Box","rhsusf_mag_L8A3_16"};
			};
		};
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_32Rnd_40mm_G_Box";
				count = 7;
			};
		};
		class emptyclass
		{};
		class Transportitems: emptyclass
		{};
		class TransportWeapons: emptyclass
		{};
		class TransportBackpacks: emptyclass
		{};
	};
	
	class rhs_btr_base: Wheeled_Apc_F {
		class Wheels
		{
			class LF {
				frictionVsSlipGraph[] = {{ 0.0, 0.5 }, { 0.2, 0.65 }, { 0.6, 0.8 }};
				longitudinalStiffnessPerUnitGravity = 15000;
				maxCompression = 0.35;
				springStrength = 210000;
				springDamperRate = 7000;
				maxBrakeTorque = 0;
				maxHandBrakeTorque = 0;
			};
			class LR: LF {
				springDamperRate = 6500;
				springStrength = 125000;
				maxBrakeTorque = 7000;
				maxHandBrakeTorque = 1500;
			};
			class RF: LF {
			};
			class RR: RF {
				springDamperRate = 6500;
				springStrength = 125000;
				maxBrakeTorque = 7000;
				maxHandBrakeTorque = 1500;
			};
		};
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.15; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 0.2; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 0.8; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
           
           turnDecreaseConst  = 0.15; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.5; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.8; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.1; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
	};
	
	class rhs_btr60_base: rhs_btr_base {
		class Wheels
		{
			class LF {
				frictionVsSlipGraph[] = {{ 0.0, 0.35 }, { 0.2, 0.5 }, { 0.6, 0.7 }};
				longitudinalStiffnessPerUnitGravity = 15000;
				maxCompression = 0.35;
				springStrength = 220000;
				springDamperRate = 3000;
				maxBrakeTorque = 0;
				maxHandBrakeTorque = 0;
			};
			class LR: LF {
				springDamperRate = 4000;
				maxBrakeTorque = 5000;
			};
			class LR2: LR {
				springDamperRate = 7000;
			};
			class RF: LF {
			};
			class RR: RF {
				springDamperRate = 4000;
				maxBrakeTorque = 5000;
			};
			class RR2: RR {
				springDamperRate = 7000;
			};
		};
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.1; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 0.2; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 0.8; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
           
           turnDecreaseConst  = 0.1; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.5; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.8; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.1; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
	};
	
	class rhs_btr70_msv;
	class rhs_btr80_msv: rhs_btr70_msv {
		class Wheels
		{
			class LF {
				frictionVsSlipGraph[] = {{ 0.0, 0.5 }, { 0.2, 0.65 }, { 0.6, 0.8 }};
				longitudinalStiffnessPerUnitGravity = 15000;
				maxCompression = 0.35;
				springStrength = 255000;
				springDamperRate = 6000;
				maxBrakeTorque = 0;
				maxHandBrakeTorque = 0;
			};
			class LR: LF {
				springDamperRate = 7000;
				springStrength = 155000;
				maxBrakeTorque = 9500;
				maxHandBrakeTorque = 1500;
			};
			class RF: LF {
			};
			class RR: RF {
				springDamperRate = 7000;
				springStrength = 155000;
				maxBrakeTorque = 9500;
				maxHandBrakeTorque = 1500;
			};
		};
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.2; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 0.2; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 0.8; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
           
           turnDecreaseConst  = 0.2; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.5; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.8; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.1; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
	};
	
	
	
	class rhsusf_M1117_base: Wheeled_Apc_F {
		frontBias = 1;
		frontRearSplit = 0.8;
		class Wheels
		{
			class LF {
				frictionVsSlipGraph[] = {{ 0.0, 0.35 }, { 0.5, 0.4 }, { 0.9, 0.7 }};
				longitudinalStiffnessPerUnitGravity = 7000;
				springDamperRate = 9000;
				maxBrakeTorque = 9500;
				maxHandBrakeTorque = 1000;
				maxCompression = 0.3;
				latStiffY = 90;
				latStiffx = 60;
				springStrength = 210000;
			};
			class LR:LF
			{
				maxHandBrakeTorque = 1000;
			};
			class RF:LF
			{
			};
			class RR:RF
			{
				maxHandBrakeTorque = 1000;
			};
		};
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.1; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 0.4; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 0.5; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
           
           turnDecreaseConst  = 0.7; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.6; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.6; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.2; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
	};
	
	
	class rhsgref_BRDM2: Wheeled_Apc_F {
		frontRearSplit = 0.5;
		rearbias = 0.7;
		frontbias = 1.0;
		class Wheels
		{
			class LF {
				frictionVsSlipGraph[] = {{ 0.0, 0.35 }, { 0.5, 0.4 }, { 0.9, 0.7 }};
				longitudinalStiffnessPerUnitGravity = 10000;
			//	maxCompression = 0.35;
				springDamperRate = 9500;
				maxBrakeTorque = 8000;
				maxHandBrakeTorque = 1000;
				springStrength = 130000;
				sprungMass = 3500;
				latStiffx = 40;
				latStiffY = 50;
			};
			class LR: LF {
				springDamperRate = 10500;
				maxHandBrakeTorque = 1000;
			//	springStrength = 65000;
			};
			class RF: LF {
			};
			class RR: RF {
				springDamperRate = 10500;
				maxHandBrakeTorque = 1000;
			//	springStrength = 65000;
			};
		};
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.1; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 0.4; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 0.5; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
           
           turnDecreaseConst  = 0.7; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.6; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.6; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.2; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
	};
	
	

	class MBT_01_base_F;
	class rhsusf_m1a1tank_base: MBT_01_base_F {
		tankTurnForce = 500000;
		accelAidForceCoef = 3.0;
		class Wheels
		{
			class L2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.2 }, { 0.2, 0.3 }, { 0.6, 0.4 }};
				sprungMass = 6300;
				//sprungMass = -1;
				springStrength = 300000;
			//	springDamperRate = 15000000;
				springDamperRate = 25000;
				maxCompression = 0.5;
				maxDroop = 0.3;
			};
			class L1: L2 {
				maxCompression = 0.2;
			};
			class L3: L2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.2 }, { 0.2, 0.3 }, { 0.6, 0.4 }};
			};
			class L4: L2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.5 }, { 0.2, 1.0 }, { 0.6, 2 }};
			};
			class L5: L2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.5 }, { 0.2, 1.0 }, { 0.6, 2 }};
			};
			class L6: L2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.5 }, { 0.2, 1.0 }, { 0.6, 2 }};
			};
			class L7: L2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.5 }, { 0.2, 1.0 }, { 0.6, 2 }};
			};
			class L8: L2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.2 }, { 0.2, 0.3 }, { 0.6, 0.4 }};
			};
			class L9: L2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.2 }, { 0.2, 0.3 }, { 0.6, 0.4 }};
			};
			class R2: L2 {
			};
			class R1: R2 {
				maxCompression = 0.2;
			};
			class R3: R2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.2 }, { 0.2, 0.3 }, { 0.6, 0.4 }};
			};
			class R4: R2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.5 }, { 0.2, 1.0 }, { 0.6, 2 }};
			};
			class R5: R2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.5 }, { 0.2, 1.0 }, { 0.6, 2 }};
			};
			class R6: R2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.5 }, { 0.2, 1.0 }, { 0.6, 2 }};
			};
			class R7: R2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.5 }, { 0.2, 1.0 }, { 0.6, 2 }};
			};
			class R8: R2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.2 }, { 0.2, 0.3 }, { 0.6, 0.4 }};
			};
			class R9: R2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.2 }, { 0.2, 0.3 }, { 0.6, 0.4 }};
			};
		};
	};
	
	/*

	//t80
	class rhs_tank_base: Tank_F {
		tankTurnForce = 400000;
		dampingRateFullThrottle = 6;
		accelAidForceCoef = 3;
		class Wheels
		{
			class L2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.2 }, { 0.2, 0.3 }, { 0.6, 0.4 }};
				maxCompression = 0.5;
				sprungMass = 3000;
				springStrength = 85000;
				springDamperRate = 5000;
			};
			class L1: L2 {
				maxCompression = 0.2;
			};
			class L3: L2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.2 }, { 0.2, 0.3 }, { 0.6, 0.4 }};
			};
			class L4: L2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.5 }, { 0.2, 1.0 }, { 0.6, 2 }};
			};
			class L5: L2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.5 }, { 0.2, 1.0 }, { 0.6, 2 }};
			};
			class L6: L2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.5 }, { 0.2, 1.0 }, { 0.6, 2 }};
			};
			class L7: L2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.5 }, { 0.2, 1.0 }, { 0.6, 2 }};
			};
			class L8: L2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.2 }, { 0.2, 0.3 }, { 0.6, 0.4 }};
			};
			class L9: L2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.2 }, { 0.2, 0.3 }, { 0.6, 0.4 }};
			};
			class R2: L2 {
			};
			class R1: R2 {
				maxCompression = 0.2;
			};
			class R3: R2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.2 }, { 0.2, 0.3 }, { 0.6, 0.4 }};
			};
			class R4: R2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.5 }, { 0.2, 1.0 }, { 0.6, 2 }};
			};
			class R5: R2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.5 }, { 0.2, 1.0 }, { 0.6, 2 }};
			};
			class R6: R2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.5 }, { 0.2, 1.0 }, { 0.6, 2 }};
			};
			class R7: R2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.5 }, { 0.2, 1.0 }, { 0.6, 2 }};
			};
			class R8: R2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.2 }, { 0.2, 0.3 }, { 0.6, 0.4 }};
			};
			class R9: R2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.2 }, { 0.2, 0.3 }, { 0.6, 0.4 }};
			};
		};
	};

	
	class rhs_a3t72tank_base: Tank_F {
		tankTurnForce = 400000;
		accelAidForceCoef = 2.3;
		class Wheels
		{
			class L2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.2 }, { 0.2, 0.3 }, { 0.6, 0.4 }};
				sprungMass = 6600;
				//sprungMass = -1;
				springStrength = 200000;
			//	springDamperRate = 15000000;
				springDamperRate = 7000;
				maxCompression = 0.5;
				maxDroop = 0.2;
			};
			class L1: L2 {
				maxCompression = 0.2;
			};
			class L3: L2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.2 }, { 0.2, 0.3 }, { 0.6, 0.4 }};
			};
			class L4: L2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.5 }, { 0.2, 1.0 }, { 0.6, 2 }};
			};
			class L5: L2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.5 }, { 0.2, 1.0 }, { 0.6, 2 }};
			};
			class L6: L2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.5 }, { 0.2, 1.0 }, { 0.6, 2 }};
			};
			class L7: L2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.5 }, { 0.2, 1.0 }, { 0.6, 2 }};
			};
			class L8: L2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.2 }, { 0.2, 0.3 }, { 0.6, 0.4 }};
			};
			class L9: L2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.2 }, { 0.2, 0.3 }, { 0.6, 0.4 }};
			};
			class R2: L2 {
			};
			class R1: R2 {
				maxCompression = 0.2;
			};
			class R3: R2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.2 }, { 0.2, 0.3 }, { 0.6, 0.4 }};
			};
			class R4: R2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.5 }, { 0.2, 1.0 }, { 0.6, 2 }};
			};
			class R5: R2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.5 }, { 0.2, 1.0 }, { 0.6, 2 }};
			};
			class R6: R2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.5 }, { 0.2, 1.0 }, { 0.6, 2 }};
			};
			class R7: R2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.5 }, { 0.2, 1.0 }, { 0.6, 2 }};
			};
			class R8: R2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.2 }, { 0.2, 0.3 }, { 0.6, 0.4 }};
			};
			class R9: R2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.2 }, { 0.2, 0.3 }, { 0.6, 0.4 }};
			};
		};
	};
	
	
	class rhs_t72bd_tv;
	class rhs_t90_tv: rhs_t72bd_tv {
		tankTurnForce = 400000;
		accelAidForceCoef = 1.5;
		class Wheels
		{
			class L2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.2 }, { 0.2, 0.3 }, { 0.6, 0.4 }};
				sprungMass = 5600;
				//sprungMass = -1;
				springStrength = 150000;
			//	springDamperRate = 15000000;
				springDamperRate = 4000;
				maxCompression = 0.5;
				maxDroop = 0.2;
			};
			class L1: L2 {
				maxCompression = 0.2;
			};
			class L3: L2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.2 }, { 0.2, 0.3 }, { 0.6, 0.4 }};
			};
			class L4: L2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.5 }, { 0.2, 1.0 }, { 0.6, 2 }};
			};
			class L5: L2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.5 }, { 0.2, 1.0 }, { 0.6, 2 }};
			};
			class L6: L2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.5 }, { 0.2, 1.0 }, { 0.6, 2 }};
			};
			class L7: L2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.5 }, { 0.2, 1.0 }, { 0.6, 2 }};
			};
			class L8: L2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.2 }, { 0.2, 0.3 }, { 0.6, 0.4 }};
			};
			class L9: L2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.2 }, { 0.2, 0.3 }, { 0.6, 0.4 }};
			};
			class R2: L2 {
			};
			class R1: R2 {
				maxCompression = 0.2;
			};
			class R3: R2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.2 }, { 0.2, 0.3 }, { 0.6, 0.4 }};
			};
			class R4: R2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.5 }, { 0.2, 1.0 }, { 0.6, 2 }};
			};
			class R5: R2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.5 }, { 0.2, 1.0 }, { 0.6, 2 }};
			};
			class R6: R2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.5 }, { 0.2, 1.0 }, { 0.6, 2 }};
			};
			class R7: R2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.5 }, { 0.2, 1.0 }, { 0.6, 2 }};
			};
			class R8: R2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.2 }, { 0.2, 0.3 }, { 0.6, 0.4 }};
			};
			class R9: R2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.2 }, { 0.2, 0.3 }, { 0.6, 0.4 }};
			};
		};
	};
	*/
	
	class rhs_bmp1tank_base: Tank_F {
		class Wheels
		{
			class L2 {
				maxCompression = 0.5;
			};
			class L1: L2 {
				maxCompression = 0.2;
			};
			class L3: L2 {
			};
			class L4: L2 {
			};
			class L5: L2 {
			};
			class L6: L2 {
			};
			class L7: L2 {
			};
			class L8: L2 {
			};
			class L9: L2 {
			};
			class R2: L2 {
			};
			class R1: R2 {
				maxCompression = 0.2;
			};
			class R3: R2 {
			};
			class R4: R2 {
			};
			class R5: R2 {
			};
			class R6: R2 {
			};
			class R7: R2 {
			};
			class R8: R2 {
			};
			class R9: R2 {
			};
		};
	};
	class rhs_bmp3tank_base: Tank_F {
		class Wheels
		{
			class L2 {
				maxCompression = 0.5;
			};
			class L1: L2 {
				maxCompression = 0.2;
			};
			class L3: L2 {
			};
			class L4: L2 {
			};
			class L5: L2 {
			};
			class L6: L2 {
			};
			class L7: L2 {
			};
			class L8: L2 {
			};
			class L9: L2 {
			};
			class R2: L2 {
			};
			class R1: R2 {
				maxCompression = 0.2;
			};
			class R3: R2 {
			};
			class R4: R2 {
			};
			class R5: R2 {
			};
			class R6: R2 {
			};
			class R7: R2 {
			};
			class R8: R2 {
			};
			class R9: R2 {
			};
		};
	};
	

	class APC_Tracked_03_base_F;
	class RHS_M2A2_Base: APC_Tracked_03_base_F {
		class Wheels
		{
			class L2 {
				frictionVsSlipGraph[] = {{ 0.0, 0.2 }, { 0.2, 0.3 }, { 0.6, 0.4 }};
				sprungMass = 2700;
				//sprungMass = -1;
				springStrength = 250000;
			//	springDamperRate = 15000000;
				springDamperRate = 15000;
				maxCompression = 0.5;
			};
			class L1: L2 {
				maxCompression = 0.2;
			};
			class L3: L2 {
				springStrength = 1000000;
				frictionVsSlipGraph[] = {{ 0.0, 0.2 }, { 0.2, 0.3 }, { 0.6, 0.4 }};
			};
			class L4: L2 {
				springStrength = 250000;
				frictionVsSlipGraph[] = {{ 0.0, 0.5 }, { 0.2, 1.0 }, { 0.6, 2 }};
			};
			class L5: L2 {
				springStrength = 250000;
				frictionVsSlipGraph[] = {{ 0.0, 0.5 }, { 0.2, 1.0 }, { 0.6, 2 }};
			};
			class L6: L2 {
				springStrength = 250000;
				frictionVsSlipGraph[] = {{ 0.0, 0.5 }, { 0.2, 1.0 }, { 0.6, 2 }};
			};
			class L7: L2 {
				springStrength = 1000000;
				springDamperRate = 50000;
				frictionVsSlipGraph[] = {{ 0.0, 0.5 }, { 0.2, 1.0 }, { 0.6, 2 }};
			};
			class L8: L2 {
				springStrength = 100000;
				springDamperRate = 50000;
				frictionVsSlipGraph[] = {{ 0.0, 0.2 }, { 0.2, 0.3 }, { 0.6, 0.4 }};
			};
			class L9: L2 {
				springStrength = 100000;
				springDamperRate = 50000;
				frictionVsSlipGraph[] = {{ 0.0, 0.2 }, { 0.2, 0.3 }, { 0.6, 0.4 }};
			};
			class R2: L2 {
			};
			class R1: R2 {
				maxCompression = 0.2;
			};
			class R3: R2 {
				springStrength = 1000000;
				frictionVsSlipGraph[] = {{ 0.0, 0.2 }, { 0.2, 0.3 }, { 0.6, 0.4 }};
			};
			class R4: R2 {
				springStrength = 250000;
				frictionVsSlipGraph[] = {{ 0.0, 0.5 }, { 0.2, 1.0 }, { 0.6, 2 }};
			};
			class R5: R2 {
				springStrength = 250000;
				frictionVsSlipGraph[] = {{ 0.0, 0.5 }, { 0.2, 1.0 }, { 0.6, 2 }};
			};
			class R6: R2 {
				springStrength = 250000;
				frictionVsSlipGraph[] = {{ 0.0, 0.5 }, { 0.2, 1.0 }, { 0.6, 2 }};
			};
			class R7: R2 {
				springStrength = 1000000;
				springDamperRate = 50000;
				frictionVsSlipGraph[] = {{ 0.0, 0.5 }, { 0.2, 1.0 }, { 0.6, 2 }};
			};
			class R8: R2 {
				springStrength = 100000;
				springDamperRate = 50000;
				frictionVsSlipGraph[] = {{ 0.0, 0.2 }, { 0.2, 0.3 }, { 0.6, 0.4 }};
			};
			class R9: R2 {
				springStrength = 100000;
				springDamperRate = 50000;
				frictionVsSlipGraph[] = {{ 0.0, 0.2 }, { 0.2, 0.3 }, { 0.6, 0.4 }};
			};
		};
	};
	
	class MRAP_02_base_F;
	class rhs_tigr_base:MRAP_02_base_F
	{
		class Wheels {
			class LF {
				frictionVsSlipGraph[] = {{ 0.0, 0.3 }, { 0.5, 0.35 }, { 0.8, 0.8 }};
				latStiffX = 120;
				latStiffY = 110;
				longitudinalStiffnessPerUnitGravity = 8000;
				maxBrakeTorque = 7000;
				maxCompression = 0.3;
				maxDroop = 0.11;
				maxHandBrakeTorque = 1000;
				springDamperRate = 4000;
				springStrength = 105000;
			//	sprungMass = 1500;
				sprungMass = -1;
			};
			class RF: LF {
			};
			class LR: LF {
				maxHandBrakeTorque = 1000;
				maxBrakeTorque = 4700;
			};
			class RR: RF {
				maxHandBrakeTorque = 1000;
				maxBrakeTorque = 4700;
			};
		};
		
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.3; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 0.2; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 0.8; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
           
           turnDecreaseConst  = 0.5; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.5; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.8; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.1; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
	};
	
	class rhs_tigr_vdv: rhs_tigr_base
	{};
	
	class rhs_tigr_m_vdv: rhs_tigr_vdv
	{
		frontBias = 2.5;
		class Wheels {
			class LF {
				frictionVsSlipGraph[] = {{ 0.0, 0.3 }, { 0.5, 0.35 }, { 0.8, 0.8 }};
				latStiffX = 120;
				latStiffY = 110;
				longitudinalStiffnessPerUnitGravity = 8000;
				maxBrakeTorque = 9000;
				maxCompression = 0.3;
				maxDroop = 0.11;
				maxHandBrakeTorque = 1000;
				springDamperRate = 6000;
				springStrength = 105000;
			//	sprungMass = 1500;
				sprungMass = -1;
			};
			class RF: LF {
			};
			class LR: LF {
				maxHandBrakeTorque = 1000;
				maxBrakeTorque = 4700;
			};
			class RR: RF {
				maxHandBrakeTorque = 1000;
				maxBrakeTorque = 4700;
			};
		};
	};
	
	class I_Sniper_F;
	class twc_I_Sniper_F: I_Sniper_F
	{
		_generalMacro = "twc_I_Sniper_F";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\twc_units_modern\textures\digicamo_co.jpg"};
	};
	
	class rhs_t14_base: Tank_F
	{
		armor = 350;
	};
	
	class ACE_medicalSupplyCrate_advanced;
	class twc_public_medicalbox_small: ACE_medicalSupplyCrate_advanced
	{
		maximumLoad = 300;
		displayName = "Medical Supplies";
	};
	
	class ACE_Box_Ammo;
	class twc_public_762box_small: ACE_Box_Ammo
	{
		maximumLoad = 800;
		displayName = "7.62 Belts";
	};
	class twc_public_50calbox_small: ACE_Box_Ammo
	{
		displayName = ".50 Belts";
	};
	class twc_public_40mmbox_small: ACE_Box_Ammo
	{
		displayName = "40mm Belts";
	};
	class UK3CB_BAF_Box_WpsLaunch_Javelin;
	class twc_public_launcherbox_small_gen: UK3CB_BAF_Box_WpsLaunch_Javelin
	{
		maximumLoad = 720;
		displayName = "Launcher Box";
	};
	class twc_public_launcherbox_small_at4: UK3CB_BAF_Box_WpsLaunch_Javelin
	{
		maximumLoad = 720;
		displayName = "AT4 Launchers";
	};
	class twc_public_launcherbox_small_jav: twc_public_launcherbox_small_gen
	{
		maximumLoad = 340;
		displayName = "Javelin Tubes";
	};
	class twc_public_launcherbox_small_maaws: twc_public_launcherbox_small_gen
	{
		displayName = "MAAWS Rockets";
		maximumLoad = 700;
	};
	class twc_public_launcherbox_small_nlaw: twc_public_launcherbox_small_gen
	{
		displayName = "NLAW Launchers";
		maximumLoad = 600;
	};
	
	class rhsusf_cougar_GPK_base: rhsusf_Cougar_base
	{
		class Turrets;
	};
	class rhsusf_CGRCAT1A2_M2_usmc_d: rhsusf_cougar_GPK_base
	{
		
		class Turrets: Turrets
		{
			class MainTurret;
			class M2_Turret: MainTurret
			{
				weapons[] = {"UK3CB_BAF_Safe","UK3CB_BAF_Landrover_L111A1"};
				magazines[] = {"UK3CB_BAF_127_100Rnd"};
			};
		};
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_127_100Rnd";
				count = 7;
			};
		};
		class Transportitems
		{};
		class TransportWeapons
		{};
		class TransportBackpacks
		{};
		maximumLoad = 4000;
	};


	class rhsusf_caiman_GPK_base: rhsusf_caiman_base
	{
		class Turrets;
	};
	class rhsusf_M1230_M2_usarmy_d: rhsusf_caiman_GPK_base
	{
		class NewTurret;
		class Turrets: Turrets
		{
			class M2_Turret: NewTurret
			{
				weapons[] = {"UK3CB_BAF_Safe","UK3CB_BAF_Landrover_L111A1"};
				magazines[] = {"UK3CB_BAF_127_100Rnd"};
			};
		};
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_127_100Rnd";
				count = 10;
			};
		};
		maximumLoad = 6000;
		class Transportitems
		{};
		class TransportWeapons
		{};
		class TransportBackpacks
		{};
	};
	class rhsusf_M1230_MK19_usarmy_d: rhsusf_M1230_M2_usarmy_d
	{
		class NewTurret;
		class Turrets: Turrets
		{
			class M2_Turret: M2_Turret
			{
				weapons[] = {"UK3CB_BAF_Safe","UK3CB_BAF_L134A1_vehicle"};
				magazines[] = {"UK3CB_BAF_32Rnd_40mm_G_Box"};
			};
		};
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_32Rnd_40mm_G_Box";
				count = 10;
			};
		};
		maximumLoad = 4000;
		class Transportitems
		{};
		class TransportWeapons
		{};
		class TransportBackpacks
		{};
	};
	class rhsusf_M1220_M2_usarmy_d: rhsusf_caiman_GPK_base
	{
		class NewTurret;
		class Turrets: Turrets
		{
			class M2_Turret: NewTurret
			{
				weapons[] = {"UK3CB_BAF_Safe","UK3CB_BAF_Landrover_L111A1"};
				magazines[] = {"UK3CB_BAF_127_100Rnd"};
			};
		};
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_127_100Rnd";
				count = 10;
			};
		};
		maximumLoad = 6000;
		class Transportitems
		{};
		class TransportWeapons
		{};
		class TransportBackpacks
		{};
	};
	class rhsusf_M1220_MK19_usarmy_d: rhsusf_M1220_M2_usarmy_d
	{
		class NewTurret;
		class Turrets: Turrets
		{
			class M2_Turret: M2_Turret
			{
				weapons[] = {"UK3CB_BAF_Safe","UK3CB_BAF_L134A1_vehicle"};
				magazines[] = {"UK3CB_BAF_32Rnd_40mm_G_Box"};
			};
		};
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_32Rnd_40mm_G_Box";
				count = 10;
			};
		};
		class Transportitems
		{};
		class TransportWeapons
		{};
		class TransportBackpacks
		{};
	};
	class rhsusf_M1220_M153_M2_usarmy_d: rhsusf_M1220_M2_usarmy_d
	{
		class Turrets: Turrets
		{
			class CROWS_Turret: NewTurret
			{
				weapons[] = {"UK3CB_BAF_Safe","UK3CB_BAF_Landrover_L111A1"};
				magazines[] = {"UK3CB_BAF_127_100Rnd"};
			};
		};
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_127_100Rnd";
				count = 10;
			};
		};
		class Transportitems
		{};
		class TransportWeapons
		{};
		class TransportBackpacks
		{};
	};
	class rhsusf_M1220_M153_MK19_usarmy_d: rhsusf_M1220_M153_M2_usarmy_d
	{
		class Turrets: Turrets
		{
			class CROWS_Turret: CROWS_Turret
			{
				weapons[] = {"UK3CB_BAF_Safe","UK3CB_BAF_L134A1_vehicle"};
				magazines[] = {"UK3CB_BAF_32Rnd_40mm_G_Box"};
			};
		};
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_32Rnd_40mm_G_Box";
				count = 10;
			};
		};
		class Transportitems
		{};
		class TransportWeapons
		{};
		class TransportBackpacks
		{};
	};
	/*
	class rhsusf_M1220_M153_M2_usarmy_d: rhsusf_M1220_M2_usarmy_d
	{
		class Turrets;
	};
	*/
	/*
	class rhsusf_M1220_M153_M2_usarmy_wd: rhsusf_M1220_M153_M2_usarmy_d
	{
		class NewTurret;
		class Turrets: Turrets
		{
			class M2_CROWS_Turret: NewTurret 
			{
				weapons[] = {"UK3CB_BAF_Safe","UK3CB_BAF_Landrover_L111A1"};
				magazines[] = {"UK3CB_BAF_127_100Rnd"};
			};
		};
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_127_100Rnd";
				count = 10;
			};
		};
		class Transportitems
		{};
		class TransportWeapons
		{};
		class TransportBackpacks
		{};
	};
	*/
	class CUP_Mastiff_Base: Wheeled_APC_F
	{
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				weapons[] = {"UK3CB_BAF_Safe","UK3CB_BAF_Landrover_L111A1"};
				magazines[] = {"UK3CB_BAF_127_100Rnd"};
			};
		};
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_127_100Rnd";
				count = 10;
			};
		
			delete _xx_Chemlight_Red;
			delete _xx_CUP_1Rnd_HEDP_M203;
			delete _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249;
			delete _xx_CUP_30Rnd_556x45_Stanag;
			delete _xx_CUP_HandGrenade_M67;
			delete _xx_CUP_M136_M;
			delete _xx_SmokeShell;
			delete _xx_SmokeShellOrange;
		};
		class Transportitems
		{
			delete _xx_FirstAidKit;
			delete _xx_MediKit;
			delete _xx_ToolKit;
		};
		class TransportWeapons
		{
			delete _xx_CUP_arifle_L85A2_G;
			delete _xx_CUP_launch_M136;
		};
		class TransportBackpacks
		{
			delete _xx_CUP_B_Bergen_BAF;
		};
	};
	
	class CUP_B_Mastiff_HMG_GB_D: CUP_Mastiff_Base
	{
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_127_100Rnd";
				count = 10;
			};
		
			delete _xx_Chemlight_Red;
			delete _xx_CUP_1Rnd_HEDP_M203;
			delete _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249;
			delete _xx_CUP_30Rnd_556x45_Stanag;
			delete _xx_CUP_HandGrenade_M67;
			delete _xx_CUP_M136_M;
			delete _xx_SmokeShell;
			delete _xx_SmokeShellOrange;
		};
		class Transportitems
		{
			delete _xx_FirstAidKit;
			delete _xx_MediKit;
			delete _xx_ToolKit;
		};
		class TransportWeapons
		{
			delete _xx_CUP_arifle_L85A2_G;
			delete _xx_CUP_launch_M136;
		};
		class TransportBackpacks
		{
			delete _xx_CUP_B_Bergen_BAF;
		};
	};
	
	class CUP_B_Mastiff_HMG_GB_W: CUP_Mastiff_Base
	{
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_127_100Rnd";
				count = 10;
			};
		
			delete _xx_Chemlight_Red;
			delete _xx_CUP_1Rnd_HEDP_M203;
			delete _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249;
			delete _xx_CUP_30Rnd_556x45_Stanag;
			delete _xx_CUP_HandGrenade_M67;
			delete _xx_CUP_M136_M;
			delete _xx_SmokeShell;
			delete _xx_SmokeShellOrange;
		};
		class Transportitems
		{
			delete _xx_FirstAidKit;
			delete _xx_MediKit;
			delete _xx_ToolKit;
		};
		class TransportWeapons
		{
			delete _xx_CUP_arifle_L85A2_G;
			delete _xx_CUP_launch_M136;
		};
		class TransportBackpacks
		{
			delete _xx_CUP_B_Bergen_BAF;
		};
	};
	
	class CUP_B_Mastiff_GMG_GB_D: CUP_Mastiff_Base
	{
		class Turrets: Turrets
		{
			class MainTurret: NewTurret
			{
				weapons[] = {"UK3CB_BAF_Safe","UK3CB_BAF_L134A1_vehicle"};
				magazines[] = {"UK3CB_BAF_32Rnd_40mm_G_Box"};
			};
		};
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_32Rnd_40mm_G_Box";
				count = 10;
			};
		
			delete _xx_Chemlight_Red;
			delete _xx_CUP_1Rnd_HEDP_M203;
			delete _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249;
			delete _xx_CUP_30Rnd_556x45_Stanag;
			delete _xx_CUP_HandGrenade_M67;
			delete _xx_CUP_M136_M;
			delete _xx_SmokeShell;
			delete _xx_SmokeShellOrange;
		};
		class Transportitems
		{
			delete _xx_FirstAidKit;
			delete _xx_MediKit;
			delete _xx_ToolKit;
		};
		class TransportWeapons
		{
			delete _xx_CUP_arifle_L85A2_G;
			delete _xx_CUP_launch_M136;
		};
		class TransportBackpacks
		{
			delete _xx_CUP_B_Bergen_BAF;
		};
	};
	
	class CUP_B_Mastiff_GMG_GB_W: CUP_Mastiff_Base
	{
		class Turrets: Turrets
		{
			class MainTurret: NewTurret
			{
				weapons[] = {"UK3CB_BAF_Safe","UK3CB_BAF_L134A1_vehicle"};
				magazines[] = {"UK3CB_BAF_32Rnd_40mm_G_Box"};
			};
		};
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_32Rnd_40mm_G_Box";
				count = 10;
			};
		
			delete _xx_Chemlight_Red;
			delete _xx_CUP_1Rnd_HEDP_M203;
			delete _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249;
			delete _xx_CUP_30Rnd_556x45_Stanag;
			delete _xx_CUP_HandGrenade_M67;
			delete _xx_CUP_M136_M;
			delete _xx_SmokeShell;
			delete _xx_SmokeShellOrange;
		};
		class Transportitems
		{
			delete _xx_FirstAidKit;
			delete _xx_MediKit;
			delete _xx_ToolKit;
		};
		class TransportWeapons
		{
			delete _xx_CUP_arifle_L85A2_G;
			delete _xx_CUP_launch_M136;
		};
		class TransportBackpacks
		{
			delete _xx_CUP_B_Bergen_BAF;
		};
	};
	
	class CUP_Wolfhound_Base: Wheeled_APC_F
	{
		class NewTurret;
		class Turrets: Turrets
		{
			class MainTurret: NewTurret
			{
				weapons[] = {"UK3CB_BAF_Safe","UK3CB_BAF_Landrover_L111A1"};
				magazines[] = {"UK3CB_BAF_127_100Rnd"};
			};
		};
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_127_100Rnd";
				count = 10;
			};
		
			delete _xx_Chemlight_Red;
			delete _xx_CUP_1Rnd_HEDP_M203;
			delete _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249;
			delete _xx_CUP_30Rnd_556x45_Stanag;
			delete _xx_CUP_HandGrenade_M67;
			delete _xx_CUP_M136_M;
			delete _xx_SmokeShell;
			delete _xx_SmokeShellOrange;
		};
		class Transportitems
		{
			delete _xx_FirstAidKit;
			delete _xx_MediKit;
			delete _xx_ToolKit;
		};
		class TransportWeapons
		{
			delete _xx_CUP_arifle_L85A2_G;
			delete _xx_CUP_launch_M136;
		};
		class TransportBackpacks
		{
			delete _xx_CUP_B_Bergen_BAF;
		};
		class EventHandlers: EventHandlers {
			init = " if (!isServer) exitWith {};			_car = (_this select 0);					_obj = 'fuel_can' createvehicle [0,0,0];		_obj attachto [_car, [-1.2,2.5,1.69]];			_obj setVectorDirAndUp [[-1,0,0],[0,0.1,1]];				[_obj, 20] call ace_refuel_fnc_makeSource;		[_obj, true, [0, 1, 0], 10] call ace_dragging_fnc_setCarryable;			_obj = 'fuel_can' createvehicle [0,0,0];		_obj attachto [_car, [-1.05,2.5,1.69]];			_obj setVectorDirAndUp [[-1,0,0],[0,0.1,1]];				[_obj, 20] call ace_refuel_fnc_makeSource;		[_obj, true, [0, 1, 0], 10] call ace_dragging_fnc_setCarryable;					_obj = 'Box_NATO_AmmoVeh_F' createvehicle [0,0,0];		_obj attachto [_car, [-0.3,-3.5,2.3]];						_obj = 'UK3CB_BAF_Box_762_Ammo' createvehicle [0,0,0];		_obj attachto [_car, [0.8,-4.5,2.0]];				_obj = 'UK3CB_BAF_Box_556_Ammo' createvehicle [0,0,0];		_obj attachto [_car, [0.8,-3.75,2.0]];				_obj = 'UK3CB_BAF_Box_40_Ammo' createvehicle [0,0,0];		_obj attachto [_car, [0.8,-3.0,2.0]];			";
			killed = " {deletevehicle _x} foreach (attachedobjects (_this select 0))";
		};
	};
	
	class CUP_B_Wolfhound_HMG_GB_D: CUP_Wolfhound_Base
	{
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_127_100Rnd";
				count = 10;
			};
		
			delete _xx_Chemlight_Red;
			delete _xx_CUP_1Rnd_HEDP_M203;
			delete _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249;
			delete _xx_CUP_30Rnd_556x45_Stanag;
			delete _xx_CUP_HandGrenade_M67;
			delete _xx_CUP_M136_M;
			delete _xx_SmokeShell;
			delete _xx_SmokeShellOrange;
		};
		class Transportitems
		{
			delete _xx_FirstAidKit;
			delete _xx_MediKit;
			delete _xx_ToolKit;
		};
		class TransportWeapons
		{
			delete _xx_CUP_arifle_L85A2_G;
			delete _xx_CUP_launch_M136;
		};
		class TransportBackpacks
		{
			delete _xx_CUP_B_Bergen_BAF;
		};
	};
	
	class CUP_B_Wolfhound_HMG_GB_W: CUP_Wolfhound_Base
	{
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_127_100Rnd";
				count = 10;
			};
		
			delete _xx_Chemlight_Red;
			delete _xx_CUP_1Rnd_HEDP_M203;
			delete _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249;
			delete _xx_CUP_30Rnd_556x45_Stanag;
			delete _xx_CUP_HandGrenade_M67;
			delete _xx_CUP_M136_M;
			delete _xx_SmokeShell;
			delete _xx_SmokeShellOrange;
		};
		class Transportitems
		{
			delete _xx_FirstAidKit;
			delete _xx_MediKit;
			delete _xx_ToolKit;
		};
		class TransportWeapons
		{
			delete _xx_CUP_arifle_L85A2_G;
			delete _xx_CUP_launch_M136;
		};
		class TransportBackpacks
		{
			delete _xx_CUP_B_Bergen_BAF;
		};
	};
	
	class CUP_B_Wolfhound_LMG_GB_D: CUP_Wolfhound_Base
	{
		class NewTurret;
		class Turrets: Turrets
		{
			class MainTurret: NewTurret
			{
				weapons[] = {"UK3CB_BAF_Safe","UK3CB_BAF_Landrover_L7A2_1"};
				magazines[] = {"UK3CB_BAF_762_200Rnd_T"};
			};
		};
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_762_200Rnd_T";
				count = 15;
			};
		
			delete _xx_Chemlight_Red;
			delete _xx_CUP_1Rnd_HEDP_M203;
			delete _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249;
			delete _xx_CUP_30Rnd_556x45_Stanag;
			delete _xx_CUP_HandGrenade_M67;
			delete _xx_CUP_M136_M;
			delete _xx_SmokeShell;
			delete _xx_SmokeShellOrange;
		};
		class Transportitems
		{
			delete _xx_FirstAidKit;
			delete _xx_MediKit;
			delete _xx_ToolKit;
		};
		class TransportWeapons
		{
			delete _xx_CUP_arifle_L85A2_G;
			delete _xx_CUP_launch_M136;
		};
		class TransportBackpacks
		{
			delete _xx_CUP_B_Bergen_BAF;
		};
	};
	
	class CUP_B_Wolfhound_LMG_GB_W: CUP_Wolfhound_Base
	{
		class NewTurret;
		class Turrets: Turrets
		{
			class MainTurret: NewTurret
			{
				weapons[] = {"UK3CB_BAF_Safe","UK3CB_BAF_Landrover_L7A2_1"};
				magazines[] = {"UK3CB_BAF_762_200Rnd_T"};
			};
		};
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_762_200Rnd_T";
				count = 15;
			};
		
			delete _xx_Chemlight_Red;
			delete _xx_CUP_1Rnd_HEDP_M203;
			delete _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249;
			delete _xx_CUP_30Rnd_556x45_Stanag;
			delete _xx_CUP_HandGrenade_M67;
			delete _xx_CUP_M136_M;
			delete _xx_SmokeShell;
			delete _xx_SmokeShellOrange;
		};
		class Transportitems
		{
			delete _xx_FirstAidKit;
			delete _xx_MediKit;
			delete _xx_ToolKit;
		};
		class TransportWeapons
		{
			delete _xx_CUP_arifle_L85A2_G;
			delete _xx_CUP_launch_M136;
		};
		class TransportBackpacks
		{
			delete _xx_CUP_B_Bergen_BAF;
		};
	};
	
	class CUP_HMMWV_Base: Car_F
	{
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
				weapons[] = {"UK3CB_BAF_Safe","UK3CB_BAF_Landrover_L111A1"};
				magazines[] = {"UK3CB_BAF_127_100Rnd"};
            };
        };
	};
	class CUP_HMMWV_Crows_M2_Base: CUP_HMMWV_Base
	{
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
				weapons[] = {"UK3CB_BAF_Safe","UK3CB_BAF_Landrover_L111A1"};
				magazines[] = {"UK3CB_BAF_127_100Rnd"};
            };
        };
	};
	class CUP_B_HMMWV_Crows_M2_USA: CUP_HMMWV_Crows_M2_Base
	{
		//class NewTurret;
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
				weapons[] = {"UK3CB_BAF_Safe","UK3CB_BAF_Landrover_L111A1"};
				magazines[] = {"UK3CB_BAF_127_100Rnd"};
			};
		};
		
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_127_100Rnd";
				count = 7;
			};
		};
		class Transportitems
		{};
		class TransportWeapons
		{};
		class TransportBackpacks
		{};
	};

	
	
	class rhsusf_RG33_CROWS_base: rhsusf_RG33_base {
		class NewTurret;
		class Turrets: Turrets
		{
			class CROWS_Turret: NewTurret
			{
				weapons[] = {"UK3CB_BAF_Safe","UK3CB_BAF_Landrover_L111A1"};
				magazines[] = {"UK3CB_BAF_127_100Rnd"};
			};
		};
		
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_127_100Rnd";
				count = 10;
			};
		
		};
	};
	class rhsusf_M1238A1_M2_socom_d: rhsusf_RG33_CROWS_base {
		
	};
	class twc_M1238A1_M2_socom_d: rhsusf_M1238A1_M2_socom_d {
		
	};
	
	
	
	
	class rhsusf_M1239_CROWS_base: rhsusf_M1239_base {
		
	};
	class rhsusf_M1239_Deploy_base: rhsusf_M1239_CROWS_base {
		
		class Turrets;
		maximumLoad = 7000;
	};
	class rhsusf_M1239_M2_Deploy_socom_d: rhsusf_M1239_Deploy_base {
		
		class Turrets: Turrets
		{
			class CROWS_Turret;
		};
	};
	class twc_M1239_M2_Deploy_socom_d: rhsusf_M1239_M2_Deploy_socom_d {
		maximumLoad = 7000;
		class Turrets: Turrets
		{
			class CROWS_Turret: CROWS_Turret
			{
				weapons[] = {"UK3CB_BAF_Safe","UK3CB_BAF_Landrover_L111A1"};
				magazines[] = {"UK3CB_BAF_127_100Rnd"};
			};
		};
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_127_100Rnd";
				count = 10;
			};
		
		};
	   
	};
	
	class rhsusf_hmmwe_base: MRAP_01_base_F {
		ace_cargo_size = 35;
		ace_cargo_canLoad = 1;
		turnCoef = 3.5;
		minOmega = 10;
	//	class Wheels {
	//		class LF;
	//	};
	};

	class rhsusf_m1151_base: MRAP_01_base_F {
		minOmega = 10;
	//	clutchStrength = 3;
		antiRollbarForceLimit = 0;
		frontrearsplit = 0.5;
		frontbias = 0.7;
		centrebias = 0.2;
		turnCoef = 3.5;
		class Wheels {
			class L1 {
				frictionVsSlipGraph[] = {{ 0.0, 0.25 }, { 0.3, 0.3 }, { 0.8, 0.5 }};
				maxCompression = 0.3;
				maxDroop = 0.15;
				maxHandBrakeTorque = 1000;
				springDamperRate = 3500;
				maxBrakeTorque = 8000;
				springStrength = 125000;
				longitudinalStiffnessPerUnitGravity = 5000;
				latStiffY = 200;
				latStiffX = 200;
				//sprungMass = 925;
			};
			class L2: L1 {
				maxBrakeTorque = 7000;
			//	springStrength = 38000;
				springDamperRate = 6500;
				springStrength = 85000;
				maxHandBrakeTorque = 1000;
				frictionVsSlipGraph[] = {{ 0.0, 0.35 }, { 0.3, 0.45 }, { 0.8, 0.5 }};
				longitudinalStiffnessPerUnitGravity = 15000;
			};
			class R1:L1 {
				
			};
			class R2: R1 {
				maxBrakeTorque = 7000;
			//	springStrength = 38000;
				springDamperRate = 6500;
				springStrength = 85000;
				maxHandBrakeTorque = 1000;
				frictionVsSlipGraph[] = {{ 0.0, 0.35 }, { 0.3, 0.45 }, { 0.8, 0.5 }};
				longitudinalStiffnessPerUnitGravity = 15000;
			};
		};
		
		
		class complexGearbox {
			driveString = "D";
			gearBoxMode = "auto";
			GearboxRatios[] = {"R1",-3.07,"N",0,"D1",2.78,"D2",1.48,"D3",1,"D4",0.75};
			moveOffGear = 1;
			neutralString = "N";
			reverseString = "R";
			TransmissionRatios[] = {"High",6};
		};
		changeGearType = "rpmratio";
		changeGearOmegaRatios[] = {1,0.294118,0.205882,0.147059,0.926471,0.270588,0.764706,0.352941,0.852941,0.5,1,0.647059};
		
		
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.2; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 0.7; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 0.5; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
           
           turnDecreaseConst  = 0.8; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.6; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.6; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.2; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
	   
	   class Turrets;
	};
	class rhsusf_m1151_GPK_base: rhsusf_m1151_base
	{
		class Turrets: Turrets
		{
			class GPK_Turret;
		};
	};
	
	class rhsusf_M1151_GPK_M2_base: rhsusf_m1151_GPK_base
	{
		class Turrets: Turrets
		{
			class GPK_Turret: GPK_Turret
			{
				weapons[] = {"UK3CB_BAF_Safe","UK3CB_BAF_Landrover_L111A1"};
				magazines[] = {"UK3CB_BAF_127_100Rnd"};
			};
		};
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_127_100Rnd";
				count = 4;
			};
		};
		class emptyclass
		{};
		class Transportitems: emptyclass
		{};
		class TransportWeapons: emptyclass
		{};
		class TransportBackpacks: emptyclass
		{};
	};
	
	class rhsusf_M1151_M2_LRAS3_base: rhsusf_M1151_GPK_M2_base
	{
		class Turrets: Turrets
		{
			class GPK_Turret: GPK_Turret
			{
			};
			class Turret_Weapon: GPK_Turret
			{
				//no safe mode for this, because the firemode button switches between the gun and the optic
				weapons[] = {"UK3CB_BAF_Landrover_L111A1"};
				magazines[] = {"UK3CB_BAF_127_100Rnd"};
			};
		};
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_127_100Rnd";
				count = 4;
			};
		};
		class emptyclass
		{};
		class Transportitems: emptyclass
		{};
		class TransportWeapons: emptyclass
		{};
		class TransportBackpacks: emptyclass
		{};
	};
	
	class rhsusf_M1151_GPK_MK19_base: rhsusf_m1151_GPK_base
	{
		class Turrets: Turrets
		{
			class GPK_Turret: GPK_Turret
			{
				weapons[] = {"UK3CB_BAF_Safe","UK3CB_BAF_Landrover_L134A1"};
				magazines[] = {"UK3CB_BAF_32Rnd_40mm_G_Box"};
			};
		};
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_32Rnd_40mm_G_Box";
				count = 4;
			};
		};
		class emptyclass
		{};
		class Transportitems: emptyclass
		{};
		class TransportWeapons: emptyclass
		{};
		class TransportBackpacks: emptyclass
		{};
	};
	
	class rhsusf_M1151_GPK_M240_base: rhsusf_m1151_GPK_base
	{
		class Turrets: Turrets
		{
			class GPK_Turret: GPK_Turret
			{
				weapons[] = {"UK3CB_BAF_Safe","UK3CB_BAF_Landrover_L7A2_1"};
				magazines[] = {"UK3CB_BAF_762_200Rnd_T"};
			};
		};
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_762_200Rnd_T";
				count = 7;
			};
		};
		class emptyclass
		{};
		class Transportitems: emptyclass
		{};
		class TransportWeapons: emptyclass
		{};
		class TransportBackpacks: emptyclass
		{};
	};
	
	class rhsusf_M1151_OGPK_base: rhsusf_m1151_GPK_base
	{
		
		class Turrets: Turrets
		{
			class OGPK_Turret;
		};
	};
	
	class rhsusf_M1151_OGPK_M2_base: rhsusf_M1151_OGPK_base
	{
		class Turrets: Turrets
		{
			class OGPK_Turret: OGPK_Turret
			{
				weapons[] = {"UK3CB_BAF_Safe","UK3CB_BAF_Landrover_L111A1"};
				magazines[] = {"UK3CB_BAF_127_100Rnd"};
			};
		};
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_127_100Rnd";
				count = 4;
			};
		};
		class emptyclass
		{};
		class Transportitems: emptyclass
		{};
		class TransportWeapons: emptyclass
		{};
		class TransportBackpacks: emptyclass
		{};
	};
	
	class rhsusf_M1151_OGPK_Mk19_base: rhsusf_M1151_OGPK_base
	{
		class Turrets: Turrets
		{
			class OGPK_Turret: OGPK_Turret
			{
				weapons[] = {"UK3CB_BAF_Safe","UK3CB_BAF_Landrover_L134A1"};
				magazines[] = {"UK3CB_BAF_32Rnd_40mm_G_Box"};
			};
		};
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_32Rnd_40mm_G_Box";
				count = 4;
			};
		};
		class emptyclass
		{};
		class Transportitems: emptyclass
		{};
		class TransportWeapons: emptyclass
		{};
		class TransportBackpacks: emptyclass
		{};
	};
	
	class rhsusf_M1151_OGPK_M240_base: rhsusf_M1151_OGPK_base
	{
		class Turrets: Turrets
		{
			class OGPK_Turret: OGPK_Turret
			{
				weapons[] = {"UK3CB_BAF_Safe","UK3CB_BAF_Landrover_L7A2_1"};
				magazines[] = {"UK3CB_BAF_762_200Rnd_T"};
			};
		};
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_762_200Rnd_T";
				count = 7;
			};
		};
		class emptyclass
		{};
		class Transportitems: emptyclass
		{};
		class TransportWeapons: emptyclass
		{};
		class TransportBackpacks: emptyclass
		{};
	};
	/*
	class rhsusf_m1025_w_mk19: rhsusf_m1025_w_m2
	{
		class Turrets: Turrets
		{
			class M2_Turret: M2_Turret
			{
				weapons[] = {"UK3CB_BAF_Safe","UK3CB_BAF_Landrover_L134A1"};
				magazines[] = {"UK3CB_BAF_32Rnd_40mm_G_Box"};
			};
		};
		class TransportMagazines
		{
			class _xx_40mm
			{
				magazine = "UK3CB_BAF_32Rnd_40mm_G_Box";
				count = 7;
			};
		};
		class Transportitems
		{};
		class TransportWeapons
		{};
		class TransportBackpacks
		{};
	};
	
	
	class CUP_B_Wolfhound_LMG_GB_D: CUP_Wolfhound_Base
	{
		class NewTurret;
		class Turrets: Turrets
		{
			class MainTurret: NewTurret
			{
				weapons[] = {"UK3CB_BAF_Safe","UK3CB_BAF_Landrover_L7A2_1"};
				magazines[] = {"UK3CB_BAF_762_200Rnd_T"};
			};
		};
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_762_200Rnd_T";
				count = 15;
			};
	*/
	class rhsusf_m998_w_2dr: rhsusf_hmmwe_base {
		minOmega = 10;
		clutchStrength = 3;
		antiRollbarForceLimit = 0;
		turnCoef = 3.5;
		class Wheels {
			class LF {
				frictionVsSlipGraph[] = {{ 0.1, 0.5 }, { 0.25, 0.4 }, { 0.5, 0.65 }};
				maxCompression = 0.3;
				maxDroop = 0.15;
				maxHandBrakeTorque = 1000;
				springDamperRate = 2500;
			//	springStrength = 45000;
				maxBrakeTorque = 3400;
				//sprungMass = 925;
			};
			class LR: LF {
				maxBrakeTorque = 3200;
				springStrength = 38000;
				springDamperRate = 4500;
				maxHandBrakeTorque = 1000;
			};
			class RF:LF {
				
			};
			class RR: RF {
				maxBrakeTorque = 3200;
				springStrength = 38000;
				springDamperRate = 4500;
				maxHandBrakeTorque = 1000;
			};
		};
		
		class complexGearbox {
			driveString = "D";
			gearBoxMode = "auto";
			GearboxRatios[] = {"R1",-3.07,"N",0,"D1",2.78,"D2",1.48,"D3",1,"D4",0.75};
			moveOffGear = 1;
			neutralString = "N";
			reverseString = "R";
			TransmissionRatios[] = {"High",6};
		};
		changeGearType = "rpmratio";
		changeGearOmegaRatios[] = {1,0.294118,0.205882,0.147059,0.926471,0.270588,0.764706,0.352941,0.852941,0.5,1,0.647059};
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.3; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 0.7; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 0.5; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
           
           turnDecreaseConst  = 0.8; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.6; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.6; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.2; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
	};
	
	class rhsusf_m998_w_4dr;
	class rhsusf_m998_w_4dr_halftop: rhsusf_m998_w_4dr {
	//	class Wheels;
	};
	class rhsusf_m998_w_4dr_fulltop: rhsusf_m998_w_4dr_halftop {
	//	class Wheels: Wheels {
	//		class LF;
	//	};
	};
	
	
	class rhsusf_m1025_w: rhsusf_m998_w_4dr_fulltop {
		antiRollbarForceLimit = 0;
		minOmega = 10;
		clutchStrength = 3;
		turnCoef = 3.5;
	//	peakTorque = 750;
	//	enginePower = 300;
		class Wheels {
			class LF {
				frictionVsSlipGraph[] = {{ 0.1, 0.5 }, { 0.25, 0.4 }, { 0.5, 0.65 }};
				maxCompression = 0.3;
				maxDroop = 0.15;
				maxHandBrakeTorque = 3000;
				springDamperRate = 4200;
			//	springStrength = 50000;
				maxBrakeTorque = 4000;
				latStiffY = 110;
				longitudinalStiffnessPerUnitGravity = 20000;
				//sprungMass = 925;
			};
			class LR: LF {
				maxBrakeTorque = 3200;
				springStrength = 35000;
				springDamperRate = 6000;
				maxHandBrakeTorque = 3000;
			};
			class RF:LF {
				
			};
			class RR: RF {
				maxBrakeTorque = 3200;
				springStrength = 35000;
				springDamperRate = 6000;
				maxHandBrakeTorque = 3000;
			};
		};
		
		class complexGearbox {
			driveString = "D";
			gearBoxMode = "auto";
			GearboxRatios[] = {"R1",-3.07,"N",0,"D1",2.78,"D2",1.48,"D3",1,"D4",0.75};
			moveOffGear = 1;
			neutralString = "N";
			reverseString = "R";
			TransmissionRatios[] = {"High",6};
		};
		changeGearType = "rpmratio";
		changeGearOmegaRatios[] = {1,0.294118,0.205882,0.147059,0.926471,0.270588,0.764706,0.352941,0.852941,0.5,1,0.647059};
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.4; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 0.7; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 0.5; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
           
           turnDecreaseConst  = 1.4; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.6; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.6; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.2; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
		class Turrets;
		
	};

	
	class rhsusf_m1043_w: rhsusf_m1025_w {
		minOmega = 10;
		clutchStrength = 3;
		class Wheels:Wheels {
			class LF:LF {
				frictionVsSlipGraph[] = {{ 0.1, 0.5 }, { 0.25, 0.4 }, { 0.5, 0.65 }};
				maxCompression = 0.3;
				maxDroop = 0.15;
				dampingRateDestroyed = 1000000.0;
				maxHandBrakeTorque = 30000;
				springDamperRate = 4000;
				springStrength = 40000;
				maxBrakeTorque = 4000;
				latStiffY = 110;
				//sprungMass = 925;
			};
			class LR: LF {
				maxBrakeTorque = 3200;
			};
			class RF:LF {
				
			};
			class RR: RF {
				maxBrakeTorque = 3200;
			};
		};
		
		class complexGearbox {
			driveString = "D";
			gearBoxMode = "auto";
			GearboxRatios[] = {"R1",-3.07,"N",0,"D1",2.78,"D2",1.48,"D3",1,"D4",0.75};
			moveOffGear = 1;
			neutralString = "N";
			reverseString = "R";
			TransmissionRatios[] = {"High",6};
		};
		changeGearType = "rpmratio";
		changeGearOmegaRatios[] = {1,0.294118,0.205882,0.147059,0.926471,0.270588,0.764706,0.352941,0.852941,0.5,1,0.647059};
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.3; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 0.7; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 0.5; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
           
           turnDecreaseConst  = 0.8; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.6; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.6; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.2; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
		class Turrets;
		
	};
	
	class rhsusf_m1025_w_m2: rhsusf_m1025_w
	{
		class Turrets: Turrets
		{
			class MainTurret;
			class M2_Turret: MainTurret
			{
				weapons[] = {"UK3CB_BAF_Safe","UK3CB_BAF_Landrover_L111A1"};
				magazines[] = {"UK3CB_BAF_127_100Rnd"};
			};
		};
		class TransportMagazines
		{
			class _xx_127
			{
				magazine = "UK3CB_BAF_127_100Rnd";
				count = 7;
			};
		};
		class Transportitems
		{};
		class TransportWeapons
		{};
		class TransportBackpacks
		{};
		maximumLoad = 4000;
	};
	
	class rhsusf_m1025_w_mk19: rhsusf_m1025_w_m2
	{
		class Turrets: Turrets
		{
			class M2_Turret: M2_Turret
			{
				weapons[] = {"UK3CB_BAF_Safe","UK3CB_BAF_Landrover_L134A1"};
				magazines[] = {"UK3CB_BAF_32Rnd_40mm_G_Box"};
			};
		};
		class TransportMagazines
		{
			class _xx_40mm
			{
				magazine = "UK3CB_BAF_32Rnd_40mm_G_Box";
				count = 7;
			};
		};
		class Transportitems
		{};
		class TransportWeapons
		{};
		class TransportBackpacks
		{};
	};
		
	class rhsusf_m966_w: rhsusf_m1025_w
	{
		class Turrets: Turrets
		{
			class mainturret;
			class Tow_Turret: mainturret
			{
				magazines[] = {"rhs_mag_TOW2A","rhs_mag_TOW2A","rhs_mag_TOW2A","rhs_mag_TOW2A","rhs_mag_TOW2A","rhs_mag_TOW2A","rhs_mag_TOW2A"};
			};
		};
	};
	
	
	class StaticWeapon;
	class StaticATWeapon: StaticWeapon
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	
	class RHS_TOW_TriPod_base: StaticATWeapon
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				magazines[] = {"rhs_mag_TOW2A", "rhs_mag_TOW2A", "rhs_mag_TOW2A"};
			};
		};
	};
	class RHS_KORD_Base;
	class RHS_KORD_high_base: RHS_KORD_Base
	{
		class Turrets;
	};
	
	class rhs_KORD_high_VMF: RHS_KORD_high_base
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	
	class twc_KORD_high_20mm: rhs_KORD_high_VMF
	{
		displayName = "KORD (20MM)";
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				magazines[] = {"200Rnd_20mm_G_belt", "200Rnd_20mm_G_belt", "200Rnd_20mm_G_belt"};
				weapons[] = {"twc_rhs_weap_kord_20"};
			};
		};
	};
	
	//class rhs_KORD_high_VMF;
	
	class UK3CB_BAF_LandRover_Base;

	class UK3CB_BAF_LandRover_WMIK_Base: UK3CB_BAF_LandRover_Base {
		class EventHandlers;
	};

	
	class Heli_Attack_01_base_F;
	class RHS_AH64_base: Heli_Attack_01_base_F {
		class hitpoints {
			class HitHRotor;
		};
		
	};
	
	class RHS_AH64D: RHS_AH64_base
	{
		armor = 70;
		armorStructural = 200;
		cyclicAsideForceCoef = 1.6;
		cyclicForwardForceCoef = 1.4;
		backRotorForceCoef = 1;
		liftForceCoef = 0.9;

		class hitpoints: hitpoints
		{
			class HitHRotor: HitHRotor
			{
				armor = 2;
			};
		};
	};
	
	class rhsusf_mrzr_base: MRAP_01_base_F {
		
		ace_cargo_size = 25;
		ace_cargo_canLoad = 1;
		ace_cargo_hasCargo = 1;
		ace_cargo_space = 2;
		antiRollbarForceCoef = 0;
		antiRollbarForceLimit = 0;
		differentialType = "all_limited";
		dampingRateZeroThrottleClutchEngaged = 0.1;
		dampingRateZeroThrottleClutchDisEngaged = 0.1;
		clutchstrength = 3;
		turnCoef = 4;
		maxSpeed = 96;
		normalSpeedForwardCoef = 1.1;
		maxOmega = 937.76;
		latency = 0.4;
		torqueCurve[] = {{0.125,0.9},{0.25,0.8},{0.375,0.831579},{0.5,0.884211},{0.625,0.989474},{0.75,1.042105},{0.875,1.2},{1.12513,0}};
		peakTorque = 160;
		
		//4wd section
		frontBias = 5;
		centerBias = 0.2;
		frontRearSplit = 0.3;
		rearBias = 0.1;
	
		//rwd section
	//	frontBias = 0;
	//	centerBias = 0;
	//	frontRearSplit = 1;
	//	rearBias = 0.5;
		//
		
		class Wheels {
			class LF {
				frictionVsSlipGraph[] = {{ 0.0, 0.42 }, { 0.7, 0.38 }, { 0.8, 0.7 }};
				latStiffX = 180;
				latStiffY = 90;
				longitudinalStiffnessPerUnitGravity = 30000;
				maxCompression = 0.31;
				maxDroop = 0.04;
				maxHandBrakeTorque = 0;
				springDamperRate = 2000;
				springStrength = 15000;
				maxBrakeTorque = 300;
			};
			class RF:LF {
				maxBrakeTorque = 300;
			};
			class RR: RF {
				maxCompression = 0.31;
				springDamperRate = 2300;
				springStrength = 24000;
				maxHandBrakeTorque = 20000;
				maxBrakeTorque = 1150;
				//maxBrakeTorque = 2700;
			};
			class LR: LF {
				maxCompression = 0.31;
				springDamperRate = 2300;
				springStrength = 24000;
				maxHandBrakeTorque = 20000;
				maxBrakeTorque = 1150;
				//maxBrakeTorque = 2700;
			};
			
		};
		class complexGearbox {
			driveString = "D";
			gearBoxMode = "auto";
			GearboxRatios[] = {"R1",-4.47,"N",0,"D",1.05};
			moveOffGear = 1;
			neutralString = "N";
			reverseString = "R";
			TransmissionRatios[] = {"High",6.8};
		};
		
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.7; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 0.4; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 1.0; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
           
           turnDecreaseConst  = 1.4; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.4; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.3; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.1; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
		
	};
	
	class UK3CB_BAF_LandRover_WMIK_GPMG_Base: UK3CB_BAF_LandRover_WMIK_Base {
		class EventHandlers: EventHandlers {
			init = " if (!isServer) exitWith {};			_car = (_this select 0);			_obj = 'fuel_can' createvehicle [0,0,0];		_obj attachto [_car, [0.85,0.28,-0.8]];			_obj setVectorDirAndUp [[1,0,0.2],[0,0,1]];				[_obj, 20] call ace_refuel_fnc_makeSource;	[_obj, true, [0, 1, 0], 10] call ace_dragging_fnc_setCarryable;	_obj = 'fuel_can' createvehicle [0,0,0];		_obj attachto [_car, [0.85,-0.2,-0.8]];		_obj setVectorDirAndUp [[1,0,0.2],[0,0,1]];					[_obj, 20] call ace_refuel_fnc_makeSource;		[_obj, true, [0, 1, 0], 10] call ace_dragging_fnc_setCarryable;		_car animate ['sparewheel_hide', 1];		_car animate ['gear_hide', 1];		 _obj = 'fuel_can' createvehicle [0,0,0];  _obj attachto [_car, [-1.11,-1.7,-1.5]];   _obj setVectorDirAndUp [[1,0,0],[0,0,1]];				[_obj, 20] call ace_refuel_fnc_makeSource;		[_obj, true, [0, 1, 0], 10] call ace_dragging_fnc_setCarryable;			  _obj = 'ace_wheel' createvehicle [0,0,0];  _obj attachto [_car, [-0.1,2.95,-1.4]];   _obj setVectorDirAndUp [[0,-0.1,1],[0,1,0]]; 		 _obj = 'ace_wheel' createvehicle [0,0,0];  _obj attachto [_car, [-1.1,-0.2,-0.8]];   _obj setVectorDirAndUp [[0.2,0,1],[0,0,1]];		 _obj = 'ace_wheel' createvehicle [0,0,0];  _obj attachto [_car, [-1.1,-1.3,-0.7]];   _obj setVectorDirAndUp [[0.2,0,1],[0,0,1]]; 		";
			
			killed = " {deletevehicle _x} foreach (attachedobjects (_this select 0))";
		};
	};

	class UK3CB_BAF_LandRover_WMIK_HMG_Base: UK3CB_BAF_LandRover_WMIK_Base {
		class EventHandlers: EventHandlers {
			init = " if (!isServer) exitWith {};			_car = (_this select 0);			_obj = 'fuel_can' createvehicle [0,0,0];		_obj attachto [_car, [0.85,0.28,-0.7]];			_obj setVectorDirAndUp [[1,0,0.2],[0,0,1]];				[_obj, 20] call ace_refuel_fnc_makeSource;	[_obj, true, [0, 1, 0], 10] call ace_dragging_fnc_setCarryable;	_obj = 'fuel_can' createvehicle [0,0,0];		_obj attachto [_car, [0.85,-0.2,-0.7]];		_obj setVectorDirAndUp [[1,0,0.2],[0,0,1]];					[_obj, 20] call ace_refuel_fnc_makeSource;		[_obj, true, [0, 1, 0], 10] call ace_dragging_fnc_setCarryable;		_car animate ['sparewheel_hide', 1];		_car animate ['gear_hide', 1];		 _obj = 'fuel_can' createvehicle [0,0,0];  _obj attachto [_car, [-1.11,-1.7,-1.4]];   _obj setVectorDirAndUp [[1,0,0],[0,0,1]];				[_obj, 20] call ace_refuel_fnc_makeSource;		[_obj, true, [0, 1, 0], 10] call ace_dragging_fnc_setCarryable;			  _obj = 'ace_wheel' createvehicle [0,0,0];  _obj attachto [_car, [-0.1,2.95,-1.3]];   _obj setVectorDirAndUp [[0,-0.1,1],[0,1,0]]; 		 _obj = 'ace_wheel' createvehicle [0,0,0];  _obj attachto [_car, [-1.1,-0.2,-0.7]];   _obj setVectorDirAndUp [[0.2,0,1],[0,0,1]];		 _obj = 'ace_wheel' createvehicle [0,0,0];  _obj attachto [_car, [-1.1,-1.3,-0.6]];   _obj setVectorDirAndUp [[0.2,0,1],[0,0,1]]; 		";
			killed = " {deletevehicle _x} foreach (attachedobjects (_this select 0))";
		};
	};

	class UK3CB_BAF_LandRover_WMIK_GMG_Base: UK3CB_BAF_LandRover_WMIK_Base {
		class EventHandlers: EventHandlers {
			init = " if (!isServer) exitWith {};			_car = (_this select 0);			_obj = 'fuel_can' createvehicle [0,0,0];		_obj attachto [_car, [0.85,0.28,-0.7]];			_obj setVectorDirAndUp [[1,0,0.2],[0,0,1]];				[_obj, 20] call ace_refuel_fnc_makeSource;	[_obj, true, [0, 1, 0], 10] call ace_dragging_fnc_setCarryable;	_obj = 'fuel_can' createvehicle [0,0,0];		_obj attachto [_car, [0.85,-0.2,-0.7]];		_obj setVectorDirAndUp [[1,0,0.2],[0,0,1]];					[_obj, 20] call ace_refuel_fnc_makeSource;		[_obj, true, [0, 1, 0], 10] call ace_dragging_fnc_setCarryable;		_car animate ['sparewheel_hide', 1];		_car animate ['gear_hide', 1];		 _obj = 'fuel_can' createvehicle [0,0,0];  _obj attachto [_car, [-1.11,-1.7,-1.4]];   _obj setVectorDirAndUp [[1,0,0],[0,0,1]];				[_obj, 20] call ace_refuel_fnc_makeSource;		[_obj, true, [0, 1, 0], 10] call ace_dragging_fnc_setCarryable;			  _obj = 'ace_wheel' createvehicle [0,0,0];  _obj attachto [_car, [-0.1,2.95,-1.3]];   _obj setVectorDirAndUp [[0,-0.1,1],[0,1,0]]; 		 _obj = 'ace_wheel' createvehicle [0,0,0];  _obj attachto [_car, [-1.1,-0.2,-0.7]];   _obj setVectorDirAndUp [[0.2,0,1],[0,0,1]];		 _obj = 'ace_wheel' createvehicle [0,0,0];  _obj attachto [_car, [-1.1,-1.3,-0.6]];   _obj setVectorDirAndUp [[0.2,0,1],[0,0,1]]; 		";
			killed = " {deletevehicle _x} foreach (attachedobjects (_this select 0))";
		};
	};

	class UK3CB_BAF_LandRover_Snatch_Base: UK3CB_BAF_LandRover_Base {
		class EventHandlers: EventHandlers {
			init = " if (!isServer) exitWith {};			_car = (_this select 0);			_obj = 'ace_wheel' createvehicle [0,0,0];  _obj attachto [_car, [0,2.65,-0.9]];   _obj setVectorDirAndUp [[0,0,1],[0,1,0]]; _car animate ['sparewheel_hide', 1];	";
			killed = " {deletevehicle _x} foreach (attachedobjects (_this select 0))";
		};
	};
	
	class UK3CB_BAF_LandRover_Hard_Base: UK3CB_BAF_LandRover_Base {
		class EventHandlers: EventHandlers {
			init = " if (!isServer) exitWith {};			_car = (_this select 0);		_car animate ['sparewheel_hide', 1];		_obj = 'ace_wheel' createvehicle [0,0,0];  _obj attachto [_car, [-1.05,-0.25,-0.35]];   _obj setVectorDirAndUp [[0.1,0,1],[0,0,1]]; 	";
			killed = " {deletevehicle _x} foreach (attachedobjects (_this select 0))";
		};
	};
	class UK3CB_BAF_LandRover_Hard_FFR_Green_A;
	class UK3CB_BAF_LandRover_Hard_FFR_Green_A_TWCBaseRadio: UK3CB_BAF_LandRover_Hard_FFR_Green_A {
		displayname = "Land Rover TWC Base Radio";
		class AcreRacks {
			class Rack_1 {
				displayName = "Dash"; // Name is displayed in the interaction menu.
				shortName = "Dash";
				componentName = "ACRE_VRC103";
				allowedPositions[] = {"inside", "external"}; // Who has access. "inside" - anyone inside, "external" - provides access upto 10m away, "driver", "gunner", "copilot", "commander"
				disabledPositions[] = {};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F"; // Predefined mounted radio
				isRadioRemovable = 0;
			};
		};

		class AcreIntercoms {};
	};
	
	class UK3CB_BAF_LandRover_WMIK_HMG_FFR_Green_A;
	class UK3CB_BAF_LandRover_WMIK_HMG_FFR_Green_A_TWC: UK3CB_BAF_LandRover_WMIK_HMG_FFR_Green_A {
		displayname = "Land Rover WMIK HMG (Uprated)";
		maximumLoad = 5000;
		enginePower = 140;
		peakTorque = 550;
		maxSpeed = 230;
		torqueCurve[] = { { 0.0, 0.85 }, { 0.6, 1.8 }, { 1.0, 0.6 } };
		class AcreRacks {
			class Rack_1 {
				displayName = "Dash"; // Name is displayed in the interaction menu.
				shortName = "Dash";
				componentName = "ACRE_VRC103";
				allowedPositions[] = {"inside", "external"}; // Who has access. "inside" - anyone inside, "external" - provides access upto 10m away, "driver", "gunner", "copilot", "commander"
				disabledPositions[] = {};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F"; // Predefined mounted radio
				isRadioRemovable = 0;
			};
		};

		class AcreIntercoms {};
		class transportWeapons {
			class _xx_law {
				weapon = "rhs_weap_m72a7";
				count = 2;
			};

			class _xx_tripod {
				weapon = "UK3CB_BAF_Tripod";
				count = 1;
			};
		};

		class transportMagazines {
			class _xx_stanag {
				magazine = "UK3CB_BAF_556_30Rnd";
				count = 25;
			};
			class _xx_stanagTracer {
				magazine = "UK3CB_BAF_556_30Rnd_T";
				count = 15;
			};
			class _xx_pistolmag
			{
				magazine = "rhsusf_mag_17Rnd_9x19_JHP";
				count = 10;
			};
			class _xx_stanag_box
			{
				magazine = "UK3CB_BAF_556_200Rnd";
				count = 10;
			};
			class _xx_stanag_boxTracer
			{
				magazine ="UK3CB_BAF_556_200Rnd_T";
				count = 7;
			};
			class _xx_127_box
			{
				magazine = "UK3CB_BAF_127_100Rnd";
				count = 6;
			};
			class _xx_762_belt
			{
				magazine = "UK3CB_BAF_762_100Rnd";
				count = 10;
			};
			class _xx_762_beltTracer
			{
				magazine = "UK3CB_BAF_762_100Rnd_T";
				count = 3;
			};
			class _xx_762_mag
			{
				magazine = "UK3CB_BAF_762_L42A1_20Rnd";
				count = 10;
			};
			class _xx_762_magTracer
			{
				magazine = "UK3CB_BAF_762_L42A1_20Rnd_T";
				count = 5;
			};
			class _xx_1rnd_he
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 20;
			};
			class _xx_1rnd_smoke
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 5;
			};
			class _xx_handgrenade
			{
				magazine = "CUP_HandGrenade_L109A2_HE";
				count = 5;
			};
			class _xx_smokeshell
			{
				magazine = "SmokeShell";
				count = 5;
			};
			class _xx_smokeshell_red
			{
				magazine = "SmokeShellRed";
				count = 2;
			};
			class _xx_smokeshell_blue
			{
				magazine = "SmokeShellBlue";
				count = 2;
			};
		};
		class transportItems
		{
			class _xx_defusalkit
			{
				name = "ACE_DefusalKit";
				count = 2;
			};
			class _xx_shovel
			{
				name = "ACE_EntrenchingTool";
				count = 2;
			};
			class _xx_cabletie
			{
				name = "ACE_CableTie";
				count = 10;
			};
			class _xx_tourniquet
			{
				name = "ACE_tourniquet";
				count = 15;
			};
			class _xx_fieldDressing
			{
				name = "ACE_fieldDressing";
				count = 25;
			};
			class _xx_packingBandage
			{
				name = "ACE_packingBandage";
				count = 25;
			};
			class _xx_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 25;
			};
			class quickclot
			{
				name = "ACE_quickclot";
				count = 25;
			};
			class morphine
			{
				name = "ACE_morphine";
				count = 20;
			};
			class epinephrine
			{
				name = "ACE_epinephrine";
				count = 10;
			};
			class saline_250
			{
				name = "ACE_salineIV_250";
				count = 20;
			};
			class saline
			{
				name = "ACE_salineIV_500";
				count = 20;
			};
		};
		
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.5; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 1.0; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 1.0; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
             
           turnDecreaseConst  = 5.0; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 3.0; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.0; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.7; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
	};	
	
	/*
	class car_F: Car
    {
        class Components;
        explosionEffect = "";
        // class ViewOptics;
        class HitPoints
        {
            class HitLFWheel;
            class HitLBWheel;
            class HitLMWheel;
            class HitLF2Wheel;
            class HitRFWheel;
            class HitRBWheel;
            class HitRMWheel;
            class HitRF2Wheel;
            class HitGlass1;
            class HitGlass2;
            class HitGlass3;
            class HitGlass4;
            class HitGlass5;
            class HitGlass6;
            class HitFuel;
            class HitEngine;
            class HitHull;
        };
        class NewTurret;
        class Turrets
        {
            class MainTurret: NewTurret
            {
                class Components;
                class ViewGunner;
                // class ViewOptics;
                class HitPoints;
            };
        };
        class AnimationSources;
       
        class Sounds;
    };
    class Wheeled_APC: car_F{
        explosionEffect = "";
    };
    
	
    class CUP_HMMWV_Base: Car_F
    {
        tf_hasLRradio_api = 1;
        faction = "rhs_faction_usmc_wd";
        class HitEngine
            {
                class DestructionEffects
                {
                    ammoExplosionEffect = "";
                    class RHS_Engine_Smoke
                    {
                            simulation = "particles";
                            type = "SmallWreckSmoke";
                            position = "engine_smoke1";
                            intensity = 0.5;
                            interval = 1;
                            lifeTime = 60;
                    };
                    class RHS_Engine_Fire: RHS_Engine_Smoke
                    {
                            type = "SmallFireFPlace";
                    };
                    class RHS_Engine_Sparks: RHS_Engine_Smoke
                    {
                            type = "FireSparks";
                    };
                    class RHS_Engine_Sounds: RHS_Engine_Smoke
                    {
                            simulation = "sound";
                            type = "Fire";
                    };
                    class RHS_Engine_Smoke_small1: RHS_Engine_Smoke
                    {
                            type = "WeaponWreckSmoke";
                            position = "engine_smoke2";
                    };
                    class RHS_Engine_Smoke_small2: RHS_Engine_Smoke_small1
                    {
                            position = "engine_smoke3";
                    };
                };
            };
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] = {"BN_RHS_M2"};
                magazines[] = {"rhs_mag_100rnd_127x99_mag"};
            };
        };
    };
   
   
    class CUP_HMMWV_Crows_M2_Base: CUP_HMMWV_Base
    {
        cargoAction[] = {"RHS_HMMWV_Cargo","RHS_HMMWV_Cargo"};
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                turretInfoType = "RscWeaponRangeZeroing";
                discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
                discreteDistanceInitIndex = 5;
                weapons[] = {"tu_CUP_Vhmg_M2_CROWS_gunner","SmokeLauncher"};
                magazines[] = {"rhs_mag_100rnd_127x99_mag","rhs_mag_100rnd_127x99_mag","rhs_mag_100rnd_127x99_mag","rhs_mag_100rnd_127x99_mag","rhs_mag_100rnd_127x99_mag","rhs_mag_100rnd_127x99_mag","SmokeLauncherMag"};
            };
        };
	};
*/