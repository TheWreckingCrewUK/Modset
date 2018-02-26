class CfgPatches {
	class TWC_Parachute {
		units[] = {
			"twc_c5_hercules"
		};

		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

class DefaultEventhandlers;
class Eventhandlers;

class CfgMovesBasic {
	class DefaultDie;
	class ManActions {
		OH_Para_Pilot = "OH_Para_Pilot";
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

			class JumpOut { };
			class CutChute { };
			class LandingSound { };
		};
	};
};

class CfgMovesMaleSdr: CfgMovesBasic {
	class States {
		class OH_KIA_Para_Pilot: DefaultDie {
			actions="DeadActions";
			file="twc_parachute\data\anim\KIA_Para_Pilot.rtm";
			speed=0.5;
			looped="false";
			terminal=1;
			soundEnabled=0;
			connectTo[]= {
				"DeadState",
				0.1
			};
		};
		
		class Crew;
		class OH_Para_Pilot: Crew {
			file="twc_parachute\data\anim\chute_pos.rtm";
			interpolateTo[]= {
				"KIA_Para_Pilot",
				1
			};
		};
	};
};

class CfgSounds {
	class ChuteOpen {
		name="ChuteOpen";
		sound[]= {
			"\twc_parachute\data\sound\padak_getIN.wss",
			"db+10",
			1
		};
		titles[]={};
	};
	
	class TWC_Parachute_Landing_1 {
		name = "TWC_Parachute_Landing_1";
		sound[] = {"\twc_parachute\sounds\landing1.ogg", 2, 1};
		titles[] = {};
	};

	class TWC_Parachute_Landing_2 {
		name = "TWC_Parachute_Landing_2";
		sound[] = {"\twc_parachute\sounds\landing2.ogg", 2, 1};
		titles[] = {};
	};

	class TWC_Parachute_Landing_3 {
		name = "TWC_Parachute_Landing_1";
		sound[] = {"\twc_parachute\sounds\landing3.ogg", 2, 1};
		titles[] = {};
	};

	class TWC_Parachute_Landing_4 {
		name = "TWC_Parachute_Landing_4";
		sound[] = {"\twc_parachute\sounds\landing4.ogg", 2, 1};
		titles[] = {};
	};

	class TWC_Parachute_Landing_5 {
		name = "TWC_Parachute_Landing_5";
		sound[] = {"\twc_parachute\sounds\landing5.ogg", 2, 1};
		titles[] = {};
	};

	class TWC_Parachute_Landing_6 {
		name = "TWC_Parachute_Landing_6";
		sound[] = {"\twc_parachute\sounds\landing6.ogg", 2, 1};
		titles[] = {};
	};

	class TWC_Parachute_Landing_7 {
		name = "TWC_Parachute_Landing_7";
		sound[] = {"\twc_parachute\sounds\landing7.ogg", 2, 1};
		titles[] = {};
	};

	class TWC_Parachute_Landing_8 {
		name = "TWC_Parachute_Landing_8";
		sound[] = {"\twc_parachute\sounds\landing8.ogg", 2, 1};
		titles[] = {};
	};
};

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
