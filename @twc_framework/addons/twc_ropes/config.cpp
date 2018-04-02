class CfgPatches {
	class TWC_Ropes {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.8;

		requiredAddons[] = {
			"ace_interaction"
		};

		author[] = {};
		authorUrl = "";
		version = "1";
		versionStr = "1";
		versionAr[] = {1};
	};
};

class CfgFunctions {
	class TWC_Ropes {
		class init {
			file = "twc_ropes\functions";
			
			class init {};
			class adjustMass {};
			class areRopesDeployed {};
			class attachRopes {};
			class canAttachRope {};
			class canDropRope {};
			class canPickupRope {};
			class canDeployRopes {};
			class deployRopes {};
			class dropRopes {};
			class extendRopes {};
			class findNearbyCargoHeli {};
			class getLiftCapability {};
			class pickUpRopes {};
			class releaseCargo {};
			class retractRopes {};
			class setMass {};
			class shortenRopes {};
		};
	};
};

class Extended_InitPost_EventHandlers {
	class CAManBase {
		class TWC_Ropes_InitPos_eh {
			init = "[_this] call twc_ropes_fnc_init;";
		};
	};
};

class CfgVehicles {
	class Air;
	class Helicopter: Air {
		class ACE_SelfActions {
			class TWC_Deploy_Ropes {
				displayName = "Deploy Ropes";
				condition = "!(_target getVariable [""twc_rope_cargo_ropes_deployed"", false]) && (driver (_target)) isEqualTo player";
				exceptions[] = {};
				statement = "";
				icon = "\twc_ropes\UI\rope.paa";
				showDisabled = 1;
				
				class TWC_Deploy_Ropes_5m {
					displayName = "Deploy Ropes (5m)";
					condition = "!(_target getVariable [""twc_rope_cargo_ropes_deployed"", false]) && (driver (_target)) isEqualTo player";
					exceptions[] = {};
					statement = "[(vehicle _player), 5] call twc_ropes_fnc_deployRopes";
					icon = "\twc_ropes\UI\5.paa";
				};
				
				class TWC_Deploy_Ropes_10m {
					displayName = "Deploy Ropes (10m)";
					condition = "!(_target getVariable [""twc_rope_cargo_ropes_deployed"", false]) && (driver (_target)) isEqualTo player";
					exceptions[] = {};
					statement = "[(vehicle _player), 10] call twc_ropes_fnc_deployRopes";
					icon = "\twc_ropes\UI\10.paa";
				};
				
				class TWC_Deploy_Ropes_15m {
					displayName = "Deploy Ropes (15m)";
					condition = "!(_target getVariable [""twc_rope_cargo_ropes_deployed"", false]) && (driver (_target)) isEqualTo player";
					exceptions[] = {};
					statement = "[(vehicle _player), 15] call twc_ropes_fnc_deployRopes";
					icon = "\twc_ropes\UI\15.paa";
				};
			};

			// Todo: Extend & Shorten Ropes, once deployed
			/* class TWC_Extend_Ropes {
				displayName = "Extend Ropes (+5m)";
				condition = "(_target getVariable [""twc_rope_cargo_ropes_deployed"", false]) && (driver (_target)) isEqualTo player && (ropeLength (ropes (vehicle player) select 0)) <= 15";
				exceptions[] = {};
				statement = "[vehicle player, 5] call twc_ropes_fnc_extendRopes";
				icon = "\twc_ropes\UI\extend.paa";
			}; */

			class TWC_Release_Cargo {
				displayName = "Release Cargo";
				condition = "(_target getVariable [""twc_rope_cargo_ropes_deployed"", false]) && (driver (_target)) isEqualTo player && (count ropeAttachedObjects (vehicle _player)) > 0";
				exceptions[] = {};
				statement = "[vehicle player] call twc_ropes_fnc_releaseCargo";
				icon = "\twc_ropes\UI\release.paa";
			};

			class TWC_Retract_Ropes {
				displayName = "Retract Ropes";
				condition = "(_target getVariable [""twc_rope_cargo_ropes_deployed"", false]) && (driver (_target)) isEqualTo player && (count ropeAttachedObjects (vehicle _player)) == 0";
				exceptions[] = {};
				statement = "[vehicle player] call twc_ropes_fnc_retractRopes";
				icon = "\twc_ropes\UI\retract.paa";
			};
		};
	};
};