
class CfgVehicles {
	/*class B_TargetSoldier ;
	class CBA_B_InvisibleTarget : B_TargetSoldier 
	{
		class EventHandlers {
			init = " systemchat 'normal';if (!isServer) exitWith {};params ['_entity'];[_entity] spawn twc_fnc_baseobject";
		};
	};
	*/
	
	class CUP_B_USArmy_Soldier_01;
	class CUP_CRYE_MCAM_RUS_Full: CUP_B_USArmy_Soldier_01
	{
		modelSides[] = {3,2,1,0};
	};
	class CUP_CRYE_MCAM_RUS_Roll: CUP_B_USArmy_Soldier_01
	{
		modelSides[] = {3,2,1,0};
	};
	class CUP_CRYE_MCAM_RUS2_Full: CUP_B_USArmy_Soldier_01
	{
		modelSides[] = {3,2,1,0};
	};
	class CUP_CRYE_MCAM_RUS2_Roll: CUP_B_USArmy_Soldier_01
	{
		modelSides[] = {3,2,1,0};
	};
	
	class UK3CB_BAF_B_Bergen_MTP_Rifleman_XL_A;
	class TWC_BAF_B_Bergen_OLI_Rifleman_XL_A: UK3CB_BAF_B_Bergen_MTP_Rifleman_XL_A
	{
		displayname = "Bergen XL (Olive)";
		hiddenSelectionsTextures[] = {"uk3cb_baf_equipment\backpacks\data\backpack_oli_co.paa"};
		hiddenSelectionsMaterials[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_us.rvmat"};
	};
	

	class MRAP_01_base_F;
	class UK3CB_BAF_Panther_Base: MRAP_01_base_F {
		class Wheels {
			class LF {
				boneName = "wheel_1_1";
				boundary = "wheel_1_1_bound";
				center = "wheel_1_1_axis";
				dampingRate = 0.1;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 1000;
				frictionVsSlipGraph[] = {{ 0.0, 0.8 }, { 0.3, 0.6 }, { 1.0, 0.5 }};
				latStiffX = 25;
				latStiffY = 180;
				longitudinalStiffnessPerUnitGravity = 5000;
				mass = 30;
				maxBrakeTorque = 4500;
				maxCompression = 0.3;
				maxDroop = 0.05;
				maxHandBrakeTorque = 0;
				moi = 40.5;
				side = "left";
				springDamperRate = 4500;
				springStrength = 36000;
				sprungMass = 2625;
				steering = 1;
				suspForceAppPointOffset = "wheel_1_1_axis";
				suspTravelDirection[] = {0,-1,0};
				tireForceAppPointOffset = "wheel_1_1_axis";
				width = "0.2";
			};
		};
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.2; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 0.5; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 0.5; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
           
           turnDecreaseConst  = 1.3; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.8; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.1; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.4; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
	};
	class UK3CB_BAF_Husky_Base: MRAP_01_base_F {
		crewVulnerable = 1;
		frontRearSplit = 0.5;
		frontBias = 1.1;
		rearBias = 0.5;
		centreBias = 1;
		torqueCurve[] = { { 0.0, 0.55 }, { 0.6, 0.8 }, { 1.0, 0.4 } };
		class Wheels {
			class LF {
				boneName = "wheel_1_1";
				boundary = "wheel_1_1_bound";
				center = "wheel_1_1_axis";
				dampingRate = 0.1;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 1000;
				frictionVsSlipGraph[] = {{ 0.1, 0.4 }, { 0.25, 0.2 }, { 0.5, 0.35 }};
				latStiffX = 25;
				latStiffY = 180;
				longitudinalStiffnessPerUnitGravity = 5000;
				mass = 30;
				maxBrakeTorque = 4100;
				maxCompression = 0.3;
				maxDroop = 0.05;
				maxHandBrakeTorque = 4500;
				moi = 40.5;
				side = "left";
				springDamperRate = 4700;
				springStrength = 32000;
				sprungMass = 2925;
				steering = 1;
				suspForceAppPointOffset = "wheel_1_1_axis";
				suspTravelDirection[] = {0,-1,0};
				tireForceAppPointOffset = "wheel_1_1_axis";
				width = "0.2";
			};
		};
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.2; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 0.5; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 0.5; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
           
           turnDecreaseConst  = 1.3; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.8; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.1; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.4; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
	};
	
	class Truck_F;
	class Truck_01_base_F: Truck_F
	{
		class wheels;
		class complexgearbox;
	};
	class CUP_Ural_BaseTurret: Truck_F
	{
		clutchStrength = 10;
		differentialType = "all_limited";
		frontRearSplit = 0.3;
		frontBias = 1.1;
		rearBias = 0.5;
		centreBias = 2;
		maxspeed = 81;
		torqueCurve[] = { { 0.0, 0.55 }, { 0.6, 0.8 }, { 1.0, 0.4 } };
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				boundary = "wheel_1_1_bound";
				center = "wheel_1_1_axis";
				dampingRate = 0.1;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 1000;
				frictionVsSlipGraph[] = { { 0.0, 0.8 }, { 0.2, 0.5 }, { 1.0, 0.3 } };
				latStiffX = 3.5;
				latStiffY = 18;
				longitudinalStiffnessPerUnitGravity = 4582;
				mass = 90;
				maxBrakeTorque = 5000;
				maxCompression = 0.4;
				MaxDroop = 0.22;
				maxHandBrakeTorque = 2000;
				MOI = 70;
				side = "left";
				springDamperRate = 8000;
				springStrength = 70000;
				sprungMass = 2750;
				steering = 1;
				suspForceAppPointOffset = "wheel_1_1_axis";
				suspTravelDirection[] = {0,-0.8,0};
				tireForceAppPointOffset = "wheel_1_1_axis";
				width = "0.2";
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				boundary = "wheel_1_2_bound";
				center = "wheel_1_2_axis";
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 5000;
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
			};
			class LR2: LR
			{
				boneName = "wheel_1_3_damper";
				boundary = "wheel_1_3_bound";
				center = "wheel_1_3_axis";
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 5000;
				suspForceAppPointOffset = "wheel_1_3_axis";
				tireForceAppPointOffset = "wheel_1_3_axis";
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				boundary = "wheel_2_1_bound";
				center = "wheel_2_1_axis";
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 5000;
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				side = "right";
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				boundary = "wheel_2_2_bound";
				center = "wheel_2_2_axis";
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 5000;
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
			};
			class RR2: RR
			{
				boneName = "wheel_2_3_damper";
				boundary = "wheel_2_3_bound";
				center = "wheel_2_3_axis";
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 5000;
				suspForceAppPointOffset = "wheel_2_3_axis";
				tireForceAppPointOffset = "wheel_2_3_axis";
			};
		};
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.01; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 1.0; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 1.0; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
           
