class CfgSkeletons
{
	class Default
	{
		isDiscrete=1;
		skeletonInherit="";
		skeletonBones[]={};
	};
};
class CfgModels
{
	class Default
	{
		sections[]={};
		sectionsInherit="";
		skeletonName="";
	};
};
class CfgPatches
{
	class I44_base_w
	{
		units[]={};
		weapons[]=
		{			
			"I44_BrenMk1"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F"
		};
		version="1";
		projectName="TWC";
		author="FakeMatty";
	};
};

 class CfgMovesBasic
 {
 	class DefaultDie;
 	class ManActions
 	{
 		reloadMyWeapon = "reloadMyWeapon";	
 	};
 };
 
 class CfgGesturesMale
 {
 	class Default;
 	class States
 	{
 		class reloadMyWeapon: Default
 		{
 			file="\A3\anims_f\Data\Anim\Sdr\wop\erc\stp\rld\rfl\reloadMyWeapon.rtm";
 			looped=0;
 			speed=0.400000;
 			mask="handsWeapon";
 			headBobStrength=0.200000;
 			headBobMode=2;
 			rightHandIKBeg=1;
 			rightHandIKEnd=1;
 			leftHandIKCurve[]={0,1,0.050000,0,0.950000,0,1,1};
 		};
 	};
 };


/*
 class CfgMovesBasic
 {
 	class DefaultDie;
 	class ManActions
 	{
 		GestureReloadBren[] = {"GestureReloadBren", "gesture"};
 	};
 };

 class CfgGesturesMale
 {
 	class Default;
 	class States
 	{
		class GestureReloadMX;
		class GestureReloadLRR;
 		class GestureReloadBren: GestureReloadMX
 		{
 			file="\i44_weapon_bren\I44_reload_BrenProne.rtm";
 			looped=0;
 			speed=0.25;
 			mask="handsWeapon";
 			headBobStrength=0.200000;
 			headBobMode=2;
 			rightHandIKBeg=1;
 			rightHandIKEnd=1;
 			leftHandIKCurve[]={0,1,0.050000,0,0.950000,0,1,1};
 		};
 	};
 };
 

class CfgMovesBasic
{
	class DefaultDie;
	class InjuredMovedBase;
	class ManActions
	{
		ReloadBREN="";
	};
	class Actions
	{
		class NoActions;
		class RifleBaseStandActions;
		class RifleBaseLowStandActions: NoActions
		{
			ReloadBREN[]=
			{
				"GestureReloadBren",
				"Gesture"
			};
		};
	};
};

class CfgGesturesMale
{
	class ManActions
	{
	};
	class Default
	{
		interpolationRestart="true";
	};
	class States
	{
		class WeaponMagazineReloadStand;
		class LauncherMagazineReloadStand;
		class GestureReloadBren:Default
		{
			file="\i44_weapon_bren\animI44_reload_Bren.rtm";
			rightHandIKCurve[]={1};
			rightHandIKBeg=1;
			rightHandIKEnd=1;
			leftHandIKCurve[]={0};
			leftHandIKBeg=0;
			leftHandIKEnd=0;
			speed=0.25;
		};
	};
};

class CfgMovesMaleSdr: CfgMovesBasic
{
	skeletonName="OFP2_ManSkeleton";
	gestures="CfgGesturesMale";
	class StandBase;
	class TransAnimBase;
	class Default;
	class States
	{
		class GestureReloadBren: Default
		{
			file="\I44_Weapon_Bren\anim\I44_reload_Bren.rtm";
			rightHandIKCurve[]={1};
			rightHandIKBeg=1;
			rightHandIKEnd=1;
			leftHandIKCurve[]={0};
			leftHandIKBeg=0;
			leftHandIKEnd=0;
			speed=0.25;
		};
	};
};



*/

