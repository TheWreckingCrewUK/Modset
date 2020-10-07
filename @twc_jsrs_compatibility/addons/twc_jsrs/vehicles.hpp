class cfgvehicles 
{
	class Wheeled_APC_F;
	class CUP_BRDM2_Base: Wheeled_APC_F
	{
		soundEngineOffExt[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\engines\brdm\BRDM_shut_ext.ogg",0.562341,1,200};
		soundEngineOffInt[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\engines\brdm\BRDM_shut_int.ogg",0.398107,1};
		soundEngineOnExt[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\engines\brdm\BRDM_start_ext.ogg",0.562341,1,200};
		soundEngineOnInt[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\engines\brdm\BRDM_start_int.ogg",0.398107,1};
		class Sounds {
			class Idle_ext 
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\brdm\brdm_IDLE_EXT.ogg", 1.2,1, 250};
				frequency = "0.95	+	((rpm/	7000) factor[(400/	7000),(900/	7000)])*0.15";
				volume = "1*engineOn*camPos*(((rpm/	7000) factor[(200/	7000),(300/	7000)])	*	((rpm/	7000) factor[(1800/	7000),(1500/	7000)]))";
			};class Engine_RPM1
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\brdm\brdm_HIGH_EXT.ogg", 1.3,1, 400};
				frequency = "0.25	+	((rpm/	7000) factor[(600/	7000),(7000/	7000)])*0.95";
				volume = "1*engineOn*camPos*(thrust factor[0,1])*(((rpm/	7000) factor[(850/	7000),(1100/	7000)])	*	((rpm/	7000) factor[(7000/	7000),(7000/	7000)]))";
			};
			class Engine_RPM2
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\brdm\brdm_LOW_EXT.ogg", 1.3,1,300};
				frequency = "0.25	+	((rpm/	7000) factor[(600/	7000),(7000/	7000)])*0.95";
				volume = "1*engineOn*camPos*(thrust factor[1,0])*(((rpm/	7000) factor[(850/	7000),(1100/	7000)])	*	((rpm/	7000) factor[(7000/	7000),(7000/	7000)]))";
			};
			
			class Engine_RPM3
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\brdm\brdm_DISTANCE.ogg", 1,1,1000};
				frequency = "0.25	+	((rpm/	7000) factor[(600/	7000),(7000/	7000)])*0.95";
				volume = "1*engineOn*camPos*(thrust factor[0,0.6])*(((rpm/	7000) factor[(850/	7000),(1100/	7000)])	*	((rpm/	7000) factor[(7000/	7000),(7000/	7000)]))";
			};
			class Engine3_ext 
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\turbo\turbo.ogg",0.25,1,50};
				frequency = "1";
				volume = "engineOn*camPos*(thrust factor[0.9,1])*(((rpm/	7000) factor[(2500/	7000),(3100/	7000)])	*	((rpm/	7000) factor[(7000/	7000),(3700/	7000)]))";
			};
			class Engine4_ext 
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\brdm\Burst_ext_1.ogg", 0,0,0};
				frequency = "0.95	+	((rpm/	7000) factor[(3800/	7000),(7000/	7000)])*0.1";
				volume = "engineOn*camPos*((rpm/	7000) factor[(4000/	7000),(7000/	7000)])";
			};
			class Idle_int 
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\brdm\brdm_IDLE_int.ogg", 0.75, 1};
				frequency = "0.95	+	((rpm/	7000) factor[(400/	7000),(900/	7000)])*0.15";
				volume = "1*engineOn*(1-camPos)*(((rpm/	7000) factor[(200/	7000),(300/	7000)])	*	((rpm/	7000) factor[(1800/	7000),(1500/	7000)]))";
			};class Engine_int
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\brdm\brdm_HIGH_int.ogg", 0.9, 1};
				frequency = "0.7	+	((rpm/	7000) factor[(600/	7000),(7000/	7000)])*0.95";
				volume = "1*engineOn*(1-camPos)*(thrust factor[0,1])*(((rpm/	7000) factor[(850/	7000),(1100/	7000)])	*	((rpm/	7000) factor[(7000/	7000),(7000/	7000)]))";
			};
			class Engine1_int
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\brdm\brdm_LOW_int.ogg", 0.5, 1};
				frequency = "0.75	+	((rpm/	7000) factor[(600/	7000),(7000/	7000)])*0.95";
				volume = "1*engineOn*(1-camPos)*(thrust factor[1,0])*(((rpm/	7000) factor[(850/	7000),(1100/	7000)])	*	((rpm/	7000) factor[(7000/	7000),(7000/	7000)]))";
			};
			
			class Engine2_int
			{
				sound[] = {"NoSound", 0, 0};
				frequency = "0";
				volume = "0";
			};
			class Engine3_int 
			{
				sound[] = {"NoSound", 0, 0};
				frequency = "0";
				volume = "0";
			};
			class Engine4_int 
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\engines\brdm\Burst_int_1.ogg", 0, 1};
				frequency = "0.95	+	((rpm/	7000) factor[(3800/	7000),(7000/	7000)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/	7000) factor[(4000/	7000),(7000/	7000)])";
			};
			class IdleThrust
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\Exhaust\HIGH_4.ogg", 1,1,200};
				frequency = "0.95	+	((rpm/	7000) factor[(800/	7000),(1400/	7000)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	7000) factor[(200/	7000),(300/	7000)])	*	((rpm/	7000) factor[(1800/	7000),(1500/	7000)]))";
			};
			class EngineThrust
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\Exhaust\HIGH_4.ogg", 1,1,250};
				frequency = "0.9	+	((rpm/	7000) factor[(1400/	7000),(2100/	7000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	7000) factor[(1400/	7000),(1800/	7000)])	*	((rpm/	7000) factor[(2300/	7000),(2000/	7000)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\Exhaust\HIGH_4.ogg", 1,1,300};
				frequency = "0.9	+		((rpm/	7000) factor[(2100/	7000),(2800/	7000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	7000) factor[(1900/	7000),(2300/	7000)])	*	((rpm/	7000) factor[(3000/	7000),(2500/	7000)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\Exhaust\HIGH_4.ogg", 1,1,325};
				frequency = "0.9	+	((rpm/	7000) factor[(2800/	7000),(3600/	7000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	7000) factor[(2500/	7000),(3100/	7000)])	*	((rpm/	7000) factor[(7000/	7000),(3700/	7000)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\Exhaust\HIGH_4.ogg", 1,1,350};
				frequency = "0.95	+	((rpm/	7000) factor[(3600/	7000),(7000/	7000)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	7000) factor[(3800/	7000),(7000/	7000)])";
			};
			class IdleThrust_int
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\Exhaust\idle_2.ogg", 0.125, 1};
				frequency = "0.95	+	((rpm/	7000) factor[(800/	7000),(1400/	7000)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	7000) factor[(200/	7000),(300/	7000)])	*	((rpm/	7000) factor[(1800/	7000),(1500/	7000)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\Exhaust\idle_2.ogg", 0.125, 1};
				frequency = "0.9	+	((rpm/	7000) factor[(1400/	7000),(2100/	7000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	7000) factor[(1400/	7000),(1800/	7000)])	*	((rpm/	7000) factor[(2300/	7000),(2000/	7000)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\Exhaust\idle_2.ogg", 0.125, 1};
				frequency = "0.9	+		((rpm/	7000) factor[(2100/	7000),(2800/	7000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	7000) factor[(1900/	7000),(2300/	7000)])	*	((rpm/	7000) factor[(3000/	7000),(2500/	7000)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\Exhaust\idle_2.ogg", 0.125, 1};
				frequency = "0.9	+	((rpm/	7000) factor[(2800/	7000),(3600/	7000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	7000) factor[(2500/	7000),(3100/	7000)])	*	((rpm/	7000) factor[(7000/	7000),(3700/	7000)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\Exhaust\idle_2.ogg", 0.125, 1};
				frequency = "0.95	+	((rpm/	7000) factor[(3600/	7000),(7000/	7000)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	7000) factor[(3800/	7000),(7000/	7000)])";
			};
			class NoiseExt
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Exterior\heavy_driving_ext_1.ogg",0.630957,1,150};
			};
			class NoiseOut
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Exterior\heavy_driving_ext_1.ogg",0.630957,1,150};
			};
			class TiresAsphaltOut
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Rattle\wheeled_light_rattle_ext.ogg",1,1,60};
			};
			class TiresGrassOut
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Rattle\wheeled_medium_rattle_ext.ogg",1,1,60};
			};
			class TiresGravelOut
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Rattle\wheeled_medium_rattle_ext.ogg",1,1,60};
			};
			class TiresMudOut
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Rattle\wheeled_medium_rattle_offroad_ext.ogg",1,1,60};
			};
			class TiresRockOut
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Rattle\wheeled_medium_rattle_offroad_ext.ogg",1,1,60};
			};
			class TiresSandOut
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Rattle\wheeled_medium_rattle_ext.ogg",1,1,60};
			};
			class TiresAsphaltin
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Rattle\wheeled_light_rattle_int.ogg",1,1,60};
			};
			class TiresGrassin
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Rattle\wheeled_medium_rattle_int.ogg",1,1,60};
			};
			class TiresGravelin
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Rattle\wheeled_medium_rattle_int.ogg",1,1,60};
			};
			class TiresMudin
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Rattle\wheeled_medium_rattle_offroad_int.ogg",1,1,60};
			};
			class TiresRockin
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Rattle\wheeled_medium_rattle_offroad_int.ogg",1,1,60};
			};
			class TiresSandin
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Rattle\wheeled_medium_rattle_int.ogg",1,1,60};
			};
			
			class turn_left_ext_dirt
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\tires\DIRT_EXT_FAST.ogg",1,1,60};
			};
			class turn_right_ext_dirt
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\tires\DIRT_EXT_FAST.ogg",1,1,60};
			};
			class breaking_ext_dirt
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\tires\DIRT_EXT_FAST.ogg",1,1,60};
			};
			class acceleration_ext_dirt
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\tires\DIRT_EXT_FAST.ogg",1,1,60};
			};
			class turn_left_int_dirt
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\tires\DIRT_inT_FAST.ogg",1,1,60};
			};
			class turn_right_int_dirt
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\tires\DIRT_inT_FAST.ogg",1,1,60};
			};
			class breaking_int_dirt
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\tires\DIRT_inT_FAST.ogg",1,1,60};
			};
			class acceleration_int_dirt
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\tires\DIRT_inT_FAST.ogg",1,1,60};
			};
		};
	};
	
	
	class Tank_F;
	class CUP_MTLB_Base: Tank_F
	{
		soundEngineOffExt[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\engines\t34\t34_shut_ext.ogg",0.562341,1,200};
		soundEngineOffInt[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\engines\t34\t34_shut_int.ogg",0.398107,1};
		soundEngineOnExt[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\engines\t34\t34_start_ext.ogg",0.562341,1,200};
		soundEngineOnInt[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\engines\t34\t34_start_int.ogg",0.398107,1};
		class Sounds {
			class Idle_ext 
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\t34\t34_IDLE_EXT.ogg", 1.2,1, 250};
				frequency = "0.95	+	((rpm/	7000) factor[(400/	7000),(900/	7000)])*0.15";
				volume = "1*engineOn*camPos*(((rpm/	7000) factor[(200/	7000),(300/	7000)])	*	((rpm/	7000) factor[(1800/	7000),(1500/	7000)]))";
			};class Engine_RPM1
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\t34\t34_HIGH_EXT.ogg", 1.3,1, 400};
				frequency = "0.25	+	((rpm/	7000) factor[(600/	7000),(7000/	7000)])*0.95";
				volume = "1*engineOn*camPos*(thrust factor[0,1])*(((rpm/	7000) factor[(850/	7000),(1100/	7000)])	*	((rpm/	7000) factor[(7000/	7000),(7000/	7000)]))";
			};
			class Engine_RPM2
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\t34\t34_LOW_EXT.ogg", 1.3,1,300};
				frequency = "0.25	+	((rpm/	7000) factor[(600/	7000),(7000/	7000)])*0.95";
				volume = "1*engineOn*camPos*(thrust factor[1,0])*(((rpm/	7000) factor[(850/	7000),(1100/	7000)])	*	((rpm/	7000) factor[(7000/	7000),(7000/	7000)]))";
			};
			
			class Engine_RPM3
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\t34\t34_DISTANCE.ogg", 1,1,1000};
				frequency = "0.25	+	((rpm/	7000) factor[(600/	7000),(7000/	7000)])*0.95";
				volume = "1*engineOn*camPos*(thrust factor[0,0.6])*(((rpm/	7000) factor[(850/	7000),(1100/	7000)])	*	((rpm/	7000) factor[(7000/	7000),(7000/	7000)]))";
			};
			class Engine3_ext 
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\turbo\turbo.ogg",0.25,1,50};
				frequency = "1";
				volume = "engineOn*camPos*(thrust factor[0.9,1])*(((rpm/	7000) factor[(2500/	7000),(3100/	7000)])	*	((rpm/	7000) factor[(7000/	7000),(3700/	7000)]))";
			};
			class Engine4_ext 
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\t34\Burst_ext_1.ogg", 0,0,0};
				frequency = "0.95	+	((rpm/	7000) factor[(3800/	7000),(7000/	7000)])*0.1";
				volume = "engineOn*camPos*((rpm/	7000) factor[(4000/	7000),(7000/	7000)])";
			};
			class Idle_int 
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\t34\t34_IDLE_int.ogg", 0.75, 1};
				frequency = "0.95	+	((rpm/	7000) factor[(400/	7000),(900/	7000)])*0.15";
				volume = "1*engineOn*(1-camPos)*(((rpm/	7000) factor[(200/	7000),(300/	7000)])	*	((rpm/	7000) factor[(1800/	7000),(1500/	7000)]))";
			};class Engine_int
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\t34\t34_HIGH_int.ogg", 0.9, 1};
				frequency = "0.7	+	((rpm/	7000) factor[(600/	7000),(7000/	7000)])*0.95";
				volume = "1*engineOn*(1-camPos)*(thrust factor[0,1])*(((rpm/	7000) factor[(850/	7000),(1100/	7000)])	*	((rpm/	7000) factor[(7000/	7000),(7000/	7000)]))";
			};
			class Engine1_int
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\t34\t34_LOW_int.ogg", 0.5, 1};
				frequency = "0.75	+	((rpm/	7000) factor[(600/	7000),(7000/	7000)])*0.95";
				volume = "1*engineOn*(1-camPos)*(thrust factor[1,0])*(((rpm/	7000) factor[(850/	7000),(1100/	7000)])	*	((rpm/	7000) factor[(7000/	7000),(7000/	7000)]))";
			};
			
			class Engine2_int
			{
				sound[] = {"NoSound", 0, 0};
				frequency = "0";
				volume = "0";
			};
			class Engine3_int 
			{
				sound[] = {"NoSound", 0, 0};
				frequency = "0";
				volume = "0";
			};
			class Engine4_int 
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\engines\t34\Burst_int_1.ogg", 0, 1};
				frequency = "0.95	+	((rpm/	7000) factor[(3800/	7000),(7000/	7000)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/	7000) factor[(4000/	7000),(7000/	7000)])";
			};
			class IdleThrust
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\Exhaust\HIGH_4.ogg", 1,1,200};
				frequency = "0.95	+	((rpm/	7000) factor[(800/	7000),(1400/	7000)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	7000) factor[(200/	7000),(300/	7000)])	*	((rpm/	7000) factor[(1800/	7000),(1500/	7000)]))";
			};
			class EngineThrust
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\Exhaust\HIGH_4.ogg", 1,1,250};
				frequency = "0.9	+	((rpm/	7000) factor[(1400/	7000),(2100/	7000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	7000) factor[(1400/	7000),(1800/	7000)])	*	((rpm/	7000) factor[(2300/	7000),(2000/	7000)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\Exhaust\HIGH_4.ogg", 1,1,300};
				frequency = "0.9	+		((rpm/	7000) factor[(2100/	7000),(2800/	7000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	7000) factor[(1900/	7000),(2300/	7000)])	*	((rpm/	7000) factor[(3000/	7000),(2500/	7000)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\Exhaust\HIGH_4.ogg", 1,1,325};
				frequency = "0.9	+	((rpm/	7000) factor[(2800/	7000),(3600/	7000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	7000) factor[(2500/	7000),(3100/	7000)])	*	((rpm/	7000) factor[(7000/	7000),(3700/	7000)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\Exhaust\HIGH_4.ogg", 1,1,350};
				frequency = "0.95	+	((rpm/	7000) factor[(3600/	7000),(7000/	7000)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	7000) factor[(3800/	7000),(7000/	7000)])";
			};
			class IdleThrust_int
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\Exhaust\idle_2.ogg", 0.125, 1};
				frequency = "0.95	+	((rpm/	7000) factor[(800/	7000),(1400/	7000)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	7000) factor[(200/	7000),(300/	7000)])	*	((rpm/	7000) factor[(1800/	7000),(1500/	7000)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\Exhaust\idle_2.ogg", 0.125, 1};
				frequency = "0.9	+	((rpm/	7000) factor[(1400/	7000),(2100/	7000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	7000) factor[(1400/	7000),(1800/	7000)])	*	((rpm/	7000) factor[(2300/	7000),(2000/	7000)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\Exhaust\idle_2.ogg", 0.125, 1};
				frequency = "0.9	+		((rpm/	7000) factor[(2100/	7000),(2800/	7000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	7000) factor[(1900/	7000),(2300/	7000)])	*	((rpm/	7000) factor[(3000/	7000),(2500/	7000)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\Exhaust\idle_2.ogg", 0.125, 1};
				frequency = "0.9	+	((rpm/	7000) factor[(2800/	7000),(3600/	7000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	7000) factor[(2500/	7000),(3100/	7000)])	*	((rpm/	7000) factor[(7000/	7000),(3700/	7000)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\Exhaust\idle_2.ogg", 0.125, 1};
				frequency = "0.95	+	((rpm/	7000) factor[(3600/	7000),(7000/	7000)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	7000) factor[(3800/	7000),(7000/	7000)])";
			};
			class NoiseExt
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Exterior\heavy_driving_ext_1.ogg",0.630957,1,150};
			};
			class ThreadsInH0
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\light_tracked_Int_tracks_fast.ogg",0.251189,1};
			};
			class ThreadsInH1
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\light_tracked_Int_tracks_fast.ogg",0.251189,1};
			};
			class ThreadsInH2
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\light_tracked_Int_tracks_fast.ogg",0.251189,1};
			};
			class ThreadsInH3
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\light_tracked_Int_tracks_fast.ogg",0.251189,1};
			};
			class ThreadsInH4
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\light_tracked_Int_tracks_fast.ogg",0.251189,1};
			};
			class Threadsins0
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\light_tracked_Int_tracks_slow.ogg",0.251189,1};
			};
			class Threadsins1
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\light_tracked_Int_tracks_slow.ogg",0.251189,1};
			};
			class Threadsins2
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\light_tracked_Int_tracks_slow.ogg",0.251189,1};
			};
			class Threadsins3
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\light_tracked_Int_tracks_slow.ogg",0.251189,1};
			};
			class Threadsins4
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\light_tracked_Int_tracks_slow.ogg",0.251189,1};
			};
			class threadsoutH0
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\light_tracked_ext_tracks_fast.ogg",0.251189,1};
			};
			class threadsoutH1
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\light_tracked_ext_tracks_fast.ogg",0.251189,1};
			};
			class threadsoutH2
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\light_tracked_ext_tracks_fast.ogg",0.251189,1};
			};
			class threadsoutH3
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\light_tracked_ext_tracks_fast.ogg",0.251189,1};
			};
			class threadsoutH4
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\light_tracked_ext_tracks_fast.ogg",0.251189,1};
			};
			class threadsouts0
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\light_tracked_ext_tracks_slow.ogg",0.251189,1};
			};
			class threadsouts1
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\light_tracked_ext_tracks_slow.ogg",0.251189,1};
			};
			class threadsouts2
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\light_tracked_ext_tracks_slow.ogg",0.251189,1};
			};
			class threadsouts3
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\light_tracked_ext_tracks_slow.ogg",0.251189,1};
			};
			class threadsouts4
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\light_tracked_ext_tracks_slow.ogg",0.251189,1};
			};
		};
	};
	
	
	
};