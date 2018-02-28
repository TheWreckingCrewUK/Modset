class CfgVehicles {
	class B_Parachute;
	class Steerable_Parachute_F;
	class TWC_T10_Parachute: Steerable_Parachute_F {
		scope = 1;
		scopeArsenal = 0;
		side = 1;
		faction = "BLU_F";
		vehicleClass = "Air";
		crew = "B_Soldier_F";

		mapSize = 20;
		camouflage = 2;
		
		class SpeechVariants {
			class Default {
				speechSingular[] = {
					"veh_air_parachute_s"
				};

				speechPlural[] = {
					"veh_air_parachute_p"
				};
			};
		};
		
		//Ohally Edit
		distancelevel1=20;
		distancelevel2=40;
		deltavaluehorizontal=0.011;
		deltavaluevertical=0.001;
		airinfluence=0.99000001;
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
		thrustaccel=0.1;
		thrustdeccel=0.1;
		thrustnormal=0.1;
		turnforcescale=4.9999999e-005;
		unitinfotype="RscUnitInfoParachute";
		
		textSingular="$STR_A3_nameSound_veh_air_parachute_s";
		textPlural="$STR_A3_nameSound_veh_air_parachute_p";
		nameSound="veh_air_parachute_s";
		author="Deltagamer";
		_generalMacro="T10_Parachute";
		radarType = 0;
		driverCanEject = 0;
		openingTime=5;

		class ACE_Actions {
			class ACE_MainActions {
				class TWC_Parachute {
					displayName = "Cut Parachute";
					condition = "(_player == (driver _target) && (alive _target))";
					statement = "[_this] call TWC_parachute_fnc_CutChute";
					exceptions[] = {};
					icon = "\twc_parachute\UI\fall_ca.paa";
				};
			};
		};

		class TransportMagazines { };
		class TransportItems { };
		class TransportWeapons { };

		animationOpen = "A3\Air_F_Beta\Parachute_01\Data\Anim\para_opening.rtm";
		animationDrop = "A3\Air_F_Beta\Parachute_01\Data\Anim\para_landing.rtm";
		displayName = "T10 Parachute";
		getOutAction = "GetOutPara";
		audible = 0;
		castDriverShadow = 1;
		hideweaponsdriver = 0;
		driverAction = "chute_pos";
		model = "\twc_parachute\T10.p3d";
		Icon = "\twc_parachute\data\UI\icomap_Para_CA.paa";
		picture = "\twc_parachute\data\UI\Para_CA.paa";

		damageEffect = "";
		class ViewPilot {
			initFov=0.69999999;
			minFov=0.25;
			maxFov=1.1;
			initAngleX=0;
			minAngleX=-65;
			maxAngleX=85;
			initAngleY=0;
			minAngleY=-150;
			maxAngleY=150;
		};

		occludeSoundsWhenIn = 0;
		obstructSoundsWhenIn = 0;

		class Turrets {};
		class Reflectors {};

		enableGPS=0;
		threat[]={0,0,0};
	};

	class TWC_T10_Parachute_backpack: B_Parachute {
		author = "Deltagamer";
		scope = 2;
		scopeArsenal = 2;
		displayName = "T10 Parachute Bag";
		ParachuteClass = "TWC_T10_Parachute";
		maximumLoad = 0;
		mass = 10;
	};

	class Thing;
	class backpack_holder: Thing {
		scope=1;
		side=-1;
		model="twc_parachute\backpack_holder.p3d";
		icon="";
		displayName="";
		nameSound="";
		destrType="DestructNo";
		simulation="thingx";
		mapSize=0;
		accuracy=0;
		armor=5;
		weight = 200;
	};

	class T10_Landed: Thing {
		scope=1;
		side=-1;
		model="twc_parachute\T10_Landed.p3d";
		icon="";
		displayName="T10 Parachute";
		nameSound="";
		destrType="DestructNo";
		simulation="thingx";
		mapSize=0;
		accuracy=0;
		armor=5;
		weight = 200;
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
		
		class ACE_Actions {
			class ACE_MainActions {
				class TWC_Parachute {
					displayName = "Jump Out";
					condition = "[_this] call TWC_parachute_fnc_CanJump;";
					statement = "[_this] call TWC_parachute_fnc_JumpOut;";
					exceptions[] = {};
					icon = "\twc_parachute\data\UI\icomap_para_ca.paa";
				};
			};
		};
	};
};