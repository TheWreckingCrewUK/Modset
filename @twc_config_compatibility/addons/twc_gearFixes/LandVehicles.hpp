


	/* hobbs physics notes to remind myself
	
	sprungmass is important. Too low and the chassis follows the terrain, too high and the suspension doesn't compress properly. -1 for auto which sometimes doesn't yield good results, often depending on the mod
	
	springstrength vs center of mass is important for how much warning it gives the player before rolling. also use low arb settings to help when necessary. some good values:
		antiRollbarForceCoef = 2;
		antiRollbarForceLimit = 4;
	^those are for the jackal. be wary about using bigger values for bigger vehicles, it's not a relative compression limiter like real arb's, it's just a counter-rotational force on the chassis
	
	frictionvsslipgraph: the grip levels are multiplied by weight after reading the friction values here. Don't be scared about running low values on heavy vehicles, just make sure to have a high grip level at the highest slip ratio so that you don't have snowboarding mastiffs down hills. Balance this safety net with braketorque and handbrake torque. If a car jumps over a ramp and slams the footbrake and handbrake on in mid air, the combined torque of handbrake/footbrake and the grip level should not be enough to flip the vehicle end over end, unless it's a vehicle that should be capable of doing that irl. DON'T FORGET that max slip ratio is NOT max slip!
	On six-wheeled vehicles, you can set the braketorque crazy high on the middle wheels to get into the higher slip ranges when braking normally. This means you can have a lower lateral grip if need be and still have a very short braking distance. low slip ratio is generally your normal grip level. Medium slip ratio (0.3-0.8) is your general sliding grip level. You can set it lower than your normal level for road tires to get a falloff, or a bit higher than your normal level for the progression you expect from all terrain tires. High slip ratios are for your handbrake/stopped grip level. I set this higher than the others by principle. This stops vehicles from sliding eternally down a hill. Set it high enough that it flips at whatever side slope it must flip at, but low enough that it does not flip when braking over a jump.
	
	the same thing that causes the weight/friction oddness causes drivetrains to behave as if they're flipped. RWD powertrains will have understeer on power and FWD powertrains will have oversteer on power. Off-throttle behaviour is determined by your diff locks. Centerbias is definitely a torsen system and I assume it's the same for front and rear, but arma physics aren't great so I can't tell
	Test edge-case throttle balance by increasing peaktorque. No need to look for a golden bump when an uprated engine can cause the same slips over a wider range of stuff
	
	for consistent drifting that's controllable on a keyboard without requiring throttle control or lots of countersteering (buggies) look at latstiffY instead of just the differential stuff. You'll need to retune the steeringcoefficient to get the proper steering response with the looser tires. The decel locking of the diffs sometimes causes issues when running low latstiff, make sure the steering isn't wandering when coasting at high speed
	
	accelaid is a force applied to the vehicle when moving off. It gives a little raise to the nose when accleerating from a standstill. Not necessary on cars that don't do this irl, but sometimes needs it anyway because the standard physics causes a nose dip on some vehicles.
	
	dampingRateZeroThrottleClutchEngaged is a better coasting modifier than modifying the MOI of the wheels
	
	dampingRate of the wheels is a better initial acceleration modifier than clutchstrength. Make sure you don't have so much that you affect your later speed though. Don't lower your torque in the low rpm's of torquecurve to get a better moveoff, the engine will blip between omegas when changing gears and won't be able to accelerate
	
	excessive maxdroop causes the car to visually float on level ground. Excessive maxcompression can cause the chassis to collide with the ground when offroading, which is bad because arma collision physics sucks (this is how you start a space program). You can cheat this a bit by modifying the susptravel direction to make the front wheels move forward when compressed. It doesn't affect anything visually but it means that the chassis stays away from the ground for a bit longer and gives more headroom for compression
	
	longitudinalStiffnessPerUnitGravity's description on the wiki is not correct. This goes for many of the physics values, but with longitudinalStiffnessPerUnitGravity it is entirely false. This is a modifier of latstiffx and latstiffy that reads from the weight of each wheel on the ground. Take a jump, steer in midair, then see how much the chassis jerks when it lands. Higher number for more stiffness (basically more grip) and lower for less. Jumping is the extreme, it also affects general bumpy handling. The reason it got the false description on the wiki for braking performance was probably because someone noticed that grip was increasing when braking, but didn't realise it was because of the extra weight being put on the front tires compared to what gets put on the side tires when steering. Front/back wheelbase is longer than left/right axle length, so it's a bigger lever. Bigger lever equals more leverage and more leverage equals more weight on those tires, so more stiffness/grip
	
	You can try to cheat a shorter braking distance without increasing max cornering speed by using the leverage quirk. Jut raise the cog and use the arb to counter the roll it causes. However, don't forget to test the brakes over a jump to see if it flips end over end
	
	You can emulate the high torque/low power engines that you commonly find in heavy trucks by using dampingRateFullThrottle and raising peaktorque to retune its acceleration. This means that less of the vehicle's total damping force is caused by external factors like towing weight or gravity, but it doesn't affect acceleration once you tune it. enginepower doesn't seem to do anything
	
	
	misc notes:
	AI not shooting at vehicles unless they have an RPG: set crewVulnerable to 1
	
	*/
	

	class MRAP_01_base_F;
	class UK3CB_BAF_Panther_Base: MRAP_01_base_F {
		
		crewVulnerable = 1;
		clutchstrength = 1;
		accelAidForceSpd = 5.0;
		accelAidForceCoef = 2.0;
		accelAidForceYOffset = -2.7;
		dampingRateZeroThrottleClutchEngaged = 2;
		torqueCurve[] = { { 0.0, 0.5 }, { 0.6, 1 }, { 1.0, 0.8 } };
		antiRollbarForceCoef = 0;
		frontRearSplit = 0.2;
		frontBias = 1.1;
		rearBias = 0.5;
		centreBias = 1;
	//	peaktorque = 600;
		enginepower = 182;
		class Wheels {
			class LF {
				boneName = "wheel_1_1";
				boundary = "wheel_1_1_bound";
				center = "wheel_1_1_axis";
				dampingRate = 0.1;
				dampingRateDamaged = 2;
				dampingRateDestroyed = 1000;
				//frictionVsSlipGraph[] = {{ 0.0, 0.8 }, { 0.3, 0.6 }, { 1.0, 0.5 }};
				frictionVsSlipGraph[] = {{ 0.1, 0.55 }, { 0.25, 0.4 }, { 0.5, 0.6 }};
				latStiffX = 25;
				latStiffY = 90;
				longitudinalStiffnessPerUnitGravity = 15000;
				mass = 30;
				maxBrakeTorque = 4500;
				maxCompression = 0.4;
				maxDroop = 0.05;
				maxHandBrakeTorque = 500;
				moi = 10;
				side = "left";
				springDamperRate = 4500;
				springStrength = 36000;
				//sprungmass = 2625;
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
		clutchstrength = 1;
		antiRollbarForceCoef = 0;
		frontRearSplit = 0.5;
		frontBias = 1.1;
		rearBias = 0.5;
		centreBias = 1;
		peaktorque = 800;
	//	torqueCurve[] = { { 0.0, 0.55 }, { 0.6, 0.8 }, { 1.0, 0.4 } };
		class Wheels {
			class LF {
				boneName = "wheel_1_1";
				boundary = "wheel_1_1_bound";
				center = "wheel_1_1_axis";
				dampingRate = 0.1;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 1000;
				frictionVsSlipGraph[] = {{ 0.1, 0.3 }, { 0.55, 0.35 }, { 0.8, 0.65 }};
				latStiffX = 25;
				latStiffY = 80;
				longitudinalStiffnessPerUnitGravity = 20000;
				mass = 30;
				maxBrakeTorque = 6000;
				maxCompression = 0.5;
				maxDroop = 0.05;
				maxHandBrakeTorque = 4500;
				moi = 20.5;
				side = "left";
				springDamperRate = 7000;
				springStrength = 30000;
			//	sprungmass = -1;
				sprungmass = 1800;
				steering = 1;
				suspForceAppPointOffset = "wheel_1_1_axis";
				suspTravelDirection[] = {0,-1,0};
				tireForceAppPointOffset = "wheel_1_1_axis";
				width = "0.2";
			};
			class LF2: LF {
				maxBrakeTorque = 4000;
			};
			class RF:LF
			{};
			class RF2:RF
			{
				maxBrakeTorque = 4000;
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
	};
	
	class Truck_F;
	class Truck_01_base_F: Truck_F
	{
		class wheels;
		class complexgearbox;
	};
	class CUP_Ural_BaseTurret: Truck_F
	{
		accelAidForceCoef = 1.0;
		clutchStrength = 5;
		differentialType = "all_limited";
		frontRearSplit = 0.3;
		frontBias = 3;
		rearBias = 0.5;
		centreBias = 2;
		maxspeed = 81;
		torqueCurve[] = { { 0.0, 0.55 }, { 0.6, 0.8 }, { 1.0, 0.4 } };
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
				sprungMass = -1;
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
				springStrength = 40000;
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
				springStrength = 40000;
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
				springStrength = 60000;
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
				springStrength = 60000;
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
				springStrength = 30000;
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
				springStrength = 30000;
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
				springStrength = 45000;
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
				springStrength = 45000;
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
	
	class Tank;
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class CUP_MCV80_Base : Tank_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				magazines[] = {"TWC_Magazine_30mm_3rd_APDS","TWC_Magazine_30mm_3rd_APDS","TWC_Magazine_30mm_3rd_APDS","TWC_Magazine_30mm_3rd_APDS","TWC_Magazine_30mm_3rd_APDS","TWC_Magazine_30mm_3rd_APDS","TWC_Magazine_30mm_3rd_APDS","TWC_Magazine_30mm_3rd_APDS","TWC_Magazine_30mm_3rd_APDS","TWC_Magazine_30mm_3rd_APDS","TWC_Magazine_30mm_3rd_APDS","TWC_Magazine_30mm_3rd_APDS","TWC_Magazine_30mm_3rd_APDS","TWC_Magazine_30mm_3rd_APDS","TWC_Magazine_30mm_3rd_APDS","TWC_Magazine_30mm_3rd_APDS","TWC_Magazine_30mm_3rd_APDS","TWC_Magazine_30mm_3rd_APDS","TWC_Magazine_30mm_3rd_APDS","TWC_Magazine_30mm_3rd_APDS","TWC_Magazine_30mm_3rd_APDS","TWC_Magazine_30mm_3rd_APDS","TWC_Magazine_30mm_3rd_APDS","TWC_Magazine_30mm_3rd_APDS","TWC_Magazine_30mm_3rd_APDS","TWC_Magazine_30mm_3rd_APDS","TWC_Magazine_30mm_3rd_APDS","TWC_Magazine_30mm_3rd_APDS","TWC_Magazine_30mm_3rd_APDS","TWC_Magazine_30mm_3rd_APDS","TWC_Magazine_30mm_3rd_APDS","TWC_Magazine_30mm_3rd_APDS","TWC_Magazine_30mm_3rd_APDS","TWC_Magazine_30mm_3rd_APDS","TWC_Magazine_30mm_3rd_APDS","TWC_Magazine_30mm_3rd_APDS","TWC_Magazine_30mm_3rd_APDS","TWC_Magazine_30mm_3rd_APDS","TWC_Magazine_30mm_3rd_HET","TWC_Magazine_30mm_3rd_HET","TWC_Magazine_30mm_3rd_HET","TWC_Magazine_30mm_3rd_HET","TWC_Magazine_30mm_3rd_HET","TWC_Magazine_30mm_3rd_HET","TWC_Magazine_30mm_3rd_HET","TWC_Magazine_30mm_3rd_HET","TWC_Magazine_30mm_3rd_HET","TWC_Magazine_30mm_3rd_HET","TWC_Magazine_30mm_3rd_HET","TWC_Magazine_30mm_3rd_HET","TWC_Magazine_30mm_3rd_HET","TWC_Magazine_30mm_3rd_HET","TWC_Magazine_30mm_3rd_HET","TWC_Magazine_30mm_3rd_HET","TWC_Magazine_30mm_3rd_HET","TWC_Magazine_30mm_3rd_HET","TWC_Magazine_30mm_3rd_HET","TWC_Magazine_30mm_3rd_HET","TWC_Magazine_30mm_3rd_HET","TWC_Magazine_30mm_3rd_HET","TWC_Magazine_30mm_3rd_HET","TWC_Magazine_30mm_3rd_HET","TWC_Magazine_30mm_3rd_HET","TWC_Magazine_30mm_3rd_HET","TWC_Magazine_30mm_3rd_HET","TWC_Magazine_30mm_3rd_HET","TWC_Magazine_30mm_3rd_HET","TWC_Magazine_30mm_3rd_HET","TWC_Magazine_30mm_3rd_HET","CUP_1200Rnd_TE4_Red_Tracer_762x51_M240_M","CUP_1200Rnd_TE4_Red_Tracer_762x51_M240_M"};
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
		accelAidForceCoef = 1.0;
		torqueCurve[] = { { 0.0, 0.55 }, { 0.6, 0.8 }, { 1.0, 0.6 } };
		clutchStrength = 1;
		differentialType = "all_limited";
		frontRearSplit = 0.4;
		frontBias = 2.5;
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
				springDamperRate = 3500;
				springStrength = 33000;
			//	sprungMass = 410;
			};
			class LR: LF
			{
				maxHandBrakeTorque = 5000;
				maxBrakeTorque = 2000;
				springDamperRate = 4500;
				springStrength = 27000;
			};
			class RF: LF
			{
			};
			class RR: RF
			{
				maxHandBrakeTorque = 5000;
				maxBrakeTorque = 2000;
				springDamperRate = 4500;
				springStrength = 27000;
			};
		};
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.4; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 0.2; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 0.8; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
           
           turnDecreaseConst  = 0.9; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.5; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.8; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.1; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
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
		antiRollbarForceCoef = 2;
		antiRollbarForceLimit = 4;
		antiRollbarSpeedMin = 5;
		antiRollbarSpeedMax = 100;
		dampingRateZeroThrottleClutchEngaged = 1;
		frontrearsplit = 0.3;
		frontBias = 0.8;
		rearBias = 0.8;
		centreBias = 0.8;
		maxSpeed = 150;
		enginePower = 185;
		peaktorque = 800;
		armor = 310;
		clutchStrength = 5;
		brakeIdleSpeed = 1.2;
		class Wheels:Wheels {
			class LF:LF {
				sprungmass = 2400;
				springStrength = 60000;
				springDamperRate = 6500;
				maxCompression = 0.4;
				maxdroop = 0.1;
				maxBrakeTorque = 11000;
				longitudinalStiffnessPerUnitGravity = 20000;
				latStiffY = 80;
				latStiffX = 160;
				MOI = 70;
				mass = 250;
				maxHandBrakeTorque = 100;
				//frictionVsSlipGraph[] = {{ 0.0, 0.6 }, { 0.3, 0.5 }, { 1.0, 0.4 }};
				frictionVsSlipGraph[] = {{ 0.2, 0.38 }, { 0.3, 0.34 }, { 0.4, 0.5 }};
			};
			class LF2: LF {
				maxBrakeTorque = 2000;
				maxHandBrakeTorque = 300;
				dampingRate = 0.01;
				latStiffX = 60;
			};
			class LM: LF {
				maxBrakeTorque = 6000;
				maxHandBrakeTorque = 300;
				dampingRate = 0.01;
				latStiffX = 60;
				springStrength = 50000;
				springDamperRate = 8000;
			};
			class RF: LF {
				maxHandBrakeTorque = 100;
			};
			//rf2 is used by jackal, not rfm
			class RF2: RF {
				maxBrakeTorque = 2000;
				maxHandBrakeTorque = 300;
				dampingRate = 0.01;
				latStiffX = 60;
			};
			class RFM: RF {
				maxBrakeTorque = 6000;
				maxHandBrakeTorque = 300;
				dampingRate = 0.01;
				latStiffX = 60;
				springStrength = 50000;
				springDamperRate = 8000;
			};
		};
		
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.25; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 0.7; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 0.5; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
           
           turnDecreaseConst  = 0.7; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.6; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.6; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.1; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
		
	};
	class UK3CB_BAF_Coyote_L111A1_Base: UK3CB_BAF_Jackal_Base
	{
		turnCoef = 3.7;
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
	
	
	class UK3CB_BAF_Jackal2_L111A1_Base: UK3CB_BAF_Coyote_L111A1_Base
	{
		turnCoef = 4;
	};
	class UK3CB_BAF_Jackal2_L111A1_Base_D: UK3CB_BAF_Coyote_L111A1_Base {
		
		antiRollbarForceCoef = 20;
		antiRollbarForceLimit = 17;
		turnCoef = 4;
		ace_cargo_size = 40;
		ace_cargo_canLoad = 1;
		maximumload =5500;
	};
	
	
	class UK3CB_BAF_Coyote_Passenger_L111A1_D: UK3CB_BAF_Coyote_L111A1_Base {
		
		antiRollbarForceCoef = 20;
		antiRollbarForceLimit = 17;
		turnCoef = 3.7;
	};
	
	class UK3CB_BAF_Coyote_L134A1_Base: UK3CB_BAF_Jackal_Base
	{
		turnCoef = 3.7;
	};
	
	class UK3CB_BAF_Jackal2_L134A1_Base_D: UK3CB_BAF_Coyote_L134A1_Base {
		
		antiRollbarForceCoef = 20;
		antiRollbarForceLimit = 17;
		turnCoef = 4;
		ace_cargo_size = 40;
		ace_cargo_canLoad = 1;
		maximumload =5500;
	};
		
	class UK3CB_BAF_Coyote_Passenger_L134A1_D: UK3CB_BAF_Coyote_L134A1_Base {
		
		antiRollbarForceCoef = 20;
		antiRollbarForceLimit = 17;
		turnCoef = 3.7;
	};
	class UK3CB_BAF_Jackal2_L134A1_Base: UK3CB_BAF_Coyote_L134A1_Base
	{
		turnCoef = 4;
		maximumload =5500;
	};
	
			
	
	class CUP_Hilux_Base: Car_F {
		
		ace_cargo_size = 35;
		ace_cargo_canLoad = 1;	
		antiRollbarForceCoef = 0.0;
		antiRollbarForceLimit = 0.1;
		differentialType = "all_limited";
		frontRearSplit = 0.5;
		frontBias = 2.5;
		rearBias = 0.5;
		centreBias = 1.0;
		peaktorque = 200;
		class Turrets;
		class Wheels {
			class LF {
				frictionVsSlipGraph[] = {{ 0.0, 0.4 }, { 0.4, 0.35 }, { 0.8, 0.7 }};
				latStiffX = 45;
				latStiffY = 90;
				longitudinalStiffnessPerUnitGravity = 10000;
				maxBrakeTorque = 900;
				maxCompression = 0.4;
				maxDroop = 0.05;
				maxHandBrakeTorque = 200;
				springDamperRate = 1000;
				//springStrength = 9000;
				springStrength = 5000;
			//	sprungMass = -1;
			//	sprungMass = 625;
				sprungMass = 670;
			};
			class RF: LF {
			};
			class LR: LF {
			//	springStrength = 16000;
				springStrength = 6000;
				maxBrakeTorque = 1800;
				maxHandBrakeTorque = 1000;
				springDamperRate = 1000;
				sprungMass = 670;
			};
			class RR: LR {
			};
		};
		
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.4; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 0.4; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 1.0; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
           
           turnDecreaseConst  = 1.0; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.4; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.3; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.1; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
	};
	
			
	
	class UK3CB_BAF_LandRover_Base: Car_F {
		ace_cargo_size = 35;
		ace_cargo_canLoad = 1;	
		antiRollbarForceCoef = 6.0;
		antiRollbarForceLimit = 2;
		differentialType = "all_limited";
		frontRearSplit = 0.5;
		frontBias = 2;
		rearBias = 0.5;
		centreBias = 1;
	//	peaktorque = 500;
		class Turrets;
		class Wheels:Wheels {
			class LF:LF {
				boneName = "wheel_1_1_damper";
				boundary = "wheel_1_1_bound";
				center = "wheel_1_1_axis";
				dampingRate = 1;
				dampingRateDamaged = 5;
				dampingRateDestroyed = 5000;
				dampingRateInAir = 0;
				frictionVsSlipGraph[] = {{ 0.05, 0.5 }, { 0.2, 0.4 }, { 0.6, 0.8 }};
			//	frictionVsSlipGraph[] = {{ 0.05, 0.5 }, { 0.2, 0.4 }, { 0.35, 0.35 }};
			//	frictionVsSlipGraph[] = {{ 0.2, 0.4 }, { 0.35, 0.3 }, { 0.9, 0.4 }};
				latStiffX = 150;
				latStiffY = 110;
				longitudinalStiffnessPerUnitGravity = 30000;
				mass = 30;
				maxBrakeTorque = 2400;
				maxCompression = 0.4;
				maxDroop = 0.24;
				maxHandBrakeTorque = 700;
				moi = 6;
				side = "left";
				springDamperRate = 2600;
				springStrength = 75000;
				//sprungmass = 825;
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
				longitudinalStiffnessPerUnitGravity = 30000;
				mass = 30;
				maxBrakeTorque = 2400;
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
				springStrength = 90000;
				springDamperRate = 2600;
				dampingRateInAir = 0.8;
				frictionVsSlipGraph[] = {{ 0.05, 0.5 }, { 0.2, 0.4 }, { 0.6, 0.8 }};
				longitudinalStiffnessPerUnitGravity = 30000;
				mass = 30;
				maxBrakeTorque = 2600;
				maxDroop = 0.24;
				maxHandBrakeTorque = 1000;
				moi = 6;
				side = "left";
				//sprungmass = 825;
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
				longitudinalStiffnessPerUnitGravity = 30000;
				mass = 30;
				maxBrakeTorque = 2600;
				maxDroop = 0.24;
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
		class PlayerSteeringCoefficients /// steering sensitivity configuration
       {
           turnIncreaseConst  = 0.6; // basic sensitivity value, higher value = faster steering
           turnIncreaseLinear = 0.7; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
           turnIncreaseTime   = 0.3; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
           
           turnDecreaseConst  = 1.7; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
           turnDecreaseLinear = 0.6; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
           turnDecreaseTime   = 0.8; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
             
           maxTurnHundred     = 0.2; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
       };
		
	};
	
	class UK3CB_BAF_LandRover_Amb_Base: UK3CB_BAF_LandRover_Base
	{
	//	antiRollbarForceCoef = 30.0;
	//	antiRollbarForceLimit = 20;
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
		antiRollbarForceCoef = 10;
		antiRollbarForceLimit = 10;
		antiRollbarSpeedMin = 5;
		antiRollbarSpeedMax = 100;
		terrainCoef = 2.0;
		turncoef = 2.0;
		clutchstrength = 10.0;
		armor = 700;
		differentialType = "all_open";
		peakTorque = 1050;

		class Wheels {
			class LF {
				maxBrakeTorque = 6000;
				maxHandBrakeTorque = 0;
				maxCompression = 0.4;
				//MaxDroop = 0.2;
				//sprungMass = 4250;
				sprungMass = -1;
				springStrength = 85000;
				springDamperRate = 8000;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 55;
				latStiffY = 130;
				frictionVsSlipGraph[] = { { 0.0, 0.35 }, { 0.3, 0.4 }, { 1.0, 0.7 } };
			};
			class LR: LF
			{
				maxHandBrakeTorque = 0;
				maxBrakeTorque = 7500;
			};
			class LR2: LR
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 4500;
			};
			class RF: LF
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 6000;
			};
			class RR: RF
			{
				maxHandBrakeTorque = 0;
				maxBrakeTorque = 7500;
			};
			class RR2: RR
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 4500;
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
	
	class CUP_Wolfhound_Base : Wheeled_APC_F
	{
		antiRollbarForceCoef = 10;
		antiRollbarForceLimit = 10;
		antiRollbarSpeedMin = 30;
		antiRollbarSpeedMax = 100;
		terrainCoef = 2.0;
		turncoef = 2.0;
		armor = 700;
		clutchStrength = 150;
		differentialType = "all_open";


		class Wheels {
			class LF {
				maxBrakeTorque = 6000;
				maxHandBrakeTorque = 0;
				maxCompression = 0.4;
				//MaxDroop = 0.2;
				//sprungMass = 4250;
				sprungMass = -1;
				springStrength = 85000;
				springDamperRate = 8000;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 55;
				latStiffY = 130;
				frictionVsSlipGraph[] = { { 0.0, 0.35 }, { 0.3, 0.4 }, { 1.0, 0.7 } };
			};
			class LR: LF
			{
				maxHandBrakeTorque = 0;
				maxBrakeTorque = 7500;
			};
			class LR2: LR
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 4500;
			};
			class RF: LF
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 6000;
			};
			class RR: RF
			{
				maxHandBrakeTorque = 0;
				maxBrakeTorque = 7500;
			};
			class RR2: RR
			{
				maxHandBrakeTorque = 2000;
				maxBrakeTorque = 4500;
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
	


