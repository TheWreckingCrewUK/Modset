/* TWC Configuration Starts on Line: */
class CfgPatches
{
	class unit_config
	{
		requiredAddons[]=
		{
			"A3_Armor_F_Beta",
			"Burnes_crew_CTRG",
			"A3_Air_F",
			"A3_Weapons_F",
			"A3_Soft_F",
			"A3_data_F"
		};
		units[]={};
		weapons[]={};
	};
};
class DefaultEventhandlers;
class CfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
	};
	class Burnes_FV4034_base: Tank_F
	{
		vehicleClass="Armored";
		author="Cpl Burnes(15th MEU(SOC))";
		displayName="FV4034 Challenger 2 TWC";
		hasCommander="true";
		accuracy=0.30000001;
		maxSpeed=58;
		attenuationEffectType="TankAttenuation";
		insideSoundCoef=0.89999998;
		forceHideDriver=0;
		driverForceOptics=0;
		driverAction="T72_DriverOUT";
		driverInAction="Heli_Attack_01_pilot";
		getinAction="getInLow";
		getoutaction="getOutLow";
		LODTurnedOut=1;
		LODTurnedIn=1;
		viewdriverinexternal=0;
		model="\Burnes_challenger\Burnes_FV4034_T";
		picture="\A3\armor_f_gamma\MBT_02\Data\UI\MBT_02_Base_ca.paa";
		icon="\Burnes_challenger\M1A2\data\icomap_m1a2tusk_ca.paa";
		mapSize=9.5;
		soundGetIn[]=
		{
			"A3\Sounds_F_EPB\Tracked\noises\get_in_out",
			0.56234133,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F_EPB\Tracked\noises\get_in_out",
			0.56234133,
			1,
			20
		};
		soundDammage[]=
		{
			"",
			0.56234133,
			1
		};
		soundEngineOnInt[]=
		{
			"A3\Sounds_F_EPB\Tracked\engines\engine1\epb_1_int_start",
			0.63095737,
			1
		};
		soundEngineOnExt[]=
		{
			"\Burnes_Challenger\sounds\EngineOn.wss",
			1.7943282,
			1,
			200
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F_EPB\Tracked\engines\engine1\epb_1_int_stop",
			0.63095737,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F_EPB\Tracked\engines\engine1\epb_1_ext_stop",
			1.7943282,
			1,
			200
		};
		buildCrash0[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_08",
			1,
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_09",
			1,
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_10",
			1,
			1,
			200
		};
		buildCrash3[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_11",
			1,
			1,
			200
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.25,
			"buildCrash1",
			0.25,
			"buildCrash2",
			0.25,
			"buildCrash3",
			0.25
		};
		WoodCrash0[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_08",
			1,
			1,
			200
		};
		WoodCrash1[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_09",
			1,
			1,
			200
		};
		WoodCrash2[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_10",
			1,
			1,
			200
		};
		WoodCrash3[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_11",
			1,
			1,
			200
		};
		WoodCrash4[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_01",
			1,
			1,
			200
		};
		WoodCrash5[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_08",
			1,
			1,
			200
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.16599999,
			"woodCrash1",
			0.16599999,
			"woodCrash2",
			0.16599999,
			"woodCrash3",
			0.16599999,
			"woodCrash4",
			0.16599999,
			"woodCrash5",
			0.16599999
		};
		ArmorCrash0[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_08",
			1,
			1,
			200
		};
		ArmorCrash1[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_09",
			1,
			1,
			200
		};
		ArmorCrash2[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_10",
			1,
			1,
			200
		};
		ArmorCrash3[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_11",
			1,
			1,
			200
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.25,
			"ArmorCrash1",
			0.25,
			"ArmorCrash2",
			0.25,
			"ArmorCrash3",
			0.25
		};
		class Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"\Burnes_Challenger\sounds\ChallyEngine.wss",
					1,
					1,
					200
				};
				frequency="1";
				volume="engineOn*camPos*(((rpm/	2300) factor[(100/	2300),(200/	2300)])	*	((rpm/	2300) factor[(760/	2300),(600/	2300)]))";
			};
			class Engine
			{
				sound[]=
				{
					"\Burnes_Challenger\sounds\ChallyExt1.wss",
					2.8912508,
					1,
					240
				};
				frequency="1";
				volume="engineOn*camPos*(((rpm/	2300) factor[(420/	2300),(750/	2300)])	*	((rpm/	2300) factor[(920/	2300),(800/	2300)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"\Burnes_Challenger\sounds\Throttle.wss",
					2.1220186,
					1,
					280
				};
				frequency="0.8	+	((rpm/	2300) factor[(800/	2300),(1150/	2300)])*0.1";
				volume="engineOn*camPos*(((rpm/	2300) factor[(800/	2300),(2300/	2300)])	*	((rpm/	2300) factor[(1150/	2300),(960/	2300)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"\Burnes_Challenger\sounds\Mid.wss",
					3.2589254,
					1,
					320
				};
				frequency="0.8	+	((rpm/	2300) factor[(960/	2300),(1500/	2300)])*0.2";
				volume="engineOn*camPos*(((rpm/	2300) factor[(1550/	2300),(2300/	2300)])	*	((rpm/	2300) factor[(1500/	2300),(1250/	2300)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"\Burnes_Challenger\sounds\ChallyExt1.wss",
					3.4125376,
					1,
					360
				};
				frequency="0.8	+	((rpm/	2300) factor[(1200/	2300),(1700/	2300)])*0.15";
				volume="engineOn*camPos*(((rpm/	2300) factor[(1250/	2300),(1450/	2300)])	*	((rpm/	2300) factor[(1700/	2300),(1560/	2300)]))";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"\Burnes_Challenger\sounds\ChallyExt3.wss",
					3.5848932,
					1,
					400
				};
				frequency="0.8	+	((rpm/	2300) factor[(1520/	2300),(2000/	2300)])*0.15";
				volume="engineOn*camPos*(((rpm/	2300) factor[(1570/	2300),(1670/	2300)])	*	((rpm/	2300) factor[(2000/	2300),(1800/	2300)]))";
			};
			class Engine5_ext
			{
				sound[]=
				{
					"\Burnes_Challenger\sounds\ChallyExt3.wss",
					3.7782793,
					1,
					440
				};
				frequency="0.8	+	((rpm/	2300) factor[(1800/	2300),(2300/	2300)])*0.2";
				volume="engineOn*camPos*((rpm/	2300) factor[(1850/	2300),(1950/	2300)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"\Burnes_Challenger\sounds\ChallyEngine.wss",
					1.6220185,
					1,
					200
				};
				frequency="1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(100/	2300),(200/	2300)])	*	((rpm/	2300) factor[(760/	2300),(600/	2300)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"\Burnes_Challenger\sounds\ChallyExt1.wss",
					2.0125377,
					1,
					200
				};
				frequency="1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(620/	2300),(750/	2300)])	*	((rpm/	2300) factor[(920/	2300),(800/	2300)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"\Burnes_Challenger\sounds\ChallyExt1.wss",
					2.0782795,
					1,
					230
				};
				frequency="0.8	+	((rpm/	2300) factor[(800/	2300),(1150/	2300)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(800/	2300),(900/	2300)])	*	((rpm/	2300) factor[(1150/	2300),(960/	2300)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"\Burnes_Challenger\sounds\Mid.wss",
					2.0952623,
					1,
					290
				};
				frequency="0.8	+	((rpm/	2300) factor[(960/	2300),(1500/	2300)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(950/	2300),(1100/	2300)])	*	((rpm/	2300) factor[(1500/	2300),(1250/	2300)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"\Burnes_Challenger\sounds\ChallyExt1.wss",
					2.0782795,
					1,
					350
				};
				frequency="0.8	+	((rpm/	2300) factor[(1200/	2300),(1700/	2300)])*0.15";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1250/	2300),(1450/	2300)])	*	((rpm/	2300) factor[(1700/	2300),(1560/	2300)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[]=
				{
					"\Burnes_Challenger\sounds\ChallyExt1.wss",
					2.0387211,
					1,
					400
				};
				frequency="0.8	+	((rpm/	2300) factor[(1520/	2300),(2000/	2300)])*0.15";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1570/	2300),(1670/	2300)])	*	((rpm/	2300) factor[(2000/	2300),(1800/	2300)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[]=
				{
					"\Burnes_Challenger\sounds\ChallyExt1.wss",
					2.0118864,
					1,
					450
				};
				frequency="0.8	+	((rpm/	2300) factor[(1800/	2300),(2300/	2300)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2300) factor[(1850/	2300),(1950/	2300)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_int_1",
					0.50118721,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(400/	2300),(750/	2300)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/	2300) factor[(100/	2300),(200/	2300)])	*	((rpm/	2300) factor[(760/	2300),(600/	2300)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_int_2",
					0.35481337,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(620/	2300),(910/	2300)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	2300) factor[(620/	2300),(750/	2300)])	*	((rpm/	2300) factor[(920/	2300),(800/	2300)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_int_3",
					0.39810717,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(800/	2300),(1150/	2300)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	2300) factor[(800/	2300),(900/	2300)])	*	((rpm/	2300) factor[(1150/	2300),(960/	2300)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_int_4",
					0.44668359,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(960/	2300),(1500/	2300)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	2300) factor[(950/	2300),(1100/	2300)])	*	((rpm/	2300) factor[(1500/	2300),(1250/	2300)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_int_5",
					0.50118721,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(1200/	2300),(1700/	2300)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/	2300) factor[(1250/	2300),(1450/	2300)])	*	((rpm/	2300) factor[(1700/	2300),(1560/	2300)]))";
			};
			class Engine4_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_int_6",
					0.56234133,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(1520/	2300),(2000/	2300)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/	2300) factor[(1570/	2300),(1670/	2300)])	*	((rpm/	2300) factor[(2000/	2300),(1800/	2300)]))";
			};
			class Engine5_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_int_7",
					0.63095737,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(1800/	2300),(2300/	2300)])*0.1";
				volume="engineOn*(1-camPos)*((rpm/	2300) factor[(1850/	2300),(1950/	2300)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_1",
					0.63095737,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(400/	2300),(750/	2300)])*0.15";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(100/	2300),(200/	2300)])	*	((rpm/	2300) factor[(760/	2300),(600/	2300)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_2",
					0.39810717,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(620/	2300),(910/	2300)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(620/	2300),(750/	2300)])	*	((rpm/	2300) factor[(920/	2300),(800/	2300)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_3",
					0.44668359,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(800/	2300),(1150/	2300)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(800/	2300),(900/	2300)])	*	((rpm/	2300) factor[(1150/	2300),(960/	2300)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_4",
					0.44668359,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(960/	2300),(1500/	2300)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(950/	2300),(1100/	2300)])	*	((rpm/	2300) factor[(1500/	2300),(1250/	2300)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_5",
					0.50118721,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(1200/	2300),(1700/	2300)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1250/	2300),(1450/	2300)])	*	((rpm/	2300) factor[(1700/	2300),(1560/	2300)]))";
			};
			class Engine4_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_6",
					0.56234133,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(1520/	2300),(2000/	2300)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1570/	2300),(1670/	2300)])	*	((rpm/	2300) factor[(2000/	2300),(1800/	2300)]))";
			};
			class Engine5_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_7",
					0.63095737,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(1800/	2300),(2300/	2300)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2300) factor[(1850/	2300),(1950/	2300)])";
			};
			class NoiseInt
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\noises\noise_tank_int_1",
					0.50118721,
					1
				};
				frequency="1";
				volume="(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class NoiseExt
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\noises\noise_tank_ext_1",
					0.89125091,
					1,
					50
				};
				frequency="1";
				volume="camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0
			{
				sound[]=
				{
					"Burnes_Challenger\M1A2\sounds\vehicles\tracked\M1A1\ext\ext-m1treads-hard-01",
					0.29810718,
					1,
					140
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsOutH1
			{
				sound[]=
				{
					"Burnes_Challenger\M1A2\sounds\vehicles\tracked\M1A1\ext\ext-m1treads-hard-02",
					0.29810718,
					1,
					160
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsOutH2
			{
				sound[]=
				{
					"Burnes_Challenger\M1A2\sounds\vehicles\tracked\M1A1\ext\ext-m1treads-hard-03",
					0.29810718,
					1,
					180
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsOutH3
			{
				sound[]=
				{
					"Burnes_Challenger\M1A2\sounds\vehicles\tracked\M1A1\ext\ext-m1treads-hard-04",
					0.29810718,
					1,
					200
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsOutH4
			{
				sound[]=
				{
					"Burnes_Challenger\M1A2\sounds\vehicles\tracked\M1A1\ext\ext-m1treads-hard-05",
					0.29810718,
					1,
					220
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class ThreadsOutS0
			{
				sound[]=
				{
					"Burnes_Challenger\M1A2\sounds\vehicles\tracked\M1A1\ext\ext-m1treads-soft-01",
					0.19810717,
					1,
					120
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsOutS1
			{
				sound[]=
				{
					"Burnes_Challenger\M1A2\sounds\vehicles\tracked\M1A1\ext\ext-m1treads-soft-02",
					0.19810717,
					1,
					140
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsOutS2
			{
				sound[]=
				{
					"Burnes_Challenger\M1A2\sounds\vehicles\tracked\M1A1\ext\ext-m1treads-soft-03",
					0.19810717,
					1,
					160
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsOutS3
			{
				sound[]=
				{
					"Burnes_Challenger\M1A2\sounds\vehicles\tracked\M1A1\ext\ext-m1treads-soft-04",
					0.19810717,
					1,
					180
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsOutS4
			{
				sound[]=
				{
					"Burnes_Challenger\M1A2\sounds\vehicles\tracked\M1A1\ext\ext-m1treads-soft-05",
					0.19810717,
					1,
					200
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class ThreadsInH0
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_1",
					0.25118864,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-0) max 0)/	55),(((-5) max 5)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-12) max 12)/	55),(((-8) max 8)/	55)]))";
			};
			class ThreadsInH1
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_2",
					0.2818383,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-10) max 10)/	55),(((-12) max 12)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-23) max 23)/	55),(((-16) max 16)/	55)]))";
			};
			class ThreadsInH2
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_3",
					0.31622776,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-20) max 20)/	55),(((-22) max 22)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-35) max 35)/	55),(((-28) max 28)/	55)]))";
			};
			class ThreadsInH3
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_4",
					0.35481337,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-30) max 30)/	55),(((-34) max 34)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-42) max 42)/	55),(((-36) max 36)/	55)]))";
			};
			class ThreadsInH4
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_5",
					0.39810717,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/	55) factor[(((-39) max 39)/	55),(((-42) max 42)/	55)])";
			};
			class ThreadsInS0
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_1",
					0.31622776,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-0) max 0)/	55),(((-5) max 5)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-12) max 12)/	55),(((-8) max 8)/	55)]))";
			};
			class ThreadsInS1
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_2",
					0.31622776,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-10) max 10)/	55),(((-12) max 12)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-23) max 23)/	55),(((-16) max 16)/	55)]))";
			};
			class ThreadsInS2
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_3",
					0.35481337,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-20) max 20)/	55),(((-22) max 22)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-35) max 35)/	55),(((-28) max 28)/	55)]))";
			};
			class ThreadsInS3
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_4",
					0.35481337,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-30) max 30)/	55),(((-34) max 34)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-42) max 42)/	55),(((-36) max 36)/	55)]))";
			};
			class ThreadsInS4
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_5",
					0.39810717,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/	55) factor[(((-39) max 39)/	55),(((-42) max 42)/	55)])";
			};
		};
		simulation="tankX";
		latency=0.1;
		enginePower=895;
		maxOmega=241;
		peakTorque=2306;
		torqueCurve[]=
		{
			
			{
				"(610/2300)",
				0
			},
			
			{
				"(1000/2300)",
				"(1600/2610)"
			},
			
			{
				"(1400/2300)",
				1
			},
			
			{
				"(2300/2300)",
				"(2000/2610)"
			},
			
			{
				"(4700/2300)",
				"(0/2610)"
			}
		};
		thrustDelay=0.1;
		antiRollbarForceCoef=71294;
		clutchStrength=40;
		fuelCapacity=1592;
		brakeIdleSpeed=1;
		tankTurnForce=750000;
		memoryPointTrackFLL="wheel_1_2_bound";
		memoryPointTrackFLR="wheel_1_3_bound";
		memoryPointTrackFRR="wheel_1_4_bound";
		memoryPointTrackFRL="wheel_1_5_bound";
		memoryPointTrackBLL="wheel_2_2_bound";
		memoryPointTrackBLR="wheel_2_3_bound";
		memoryPointTrackBRR="wheel_2_4_bound";
		memoryPointTrackBRL="wheel_2_5_bound";
		MemoryPointTrack1L="";
		MemoryPointTrack2L="";
		idleRpm=200;
		redRpm=2300;
		engineLosses=25;
		transmissionLosses=15;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-2.2349999,
				"N",
				0,
				"CD0",
				"2*(0.75^(-10))",
				"CD1",
				"2*(0.75^(-9))",
				"CD2",
				"2*(0.75^(-8))",
				"CD3",
				"2*(0.75^(-7))",
				"CD4",
				"2*(0.75^(-6))",
				"CD5",
				"2*(0.75^(-5))",
				"CD6",
				"2*(0.75^(-4))",
				"CD7",
				"2*(0.75^(-3))",
				"CD8",
				"2*(0.75^(-2))",
				"CD9",
				"2*(0.75^(-1))",
				"D1",
				"2*(0.75^0)",
				"D2",
				"2*(0.75^0.9)",
				"D3",
				"2*(0.75^1.9)",
				"D4",
				"2*(0.75^2.8)"
			};
			TransmissionRatios[]=
			{
				"High",
				6
			};
			gearBoxMode="full-auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			transmissionDelay=0;
		};
		class Wheels
		{
			class L2
			{
				boneName="wheel_podkoloL1";
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				damping=40;
				steering=0;
				side="left";
				weight=150;
				mass=150;
				MOI=38.5;
				latStiffX=25;
				latStiffY=280;
				longitudinalStiffnessPerUnitGravity=100000;
				maxBrakeTorque=13000;
				sprungMass=2625;
				springStrength=584000;
				springDamperRate=60000;
				dampingRate=0.1;
				dampingRateInAir=7220;
				dampingRateDamaged=10;
				dampingRateDestroyed=10000;
				maxDroop=0.15000001;
				maxCompression=0.15000001;
				frictionVsSlipGraph[]=
				{
					{0,5},
					{0.5,5},
					{1,5}
				};
			};
			class L3: L2
			{
				boneName="wheel_podkolol2";
				center="wheel_1_3_axis";
				boundary="wheel_1_3_bound";
			};
			class L4: L2
			{
				boneName="wheel_podkolol3";
				center="wheel_1_4_axis";
				boundary="wheel_1_4_bound";
			};
			class L5: L2
			{
				boneName="wheel_podkolol4";
				center="wheel_1_5_axis";
				boundary="wheel_1_5_bound";
			};
			class L6: L2
			{
				boneName="wheel_podkolol5";
				center="wheel_1_6_axis";
				boundary="wheel_1_6_bound";
			};
			class L7: L2
			{
				boneName="wheel_podkolol6";
				center="wheel_1_7_axis";
				boundary="wheel_1_7_bound";
			};
			class L9: L2
			{
				boneName="wheel_podkolol9";
				center="wheel_1_9_axis";
				boundary="wheel_1_9_bound";
				sprungMass=1500;
				springStrength=37500;
				springDamperRate=7500;
				maxDroop=0;
				maxCompression=0;
			};
			class L1: L2
			{
				boneName="";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				sprungMass=1500;
				springStrength=37500;
				springDamperRate=7500;
				maxDroop=0;
				maxCompression=0;
			};
			class R2: L2
			{
				boneName="wheel_podkolop1";
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				side="right";
			};
			class R3: R2
			{
				boneName="wheel_podkolop2";
				center="wheel_2_3_axis";
				boundary="wheel_2_3_bound";
			};
			class R4: R2
			{
				boneName="wheel_podkolop3";
				center="wheel_2_4_axis";
				boundary="wheel_2_4_bound";
			};
			class R5: R2
			{
				boneName="wheel_podkolop4";
				center="wheel_2_5_axis";
				boundary="wheel_2_5_bound";
			};
			class R6: R2
			{
				boneName="wheel_podkolop5";
				center="wheel_2_6_axis";
				boundary="wheel_2_6_bound";
			};
			class R7: R2
			{
				boneName="wheel_podkolop6";
				center="wheel_2_7_axis";
				boundary="wheel_2_7_bound";
			};
			class R9: R2
			{
				boneName="wheel_podkolop9";
				center="wheel_2_9_axis";
				boundary="wheel_2_9_bound";
				sprungMass=1500;
				springStrength=37500;
				springDamperRate=7500;
				maxDroop=0;
				maxCompression=0;
			};
			class R1: R2
			{
				boneName="";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				sprungMass=1500;
				springStrength=37500;
				springDamperRate=7500;
				maxDroop=0;
				maxCompression=0;
			};
		};
		cost=100000;
		damageResistance=0.04222887e-006;
		crewVulnerable="false";
		armor=600;
		armorStructural=5;
		class AGM_SelfActions
		{
			class AGM_ResetFCS
			{
				displayName="$STR_AGM_FireControlSystem_ResetFCS";
				condition="(count (vehicle _player getVariable ['AGM_FCSMagazines', []]) > 1) and (_player == gunner (vehicle _player))";
				statement="[vehicle _player] call AGM_FCS_fnc_reset;";
				showDisabled=0;
				priority=-1;
			};
		};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=0.20;
				material=-1;
				name="telo";
				visual="zbytek";
				passThrough=0.80000001;
				minimalHit=0.12;
				explosionShielding=1e-003;
				radius=0.25000001;
			};
			class HitEngine: HitEngine
			{
				armor=0.50000001;
				material=-1;
				name="motor";
				passThrough=0.1;
				minimalHit=0.1;
				explosionShielding=1e-006;
				radius=0.15000001;
			};
			class HitLTrack: HitLTrack
			{
				armor=0.1;
				material=-1;
				name="pas_L";
				passThrough=0;
				minimalHit=0.02;
				explosionShielding=1e-006;
				radius=0.15000001;
			};
			class HitRTrack: HitRTrack
			{
				armor=0.1;
				material=-1;
				name="pas_P";
				passThrough=0;
				minimalHit=0.02;
				explosionShielding=1e-006;
				radius=0.15000001;
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				primaryGunner="true";
				gunnerInAction="gunner_MRAP_01";
				gunnerAction="gunner_MRAP_01";
				forceHideGunner=1;
				proxyIndex=1;
				LODTurnedOut=1200;
				body="mainturret";
				gun="maingun";
				animationSourceBody="mainturret";
				animationSourceGun="maingun";
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gunnerCompartments="Compartment3";
						LODTurnedOut=1;
						LODTurnedIn="View_Commander";
						commanding=3;
						gunnerAction="commander_mbt3_out";
						gunnerInAction="passenger_mrap_03exgunner";
						getinAction="Heli_Attack_01_Pilot_Enter";
						getoutaction="Heli_Attack_01_Pilot_Exit";
						animationSourceHatch="hatchCommander";
						proxyIndex=1;
						hasGunner=1;
						usepip=1;
						isPersonTurret=0;
						enabledByAnimationSource="hatchCommander";
						body="ObsTurret";
						gun="ObsGun";
						animationSourceBody="ObsTurret";
						animationSourceGun="ObsGun";
						maxHorizontalRotSpeed=1.8;
						maxVerticalRotSpeed=1.8;
						stabilizedInAxes="StabilizedInAxesBoth";
						soundServo[]=
						{
							"\Burnes_challenger\data\gun_elevate2",
							0.31778279,
							1,
							10
						};
						minElev=-25;
						maxElev=60;
						initElev=0;
						minTurn=-360;
						maxTurn=360;
						initTurn=0;
						weapons[]=
						{
							"SmokeLauncher",
							"Laserdesignator_mounted"
						};
						magazines[]=
						{
							"SmokeLauncherMag",
							"Laserbatteries"
						};
						discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200};
						discreteDistanceInitIndex=2;
						memoryPointGunnerOptics="commanderview";
						gunnerForceOptics=0;
						gunnerOutForceOptics=0;
						inGunnerMayFire=1;
						outGunnerMayFire=0;
						gunnerOpticsModel="\Burnes_Challenger\data\Burnes_fv4034_opticC";
						turretInfoType="RscOptics_crows";
						gunnerOutOpticsModel="";
						gunnerOpticsEffect[]=
						{
							"TankGunnerOptics1",
							"OpticsBlur2"
						};
						gunnerHasFlares=1;
						class ViewOptics: ViewOptics
						{
							initAngleX=0;
							minAngleX=-30;
							maxAngleX=30;
							initAngleY=0;
							minAngleY=-100;
							maxAngleY=100;
							initFov=0.69999999;
							minFov=0.0099999998;
							maxFov=0.69999999;
							visionMode[]=
							{
								"Normal",
								"NVG",
								"TI"
							};
							thermalMode[]={0,1};
						};
						startEngine=0;
						viewGunnerInExternal=1;
						class HitPoints
						{
							class HitTurret
							{
								armor=0.20000001;
								material=-1;
								name="vez";
								visual="vezVelitele";
								passThrough=0.40000001;
								minimalHit=0.1;
								explosionShielding=1e-006;
								radius=0.15000001;
							};
							class HitGun
							{
								armor=0.20000001;
								material=-1;
								name="zbranVelitele";
								visual="zbranVelitele";
								passThrough=0;
								minimalHit=0.1;
								explosionShielding=5.9999997e-006;
								radius=0.15000001;
							};
						};
					};
					class LoaderTurret: NewTurret
					{
						LODTurnedOut=0;
						gunnerCompartments="Compartment1";
						gunnerAction="commander_mbt3_out";
						gunnerInAction="passenger_mrap_03exgunner";
						startEngine=0;
						gunnerCanSee="CanSeeCompass";
						outGunnerMayFire=0;
						inGunnerMayFire=1;
						animationSourceHatch="hatchLoader";
						commanding=1;
						gunnerName="Loader";
						memoryPointsGetInGunner="pos_Cargo";
						proxyType="CPGunner";
						proxyIndex=2;
						memoryPointsGetInGunnerDir="pos_Cargo_dir";
						hasGunner=1;
						usepip=1;
						viewGunnerInExternal=1;
						body="LoaderTurret";
						gun="LoaderGun";
						animationSourceBody="LoaderTurret";
						animationSourceGun="LoaderGun";
						maxHorizontalRotSpeed=1.8;
						maxVerticalRotSpeed=1.8;
						stabilizedInAxes="StabilizedInAxesBoth";
						soundServo[]=
						{
							"\Burnes_challenger\data\gun_elevate2",
							0.1177828,
							1,
							10
						};
						minElev=-10;
						maxElev=25;
						initElev=0;
						minTurn=-360;
						maxTurn=360;
						initTurn=0;
						memoryPointGun="usti hlavne3";
						gunBeg="usti hlavne3";
						gunEnd="konec hlavne3";
						weapons[]=
						{
							"MEU_M2_TITAN"
						};
						magazines[]=
						{
							"500Rnd_127x99_mag_Tracer_Red",
							"500Rnd_127x99_mag_Tracer_Red"
						};
						discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
						discreteDistanceInitIndex=2;
						memoryPointGunnerOutOptics="loaderview";
						memoryPointGunnerOptics="loaderview";
						gunnerForceOptics=0;
						gunnerOutForceOptics=0;
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
						turretInfoType="RscOptics_crows";
						gunnerOutOpticsModel="";
						gunnerOpticsEffect[]=
						{
							"TankGunnerOptics1",
							"OpticsBlur2"
						};
						gunnerHasFlares=1;
						class Turrets
						{
						};
						class ViewOptics: ViewOptics
						{
							initAngleX=0;
							minAngleX=-30;
							maxAngleX=30;
							initAngleY=0;
							minAngleY=-100;
							maxAngleY=100;
							initFov=0.69999999;
							minFov=0.050000001;
							maxFov=1;
							visionMode[]=
							{
								"Normal",
								"NVG",
								"TI"
							};
							thermalMode[]={0,1};
						};
						class ViewGunner
						{
							initAngleX=5;
							minAngleX=-65;
							maxAngleX=85;
							initAngleY=0;
							minAngleY=-150;
							maxAngleY=150;
							initFov=0.69999999;
							minFov=0.15000001;
							maxFov=1.1;
							visionMode[]=
							{
								"Normal",
								"NVG",
								"TI"
							};
							thermalMode[]={0,1};
						};
					};
				};
				memoryPointGun="usti hlavne2";
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				weapons[]=
				{
					"CHAL_125_MAINGUN",
					"CHAL_COAX_M240"
				};
				soundServo[]=
				{
					"A3\sounds_f\dummysound",
					0.031622775,
					1,
					30
				};
				magazines[]=
				{
					"Laserbatteries",
					"CHAL_SABOT_MAG",
					"CHAL_TANK_MAG",
					"CHAL_SABOT_MAG",
					"CHAL_SABOT_MAG",
					"CHAL_SABOT_MAG",
					"CHAL_SABOT_MAG",
					"CHAL_SABOT_MAG",
					"CHAL_SABOT_MAG",
					"CHAL_SABOT_MAG",
					"CHAL_SABOT_MAG",
					"CHAL_SABOT_MAG",
					"CHAL_SABOT_MAG",
					"CHAL_SABOT_MAG",
					"CHAL_SABOT_MAG",
					"CHAL_SABOT_MAG",
					"CHAL_SABOT_MAG",
					"CHAL_SABOT_MAG",
					"CHAL_SABOT_MAG",
					"CHAL_SABOT_MAG",
					"CHAL_SABOT_MAG",
					"CHAL_SABOT_MAG",
					"CHAL_SABOT_MAG",
					"CHAL_SABOT_MAG",
					"CHAL_SABOT_MAG",
					"CHAL_SABOT_MAG",
					"CHAL_TANK_MAG",
					"CHAL_TANK_MAG",
					"CHAL_TANK_MAG",
					"CHAL_TANK_MAG",
					"CHAL_TANK_MAG",
					"CHAL_TANK_MAG",
					"CHAL_TANK_MAG",
					"CHAL_TANK_MAG",
					"CHAL_TANK_MAG",
					"CHAL_TANK_MAG",
					"CHAL_TANK_MAG",
					"CHAL_TANK_MAG",
					"CHAL_TANK_MAG",
					"CHAL_TANK_MAG",
					"CHAL_TANK_MAG",
					"CHAL_TANK_MAG",
					"CHAL_TANK_MAG",
					"CHAL_TANK_MAG",
					"CHAL_2000RND_762_M240",
					"CHAL_2000RND_762_M240",
					"CHAL_2000RND_762_M240",
					"CHAL_2000RND_762_M240",
					"CHAL_2000RND_762_M240",
					"CHAL_WP_MAG",
					"CHAL_WP_MAG"
				};
				minElev=-10;
				maxElev=20;
				initElev=20;
				turretInfoType="RscOptics_MBT_03_gunner";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000,3100,3200,3300,3400,3500};
				discreteDistanceInitIndex=4;
				allowTabLock="true";
				memoryPointGunnerOptics="gunnerview";
				commanding=2;
				gunnerOutOpticsModel="";
				gunnerOutOpticsEffect[]={};
				gunnerOpticsEffect[]={};
				gunnerForceOptics=0;
				usePip=1;
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.30000001;
						minFov=0.30000001;
						maxFov=0.30000001;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={2,3};
						gunnerOpticsModel="\Burnes_Challenger\data\Burnes_fv4034_opticG1";
						gunnerOpticsEffect[]={};
					};
					class Medium: Wide
					{
						gunnerOpticsModel="\Burnes_Challenger\data\Burnes_fv4034_opticG2";
						initFov=0.050000001;
						minFov=0.050000001;
						maxFov=0.050000001;
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\Burnes_Challenger\data\Burnes_fv4034_opticG3";
						initFov=0.0099999998;
						minFov=0.0099999998;
						maxFov=0.0099999998;
					};
				};
				startEngine=0;
				inGunnerMayFire=1;
				viewGunnerInExternal=0;
				class HitPoints
				{
					class HitTurret
					{
						armor=0.8;
						material=-1;
						name="vez";
						visual="vez";
						passThrough=0;
						minimalHit=0.02;
						explosionShielding=0.30000001;
						radius=0.25;
					};
					class HitGun
					{
						armor=0.8;
						material=-1;
						name="zbran";
						visual="";
						passThrough=0;
						minimalHit=0;
						explosionShielding=1;
						radius=0.25;
					};
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source="reload";
				weapon="MEU_M2_TITAN";
			};
			class ReloadMagazine
			{
				source="reloadmagazine";
				weapon="MEU_M2_TITAN";
			};
			class Revolving
			{
				source="revolving";
				weapon="MEU_M2_TITAN";
			};
			class muzzle_rot_cannon
			{
				source="ammorandom";
				weapon="CHAL_125_MAINGUN";
			};
			class muzzle_rot_coax
			{
				source="ammorandom";
				weapon="MEU_COAX_M240";
			};
			class muzzle_rot_HMG
			{
				source="ammorandom";
				weapon="MEU_M2_TITAN";
			};
			class recoil_source
			{
				source="reloadmagazine";
				weapon="CHAL_125_MAINGUN";
			};
			class muzzle_rot_LoaderGun
			{
				source="ammorandom";
				weapon="MEU_LOADERGUN";
			};
			class comHatch
			{
				source="user";
				initPhase=0;
				animPeriod=0.5;
			};
			class comHatchInt
			{
				source="user";
				initPhase=0;
				animPeriod=0.5;
			};
			class loadHatch
			{
				source="user";
				initPhase=0;
				animPeriod=0.5;
			};
			class loadHatchInt
			{
				source="user";
				initPhase=0;
				animPeriod=0.5;
			};
			class flagHide
			{
				source="user";
				initPhase=0;
				animPeriod=0.1;
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"a3\data_f\default.rvmat",
				"a3\data_f\default.rvmat",
				"a3\data_f\default_destruct.rvmat"
			};
		};
		smokeLauncherGrenadeCount=24;
		smokeLauncherVelocity=14;
		smokeLauncherOnTurret=1;
		smokeLauncherAngle=270;
		class ViewOptics: ViewOptics
		{
			visionMode[]=
			{
				"Normal",
				"NVG",
				"Ti"
			};
			thermalMode[]={0,1};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust";
				direction="exhaust_dir";
				effect="ExhaustEffectTankBack";
			};
		};
		class Reflectors
		{
			class Left
			{
				color[]={1900,1300,950};
				ambient[]={5,5,5};
				position="L Svetlo";
				direction="konec L Svetlo";
				hitpoint="L Svetlo";
				selection="L Svetlo";
				size=1;
				innerAngle=50;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=1;
				useFlare=0;
				dayLight=0;
				flareSize=1;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
			class Right: Left
			{
				position="R Svetlo";
				direction="konec R Svetlo";
				hitpoint="R Svetlo";
				selection="R Svetlo";
				ambient[]={0.1,0.1,0.1,0.1};
			};
		};
		class UserActions
		{
			class abramsAmmoCount
			{
				displayName="Show ammo count";
				position="Crew_L";
				radius=10;
				onlyforplayer=0;
				showWindow=0;
				condition="true";
				statement="execVM '\Burnes_Challenger\Burnes_ammoCount.sqf'";
			};
			class AGMdumpRange
			{
				displayName="<t color='#3399FF'>Dump AGM Range Data</t>";
				position="Crew_L";
				radius=10;
				onlyforplayer=0;
				showWindow=0;
				condition="player in [gunner this]";
				statement="[this] execVM ""\Burnes_Challenger\Burnes_DumpRange.sqf""";
			};
			class TICommander
			{
				displayName="<t color='#33CC33'>CPS Thermal ON</t>";
				position="Crew_L";
				radius=10;
				onlyforplayer=0;
				showWindow=0;
				condition="player in [commander this]";
				statement="this setObjectTexture [1,""#(argb,512,512,1)r2t(rendertarget3,1.0)""];";
			};
			class NVCommander
			{
				displayName="<t color='#33CC33'>CPS Night-Vision ON</t>";
				position="Crew_L";
				radius=10;
				onlyforplayer=0;
				showWindow=0;
				condition="player in [commander this]";
				statement="this setObjectTexture [1,""#(argb,512,512,1)r2t(rendertarget300,1.0)""];";
			};
			class COCommander
			{
				displayName="<t color='#33CC33'>CPS Colour ON</t>";
				position="Crew_L";
				radius=10;
				onlyforplayer=0;
				showWindow=0;
				condition="player in [commander this]";
				statement="this setObjectTexture [1,""#(argb,512,512,1)r2t(rendertarget3000,1.0)""];";
			};
			class UnbuttonCommander
			{
				displayName="<t color='#3399FF'>Open Hatches</t>";
				position="Crew_L";
				radius=10;
				onlyforplayer=0;
				showWindow=0;
				condition="(player in [commander this]) && (this animationPhase ""comHatch"" == 0)";
				statement="this animate [""comHatch"",1];this animate [""LoadHatch"",1];this animate [""comHatchInt"",1];this animate [""LoadHatchInt"",1];";
			};
			class buttonCommander
			{
				displayName="<t color='#3399FF'>Close Hatches</t>";
				position="Crew_L";
				radius=10;
				onlyforplayer=0;
				showWindow=0;
				condition="(player in [commander this]) && (this animationPhase ""comHatch"" == 1)";
				statement="this animate [""comHatch"",0];this animate [""LoadHatch"",0];this animate [""comHatchInt"",0];this animate [""LoadHatchInt"",0];";
			};
			class SmokeScreen
			{
				userActionID=774;
				displayName="<t color='#FF0000'>Smoke Screen ON</t>";
				position="Crew_L";
				radius=10;
				onlyforplayer=0;
				showWindow=0;
				condition="player in [commander this]";
				statement="[vehicle player] execVM ""Burnes_challenger\SmokeScreen.sqf""";
			};
			class Callsign1
			{
				displayName="<t color='#33CC33'>set callsign 1-1</t>";
				position="Crew_L";
				radius=2;
				onlyforplayer=0;
				showWindow=0;
				condition="player in [driver this]";
				statement="this setObjectTextureGlobal [5,""\Burnes_Challenger\data\callsigns\11.paa""];";
			};
			class Callsign2
			{
				displayName="<t color='#33CC33'>set callsign 1-2</t>";
				position="Crew_L";
				radius=2;
				onlyforplayer=0;
				showWindow=0;
				condition="player in [driver this]";
				statement="this setObjectTextureGlobal [5,""\Burnes_Challenger\data\callsigns\12.paa""];";
			};
			class Callsign3
			{
				displayName="<t color='#33CC33'>set callsign 1-3</t>";
				position="Crew_L";
				radius=2;
				onlyforplayer=0;
				showWindow=0;
				condition="player in [driver this]";
				statement="this setObjectTextureGlobal [5,""\Burnes_Challenger\data\callsigns\13.paa""];";
			};
			class Callsign4
			{
				displayName="<t color='#33CC33'>set callsign 1-4</t>";
				position="Crew_L";
				radius=2;
				onlyforplayer=0;
				showWindow=0;
				condition="player in [driver this]";
				statement="this setObjectTextureGlobal [5,""\Burnes_Challenger\data\callsigns\14.paa""];";
			};
		};
		class RenderTargets
		{
			class VisionBlockChally
			{
				renderTarget="rendertarget31";
				class Camera
				{
					pointPosition="PIPport_pos";
					pointDirection="PIPport_dir";
					renderQuality=1;
					renderVisionMode=3;
					fov=1.5;
				};
			};
			class VisionBlockChally2
			{
				renderTarget="rendertarget32";
				class Camera
				{
					pointPosition="PIPport2_pos";
					pointDirection="PIPport2_dir";
					renderQuality=1;
					renderVisionMode=3;
					fov=1.5;
				};
			};
			class chally_CDUscreenTI
			{
				renderTarget="rendertarget3";
				class Camera
				{
					pointPosition="PIP0_pos";
					pointDirection="PIP0_dir";
					renderQuality=1;
					renderVisionMode=2;
					fov=1.2;
				};
			};
			class chally_CDUscreenNV
			{
				renderTarget="rendertarget300";
				class Camera
				{
					pointPosition="PIP0_pos";
					pointDirection="PIP0_dir";
					renderQuality=1;
					renderVisionMode=1;
					fov=1.2;
				};
			};
			class chally_CDUscreenCO
			{
				renderTarget="rendertarget3000";
				class Camera
				{
					pointPosition="PIP0_pos";
					pointDirection="PIP0_dir";
					renderQuality=1;
					renderVisionMode=0;
					fov=1.2;
				};
			};
			class gunnderRenderTarget
			{
				renderTarget="rendertarget40";
				class Camera
				{
					pointPosition="PIPgunner_pos";
					pointDirection="PIPgunner_dir";
					renderQuality=1;
					renderVisionMode=0;
					fov=1.1;
				};
			};
			class loaderRenderTarget
			{
				renderTarget="rendertarget35";
				class Camera
				{
					pointPosition="PIPloader_pos";
					pointDirection="PIPloader_dir";
					renderQuality=1;
					renderVisionMode=0;
					fov=1.1;
				};
			};
			class reverseRenderTarget
			{
				renderTarget="rendertarget66";
				class Camera
				{
					pointPosition="reversecam_pos";
					pointDirection="reversecam_dir";
					renderQuality=1;
					renderVisionMode=0;
					fov=1.1;
				};
			};
		};
	};
	class Burnes_FV4034_class_base: Burnes_FV4034_base
	{
		accuracy=0.5;
		side=1;
		faction="BAF";
		vehicleClass="Burnes_Vehicles";
		crew="Burnes_Crewman_CTRG";
		typicalCargo[]=
		{
			"Burnes_Crewman_CTRG"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"CDU1",
			"reversecam",
			"Camo2",
			"Camo3",
			"Callsign",
			"flags",
			"hatches"
		};
		class EventHandlers: DefaultEventhandlers
		{
			init="_this execVM ""Burnes_challenger\Burnes_VehicleInit.sqf"";";
		};
	};
	
	class Burnes_FV4034_01: Burnes_FV4034_class_base
	{
		hiddenSelectionsTextures[]=
		{
			"\Burnes_Challenger\data\PH\challenger2_woodland_co",
			"#(argb,512,512,1)r2t(rendertarget3000,1.0)",
			"#(argb,512,512,1)r2t(rendertarget66,1.0)",
			"\Burnes_Challenger\data\PH\challenger2_turret_wood_co.paa",
			"\Burnes_Challenger\data\PH\challengerV2_hull_wood_co.paa",
			"\Burnes_Challenger\data\callsigns\11.paa",
			"\Burnes_Challenger\data\callsigns\scot.paa",
			"\Burnes_Challenger\data\PH\hatches_co"
		};
		scope=2;
		accuracy=1000;
		displayName="FV4034 Challenger 2 TWC Woodland";
	};
	class Burnes_FV4034_02: Burnes_FV4034_class_base
	{
		hiddenSelectionsTextures[]=
		{
			"\Burnes_Challenger\data\PH\challenger2_desert_co.paa",
			"#(argb,512,512,1)r2t(rendertarget3000,1.0)",
			"#(argb,512,512,1)r2t(rendertarget66,1.0)",
			"\Burnes_Challenger\data\PH\challenger2_turret_des_co.paa",
			"\Burnes_Challenger\data\PH\challengerV2_hull_des_co.paa",
			"\Burnes_Challenger\data\callsigns\11.paa",
			"\Burnes_Challenger\data\callsigns\scot.paa",
			"\Burnes_Challenger\data\PH\hatches_des_co"
		};
		scope=2;
		accuracy=1000;
		displayName="FV4034 Challenger 2 TWC Desert";
	};

