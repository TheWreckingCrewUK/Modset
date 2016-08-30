class WeaponCloudsGun;
class Mode_SemiAuto;
class Mode_Burst;
class CfgPatches
{
	class ffaa_estatico
	{
		units[]=
		{
			"TWC_Milan"
		};
		weapons[]=
		{
			"ffaa_estatico_milan"
		};
		requiredVersion=1;
		requiredAddons[]=
		{
			"A3_Static_F_Gamma",
			"uk3cb_baf_equipment",
			"A3_CargoPoses_F",
			"A3_Armor_F_Slammer",
			"A3_Weapons_F"
		};
	};
};

class CfgFunctions
{
	class twc_Milan
	{
		tag="TWC";
		class FunctionsMilan
		{
			file="ffaa_estatico\script";
			class AddMilanMissile
			{
			};
			class RemoveMilanMissile
			{
			};
			class AssembleMilan
			{
			};
			class DisassembleMilan
			{
			};
		};
	};
};
class Extended_PostInit_EventHandlers
{
	class TWC_MILAN_INIT
	{
		init="execVM '\ffaa_estatico\script\init.sqf';";
	};
};

class CfgAmmo
{
	class MissileBase;
	class ffaa_estatico_m_milan: MissileBase
	{
		model="\A3\weapons_f\launchers\nlaw\nlaw_rocket.p3d";
		hit=550;
		indirectHit=20;
		indirectHitRange=2;
		cost=500;
		irLock=1;
		airLock=0;
		laserLock=1;
		manualControl=1;
		maxControlRange=6000;
		soundHit1[]=
		{
			"ffaa_estatico\sound\explosion1.wss",
			3.1622801,
			1,
			2200
		};
		soundHit2[]=
		{
			"ffaa_estatico\sound\explosion2.wss",
			3.1622801,
			1,
			2200
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.5,
			"soundHit2",
			0.5
		};
		effectsMissileInit="RocketBackEffectsRPG";
		initTime=0;
		trackOversteer=1;
		trackLead=1;
		timeToLive=23;
		maneuvrability=12;
		simulationStep=0.0020000001;
		sideAirFriction=0.2;
		maxSpeed=200;
		thrustTime=4;
		thrust=150;
		fuseDistance=50;
		effectsMissile="missile2";
		whistleDist=4;
		weaponLockSystem="2 + 16";
	};
};
class CfgMagazines
{
	class VehicleMagazine;
	class TWC_Milan_Missile_Mag: VehicleMagazine
	{
		scope=2;
		displayName="Misil Milan";
		ammo="ffaa_estatico_M_milan";
		initSpeed=55.1688;
		count=1;
		maxLeadSpeed=10;
		nameSound="missiles";
	};
};
class cfgWeapons
{
	class MissileLauncher;
	class TWC_Milan_Weapon: MissileLauncher
	{
		displayName="Milan";
		minRange=10;
		minRangeProbab=0.60000002;
		midRange=1000;
		midRangeProbab=0.69999999;
		maxRange=2000;
		maxRangeProbab=0.001;
		reloadTime=1;
		magazines[]=
		{
			"TWC_Milan_Missile_Mag"
		};
		cursorAim="";
		cursorSize=1;
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			weaponSoundEffect="DefaultRifle";
			begin1[]=
			{
				"ffaa_estatico\sound\spike_fire_v3_A",
				1.4125376,
				1,
				1100
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
		soundFly[]=
		{
			"ffaa_estatico\sound\rocket_fly_1",
			1,
			1.1,
			700
		};
		canLock=0;
		magazineReloadTime=3;
		aiRateOfFire=5;
		aiRateOfFireDistance=1400;
	};
	class ACE_ItemCore;
	class InventoryItem_Base_F;
	class TWC_MilanMissileItem: ACE_ItemCore
	{
		scope=2;
		picture="\ffaa_estatico\images\MilanMissile.paa";
		displayName="Milan Missile";
		descriptionShort="Missile Used in Milan";
		descriptionUse="";
		class ItemInfo: InventoryItem_Base_F
		{
			mass=200;
		};
	};
	class UK3CB_BAF_L16;
	class TWC_Milan_Tripod_Disassemabled:UK3CB_BAF_L16
	{
		author="FakeMatty";
		scope=2;
		displayName="Milan Tripod";
		picture="\ffaa_estatico\ico\staticY_CA.paa";
		icon="\ffaa_estatico\ico\icomap_backpack_ca.paa";
		mass=180;
		faction="a_units";
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]={};
			displayName="";
		};
	};
	class TWC_Milan_Launcher_Disassemabled:UK3CB_BAF_L16
	{
		scope=2;
		displayName="Milan Launcher";
		author="FakeMatty";
		picture="\ffaa_estatico\ico\staticX_CA.paa";
		icon="\ffaa_estatico\ico\icomap_backpack_ca.paa";
		mass=320;
	};
};
class WeaponCloudsMGun;
class DefaultEventhandlers;
class CfgVehicles
{
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets;
		class MainTurret;
	};
	class StaticMGWeapon: StaticWeapon
	{
	};
	class StaticATWeapon: StaticWeapon
	{
	};
	class StaticAAWeapon: StaticWeapon
	{
	};
	class StaticCannon: StaticWeapon
	{
		class ViewOptics;
	};
	class StaticGrenadeLauncher: StaticWeapon
	{
		class ViewOptics;
	};
	class StaticMortar: StaticWeapon
	{
	};
	class TWC_Milan: StaticATWeapon
	{
		vehicleClass="Static";
		scope=2;
		side=1;
		faction="a_units";
		crew="I_Soldier_F";
		armor = 10;
		typicalCargo[]=
		{
			"I_Soldier_F"
		};
		model="\ffaa_estatico\ffaa_milan_tripode.p3d";
		picture="\ffaa_estatico\ico\milan_ca.paa";
		icon="\ffaa_estatico\icomap\icomap_metis_at13_CA.paa";
		mapSize=2.5;
		displayName="MILAN Tripod";
		author="FakeMatty";
		/*class Eventhandlers: DefaultEventhandlers
		{
			init="";
			fired="(_this select 0) RemoveMagazine 'TWC_Milan_Missile_Mag'";
		};*/
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"TWC_Milan_Weapon"
				};
				magazines[]=
				{
					"TWC_Milan_Missile_Mag"
				};
				gunnerAction="Metis_Gunner";
				gunnerOpticsModel="\ffaa_estatico\2Dscope_Metis";
				gunnerOpticsEffect[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur2"
				};
				memoryPointsGetInGunner="pos_gunner_dir";
				memoryPointsGetInGunnerDir="pos_gunner";
				minTurn=-180;
				maxTurn=180;
				initTurn=0;
				minElev=-10;
				maxElev=10;
				initElev=0;
				gunnerForceOptics=1;
				class ViewGunner
				{
					initAngleX=5;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.078000002;
					minFov=0.078000002;
					maxFov=0.078000002;
					visionMode[]=
					{
						"Normal"
					};
					thermalMode[]={4,5};
				};
			};
		};
	};
	/*/
	class Bag_Base;
	class Weapon_Bag_Base: Bag_Base
	{
		class assembleInfo;
	};
	class Twc_Tripod: Weapon_Bag_Base
	{
		author="$STR_FFAA_AUTOR_FFAAMOD";
		scope=2;
		displayName="Milan Tripod";
		model="\ffaa_estatico\StaticY.p3d";
		picture="\ffaa_estatico\ico\staticY_CA.paa";
		icon="\ffaa_estatico\ico\icomap_backpack_ca.paa";
		mass=180;
		faction="ffaa";
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]={};
			displayName="";
		};
	};
	class twc_Weapon_Bag_Base: Weapon_Bag_Base
	{
		author="$STR_FFAA_AUTOR_FFAAMOD";
		model="\ffaa_estatico\StaticX.p3d";
		picture="\ffaa_estatico\ico\staticX_CA.paa";
		icon="\ffaa_estatico\ico\icomap_backpack_ca.paa";
		mass=320;
		class assembleInfo
		{
			primary=1;
			base="Twc_Tripod";
			assembleTo="";
			dissasembleTo[]={};
			displayName="";
		};
	};
	class TWC_milan_Bag: twc_Weapon_Bag_Base
	{
		scope=2;
		author="$STR_FFAA_AUTOR_FFAAMOD";
		displayName="Milan Launcher";
		class assembleInfo: assembleInfo
		{
			displayName="$STR_FFAA_TRIPODE_MILAN";
			assembleTo="TWC_Milan";
		};
	};
	/*/
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		Metis_Gunner="Metis_Gunner";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class AmovPercMstpSnonWnonDnon;
		class Metis_Gunner: Crew
		{
			file="ffaa_estatico\anim\Metis_Gunner.rtm";
			interpolateTo[]=
			{
				"KIA_SPG_Gunner",
				1
			};
		};
	};
};
class cfgMods
{
	author="FFAA MOD";
};