           turnDecreaseConst  = 0.9; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.2; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.0; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.4; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
	};
	
	class Van_01_base_F: Truck_F
	{
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				boundary = "wheel_1_1_bound";
				center = "wheel_1_1_axis";
				dampingRate = 0.1;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 1000;
				frictionVsSlipGraph[] = { { 0.0, 0.8 }, { 0.5, 0.5 }, { 1.0, 0.4 } };
				latStiffX = 3.5;
				latStiffY = 18;
				longitudinalStiffnessPerUnitGravity = 4582;
				mass = 90;
				maxBrakeTorque = 9000;
				maxCompression = 0.4;
				MaxDroop = 0.15;
				maxHandBrakeTorque = 1500;
				mMaxDroop = 0.15;
				MOI = 40;
				side = "left";
				springDamperRate = 4500;
				springStrength = 36000;
				sprungMass = 525;
				steering = 1;
				suspForceAppPointOffset = "wheel_1_1_axis";
				suspTravelDirection[] = {0,-0.8,0};
				tireForceAppPointOffset = "wheel_1_1_axis";
				width = "0.2";
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				boundary = "wheel_1_2_bound";
				center = "wheel_1_2_axis";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				boundary = "wheel_2_1_bound";
				center = "wheel_2_1_axis";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				side = "right";
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				boundary = "wheel_2_2_bound";
				center = "wheel_2_2_axis";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
			};
		};
	};
	class UK3CB_BAF_MAN_HX60_Base: Truck_01_base_F
	{
		antiRollbarForceCoef = 60;
		antiRollbarForceLimit = 5;
		antiRollbarSpeedMin = 5;
		antiRollbarSpeedMax = 100;
		centreBias = 1.3;
		rearBias = 1.3;
		frontBias = 3;
		frontRearSplit = 0.2;
		torqueCurve[] = {{0,0.1},{0.278,0.2},{0.35,0.35},{0.461,0.5},{0.7,0.45},{0.75,0.35},{0.8,0.3},{1,0.2}};
		class complexgearbox: complexgearbox
		{
			GearboxRatios[] = {"R1",-13.094,"N",0,"D1",3.562,"D2",2.856,"D3",2.223,"D4",1.678,"D5",1.078};
		};
		class wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				boundary = "wheel_1_1_bound";
				center = "wheel_1_1_axis";
				dampingRate = 0.1;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 2000;
				//frictionVsSlipGraph[] = { { 0.0, 0.65 }, { 0.2, 0.45 }, { 1.0, 0.4 } };
				//frictionVsSlipGraph[] = {{ 0.1, 0.5 }, { 0.25, 0.2 }, { 0.5, 0.45 }};
				frictionVsSlipGraph[] = {{ 0.1, 0.35 }, { 0.25, 0.2 }, { 0.5, 0.3 }};
				latStiffX = 25;
				latStiffY = 180;
				longitudinalStiffnessPerUnitGravity = 10000;
				mass = 100;
				maxBrakeTorque = 5500;
				maxCompression = 0.7;
				maxDroop = 0.1;
				maxHandBrakeTorque = 0;
				moi = 60;
				side = "left";
				springDamperRate = 3000;
				springStrength = 35000;
				sprungMass = 1750;
				steering = 1;
				suspForceAppPointOffset = "wheel_1_1_axis";
				suspTravelDirection[] = {0,-1,0};
				tireForceAppPointOffset = "wheel_1_1_axis";
				width = 0.35;
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				boundary = "wheel_2_1_bound";
				center = "wheel_2_1_axis";
				springDamperRate = 3000;
				springStrength = 35000;
				sprungMass = 1750;
				side = "right";
				maxBrakeTorque = 5500;
			};
			class RF2: RF
			{
				boneName = "wheel_2_2_damper";
				boundary = "wheel_2_2_bound";
				center = "wheel_2_2_axis";
				springDamperRate = 3000;
				maxCompression = 0.7;
				springStrength = 35000;
				maxHandBrakeTorque = 3000;
				maxBrakeTorque = 4000;
				sprungMass = 1750;
				steering = 0;
			};
			class LF2: LF
			{
				boneName = "wheel_1_2_damper";
				boundary = "wheel_1_2_bound";
				center = "wheel_1_2_axis";
				springDamperRate = 3000;
				maxCompression = 0.7;
				springStrength = 35000;
				sprungMass = 1750;
				maxHandBrakeTorque = 3000;
				maxBrakeTorque = 4000;
				steering = 0;
			};
		};
		
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.01; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 0.2; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 1.0; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
             
           turnDecreaseConst  = 0.9; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.7; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.0; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.2; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
	};
	
	class UK3CB_BAF_MAN_HX58_Base: UK3CB_BAF_MAN_HX60_Base
	{
		antiRollbarForceCoef = 60;
		antiRollbarForceLimit = 5;
		antiRollbarSpeedMin = 5;
		antiRollbarSpeedMax = 100;
		centreBias = 0.3;
		rearBias = 1.3;
		frontBias = 3;
		frontRearSplit = 0.2;
		class wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				boundary = "wheel_1_1_bound";
				center = "wheel_1_1_axis";
				dampingRate = 0.1;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 2000;
				//frictionVsSlipGraph[] = { { 0.0, 0.8 }, { 0.2, 0.5 }, { 1.0, 0.4 } };
				frictionVsSlipGraph[] = {{ 0.1, 0.4 }, { 0.25, 0.2 }, { 0.5, 0.35 }};
				latStiffX = 25;
				latStiffY = 180;
				longitudinalStiffnessPerUnitGravity = 10000;
				mass = 100;
				maxBrakeTorque = 5500;
				maxCompression = 0.7;
				maxDroop = 0.1;
				maxHandBrakeTorque = 0;
				moi = 60;
				side = "left";
				springDamperRate = 4000;
				springStrength = 26000;
				sprungMass = 1750;
				steering = 1;
				suspForceAppPointOffset = "wheel_1_1_axis";
				suspTravelDirection[] = {0,-1,0};
				tireForceAppPointOffset = "wheel_1_1_axis";
				width = 0.35;
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				boundary = "wheel_2_1_bound";
				center = "wheel_2_1_axis";
				springDamperRate = 4000;
				springStrength = 24000;
				sprungMass = 1750;
				maxBrakeTorque = 5500;
				side = "right";
			};
			class RF2: RF
			{
				boneName = "wheel_2_2_damper";
				boundary = "wheel_2_2_bound";
				center = "wheel_2_2_axis";
				springDamperRate = 4000;
				springStrength = 24000;
				maxCompression = 0.7;
				sprungMass = 1750;
				maxHandBrakeTorque = 3000;
				maxBrakeTorque = 5000;
				steering = 0;
			};
			class RM: RF2
			{
				boneName = "wheel_2_3_damper";
				boundary = "wheel_2_3_bound";
				center = "wheel_2_3_axis";
				springDamperRate = 4000;
				springStrength = 21000;
				maxCompression = 0.7;
				sprungMass = 1750;
				maxHandBrakeTorque = 3000;
				maxBrakeTorque = 5000;
			};
			class LF2: LF
			{
				boneName = "wheel_1_2_damper";
				boundary = "wheel_1_2_bound";
				center = "wheel_1_2_axis";
				springDamperRate = 4000;
				springStrength = 21000;
				maxCompression = 0.7;
				sprungMass = 1750;
				maxHandBrakeTorque = 3000;
				maxBrakeTorque = 5000;
				steering = 0;
			};
			class LM: LF2
			{
				boneName = "wheel_1_3_damper";
				boundary = "wheel_1_3_bound";
				center = "wheel_1_3_axis";
				springDamperRate = 4000;
				springStrength = 21000;
				maxCompression = 0.7;
				sprungMass = 1750;
				maxHandBrakeTorque = 3000;
				maxBrakeTorque = 5000;
			};
		};
	};
	
	class APC_Tracked_02_base_F;
	class rhs_zsutank_base:APC_Tracked_02_base_F
	{
		armor = 150;
		armorstructural = 450;
	};
	
	class Tank;
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class rhs_a3t72tank_base: Tank_F
	{
		armor = 250;
	};
	
	class CUP_MCV80_Base : Tank_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				magazines[] = {"twc_3rnd_30mm_AP","twc_3rnd_30mm_AP","twc_3rnd_30mm_AP","twc_3rnd_30mm_AP","twc_3rnd_30mm_AP","twc_3rnd_30mm_AP","twc_3rnd_30mm_AP","twc_3rnd_30mm_AP","twc_3rnd_30mm_AP","twc_3rnd_30mm_AP","twc_3rnd_30mm_AP","twc_3rnd_30mm_AP","twc_3rnd_30mm_AP","twc_3rnd_30mm_AP","twc_3rnd_30mm_AP","twc_3rnd_30mm_AP","twc_3rnd_30mm_AP","twc_3rnd_30mm_AP","twc_3rnd_30mm_AP","twc_3rnd_30mm_AP","twc_3rnd_30mm_AP","twc_3rnd_30mm_AP","twc_3rnd_30mm_AP","twc_3rnd_30mm_AP","twc_3rnd_30mm_AP","twc_3rnd_30mm_AP","twc_3rnd_30mm_AP","twc_3rnd_30mm_AP","twc_3rnd_30mm_AP","twc_3rnd_30mm_AP","twc_3rnd_30mm_AP","twc_3rnd_30mm_AP","twc_3rnd_30mm_AP","twc_3rnd_30mm_AP","twc_3rnd_30mm_AP","twc_3rnd_30mm_AP","twc_3rnd_30mm_AP","twc_3rnd_30mm_AP","twc_3rnd_30mm_HE","twc_3rnd_30mm_HE","twc_3rnd_30mm_HE","twc_3rnd_30mm_HE","twc_3rnd_30mm_HE","twc_3rnd_30mm_HE","twc_3rnd_30mm_HE","twc_3rnd_30mm_HE","twc_3rnd_30mm_HE","twc_3rnd_30mm_HE","twc_3rnd_30mm_HE","twc_3rnd_30mm_HE","twc_3rnd_30mm_HE","twc_3rnd_30mm_HE","twc_3rnd_30mm_HE","twc_3rnd_30mm_HE","twc_3rnd_30mm_HE","twc_3rnd_30mm_HE","twc_3rnd_30mm_HE","twc_3rnd_30mm_HE","twc_3rnd_30mm_HE","twc_3rnd_30mm_HE","twc_3rnd_30mm_HE","twc_3rnd_30mm_HE","twc_3rnd_30mm_HE","twc_3rnd_30mm_HE","twc_3rnd_30mm_HE","twc_3rnd_30mm_HE","twc_3rnd_30mm_HE","twc_3rnd_30mm_HE","twc_3rnd_30mm_HE","CUP_1200Rnd_TE4_Red_Tracer_762x51_M240_M","CUP_1200Rnd_TE4_Red_Tracer_762x51_M240_M"};
				stabilizedInAxes = 0;
			};
		};
	};
	
	