class cfgAmmo
{
	class Default;
	class BulletCore;
	class RocketCore;
	class ShellCore;
	class TimeBombCore;
	class MineCore;
	class FlareCore;
	class LaserBombCore;
	class BulletBase;
	class Grenade;
	class GrenadeHand;
	class SmokeShell;
	class RocketBase;
	class ShellBase;
	class TimeBomb;
	class Mine;
	class FlareBase;
	class I44_B_77x56R_Ball: BulletBase
	{
		hit="7.2*				1.1";
		typicalSpeed=744;
		airFriction=-0.00105;
		caliber=1;
		airLock=1;
		model="\ca\Weapons\Data\bullettracer\tracer_red";
		tracerScale=1;
		tracerStartTime="0.092/2";
		tracerEndTime="1.11*1.25";
	};
};
class CfgMagazines
{
	class Default;
	class CA_Magazine;
	class CA_LauncherMagazine;
	class VehicleMagazine;
	class I44_30rd_77x56R_Ball_Bren: CA_Magazine
	{
		scope=2;
		displayName="Bren 30rd Ball";
		picture="\I44_Weapon_Bren\Pics\m_bren.paa";
		ammo="I44_B_77x56R_Ball";
		count=30;
		initSpeed=744;
		I44_weight=1.5;
	};
	class I44_30rd_77x56R_Tracer_Bren: I44_30rd_77x56R_Ball_Bren
	{
		displayName="Bren 30rd Tracer";
		tracersEvery=1;
		I44_weight=1.5;
	};
	class I44_30rd_77x56R_Mix_Bren: I44_30rd_77x56R_Ball_Bren
	{
		displayName="Bren 30rd Mix";
		tracersEvery=4;
		lastRoundsTracer=4;
		I44_weight=1.5;
	};
};
class Mode_SemiAuto
{
};
class Mode_Burst: Mode_SemiAuto
{
};
class Mode_FullAuto: Mode_SemiAuto
{
};
class cfgWeapons
{
	class Default;
	class RifleCore;
	class MGunCore;
	class PistolCore;
	class LauncherCore;
	class GrenadeCore;
	class CannonCore;
	class Rifle;
	class GrenadeLauncher;
	class I44_MG: Rifle
	{
		scope=0;
		displayName="Machine Gun";
		cursor="RifleCursor";
		cursorAim="\ca\Weapons\Data\clear_empty";
		value=4;
		class OpticsModes
		{
			class IronSights
			{
				opticsID=1;
				useModelOptics=0;
				opticsZoomMin="0.25/1";
				opticsZoomMax="0.25/0.25";
				opticsZoomInit="0.25/0.7";
				opticsPPEffects[]=
				{
					"OpticsBlur1"
				};
				memoryPointCamera="eye";
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				distanceZoomMin=500;
				distanceZoomMax=500;
				cameraDir="";
				visionMode[]={};
				discreteDistance[]={500};
				discreteDistanceInitIndex=0;
			};
		};
		dexterity=0.5;
		dispersion="0.30/100";
		aiDispersionCoefX=7.5;
		aiDispersionCoefY=6;
		magazineReloadTime=3;
	};
	class I44_BrenMk1: I44_MG
	{
		scope=2;
		displayName="Bren Gun Mk1";
		model="\I44_Weapon_Bren\I44_weapon_BrenMk1.p3d";
		picture="\I44_Weapon_Bren\Pics\Bren.paa";
		uiPicture="\I44_Weapon_Bren\Pics\Bren.paa";
		dexterity="1/(4.0313+0.6592) * 1.5";
		weaponInfoType="RscWeaponZeroing";
		recoil="recoil_zafir";
		reloadAction="GestureReloadMMG01";
		
		class OpticsModes: OpticsModes
		{
			class IronSights: IronSights
			{
				distanceZoomMin=500;
				distanceZoomMax=500;
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
				discreteDistanceInitIndex=4;
			};
		};
		magazines[]=
		{
			"I44_30rd_77x56R_Mix_Bren",
			"I44_30rd_77x56R_Tracer_Bren",
			"I44_30rd_77x56R_Ball_Bren"
		};
		reloadMagazineSound[]=
		{
			"\I44_Weapon_Bren\sounds\Bren_reload",
			0.0005623413,
			1,
			20
		};
		modes[]=
		{
			"FullAuto"
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound", "SilencedSound"};
			
			
			begin1[]=
			{
				"\I44_sounds_w\Bren_shoot",
				10,
				1,
				1000
			};
			begin2[]=
			{
				"\I44_Weapon_Bren\sounds\Bren_shoot2",
				10,
				1,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				0.5,
				"begin2",
				0.5
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CUP_M240_Closure_SoundSet",
					"CUP_M240_Shot_SoundSet",
					"CUP_mmg1_Tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]={"A3\sounds_f\weapons\silenced\silent-18", db-2, 1,100};
				begin2[]={"A3\sounds_f\weapons\silenced\silent-19", db-2, 1,100};
				begin3[]={"A3\sounds_f\weapons\silenced\silent-11", db-2, 1,100};
				soundBegin[]={"begin1",0.333, "begin2",0.333, "begin3",0.333};
			};
			soundBurst=0;
			reloadTime="1/(500 / 60)";
			recoil="recoil_auto_mk200";
			recoilProne="recoil_auto_prone_mk200";
			dispersion="0.35/100";
			minRangeProbab=0;
			midRangeProbab=0;
			maxRangeProbab=0;
			
		};
		class Library
		{
			libTextDesc="BrenMk1";
		};
	};
};