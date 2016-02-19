class CfgPatches
{
	class unit_config
	{
		units[]=
		{
			"TWC_warrior",
			"TWC_warrior_D"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"dg_ukbaf",
			"A3_Air_F",
			"A3_Weapons_F",
			"A3_Soft_F",
			"A3_data_F"
		};
		magazines[]={};
	};
};
class CfgFunctions
{
	class TWC
	{
		class FunctionsWarrior
		{
			file="twc_Warrior\functions";
			class AddAP
			{
			};
			class AddHE
			{
			};
			class RemoveAP
			{
			};
			class RemoveHE
			{
			};
		};
	};
};

class Extended_PostInit_EventHandlers
{
	class Twc_Warrior_init
	{
		init="execVM '\twc_framework\init.sqf';";
	};
};

class CfgMagazines
{
	class 140Rnd_30mm_MP_shells_Tracer_Yellow;
	class 60Rnd_30mm_APFSDS_shells;
	class TWC_30mm_3rnd_HE: 140Rnd_30mm_MP_shells_Tracer_Yellow
	{
		author="FakeMatty";
		scope=1;
		scopeArsenal=0;
		displayName="30mm HE";
		count=3;
	};
	class TWC_30mm_3rnd_AP: 60Rnd_30mm_APFSDS_shells
	{
		author="FakeMatty";
		scope=1;
		scopeArsenal=0;
		displayName="30mm AP";
		count=3;
	};
};
class CfgWeapons
{
	class HE;
	class AP;
	class autocannon_30mm;
	class LMG_coax;
	class ACE_ItemCore;
	class InventoryItem_Base_F;
	class TWC_GPMG: LMG_coax
	{
		displayname="GPMG";
	};
	class TWC_Rarden: autocannon_30mm
	{
		class AP: AP
		{
			displayname="L121A1 AP";
			magazineReloadTime=1.2;
			magazines[]=
			{
				"TWC_30mm_3rnd_AP"
			};
		};
	};
	class TWC_Rarden_AP: autocannon_30mm
	{
		class AP: AP
		{
			displayname="L121A1 HE";
			magazineReloadTime=1.2;
			magazines[]=
			{
				"TWC_30mm_3rnd_HE"
			};
		};
	};
	class TWC_30mm_HE_item: ACE_ItemCore
	{
		scope=2;
		picture="\twc_warrior\pictures\30mmHE.paa";
		displayName="30mm HE";
		descriptionShort="Adds 1 magazine of HE ammo to a warrior.";
		descriptionUse="";
		class ItemInfo: InventoryItem_Base_F
		{
			mass=30;
		};
	};
	class TWC_30mm_AP_item: ACE_ItemCore
	{
		scope=2;
		picture="\twc_warrior\pictures\30mmAP.paa";
		displayName="30mm AP";
		descriptionShort="Adds 1 magazine of AP ammo to a warrior.";
		descriptionUse="";
		class ItemInfo: InventoryItem_Base_F
		{
			mass=30;
		};
	};
};
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
	class TWC_warrior: Tank_F
	{
		scope=2;
		displayName="FV 510 Warrior";
		class Library
		{
			libTextDesc="$STR_BAF_CFGVEHICLES_BAF_FV510_D_LIBRARY0";
		};
		model="\DG_UKBAF\Vehicles\FV510Warrior\Wood\FV510_W_BAF";
		picture="\DG_UKBAF\Vehicles\FV510Warrior\Desert\Data\ui\picture_warrior_ca.paa";
		Icon="\DG_UKBAF\Vehicles\FV510Warrior\Desert\Data\ui\icon_warrior_ca.paa";
		mapSize=9.3000002;
		author="Deltagamer";
		aggregateReflectors[]=
		{
			
			{
				"Left",
				"Right"
			}
		};
		simulation="tankX";
		enginePower=485;
		maxOmega=241;
		peakTorque=2610;
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
				"(2610/2610)"
			},
			
			{
				"(2300/2300)",
				"(1900/2610)"
			},
			
			{
				"(4700/2300)",
				"(0/2610)"
			}
		};
		thrustDelay=0.30000001;
		clutchStrength=60;
		fuelCapacity=770;
		brakeIdleSpeed=1.78;
		latency=0.1;
		tankTurnForce=1300000;
		normalSpeedForwardCoef=0.5;
		idleRpm=610;
		redRpm=2300;
		engineLosses=25;
		transmissionLosses=15;
		class TransportMagazines
		{
			class _xx_UK3CB_BAF_30Rnd
			{
				magazine="UK3CB_BAF_30Rnd";
				count=8;
			};
			class _xx_UK3CB_BAF_30Rnd_T
			{
				magazine="UK3CB_BAF_30Rnd_T";
				count=2;
			};
			class _xx_UK3CB_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=2;
			};
			class _xx_UK3CB_UGL_FlareWhite_F
			{
				magazine="UGL_FlareWhite_F";
				count=2;
			};
			class _xx_UK3CB_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=2;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
			class _xx_Grenade
			{
				magazine="CUP_HandGrenade_L109A2_HE";
				count=2;
			};
			class _xx_UK3CB_BAF_20Rnd
			{
				magazine="UK3CB_BAF_20Rnd";
				count=2;
			};
			class _xx_UK3CB_BAF_20Rnd_T
			{
				magazine="UK3CB_BAF_20Rnd_T";
				count=1;
			};
			class _xx_UK3CB_BAF_200Rnd
			{
				magazine="UK3CB_BAF_200Rnd";
				count=2;
			};
			class _xx_UK3CB_BAF_200Rnd_T
			{
				magazine="UK3CB_BAF_200Rnd_T";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_Bandage
			{
				name="ACE_fieldDressing";
				count=5;
			};
			class _xx_Morphine
			{
				name="ACE_morphine";
				count=2;
			};
		};
		class TransportWeapons
		{
			class _xx_NLAW
			{
				Weapon="UK3CB_BAF_NLAW_Launcher";
				count=1;
			};
			class _xx_LAW
			{
				Weapon="HAFM_LAW";
				count=1;
			};
		};
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
				"2*(0.75^1)",
				"D3",
				"2*(0.75^2)",
				"D4",
				"2*(0.75^3)"
			};
			TransmissionRatios[]=
			{
				"High",
				5
			};
			gearBoxMode="auto";
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
				damping=75;
				steering=0;
				side="left";
				weight=100;
				mass=100;
				MOI=27;
				latStiffX=25;
				latStiffY=280;
				longitudinalStiffnessPerUnitGravity=100000;
				maxBrakeTorque=10000;
				sprungMass=2625;
				springStrength=200000;
				springDamperRate=24000;
				dampingRate=1;
				dampingRateInAir=4864;
				dampingRateDamaged=10;
				dampingRateDestroyed=10000;
				maxDroop=0.18000001;
				maxCompression=0.18000001;
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
		crew="BAF_Soldier_Crewman_Infantry_L_M_DG1";
		side=1;
		faction="DG_UKBAF_Faction";
		vehicleClass="Armored";
		accuracy=0.25;
		transportSoldier=7;
		memoryPointCargoLight="cargo light";
		typicalCargo[]=
		{
			"BAF_Soldier_Crewman_Infantry_L_M_DG1",
			"BAF_Soldier_Crewman_Infantry_L_M_DG1"
		};
		commanderCanSee=31;
		viewCargoShadow=1;
		viewCargoShadowDiff=0.050000001;
		viewCargoShadowAmb=0.5;
		getInAction="GetInHigh";
		getOutAction="GetOutHigh";
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		cargoAction[]=
		{
			"M113_Cargo03_EP1",
			"M113_Cargo02_EP1",
			"M113_Cargo02_EP1",
			"M113_Cargo02_EP1",
			"M113_Cargo02_EP1",
			"M113_Cargo02_EP1",
			"M113_Cargo02_EP1"
		};
		driverAction="Abrams_DriverOut";
		driverInAction="Abrams_Driver";
		armor=850;
		armorStructural=2;
		damageResistance=0.0054700002;
		cost=4000000;
		class HitPoints: HitPoints
		{
			class HitHull
			{
				armor=0.85000002;
				material=-1;
				name="telo";
				visual="zbytek";
				passThrough=1;
			};
			class HitEngine
			{
				armor=0.80000001;
				material=60;
				name="motor";
				visual="motor";
				passThrough=1;
			};
		};
		animationSourceHatch="";
		class AnimationSources: AnimationSources
		{
			class recoil_source
			{
				source="reload";
				weapon="TWC_Rarden";
			};
			class recoil_source_2
			{
				source="reload";
				weapon="TWC_Rarden_AP";
			};
		};
		maxSpeed=75;
		gearBox[]={-7,0,"+8","+7","+6.7","+4.2"};
		driverForceOptics=1;
		driverOpticsModel="DG_UKBAF\Vehicles\FV510Warrior\Desert\Data\driverTV_stryker";
		memoryPointDriverOptics="driverview";
		class ViewOptics: ViewOptics
		{
			visionMode[]=
			{
				"Normal",
				"NVG"
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="vyfuk start";
				direction="vyfuk konec";
				effect="ExhaustsEffectBig";
			};
		};
		insideSoundCoef=0.89999998;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunBeg="Usti hlavne";
				gunEnd="Konec hlavne";
				gunnerAction="Abrams_Gunner";
				gunnerInAction="Abrams_Gunner";
				weapons[]=
				{
					"TWC_Rarden",
					"TWC_Rarden_AP",
					"TWC_GPMG"
				};
				magazines[]=
				{
					"TWC_30mm_3rnd_AP",
					"TWC_30mm_3rnd_AP",
					"TWC_30mm_3rnd_AP",
					"TWC_30mm_3rnd_AP",
					"TWC_30mm_3rnd_AP",
					"TWC_30mm_3rnd_AP",
					"TWC_30mm_3rnd_AP",
					"TWC_30mm_3rnd_AP",
					"TWC_30mm_3rnd_AP",
					"TWC_30mm_3rnd_AP",
					"TWC_30mm_3rnd_AP",
					"TWC_30mm_3rnd_AP",
					"TWC_30mm_3rnd_AP",
					"TWC_30mm_3rnd_AP",
					"TWC_30mm_3rnd_AP",
					"TWC_30mm_3rnd_AP",
					"TWC_30mm_3rnd_AP",
					"TWC_30mm_3rnd_AP",
					"TWC_30mm_3rnd_AP",
					"TWC_30mm_3rnd_AP",
					"TWC_30mm_3rnd_HE",
					"TWC_30mm_3rnd_HE",
					"TWC_30mm_3rnd_HE",
					"TWC_30mm_3rnd_HE",
					"TWC_30mm_3rnd_HE",
					"TWC_30mm_3rnd_HE",
					"TWC_30mm_3rnd_HE",
					"TWC_30mm_3rnd_HE",
					"TWC_30mm_3rnd_HE",
					"TWC_30mm_3rnd_HE",
					"TWC_30mm_3rnd_HE",
					"TWC_30mm_3rnd_HE",
					"TWC_30mm_3rnd_HE",
					"TWC_30mm_3rnd_HE",
					"TWC_30mm_3rnd_HE",
					"TWC_30mm_3rnd_HE",
					"TWC_30mm_3rnd_HE",
					"TWC_30mm_3rnd_HE",
					"TWC_30mm_3rnd_HE",
					"TWC_30mm_3rnd_HE",
					"TWC_30mm_3rnd_HE",
					"TWC_30mm_3rnd_HE",
					"TWC_30mm_3rnd_HE",
					"TWC_30mm_3rnd_HE",
					"TWC_30mm_3rnd_HE",
					"TWC_30mm_3rnd_HE",
					"TWC_30mm_3rnd_HE",
					"TWC_30mm_3rnd_HE",
					"TWC_30mm_3rnd_HE",
					"1000Rnd_762x51_Belt_Yellow",
					"1000Rnd_762x51_Belt_Yellow"
				};
				soundServo[]=
				{
					"A3\sounds_f\dummysound",
					0.031622775,
					1,
					30
				};
				forceHideGunner=1;
				turretInfoType="RscWeaponRangeZeroing";
				discreteDistance[]={100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100,2400};
				discreteDistanceInitIndex=5;
				memoryPointGunnerOptics="gunnerview";
				minElev=-5;
				maxElev="+20";
				initElev=10;
				gunnerOutOpticsEffect[]={};
				gunnerOpticsEffect[]=
				{
					"TankGunnerOptics2",
					"OpticsBlur1",
					"OpticsCHAbera1"
				};
				gunnerForceOptics=1;
				class OpticsIn
				{
					class Wide
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX="+30";
						initAngleY=0;
						minAngleY=-100;
						maxAngleY="+100";
						initFov=0.2;
						minFov=0.2;
						maxFov=0.2;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={2};
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_w_F.p3d";
						gunnerOpticsEffect[]={};
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_n_F.p3d";
						initFov=0.039000001;
						minFov=0.039000001;
						maxFov=0.039000001;
					};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						body="obsTurret";
						gun="obsGun";
						animationSourceBody="obsTurret";
						animationSourceGun="obsGun";
						stabilizedInAxes=3;
						memoryPointGunnerOutOptics="commander_weapon_view";
						memoryPointGunnerOptics="commanderview";
						minElev=-25;
						maxElev="+60";
						initElev=0;
						minTurn=-360;
						maxTurn="+360";
						initTurn=0;
						weapons[]=
						{
							"SmokeLauncher"
						};
						magazines[]=
						{
							"SmokeLauncherMag",
							"SmokeLauncherMag"
						};
						soundServo[]=
						{
							"A3\sounds_f\dummysound",
							-1,
							"db-40",
							1,
							30
						};
						outGunnerMayFire=1;
						inGunnerMayFire=1;
						gunnerAction="Abrams_CommanderOut";
						gunnerInAction="Abrams_Commander";
						gunnerGetInAction="GetInHigh";
						gunnerGetOutAction="GetOutHigh";
						turretInfoType="RscWeaponRangeFinder";
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOpticsEffect[]={};
						class ViewOptics
						{
							initAngleX=0;
							minAngleX=-30;
							maxAngleX="+30";
							initAngleY=0;
							minAngleY=-100;
							maxAngleY="+100";
							initFov=0.155;
							minFov=0.034000002;
							maxFov=0.155;
							visionMode[]=
							{
								"Normal",
								"NVG",
								"Ti"
							};
							thermalMode[]={0,1};
						};
						startEngine=0;
						gunnerHasFlares=1;
					};
				};
			};
		};
		threat[]={1,1,0.30000001};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DG_UKBAF\Vehicles\FV510Warrior\Desert\Data\Warrior_ext.rvmat",
				"DG_UKBAF\Vehicles\FV510Warrior\Desert\Data\Warrior_ext_damage.rvmat",
				"DG_UKBAF\Vehicles\FV510Warrior\Desert\Data\Warrior_ext_destruct.rvmat",
				"DG_UKBAF\Vehicles\FV510Warrior\Desert\Data\Warrior_track.rvmat",
				"DG_UKBAF\Vehicles\FV510Warrior\Desert\Data\m1_abrams_track_metal_damage.rvmat",
				"DG_UKBAF\Vehicles\FV510Warrior\Desert\Data\m1_abrams_track_metal_destruct.rvmat"
			};
		};
		smokeLauncherGrenadeCount=6;
		smokeLauncherVelocity=14;
		smokeLauncherOnTurret=1;
		smokeLauncherAngle=120;
		transportMaxWeapons=22;
		transportMaxMagazines=500;
		attenuationEffectType="TankAttenuation";
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
			"A3\Sounds_F_EPB\Tracked\engines\engine1\epb_1_ext_start",
			0.79432821,
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
			0.79432821,
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
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_ext_1",
					0.79432821,
					1,
					200
				};
				frequency="0.95 + ((rpm/ 2300) factor[(400/ 2300),(750/ 2300)])*0.15";
				volume="engineOn*camPos*(((rpm/ 2300) factor[(100/ 2300),(200/ 2300)]) * ((rpm/ 2300) factor[(760/ 2300),(600/ 2300)]))";
			};
			class Engine
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_ext_2",
					0.89125091,
					1,
					240
				};
				frequency="0.8 + ((rpm/ 2300) factor[(620/ 2300),(910/ 2300)])*0.2";
				volume="engineOn*camPos*(((rpm/ 2300) factor[(620/ 2300),(750/ 2300)]) * ((rpm/ 2300) factor[(920/ 2300),(800/ 2300)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_ext_3",
					1.1220185,
					1,
					280
				};
				frequency="0.8 + ((rpm/ 2300) factor[(800/ 2300),(1150/ 2300)])*0.2";
				volume="engineOn*camPos*(((rpm/ 2300) factor[(800/ 2300),(900/ 2300)]) * ((rpm/ 2300) factor[(1150/ 2300),(960/ 2300)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_ext_4",
					1.2589254,
					1,
					320
				};
				frequency="0.8 + ((rpm/ 2300) factor[(960/ 2300),(1500/ 2300)])*0.2";
				volume="engineOn*camPos*(((rpm/ 2300) factor[(950/ 2300),(1100/ 2300)]) * ((rpm/ 2300) factor[(1500/ 2300),(1250/ 2300)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_ext_5",
					1.4125376,
					1,
					360
				};
				frequency="0.8 + ((rpm/ 2300) factor[(1200/ 2300),(1700/ 2300)])*0.1";
				volume="engineOn*camPos*(((rpm/ 2300) factor[(1250/ 2300),(1450/ 2300)]) * ((rpm/ 2300) factor[(1700/ 2300),(1560/ 2300)]))";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_ext_6",
					1.5848932,
					1,
					400
				};
				frequency="0.8 + ((rpm/ 2300) factor[(1520/ 2300),(2000/ 2300)])*0.1";
				volume="engineOn*camPos*(((rpm/ 2300) factor[(1570/ 2300),(1670/ 2300)]) * ((rpm/ 2300) factor[(2000/ 2300),(1800/ 2300)]))";
			};
			class Engine5_ext
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_ext_7",
					1.7782794,
					1,
					440
				};
				frequency="0.8 + ((rpm/ 2300) factor[(1800/ 2300),(2300/ 2300)])*0.1";
				volume="engineOn*camPos*((rpm/ 2300) factor[(1850/ 2300),(1950/ 2300)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_ext_1",
					1.1220185,
					1,
					200
				};
				frequency="0.8 + ((rpm/ 2300) factor[(400/ 2300),(750/ 2300)])*0.15";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(100/ 2300),(200/ 2300)]) * ((rpm/ 2300) factor[(760/ 2300),(600/ 2300)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_ext_2",
					1.4125376,
					1,
					200
				};
				frequency="0.8 + ((rpm/ 2300) factor[(620/ 2300),(910/ 2300)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(620/ 2300),(750/ 2300)]) * ((rpm/ 2300) factor[(920/ 2300),(800/ 2300)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_ext_3",
					1.7782794,
					1,
					230
				};
				frequency="0.8 + ((rpm/ 2300) factor[(800/ 2300),(1150/ 2300)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(800/ 2300),(900/ 2300)]) * ((rpm/ 2300) factor[(1150/ 2300),(960/ 2300)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_ext_4",
					1.9952624,
					1,
					290
				};
				frequency="0.8 + ((rpm/ 2300) factor[(960/ 2300),(1500/ 2300)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(950/ 2300),(1100/ 2300)]) * ((rpm/ 2300) factor[(1500/ 2300),(1250/ 2300)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_ext_5",
					1.7782794,
					1,
					350
				};
				frequency="0.8 + ((rpm/ 2300) factor[(1200/ 2300),(1700/ 2300)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(1250/ 2300),(1450/ 2300)]) * ((rpm/ 2300) factor[(1700/ 2300),(1560/ 2300)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_ext_6",
					2.2387211,
					1,
					400
				};
				frequency="0.8 + ((rpm/ 2300) factor[(1520/ 2300),(2000/ 2300)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(1570/ 2300),(1670/ 2300)]) * ((rpm/ 2300) factor[(2000/ 2300),(1800/ 2300)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_ext_7",
					2.5118864,
					1,
					450
				};
				frequency="0.8 + ((rpm/ 2300) factor[(1800/ 2300),(2300/ 2300)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2300) factor[(1850/ 2300),(1950/ 2300)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_int_1",
					0.50118721,
					1
				};
				frequency="0.8 + ((rpm/ 2300) factor[(400/ 2300),(750/ 2300)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/ 2300) factor[(100/ 2300),(200/ 2300)]) * ((rpm/ 2300) factor[(760/ 2300),(600/ 2300)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_int_2",
					0.35481337,
					1
				};
				frequency="0.8 + ((rpm/ 2300) factor[(620/ 2300),(910/ 2300)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 2300) factor[(620/ 2300),(750/ 2300)]) * ((rpm/ 2300) factor[(920/ 2300),(800/ 2300)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_int_3",
					0.39810717,
					1
				};
				frequency="0.8 + ((rpm/ 2300) factor[(800/ 2300),(1150/ 2300)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 2300) factor[(800/ 2300),(900/ 2300)]) * ((rpm/ 2300) factor[(1150/ 2300),(960/ 2300)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_int_4",
					0.44668359,
					1
				};
				frequency="0.8 + ((rpm/ 2300) factor[(960/ 2300),(1500/ 2300)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 2300) factor[(950/ 2300),(1100/ 2300)]) * ((rpm/ 2300) factor[(1500/ 2300),(1250/ 2300)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_int_5",
					0.50118721,
					1
				};
				frequency="0.8 + ((rpm/ 2300) factor[(1200/ 2300),(1700/ 2300)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/ 2300) factor[(1250/ 2300),(1450/ 2300)]) * ((rpm/ 2300) factor[(1700/ 2300),(1560/ 2300)]))";
			};
			class Engine4_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_int_6",
					0.56234133,
					1
				};
				frequency="0.8 + ((rpm/ 2300) factor[(1520/ 2300),(2000/ 2300)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/ 2300) factor[(1570/ 2300),(1670/ 2300)]) * ((rpm/ 2300) factor[(2000/ 2300),(1800/ 2300)]))";
			};
			class Engine5_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_int_7",
					0.63095737,
					1
				};
				frequency="0.8 + ((rpm/ 2300) factor[(1800/ 2300),(2300/ 2300)])*0.1";
				volume="engineOn*(1-camPos)*((rpm/ 2300) factor[(1850/ 2300),(1950/ 2300)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_1",
					0.63095737,
					1
				};
				frequency="0.8 + ((rpm/ 2300) factor[(400/ 2300),(750/ 2300)])*0.15";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(100/ 2300),(200/ 2300)]) * ((rpm/ 2300) factor[(760/ 2300),(600/ 2300)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_2",
					0.39810717,
					1
				};
				frequency="0.8 + ((rpm/ 2300) factor[(620/ 2300),(910/ 2300)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(620/ 2300),(750/ 2300)]) * ((rpm/ 2300) factor[(920/ 2300),(800/ 2300)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_3",
					0.44668359,
					1
				};
				frequency="0.8 + ((rpm/ 2300) factor[(800/ 2300),(1150/ 2300)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(800/ 2300),(900/ 2300)]) * ((rpm/ 2300) factor[(1150/ 2300),(960/ 2300)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_4",
					0.44668359,
					1
				};
				frequency="0.8 + ((rpm/ 2300) factor[(960/ 2300),(1500/ 2300)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(950/ 2300),(1100/ 2300)]) * ((rpm/ 2300) factor[(1500/ 2300),(1250/ 2300)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_5",
					0.50118721,
					1
				};
				frequency="0.8 + ((rpm/ 2300) factor[(1200/ 2300),(1700/ 2300)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(1250/ 2300),(1450/ 2300)]) * ((rpm/ 2300) factor[(1700/ 2300),(1560/ 2300)]))";
			};
			class Engine4_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_6",
					0.56234133,
					1
				};
				frequency="0.8 + ((rpm/ 2300) factor[(1520/ 2300),(2000/ 2300)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(1570/ 2300),(1670/ 2300)]) * ((rpm/ 2300) factor[(2000/ 2300),(1800/ 2300)]))";
			};
			class Engine5_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_7",
					0.63095737,
					1
				};
				frequency="0.8 + ((rpm/ 2300) factor[(1800/ 2300),(2300/ 2300)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2300) factor[(1850/ 2300),(1950/ 2300)])";
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
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_1",
					0.39810717,
					1,
					140
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 55) factor[(((-0) max 0)/ 55),(((-5) max 5)/ 55)]) * ((((-speed*3.6) max speed*3.6)/ 55) factor[(((-12) max 12)/ 55),(((-8) max 8)/ 55)]))";
			};
			class ThreadsOutH1
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_2",
					0.44668359,
					1,
					160
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 55) factor[(((-10) max 10)/ 55),(((-12) max 12)/ 55)]) * ((((-speed*3.6) max speed*3.6)/ 55) factor[(((-23) max 23)/ 55),(((-16) max 16)/ 55)]))";
			};
			class ThreadsOutH2
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_3",
					0.50118721,
					1,
					180
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 55) factor[(((-20) max 20)/ 55),(((-22) max 22)/ 55)]) * ((((-speed*3.6) max speed*3.6)/ 55) factor[(((-35) max 35)/ 55),(((-28) max 28)/ 55)]))";
			};
			class ThreadsOutH3
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_4",
					0.56234133,
					1,
					200
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 55) factor[(((-30) max 30)/ 55),(((-34) max 34)/ 55)]) * ((((-speed*3.6) max speed*3.6)/ 55) factor[(((-42) max 42)/ 55),(((-36) max 36)/ 55)]))";
			};
			class ThreadsOutH4
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_5",
					0.56234133,
					1,
					220
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/ 55) factor[(((-39) max 39)/ 55),(((-42) max 42)/ 55)])";
			};
			class ThreadsOutS0
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_1",
					0.31622776,
					1,
					120
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 55) factor[(((-0) max 0)/ 55),(((-5) max 5)/ 55)]) * ((((-speed*3.6) max speed*3.6)/ 55) factor[(((-12) max 12)/ 55),(((-8) max 8)/ 55)]))";
			};
			class ThreadsOutS1
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_2",
					0.35481337,
					1,
					140
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 55) factor[(((-10) max 10)/ 55),(((-12) max 12)/ 55)]) * ((((-speed*3.6) max speed*3.6)/ 55) factor[(((-23) max 23)/ 55),(((-16) max 16)/ 55)]))";
			};
			class ThreadsOutS2
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_3",
					0.39810717,
					1,
					160
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 55) factor[(((-20) max 20)/ 55),(((-22) max 22)/ 55)]) * ((((-speed*3.6) max speed*3.6)/ 55) factor[(((-35) max 35)/ 55),(((-28) max 28)/ 55)]))";
			};
			class ThreadsOutS3
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_4",
					0.44668359,
					1,
					180
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 55) factor[(((-30) max 30)/ 55),(((-34) max 34)/ 55)]) * ((((-speed*3.6) max speed*3.6)/ 55) factor[(((-42) max 42)/ 55),(((-36) max 36)/ 55)]))";
			};
			class ThreadsOutS4
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_5",
					0.50118721,
					1,
					200
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/ 55) factor[(((-39) max 39)/ 55),(((-42) max 42)/ 55)])";
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
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 55) factor[(((-0) max 0)/ 55),(((-5) max 5)/ 55)]) * ((((-speed*3.6) max speed*3.6)/ 55) factor[(((-12) max 12)/ 55),(((-8) max 8)/ 55)]))";
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
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 55) factor[(((-10) max 10)/ 55),(((-12) max 12)/ 55)]) * ((((-speed*3.6) max speed*3.6)/ 55) factor[(((-23) max 23)/ 55),(((-16) max 16)/ 55)]))";
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
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 55) factor[(((-20) max 20)/ 55),(((-22) max 22)/ 55)]) * ((((-speed*3.6) max speed*3.6)/ 55) factor[(((-35) max 35)/ 55),(((-28) max 28)/ 55)]))";
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
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 55) factor[(((-30) max 30)/ 55),(((-34) max 34)/ 55)]) * ((((-speed*3.6) max speed*3.6)/ 55) factor[(((-42) max 42)/ 55),(((-36) max 36)/ 55)]))";
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
				volume="engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/ 55) factor[(((-39) max 39)/ 55),(((-42) max 42)/ 55)])";
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
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 55) factor[(((-0) max 0)/ 55),(((-5) max 5)/ 55)]) * ((((-speed*3.6) max speed*3.6)/ 55) factor[(((-12) max 12)/ 55),(((-8) max 8)/ 55)]))";
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
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 55) factor[(((-10) max 10)/ 55),(((-12) max 12)/ 55)]) * ((((-speed*3.6) max speed*3.6)/ 55) factor[(((-23) max 23)/ 55),(((-16) max 16)/ 55)]))";
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
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 55) factor[(((-20) max 20)/ 55),(((-22) max 22)/ 55)]) * ((((-speed*3.6) max speed*3.6)/ 55) factor[(((-35) max 35)/ 55),(((-28) max 28)/ 55)]))";
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
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 55) factor[(((-30) max 30)/ 55),(((-34) max 34)/ 55)]) * ((((-speed*3.6) max speed*3.6)/ 55) factor[(((-42) max 42)/ 55),(((-36) max 36)/ 55)]))";
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
				volume="engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/ 55) factor[(((-39) max 39)/ 55),(((-42) max 42)/ 55)])";
			};
		};
	};
	class TWC_warrior_D: TWC_warrior
	{
		scope=2;
		displayName="FV 510 Warrior Desert";
		model="\DG_UKBAF\Vehicles\FV510Warrior\Desert\FV510_BAF";
	};
};
