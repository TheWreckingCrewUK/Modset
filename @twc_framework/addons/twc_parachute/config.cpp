class CfgPatches {
	class TWC_Parachute {
		units[] = {
			"twc_c5_hercules",
			"TWC_T10_Parachute",
			"TWC_T10_Parachute_backpack"
		};

		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"A3_Air_F",
			"A3_Characters_F",
			"A3_Weapons_F",
			"A3_Anims_F",
			"A3_Anims_F_Config_Sdr",
			"A3_Air_F_Beta",
			"CBA_XEH_A3",
			"ace_common"
		};
	};
};

class CfgFactionClasses {
	class TWC_General {
		displayName = "TWC General Operation Units";
		author = "The Wrecking Crew";
		icon = "TWClogo.paa";
		priority = 2;
		side = 1;
	};
};

class CfgFunctions {
	class TWC {
		class TWC_Paradrop {
			file = "twc_parachute\functions";

			class CanJump { };
			class JumpOut { };
			class CutChute { };
			class LandingSound { };
		};
	};
};

class CfgMovesBasic {
	class DefaultDie;
	class ManActions {
		chute_pos = "chute_pos";
	};
};

class CfgCoreData {
	cobraLight = "twc_parachute\cobraSvetlo.p3d";
	marker = "twc_parachute\obrysove svetlo.p3d";
};

class CfgMovesMaleSdr: CfgMovesBasic {
	class States {
		class Crew;
		class KIA_Para_Pilot;
		class chute_pos: Crew {
			file= "twc_parachute\data\anim\chute_pos";
			interpolateTo[]={KIA_Para_Pilot,1};
		};
	};
};

#include "CfgSounds.hpp"
#include "CfgVehicles.hpp"

class CfgVehicles {
	class Steerable_Parachute_F;
	class OH_T10_PARACHUTE: Steerable_Parachute_F {
		_generalmacro="T10_PARACHUTE";
		animationOpen="";
		animationDrop="twc_parachute\data\anim\Para_Medium_Landing.rtm";
		model="\twc_parachute\T10_Chute";
		driverAction="OH_Para_Pilot";
		picture="\A3\Air_F_Beta\Parachute_01\Data\UI\Portrait_Parachute_01_CA.paa";

		soundenviron[]= {
			"\twc_parachute\data\sound\padak_let",
			5,
			1,
			80
		};
		
		soundgetin[]= {
			"\twc_parachute\data\sound\padak_getIN",
			7,
			1,
			20
		};

		soundgetout[]= {
			"\twc_parachute\data\sound\padak_getIN",
			4,
			1,
			20
		};

		soundcrash[]= {
			"\twc_parachute\data\sound\padak_dopad",
			6,
			1,
			50
		};

		soundcrashes[]= {
			"soundCrash",
			1
		};
		soundlandcrash[]=
		{
			"\twc_parachute\data\sound\padak_dopad",
			6,
			1,
			50
		};
		soundlandcrashes[]=
		{
			"soundLandCrash",
			1
		};
		soundwatercrash[]=
		{
			"\twc_parachute\data\sound\padak_dopadvoda",
			6,
			1,
			80
		};
		soundwatercrashes[]=
		{
			"soundWaterCrash",
			1
		};
		hideweaponsdriver=0;
		showNVGCargo[]={1,1,1};
		armor=1000;
		airinfluence=0.99000001;
		author="OHally & Team";
		deltavaluehorizontal=0.011;
		deltavaluevertical=0.001;
		displayname="Steerable Parachute";
		distancelevel1=20;
		distancelevel2=40;
		duration=2;
		liftgravity=-40;
		liftthreshold=0.99000001;
		maxgravity=-10;
		maxliftduration=4;
		maxliftthrust=-40;
		maxrotationx=0.1;
		maxrotationz=0.40000001;
		maxsensitivityhorizontal=0.050000001;
		maxsensitivityvertical=0.0099999998;
		mingravity=-6;
		minliftduration=4;
		minliftthrust=-40;
		minrotationx=-0.1;
		minrotationz=-0.40000001;
		normalgravity=-8;
		openingtime=5;
		scope=1;
		thrustaccel=0.1;
		thrustdeccel=0.1;
		thrustnormal=0.1;
		turnforcescale=4.9999999e-005;
		unitinfotype="RscUnitInfoParachute";
		
		class UserActions {
			class cut_away_chute {
				userActionID=60;
				displayName="Cut Chute";
				memory=1;
				position="zamerny";
				radius=25;
				onlyForplayer=1;
				condition="alive this && driver this == player";
				statement="this execVM ""twc_parachute\data\scripts\cut_chute.sqf"";";
			};
		};
	};

	class Thing;
	class lowering_line: Thing {
		scope=1;
		side=-1;
		model="twc_parachute\lower_line.p3d";
		icon="";
		displayName="";
		nameSound="";
		destrType="DestructNo";
		simulation="thingx";
		mapSize=0;
		accuracy=0;
		armor=5;
		weight=200;
		airFriction2[]={0.30000001,0.30000001,0.30000001};
		airFriction1[]={0.30000001,0.30000001,0.30000001};
		airFriction0[]={0.30000001,0.30000001,0.30000001};
	};

	class B_Parachute;
	class B_OH_T10_Parachute: B_Parachute {
		scope=1;
		displayname="T-10";
		parachuteclass="OH_T10_Parachute";
	};

	class CUP_B_C130J_GB;
	class twc_c5_hercules: CUP_B_C130J_GB {
		scope=2;
		side=1;
		faction = "TWC_General";
		author = "CUP";
		displayname = "C5 Hercules";
		
		class TransportMagazines { };
		class TransportItems { };
		class TransportWeapons { };

		class Eventhandlers: Eventhandlers {
			// convert to vehicle add action jump out (condition being they're inside vehicle player != player)
			init = "[(_this select 0)] execVM 'twc_parachute\functions\init.sqf';";
		};
	};
};
