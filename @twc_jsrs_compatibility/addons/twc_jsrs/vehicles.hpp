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
				volume = "engineOn*camPos*(((rpm/	2850) factor[(900/	2850),(1050/	2850)])	*	((rpm/	2850) factor[(1400/	2850),(1200/	2850)]))";
			};
			class Engine_RPM2
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\brdm\brdm_LOW_EXT.ogg", 1.3,1,600};
				frequency = "0.25	+	((rpm/	7000) factor[(600/	7000),(7000/	7000)])*0.95";
				volume = "engineOn*camPos*(((rpm/	2850) factor[(1170/	2850),(1380/	2850)])	*	((rpm/	2850) factor[(1700/	2850),(1500/	2850)]))";
			};
			
			class Engine_RPM3
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\brdm\brdm_DISTANCE.ogg", 1,1,1000};
				frequency = "0.25	+	((rpm/	7000) factor[(600/	7000),(7000/	7000)])*0.95";
				volume = "1*engineOn*camPos*(thrust factor[0,0.6])*(((rpm/	7000) factor[(850/	7000),(1100/	7000)])	*	((rpm/	7000) factor[(7000/	7000),(7000/	7000)]))";
			};
			class Engine4_ext 
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\brdm\Burst_ext_1.ogg", 0,0,0};
				frequency = "0.95	+	((rpm/	7000) factor[(3800/	7000),(7000/	7000)])*0.1";
				volume = "engineOn*camPos*(((rpm/	2850) factor[(1780/	2850),(2060/	2850)])	*	((rpm/	2850) factor[(2450/	2850),(2200/	2850)]))";
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
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\t34\t34_IDLE_EXT.ogg", 1.2,1, 350};
				frequency = "0.95	+	((rpm/	7000) factor[(400/	7000),(900/	7000)])*0.15";
				volume = "1*engineOn*camPos*(((rpm/	7000) factor[(200/	7000),(300/	7000)])	*	((rpm/	7000) factor[(1800/	7000),(1500/	7000)]))";
			};
			class Engine1_ext
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\t34\t34_HIGH_EXT.ogg", 1.3,1, 400};
				frequency = "0.25	+	((rpm/	7000) factor[(600/	7000),(7000/	7000)])*0.95";
				volume = "1*engineOn*camPos*(thrust factor[0,1])*(((rpm/	7000) factor[(850/	7000),(1100/	7000)])	*	((rpm/	7000) factor[(7000/	7000),(7000/	7000)]))";
			};
			class Engine2_ext
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\t34\t34_LOW_EXT.ogg", 1.3,1,500};
				frequency = "0.25	+	((rpm/	7000) factor[(600/	7000),(7000/	7000)])*0.95";
				volume = "1*engineOn*camPos*(thrust factor[1,0])*(((rpm/	7000) factor[(850/	7000),(1100/	7000)])	*	((rpm/	7000) factor[(7000/	7000),(7000/	7000)]))";
			};
			
			class Engine3_ext
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\t34\t34_DISTANCE.ogg", 1,1,1000};
				frequency = "0.25	+	((rpm/	7000) factor[(600/	7000),(7000/	7000)])*0.95";
				volume = "1*engineOn*camPos*(thrust factor[0,0.6])*(((rpm/	7000) factor[(850/	7000),(1100/	7000)])	*	((rpm/	7000) factor[(7000/	7000),(7000/	7000)]))";
			};
			class Engine4_ext 
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\t34\Burst_ext_1.ogg", 1,1,100};
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
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\Exhaust\HIGH_4.ogg", 1,1,450};
				frequency = "0.9	+	((rpm/	7000) factor[(1400/	7000),(2100/	7000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	7000) factor[(1400/	7000),(1800/	7000)])	*	((rpm/	7000) factor[(2300/	7000),(2000/	7000)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\Exhaust\HIGH_4.ogg", 1,1,400};
				frequency = "0.9	+		((rpm/	7000) factor[(2100/	7000),(2800/	7000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	7000) factor[(1900/	7000),(2300/	7000)])	*	((rpm/	7000) factor[(3000/	7000),(2500/	7000)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\Exhaust\HIGH_4.ogg", 1,1,425};
				frequency = "0.9	+	((rpm/	7000) factor[(2800/	7000),(3600/	7000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	7000) factor[(2500/	7000),(3100/	7000)])	*	((rpm/	7000) factor[(7000/	7000),(3700/	7000)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\Exhaust\HIGH_4.ogg", 1,1,450};
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
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsInH1
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\light_tracked_Int_tracks_fast.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsInH2
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\light_tracked_Int_tracks_fast.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsInH3
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\light_tracked_Int_tracks_fast.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsInH4
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\light_tracked_Int_tracks_fast.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class Threadsins0
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\light_tracked_Int_tracks_slow.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class Threadsins1
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\light_tracked_Int_tracks_slow.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class Threadsins2
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\light_tracked_Int_tracks_slow.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class Threadsins3
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\light_tracked_Int_tracks_slow.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class Threadsins4
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\light_tracked_Int_tracks_slow.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class threadsoutH0
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\light_tracked_ext_tracks_fast.ogg",0.251189,1, 150};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class threadsoutH1
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\light_tracked_ext_tracks_fast.ogg",0.251189,1, 150};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class threadsoutH2
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\light_tracked_ext_tracks_fast.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class threadsoutH3
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\light_tracked_ext_tracks_fast.ogg",0.251189,1, 150};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class threadsoutH4
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\light_tracked_ext_tracks_fast.ogg",0.251189,1, 150};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";

			};
			class threadsouts0
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\light_tracked_ext_tracks_slow.ogg",0.251189,1, 150};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class threadsouts1
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\light_tracked_ext_tracks_slow.ogg",0.251189,1, 150};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class threadsouts2
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\light_tracked_ext_tracks_slow.ogg",0.251189,1, 150};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class threadsouts3
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\light_tracked_ext_tracks_slow.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class threadsouts4
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\light_tracked_ext_tracks_slow.ogg",0.251189,1, 150};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
		};
	};
	
	
	
	
	class CUP_t72_Base: Tank_F
	{
		soundEngineOffExt[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\engines\t72\t72_shut_ext.ogg",0.562341,1,200};
		soundEngineOffInt[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\engines\t72\t72_shut_int.ogg",0.398107,1};
		soundEngineOnExt[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\engines\t72\t72_start_ext.ogg",0.562341,1,200};
		soundEngineOnInt[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\engines\t72\t72_start_int.ogg",0.398107,1};
		class Sounds {
			class Idle_ext 
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\t72\t72_IDLE_EXT.ogg", 1.2,1, 400};
				frequency = "0.95	+	((rpm/	7000) factor[(400/	7000),(900/	7000)])*0.15";
				volume = "1*engineOn*camPos*(((rpm/	7000) factor[(200/	7000),(300/	7000)])	*	((rpm/	7000) factor[(1800/	7000),(1500/	7000)]))";
			};
			class Engine1_ext
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\t72\t72_HIGH_EXT.ogg", 1.3,1, 450};
				frequency = "0.25	+	((rpm/	7000) factor[(600/	7000),(7000/	7000)])*0.95";
				volume = "1*engineOn*camPos*(thrust factor[0,1])*(((rpm/	7000) factor[(850/	7000),(1100/	7000)])	*	((rpm/	7000) factor[(7000/	7000),(7000/	7000)]))";
			};
			class Engine2_ext
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\t72\t72_LOW_EXT.ogg", 1.3,1,550};
				frequency = "0.25	+	((rpm/	7000) factor[(600/	7000),(7000/	7000)])*0.95";
				volume = "1*engineOn*camPos*(thrust factor[1,0])*(((rpm/	7000) factor[(850/	7000),(1100/	7000)])	*	((rpm/	7000) factor[(7000/	7000),(7000/	7000)]))";
			};
			
			class Engine3_ext
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\t72\t72_DISTANCE.ogg", 1,1,1000};
				frequency = "0.25	+	((rpm/	7000) factor[(600/	7000),(7000/	7000)])*0.95";
				volume = "1*engineOn*camPos*(thrust factor[0,0.6])*(((rpm/	7000) factor[(850/	7000),(1100/	7000)])	*	((rpm/	7000) factor[(7000/	7000),(7000/	7000)]))";
			};
			class Engine4_ext 
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\t72\Burst_ext_1.ogg", 1,1,300};
				frequency = "0.95	+	((rpm/	7000) factor[(3800/	7000),(7000/	7000)])*0.1";
				volume = "engineOn*camPos*((rpm/	7000) factor[(4000/	7000),(7000/	7000)])";
			};
			class Idle_int 
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\t72\t72_IDLE_int.ogg", 0.75, 1};
				frequency = "0.95	+	((rpm/	7000) factor[(400/	7000),(900/	7000)])*0.15";
				volume = "1*engineOn*(1-camPos)*(((rpm/	7000) factor[(200/	7000),(300/	7000)])	*	((rpm/	7000) factor[(1800/	7000),(1500/	7000)]))";
			};class Engine_int
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\t72\t72_HIGH_int.ogg", 0.9, 1};
				frequency = "0.7	+	((rpm/	7000) factor[(600/	7000),(7000/	7000)])*0.95";
				volume = "1*engineOn*(1-camPos)*(thrust factor[0,1])*(((rpm/	7000) factor[(850/	7000),(1100/	7000)])	*	((rpm/	7000) factor[(7000/	7000),(7000/	7000)]))";
			};
			class Engine1_int
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\t72\t72_LOW_int.ogg", 0.5, 1};
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
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\engines\t72\Burst_int_1.ogg", 0, 1};
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
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\Exhaust\HIGH_4.ogg", 1,1,450};
				frequency = "0.9	+	((rpm/	7000) factor[(1400/	7000),(2100/	7000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	7000) factor[(1400/	7000),(1800/	7000)])	*	((rpm/	7000) factor[(2300/	7000),(2000/	7000)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\Exhaust\HIGH_4.ogg", 1,1,400};
				frequency = "0.9	+		((rpm/	7000) factor[(2100/	7000),(2800/	7000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	7000) factor[(1900/	7000),(2300/	7000)])	*	((rpm/	7000) factor[(3000/	7000),(2500/	7000)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\Exhaust\HIGH_4.ogg", 1,1,425};
				frequency = "0.9	+	((rpm/	7000) factor[(2800/	7000),(3600/	7000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	7000) factor[(2500/	7000),(3100/	7000)])	*	((rpm/	7000) factor[(7000/	7000),(3700/	7000)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\Exhaust\HIGH_4.ogg", 1,1,450};
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
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_Int_tracks_fast.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsInH1
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_Int_tracks_fast.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsInH2
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_Int_tracks_fast.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsInH3
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_Int_tracks_fast.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsInH4
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_Int_tracks_fast.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class Threadsins0
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_Int_tracks_slow.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class Threadsins1
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_Int_tracks_slow.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class Threadsins2
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_Int_tracks_slow.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class Threadsins3
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_Int_tracks_slow.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class Threadsins4
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_Int_tracks_slow.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class threadsoutH0
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_ext_tracks_fast.ogg",0.251189,1, 150};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class threadsoutH1
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_ext_tracks_fast.ogg",0.251189,1, 150};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class threadsoutH2
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_ext_tracks_fast.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class threadsoutH3
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_ext_tracks_fast.ogg",0.251189,1, 150};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class threadsoutH4
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_ext_tracks_fast.ogg",0.251189,1, 150};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";

			};
			class threadsouts0
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_ext_tracks_slow.ogg",0.251189,1, 150};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class threadsouts1
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_ext_tracks_slow.ogg",0.251189,1, 150};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class threadsouts2
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_ext_tracks_slow.ogg",0.251189,1, 150};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class threadsouts3
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_ext_tracks_slow.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class threadsouts4
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_ext_tracks_slow.ogg",0.251189,1, 150};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
		};
	};
	
	
	
	class CUP_t90_Base: Tank_F
	{
		soundEngineOffExt[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\engines\t90\t90_shut_ext.ogg",0.562341,1,200};
		soundEngineOffInt[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\engines\t90\t90_shut_int.ogg",0.398107,1};
		soundEngineOnExt[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\engines\t90\t90_start_ext.ogg",0.562341,1,200};
		soundEngineOnInt[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\engines\t90\t90_start_int.ogg",0.398107,1};
		class Sounds {
			class Idle_ext 
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\t90\t90_IDLE_EXT.ogg", 1.2,1, 400};
				frequency = "0.95	+	((rpm/	7000) factor[(400/	7000),(900/	7000)])*0.15";
				volume = "1*engineOn*camPos*(((rpm/	7000) factor[(200/	7000),(300/	7000)])	*	((rpm/	7000) factor[(1800/	7000),(1500/	7000)]))";
			};
			class Engine1_ext
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\t90\t90_HIGH_EXT.ogg", 1.3,1, 450};
				frequency = "0.25	+	((rpm/	7000) factor[(600/	7000),(7000/	7000)])*0.95";
				volume = "1*engineOn*camPos*(thrust factor[0,1])*(((rpm/	7000) factor[(850/	7000),(1100/	7000)])	*	((rpm/	7000) factor[(7000/	7000),(7000/	7000)]))";
			};
			class Engine2_ext
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\t90\t90_LOW_EXT.ogg", 1.3,1,550};
				frequency = "0.25	+	((rpm/	7000) factor[(600/	7000),(7000/	7000)])*0.95";
				volume = "1*engineOn*camPos*(thrust factor[1,0])*(((rpm/	7000) factor[(850/	7000),(1100/	7000)])	*	((rpm/	7000) factor[(7000/	7000),(7000/	7000)]))";
			};
			
			class Engine3_ext
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\t90\t90_DISTANCE.ogg", 1,1,1000};
				frequency = "0.25	+	((rpm/	7000) factor[(600/	7000),(7000/	7000)])*0.95";
				volume = "1*engineOn*camPos*(thrust factor[0,0.6])*(((rpm/	7000) factor[(850/	7000),(1100/	7000)])	*	((rpm/	7000) factor[(7000/	7000),(7000/	7000)]))";
			};
			class Engine4_ext 
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\t90\Burst_ext_1.ogg", 1,1,300};
				frequency = "0.95	+	((rpm/	7000) factor[(3800/	7000),(7000/	7000)])*0.1";
				volume = "engineOn*camPos*((rpm/	7000) factor[(4000/	7000),(7000/	7000)])";
			};
			class Idle_int 
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\t90\t90_IDLE_int.ogg", 0.75, 1};
				frequency = "0.95	+	((rpm/	7000) factor[(400/	7000),(900/	7000)])*0.15";
				volume = "1*engineOn*(1-camPos)*(((rpm/	7000) factor[(200/	7000),(300/	7000)])	*	((rpm/	7000) factor[(1800/	7000),(1500/	7000)]))";
			};class Engine_int
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\t90\t90_HIGH_int.ogg", 0.9, 1};
				frequency = "0.7	+	((rpm/	7000) factor[(600/	7000),(7000/	7000)])*0.95";
				volume = "1*engineOn*(1-camPos)*(thrust factor[0,1])*(((rpm/	7000) factor[(850/	7000),(1100/	7000)])	*	((rpm/	7000) factor[(7000/	7000),(7000/	7000)]))";
			};
			class Engine1_int
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\t90\t90_LOW_int.ogg", 0.5, 1};
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
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\engines\t90\Burst_int_1.ogg", 0, 1};
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
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\Exhaust\HIGH_4.ogg", 1,1,450};
				frequency = "0.9	+	((rpm/	7000) factor[(1400/	7000),(2100/	7000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	7000) factor[(1400/	7000),(1800/	7000)])	*	((rpm/	7000) factor[(2300/	7000),(2000/	7000)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\Exhaust\HIGH_4.ogg", 1,1,400};
				frequency = "0.9	+		((rpm/	7000) factor[(2100/	7000),(2800/	7000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	7000) factor[(1900/	7000),(2300/	7000)])	*	((rpm/	7000) factor[(3000/	7000),(2500/	7000)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\Exhaust\HIGH_4.ogg", 1,1,425};
				frequency = "0.9	+	((rpm/	7000) factor[(2800/	7000),(3600/	7000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	7000) factor[(2500/	7000),(3100/	7000)])	*	((rpm/	7000) factor[(7000/	7000),(3700/	7000)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\Exhaust\HIGH_4.ogg", 1,1,450};
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
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_Int_tracks_fast.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsInH1
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_Int_tracks_fast.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsInH2
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_Int_tracks_fast.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsInH3
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_Int_tracks_fast.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsInH4
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_Int_tracks_fast.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class Threadsins0
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_Int_tracks_slow.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class Threadsins1
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_Int_tracks_slow.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class Threadsins2
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_Int_tracks_slow.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class Threadsins3
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_Int_tracks_slow.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class Threadsins4
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_Int_tracks_slow.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class threadsoutH0
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_ext_tracks_fast.ogg",0.251189,1, 150};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class threadsoutH1
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_ext_tracks_fast.ogg",0.251189,1, 150};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class threadsoutH2
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_ext_tracks_fast.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class threadsoutH3
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_ext_tracks_fast.ogg",0.251189,1, 150};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class threadsoutH4
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_ext_tracks_fast.ogg",0.251189,1, 150};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";

			};
			class threadsouts0
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_ext_tracks_slow.ogg",0.251189,1, 150};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class threadsouts1
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_ext_tracks_slow.ogg",0.251189,1, 150};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class threadsouts2
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_ext_tracks_slow.ogg",0.251189,1, 150};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class threadsouts3
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_ext_tracks_slow.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class threadsouts4
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_ext_tracks_slow.ogg",0.251189,1, 150};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
		};
	};
	
	class CUP_MCV80_Base: Tank_F
	{
		soundEngineOffExt[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\engines\tracked_apc_03\tracked_apc_03_shut_ext.ogg",0.562341,1,200};
		soundEngineOffInt[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\engines\tracked_apc_03\tracked_apc_03_shut_int.ogg",0.398107,1};
		soundEngineOnExt[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\engines\tracked_apc_03\tracked_apc_03_start_ext.ogg",0.562341,1,200};
		soundEngineOnInt[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\engines\tracked_apc_03\tracked_apc_03_start_int.ogg",0.398107,1};
		class Sounds {
			class Idle_ext 
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\tracked_apc_03\tracked_apc_03_IDLE_EXT.ogg", 1.2,1, 400};
				frequency = "0.95	+	((rpm/	7000) factor[(400/	7000),(900/	7000)])*0.15";
				volume = "1*engineOn*camPos*(((rpm/	7000) factor[(200/	7000),(300/	7000)])	*	((rpm/	7000) factor[(1800/	7000),(1500/	7000)]))";
			};
			class Engine1_ext
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\tracked_apc_03\tracked_apc_03_HIGH_EXT.ogg", 1.3,1, 450};
				frequency = "0.25	+	((rpm/	7000) factor[(600/	7000),(7000/	7000)])*0.95";
				volume = "1*engineOn*camPos*(thrust factor[0,1])*(((rpm/	7000) factor[(850/	7000),(1100/	7000)])	*	((rpm/	7000) factor[(7000/	7000),(7000/	7000)]))";
			};
			class Engine2_ext
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\tracked_apc_03\tracked_apc_03_LOW_EXT.ogg", 1.3,1,550};
				frequency = "0.25	+	((rpm/	7000) factor[(600/	7000),(7000/	7000)])*0.95";
				volume = "1*engineOn*camPos*(thrust factor[1,0])*(((rpm/	7000) factor[(850/	7000),(1100/	7000)])	*	((rpm/	7000) factor[(7000/	7000),(7000/	7000)]))";
			};
			
			class Engine3_ext
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\tracked_apc_03\tracked_apc_03_DISTANCE.ogg", 1,1,1000};
				frequency = "0.25	+	((rpm/	7000) factor[(600/	7000),(7000/	7000)])*0.95";
				volume = "1*engineOn*camPos*(thrust factor[0,0.6])*(((rpm/	7000) factor[(850/	7000),(1100/	7000)])	*	((rpm/	7000) factor[(7000/	7000),(7000/	7000)]))";
			};
			class Engine4_ext 
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\tracked_apc_03\Burst_ext_1.ogg", 1,1,300};
				frequency = "0.95	+	((rpm/	7000) factor[(3800/	7000),(7000/	7000)])*0.1";
				volume = "engineOn*camPos*((rpm/	7000) factor[(4000/	7000),(7000/	7000)])";
			};
			class Idle_int 
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\tracked_apc_03\tracked_apc_03_IDLE_int.ogg", 0.75, 1};
				frequency = "0.95	+	((rpm/	7000) factor[(400/	7000),(900/	7000)])*0.15";
				volume = "1*engineOn*(1-camPos)*(((rpm/	7000) factor[(200/	7000),(300/	7000)])	*	((rpm/	7000) factor[(1800/	7000),(1500/	7000)]))";
			};class Engine_int
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\tracked_apc_03\tracked_apc_03_HIGH_int.ogg", 0.9, 1};
				frequency = "0.7	+	((rpm/	7000) factor[(600/	7000),(7000/	7000)])*0.95";
				volume = "1*engineOn*(1-camPos)*(thrust factor[0,1])*(((rpm/	7000) factor[(850/	7000),(1100/	7000)])	*	((rpm/	7000) factor[(7000/	7000),(7000/	7000)]))";
			};
			class Engine1_int
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\tracked_apc_03\tracked_apc_03_LOW_int.ogg", 0.5, 1};
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
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\engines\tracked_apc_03\Burst_int_1.ogg", 0, 1};
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
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\Exhaust\HIGH_4.ogg", 1,1,450};
				frequency = "0.9	+	((rpm/	7000) factor[(1400/	7000),(2100/	7000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	7000) factor[(1400/	7000),(1800/	7000)])	*	((rpm/	7000) factor[(2300/	7000),(2000/	7000)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\Exhaust\HIGH_4.ogg", 1,1,400};
				frequency = "0.9	+		((rpm/	7000) factor[(2100/	7000),(2800/	7000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	7000) factor[(1900/	7000),(2300/	7000)])	*	((rpm/	7000) factor[(3000/	7000),(2500/	7000)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\Exhaust\HIGH_4.ogg", 1,1,425};
				frequency = "0.9	+	((rpm/	7000) factor[(2800/	7000),(3600/	7000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	7000) factor[(2500/	7000),(3100/	7000)])	*	((rpm/	7000) factor[(7000/	7000),(3700/	7000)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\Exhaust\HIGH_4.ogg", 1,1,450};
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
			class ThreadsInH0
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_Int_tracks_fast.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsInH1
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_Int_tracks_fast.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsInH2
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_Int_tracks_fast.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsInH3
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_Int_tracks_fast.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsInH4
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_Int_tracks_fast.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class Threadsins0
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_Int_tracks_slow.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class Threadsins1
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_Int_tracks_slow.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class Threadsins2
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_Int_tracks_slow.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class Threadsins3
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_Int_tracks_slow.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class Threadsins4
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_Int_tracks_slow.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class threadsoutH0
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_ext_tracks_fast.ogg",0.251189,1, 150};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class threadsoutH1
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_ext_tracks_fast.ogg",0.251189,1, 150};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class threadsoutH2
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_ext_tracks_fast.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class threadsoutH3
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_ext_tracks_fast.ogg",0.251189,1, 150};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class threadsoutH4
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_ext_tracks_fast.ogg",0.251189,1, 150};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";

			};
			class threadsouts0
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_ext_tracks_slow.ogg",0.251189,1, 150};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class threadsouts1
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_ext_tracks_slow.ogg",0.251189,1, 150};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class threadsouts2
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_ext_tracks_slow.ogg",0.251189,1, 150};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class threadsouts3
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_ext_tracks_slow.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class threadsouts4
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_ext_tracks_slow.ogg",0.251189,1, 150};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
		};
	};
	
	class APC_Tracked_02_base_F;
	class CUP_BMP1_base: APC_Tracked_02_base_F
	{
		soundEngineOffExt[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\engines\bmp\bmp_shut_ext.ogg",0.562341,1,200};
		soundEngineOffInt[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\engines\bmp\bmp_shut_int.ogg",0.398107,1};
		soundEngineOnExt[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\engines\bmp\bmp_start_ext.ogg",0.562341,1,200};
		soundEngineOnInt[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\engines\bmp\bmp_start_int.ogg",0.398107,1};
		class Sounds {
			class Idle_ext 
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\bmp\bmp_IDLE_EXT.ogg", 1.2,1, 400};
				frequency = "0.95	+	((rpm/	7000) factor[(400/	7000),(900/	7000)])*0.15";
				volume = "1*engineOn*camPos*(((rpm/	7000) factor[(200/	7000),(300/	7000)])	*	((rpm/	7000) factor[(1800/	7000),(1500/	7000)]))";
			};
			class Engine1_ext
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\bmp\bmp_HIGH_EXT.ogg", 1.3,1, 450};
				frequency = "0.25	+	((rpm/	7000) factor[(600/	7000),(7000/	7000)])*0.95";
				volume = "1*engineOn*camPos*(thrust factor[0,1])*(((rpm/	7000) factor[(850/	7000),(1100/	7000)])	*	((rpm/	7000) factor[(7000/	7000),(7000/	7000)]))";
			};
			class Engine2_ext
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\bmp\bmp_LOW_EXT.ogg", 1.3,1,550};
				frequency = "0.25	+	((rpm/	7000) factor[(600/	7000),(7000/	7000)])*0.95";
				volume = "1*engineOn*camPos*(thrust factor[1,0])*(((rpm/	7000) factor[(850/	7000),(1100/	7000)])	*	((rpm/	7000) factor[(7000/	7000),(7000/	7000)]))";
			};
			
			class Engine3_ext
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\bmp\bmp_DISTANCE.ogg", 1,1,1000};
				frequency = "0.25	+	((rpm/	7000) factor[(600/	7000),(7000/	7000)])*0.95";
				volume = "1*engineOn*camPos*(thrust factor[0,0.6])*(((rpm/	7000) factor[(850/	7000),(1100/	7000)])	*	((rpm/	7000) factor[(7000/	7000),(7000/	7000)]))";
			};
			class Engine4_ext 
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\bmp\Burst_ext_1.ogg", 1,1,300};
				frequency = "0.95	+	((rpm/	7000) factor[(3800/	7000),(7000/	7000)])*0.1";
				volume = "engineOn*camPos*((rpm/	7000) factor[(4000/	7000),(7000/	7000)])";
			};
			class Idle_int 
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\bmp\bmp_IDLE_int.ogg", 0.75, 1};
				frequency = "0.95	+	((rpm/	7000) factor[(400/	7000),(900/	7000)])*0.15";
				volume = "1*engineOn*(1-camPos)*(((rpm/	7000) factor[(200/	7000),(300/	7000)])	*	((rpm/	7000) factor[(1800/	7000),(1500/	7000)]))";
			};class Engine_int
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\bmp\bmp_HIGH_int.ogg", 0.9, 1};
				frequency = "0.7	+	((rpm/	7000) factor[(600/	7000),(7000/	7000)])*0.95";
				volume = "1*engineOn*(1-camPos)*(thrust factor[0,1])*(((rpm/	7000) factor[(850/	7000),(1100/	7000)])	*	((rpm/	7000) factor[(7000/	7000),(7000/	7000)]))";
			};
			class Engine1_int
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\bmp\bmp_LOW_int.ogg", 0.5, 1};
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
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\engines\bmp\Burst_int_1.ogg", 0, 1};
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
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\Exhaust\HIGH_4.ogg", 1,1,450};
				frequency = "0.9	+	((rpm/	7000) factor[(1400/	7000),(2100/	7000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	7000) factor[(1400/	7000),(1800/	7000)])	*	((rpm/	7000) factor[(2300/	7000),(2000/	7000)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\Exhaust\HIGH_4.ogg", 1,1,400};
				frequency = "0.9	+		((rpm/	7000) factor[(2100/	7000),(2800/	7000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	7000) factor[(1900/	7000),(2300/	7000)])	*	((rpm/	7000) factor[(3000/	7000),(2500/	7000)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\Exhaust\HIGH_4.ogg", 1,1,425};
				frequency = "0.9	+	((rpm/	7000) factor[(2800/	7000),(3600/	7000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	7000) factor[(2500/	7000),(3100/	7000)])	*	((rpm/	7000) factor[(7000/	7000),(3700/	7000)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Engines\Exhaust\HIGH_4.ogg", 1,1,450};
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
			class ThreadsInH0
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_Int_tracks_fast.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsInH1
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_Int_tracks_fast.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsInH2
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_Int_tracks_fast.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsInH3
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_Int_tracks_fast.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsInH4
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_Int_tracks_fast.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class Threadsins0
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_Int_tracks_slow.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class Threadsins1
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_Int_tracks_slow.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class Threadsins2
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_Int_tracks_slow.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class Threadsins3
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_Int_tracks_slow.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class Threadsins4
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_Int_tracks_slow.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class threadsoutH0
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_ext_tracks_fast.ogg",0.251189,1, 150};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class threadsoutH1
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_ext_tracks_fast.ogg",0.251189,1, 150};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class threadsoutH2
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_ext_tracks_fast.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class threadsoutH3
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_ext_tracks_fast.ogg",0.251189,1, 150};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class threadsoutH4
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_ext_tracks_fast.ogg",0.251189,1, 150};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";

			};
			class threadsouts0
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_ext_tracks_slow.ogg",0.251189,1, 150};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class threadsouts1
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_ext_tracks_slow.ogg",0.251189,1, 150};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class threadsouts2
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_ext_tracks_slow.ogg",0.251189,1, 150};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class threadsouts3
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_ext_tracks_slow.ogg",0.251189,1};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class threadsouts4
			{
				sound[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\land_vehicles\Noises\Tracks\heavy_tracked_ext_tracks_slow.ogg",0.251189,1, 150};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
		};
	};
	
	
};