//handling modifications
	class Car;
	class Car_F: Car{
		class turrets;
		class Wheels {
			class LF {};
		};
	};
	
	class CUP_C_Golf4_Base: Car_F
	{
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				boundary = "wheel_1_1_bound";
				center = "wheel_1_1_axis";
				dampingRate = 0.1;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 1000;
				frictionVsSlipGraph[] = { { 0.0, 0.8 }, { 0.2, 0.5 }, { 1.0, 0.3 } };
				latStiffX = 3.5;
				latStiffY = 18;
				longitudinalStiffnessPerUnitGravity = 4582;
				mass = 90;
				maxBrakeTorque = 9000;
				maxCompression = 0.4;
				MaxDroop = 0.15;
				maxHandBrakeTorque = 1500;
				mMaxDroop = 0.15;
				MOI = 40;
				side = "left";
				springDamperRate = 4500;
				springStrength = 36000;
				sprungMass = 525;
				steering = 1;
				suspForceAppPointOffset = "wheel_1_1_axis";
				suspTravelDirection[] = {0,-0.8,0};
				tireForceAppPointOffset = "wheel_1_1_axis";
				width = "0.2";
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				boundary = "wheel_1_2_bound";
				center = "wheel_1_2_axis";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				steering = 0;
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				boundary = "wheel_2_1_bound";
				center = "wheel_2_1_axis";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				side = "right";
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				boundary = "wheel_2_2_bound";
				center = "wheel_2_2_axis";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				steering = 0;
			};
		};
	};
	
	class CUP_C_Golf4_Civ_Base: CUP_C_Golf4_Base
	{
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				boundary = "wheel_1_1_bound";
				center = "wheel_1_1_axis";
				dampingRate = 0.1;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 1000;
				frictionVsSlipGraph[] = { { 0.0, 0.8 }, { 0.2, 0.5 }, { 1.0, 0.3 } };
				latStiffX = 3.5;
				latStiffY = 18;
				longitudinalStiffnessPerUnitGravity = 4582;
				mass = 90;
				maxBrakeTorque = 9000;
				maxCompression = 0.4;
				MaxDroop = 0.15;
				maxHandBrakeTorque = 1500;
				mMaxDroop = 0.15;
				MOI = 40;
				side = "left";
				springDamperRate = 4500;
				springStrength = 36000;
				sprungMass = 525;
				steering = 1;
				suspForceAppPointOffset = "wheel_1_1_axis";
				suspTravelDirection[] = {0,-0.8,0};
				tireForceAppPointOffset = "wheel_1_1_axis";
				width = "0.2";
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				boundary = "wheel_1_2_bound";
				center = "wheel_1_2_axis";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				steering = 0;
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				boundary = "wheel_2_1_bound";
				center = "wheel_2_1_axis";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				side = "right";
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				boundary = "wheel_2_2_bound";
				center = "wheel_2_2_axis";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				steering = 0;
			};
		};
	};
	
	class CUP_C_Golf4_Civ_sport_Base: CUP_C_Golf4_Civ_Base
	{
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				boundary = "wheel_1_1_bound";
				center = "wheel_1_1_axis";
				dampingRate = 0.1;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 1000;
				frictionVsSlipGraph[] = { { 0.0, 0.8 }, { 0.5, 0.5 }, { 1.0, 0.4 } };
				latStiffX = 3.5;
				latStiffY = 18;
				longitudinalStiffnessPerUnitGravity = 4582;
				mass = 90;
				maxBrakeTorque = 9000;
				maxCompression = 0.4;
				MaxDroop = 0.15;
				maxHandBrakeTorque = 1500;
				mMaxDroop = 0.15;
				MOI = 40;
				side = "left";
				springDamperRate = 4500;
				springStrength = 36000;
				sprungMass = 525;
				steering = 1;
				suspForceAppPointOffset = "wheel_1_1_axis";
				suspTravelDirection[] = {0,-0.8,0};
				tireForceAppPointOffset = "wheel_1_1_axis";
				width = "0.2";
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				boundary = "wheel_1_2_bound";
				center = "wheel_1_2_axis";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				steering = 0;
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				boundary = "wheel_2_1_bound";
				center = "wheel_2_1_axis";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				side = "right";
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				boundary = "wheel_2_2_bound";
				center = "wheel_2_2_axis";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				steering = 0;
			};
		};
	};
	
	class CUP_SUV_Base: Car_F
	{
		differentialType = "all_limited";
		frontRearSplit = 0.3;
		frontBias = 0.1;
		rearBias = 0.1;
		centreBias = 0.8;
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				boundary = "wheel_1_1_bound";
				center = "wheel_1_1_axis";
				dampingRate = 0.1;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 1000;
				frictionVsSlipGraph[] = {{ 0.0, 0.7 }, { 0.1, 0.4 }, { 1.0, 0.3 }};
				latStiffX = 15;
				latStiffY = 100;
				longitudinalStiffnessPerUnitGravity = 6000;
				mass = 90;
				maxBrakeTorque = 1300;
				maxCompression = 0.3;
				MaxDroop = 0.05;
				mMaxDroop = 0.05;
				maxHandBrakeTorque = 0;
				MOI = 40;
				side = "left";
				springDamperRate = 1000;
				springStrength = 20000;
				sprungMass = 475;
				steering = 1;
				suspForceAppPointOffset = "wheel_1_1_axis";
				suspTravelDirection[] = {0,-0.8,0};
				tireForceAppPointOffset = "wheel_1_1_axis";
				width = "0.2";
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				boundary = "wheel_2_1_bound";
				center = "wheel_2_1_axis";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				side = "right";
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				boundary = "wheel_1_2_bound";
				center = "wheel_1_2_axis";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				steering = 0;
				springStrength = 24000;
				maxHandBrakeTorque = 1500;
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				boundary = "wheel_2_2_bound";
				center = "wheel_2_2_axis";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				steering = 0;
				springStrength = 24000;
				maxHandBrakeTorque = 1500;
			};
		};
	};
	
	class CUP_SUV_Unarmed_Base: CUP_SUV_Base
	{
		differentialType = "all_limited";
		frontRearSplit = 0.2;
		frontBias = 0.1;
		rearBias = 0.1;
		centreBias = 0.8;
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				boundary = "wheel_1_1_bound";
				center = "wheel_1_1_axis";
				dampingRate = 0.1;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 1000;
				frictionVsSlipGraph[] = {{ 0.0, 0.7 }, { 0.1, 0.4 }, { 1.0, 0.3 }};
				latStiffX = 15;
				latStiffY = 100;
				longitudinalStiffnessPerUnitGravity = 6000;
				mass = 90;
				maxBrakeTorque = 1300;
				maxCompression = 0.3;
				MaxDroop = 0.05;
				mMaxDroop = 0.05;
				maxHandBrakeTorque = 0;
				MOI = 40;
				side = "left";
				springDamperRate = 1000;
				springStrength = 20000;
				sprungMass = 475;
				steering = 1;
				suspForceAppPointOffset = "wheel_1_1_axis";
				suspTravelDirection[] = {0,-0.8,0};
				tireForceAppPointOffset = "wheel_1_1_axis";
				width = "0.2";
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				boundary = "wheel_2_1_bound";
				center = "wheel_2_1_axis";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				side = "right";
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				boundary = "wheel_1_2_bound";
				center = "wheel_1_2_axis";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				steering = 0;
				springStrength = 24000;
				maxHandBrakeTorque = 1500;
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				boundary = "wheel_2_2_bound";
				center = "wheel_2_2_axis";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				steering = 0;
				springStrength = 24000;
				maxHandBrakeTorque = 1500;
			};
		};
	};
	
	class CUP_SUV_Armored_Base: CUP_SUV_Base
	{
		differentialType = "all_limited";
		frontRearSplit = 0.2;
		frontBias = 0.1;
		rearBias = 0.1;
		centreBias = 0.7;
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				boundary = "wheel_1_1_bound";
				center = "wheel_1_1_axis";
				dampingRate = 0.1;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 1000;
				frictionVsSlipGraph[] = {{ 0.0, 0.7 }, { 0.1, 0.4 }, { 1.0, 0.3 }};
				latStiffX = 15;
				latStiffY = 100;
				longitudinalStiffnessPerUnitGravity = 6000;
				mass = 90;
				maxBrakeTorque = 1300;
				maxCompression = 0.3;
				MaxDroop = 0.05;
				mMaxDroop = 0.05;
				maxHandBrakeTorque = 0;
				MOI = 40;
				side = "left";
				springDamperRate = 1000;
				springStrength = 20000;
				sprungMass = 475;
				steering = 1;
				suspForceAppPointOffset = "wheel_1_1_axis";
				suspTravelDirection[] = {0,-0.8,0};
				tireForceAppPointOffset = "wheel_1_1_axis";
				width = "0.2";
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				boundary = "wheel_2_1_bound";
				center = "wheel_2_1_axis";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				side = "right";
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				boundary = "wheel_1_2_bound";
				center = "wheel_1_2_axis";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				steering = 0;
				springStrength = 24000;
				maxHandBrakeTorque = 1500;
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				boundary = "wheel_2_2_bound";
				center = "wheel_2_2_axis";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				steering = 0;
				springStrength = 24000;
				maxHandBrakeTorque = 1500;
			};
		};
	};
	
	class CUP_Datsun_Base: Car_F
	{
		differentialType = "all_limited";
		frontRearSplit = 0.2;
		frontBias = 0.1;
		rearBias = 0.1;
		centreBias = 0.2;
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				boundary = "wheel_1_1_bound";
				center = "wheel_1_1_axis";
				dampingRate = 0.1;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 1000;
				frictionVsSlipGraph[] = {{ 0.0, 0.7 }, { 0.1, 0.4 }, { 1.0, 0.3 }};
				latStiffX = 15;
				latStiffY = 100;
				longitudinalStiffnessPerUnitGravity = 6000;
				mass = 90;
				maxBrakeTorque = 2000;
				maxCompression = 0.4;
				MaxDroop = 0.15;
				mMaxDroop = 0.15;
				maxHandBrakeTorque = 0;
				MOI = 40;
				side = "left";
				springDamperRate = 1000;
				springStrength = 16000;
				sprungMass = 325;
				steering = 1;
				suspForceAppPointOffset = "wheel_1_1_axis";
				suspTravelDirection[] = {0,-0.8,0};
				tireForceAppPointOffset = "wheel_1_1_axis";
				width = "0.2";
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				boundary = "wheel_2_1_bound";
				center = "wheel_2_1_axis";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				side = "right";
				sprungMass = 325;
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				boundary = "wheel_1_2_bound";
				center = "wheel_1_2_axis";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				steering = 0;
				sprungMass = 325;
				maxBrakeTorque = 2500;
				springStrength = 19000;
				maxHandBrakeTorque = 3000;
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				boundary = "wheel_2_2_bound";
				center = "wheel_2_2_axis";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				steering = 0;
				sprungMass = 325;
				maxBrakeTorque = 2500;
				springStrength = 19000;
				maxHandBrakeTorque = 3000;
			};
		};
	};
	
	
	class CUP_Lada_Base: Car_F
	{
		differentialType = "rear_open";
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				boundary = "wheel_1_1_bound";
				center = "wheel_1_1_axis";
				dampingRate = 0.1;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 1000;
				frictionVsSlipGraph[] = {{ 0.0, 0.7 }, { 0.1, 0.4 }, { 1.0, 0.3 }};
				latStiffX = 15;
				latStiffY = 100;
				longitudinalStiffnessPerUnitGravity = 6000;
				mass = 90;
				maxBrakeTorque = 1300;
				maxCompression = 0.3;
				MaxDroop = 0.05;
				mMaxDroop = 0.05;
				maxHandBrakeTorque = 0;
				MOI = 40;
				side = "left";
				springDamperRate = 1000;
				springStrength = 20000;
				sprungMass = 325;
				steering = 1;
				suspForceAppPointOffset = "wheel_1_1_axis";
				suspTravelDirection[] = {0,-0.8,0};
				tireForceAppPointOffset = "wheel_1_1_axis";
				width = "0.2";
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				boundary = "wheel_2_1_bound";
				center = "wheel_2_1_axis";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				side = "right";
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				boundary = "wheel_1_2_bound";
				center = "wheel_1_2_axis";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				steering = 0;
				springStrength = 24000;
				maxHandBrakeTorque = 1500;
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				boundary = "wheel_2_2_bound";
				center = "wheel_2_2_axis";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				steering = 0;
				springStrength = 24000;
				maxHandBrakeTorque = 1500;
			};
		};
	};
	
	class CUP_Volha_Base: Car_F
	{
		differentialType = "rear_open";
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				boundary = "wheel_1_1_bound";
				center = "wheel_1_1_axis";
				dampingRate = 0.1;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 1000;
				frictionVsSlipGraph[] = {{ 0.0, 0.7 }, { 0.1, 0.4 }, { 1.0, 0.3 }};
				latStiffX = 15;
				latStiffY = 100;
				longitudinalStiffnessPerUnitGravity = 6000;
				mass = 90;
				maxBrakeTorque = 1200;
				maxCompression = 0.3;
				MaxDroop = 0.05;
				mMaxDroop = 0.05;
				maxHandBrakeTorque = 0;
				MOI = 40;
				side = "left";
				springDamperRate = 1000;
				springStrength = 20000;
				sprungMass = 325;
				steering = 1;
				suspForceAppPointOffset = "wheel_1_1_axis";
				suspTravelDirection[] = {0,-0.8,0};
				tireForceAppPointOffset = "wheel_1_1_axis";
				width = "0.2";
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				boundary = "wheel_2_1_bound";
				center = "wheel_2_1_axis";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				side = "right";
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				boundary = "wheel_1_2_bound";
				center = "wheel_1_2_axis";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				steering = 0;
				springStrength = 24000;
				maxHandBrakeTorque = 1500;
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				boundary = "wheel_2_2_bound";
				center = "wheel_2_2_axis";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				steering = 0;
				springStrength = 24000;
				maxHandBrakeTorque = 1500;
			};
		};
	};
	
	class CUP_Skoda_Base: Car_F
	{
		differentialType = "front_open";
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				boundary = "wheel_1_1_bound";
				center = "wheel_1_1_axis";
				dampingRate = 0.1;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 1000;
				frictionVsSlipGraph[] = {{ 0.0, 0.7 }, { 0.1, 0.4 }, { 1.0, 0.3 }};
				latStiffX = 15;
				latStiffY = 100;
				longitudinalStiffnessPerUnitGravity = 6000;
				mass = 90;
				maxBrakeTorque = 1300;
				maxCompression = 0.3;
				MaxDroop = 0.05;
				mMaxDroop = 0.05;
				maxHandBrakeTorque = 0;
				MOI = 40;
				side = "left";
				springDamperRate = 1000;
				springStrength = 20000;
				sprungMass = 325;
				steering = 1;
				suspForceAppPointOffset = "wheel_1_1_axis";
				suspTravelDirection[] = {0,-0.8,0};
				tireForceAppPointOffset = "wheel_1_1_axis";
				width = "0.2";
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				boundary = "wheel_2_1_bound";
				center = "wheel_2_1_axis";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				side = "right";
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				boundary = "wheel_1_2_bound";
				center = "wheel_1_2_axis";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				steering = 0;
				springStrength = 24000;
				maxHandBrakeTorque = 1500;
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				boundary = "wheel_2_2_bound";
				center = "wheel_2_2_axis";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				steering = 0;
				springStrength = 24000;
				maxHandBrakeTorque = 1500;
			};
		};
	};
	
	class CUP_UAZ_Base: Car_F
	{
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				boundary = "wheel_1_1_bound";
				center = "wheel_1_1_axis";
				dampingRate = 0.1;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 1000;
				frictionVsSlipGraph[] = { { 0.0, 0.6 }, { 0.2, 0.4 }, { 1.0, 0.3 } };
				latStiffX = 15;
				latStiffY = 100;
				longitudinalStiffnessPerUnitGravity = 4582;
				mass = 90;
				maxBrakeTorque = 2700;
				maxCompression = 0.3;
				MaxDroop = 0.0;
				maxHandBrakeTorque = 1500;
				mMaxDroop = 0.0;
				MOI = 40;
				side = "left";
				springDamperRate = 1000;
				springStrength = 10500;
				sprungMass = 430;
				steering = 1;
				suspForceAppPointOffset = "wheel_1_1_axis";
				suspTravelDirection[] = {0,-0.8,0};
				tireForceAppPointOffset = "wheel_1_1_axis";
				width = "0.2";
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				boundary = "wheel_1_2_bound";
				center = "wheel_1_2_axis";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				boundary = "wheel_2_1_bound";
				center = "wheel_2_1_axis";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				side = "right";
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				boundary = "wheel_2_2_bound";
				center = "wheel_2_2_axis";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
			};
		};
		torqueCurve[] = { { 0.0, 0.55 }, { 0.6, 0.8 }, { 1.0, 0.6 } };
		clutchStrength = 5;
		differentialType = "all_limited";
		frontRearSplit = 0.3;
		frontBias = 1.5;
		rearBias = 1.5;
		centreBias = 0.6;
	};
	
	class Quadbike_01_base_F: Car_F {
		antiRollbarForceCoef = 30;
		antiRollbarForceLimit = 5;
		antiRollbarSpeedMin = 5;
		antiRollbarSpeedMax = 100;
		ace_cargo_size = 10;
		ace_cargo_canLoad = 1;	
		//torqueCurve[] = {{0,0.3},{0.278,0.35},{0.35,0.35},{0.461,0.4},{0.7,0.3},{0.75,0.3},{0.8,0.25},{1,0.2}};
		torqueCurve[] = {{0,0.6},{0.2,0.65},{0.3,0.8},{0.7,0.95},{0.8,1},{0.9,0.95},{1,0.5}};
		peakTorque = 220;
		enginepower = 10;
		ace_cargo_hasCargo = 1;
		ace_cargo_space = 2;
		clutchStrength = 10;
		differentialType = "all_limited";
		frontRearSplit = 0.1;
		frontBias = 1.1;
		rearBias = 2.5;
		centreBias = 1.8;
		maxOmega = 200;
		maxSpeed = 100;
		turnCoef = 2.5;
			class Wheels {
				class LF {
				boneName = "wheel_1_1_damper";
				boundary = "wheel_1_1_bound";
				center = "wheel_1_1_axis";
				dampingRate = 0.5;
				dampingRateDamaged = 5;
				dampingRateDestroyed = 5000;
				//frictionVsSlipGraph[] = {{ 0.0, 0.6 }, { 0.4, 0.15 }, { 1.0, 0.35 }};
				frictionVsSlipGraph[] = {[0,0.8],[0.5,0.9],[1,0.7]};
				latStiffX = 25;
				latStiffY = 120;
				longitudinalStiffnessPerUnitGravity = 5000;
				mass = 30;
				maxBrakeTorque = 700;
				maxCompression = 0.5;
				maxDroop = 0.2;
				maxHandBrakeTorque = 0;
				MOI = 20;
				side = "left";
				springDamperRate = 500;
				springStrength = 900;
				sprungMass = 150;
				steering = 1;
				suspForceAppPointOffset = "wheel_1_1_axis";
				suspTravelDirection[] = {-0.25,-1,0};
				tireForceAppPointOffset = "wheel_1_1_axis";
				width = "0.2";
				};
				class LR: LF {
				boneName = "wheel_1_2_damper";
				boundary = "wheel_1_2_bound";
				center = "wheel_1_2_axis";
				maxHandBrakeTorque = 800;
				latStiffX = 25;
				springDamperRate = 1500;
				steering = 0;
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				};
				class RF: LF {
				boneName = "wheel_2_1_damper";
				boundary = "wheel_2_1_bound";
				center = "wheel_2_1_axis";
				side = "right";
				suspForceAppPointOffset = "wheel_2_1_axis";
				suspTravelDirection[] = {0.25,-1,0};
				tireForceAppPointOffset = "wheel_2_1_axis";
				};
				class RR: RF {
				boneName = "wheel_2_2_damper";
				boundary = "wheel_2_2_bound";
				center = "wheel_2_2_axis";
				maxHandBrakeTorque = 800;
				latStiffX = 25;
				springDamperRate = 1500;
				steering = 0;
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				};
			};
		
		
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
			maxTurnHundred = 0.5;
			turnDecreaseConst = 9;
			turnDecreaseLinear = 1;
			turnDecreaseTime = 0;
			turnIncreaseConst = 0.1;
			turnIncreaseLinear = 1;
			turnIncreaseTime = 1;
       };
	};
	
	
	class UK3CB_BAF_Jackal_Base : Car_F {
		class turrets: turrets
		{
			class mainturret;
		};
		antiRollbarForceCoef = 20;
		antiRollbarForceLimit = 17;
		antiRollbarSpeedMin = 5;
		antiRollbarSpeedMax = 100;
		turnCoef = 1.8;
		frontBias = 0.8;
		rearBias = 0.8;
		centreBias = 0.8;
		maxSpeed = 150;
		enginePower = 185;
		armor = 310;
		clutchStrength = 5;
		brakeIdleSpeed = 1.2;
		class Wheels:Wheels {
			class LF:LF {
				springDamperRate = 22000;
				springStrength = 80000;
				maxCompression = 0.3;
				maxBrakeTorque = 6000;
				MOI = 70;
				maxHandBrakeTorque = 8000;
				//frictionVsSlipGraph[] = {{ 0.0, 0.6 }, { 0.3, 0.5 }, { 1.0, 0.4 }};
				frictionVsSlipGraph[] = {{ 0.0, 0.6 }, { 0.4, 0.15 }, { 1.0, 0.45 }};
			};
		};
		
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.07; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 0.5; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 0.5; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
           
           turnDecreaseConst  = 0.6; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.8; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.1; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.3; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
		
	};
	class UK3CB_BAF_Coyote_L111A1_Base: UK3CB_BAF_Jackal_Base
	{
		class Turrets: Turrets
		{
			class L111A1_MainTurret: MainTurret {
				class viewoptics
				{
					initAngleX = 0;
					initAngleY = 0;
					initElev = 0;
					initFov = 0.1;
					maxAngleX = 30;
					maxAngleY = 100;
					maxElev = 40;
					maxFov = 0.1;
					minAngleX = -30;
					minAngleY = -100;
					minElev = -25;
					minFov = 0.1;
					visionMode[] = {"Normal"};
				};
			};
		};
	};
	class UK3CB_BAF_Jackal2_L111A1_Base_D: UK3CB_BAF_Coyote_L111A1_Base {
		
		antiRollbarForceCoef = 20;
		antiRollbarForceLimit = 17;
		turnCoef = 1.8;
		ace_cargo_size = 40;
		ace_cargo_canLoad = 1;
	};
	
	
	class UK3CB_BAF_Coyote_Passenger_L111A1_D: UK3CB_BAF_Coyote_L111A1_Base {
		
		antiRollbarForceCoef = 20;
		antiRollbarForceLimit = 17;
		turnCoef = 1.8;
	};
	class UK3CB_BAF_Coyote_L134A1_Base;
	class UK3CB_BAF_Jackal2_L134A1_Base_D: UK3CB_BAF_Coyote_L134A1_Base {
		
		antiRollbarForceCoef = 20;
		antiRollbarForceLimit = 17;
		turnCoef = 1.8;
		ace_cargo_size = 40;
		ace_cargo_canLoad = 1;
	};
		
	class UK3CB_BAF_Coyote_Passenger_L134A1_D: UK3CB_BAF_Coyote_L134A1_Base {
		
		antiRollbarForceCoef = 20;
		antiRollbarForceLimit = 17;
		turnCoef = 1.8;
	};
	
			
	
	class CUP_Hilux_Base: Car_F {
		
		ace_cargo_size = 35;
		ace_cargo_canLoad = 1;	
		antiRollbarForceCoef = 1.0;
		antiRollbarForceLimit = 0.1;
		differentialType = "all_limited";
		frontRearSplit = 0.2;
		frontBias = 0.5;
		rearBias = 1.5;
		centreBias = 1.0;
		torqueCurve[] = { { 0.0, 0.5 }, { 0.6, 0.6 }, { 1.0, 0.4 } };
		class Turrets;
		class Wheels:Wheels {
			class LF:LF {
				boneName = "wheel_1_1_damper";
				boundary = "wheel_1_1_bound";
				center = "wheel_1_1_axis";
				dampingRate = 1;
				dampingRateDamaged = 5;
				dampingRateDestroyed = 5000;
				dampingRateInAir = 0.8;
				frictionVsSlipGraph[] = {{ 0.0, 0.7 }, { 0.1, 0.3 }, { 1.0, 0.2 }};
				latStiffX = 25;
				latStiffY = 180;
				longitudinalStiffnessPerUnitGravity = 10000;
				mass = 30;
				maxBrakeTorque = 900;
				maxCompression = 0.4;
				maxDroop = 0.0;
				maxHandBrakeTorque = 200;
				moi = 6;
				side = "left";
				springDamperRate = 4000;
				springStrength = 6000;
				sprungMass = 625;
				steering = 1;
				suspForceAppPointOffset = "wheel_1_1_axis";
				suspTravelDirection[] = {0,-1,0};
				tireForceAppPointOffset = "wheel_1_1_axis";
				width = 0.285;
				};
				class RF: LF {
				boneName = "wheel_2_1_damper";
				boundary = "wheel_2_1_bound";
				center = "wheel_2_1_axis";
				dampingRate = 1;
				dampingRateDamaged = 5;
				dampingRateDestroyed = 5000;
				dampingRateInAir = 0.8;
				longitudinalStiffnessPerUnitGravity = 10000;
				mass = 30;
				maxBrakeTorque = 900;
				maxDroop = 0.0;
				maxHandBrakeTorque = 200;
				moi = 6;
				side = "right";
				steering = 1;
				suspForceAppPointOffset = "wheel_2_1_axis";
				suspTravelDirection[] = {0,-1,0};
				tireForceAppPointOffset = "wheel_2_1_axis";
				width = 0.285;
				};
				class LR: LF {
				boneName = "wheel_1_2_damper";
				boundary = "wheel_1_2_bound";
				center = "wheel_1_2_axis";
				springStrength = 56000;
				dampingRate = 1;
				dampingRateDamaged = 5;
				dampingRateDestroyed = 5000;
				dampingRateInAir = 0.8;
				frictionVsSlipGraph[] = {{ 0.0, 0.7 }, { 0.2, 0.3 }, { 1.0, 0.7 }};
				longitudinalStiffnessPerUnitGravity = 10000;
				mass = 30;
				maxBrakeTorque = 1800;
				maxDroop = 0.3;
				maxHandBrakeTorque = 1000;
				moi = 6;
				side = "left";
				sprungMass = 225;
				steering = 0;
				suspForceAppPointOffset = "wheel_1_2_axis";
				suspTravelDirection[] = {0,-1,0};
				tireForceAppPointOffset = "wheel_1_2_axis";
				width = 0.285;
				};
				class RR: LR {
				boneName = "wheel_2_2_damper";
				boundary = "wheel_2_2_bound";
				center = "wheel_2_2_axis";
				dampingRate = 1;
				dampingRateDamaged = 5;
				dampingRateDestroyed = 5000;
				dampingRateInAir = 0.8;
				longitudinalStiffnessPerUnitGravity = 10000;
				mass = 30;
				maxBrakeTorque = 1800;
				maxDroop = 0.3;
				maxHandBrakeTorque = 1000;
				moi = 6;
				side = "right";
				steering = 0;
				suspForceAppPointOffset = "wheel_2_2_axis";
				suspTravelDirection[] = {0,-1,0};
				tireForceAppPointOffset = "wheel_2_2_axis";
				width = 0.285;
				};
			};
		class PlayerSteeringCoefficients {
			maxTurnHundred = 0.1;
			turnDecreaseConst = 5;
			turnDecreaseLinear = 0;
			turnDecreaseTime = 0;
			turnIncreaseConst = 1;
			turnIncreaseLinear = 1;
			turnIncreaseTime = 0;
		};
	};
	
			
	
	class UK3CB_BAF_LandRover_Base: Car_F {
		
		ace_cargo_size = 35;
		ace_cargo_canLoad = 1;	
		antiRollbarForceCoef = 6.0;
		antiRollbarForceLimit = 3;
		differentialType = "all_limited";
		frontRearSplit = 0.2;
		frontBias = 0.2;
		rearBias = 0.2;
		centreBias = 0.8;
		class Turrets;
		class Wheels:Wheels {
			class LF:LF {
				boneName = "wheel_1_1_damper";
				boundary = "wheel_1_1_bound";
				center = "wheel_1_1_axis";
				dampingRate = 1;
				dampingRateDamaged = 5;
				dampingRateDestroyed = 5000;
				dampingRateInAir = 0.8;
				frictionVsSlipGraph[] = {{ 0.1, 0.5 }, { 0.25, 0.2 }, { 0.5, 0.45 }};
				latStiffX = 25;
				latStiffY = 120;
				longitudinalStiffnessPerUnitGravity = 14000;
				mass = 30;
				maxBrakeTorque = 2500;
				maxCompression = 0.4;
				maxDroop = 0.24;
				maxHandBrakeTorque = 700;
				moi = 6;
				side = "left";
				springDamperRate = 2400;
				springStrength = 33000;
				sprungMass = 825;
				steering = 1;
				suspForceAppPointOffset = "wheel_1_1_axis";
				suspTravelDirection[] = {0,-1,0};
				tireForceAppPointOffset = "wheel_1_1_axis";
				width = 0.285;
				};
				class RF: LF {
				boneName = "wheel_2_1_damper";
				boundary = "wheel_2_1_bound";
				center = "wheel_2_1_axis";
				dampingRate = 1;
				dampingRateDamaged = 5;
				dampingRateDestroyed = 5000;
				dampingRateInAir = 0.8;
				longitudinalStiffnessPerUnitGravity = 14000;
				mass = 30;
				maxBrakeTorque = 1500;
				maxDroop = 0.24;
				maxHandBrakeTorque = 700;
				moi = 6;
				side = "right";
				steering = 1;
				suspForceAppPointOffset = "wheel_2_1_axis";
				suspTravelDirection[] = {0,-1,0};
				tireForceAppPointOffset = "wheel_2_1_axis";
				width = 0.285;
				};
				class LR: LF {
				boneName = "wheel_1_2_damper";
				boundary = "wheel_1_2_bound";
				center = "wheel_1_2_axis";
				dampingRate = 1;
				dampingRateDamaged = 5;
				dampingRateDestroyed = 5000;
				springStrength = 37000;
				springDamperRate = 2200;
				dampingRateInAir = 0.8;
				frictionVsSlipGraph[] = {{ 0.1, 0.5 }, { 0.25, 0.2 }, { 0.5, 0.45 }};
				longitudinalStiffnessPerUnitGravity = 14000;
				mass = 30;
				maxBrakeTorque = 1500;
				maxDroop = 0.24;
				maxHandBrakeTorque = 4000;
				moi = 6;
				side = "left";
				sprungMass = 825;
				steering = 0;
				suspForceAppPointOffset = "wheel_1_2_axis";
				suspTravelDirection[] = {0,-1,0};
				tireForceAppPointOffset = "wheel_1_2_axis";
				width = 0.285;
				};
				class RR: LR {
				boneName = "wheel_2_2_damper";
				boundary = "wheel_2_2_bound";
				center = "wheel_2_2_axis";
				dampingRate = 1;
				dampingRateDamaged = 5;
				dampingRateDestroyed = 5000;
				dampingRateInAir = 0.8;
				longitudinalStiffnessPerUnitGravity = 14000;
				mass = 30;
				maxBrakeTorque = 1500;
				maxDroop = 0.24;
				maxHandBrakeTorque = 4000;
				moi = 6;
				side = "right";
				steering = 0;
				suspForceAppPointOffset = "wheel_2_2_axis";
				suspTravelDirection[] = {0,-1,0};
				tireForceAppPointOffset = "wheel_2_2_axis";
				width = 0.285;
				};
			};
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 1; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 0.7; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 0.5; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
           
           turnDecreaseConst  = 2; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.6; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.6; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.4; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
		
	};
	
	class UK3CB_BAF_LandRover_Amb_Base: UK3CB_BAF_LandRover_Base
	{
		antiRollbarForceCoef = 30.0;
		antiRollbarForceLimit = 20;
	};
	
	class Wheeled_APC_F : Car_F
	{
		class eventhandlers;
		class Wheels {
			class LF {};
		};
	};
	class CUP_Mastiff_Base : Wheeled_APC_F
	{
		antiRollbarForceCoef = 60;
		antiRollbarForceLimit = 40;
		antiRollbarSpeedMin = 5;
		antiRollbarSpeedMax = 100;
		terrainCoef = 2.0;
		turncoef = 2.0;
		armor = 700;
		clutchStrength = 150;
		differentialType = "all_open";


		class Wheels:wheels {
			class LF:LF {
				boneName = "wheel_1_1";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = "0.2";
				mass = 80;
				MOI = 85;
				dampingRate = 0.1;
				dampingRateInAir = 2;
				dampingRateDamaged = 2;
				dampingRateDestroyed = 800;
				maxBrakeTorque = 4500;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.4;
				//MaxDroop = 0.2;
				sprungMass = 4250;
				springStrength = 75000;
				springDamperRate = 8000;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = { { 0.0, 0.6 }, { 0.1, 0.5 }, { 1.0, 0.4 } };
			};
		};
		
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.01; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 0.7; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 1.0; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
             
           turnDecreaseConst  = 0.9; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.7; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.0; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.4; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
	   
	};
	
	class CUP_Wolfhound_Base : Wheeled_APC_F
	{
		antiRollbarForceCoef = 60;
		antiRollbarForceLimit = 40;
		antiRollbarSpeedMin = 30;
		antiRollbarSpeedMax = 100;
		terrainCoef = 2.0;
		turncoef = 2.0;
		armor = 700;
		clutchStrength = 150;
		differentialType = "all_open";


		class Wheels:wheels {
			class LF:LF {
				boneName = "wheel_1_1";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = "0.2";
				mass = 80;
				MOI = 85;
				dampingRate = 0.1;
				dampingRateInAir = 2;
				dampingRateDamaged = 2;
				dampingRateDestroyed = 800;
				maxBrakeTorque = 4500;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.4;
				//MaxDroop = 0.2;
				sprungMass = 4250;
				springStrength = 25000;
				springDamperRate = 8000;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = { { 0.0, 0.6 }, { 0.1, 0.5 }, { 1.0, 0.4 } };
			};
		};
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.03; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 0.3; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 0.5; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
           
           turnDecreaseConst  = 0.3; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.4; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.1; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.1; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
	};
	
	
	class UK3CB_BAF_LandRover_WMIK_Base:UK3CB_BAF_LandRover_Base
	{
		class Turrets: Turrets
		{
			class mainturret;
		};
	};
	
	class UK3CB_BAF_LandRover_WMIK_HMG_Base: UK3CB_BAF_LandRover_WMIK_Base
	{
		class Turrets: Turrets
		{
			class HMG_Turret: MainTurret {
				class viewoptics
				{
					initAngleX = 0;
					initAngleY = 0;
					initElev = 30;
					initFov = 0.1;
					maxAngleX = 30;
					maxAngleY = 100;
					maxElev = 40;
					maxFov = 0.1;
					minAngleX = -30;
					minAngleY = -100;
					minElev = -25;
					minFov = 0.1;
					visionMode[] = {"Normal"};
				};
			};
		};
	};
	
};