/* ***************************************************
*
*                    Start of TWC Config 
*                    
*****************************************************/
	class TWC_Challenger: Burnes_FV4034_01
	{
		scope = 2;
		side = 1;
		faction=TWC_Operation;
		author = "Burnes";
		maxSpeed=59;
		displayname="TWC Challenger 2";
		cost=100000;
		damageResistance=0.04222887e-006;
		crewVulnerable="false";
		armor=600;
		armorStructural=5;
		class TWCPoints: HitPoints
		{
			class TWCHull: HitHull
			{
				armor=0.20;
				material=-1;
				name="telo";
				visual="zbytek";
				passThrough=0.80000001;
				minimalHit=0.82;
				explosionShielding=1e-003;
				radius=0.25000001;
			};
			class TWCEngine: HitEngine
			{
				armor=0.50000001;
				material=-1;
				name="motor";
				passThrough=0.1;
				minimalHit=0.51;
				explosionShielding=1e-006;
				radius=0.15000001;
			};
			class TWCLTrack: HitLTrack
			{
				armor=0.1;
				material=-1;
				name="pas_L";
				passThrough=0;
				minimalHit=0.52;
				explosionShielding=1e-006;
				radius=0.15000001;
			};
			class TWCRTrack: HitRTrack
			{
				armor=0.1;
				material=-1;
				name="pas_P";
				passThrough=0;
				minimalHit=0.52;
				explosionShielding=1e-006;
				radius=0.15000001;
			};
		};
	};
};