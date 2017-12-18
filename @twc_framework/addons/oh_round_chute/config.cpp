class CfgPatches {
	class parachute {
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};

class DefaultEventhandlers;

class CfgMovesBasic {
	class DefaultDie;
	class ManActions {
		OH_Para_Pilot = "OH_Para_Pilot";
	};
};

class CfgFunctions {
	class TWC {
		class Func {
			file="oh_round_chute\data\scripts";
			class Jumpout {};
		};
	};
};

class CfgMovesMaleSdr: CfgMovesBasic {
	class States {
		class OH_KIA_Para_Pilot: DefaultDie {
			actions="DeadActions";
			file="oh_round_chute\data\anim\KIA_Para_Pilot.rtm";
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
			file="oh_round_chute\data\anim\chute_pos.rtm";
			interpolateTo[]= {
				"KIA_Para_Pilot",
				1
			};
		};
	};
};

class Extended_InitPost_EventHandlers {
	class Air {
		class oh_jump_init {
			init = "[_this select 0] execVM ""oh_round_chute\data\scripts\init.sqf"";";
		};
	};
};

class CfgSounds {
	class ChuteOpen {
		name="ChuteOpen";
		sound[]= {
			"\oh_round_chute\data\sound\padak_getIN.wss",
			"db+10",
			1
		};
		titles[]={};
	};
};

class CfgVehicles {
	class Steerable_Parachute_F;
	class OH_T10_PARACHUTE: Steerable_Parachute_F {
		_generalmacro="T10_PARACHUTE";
		animationOpen="";
		animationDrop="oh_round_chute\data\anim\Para_Medium_Landing.rtm";
		model="\oh_round_chute\T10_Chute";
		driverAction="OH_Para_Pilot";
		picture="\A3\Air_F_Beta\Parachute_01\Data\UI\Portrait_Parachute_01_CA.paa";

		soundenviron[]= {
			"\oh_round_chute\data\sound\padak_let",
			5,
			1,
			80
		};
		
		soundgetin[]= {
			"\oh_round_chute\data\sound\padak_getIN",
			7,
			1,
			20
		};

		soundgetout[]= {
			"\oh_round_chute\data\sound\padak_getIN",
			4,
			1,
			20
		};

		soundcrash[]= {
			"\oh_round_chute\data\sound\padak_dopad",
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
			"\oh_round_chute\data\sound\padak_dopad",
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
			"\oh_round_chute\data\sound\padak_dopadvoda",
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
				statement="this execVM ""oh_round_chute\data\scripts\cut_chute.sqf"";";
			};
		};
	};

	class Thing;
	class lowering_line: Thing {
		scope=1;
		side=-1;
		model="oh_round_chute\lower_line.p3d";
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
};
